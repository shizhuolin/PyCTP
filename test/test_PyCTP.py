# -*- coding: utf-8 -*-
"""
Created on Sat Jul 30 17:19:21 2025

@author: zhuolin
"""
from __future__ import print_function

import sys
import threading
import PyCTP

class ReadonlyModuleWrapper(object):
    def __init__(self, wrapped):
        self._wrapped = wrapped

    def __getattr__(self, key):
        return getattr(self._wrapped, key)

    def __setattr__(self, key, value):
        if key == "_wrapped":
            super(ReadonlyModuleWrapper, self).__setattr__(key, value)
        else:
            raise AttributeError("Module attributes are read-only")

    def __delattr__(self, key):
        raise AttributeError("Module attributes are read-only")

def user_input(prompt=''):
    if sys.version_info[0] < 3:
        # Python 2
        return raw_input(prompt)
    else:
        # Python 3
        return input(prompt)

def bytes2unicode(data, encoding='gb2312', errors='replace'):
    if sys.version_info[0] < 3:
        # Python 2
        return data if isinstance(data, unicode) else data.decode(encoding, errors)
    else:
        # Python 3
        return data if isinstance(data, str) else data.decode(encoding, errors)

def unicode2bytes(data, encoding='gb2312', errors='replace'):
    if sys.version_info[0] < 3:
        # Python 2
        return data.encode(encoding, errors) if isinstance(data, unicode) else data
    else:
        # Python 3
        return data.encode(encoding, errors) if isinstance(data, str) else data

PyCTP = ReadonlyModuleWrapper(PyCTP)

class PyCTP_Market_API(PyCTP.CThostFtdcMdApi):

    TIMEOUT = 30

    __RequestID = 0
    __isLogined = False

    def __IncRequestID(self):
        """ 自增并返回请求ID """
        # self.__RequestID += 1
        return self.__RequestID

    def Connect(self, frontAddr):
        """ 连接前置服务器 """
        self.RegisterSpi(self)
        self.RegisterFront(frontAddr)
        self.Init()
        self.__rsp_Connect_event = threading.Event()
        self.__rsp_Connect_event.clear()
        return 0 if self.__rsp_Connect_event.wait(self.TIMEOUT) else -4

    def Login(self, BrokerID, UserID, Password):
        """ 用户登录请求 """
        reqUserLogin = PyCTP.CThostFtdcReqUserLoginField()
        reqUserLogin.BrokerID = BrokerID
        reqUserLogin.UserID   = UserID
        reqUserLogin.Password = Password
        self.__rsp_Login_event = threading.Event()
        self.__rsp_Login_RequestID = self.__IncRequestID()
        ret = self.ReqUserLogin(reqUserLogin, self.__rsp_Login_RequestID)
        if ret == 0:
            self.__rsp_Login_event.clear()
            if self.__rsp_Login_event.wait(self.TIMEOUT):
                if self.__rsp_Login_RspInfo.ErrorID == 0:
                    self.__isLogined = True
                    self.__BrokerID = BrokerID
                    self.__UserID   = UserID
                    self.__Password = Password
                else:
                    sys.stderr.write(bytes2unicode(self.__rsp_Login_ErrorMsg) + '\n')
                return self.__rsp_Login_RspInfo.ErrorID
            else:
                return -4
        return ret

    def Logout(self):
        """ 登出请求 """
        reqUserLogout = PyCTP.CThostFtdcUserLogoutField(BrokerID = self.__BrokerID
                                                        ,UserID  = self.__UserID)
        self.__rsp_Logout_event = threading.Event()
        self.__rsp_Logout_RequestID = self.__IncRequestID()
        ret = self.ReqUserLogout(reqUserLogout, self.__rsp_Logout_RequestID)
        if ret == 0:
            self.__rsp_Logout_event.clear()
            if self.__rsp_Logout_event.wait(self.TIMEOUT):
                if self.__rsp_Logout_RspInfo.ErrorID == 0:
                    self.__isLogined = False
                return self.__rsp_Logout_RspInfo.ErrorID
            else:
                return -4
        return ret

    def SubMarketData(self, InstrumentID):
        """ 订阅行情 """
        self.__rsp_SubMarketData_results=[]
        self.__rsp_SubMarketData_event=threading.Event()
        self.__rsp_SubMarketData_RequestID=self.__IncRequestID()
        ret = self.SubscribeMarketData(InstrumentID, len(InstrumentID))
        if ret == 0:
            self.__rsp_SubMarketData_event.clear()
            if self.__rsp_SubMarketData_event.wait(self.TIMEOUT):
                if self.__rsp_SubMarketData_RspInfo.ErrorID != 0:
                    return self.__rsp_SubMarketData_RspInfo.ErrorID
                return self.__rsp_SubMarketData_results
            else:
                return -4
        return ret

    def UnSubMarketData(self, InstrumentID):
        """ 退订行情 """
        self.__rsp_UnSubMarketData_results = []
        self.__rsp_UnSubMarketData_event = threading.Event()
        self.__rsp_UnSubMarketData_RequestID = self.__IncRequestID()
        ret = self.UnSubscribeMarketData(InstrumentID, len(InstrumentID))
        if ret == 0:
            self.__rsp_UnSubMarketData_event.clear()
            if self.__rsp_UnSubMarketData_event.wait(self.TIMEOUT):
                if self.__rsp_UnSubMarketData_RspInfo.ErrorID != 0:
                    return self.__rsp_UnSubMarketData_RspInfo.ErrorID
                return self.__rsp_UnSubMarketData_results
            else:
                return -4
        return ret

    def SubForQuoteRsp(self, InstrumentID):
        """ 订阅询价 """
        self.__rsp_SubForQuoteRsp_results = []
        self.__rsp_SubForQuoteRsp_event = threading.Event()
        self.__rsp_SubForQuoteRsp_RequestID = self.__IncRequestID()
        ret = self.SubscribeForQuoteRsp(InstrumentID, len(InstrumentID))
        if ret == 0:
            self.__rsp_SubForQuoteRsp_event.clear()
            if self.__rsp_SubForQuoteRsp_event.wait(self.TIMEOUT):
                if self.__rsp_SubForQuoteRsp_RspInfo.ErrorID != 0:
                    return self.__rsp_SubForQuoteRsp_RspInfo.ErrorID
                return self.__rsp_SubForQuoteRsp_results
            else:
                return -4
        return ret

    def UnSubForQuoteRsp(self, InstrumentID):
        """ 订阅询价 """
        self.__rsp_UnSubForQuoteRsp_results = []
        self.__rsp_UnSubForQuoteRsp_event = threading.Event()
        self.__rsp_UnSubForQuoteRsp_RequestID = self.__IncRequestID()
        ret = self.UnSubscribeForQuoteRsp(InstrumentID, len(InstrumentID))
        if ret == 0:
            self.__rsp_UnSubForQuoteRsp_event.clear()
            if self.__rsp_UnSubForQuoteRsp_event.wait(self.TIMEOUT):
                if self.__rsp_UnSubForQuoteRsp_RspInfo.ErrorID != 0:
                    return self.__rsp_UnSubForQuoteRsp_RspInfo.ErrorID
                return self.__rsp_UnSubForQuoteRsp_results
            else:
                return -4
        return ret

    def OnFrontConnected(self):
        """ 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。 """
        self.__rsp_Connect_event.set()

    def OnFrontDisconnected(self, nReason):
        """ 当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
        nReason 错误原因
        0x1001 网络读失败
        0x1002 网络写失败
        0x2001 接收心跳超时
        0x2002 发送心跳失败
        0x2003 收到错误报文
        """
        sys.stderr.write('前置连接中断: %s' % hex(nReason))

    def OnRspError(self, RspInfo,  RequestID, IsLast):
        """ 错误信息 """
        sys.stderr.write(repr(([RspInfo.ErrorID, bytes2unicode(RspInfo.ErrorMsg)], RequestID, IsLast))+'\n')

    def OnRspUserLogin(self, RspUserLogin, RspInfo, RequestID, IsLast):
        """ 登录请求响应 """
        if RequestID == self.__rsp_Login_RequestID and IsLast:
            self.__BrokerID = RspUserLogin.BrokerID
            self.__UserID = RspUserLogin.UserID
            self.__SystemName = RspUserLogin.SystemName
            self.__TradingDay = RspUserLogin.TradingDay
            self.__DCETime = RspUserLogin.DCETime
            self.__SessionID = RspUserLogin.SessionID
            self.__MaxOrderRef = RspUserLogin.MaxOrderRef
            self.__INETime = RspUserLogin.INETime
            self.__LoginTime = RspUserLogin.LoginTime
            self.__FrontID = RspUserLogin.FrontID
            self.__FFEXTime = RspUserLogin.FFEXTime
            self.__CZCETime = RspUserLogin.CZCETime
            self.__SHFETime = RspUserLogin.SHFETime
            self.__rsp_Login_RspInfo = RspInfo
            self.__rsp_Login_event.set()

    def OnRspUserLogout(self, RspUserLogout, RspInfo, RequestID, IsLast):
        """ 登出请求响应 """
        if RequestID == self.__rsp_Logout_RequestID and IsLast:
            self.__rsp_Logout_RspInfo = RspInfo
            self.__rsp_Logout_event.set()

    def OnRspSubMarketData(self, SpecificInstrument, RspInfo, RequestID, IsLast):
        """ 订阅行情应答 """
        if RequestID == self.__rsp_SubMarketData_RequestID:
            if RspInfo is not None:
                self.__rsp_SubMarketData_RspInfo = RspInfo
            if SpecificInstrument is not None:
                self.__rsp_SubMarketData_results.append(SpecificInstrument)
            if IsLast:
                self.__rsp_SubMarketData_event.set()

    def OnRspUnSubMarketData(self, SpecificInstrument, RspInfo, RequestID, IsLast):
        """ 取消订阅行情应答 """
        if RequestID == self.__rsp_UnSubMarketData_RequestID:
            if RspInfo is not None:
                self.__rsp_UnSubMarketData_RspInfo = RspInfo
            if SpecificInstrument is not None:
                self.__rsp_UnSubMarketData_results.append(SpecificInstrument)
            if IsLast:
                self.__rsp_UnSubMarketData_event.set()
    def OnRspSubForQuoteRsp(self, SpecificInstrument, RspInfo, RequestID, IsLast):
        """ 订阅询价应答 """
        if RequestID == self.__rsp_SubForQuoteRsp_RequestID:
            if RspInfo is not None:
                self.__rsp_SubForQuoteRsp_RspInfo = RspInfo
            if SpecificInstrument is not None:
                self.__rsp_SubForQuoteRsp_results.append(SpecificInstrument)
            if IsLast:
                self.__rsp_SubForQuoteRsp_event.set()

    def OnRspUnSubForQuoteRsp(self, SpecificInstrument, RspInfo, RequestID, IsLast):
        """ 订阅询价应答 """
        if RequestID == self.__rsp_UnSubForQuoteRsp_RequestID:
            if RspInfo is not None:
                self.__rsp_UnSubForQuoteRsp_RspInfo = RspInfo
            if SpecificInstrument is not None:
                self.__rsp_UnSubForQuoteRsp_results.append(SpecificInstrument)
            if IsLast:
                self.__rsp_UnSubForQuoteRsp_event.set()

class PyCTP_Trader_API(PyCTP.CThostFtdcTraderApi):

    TIMEOUT = 30

    __RequestID = 0
    __isLogined = False

    def __IncRequestID(self):
        """ 自增并返回请求ID """
        self.__RequestID += 1
        return self.__RequestID

    def setInvestorID(self, InvestorID):
        self.__InvestorID = InvestorID
        return self.__InvestorID

    def Connect(self, frontAddr):
        """ 连接前置服务器 """
        self.RegisterSpi(self)
        self.SubscribePrivateTopic(PyCTP.THOST_TERT_RESUME)
        self.SubscribePublicTopic(PyCTP.THOST_TERT_RESUME)
        self.RegisterFront(frontAddr)
        self.Init()
        self.__rsp_Connect_event = threading.Event()
        self.__rsp_Connect_event.clear()
        return 0 if self.__rsp_Connect_event.wait(self.TIMEOUT) else -4

    def Authenticate(self, BrokerID, UserID, UserProductInfo, AuthCode, AppID):
        """ 客户端认证 """
        pReqAuthenticateField = PyCTP.CThostFtdcReqAuthenticateField()
        pReqAuthenticateField.BrokerID  = BrokerID
        pReqAuthenticateField.UserID    = UserID
        #pReqAuthenticateField.UserProductInfo = UserProductInfo
        pReqAuthenticateField.AuthCode  = AuthCode
        pReqAuthenticateField.AppID     = AppID
        self.__rsp_Authenticate_event = threading.Event()
        self.__rsp_Authenticate_RequestID = self.__IncRequestID()
        self.__rsp_Authenticate_RspInfo = None
        ret = self.ReqAuthenticate(pReqAuthenticateField, self.__rsp_Authenticate_RequestID)
        if ret == 0:
            self.__rsp_Authenticate_event.clear()
            if self.__rsp_Authenticate_event.wait(self.TIMEOUT):
                if self.__rsp_Authenticate_RspInfo and self.__rsp_Authenticate_RspInfo.ErrorID != 0:
                    return self.__rsp_Authenticate_RspInfo.ErrorID
                return bytes2unicode(self.__rsp_Authenticate_RspInfo.ErrorMsg)
            else:
                return -4
        return ret

    def Login(self, BrokerID, UserID, Password):
        """ 用户登录请求 """
        reqUserLogin = PyCTP.CThostFtdcReqUserLoginField()
        reqUserLogin.BrokerID = BrokerID
        reqUserLogin.UserID   = UserID
        reqUserLogin.Password = Password
        reqUserLogin.LoginRemark = b'test'
        self.__rsp_Login_event = threading.Event()
        self.__rsp_Login_RequestID = self.__IncRequestID()
        self.__rsp_Login_RspInfo = None
        ret = self.ReqUserLogin(reqUserLogin, self.__rsp_Login_RequestID)
        if ret == 0:
            self.__rsp_Login_event.clear()
            if self.__rsp_Login_event.wait(self.TIMEOUT):
                if self.__rsp_Login_RspInfo and self.__rsp_Login_RspInfo.ErrorID == 0:
                    self.__isLogined = True
                    self.__Password = Password
                else:
                    sys.stderr.write(bytes2unicode(self.__rsp_Login_RspInfo.ErrorMsg)+'\n')
                return self.__rsp_Login_RspInfo.ErrorID
            else:
                return -4
        return ret

    def Logout(self):
        """ 登出请求 """
        reqUserLogout = PyCTP.CThostFtdcUserLogoutField(BrokerID = self.__BrokerID
                                                        ,UserID  = self.__UserID)
        self.__rsp_Logout_event = threading.Event()
        self.__rsp_Logout_RequestID = self.__IncRequestID()
        self.__rsp_Logout_RspInfo = None
        ret = self.ReqUserLogout(reqUserLogout, self.__rsp_Logout_RequestID)
        if ret == 0:
            self.__rsp_Logout_event.clear()
            if self.__rsp_Logout_event.wait(self.TIMEOUT):
                if self.__rsp_Logout_RspInfo and self.__rsp_Logout_RspInfo.ErrorID == 0:
                    self.__isLogined = False
                return self.__rsp_Logout_RspInfo.ErrorID
            else:
                return -4
        return ret

    def SubUserSystemInfo(self, BrokerID, UserID, AppID):
        """
        ///上报用户终端信息，用于中继服务器操作员登录模式
        ///操作员登录后，可以多次调用该接口上报客户信息
        """
        userSystemInfo = PyCTP.CThostFtdcUserSystemInfoField()
        userSystemInfo.BrokerID     = BrokerID
        userSystemInfo.UserID       = UserID
        systemInfo = PyCTP.CTP_GetSystemInfo()
        Return = systemInfo['Return']
        userSystemInfo.ClientSystemInfo = systemInfo['SystemInfo']
        userSystemInfo.ClientSystemInfoLen = systemInfo['Length']
        userSystemInfo.ClientPublicIP = b'192.168.0.1'
        userSystemInfo.ClientIPPort = 51305
        userSystemInfo.ClientLoginTime = b'20190121'
        userSystemInfo.ClientAppID  = AppID
        ret = self.SubmitUserSystemInfo(userSystemInfo)
        return ret

    def RegUserSystemInfo(self, BrokerID, UserID, AppID):
        """
        ///注册用户终端信息，用于中继服务器多连接模式
        ///需要在终端认证成功后，用户登录前调用该接口
        """
        userSystemInfo = PyCTP.CThostFtdcUserSystemInfoField()
        userSystemInfo.BrokerID     = BrokerID
        userSystemInfo.UserID       = UserID
        systemInfo = PyCTP.CTP_GetSystemInfo()
        Return = systemInfo['Return']
        userSystemInfo.ClientSystemInfo = systemInfo['SystemInfo']
        userSystemInfo.ClientSystemInfoLen = systemInfo['Length']
        userSystemInfo.ClientPublicIP = b'192.168.0.1'
        userSystemInfo.ClientIPPort = 51305
        userSystemInfo.ClientLoginTime = b'20190121'
        userSystemInfo.ClientAppID  = AppID
        ret = self.RegisterUserSystemInfo(userSystemInfo)
        return ret

    def QryExchange(self, ExchangeID=b''):
        """ 请求查询交易所 """
        QryExchangeField = PyCTP.CThostFtdcQryExchangeField(ExchangeID=ExchangeID)
        self.__rsp_QryExchange_results = []
        self.__rsp_QryExchange_RequestID = self.__IncRequestID()
        self.__rsp_QryExchange_event = threading.Event()
        self.__rsp_QryExchange_RspInfo = None
        ret = self.ReqQryExchange(QryExchangeField, self.__rsp_QryExchange_RequestID)
        if ret == 0:
            self.__rsp_QryExchange_event.clear()
            if self.__rsp_QryExchange_event.wait(self.TIMEOUT):
                if self.__rsp_QryExchange_RspInfo and self.__rsp_QryExchange_RspInfo.ErrorID != 0:
                    return self.__rsp_QryExchange_RspInfo.ErrorID
                return self.__rsp_QryExchange_results
            else:
                return -4
        return ret

    def QryInvestor(self):
        """ 请求查询投资者 """
        InvestorField = PyCTP.CThostFtdcQryInvestorField(BrokerID=self.__BrokerID, InvestorID=self.__InvestorID)
        self.__rsp_QryInvestor_results = []
        self.__rsp_QryInvestor_RequestID = self.__IncRequestID()
        self.__rsp_QryInvestor_event=threading.Event()
        self.__rsp_QryInvestor_RspInfo = None
        ret = self.ReqQryInvestor(InvestorField, self.__rsp_QryInvestor_RequestID)
        if ret == 0:
            self.__rsp_QryInvestor_event.clear()
            if self.__rsp_QryInvestor_event.wait(self.TIMEOUT):
                if self.__rsp_QryInvestor_RspInfo and self.__rsp_QryInvestor_RspInfo.ErrorID != 0:
                    return self.__rsp_QryInvestor_RspInfo.ErrorID
                return self.__rsp_QryInvestor_results
            else:
                return -4
        return ret

    def QryTradingAccount(self):
        """ 请求查询资金账户 """
        QryTradingAccountField = PyCTP.CThostFtdcQryTradingAccountField(BrokerID=self.__BrokerID, InvestorID=self.__InvestorID)
        self.__rsp_QryTradingAccount_results = []
        self.__rsp_QryTradingAccount_RequestID = self.__IncRequestID()
        self.__rsp_QryTradingAccount_event = threading.Event()
        self.__rsp_QryTradingAccount_RspInfo = None
        ret = self.ReqQryTradingAccount(QryTradingAccountField, self.__rsp_QryTradingAccount_RequestID)
        if ret == 0:
            self.__rsp_QryTradingAccount_event.clear()
            if self.__rsp_QryTradingAccount_event.wait(self.TIMEOUT):
                if self.__rsp_QryTradingAccount_RspInfo and self.__rsp_QryTradingAccount_RspInfo.ErrorID != 0:
                    return self.__rsp_QryTradingAccount_RspInfo.ErrorID
                return self.__rsp_QryTradingAccount_results
            else:
                return -4
        return ret

    def QryInstrument(self, ExchangeID=b'', InstrumentID=b''):
        """ 查询和约 """
        QryInstrument = PyCTP.CThostFtdcQryInstrumentField(ExchangeID = ExchangeID, InstrumentID = InstrumentID)
        self.__rsp_QryInstrument_event = threading.Event()
        self.__rsp_QryInstrument_RequestID = self.__IncRequestID()
        self.__rsp_QryInstrument_results = []
        self.__rsp_QryInstrument_RspInfo = None
        ret = self.ReqQryInstrument(QryInstrument, self.__rsp_QryInstrument_RequestID)
        if ret == 0:
            self.__rsp_QryInstrument_event.clear()
            if self.__rsp_QryInstrument_event.wait(self.TIMEOUT):
                if self.__rsp_QryInstrument_RspInfo and self.__rsp_QryInstrument_RspInfo.ErrorID != 0:
                    return self.__rsp_QryInstrument_RspInfo.ErrorID
                return self.__rsp_QryInstrument_results
            else:
                return -4
        return ret

    def QryDepthMarketData(self, InstrumentID):
        """ 请求查询行情 """
        QryDepthMarketData = PyCTP.CThostFtdcQryDepthMarketDataField(InstrumentID=InstrumentID)
        self.__rsp_QryDepthMarketData_results = []
        self.__rsp_QryDepthMarketData_RequestID = self.__IncRequestID()
        self.__rsp_QryDepthMarketData_event = threading.Event()
        self.__rsp_QryDepthMarketData_RspInfo = None
        ret = self.ReqQryDepthMarketData(QryDepthMarketData, self.__rsp_QryDepthMarketData_RequestID)
        if ret == 0:
            self.__rsp_QryDepthMarketData_event.clear()
            if self.__rsp_QryDepthMarketData_event.wait(self.TIMEOUT):
                if self.__rsp_QryDepthMarketData_RspInfo and self.__rsp_QryDepthMarketData_RspInfo.ErrorID != 0:
                    return self.__rsp_QryDepthMarketData_RspInfo.ErrorID
                return self.__rsp_QryDepthMarketData_results
            else:
                return -4
        return ret

    def OnFrontConnected(self):
        """ 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。 """
        self.__rsp_Connect_event.set()

    def OnFrontDisconnected(self, nReason):
        """ 当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
        nReason 错误原因
        0x1001 网络读失败
        0x1002 网络写失败
        0x2001 接收心跳超时
        0x2002 发送心跳失败
        0x2003 收到错误报文
        """
        sys.stderr.write('前置连接中断: %s \n' % hex(nReason))

    def OnRspError(self, RspInfo,  RequestID, IsLast):
        """ 错误信息 """
        sys.stderr.write(repr(([RspInfo.ErrorID, bytes2unicode(RspInfo.ErrorMsg)], RequestID, IsLast))+'\n')

    def OnRspAuthenticate(self, pRspAuthenticateField, RspInfo, RequestID, IsLast):
        """ 请求响应 """
        if RequestID == self.__rsp_Authenticate_RequestID and IsLast:
            self.__rsp_Authenticate_RspInfo = RspInfo
            self.__rsp_Authenticate_event.set()

    def OnRspUserLogin(self, RspUserLogin, RspInfo, RequestID, IsLast):
        """ 登录请求响应 """
        if RequestID == self.__rsp_Login_RequestID and IsLast:
            self.__BrokerID = RspUserLogin.BrokerID
            self.__UserID = RspUserLogin.UserID
            self.__SystemName = RspUserLogin.SystemName
            self.__TradingDay = RspUserLogin.TradingDay
            self.__DCETime = RspUserLogin.DCETime
            self.__SessionID = RspUserLogin.SessionID
            self.__MaxOrderRef = RspUserLogin.MaxOrderRef
            self.__OrderRef = self.__MaxOrderRef # 初始化报单引用
            self.__INETime = RspUserLogin.INETime
            self.__LoginTime = RspUserLogin.LoginTime
            self.__FrontID = RspUserLogin.FrontID
            self.__FFEXTime = RspUserLogin.FFEXTime
            self.__CZCETime = RspUserLogin.CZCETime
            self.__SHFETime = RspUserLogin.SHFETime
            self.__rsp_Login_RspInfo = RspInfo
            self.__rsp_Login_event.set()

    def OnRspUserLogout(self, RspUserLogout, RspInfo, RequestID, IsLast):
        """ 登出请求响应 """
        if RequestID == self.__rsp_Logout_RequestID and IsLast:
            self.__rsp_Logout_RspInfo = RspInfo
            self.__rsp_Logout_event.set()

    def OnRspQryExchange(self, Exchange, RspInfo, RequestID, IsLast):
        """ 请求查询交易所响应 """
        
        if RequestID == self.__rsp_QryExchange_RequestID:
            if RspInfo is not None:
                self.__rsp_QryExchange_RspInfo = RspInfo
            if Exchange is not None:
                self.__rsp_QryExchange_results.append(Exchange)
            if IsLast:
                self.__rsp_QryExchange_event.set()

    def OnRspQryInvestor(self, Investor, RspInfo, RequestID, IsLast):
        """ 请求查询投资者响应 """
        if RequestID == self.__rsp_QryInvestor_RequestID:
            if RspInfo is not None:
                self.__rsp_QryInvestor_RspInfo = RspInfo
            if Investor is not None:
                self.__rsp_QryInvestor_results.append(Investor)
            if IsLast:
                self.__rsp_QryInvestor_event.set()

    def OnRspQryTradingAccount(self, TradingAccount, RspInfo, RequestID, IsLast):
        """ 请求查询资金账户响应 """
        if RequestID == self.__rsp_QryTradingAccount_RequestID:
            if RspInfo is not None:
                self.__rsp_QryTradingAccount_RspInfo = RspInfo
            if TradingAccount is not None:
                self.__rsp_QryTradingAccount_results.append(TradingAccount)
            if IsLast:
                self.__rsp_QryTradingAccount_event.set()

    def OnRspQryInstrument(self, Instrument, RspInfo, RequestID, IsLast):
        """ 请求查询合约响应 """
        if RequestID == self.__rsp_QryInstrument_RequestID:
            if RspInfo is not None:
                self.__rsp_QryInstrument_RspInfo = RspInfo
            if Instrument is not None:
                self.__rsp_QryInstrument_results.append(Instrument)
            if IsLast:
                self.__rsp_QryInstrument_event.set()

    def OnRspQryDepthMarketData(self, DepthMarketData, RspInfo, RequestID, IsLast):
        """ 请求查询行情响应 """
        if RequestID == self.__rsp_QryDepthMarketData_RequestID:
            if RspInfo is not None:
                self.__rsp_QryDepthMarketData_RspInfo = RspInfo
            if DepthMarketData is not None:
                self.__rsp_QryDepthMarketData_results.append(DepthMarketData)
            if IsLast:
                self.__rsp_QryDepthMarketData_event.set()

class PyCTP_Trader(PyCTP_Trader_API):
    def OnRtnInstrumentStatus(self, InstrumentStatus):
        """ 合约交易状态通知 """
        print("合约交易状态通知:", InstrumentStatus)

class PyCTP_Market(PyCTP_Market_API):
    def OnRtnDepthMarketData(self, DepthMarketData):
        """ 深度行情通知 """
        import datetime
        tick = dict(InstrumentID=DepthMarketData.InstrumentID
                    , time=datetime.datetime.strptime(bytes2unicode(DepthMarketData.ActionDay+DepthMarketData.UpdateTime), '%Y%m%d%H:%M:%S').replace(microsecond=DepthMarketData.UpdateMillisec*1000).strftime('%Y-%m-%d %H:%M:%S.%f')
                    , last=DepthMarketData.LastPrice
                    , volume=DepthMarketData.Volume
                    , amount=DepthMarketData.Turnover
                    , position=DepthMarketData.OpenInterest
                    , ask1=DepthMarketData.AskPrice1
                    , bid1=DepthMarketData.BidPrice1
                    , asize1=DepthMarketData.AskVolume1
                    , bsize1=DepthMarketData.BidVolume1)
        print('深度行情通知:', tick)

def __main__():
    import os
    import time
    BrokerID = unicode2bytes(os.getenv('TEST_BROKERID'))
    UserID = unicode2bytes(os.getenv('TEST_USERID'))
    Password = unicode2bytes(os.getenv('TEST_PASSWORD'))
    AuthCode = unicode2bytes(os.getenv('TEST_AUTHCODE'))
    AppID = unicode2bytes(os.getenv('TEST_APPID'))
    ProductInfo = unicode2bytes(os.getenv('TEST_PRODUCTINFO'))
    ExchangeID = unicode2bytes(os.getenv('TEST_EXCHANGEID'))
    InstrumentID = unicode2bytes(os.getenv('TEST_INSTRUMENTID'))
    FrontAddr = [{'name':'第一套环境 - 第一组', 'tFrontAddr':b'tcp://182.254.243.31:30001', 'mFrontAddr':b'tcp://182.254.243.31:30011'}
                 ,{'name':'第一套环境 - 第二组', 'tFrontAddr':b'tcp://182.254.243.31:30002', 'mFrontAddr':b'tcp://182.254.243.31:30012'}
                 ,{'name':'第一套环境 - 第三组', 'tFrontAddr':b'tcp://182.254.243.31:30003', 'mFrontAddr':b'tcp://182.254.243.31:30013'}
                 ,{'name':'7*24环境', 'tFrontAddr':b'tcp://182.254.243.31:40001', 'mFrontAddr':b'tcp://182.254.243.31:40011'}]
    current_dir = os.path.dirname(os.path.abspath(__file__))
    tmp_path = os.path.join(current_dir, 'flow/')
    if not os.path.exists(tmp_path):
        os.makedirs(tmp_path)
    flowPath = unicode2bytes(tmp_path)

    print('Python版本:', sys.version)

    while True:
        print('选择环境:')
        for idx, front in enumerate(FrontAddr):
            print('%d. %s' % (idx+1, front['name']))
            print('\t Trade Front:%s, Market Front:%s', (front['tFrontAddr'], front['mFrontAddr']))
        print('100.退出')
        try: idx = int(user_input())
        except ValueError: continue
        if idx > 0  and idx <= len(FrontAddr):
            tFrontAddr = FrontAddr[idx-1]['tFrontAddr']
            mFrontAddr = FrontAddr[idx-1]['mFrontAddr']
            break
        if idx == 100: return

    while True:
        print('选择连接行情/交易:')
        print('1.连接交易')
        print('2.连接行情')
        print('100.退出')
        try: trade_md = int(user_input())
        except ValueError: continue
        if trade_md == 1:
            trader = PyCTP_Trader.CreateFtdcTraderApi(flowPath)
            print('Api版本:', PyCTP_Trader.GetApiVersion())
            print('采集库版本：', PyCTP.CTP_GetDataCollectApiVersion())
            print('连接前置:', trader.Connect(tFrontAddr))
            print("请确定连接模式:")
            print("1.直连模式")
            print("2.中继服务器操作员模式(一对多模式)")
            print("3.中继服务器非操作员模式(多对多模式)")
            while True:
                try: mode_num = int(user_input())
                except ValueError: continue
                if mode_num == 1:
                    # 1.直连模式
                    print('客户端认证:', trader.Authenticate(BrokerID, UserID, ProductInfo, AuthCode, AppID))
                    print('账号登陆:', trader.Login(BrokerID, UserID, Password))
                    break
                elif mode_num == 2:
                    # 2.中继服务器操作员模式(一对多模式)
                    print('客户端认证:', trader.Authenticate(BrokerID, UserID, ProductInfo, AuthCode, AppID))
                    print('账号登陆:', trader.Login(BrokerID, UserID, Password))
                    print('上报用户终端信息:', trader.SubUserSystemInfo(BrokerID, UserID, AppID))
                    break
                elif mode_num == 3:
                    # 3.中继服务器非操作员模式(多对多模式)
                    print('客户端认证:', trader.Authenticate(BrokerID, UserID, ProductInfo, AuthCode, AppID))
                    print('注册用户终端信息:', trader.RegUserSystemInfo(BrokerID, UserID, AppID) )
                    print('账号登陆:', trader.Login(BrokerID, UserID, Password))
                    break
                else:
                     print('选择的模式有误，请重新输入！')
            print('交易日:', trader.GetTradingDay())
            print('投资者代码:', trader.setInvestorID(UserID))
            print('请输入你需要的操作序号：')
            print('请输入你需要的操作序号：')
            print('1.请求查询交易所')
            print('2.请求查询投资者')
            print('3.请求查询资金账户')
            print('4.请求查询合约')
            print('5.请求查询行情')
            print('100.退出程序')
            while True:
                try: inp = int(user_input())
                except ValueError: continue
                if inp == 1:
                    print('查询交易所:', [(exchange.ExchangeID, bytes2unicode(exchange.ExchangeName), exchange.ExchangeProperty) for exchange in trader.QryExchange()])
                elif inp == 2:
                    print('查询投资者:', trader.QryInvestor())
                elif inp == 3:
                    print('查询账户:', trader.QryTradingAccount())
                elif inp == 4:
                    print('查询合约:', trader.QryInstrument(ExchangeID, InstrumentID))
                elif inp == 5:
                    print('查询行情:', trader.QryDepthMarketData(InstrumentID))
                elif inp == 100:
                    break
                else:
                    print('请输入正确的序号')
            print('账号登出:', trader.Logout())
            print('删除接口:', trader.Release())
            break
        elif trade_md == 2:
            market = PyCTP_Market.CreateFtdcMdApi(flowPath)
            print('Api版本:', PyCTP_Market.GetApiVersion())
            print('连接前置:', market.Connect(mFrontAddr))
            print('账号登陆:', market.Login(BrokerID, UserID, Password))
            print('交易日:', market.GetTradingDay())
            print('订阅行情:', market.SubMarketData([InstrumentID]))
            #print('订阅询价:', market.SubForQuoteRsp([InstrumentID]))
            user_input('按任意键退出:\n')
            print('退订行情:', market.UnSubMarketData([InstrumentID]))
            #print('退订询价:', market.UnSubForQuoteRsp([InstrumentID]))
            #print('账号登出:', market.Logout())
            print('删除接口:', market.Release())
            break
        elif trade_md == 100:
            break
        else:
            print('请输入正确的序号.')

if __name__ == '__main__':
    __main__()
    user_input('按任意键退出:\n')
