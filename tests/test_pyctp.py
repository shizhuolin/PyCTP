#!/usr/bin/env python
# -*- coding: utf-8 -*-
# pylint: disable=useless-object-inheritance
# pylint: disable=super-with-arguments
# pylint: disable=consider-using-f-string
# pylint: disable=too-few-public-methods
# pylint: disable=too-many-public-methods
# pylint: disable=too-many-lines
# pylint: disable=too-many-instance-attributes
# pylint: disable=too-many-locals
# pylint: disable=too-many-statements
# pylint: disable=too-many-arguments
# pylint: disable=too-many-branches
# pylint: disable=too-many-positional-arguments
"""
Example and test code for PyCTP.

Created on Sat Jul 30 17:19:21 2025

@author: zhuolin
"""
from __future__ import print_function

import os
import sys
import logging
import threading
import PyCTP


logger = logging.getLogger(__name__)


class ReadonlyModuleWrapper(object):
    """Read-only wrapper for module objects."""

    def __init__(self, wrapped):
        self._wrapped = wrapped

    def __getattr__(self, key):
        """Forward attribute access to the wrapped module."""
        return getattr(self._wrapped, key)

    def __setattr__(self, key, value):
        """Block attribute assignment except for internal `__wrapped`."""
        if key == "_wrapped":
            super(ReadonlyModuleWrapper, self).__setattr__(key, value)
        else:
            raise AttributeError("Module attributes are read-only")

    def __delattr__(self, key):
        """Block attribute deletion."""
        raise AttributeError("Module attributes are read-only")


PyCTP = ReadonlyModuleWrapper(PyCTP)  # pylint: disable=invalid-name


class CTPEvent(object):
    """The Event for ctp response. convert async to sync."""

    def __init__(self, request_id=0):
        self.response = []
        self.info = PyCTP.CThostFtdcRspInfoField()
        self.request_id = request_id
        self.event = threading.Event()
        self.event.clear()

    def update(self, data, info, request_id, is_last):
        """Update Event data and status.

        Parameters
        ----------
        data : Any
            Response data.
        info : PyCTP.CThostFtdcRspInfoField
            Response error info.
        request_id : int
            Request identity, its auto-incrementing number.
        is_last : bool
            True if this is last data response. indicating no more data will
            follow. False otherwise.
        """
        if self.request_id == request_id:
            if data is not None:
                self.response.append(data)
            if info is not None:
                self.info = info
            if is_last:
                self.event.set()


class CTPEventDispatcher(object):
    """Unified event dispatcher for CTP."""

    def __init__(self):
        self.__callback_queue = {}

    def add_listener(self, event_name, callback, propagation=True):
        """Register an event listener (last registered, first executed).

        Parameters
        ----------
        event_name : str
            The name of the event to listen for.
        callback : callable
            The callback function to be invoked when the event is dispatched.
        propagation : bool, optional
            If True, propagation continues to subsequent listeners.
            If False, propagation stops after this callback and no further
            listeners will be executed. Default is True.
        """
        if event_name not in self.__callback_queue:
            self.__callback_queue[event_name] = []
        self.__callback_queue[event_name].insert(0, (callback, propagation))

    def add_once_listener(self, event_name, callback, propagation=True):
        """Register a one-time event listener (auto-removed after execution).

        Parameters
        ----------
        event_name : str
            The name of the event to listen for.
        callback : callable
            The callback function to be invoked when the event is dispatched.
        propagation : bool, optional
            If True, propagation continues to subsequent listeners.
            If False, propagation stops after this callback and no further
            listeners will be executed. Default is True.
        """
        def wrapper(*args, **kwargs):
            callback(*args, **kwargs)
            self.remove_listener(event_name, wrapper)
        self.add_listener(event_name, wrapper, propagation)

    def remove_listener(self, event_name='', callback=None):
        """Remove one or more event listeners.

        Parameters
        ----------
        event_name : str, optional
            The name of the event. If provided, listeners for this event
            are removed. If empty, all listeners for all events are cleared.
        callback : callable, optional
            The specific callback to remove. If provided, only this callback
            is removed from the specified event. If None, all callbacks for
            the specified event are removed. Default is None.
        """
        if event_name:
            if callback:
                self.__callback_queue[event_name] = [
                    (cb, prop)
                    for cb, prop in self.__callback_queue[event_name]
                    if cb != callback]
            else:
                self.__callback_queue[event_name] = []
        else:
            self.__callback_queue.clear()

    def get_handler(self, name):
        """Get the event handler for the specified event.

        Parameters
        ----------
        name : str
            The name of the event.

        Returns
        -------
        callable or None
            The handler function for the event, or None if the event
            has no registered listeners.
        """
        return self.dispatch(name)

    def dispatch(self, event_name):
        """Look up and return the event handler for the specified event.

        Parameters
        ----------
        event_name : str
            The name of the event.

        Returns
        -------
        callable or None
            A handler function that, when called, invokes all registered
            listeners in order. Returns None if no listeners are registered
            for the event.
        """
        try:
            callbacks = self.__callback_queue[event_name]
        except KeyError:
            return None

        def handler(*args, **kwargs):
            for callback, propagation in callbacks:
                callback(*args, **kwargs)
                if not propagation:
                    break
        return handler


class CTPMarketAPI(object):
    """行情API."""

    def __init__(self, flow_path=b'', is_using_udp=False, is_multicast=False,
                 is_production_mode=True):
        """初始化并创建行情API客户端.

        Parameters
        ----------
        flow_path : bytes, optional
            存贮订阅信息文件的目录，默认为当前目录.
        is_using_udp : bool, optional
            是否使用 UDP 协议传输行情数据.
            True,使用 UDP.
            False,使用 TCP. 默认为 False.
        is_multicast : bool, optional
            是否使用组播接收行情数据.
            True,启用组播模式.
            False,使用单播. 默认为 False.
        is_production_mode : bool, optional
            是否使用生产版本的 API。
            True,使用生产版 API. 默认为 True.
            False,使用测评版 API.
        """
        self.event_dispatcher = CTPEventDispatcher()
        self.api = PyCTP.CThostFtdcMdApi.CreateFtdcMdApi(flow_path,
                                                         is_using_udp,
                                                         is_multicast,
                                                         is_production_mode)
        self._timeout = 30
        self._request_id = 0
        # self._is_logined = False
        self._broker_id = b''
        self._user_id = b''
        # self._password = b''

        def callback_on_front_disconnected(reason):
            """当客户端与交易后台通信连接断开时，该方法被调用.

            当发生这个情况后，API会自动重新连接，客户端可不做处理.

            Parameters
            ----------
            reason : int
                错误原因.
                0x1001 网络读失败
                0x1002 网络写失败
                0x2001 接收心跳超时
                0x2002 发送心跳失败
                0x2003 收到错误报文
            """
            logger.warning('CThostFtdcMdApi::OnFrontDisconnected(%s)',
                           hex(reason))
        self.event_dispatcher.add_listener('OnFrontDisconnected',
                                           callback_on_front_disconnected)

        def callback_on_rsp_error(info, request_id, is_last):
            """错误应答.

            Parameters
            ----------
            info : PyCTP.CThostFtdcRspInfoField
                响应信息.
            request_id : int
                请求编号.
            is_last : bool
                是否为最后一个数据包.
                True,最后一条响应.
                False,后续还有数据.
            """
            logger.error(('CThostFtdcMdApi::OnRspError'
                          '({ErrorID:%d, ErrorMsg:%s}'
                          ', RequestID:%d, IsLast:%s)'),
                         info.ErrorID, bytes_to_text(info.ErrorMsg),
                         request_id, is_last)
        self.event_dispatcher.add_listener('OnRspError', callback_on_rsp_error)

    def __getattr__(self, name):
        """拦截CThostFtdcMdSpi回调访问,并尝试从事件分发器获取处理器.

        本方法仅拦截以下前缀的回调:
        - OnRsp*  : 请求响应(如 OnRspUserLogin, OnRspSubMarketData, ...)
        - OnFront*: 前端状态回调(如 OnFrontConnected, OnFrontDisconnected, ...)

        OnRtn* 系列回调(如 OnRtnDepthMarketData)不经过此拦截器,以规避高频调用带来
        的性能开销,请在子类中直接重写.

        Returns
        -------
        callable
            从事件分发器中获取的处理器.

        Raises
        ------
        AttributeError
            如果属性名不是以 OnRsp 或 OnFront 开头,或分发器中未注册对应处理器.
        """
        if name.startswith(('OnRsp', 'OnFront')):
            handler = self.event_dispatcher.get_handler(name)
            if handler:
                return handler
        raise AttributeError("'%s' object has no attribute '%s'"
                             % (self.__class__.__name__, name))

    def __del__(self):
        """析构时自动释放资源."""
        self.api.Release()

    def _inc_request_id(self):
        """自增并返回请求编号.

        行情API的请求编号似乎并未有效传递，因此这里注释掉编号自增，始终传递初始编号.

        Returns
        -------
        int
            请求编号.
        """
        # self._request_id += 1
        return self._request_id

    def get_api_version(self):
        """获取API的版本信息.

        Returns
        -------
        bytes
            获取到的版本号.
        """
        return self.api.GetApiVersion()

    def get_trading_day(self):
        """获取当前交易日.

        只有登录成功后,才能得到正确的交易日.

        Returns
        -------
        bytes
            获取到的交易日.
        """
        return self.api.GetTradingDay()

    def connect(self, front_addr):
        """连接前置服务器.

        RegisterSpi 注册回调接口
        RegisterFront 注册前置机网络地址
        Init 初始化运行环境,只有调用后,接口才开始工作

        Parameters
        ----------
        front_addr : bytes
            网络地址的格式为：“protocol://ipaddress:port”，
            如：”tcp://127.0.0.1:17001”。
            “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
        """
        self.api.RegisterSpi(self)
        self.api.RegisterFront(front_addr)
        self.api.Init()
        rsp = CTPEvent()
        # 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用
        event_name = 'OnFrontConnected'

        def callback_for_on_front_connected():
            rsp.event.set()
        self.event_dispatcher.add_listener(event_name,
                                           callback_for_on_front_connected)
        ret = 0 if rsp.event.wait(self._timeout) else -4
        self.event_dispatcher.remove_listener(event_name,
                                              callback_for_on_front_connected)
        return ret

    def login(self, broker_id, user_id, password):
        """用户登录请求.

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        password : bytes
            密码.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcReqUserLoginField()
        req.BrokerID = broker_id
        req.UserID = user_id
        req.Password = password
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUserLogin'  # 登录请求响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqUserLogin(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        if ret == 0:
            # self._investor_id = True
            self._broker_id = req.BrokerID
            self._user_id = req.UserID
            # self._password = req.Password
        return ret

    def logout(self):
        """登出请求.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcUserLogoutField()
        req.BrokerID = self._broker_id
        req.UserID = self._user_id
        rsp = CTPEvent(self._inc_request_id())
        event_name_for_callback = 'OnRspError'  # 错误应答
        event_name_for_logout = 'OnRspUserLogout'  # 登出请求响应

        def callback(info, request_id, is_last):
            rsp.update(None, info, request_id, is_last)
        self.event_dispatcher.add_listener(event_name_for_callback, callback,
                                           False)
        self.event_dispatcher.add_listener(event_name_for_logout, rsp.update)
        ret = self.api.ReqUserLogout(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name_for_callback,
                                              callback)
        self.event_dispatcher.remove_listener(event_name_for_logout,
                                              rsp.update)
        if ret == 0:
            pass
            # self._investor_id = False
        else:
            logger.error(bytes_to_text(rsp.info.ErrorMsg))
        return ret

    def subscribe_market_data(self, instrument_id):
        """订阅行情.

        Parameters
        ----------
        instrument_id : list[bytes]
            要订阅行情的合约列表.

        Returns
        -------
        int or list[PyCTP.CThostFtdcSpecificInstrumentField]
            返回类型取决于操作结果:
            - 成功 ： list,指定的合约列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspSubMarketData'  # 订阅行情应答
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.SubscribeMarketData(instrument_id, len(instrument_id))
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def unsubscribe_market_data(self, instrument_id):
        """退订行情.

        Parameters
        ----------
        instrument_id : list[bytes]
            要退订行情的合约列表.

        Returns
        -------
        int or list[PyCTP.CThostFtdcSpecificInstrumentField]
            返回类型取决于操作结果:
            - 成功 ： list,指定的合约列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUnSubMarketData'  # 取消订阅行情应答
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.UnSubscribeMarketData(instrument_id, len(instrument_id))
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response


class CTPTraderAPI(object):
    """交易API."""

    def __init__(self, flow_path=b'', is_production_mode=True):
        """初始化并创建交易API客户端.

        Parameters
        ----------
        flow_path : bytes, optional
            存贮订阅信息文件的目录，默认为当前目录.
        is_production_mode : bool, optional
            是否使用生产版本的 API。
            True,使用生产版 API. 默认为 True.
            False,使用测评版 API.
        """
        self.event_dispatcher = CTPEventDispatcher()

        self.api = PyCTP.CThostFtdcTraderApi.CreateFtdcTraderApi(
            flow_path,
            is_production_mode)

        self._timeout = 30
        self._request_id = 0

        # self._is_logined = False

        self._broker_id = b''
        self._user_id = b''
        # self._password = b''
        self._order_ref = 0
        self._investor_id = b''

        def callback_on_front_disconnected(reason):
            """当客户端与交易后台通信连接断开时，该方法被调用.

            当发生这个情况后，API会自动重新连接，客户端可不做处理。

            Parameters
            ----------
            reason : int
                错误原因.
                0x1001 网络读失败
                0x1002 网络写失败
                0x2001 接收心跳超时
                0x2002 发送心跳失败
                0x2003 收到错误报文
            """
            logger.warning('CThostFtdcTraderApi::OnFrontDisconnected(%s)',
                           hex(reason))
        self.event_dispatcher.add_listener('OnFrontDisconnected',
                                           callback_on_front_disconnected)

        def callback_on_rsp_error(info, request_id, is_last):
            """错误应答.

            Parameters
            ----------
            info : PyCTP.CThostFtdcRspInfoField
                响应信息.
            request_id : int
                请求编号.
            is_last : bool
                是否为最后一个数据包.
                True,最后一条响应.
                False,后续还有数据.
            """
            logger.error(('CThostFtdcTraderApi::OnRspError'
                          '({ErrorID:%d, ErrorMsg:%s}'
                          ', RequestID:%d, IsLast:%s)'),
                         info.ErrorID, bytes_to_text(info.ErrorMsg),
                         request_id, is_last)
        self.event_dispatcher.add_listener('OnRspError', callback_on_rsp_error)

    def __getattr__(self, name):
        """拦截CThostFtdcTraderSpi回调访问,并尝试从事件分发器获取处理器.

        本方法仅拦截以下前缀的回调:
        - OnRsp*  : 请求响应(如 OnRspUserLogin, OnRspAuthenticate, ...)
        - OnFront*: 前端状态回调(如 OnFrontConnected, OnFrontDisconnected, ...)

        OnRtn*,OnErrRtn* 系列回调(如 OnRtnOrder，OnErrRtnOrderInsert)
        不经过此拦截器,以规避高频调用带来的性能开销,请在子类中直接重写.

        Returns
        -------
        callable
            从事件分发器中获取的处理器.

        Raises
        ------
        AttributeError
            如果属性名不是以 OnRsp 或 OnFront 开头,或分发器中未注册对应处理器.
        """
        if name.startswith(('OnRsp', 'OnFront')):
            handler = self.event_dispatcher.get_handler(name)
            if handler:
                return handler
        raise AttributeError("'%s' object has no attribute '%s'"
                             % (self.__class__.__name__, name))

    def __del__(self):
        """析构时自动释放资源."""
        self.api.Release()

    def _inc_request_id(self):
        """自增并返回请求编号.

        Returns
        -------
        int
            请求编号.
        """
        self._request_id += 1
        return self._request_id

    def _inc_order_ref(self):
        """递增报单引用.

        Returns
        -------
        int
            报单引用.
        """
        order_ref = self._order_ref
        self._order_ref += 1
        return order_ref

    def set_investor_id(self, investor_id):
        """设置投资者代码.

        Parameters
        ----------
        investor_id : bytes
            投资者代码.

        Returns
        -------
        bytes
            投资者代码.
        """
        self._investor_id = investor_id
        return self._investor_id

    def get_api_version(self):
        """获取API的版本信息.

        Returns
        -------
        bytes
            获取到的版本号.
        """
        return self.api.GetApiVersion()

    def get_trading_day(self):
        """获取当前交易日.

        只有登录成功后,才能得到正确的交易日.

        Returns
        -------
        bytes
            获取到的交易日.
        """
        return self.api.GetTradingDay()

    def connect(self, front_addr):
        """连接前置服务器.

        RegisterSpi 注册回调接口
        SubscribePrivateTopic 订阅私有流,从上次收到的续传
        SubscribePublicTopic 订阅公共流,从上次收到的续传
        RegisterFront 注册前置机网络地址
        Init 初始化运行环境,只有调用后,接口才开始工作

        Parameters
        ----------
        front_addr : bytes
            网络地址的格式为：“protocol://ipaddress:port”，
            如：”tcp://127.0.0.1:17001”。
            “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
        """
        self.api.RegisterSpi(self)
        self.api.SubscribePrivateTopic(PyCTP.THOST_TERT_RESUME)
        self.api.SubscribePublicTopic(PyCTP.THOST_TERT_RESUME)
        self.api.RegisterFront(front_addr)
        self.api.Init()
        rsp = CTPEvent()
        # 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用
        event_name = 'OnFrontConnected'

        def callback_for_on_front_connected():
            rsp.event.set()
        self.event_dispatcher.add_listener(event_name,
                                           callback_for_on_front_connected)
        ret = 0 if rsp.event.wait(self._timeout) else -4
        self.event_dispatcher.remove_listener(event_name,
                                              callback_for_on_front_connected)
        return ret

    def request_authenticate(self, broker_id, user_id, user_product_info,
                             auth_code, app_id):
        """客户端认证.

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        user_product_info : bytes
            用户端产品信息.
        auth_code : bytes
            认证码.
        app_id : bytes
            App代码.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcReqAuthenticateField()
        req.BrokerID = broker_id
        req.UserID = user_id
        req.UserProductInfo = user_product_info
        req.AuthCode = auth_code
        req.AppID = app_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspAuthenticate'  # 客户端认证响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqAuthenticate(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret

    def login(self, broker_id, user_id, password):
        """用户登录请求.

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        password : bytes
            密码.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcReqUserLoginField()
        req.BrokerID = broker_id
        req.UserID = user_id
        req.Password = password
        req.LoginRemark = b'test'
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUserLogin'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqUserLogin(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        if ret == 0:
            # self._is_logined = True
            self._broker_id = req.BrokerID
            self._user_id = req.UserID
            # self._password = req.Password
            self._order_ref = int(rsp.response[0].MaxOrderRef)
        return ret

    def logout(self):
        """登出请求.

        Returns
        -------
        int
            状态码:
             0 : 成功
            -4 : 超时(未在规定时间内收到回调)
             n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcUserLogoutField()
        req.BrokerID = self._broker_id
        req.UserID = self._user_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspUserLogout'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqUserLogout(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        if ret == 0:
            pass
            # self._is_logined = False
        return ret

    def submit_user_system_info(self, broker_id, user_id, app_id):
        """上报用户终端信息，用于中继服务器操作员登录模式.

        操作员登录后，可以多次调用该接口上报客户信息

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        app_id : bytes
            App代码.

        Returns
        -------
        int
            具体错误码由底层API决定.
        """
        system_info = PyCTP.CTP_GetSystemInfo()
        user_system_info = PyCTP.CThostFtdcUserSystemInfoField()
        user_system_info.BrokerID = broker_id
        user_system_info.UserID = user_id
        user_system_info.ClientSystemInfo = system_info['SystemInfo']
        user_system_info.ClientSystemInfoLen = system_info['Length']
        user_system_info.ClientPublicIP = b'192.168.0.1'
        user_system_info.ClientIPPort = 51305
        user_system_info.ClientLoginTime = b'20190121'
        user_system_info.ClientAppID = app_id
        return self.api.SubmitUserSystemInfo(user_system_info)

    def register_user_system_info(self, broker_id, user_id, app_id):
        """注册用户终端信息，用于中继服务器多连接模式.

        需要在终端认证成功后，用户登录前调用该接口

        Parameters
        ----------
        broker_id : bytes
            经纪公司代码.
        user_id : bytes
            用户代码.
        app_id : bytes
            App代码.

        Returns
        -------
        int
            具体错误码由底层API决定.
        """
        system_info = PyCTP.CTP_GetSystemInfo()
        user_system_info = PyCTP.CThostFtdcUserSystemInfoField()
        user_system_info.BrokerID = broker_id
        user_system_info.UserID = user_id
        user_system_info.ClientSystemInfo = system_info['SystemInfo']
        user_system_info.ClientSystemInfoLen = system_info['Length']
        user_system_info.ClientPublicIP = b'192.168.0.1'
        user_system_info.ClientIPPort = 51305
        user_system_info.ClientLoginTime = b'20190121'
        user_system_info.ClientAppID = app_id
        return self.api.RegisterUserSystemInfo(user_system_info)

    def request_settlement_info_confirm(self):
        """投资者结算结果确认.

        Returns
        -------
        int or list[PyCTP.CThostFtdcSettlementInfoConfirmField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者结算结果确认信息
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcSettlementInfoConfirmField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspSettlementInfoConfirm'  # 投资者结算结果确认响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqSettlementInfoConfirm(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_exchange(self, exchange_id=b''):
        """请求查询交易所.

        Parameters
        ----------
        exchange_id : bytes, optional
            交易所代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcExchangeField]
            返回类型取决于操作结果:
            - 成功 ： list,交易所列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryExchangeField(ExchangeID=exchange_id)
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryExchange'  # 请求查询交易所响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryExchange(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_investor(self):
        """请求查询投资者.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInvestorField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInvestorField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInvestor'  # 请求查询投资者响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInvestor(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_trading_account(self):
        """请求查询资金账户.

        Returns
        -------
        int or list[PyCTP.CThostFtdcTradingAccountField]
            返回类型取决于操作结果:
            - 成功 ： list,资金账户列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryTradingAccountField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryTradingAccount'  # 请求查询资金账户响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryTradingAccount(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_depth_market_data(self, instrument_id=b''):
        """请求查询行情.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcDepthMarketDataField]
            返回类型取决于操作结果:
            - 成功 ： list,深度行情列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryDepthMarketDataField()
        req.ProductClass = PyCTP.THOST_FTDC_PC_Futures  # 期货
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryDepthMarketData'  # 请求查询行情响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryDepthMarketData(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_instrument(self, instrument_id=b''):
        """请求查询合约.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInstrumentField]
            返回类型取决于操作结果:
            - 成功 ： list,合约列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInstrumentField()
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInstrument'  # 请求查询合约响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInstrument(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_instrument_commission_rate(self, instrument_id=b''):
        """请求查询合约手续费率.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInstrumentCommissionRateField]
            返回类型取决于操作结果:
            - 成功 ： list,合约手续费率列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInstrumentCommissionRateField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        # 请求查询合约手续费率响应
        event_name = 'OnRspQryInstrumentCommissionRate'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInstrumentCommissionRate(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_instrument_margin_rate(self, instrument_id=b''):
        """ 请求查询合约保证金率.
        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInstrumentMarginRateField]
            返回类型取决于操作结果:
            - 成功 ： list,合约保证金率列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInstrumentMarginRateField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInstrumentMarginRate'  # 请求查询合约保证金率响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInstrumentMarginRate(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_investor_position(self, instrument_id=b''):
        """请求查询投资者持仓.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInvestorPositionField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者持仓列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInvestorPositionField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        event_name = 'OnRspQryInvestorPosition'  # 请求查询投资者持仓响应
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInvestorPosition(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def query_investor_position_detail(self, instrument_id=b''):
        """请求查询投资者持仓明细.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInvestorPositionDetailField]
            返回类型取决于操作结果:
            - 成功 ： list,投资者持仓明细列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        req = PyCTP.CThostFtdcQryInvestorPositionDetailField()
        req.BrokerID = self._broker_id
        req.InvestorID = self._investor_id
        req.InstrumentID = instrument_id
        rsp = CTPEvent(self._inc_request_id())
        # 请求查询投资者持仓明细响应
        event_name = 'OnRspQryInvestorPositionDetail'
        self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqQryInvestorPositionDetail(req, rsp.request_id)
        ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
                      else -4)
        self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def order_insert(self, instrument_id, action, direction, volume, price):
        """报单录入请求.

        Parameters
        ----------
        instrument_id : bytes, optional
            合约代码.
        action : bytes
            组合开平标志. typedef char TThostFtdcCombOffsetFlagType[5]
            - 开仓 PyCTP.THOST_FTDC_OF_Open '0'
            - 平仓 PyCTP.THOST_FTDC_OF_Close '1'
            - 强平 PyCTP.THOST_FTDC_OF_ForceClose '2'
            - 平今 PyCTP.THOST_FTDC_OF_CloseToday '3'
            - 平昨 PyCTP.THOST_FTDC_OF_CloseYesterday '4'
            - 强减 PyCTP.THOST_FTDC_OF_ForceOff '5'
            - 本地强平 PyCTP.THOST_FTDC_OF_LocalForceClose '6'
        direction : bytes
            买卖方向. typedef char TThostFtdcDirectionType
            - 买 PyCTP.THOST_FTDC_D_Buy '0'
            - 卖 PyCTP.THOST_FTDC_D_Sell '1'
        volume : int
            数量.
        price : float
            价格.

        Returns
        -------
        int or list[PyCTP.CThostFtdcInputOrderField]
            返回类型取决于操作结果:
            - 成功 ： list,输入报单列表
            - 失败 ： int,状态码
                      0 : 成功
                     -4 : 超时(未在规定时间内收到回调)
                      n : 失败(具体错误码由底层API决定)
        """
        input_order = PyCTP.CThostFtdcInputOrderField()
        # 经纪公司代码
        input_order.BrokerID = self._broker_id
        # 投资者代码
        input_order.InvestorID = self._investor_id
        # 合约代码
        input_order.InstrumentID = instrument_id
        # 报单引用
        input_order.OrderRef = text_to_bytes('%012d' % self._inc_order_ref())
        # 用户代码
        input_order.UserID = self._user_id
        # 报单价格条件:限价单
        input_order.OrderPriceType = PyCTP.THOST_FTDC_OPT_LimitPrice
        # 买卖方向
        input_order.Direction = direction
        # 组合开平标志
        input_order.CombOffsetFlag = action
        # 组合投机套保标志:投机
        input_order.CombHedgeFlag = PyCTP.THOST_FTDC_HF_Speculation
        # 价格
        input_order.LimitPrice = price
        # 数量
        input_order.VolumeTotalOriginal = volume
        # 有效期类型:立即完成，否则撤销
        input_order.TimeCondition = PyCTP.THOST_FTDC_TC_GFD
        # 成交量类型:任意数量
        input_order.VolumeCondition = PyCTP.THOST_FTDC_VC_AV
        # 最小成交量
        input_order.MinVolume = volume
        # 触发条件:立即
        input_order.ContingentCondition = PyCTP.THOST_FTDC_CC_Immediately
        # 强平原因:非强平
        input_order.ForceCloseReason = PyCTP.THOST_FTDC_FCC_NotForceClose
        # 自动挂起标志
        input_order.IsAutoSuspend = 0
        # 用户强平标志
        input_order.UserForceClose = 0
        rsp = CTPEvent(self._inc_request_id())
        # 报单录入请求响应并没有如预期触发，注释此代码并不会影响交易.
        # event_name = 'OnRspOrderInsert'  # 报单录入请求响应
        # self.event_dispatcher.add_listener(event_name, rsp.update)
        ret = self.api.ReqOrderInsert(input_order, rsp.request_id)
        # ret = ret or (rsp.info.ErrorID if rsp.event.wait(self._timeout)
        #              else -4)
        # self.event_dispatcher.remove_listener(event_name, rsp.update)
        return ret or rsp.response

    def OnRspOrderInsert(self,  # pylint: disable=invalid-name
                         input_order, rsp_info, request_id, is_last):
        """报单录入请求响应.

        Parameters
        ----------
        input_order : PyCTP.CThostFtdcInputOrderField
            输入报单.
        rsp_info : PyCTP.CThostFtdcRspInfoField
            响应信息.
        request_id : int
            请求编号.
        is_last : bool
            是否为最后一个数据包.
            True,最后一条响应.
            False,后续还有数据.
        """
        logger.info(('CThostFtdcTraderApi::OnRspOrderInsert'
                     '({InstrumentID:%s, OrderRef:%s}'
                     ', {ErrorID:%d, ErrorMsg:%s}, RequestID:%d, IsLast:%s)'),
                    input_order.InstrumentID,
                    input_order.OrderRef,
                    rsp_info.ErrorID,
                    bytes_to_text(rsp_info.ErrorMsg),
                    request_id, is_last)


class CTPMarket(CTPMarketAPI):
    """行情API"""

    def OnRtnDepthMarketData(self,  # pylint: disable=invalid-name
                             depth_market_data):
        """深度行情通知.

        Parameters
        ----------
        depth_market_data : PyCTP.CThostFtdcDepthMarketDataField
            深度行情
        """
        logger.info(
            ('CThostFtdcMdSpi::OnRtnDepthMarketData'
             '({InstrumentID:%s, ActionDay:%s, UpdateTime:%s, LastPrice:%f'
             ', Volume:%d, Turnover:%f, OpenInterest:%f})'),
            depth_market_data.InstrumentID,  # 合约代码
            depth_market_data.ActionDay,  # 交易日
            depth_market_data.UpdateTime,  # 最后修改时间
            depth_market_data.LastPrice,  # 最新价
            depth_market_data.Volume,  # 数量
            depth_market_data.Turnover,  # 成交金额
            depth_market_data.OpenInterest)  # 持仓量


class CTPTrader(CTPTraderAPI):
    """交易API"""

    def OnErrRtnOrderInsert(self,  # pylint: disable=invalid-name
                            input_order, rsp_info):
        """报单录入错误回报.

        Parameters
        ----------
        input_order : PyCTP.CThostFtdcInputOrderField
            输入报单.
        rsp_info : PyCTP.CThostFtdcRspInfoField
            响应信息.
        """
        logger.error(('CThostFtdcTraderApi::OnErrRtnOrderInsert'
                      '({InstrumentID:%s, OrderRef:%s}'
                      ', {ErrorID:%d, ErrorMsg:%s})'),
                     input_order.InstrumentID,
                     input_order.OrderRef,
                     rsp_info.ErrorID,
                     bytes_to_text(rsp_info.ErrorMsg))

    def OnRtnPrivateSeqNo(self, seq_no):  # pylint: disable=invalid-name
        """该方法在处理私有流之前被调用.

        Parameters
        ----------
        seq_no : int
            即将被处理的私有流的序号.
        """
        logger.info('CThostFtdcTraderApi::OnRtnPrivateSeqNo(%d)', seq_no)

    def OnRtnTrade(self, trade):  # pylint: disable=invalid-name
        """成交通知.

        Parameters
        ----------
        trade : PyCTP.CThostFtdcTradeField
            成交.
        """
        logger.info(('CThostFtdcTraderApi::OnRtnTrade'
                     '({InstrumentID:%s, OrderRef:%s, Price:%f})'),
                    trade.InstrumentID, trade.OrderRef, trade.Price)

    def OnRtnOrder(self, order):  # pylint: disable=invalid-name
        """报单通知.

        Parameters
        ----------
        order : PyCTP.CThostFtdcOrderField
            报单.
        """
        order_status_type = {
            PyCTP.THOST_FTDC_OST_AllTraded: '报单全部成交',
            PyCTP.THOST_FTDC_OST_PartTradedQueueing: '部分成交还在队列中',
            PyCTP.THOST_FTDC_OST_PartTradedNotQueueing: '部分成交不在队列中',
            PyCTP.THOST_FTDC_OST_NoTradeQueueing: '未成交还在队列中',
            PyCTP.THOST_FTDC_OST_NoTradeNotQueueing: '未成交不在队列中',
            PyCTP.THOST_FTDC_OST_Canceled: '撤单',
            PyCTP.THOST_FTDC_OST_Unknown: '未知',
            PyCTP.THOST_FTDC_OST_NotTouched: '尚未触发',
            PyCTP.THOST_FTDC_OST_Touched: '已触发'}
        logger.info(('CThostFtdcTraderApi::OnRtnOrder'
                     '({InstrumentID:%s, OrderRef:%s, OrderStatus:%s})'),
                    order.InstrumentID,
                    order.OrderRef,
                    order_status_type[order.OrderStatus])

    def OnRtnInstrumentStatus(self,  # pylint: disable=invalid-name
                              instrument_status):
        """合约交易状态通知.

        Parameters
        ----------
        instrument_status : PyCTP.CThostFtdcInstrumentStatusField
            合约状态.
        """
        instrument_status_type = {
            PyCTP.THOST_FTDC_IS_BeforeTrading: '开盘前',
            PyCTP.THOST_FTDC_IS_NoTrading: '非交易',
            PyCTP.THOST_FTDC_IS_Continous: '连续交易',
            PyCTP.THOST_FTDC_IS_AuctionOrdering: '集合竞价报单',
            PyCTP.THOST_FTDC_IS_AuctionBalance: '集合竞价价格平衡',
            PyCTP.THOST_FTDC_IS_AuctionMatch: '集合竞价撮合',
            PyCTP.THOST_FTDC_IS_Closed: '收盘',
            PyCTP.THOST_FTDC_IS_TransactionProcessing: '交易业务处理'}
        logger.info(('CThostFtdcTraderApi::OnRtnInstrumentStatus'
                     '({InstrumentID:%s, InstrumentStatus:%s})'),
                    instrument_status.InstrumentID,
                    instrument_status_type[instrument_status.InstrumentStatus])


def user_input(prompt=''):
    """Get user input from console.

    Parameters
    ----------
    prompt : str, optional
        The prompt message displayed in the console. The default is ''.

    Returns
    -------
    str
        The text entered by the user.
    """
    if sys.version_info[0] < 3:
        # Python 2
        # pylint: disable=undefined-variable
        return raw_input(prompt)  # noqa: F821
        # pylint: enable=undefined-variable
    # Python 3
    return input(prompt)


def bytes_to_text(data, encoding='gb2312', errors='replace'):
    """Convert bytes to unicode/text string.

    This function decodes byte data into a Unicode string using the specified
    encoding. It supports both Python 2 and Python 3 by handling string/bytes
    type differences internally.

    Parameters
    ----------
    data : bytes or str
        The input data to be converted to text. If already a text string,
        it is returned unchanged.
    encoding : str, optional
        The character encoding to use for decoding, e.g., 'gb2312', 'utf-8'.
        Default is 'gb2312'.
    errors : str, optional
        The error handling strategy for decoding failures.
        Common values: 'strict', 'ignore', 'replace'.
        Default is 'replace', which replaces undecodable bytes with '�'.

    Returns
    -------
    str
        The decoded text string.

    Notes
    -----
    This function provides a unified interface across Python 2 and 3:
    - Python 2: uses `unicode` type and `.decode()` method.
    - Python 3: uses `str` type and `.decode()` method.
    """
    if sys.version_info[0] < 3:
        # Python 2
        # pylint: disable=undefined-variable
        return (data if isinstance(data, unicode)  # noqa: F821
                else data.decode(encoding, errors))
        # pylint: enable=undefined-variable
    # Python 3
    return data if isinstance(data, str) else data.decode(encoding, errors)


def text_to_bytes(data, encoding='gb2312', errors='replace'):
    """Convert unicode/text string to bytes.

    This function encodes a Unicode/text string into bytes using the specified
    encoding. If the input is already bytes, it is returned unchanged.
    It supports both Python 2 and Python 3 by handling string/bytes type
    differences internally.

    Parameters
    ----------
    data : str or bytes
        The input text to be converted to bytes. If already bytes, it is
        returned unchanged.
    encoding : str, optional
        The character encoding to use for encoding, e.g., 'gb2312', 'utf-8'.
        Default is 'gb2312'.
    errors : str, optional
        The error handling strategy for encoding failures.
        Common values: 'strict', 'ignore', 'replace'.
        Default is 'replace', which replaces unencodable characters with '?'.

    Returns
    -------
    bytes
        The encoded byte string.

    Notes
    -----
    This function provides a unified interface across Python 2 and 3:
    - Python 2: uses `unicode` type and `.encode()` method.
    - Python 3: uses `str` type and `.encode()` method.
    """
    if sys.version_info[0] < 3:
        # Python 2
        # pylint: disable=undefined-variable
        return (data.encode(encoding, errors)
                if isinstance(data, unicode)  # noqa: F821
                else data)
        # pylint: enable=undefined-variable
    # Python 3
    return data.encode(encoding, errors) if isinstance(data, str) else data


def select_front_server():
    """选择要使用的测试环境.

    Returns
    -------
    tuple
        (t_front_addr, m_front_addr)
        - t_front_addr : bytes
            交易前置机网络地址.
        - m_front_addr : bytes
            行情前置机网络地址.
    """
    front_addr = [{'name': '第一套环境 - 第一组',
                   'tFrontAddr': b'tcp://182.254.243.31:30001',
                   'mFrontAddr': b'tcp://182.254.243.31:30011'},
                  {'name': '第一套环境 - 第二组',
                   'tFrontAddr': b'tcp://182.254.243.31:30002',
                   'mFrontAddr': b'tcp://182.254.243.31:30012'},
                  {'name': '第一套环境 - 第三组',
                   'tFrontAddr': b'tcp://182.254.243.31:30003',
                   'mFrontAddr': b'tcp://182.254.243.31:30013'},
                  {'name': '7*24环境',
                   'tFrontAddr': b'tcp://182.254.243.31:40001',
                   'mFrontAddr': b'tcp://182.254.243.31:40011'}]
    menu_text = '选择环境:\n'
    for idx, front in enumerate(front_addr):
        menu_text += '%d. %s\n' % (idx+1, front['name'])
        menu_text += '\t 交易前置地址:%s \n' % front['tFrontAddr']
        menu_text += '\t 行情前置地址:%s \n' % front['mFrontAddr']
    menu_text += '请输入选项 [1-4]： '
    idx = get_int_in_range(menu_text, 1, len(front_addr))
    t_front_addr = front_addr[idx-1]['tFrontAddr']
    m_front_addr = front_addr[idx-1]['mFrontAddr']
    return t_front_addr, m_front_addr


def get_int_in_range(prompt, min_val, max_val):
    """Get user input from console, limit the range of input value to number.

    Parameters
    ----------
    prompt : str, optional
        The prompt message displayed in the console. The default is ''.
    min_val : int
        Minimum allowed value (inclusive).
    max_val : int
        Maximum allowed value (inclusive).

    Returns
    -------
    int
        The number entered by the user.
    """
    while True:
        raw = user_input(prompt)
        try:
            val = int(raw)
        except ValueError:
            print("错误：请输入整数。")
            continue
        if min_val <= val <= max_val:
            return val
        print('错误：输入必须在 %d 到 %d 之间。' % (min_val, max_val))


def main():
    """Entry."""
    logging.basicConfig(
        level=logging.NOTSET,
        format=('%(levelname)s - [%(filename)s:%(lineno)d - %(funcName)s()] - '
                '%(message)s'))

    t_front_addr, m_front_addr = select_front_server()
    mode = get_int_in_range('请选择模式 (1=生产, 2=评测)： ', 1, 2)
    is_production_mode = mode == 1

    broker_id = text_to_bytes(os.getenv('TEST_BROKERID', 'Your BrokerID'))
    user_id = text_to_bytes(os.getenv('TEST_USERID', 'Your UserID'))
    password = text_to_bytes(os.getenv('TEST_PASSWORD', 'Your Password'))

    auth_code = b'0000000000000000'
    app_id = b'simnow_client_test'
    product_info = b''

    current_dir = os.path.dirname(os.path.abspath(__file__))
    flow_path = os.path.join(current_dir, 'flow/')
    if not os.path.exists(flow_path):
        os.makedirs(flow_path)
    flow_path = text_to_bytes(flow_path)

    prompt = '请确定连接模式: \n'
    prompt += '1. 直连模式 \n'
    prompt += '2. 中继服务器操作员模式(一对多模式) \n'
    prompt += '3. 中继服务器非操作员模式(多对多模式) \n'
    prompt += '请输入选项 [1-3]： '
    connect_mode = get_int_in_range(prompt, 1, 3)

    trader = CTPTrader(flow_path, is_production_mode)
    market = CTPMarket(flow_path, False, False, is_production_mode)
    print('Python版本:', sys.version)
    print('采集库版本：', PyCTP.CTP_GetDataCollectApiVersion())
    print('行情Api版本:', market.get_api_version())
    print('交易Api版本:', trader.get_api_version())
    print('行情连接前置:', market.connect(m_front_addr))
    print('交易连接前置:', trader.connect(t_front_addr))
    if connect_mode == 1:
        # 1.直连模式
        print('交易客户端认证:', trader.request_authenticate(broker_id, user_id,
                                                      product_info, auth_code,
                                                      app_id))
        print('交易账号登陆:', trader.login(broker_id, user_id, password))
    elif connect_mode == 2:
        # 2.中继服务器操作员模式(一对多模式)
        print('交易客户端认证:', trader.request_authenticate(broker_id, user_id,
                                                      product_info, auth_code,
                                                      app_id))
        print('交易账号登陆:', trader.login(broker_id, user_id, password))
        print('上报用户终端信息:', trader.submit_user_system_info(broker_id,
                                                          user_id, app_id))
    elif connect_mode == 3:
        # 3.中继服务器非操作员模式(多对多模式)
        print('交易客户端认证:', trader.request_authenticate(broker_id, user_id,
                                                      product_info, auth_code,
                                                      app_id))
        print('注册用户终端信息:', trader.register_user_system_info(broker_id,
                                                            user_id, app_id))
        print('交易账号登陆:', trader.login(broker_id, user_id, password))
    else:
        pass
    print('行情账号登陆:', market.login(broker_id, user_id, password))
    print('交易交易日:', market.get_trading_day())
    print('行情交易日:', trader.get_trading_day())
    print('投资者代码:', trader.set_investor_id(user_id))
    while True:
        menu_text = '请选择功能: \n'
        menu_text += ' 0. 退出程序 \n'
        menu_text += ' 1. 请求结算单确认 \n'
        menu_text += ' 2. 请求查询交易所 \n'
        menu_text += ' 3. 请求查询投资者 \n'
        menu_text += ' 4. 请求查询资金账户 \n'
        menu_text += ' 5. 请求查询行情 \n'
        menu_text += ' 6. 请求查询合约 \n'
        menu_text += ' 7. 请求查询合约手续费率 \n'
        menu_text += ' 8. 请求查询合约保证金率 \n'
        menu_text += ' 9. 请求查询投资者持仓 \n'
        menu_text += '10. 请求查询投资者持仓明细 \n'
        menu_text += '11. 请求申报开多仓一手 \n'
        menu_text += '12. 请求申报开空仓一手 \n'
        menu_text += '13. 请求申报平多仓一手 \n'
        menu_text += '14. 请求申报平空仓一手 \n'
        menu_text += '15. 订阅行情 \n'
        menu_text += '16. 退订行情 \n'
        menu_text += '请输入选项 [0-16]： '
        inp = get_int_in_range(menu_text, 0, 16)
        if inp == 0:
            break
        if inp == 1:
            print('结算单确认:', trader.request_settlement_info_confirm())
        elif inp == 2:
            print('交易所:',
                  [(exchange.ExchangeID,
                    bytes_to_text(exchange.ExchangeName),
                    exchange.ExchangeProperty)
                   for exchange in trader.query_exchange()])
        elif inp == 3:
            print('投资者:', trader.query_investor())
        elif inp == 4:
            print('账户:', trader.query_trading_account())
        elif inp == 5:
            instrument_id = text_to_bytes(user_input('输入要查询的合约代码: '))
            print('行情:', trader.query_depth_market_data(instrument_id))
        elif inp == 6:
            instrument_id = text_to_bytes(user_input('输入要查询的合约代码: '))
            print('合约:', trader.query_instrument(instrument_id))
        elif inp == 7:
            instrument_id = text_to_bytes(user_input('输入要查询的合约代码: '))
            print('合约手续费率:', trader.query_instrument_commission_rate(
                instrument_id))
        elif inp == 8:
            instrument_id = text_to_bytes(user_input('输入要查询的合约代码: '))
            print('合约保证金率:', trader.query_instrument_margin_rate(
                instrument_id))
        elif inp == 9:
            investor_position = trader.query_investor_position()
            position_direction_dict = {PyCTP.THOST_FTDC_PD_Net: '净',
                                       PyCTP.THOST_FTDC_PD_Long: '买',
                                       PyCTP.THOST_FTDC_PD_Short: '卖'}
            table = [['持仓合约', '买/卖', '总仓', '持仓盈亏']]
            for position in investor_position:
                if position.Position:
                    table.append([bytes_to_text(position.InstrumentID),
                                  position_direction_dict[
                                      position.PosiDirection],
                                  position.Position,
                                  position.PositionProfit])
            print('投资者持仓明细:')
            for row in table:
                print('{:<10}{:<10}{:<10}{:<10}'.format(*row))
        elif inp == 10:
            print('投资者持仓明细:', trader.query_investor_position_detail())
        elif inp == 11:
            instrument_id = text_to_bytes(
                user_input('输入要申报开多仓一手的合约代码: '))
            market_data = trader.query_depth_market_data(instrument_id)
            print('申报开多仓一手:', trader.order_insert(
                instrument_id,
                action=PyCTP.THOST_FTDC_OF_Open,
                direction=PyCTP.THOST_FTDC_D_Buy,
                volume=1,
                price=market_data[0].AskPrice1))
        elif inp == 12:
            instrument_id = text_to_bytes(
                user_input('输入要申报开空仓一手的合约代码: '))
            market_data = trader.query_depth_market_data(instrument_id)
            print('申报开空仓一手:', trader.order_insert(
                instrument_id,
                action=PyCTP.THOST_FTDC_OF_Open,
                direction=PyCTP.THOST_FTDC_D_Sell,
                volume=1,
                price=market_data[0].BidPrice1))
        elif inp == 13:
            instrument_id = text_to_bytes(
                user_input('输入要申报平多仓一手的合约代码: '))
            action = [PyCTP.THOST_FTDC_OF_CloseToday,
                      PyCTP.THOST_FTDC_OF_CloseYesterday][
                          get_int_in_range('请选择模式 (0=平今, 1=平昨): ', 0, 1)]
            market_data = trader.query_depth_market_data(instrument_id)
            print('申报平多仓一手:', trader.order_insert(
                instrument_id,
                action=action,
                direction=PyCTP.THOST_FTDC_D_Sell,
                volume=1,
                price=market_data[0].BidPrice1))
        elif inp == 14:
            instrument_id = text_to_bytes(
                user_input('输入要申报平空仓一手的合约代码: '))
            action = [PyCTP.THOST_FTDC_OF_CloseToday,
                      PyCTP.THOST_FTDC_OF_CloseYesterday][
                          get_int_in_range('请选择模式 (0=平今, 1=平昨): ', 0, 1)]
            market_data = trader.query_depth_market_data(instrument_id)
            print('申报平空仓一手:', trader.order_insert(
                instrument_id,
                action=action,
                direction=PyCTP.THOST_FTDC_D_Buy,
                volume=1,
                price=market_data[0].AskPrice1))
        elif inp == 15:
            instrument_id = text_to_bytes(user_input('输入要订阅行情的合约代码: '))
            print('订阅行情:', market.subscribe_market_data([instrument_id]))
        elif inp == 16:
            instrument_id = text_to_bytes(user_input('输入要退订行情的合约代码: '))
            print('退订行情:', market.unsubscribe_market_data([instrument_id]))
        else:
            print('未实现功能 %d' % inp)
        user_input('--- 按回车继续 --- \n')
    print('交易账号登出:', trader.logout())
    print('行情账号登出:', market.logout())
    market = None
    trader = None


if __name__ == '__main__':
    main()
