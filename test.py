#!/usr/bin/python
# -*- coding: UTF-8 -*-

from sys import *
from threading import *
from PyCTP import *

class CTP_Trader_API(CThostFtdcTraderApi):

    _event = Event()
    _BrokerID = None
    _UserID = None
    _InvestorID = None
    _FrontID = None
    _SessionID = None
    _MaxOrderRef = None
    
    def Connect(self, frontAddr):
        self.RegisterSpi(self)
        self.SubscribePrivateTopic(THOST_TERT_RESUME)
        self.SubscribePublicTopic(THOST_TERT_RESUME)
        self.RegisterFront(frontAddr)
        self.Init()
        self._event.clear()
        self._event.wait()

    def Login(self, BrokerID, UserID, Password):
        reqUserLogin = {}
        reqUserLogin["BrokerID"] = BrokerID
        reqUserLogin["UserID"] = UserID
        reqUserLogin["Password"] = Password
        self.ReqUserLogin(reqUserLogin, 0)
        self._event.clear()
        self._event.wait()

    def setInvestorID(self, InvestorID):
        self._InvestorID = InvestorID

    def QrySettlementInfo(self, TradingDay):
        QrySettlementInfoField = {}
        QrySettlementInfoField["BrokerID"] = self._BrokerID
        QrySettlementInfoField["InvestorID"] = self._InvestorID
        QrySettlementInfoField["TradingDay"] = TradingDay
        self.ReqQrySettlementInfo(QrySettlementInfoField, 0)
    
    def OnFrontConnected(self):
        self._event.set()

    def OnRspUserLogin(self, RspUserLogin, RspInfo, RequestID, IsLast):
        self._BrokerID = RspUserLogin["BrokerID"]
        self._UserID = RspUserLogin["UserID"]
        self._FrontID = RspUserLogin["FrontID"]
        self._SessionID = RspUserLogin["SessionID"]
        self._MaxOrderRef = RspUserLogin["MaxOrderRef"]
        self._event.set()
        
    def OnRspQrySettlementInfo(self, SettlementInfo, RspInfo, RequestID, IsLast):
        print(SettlementInfo)

class CTP_Market_API(CThostFtdcMdApi):

    _event = Event()
    _BrokerID = None
    _UserID = None
    
    def Connect(self, frontAddr):
        self.RegisterSpi(self)
        self.RegisterFront(frontAddr)
        self.Init()
        self._event.clear()
        self._event.wait()

    def Login(self, BrokerID, UserID, Password):
        reqUserLogin = {}
        reqUserLogin["BrokerID"] = BrokerID
        reqUserLogin["UserID"] = UserID
        reqUserLogin["Password"] = Password
        self.ReqUserLogin(reqUserLogin, 0)
        self._event.clear()
        self._event.wait()

    def setInvestorID(self, InvestorID):
        self._InvestorID = InvestorID
    
    def OnFrontConnected(self):
        self._event.set()

    def OnRspUserLogin(self, RspUserLogin, RspInfo, RequestID, IsLast):
        self._BrokerID = RspUserLogin["BrokerID"]
        self._UserID = RspUserLogin["UserID"]
        self._event.set()

    def OnRspSubMarketData(self, SpecificInstrument, RspInfo, RequestID, bIsLast):
        pass

    def OnRtnDepthMarketData(self, data):
        print(repr(data))

print(CTP_Trader_API.GetApiVersion())
trader = CTP_Trader_API.CreateFtdcTraderApi(b"_trader_0393_00150_")
trader.Connect(b"tcp://180.168.146.187:10000")
trader.Login(b"9999", b"00150", bytes(input("password:"), "gb2312"))
print(trader.GetTradingDay())
trader.setInvestorID(b"00150")
##trader.QrySettlementInfo(b"")

print(CTP_Market_API.GetApiVersion())
market = CTP_Market_API.CreateFtdcMdApi(b"_market_0393_00150_")
market.Connect(b"tcp://180.168.146.187:10010")
market.Login(b"9999", b"00150", bytes(input("password:"), "gb2312"))
print(market.GetTradingDay())
market.SubscribeMarketData([b"IF1508", b"IF1509"], 2)
