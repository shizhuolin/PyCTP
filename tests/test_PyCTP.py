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
    
    def __IncOrderRef(self):
        """ 递增报单引用 """
        OrderRef = self.__OrderRef
        self.__OrderRef += 1
        return OrderRef
    
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
    
    def SettlementInfoConfirm(self):
        """ 请求确认结算单 """
        confirm = PyCTP.CThostFtdcSettlementInfoConfirmField()
        confirm.BrokerID = self.__BrokerID
        confirm.InvestorID = self.__InvestorID
        self.__rsp_SettlementInfoConfirm_RequestID = self.__IncRequestID()
        self.__rsp_SettlementInfoConfirm_event = threading.Event()
        self.__rsp_SettlementInfoConfirm_RspInfo = None
        self.__rsp_SettlementInfoConfirm_results = []
        ret = self.ReqSettlementInfoConfirm(confirm, self.__rsp_SettlementInfoConfirm_RequestID)
        if ret == 0:
            self.__rsp_SettlementInfoConfirm_event.clear()
            if self.__rsp_SettlementInfoConfirm_event.wait(self.TIMEOUT):
                if self.__rsp_SettlementInfoConfirm_RspInfo and self.__rsp_SettlementInfoConfirm_RspInfo.ErrorID != 0:
                    return self.__rsp_SettlementInfoConfirm_RspInfo.ErrorID
                return self.__rsp_SettlementInfoConfirm_results
            else:
                return -4
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
        QryDepthMarketData = PyCTP.CThostFtdcQryDepthMarketDataField()
        QryDepthMarketData.ProductClass = PyCTP.THOST_FTDC_PC_Futures
        QryDepthMarketData.InstrumentID = InstrumentID
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
    
    def QryInstrumentCommissionRate(self, InstrumentID):
        """ 请求查询合约手续费率 """
        QryInstrumentCommissionRate = PyCTP.CThostFtdcQryInstrumentCommissionRateField()
        QryInstrumentCommissionRate.BrokerID = self.__BrokerID
        QryInstrumentCommissionRate.InvestorID = self.__InvestorID
        QryInstrumentCommissionRate.InstrumentID = InstrumentID
        self.__rsp_QryInstrumentCommissionRate_results =  []
        self.__rsp_QryInstrumentCommissionRate_RequestID = self.__IncRequestID()
        self.__rsp_QryInstrumentCommissionRate_RspInfo = None
        self.__rsp_QryInstrumentCommissionRate_event = threading.Event()
        ret = self.ReqQryInstrumentCommissionRate(QryInstrumentCommissionRate, self.__rsp_QryInstrumentCommissionRate_RequestID)
        if ret == 0:
            self.__rsp_QryInstrumentCommissionRate_event.clear()
            if self.__rsp_QryInstrumentCommissionRate_event.wait(self.TIMEOUT):
                if self.__rsp_QryInstrumentCommissionRate_RspInfo and self.__rsp_QryInstrumentCommissionRate_RspInfo.ErrorID != 0:
                    return self.__rsp_QryInstrumentCommissionRate_RspInfo.ErrorID
                return self.__rsp_QryInstrumentCommissionRate_results
            else:
                return -4
        return ret
    
    def QryInstrumentMarginRate(self, InstrumentID):
        """ 请求查询合约保证金率 """
        QryInstrumentMarginRate = PyCTP.CThostFtdcQryInstrumentMarginRateField()
        QryInstrumentMarginRate.BrokerID = self.__BrokerID
        QryInstrumentMarginRate.InvestorID = self.__InvestorID
        QryInstrumentMarginRate.InstrumentID = InstrumentID
        self.__rsp_QryInstrumentMarginRate_results = []
        self.__rsp_QryInstrumentMarginRate_RequestID = self.__IncRequestID()
        self.__rsp_QryInstrumentMarginRate_RspInfo = None
        self.__rsp_QryInstrumentMarginRate_event = threading.Event()
        ret = self.ReqQryInstrumentMarginRate(QryInstrumentMarginRate, self.__rsp_QryInstrumentMarginRate_RequestID)
        if ret == 0:
            self.__rsp_QryInstrumentMarginRate_event.clear()
            if self.__rsp_QryInstrumentMarginRate_event.wait(self.TIMEOUT):
                if self.__rsp_QryInstrumentMarginRate_RspInfo and self.__rsp_QryInstrumentMarginRate_RspInfo.ErrorID != 0:
                    return self.__rsp_QryInstrumentMarginRate_RspInfo.ErrorID
                return self.__rsp_QryInstrumentMarginRate_results
            else:
                return -4
        return ret
    
    def QryInvestorPosition(self, InstrumentID=b''):
        """ 请求查询投资者持仓 """
        QryInvestorPositionFiel = PyCTP.CThostFtdcQryInvestorPositionField()
        QryInvestorPositionFiel.BrokerID = self.__BrokerID
        QryInvestorPositionFiel.InvestorID = self.__InvestorID
        QryInvestorPositionFiel.InstrumentID = InstrumentID
        self.__rsp_QryInvestorPosition_results = []
        self.__rsp_QryInvestorPosition_RequestID = self.__IncRequestID()
        self.__rsp_QryInvestorPosition_RspInfo = None
        self.__rsp_QryInvestorPosition_event = threading.Event()
        ret = self.ReqQryInvestorPosition(QryInvestorPositionFiel, self.__rsp_QryInvestorPosition_RequestID)
        if ret == 0:
            self.__rsp_QryInvestorPosition_event.clear()
            if self.__rsp_QryInvestorPosition_event.wait(self.TIMEOUT):
                if self.__rsp_QryInvestorPosition_RspInfo and self.__rsp_QryInvestorPosition_RspInfo.ErrorID != 0:
                    return self.__rsp_QryInvestorPosition_RspInfo.ErrorID
                return self.__rsp_QryInvestorPosition_results
            else:
                return -4
        return ret
    
    def QryInvestorPositionDetail(self, InstrumentID=b''):
        """ 请求查询投资者持仓明细 """
        QryInvestorPositionDetailField = PyCTP.CThostFtdcQryInvestorPositionDetailField()
        QryInvestorPositionDetailField.BrokerID = self.__BrokerID
        QryInvestorPositionDetailField.InvestorID = self.__InvestorID
        QryInvestorPositionDetailField.InstrumentID = InstrumentID
        self.__rsp_QryInvestorPositionDetail_results = []
        self.__rsp_QryInvestorPositionDetail_RequestID = self.__IncRequestID()
        self.__rsp_QryInvestorPositionDetail_RspInfo = None
        self.__rsp_QryInvestorPositionDetail_event = threading.Event()
        ret = self.ReqQryInvestorPositionDetail(QryInvestorPositionDetailField, self.__rsp_QryInvestorPositionDetail_RequestID)
        if ret == 0:
            self.__rsp_QryInvestorPositionDetail_event.clear()
            if self.__rsp_QryInvestorPositionDetail_event.wait(self.TIMEOUT):
                if self.__rsp_QryInvestorPositionDetail_RspInfo and self.__rsp_QryInvestorPositionDetail_RspInfo.ErrorID != 0:
                    return self.__rsp_QryInvestorPositionDetail_RspInfo.ErrorID
                return self.__rsp_QryInvestorPositionDetail_results
            else:
                return -4
        return ret
    
    def OrderInsert(self, InstrumentID, Action, Direction, Volume, Price):
        """ 开平仓单申报 """
        InputOrder = PyCTP.CThostFtdcInputOrderField()
        InputOrder.BrokerID = self.__BrokerID                            # 经纪公司代码
        InputOrder.InvestorID = self.__InvestorID                        # 投资者代码
        InputOrder.InstrumentID = InstrumentID                           # 合约代码
        InputOrder.OrderRef = unicode2bytes(str(self.__IncOrderRef()))   # 报单引用
        InputOrder.UserID = self.__UserID                                # 用户代码
        InputOrder.OrderPriceType = PyCTP.THOST_FTDC_OPT_LimitPrice      # 报单价格条件:限价单
        InputOrder.Direction = Direction                                 # 买卖方向
        InputOrder.CombOffsetFlag = Action                               # 组合开平标志
        InputOrder.CombHedgeFlag = PyCTP.THOST_FTDC_HF_Speculation       # 组合投机套保标志:投机
        InputOrder.LimitPrice = Price                                    # 价格
        InputOrder.VolumeTotalOriginal = Volume                          # 数量
        InputOrder.TimeCondition = PyCTP.THOST_FTDC_TC_GFD               # 有效期类型:立即完成，否则撤销
        InputOrder.VolumeCondition = PyCTP.THOST_FTDC_VC_AV              # 成交量类型:任意数量
        InputOrder.MinVolume = Volume                                    # 最小成交量
        InputOrder.ContingentCondition = PyCTP.THOST_FTDC_CC_Immediately # 触发条件:立即
        InputOrder.ForceCloseReason = PyCTP.THOST_FTDC_FCC_NotForceClose # 强平原因:非强平
        InputOrder.IsAutoSuspend = 0                                     # 自动挂起标志
        InputOrder.UserForceClose = 0                                    # 用户强平标志
        self.__rsp_OrderInsert_FrontID = self.__FrontID
        self.__rsp_OrderInsert_SessionID = self.__SessionID
        self.__rsp_OrderInsert_InputOrder = InputOrder
        self.__rsp_OrderInsert_RequestID = self.__IncRequestID()
        self.__rsp_OrderInsert_event = threading.Event()
        ret = self.ReqOrderInsert(InputOrder, self.__rsp_OrderInsert_RequestID)
        # if ret == 0:
        #     self.__rsp_OrderInsert_event.clear()
        #     if self.__rsp_OrderInsert_event.wait(self.TIMEOUT):
        #         if self.__rsp_OrderInsert_RspInfo and self.__rsp_OrderInsert_RspInfo.ErrorID != 0:
        #             sys.stderr.write(bytes2unicode(self.__rsp_OrderInsert_RspInfo.ErrorMsg) + '\n')
        #             return self.__rsp_OrderInsert_RspInfo.ErrorID
        #         return self.__rsp_OrderInsert.copy()
        #     else:
        #         return -4
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
            self.__OrderRef = int(bytes2unicode(self.__MaxOrderRef)) # 初始化报单引用
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
            
    def OnRspSettlementInfoConfirm(self, SettlementInfoConfirm, RspInfo, RequestID, IsLast):
        """ 投资者结算结果确认响应 """
        if RequestID == self.__rsp_SettlementInfoConfirm_RequestID:
            self.__rsp_SettlementInfoConfirm_results.append( SettlementInfoConfirm )
            if RspInfo:
                self.__rsp_SettlementInfoConfirm_RspInfo = RspInfo
            if IsLast:
                self.__rsp_SettlementInfoConfirm_event.set()
                
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
                
    def OnRspQryInstrumentCommissionRate(self, InstrumentCommissionRate, RspInfo, RequestID, IsLast):
        """ 请求查询合约手续费率响应 """
        if RequestID == self.__rsp_QryInstrumentCommissionRate_RequestID:
            if RspInfo is not None:
                self.__rsp_QryInstrumentCommissionRate_RspInfo = RspInfo
            if InstrumentCommissionRate is not None:
                self.__rsp_QryInstrumentCommissionRate_results.append(InstrumentCommissionRate)
            if IsLast:
                self.__rsp_QryInstrumentCommissionRate_event.set()
                
    def OnRspQryInstrumentMarginRate(self, InstrumentMarginRate, RspInfo, RequestID, IsLast):
        """ 请求查询合约保证金率响应 """
        if RequestID == self.__rsp_QryInstrumentMarginRate_RequestID:
            if RspInfo is not None:
                self.__rsp_QryInstrumentMarginRate_RspInfo = RspInfo
            if InstrumentMarginRate is not None:
                self.__rsp_QryInstrumentMarginRate_results.append(InstrumentMarginRate)
            if IsLast:
                self.__rsp_QryInstrumentMarginRate_event.set()
    
    def OnRspQryInvestorPosition(self, InvestorPosition, RspInfo, RequestID, IsLast):
        """ 请求查询投资者持仓响应 """
        if RequestID == self.__rsp_QryInvestorPosition_RequestID:
            if RspInfo is not None:
                self.__rsp_QryInvestorPosition_RspInfo = RspInfo
            if InvestorPosition is not None:
                self.__rsp_QryInvestorPosition_results.append(InvestorPosition)
            if IsLast:
                self.__rsp_QryInvestorPosition_event.set()
    
    def OnRspQryInvestorPositionDetail(self, InvestorPositionDetail, RspInfo, RequestID, IsLast):
        """ 请求查询投资者持仓明细响应 """
        if RequestID == self.__rsp_QryInvestorPositionDetail_RequestID:
            if RspInfo is not None:
                self.__rsp_QryInvestorPositionDetail_RspInfo = RspInfo
            if InvestorPositionDetail is not None:
                self.__rsp_QryInvestorPositionDetail_results.append(InvestorPositionDetail)
            if IsLast:
                self.__rsp_QryInvestorPositionDetail_event.set()
    
    def OnRspOrderInsert(self, InputOrder, RspInfo, RequestID, IsLast):
        """ 报单录入请求响应 """
        print('OnRspOrderInsert:', InputOrder)
        #if self.__rsp_OrderInsert_RequestID == RequestID:
        #    if RspInfo and RspInfo.ErrorID != 0:
        #        self.__rsp_OrderInsert_RspInfo = RspInfo
        #        self.__rsp_OrderInsert_event.set()
        
    def OnErrRtnOrderInsert(self, InputOrder, RspInfo):
        """ 报单录入错误回报 """
        print( 'OnErrRtnOrderInsert:', bytes2unicode( RspInfo.ErrorMsg ) )
        
    def OnRtnTrade(self, Trade):
        """ 成交通知 """
        print('OnRtnTrade:', Trade)
        #  {'BrokerID': b'9999'
        # , 'InvestorID': b'245110'
        # , 'reserve1': b'cu2510'
        # , 'OrderRef': b'6'                    ///报单引用
        # , 'UserID': b'245110'
        # , 'ExchangeID': b'SHFE'
        # , 'TradeID': b'      173342'          ///成交编号
        # , 'Direction': b'0'                   ///买卖方向 ///买 #define THOST_FTDC_D_Buy '0' ///卖 #define THOST_FTDC_D_Sell '1'
        # , 'OrderSysID': b'      266549'       ///报单编号
        # , 'ParticipantID': b'9999'            ///会员代码
        # , 'ClientID': b'9999245088'           ///客户代码
        # , 'TradingRole': b'\x00'              ///交易角色 ///代理 #define THOST_FTDC_ER_Broker '1' ///自营 #define THOST_FTDC_ER_Host '2' ///做市商 #define THOST_FTDC_ER_Maker '3'
        # , 'reserve2': b'cu2510'
        # , 'OffsetFlag': b'0'                  ///开平标志 ///开仓 THOST_FTDC_OF_Open '0' ///平仓 THOST_FTDC_OF_Close '1' ///强平 THOST_FTDC_OF_ForceClose '2' ///平今 THOST_FTDC_OF_CloseToday '3' ///平昨 THOST_FTDC_OF_CloseYesterday '4' ///强减 THOST_FTDC_OF_ForceOff '5' ///本地强平 THOST_FTDC_OF_LocalForceClose '6'
        # , 'HedgeFlag': b'1'                   ///投机套保标志  ///投机 THOST_FTDC_HF_Speculation '1' ///套利 THOST_FTDC_HF_Arbitrage '2' ///套保 THOST_FTDC_HF_Hedge '3' ///做市商 THOST_FTDC_HF_MarketMaker '5' ///第一腿投机第二腿套保 THOST_FTDC_HF_SpecHedge '6' ///第一腿套保第二腿投机 THOST_FTDC_HF_HedgeSpec '7'
        # , 'Price': 79380.0
        # , 'Volume': 1
        # , 'TradeDate': b'20250813'
        # , 'TradeTime': b'14:33:46'
        # , 'TradeType': b'\x00'                ///成交类型 THOST_FTDC_TRDT_SplitCombination '#' ///普通成交 THOST_FTDC_TRDT_Common '0' ///期权执行 THOST_FTDC_TRDT_OptionsExecution '1' ///OTC成交 THOST_FTDC_TRDT_OTC '2' ///期转现衍生成交 THOST_FTDC_TRDT_EFPDerived '3' ///组合衍生成交 THOST_FTDC_TRDT_CombinationDerived '4' ///大宗交易成交 THOST_FTDC_TRDT_BlockTrade '5'
        # , 'PriceSource': b'\x00'              ///成交价来源 ///前成交价 THOST_FTDC_PSRC_LastPrice '0' ///买委托价 THOST_FTDC_PSRC_Buy '1' ///卖委托价 THOST_FTDC_PSRC_Sell '2' ///场外成交价 THOST_FTDC_PSRC_OTC '3'
        # , 'TraderID': b'9999xc6'              ///交易所交易员代码
        # , 'OrderLocalID': b'      175031'     ///本地报单编号
        # , 'ClearingPartID': b'9999'           ///结算会员编号
        # , 'BusinessUnit': b''
        # , 'SequenceNo': 192469
        # , 'TradingDay': b'20250813'
        # , 'SettlementID': 1
        # , 'BrokerOrderSeq': 1515922
        # , 'TradeSource': b'0'                 ///成交来源 ///来自交易所普通回报 THOST_FTDC_TSRC_NORMAL '0' ///来自查询 THOST_FTDC_TSRC_QUERY '1'
        # , 'InvestUnitID': b''
        # , 'InstrumentID': b'cu2510'
        # , 'ExchangeInstID': b'cu2510'}    
        
    def OnRtnOrder(self, Order):
        """ 报单通知 """
        print('OnRtnOrder - 报单通知:')
        if Order.InvestorID != self.__InvestorID:
            return
        else:
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_AllTraded:
                print('报单全部成交')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_PartTradedQueueing:
                print('部分成交还在队列中')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_PartTradedNotQueueing:
                print('部分成交不在队列中')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_NoTradeQueueing:
                print('未成交还在队列中')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_NoTradeNotQueueing:
                print('未成交不在队列中')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_Canceled:
                print('撤单')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_Unknown:
                print('未知')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_NotTouched:
                print('尚未触发')
            if Order.OrderStatus == PyCTP.THOST_FTDC_OST_Touched:
                print('已触发')

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
    BrokerID = unicode2bytes(os.getenv('TEST_BROKERID', 'Your BrokerID'))
    UserID = unicode2bytes(os.getenv('TEST_USERID', 'Your UserID'))
    Password = unicode2bytes(os.getenv('TEST_PASSWORD', 'Your Password'))
    AuthCode = b'0000000000000000'
    AppID = b'simnow_client_test'
    ProductInfo = b''
    ExchangeID = b'SHFE'
    InstrumentID = b'cu2509'
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
            print('\t Trade Front:%s \n\t Market Front:%s' % (front['tFrontAddr'], front['mFrontAddr']))
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
            while True:
                print('请输入选择的序号')
                print('  1.请求结算单确认')
                print('  2.请求查询交易所')
                print('  3.请求查询投资者')
                print('  4.请求查询资金账户')
                print('  5.请求查询行情')
                print('  6.请求查询合约')
                print('  7.请求查询合约手续费率')
                print('  8.请求查询合约保证金率')
                print('  9.请求查询投资者持仓')
                print(' 10.请求申报开多仓一手')
                print(' 11.请求申报开空仓一手')
                print(' 12.请求申报平多仓一手')
                print(' 13.请求申报平空仓一手')
                print('100.退出程序')
                try: inp = int(user_input())
                except ValueError: continue
                if inp == 1:
                    print('结算单确认:', trader.SettlementInfoConfirm())
                if inp == 2:
                    print('查询交易所:', [(exchange.ExchangeID, bytes2unicode(exchange.ExchangeName), exchange.ExchangeProperty) for exchange in trader.QryExchange()])
                elif inp == 3:
                    print('查询投资者:', trader.QryInvestor())
                elif inp == 4:
                    print('查询账户:', trader.QryTradingAccount())
                elif inp == 5:
                    print('查询行情:')
                    data = trader.QryDepthMarketData(InstrumentID)
                    for d in data:
                        print( d.InstrumentID, d.LastPrice )
                elif inp == 6:
                    print('查询合约:', trader.QryInstrument(ExchangeID, InstrumentID))
                elif inp == 7:
                    print('查询合约手续费率:', trader.QryInstrumentCommissionRate(InstrumentID))
                elif inp == 8:
                    print('查询合约保证金率:', trader.QryInstrumentMarginRate(InstrumentID))
                elif inp == 9:
                    # print('查询投资者持仓:', trader.QryInvestorPosition())
                    # print('查询投资者持仓明细:', trader.QryInvestorPositionDetail())
                    # 持仓多空方向
                    PosiDirection_Dict = {PyCTP.THOST_FTDC_PD_Net: '净', PyCTP.THOST_FTDC_PD_Long:'买', PyCTP.THOST_FTDC_PD_Short: '卖'}
                    table = [['持仓合约', '买卖', '总仓', '持仓盈亏']]
                    for position in trader.QryInvestorPosition():
                        if position.Position:
                            table.append([  bytes2unicode(position.InstrumentID), PosiDirection_Dict[position.PosiDirection], position.Position, position.PositionProfit])
                    for row in table:
                        print('{:<10}{:<10}{:<10}{:<10}'.format(*row))
                elif inp == 10:
                    marketData = trader.QryDepthMarketData(InstrumentID)
                    price = marketData[0].AskPrice1
                    print('申报开多仓一手:', trader.OrderInsert(InstrumentID, Action=PyCTP.THOST_FTDC_OF_Open, Direction=PyCTP.THOST_FTDC_D_Buy, Volume = 1, Price=price))
                elif inp == 11:
                    marketData = trader.QryDepthMarketData(InstrumentID)
                    price = marketData[0].BidPrice1
                    print('申报开空仓一手:', trader.OrderInsert(InstrumentID, Action=PyCTP.THOST_FTDC_OF_Open, Direction=PyCTP.THOST_FTDC_D_Sell, Volume = 1, Price = price))
                elif inp == 12:
                    marketData = trader.QryDepthMarketData(InstrumentID)
                    price = marketData[0].BidPrice1
                    print('申报平多仓一手:', trader.OrderInsert(InstrumentID, Action=PyCTP.THOST_FTDC_OF_CloseToday, Direction=PyCTP.THOST_FTDC_D_Sell, Volume = 1, Price=price))
                elif inp == 13:
                    marketData = trader.QryDepthMarketData(InstrumentID)
                    price = marketData[0].AskPrice1
                    print('申报平空仓一手:', trader.OrderInsert(InstrumentID, Action=PyCTP.THOST_FTDC_OF_CloseToday, Direction=PyCTP.THOST_FTDC_D_Buy, Volume = 1, Price=price))
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
