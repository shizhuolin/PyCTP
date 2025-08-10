
#include "PyCThostFtdcSyncDeltaDepthMarketDataField.h"

///风险结算追平行情

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaDepthMarketDataField *self = (PyCThostFtdcSyncDeltaDepthMarketDataField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_init(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "InstrumentID", "ExchangeID", "ExchangeInstID", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1", "BidPrice2", "BidVolume2", "AskPrice2", "AskVolume2", "BidPrice3", "BidVolume3", "AskPrice3", "AskVolume3", "BidPrice4", "BidVolume4", "AskPrice4", "AskVolume4", "BidPrice5", "BidVolume5", "AskPrice5", "AskVolume5", "AveragePrice", "ActionDay", "BandingUpperPrice", "BandingLowerPrice", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaDepthMarketDataField_TradingDay = NULL;
    Py_ssize_t SyncDeltaDepthMarketDataField_TradingDay_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaDepthMarketDataField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaDepthMarketDataField_InstrumentID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaDepthMarketDataField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaDepthMarketDataField_ExchangeID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *SyncDeltaDepthMarketDataField_ExchangeInstID = NULL;
    Py_ssize_t SyncDeltaDepthMarketDataField_ExchangeInstID_len = 0;
            
    ///最新价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_LastPrice = 0.0;
        
    ///上次结算价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_PreSettlementPrice = 0.0;
        
    ///昨收盘
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_PreClosePrice = 0.0;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    double SyncDeltaDepthMarketDataField_PreOpenInterest = 0.0;
        
    ///今开盘
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_OpenPrice = 0.0;
        
    ///最高价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_HighestPrice = 0.0;
        
    ///最低价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_LowestPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_Volume = 0;
        
    ///成交金额
    // TThostFtdcMoneyType double
    double SyncDeltaDepthMarketDataField_Turnover = 0.0;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    double SyncDeltaDepthMarketDataField_OpenInterest = 0.0;
        
    ///今收盘
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_ClosePrice = 0.0;
        
    ///本次结算价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_SettlementPrice = 0.0;
        
    ///涨停板价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_UpperLimitPrice = 0.0;
        
    ///跌停板价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_LowerLimitPrice = 0.0;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    double SyncDeltaDepthMarketDataField_PreDelta = 0.0;
        
    ///今虚实度
    // TThostFtdcRatioType double
    double SyncDeltaDepthMarketDataField_CurrDelta = 0.0;
        
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    const char *SyncDeltaDepthMarketDataField_UpdateTime = NULL;
    Py_ssize_t SyncDeltaDepthMarketDataField_UpdateTime_len = 0;
            
    ///最后修改毫秒
    // TThostFtdcMillisecType int
    int SyncDeltaDepthMarketDataField_UpdateMillisec = 0;
        
    ///申买价一
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_BidPrice1 = 0.0;
        
    ///申买量一
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_BidVolume1 = 0;
        
    ///申卖价一
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_AskPrice1 = 0.0;
        
    ///申卖量一
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_AskVolume1 = 0;
        
    ///申买价二
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_BidPrice2 = 0.0;
        
    ///申买量二
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_BidVolume2 = 0;
        
    ///申卖价二
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_AskPrice2 = 0.0;
        
    ///申卖量二
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_AskVolume2 = 0;
        
    ///申买价三
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_BidPrice3 = 0.0;
        
    ///申买量三
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_BidVolume3 = 0;
        
    ///申卖价三
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_AskPrice3 = 0.0;
        
    ///申卖量三
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_AskVolume3 = 0;
        
    ///申买价四
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_BidPrice4 = 0.0;
        
    ///申买量四
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_BidVolume4 = 0;
        
    ///申卖价四
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_AskPrice4 = 0.0;
        
    ///申卖量四
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_AskVolume4 = 0;
        
    ///申买价五
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_BidPrice5 = 0.0;
        
    ///申买量五
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_BidVolume5 = 0;
        
    ///申卖价五
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_AskPrice5 = 0.0;
        
    ///申卖量五
    // TThostFtdcVolumeType int
    int SyncDeltaDepthMarketDataField_AskVolume5 = 0;
        
    ///当日均价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_AveragePrice = 0.0;
        
    ///业务日期
    // TThostFtdcDateType char[9]
    const char *SyncDeltaDepthMarketDataField_ActionDay = NULL;
    Py_ssize_t SyncDeltaDepthMarketDataField_ActionDay_len = 0;
            
    ///上带价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_BandingUpperPrice = 0.0;
        
    ///下带价
    // TThostFtdcPriceType double
    double SyncDeltaDepthMarketDataField_BandingLowerPrice = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaDepthMarketDataField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaDepthMarketDataField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#idididididididididididy#ddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddddddidddddddds#ididididididididididids#ddci", (char **)kwlist
#endif

        , &SyncDeltaDepthMarketDataField_TradingDay, &SyncDeltaDepthMarketDataField_TradingDay_len 
        , &SyncDeltaDepthMarketDataField_InstrumentID, &SyncDeltaDepthMarketDataField_InstrumentID_len 
        , &SyncDeltaDepthMarketDataField_ExchangeID, &SyncDeltaDepthMarketDataField_ExchangeID_len 
        , &SyncDeltaDepthMarketDataField_ExchangeInstID, &SyncDeltaDepthMarketDataField_ExchangeInstID_len 
        , &SyncDeltaDepthMarketDataField_LastPrice 
        , &SyncDeltaDepthMarketDataField_PreSettlementPrice 
        , &SyncDeltaDepthMarketDataField_PreClosePrice 
        , &SyncDeltaDepthMarketDataField_PreOpenInterest 
        , &SyncDeltaDepthMarketDataField_OpenPrice 
        , &SyncDeltaDepthMarketDataField_HighestPrice 
        , &SyncDeltaDepthMarketDataField_LowestPrice 
        , &SyncDeltaDepthMarketDataField_Volume 
        , &SyncDeltaDepthMarketDataField_Turnover 
        , &SyncDeltaDepthMarketDataField_OpenInterest 
        , &SyncDeltaDepthMarketDataField_ClosePrice 
        , &SyncDeltaDepthMarketDataField_SettlementPrice 
        , &SyncDeltaDepthMarketDataField_UpperLimitPrice 
        , &SyncDeltaDepthMarketDataField_LowerLimitPrice 
        , &SyncDeltaDepthMarketDataField_PreDelta 
        , &SyncDeltaDepthMarketDataField_CurrDelta 
        , &SyncDeltaDepthMarketDataField_UpdateTime, &SyncDeltaDepthMarketDataField_UpdateTime_len 
        , &SyncDeltaDepthMarketDataField_UpdateMillisec 
        , &SyncDeltaDepthMarketDataField_BidPrice1 
        , &SyncDeltaDepthMarketDataField_BidVolume1 
        , &SyncDeltaDepthMarketDataField_AskPrice1 
        , &SyncDeltaDepthMarketDataField_AskVolume1 
        , &SyncDeltaDepthMarketDataField_BidPrice2 
        , &SyncDeltaDepthMarketDataField_BidVolume2 
        , &SyncDeltaDepthMarketDataField_AskPrice2 
        , &SyncDeltaDepthMarketDataField_AskVolume2 
        , &SyncDeltaDepthMarketDataField_BidPrice3 
        , &SyncDeltaDepthMarketDataField_BidVolume3 
        , &SyncDeltaDepthMarketDataField_AskPrice3 
        , &SyncDeltaDepthMarketDataField_AskVolume3 
        , &SyncDeltaDepthMarketDataField_BidPrice4 
        , &SyncDeltaDepthMarketDataField_BidVolume4 
        , &SyncDeltaDepthMarketDataField_AskPrice4 
        , &SyncDeltaDepthMarketDataField_AskVolume4 
        , &SyncDeltaDepthMarketDataField_BidPrice5 
        , &SyncDeltaDepthMarketDataField_BidVolume5 
        , &SyncDeltaDepthMarketDataField_AskPrice5 
        , &SyncDeltaDepthMarketDataField_AskVolume5 
        , &SyncDeltaDepthMarketDataField_AveragePrice 
        , &SyncDeltaDepthMarketDataField_ActionDay, &SyncDeltaDepthMarketDataField_ActionDay_len 
        , &SyncDeltaDepthMarketDataField_BandingUpperPrice 
        , &SyncDeltaDepthMarketDataField_BandingLowerPrice 
        , &SyncDeltaDepthMarketDataField_ActionDirection 
        , &SyncDeltaDepthMarketDataField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaDepthMarketDataField_TradingDay != NULL ) {
        if(SyncDeltaDepthMarketDataField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaDepthMarketDataField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaDepthMarketDataField_TradingDay, SyncDeltaDepthMarketDataField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaDepthMarketDataField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaDepthMarketDataField_TradingDay = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaDepthMarketDataField_InstrumentID != NULL ) {
        if(SyncDeltaDepthMarketDataField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaDepthMarketDataField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaDepthMarketDataField_InstrumentID, SyncDeltaDepthMarketDataField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaDepthMarketDataField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaDepthMarketDataField_InstrumentID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaDepthMarketDataField_ExchangeID != NULL ) {
        if(SyncDeltaDepthMarketDataField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaDepthMarketDataField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaDepthMarketDataField_ExchangeID, SyncDeltaDepthMarketDataField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaDepthMarketDataField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaDepthMarketDataField_ExchangeID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( SyncDeltaDepthMarketDataField_ExchangeInstID != NULL ) {
        if(SyncDeltaDepthMarketDataField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", SyncDeltaDepthMarketDataField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, SyncDeltaDepthMarketDataField_ExchangeInstID, SyncDeltaDepthMarketDataField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, SyncDeltaDepthMarketDataField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        SyncDeltaDepthMarketDataField_ExchangeInstID = NULL;
    }
            
    ///最新价
    // TThostFtdcPriceType double
    self->data.LastPrice = SyncDeltaDepthMarketDataField_LastPrice;
        
    ///上次结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = SyncDeltaDepthMarketDataField_PreSettlementPrice;
        
    ///昨收盘
    // TThostFtdcPriceType double
    self->data.PreClosePrice = SyncDeltaDepthMarketDataField_PreClosePrice;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    self->data.PreOpenInterest = SyncDeltaDepthMarketDataField_PreOpenInterest;
        
    ///今开盘
    // TThostFtdcPriceType double
    self->data.OpenPrice = SyncDeltaDepthMarketDataField_OpenPrice;
        
    ///最高价
    // TThostFtdcPriceType double
    self->data.HighestPrice = SyncDeltaDepthMarketDataField_HighestPrice;
        
    ///最低价
    // TThostFtdcPriceType double
    self->data.LowestPrice = SyncDeltaDepthMarketDataField_LowestPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = SyncDeltaDepthMarketDataField_Volume;
        
    ///成交金额
    // TThostFtdcMoneyType double
    self->data.Turnover = SyncDeltaDepthMarketDataField_Turnover;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    self->data.OpenInterest = SyncDeltaDepthMarketDataField_OpenInterest;
        
    ///今收盘
    // TThostFtdcPriceType double
    self->data.ClosePrice = SyncDeltaDepthMarketDataField_ClosePrice;
        
    ///本次结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = SyncDeltaDepthMarketDataField_SettlementPrice;
        
    ///涨停板价
    // TThostFtdcPriceType double
    self->data.UpperLimitPrice = SyncDeltaDepthMarketDataField_UpperLimitPrice;
        
    ///跌停板价
    // TThostFtdcPriceType double
    self->data.LowerLimitPrice = SyncDeltaDepthMarketDataField_LowerLimitPrice;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    self->data.PreDelta = SyncDeltaDepthMarketDataField_PreDelta;
        
    ///今虚实度
    // TThostFtdcRatioType double
    self->data.CurrDelta = SyncDeltaDepthMarketDataField_CurrDelta;
        
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    if( SyncDeltaDepthMarketDataField_UpdateTime != NULL ) {
        if(SyncDeltaDepthMarketDataField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", SyncDeltaDepthMarketDataField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
            return -1;
        }
        // memset(self->data.UpdateTime, 0, sizeof(self->data.UpdateTime));
        // memcpy(self->data.UpdateTime, SyncDeltaDepthMarketDataField_UpdateTime, SyncDeltaDepthMarketDataField_UpdateTime_len);        
        strncpy(self->data.UpdateTime, SyncDeltaDepthMarketDataField_UpdateTime, sizeof(self->data.UpdateTime) );
        SyncDeltaDepthMarketDataField_UpdateTime = NULL;
    }
            
    ///最后修改毫秒
    // TThostFtdcMillisecType int
    self->data.UpdateMillisec = SyncDeltaDepthMarketDataField_UpdateMillisec;
        
    ///申买价一
    // TThostFtdcPriceType double
    self->data.BidPrice1 = SyncDeltaDepthMarketDataField_BidPrice1;
        
    ///申买量一
    // TThostFtdcVolumeType int
    self->data.BidVolume1 = SyncDeltaDepthMarketDataField_BidVolume1;
        
    ///申卖价一
    // TThostFtdcPriceType double
    self->data.AskPrice1 = SyncDeltaDepthMarketDataField_AskPrice1;
        
    ///申卖量一
    // TThostFtdcVolumeType int
    self->data.AskVolume1 = SyncDeltaDepthMarketDataField_AskVolume1;
        
    ///申买价二
    // TThostFtdcPriceType double
    self->data.BidPrice2 = SyncDeltaDepthMarketDataField_BidPrice2;
        
    ///申买量二
    // TThostFtdcVolumeType int
    self->data.BidVolume2 = SyncDeltaDepthMarketDataField_BidVolume2;
        
    ///申卖价二
    // TThostFtdcPriceType double
    self->data.AskPrice2 = SyncDeltaDepthMarketDataField_AskPrice2;
        
    ///申卖量二
    // TThostFtdcVolumeType int
    self->data.AskVolume2 = SyncDeltaDepthMarketDataField_AskVolume2;
        
    ///申买价三
    // TThostFtdcPriceType double
    self->data.BidPrice3 = SyncDeltaDepthMarketDataField_BidPrice3;
        
    ///申买量三
    // TThostFtdcVolumeType int
    self->data.BidVolume3 = SyncDeltaDepthMarketDataField_BidVolume3;
        
    ///申卖价三
    // TThostFtdcPriceType double
    self->data.AskPrice3 = SyncDeltaDepthMarketDataField_AskPrice3;
        
    ///申卖量三
    // TThostFtdcVolumeType int
    self->data.AskVolume3 = SyncDeltaDepthMarketDataField_AskVolume3;
        
    ///申买价四
    // TThostFtdcPriceType double
    self->data.BidPrice4 = SyncDeltaDepthMarketDataField_BidPrice4;
        
    ///申买量四
    // TThostFtdcVolumeType int
    self->data.BidVolume4 = SyncDeltaDepthMarketDataField_BidVolume4;
        
    ///申卖价四
    // TThostFtdcPriceType double
    self->data.AskPrice4 = SyncDeltaDepthMarketDataField_AskPrice4;
        
    ///申卖量四
    // TThostFtdcVolumeType int
    self->data.AskVolume4 = SyncDeltaDepthMarketDataField_AskVolume4;
        
    ///申买价五
    // TThostFtdcPriceType double
    self->data.BidPrice5 = SyncDeltaDepthMarketDataField_BidPrice5;
        
    ///申买量五
    // TThostFtdcVolumeType int
    self->data.BidVolume5 = SyncDeltaDepthMarketDataField_BidVolume5;
        
    ///申卖价五
    // TThostFtdcPriceType double
    self->data.AskPrice5 = SyncDeltaDepthMarketDataField_AskPrice5;
        
    ///申卖量五
    // TThostFtdcVolumeType int
    self->data.AskVolume5 = SyncDeltaDepthMarketDataField_AskVolume5;
        
    ///当日均价
    // TThostFtdcPriceType double
    self->data.AveragePrice = SyncDeltaDepthMarketDataField_AveragePrice;
        
    ///业务日期
    // TThostFtdcDateType char[9]
    if( SyncDeltaDepthMarketDataField_ActionDay != NULL ) {
        if(SyncDeltaDepthMarketDataField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", SyncDeltaDepthMarketDataField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
            return -1;
        }
        // memset(self->data.ActionDay, 0, sizeof(self->data.ActionDay));
        // memcpy(self->data.ActionDay, SyncDeltaDepthMarketDataField_ActionDay, SyncDeltaDepthMarketDataField_ActionDay_len);        
        strncpy(self->data.ActionDay, SyncDeltaDepthMarketDataField_ActionDay, sizeof(self->data.ActionDay) );
        SyncDeltaDepthMarketDataField_ActionDay = NULL;
    }
            
    ///上带价
    // TThostFtdcPriceType double
    self->data.BandingUpperPrice = SyncDeltaDepthMarketDataField_BandingUpperPrice;
        
    ///下带价
    // TThostFtdcPriceType double
    self->data.BandingLowerPrice = SyncDeltaDepthMarketDataField_BandingLowerPrice;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaDepthMarketDataField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaDepthMarketDataField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaDepthMarketDataField_dealloc(PyCThostFtdcSyncDeltaDepthMarketDataField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_repr(PyCThostFtdcSyncDeltaDepthMarketDataField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:y,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:s,s:d,s:d,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"LastPrice", self->data.LastPrice 
        ,"PreSettlementPrice", self->data.PreSettlementPrice 
        ,"PreClosePrice", self->data.PreClosePrice 
        ,"PreOpenInterest", self->data.PreOpenInterest 
        ,"OpenPrice", self->data.OpenPrice 
        ,"HighestPrice", self->data.HighestPrice 
        ,"LowestPrice", self->data.LowestPrice 
        ,"Volume", self->data.Volume 
        ,"Turnover", self->data.Turnover 
        ,"OpenInterest", self->data.OpenInterest 
        ,"ClosePrice", self->data.ClosePrice 
        ,"SettlementPrice", self->data.SettlementPrice 
        ,"UpperLimitPrice", self->data.UpperLimitPrice 
        ,"LowerLimitPrice", self->data.LowerLimitPrice 
        ,"PreDelta", self->data.PreDelta 
        ,"CurrDelta", self->data.CurrDelta 
        ,"UpdateTime", self->data.UpdateTime//, (Py_ssize_t)sizeof(self->data.UpdateTime) 
        ,"UpdateMillisec", self->data.UpdateMillisec 
        ,"BidPrice1", self->data.BidPrice1 
        ,"BidVolume1", self->data.BidVolume1 
        ,"AskPrice1", self->data.AskPrice1 
        ,"AskVolume1", self->data.AskVolume1 
        ,"BidPrice2", self->data.BidPrice2 
        ,"BidVolume2", self->data.BidVolume2 
        ,"AskPrice2", self->data.AskPrice2 
        ,"AskVolume2", self->data.AskVolume2 
        ,"BidPrice3", self->data.BidPrice3 
        ,"BidVolume3", self->data.BidVolume3 
        ,"AskPrice3", self->data.AskPrice3 
        ,"AskVolume3", self->data.AskVolume3 
        ,"BidPrice4", self->data.BidPrice4 
        ,"BidVolume4", self->data.BidVolume4 
        ,"AskPrice4", self->data.AskPrice4 
        ,"AskVolume4", self->data.AskVolume4 
        ,"BidPrice5", self->data.BidPrice5 
        ,"BidVolume5", self->data.BidVolume5 
        ,"AskPrice5", self->data.AskPrice5 
        ,"AskVolume5", self->data.AskVolume5 
        ,"AveragePrice", self->data.AveragePrice 
        ,"ActionDay", self->data.ActionDay//, (Py_ssize_t)sizeof(self->data.ActionDay) 
        ,"BandingUpperPrice", self->data.BandingUpperPrice 
        ,"BandingLowerPrice", self->data.BandingLowerPrice 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDepthMarketDataField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_TradingDay(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_TradingDay(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_InstrumentID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_InstrumentID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeInstID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeInstID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///最新价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_LastPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LastPrice);
}

///最新价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_LastPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastPrice = buf;
    return 0;
}
        
///上次结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreSettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///上次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreSettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}
        
///昨收盘
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreClosePrice);
}

///昨收盘
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreClosePrice = buf;
    return 0;
}
        
///昨持仓量
// TThostFtdcLargeVolumeType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreOpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreOpenInterest);
}

///昨持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreOpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreOpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreOpenInterest = buf;
    return 0;
}
        
///今开盘
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenPrice);
}

///今开盘
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenPrice = buf;
    return 0;
}
        
///最高价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_HighestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HighestPrice);
}

///最高价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_HighestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HighestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HighestPrice = buf;
    return 0;
}
        
///最低价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowestPrice);
}

///最低价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowestPrice = buf;
    return 0;
}
        
///数量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_Volume(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_Volume(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the Volume value out of range for C int");
        return -1;
    }
    self->data.Volume = (int)buf;
    return 0;
}
        
///成交金额
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_Turnover(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Turnover);
}

///成交金额
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_Turnover(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Turnover Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Turnover = buf;
    return 0;
}
        
///持仓量
// TThostFtdcLargeVolumeType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenInterest);
}

///持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenInterest = buf;
    return 0;
}
        
///今收盘
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ClosePrice);
}

///今收盘
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ClosePrice = buf;
    return 0;
}
        
///本次结算价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_SettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///本次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_SettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SettlementPrice = buf;
    return 0;
}
        
///涨停板价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpperLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UpperLimitPrice);
}

///涨停板价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpperLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpperLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UpperLimitPrice = buf;
    return 0;
}
        
///跌停板价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowerLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowerLimitPrice);
}

///跌停板价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowerLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowerLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowerLimitPrice = buf;
    return 0;
}
        
///昨虚实度
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreDelta(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreDelta);
}

///昨虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreDelta(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreDelta = buf;
    return 0;
}
        
///今虚实度
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_CurrDelta(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrDelta);
}

///今虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_CurrDelta(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrDelta = buf;
    return 0;
}
        
///最后修改时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateTime(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UpdateTime, (Py_ssize_t)sizeof(self->data.UpdateTime));
    return PyBytes_FromString(self->data.UpdateTime);
}

///最后修改时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateTime(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
        PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.UpdateTime, 0, sizeof(self->data.UpdateTime));
    // memcpy(self->data.UpdateTime, buf, len);
    strncpy(self->data.UpdateTime, buf, sizeof(self->data.UpdateTime));
    return 0;
}
            
///最后修改毫秒
// TThostFtdcMillisecType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateMillisec(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UpdateMillisec);
#else
    return PyInt_FromLong(self->data.UpdateMillisec);
#endif
}

///最后修改毫秒
// TThostFtdcMillisecType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateMillisec(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the UpdateMillisec value out of range for C int");
        return -1;
    }
    self->data.UpdateMillisec = (int)buf;
    return 0;
}
        
///申买价一
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice1);
}

///申买价一
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice1 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice1 = buf;
    return 0;
}
        
///申买量一
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume1);
#else
    return PyInt_FromLong(self->data.BidVolume1);
#endif
}

///申买量一
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume1 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume1 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the BidVolume1 value out of range for C int");
        return -1;
    }
    self->data.BidVolume1 = (int)buf;
    return 0;
}
        
///申卖价一
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice1);
}

///申卖价一
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice1 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice1 = buf;
    return 0;
}
        
///申卖量一
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume1);
#else
    return PyInt_FromLong(self->data.AskVolume1);
#endif
}

///申卖量一
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume1 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume1 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the AskVolume1 value out of range for C int");
        return -1;
    }
    self->data.AskVolume1 = (int)buf;
    return 0;
}
        
///申买价二
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice2);
}

///申买价二
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice2 = buf;
    return 0;
}
        
///申买量二
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume2);
#else
    return PyInt_FromLong(self->data.BidVolume2);
#endif
}

///申买量二
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume2 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume2 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the BidVolume2 value out of range for C int");
        return -1;
    }
    self->data.BidVolume2 = (int)buf;
    return 0;
}
        
///申卖价二
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice2);
}

///申卖价二
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice2 = buf;
    return 0;
}
        
///申卖量二
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume2);
#else
    return PyInt_FromLong(self->data.AskVolume2);
#endif
}

///申卖量二
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume2 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume2 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the AskVolume2 value out of range for C int");
        return -1;
    }
    self->data.AskVolume2 = (int)buf;
    return 0;
}
        
///申买价三
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice3);
}

///申买价三
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice3 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice3 = buf;
    return 0;
}
        
///申买量三
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume3);
#else
    return PyInt_FromLong(self->data.BidVolume3);
#endif
}

///申买量三
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume3 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume3 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the BidVolume3 value out of range for C int");
        return -1;
    }
    self->data.BidVolume3 = (int)buf;
    return 0;
}
        
///申卖价三
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice3);
}

///申卖价三
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice3 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice3 = buf;
    return 0;
}
        
///申卖量三
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume3);
#else
    return PyInt_FromLong(self->data.AskVolume3);
#endif
}

///申卖量三
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume3 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume3 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the AskVolume3 value out of range for C int");
        return -1;
    }
    self->data.AskVolume3 = (int)buf;
    return 0;
}
        
///申买价四
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice4);
}

///申买价四
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice4 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice4 = buf;
    return 0;
}
        
///申买量四
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume4);
#else
    return PyInt_FromLong(self->data.BidVolume4);
#endif
}

///申买量四
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume4 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume4 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the BidVolume4 value out of range for C int");
        return -1;
    }
    self->data.BidVolume4 = (int)buf;
    return 0;
}
        
///申卖价四
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice4);
}

///申卖价四
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice4 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice4 = buf;
    return 0;
}
        
///申卖量四
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume4);
#else
    return PyInt_FromLong(self->data.AskVolume4);
#endif
}

///申卖量四
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume4 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume4 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the AskVolume4 value out of range for C int");
        return -1;
    }
    self->data.AskVolume4 = (int)buf;
    return 0;
}
        
///申买价五
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice5);
}

///申买价五
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice5 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice5 = buf;
    return 0;
}
        
///申买量五
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume5);
#else
    return PyInt_FromLong(self->data.BidVolume5);
#endif
}

///申买量五
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume5 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume5 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the BidVolume5 value out of range for C int");
        return -1;
    }
    self->data.BidVolume5 = (int)buf;
    return 0;
}
        
///申卖价五
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice5);
}

///申卖价五
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice5 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice5 = buf;
    return 0;
}
        
///申卖量五
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume5);
#else
    return PyInt_FromLong(self->data.AskVolume5);
#endif
}

///申卖量五
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume5 Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume5 Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the AskVolume5 value out of range for C int");
        return -1;
    }
    self->data.AskVolume5 = (int)buf;
    return 0;
}
        
///当日均价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AveragePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AveragePrice);
}

///当日均价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AveragePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AveragePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AveragePrice = buf;
    return 0;
}
        
///业务日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDay(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDay, (Py_ssize_t)sizeof(self->data.ActionDay));
    return PyBytes_FromString(self->data.ActionDay);
}

///业务日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDay(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionDay, 0, sizeof(self->data.ActionDay));
    // memcpy(self->data.ActionDay, buf, len);
    strncpy(self->data.ActionDay, buf, sizeof(self->data.ActionDay));
    return 0;
}
            
///上带价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingUpperPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BandingUpperPrice);
}

///上带价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingUpperPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BandingUpperPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BandingUpperPrice = buf;
    return 0;
}
        
///下带价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingLowerPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BandingLowerPrice);
}

///下带价
// TThostFtdcPriceType double
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingLowerPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BandingLowerPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BandingLowerPrice = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDirection(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDirection(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
        PyErr_SetString(PyExc_ValueError, "ActionDirection must be equal 1 bytes");
        return -1;
    }
    self->data.ActionDirection = *buf;
    return 0;
}
            
///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the SyncDeltaSequenceNo value out of range for C int");
        return -1;
    }
    self->data.SyncDeltaSequenceNo = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcSyncDeltaDepthMarketDataField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_TradingDay, (char *)"TradingDay", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///最新价 
    {(char *)"LastPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_LastPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_LastPrice, (char *)"LastPrice", NULL},
    ///上次结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreSettlementPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///昨收盘 
    {(char *)"PreClosePrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreClosePrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
    ///昨持仓量 
    {(char *)"PreOpenInterest", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreOpenInterest, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
    ///今开盘 
    {(char *)"OpenPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenPrice, (char *)"OpenPrice", NULL},
    ///最高价 
    {(char *)"HighestPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_HighestPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_HighestPrice, (char *)"HighestPrice", NULL},
    ///最低价 
    {(char *)"LowestPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowestPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowestPrice, (char *)"LowestPrice", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_Volume, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_Volume, (char *)"Volume", NULL},
    ///成交金额 
    {(char *)"Turnover", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_Turnover, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_Turnover, (char *)"Turnover", NULL},
    ///持仓量 
    {(char *)"OpenInterest", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenInterest, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenInterest, (char *)"OpenInterest", NULL},
    ///今收盘 
    {(char *)"ClosePrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ClosePrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ClosePrice, (char *)"ClosePrice", NULL},
    ///本次结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_SettlementPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///涨停板价 
    {(char *)"UpperLimitPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpperLimitPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpperLimitPrice, (char *)"UpperLimitPrice", NULL},
    ///跌停板价 
    {(char *)"LowerLimitPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowerLimitPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowerLimitPrice, (char *)"LowerLimitPrice", NULL},
    ///昨虚实度 
    {(char *)"PreDelta", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreDelta, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreDelta, (char *)"PreDelta", NULL},
    ///今虚实度 
    {(char *)"CurrDelta", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_CurrDelta, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_CurrDelta, (char *)"CurrDelta", NULL},
    ///最后修改时间 
    {(char *)"UpdateTime", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateTime, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateTime, (char *)"UpdateTime", NULL},
    ///最后修改毫秒 
    {(char *)"UpdateMillisec", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateMillisec, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateMillisec, (char *)"UpdateMillisec", NULL},
    ///申买价一 
    {(char *)"BidPrice1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice1, (char *)"BidPrice1", NULL},
    ///申买量一 
    {(char *)"BidVolume1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume1, (char *)"BidVolume1", NULL},
    ///申卖价一 
    {(char *)"AskPrice1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice1, (char *)"AskPrice1", NULL},
    ///申卖量一 
    {(char *)"AskVolume1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume1, (char *)"AskVolume1", NULL},
    ///申买价二 
    {(char *)"BidPrice2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice2, (char *)"BidPrice2", NULL},
    ///申买量二 
    {(char *)"BidVolume2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume2, (char *)"BidVolume2", NULL},
    ///申卖价二 
    {(char *)"AskPrice2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice2, (char *)"AskPrice2", NULL},
    ///申卖量二 
    {(char *)"AskVolume2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume2, (char *)"AskVolume2", NULL},
    ///申买价三 
    {(char *)"BidPrice3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice3, (char *)"BidPrice3", NULL},
    ///申买量三 
    {(char *)"BidVolume3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume3, (char *)"BidVolume3", NULL},
    ///申卖价三 
    {(char *)"AskPrice3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice3, (char *)"AskPrice3", NULL},
    ///申卖量三 
    {(char *)"AskVolume3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume3, (char *)"AskVolume3", NULL},
    ///申买价四 
    {(char *)"BidPrice4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice4, (char *)"BidPrice4", NULL},
    ///申买量四 
    {(char *)"BidVolume4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume4, (char *)"BidVolume4", NULL},
    ///申卖价四 
    {(char *)"AskPrice4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice4, (char *)"AskPrice4", NULL},
    ///申卖量四 
    {(char *)"AskVolume4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume4, (char *)"AskVolume4", NULL},
    ///申买价五 
    {(char *)"BidPrice5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice5, (char *)"BidPrice5", NULL},
    ///申买量五 
    {(char *)"BidVolume5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume5, (char *)"BidVolume5", NULL},
    ///申卖价五 
    {(char *)"AskPrice5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice5, (char *)"AskPrice5", NULL},
    ///申卖量五 
    {(char *)"AskVolume5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume5, (char *)"AskVolume5", NULL},
    ///当日均价 
    {(char *)"AveragePrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AveragePrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AveragePrice, (char *)"AveragePrice", NULL},
    ///业务日期 
    {(char *)"ActionDay", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDay, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDay, (char *)"ActionDay", NULL},
    ///上带价 
    {(char *)"BandingUpperPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingUpperPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingUpperPrice, (char *)"BandingUpperPrice", NULL},
    ///下带价 
    {(char *)"BandingLowerPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingLowerPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingLowerPrice, (char *)"BandingLowerPrice", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaDepthMarketDataFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaDepthMarketDataField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaDepthMarketDataField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaDepthMarketDataField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaDepthMarketDataField_repr,   /* tp_repr */
	0,                          /* tp_as_number */
	0,                          /* tp_as_sequence */
	0,                          /* tp_as_mapping */
	0,                          /* tp_hash  */
	0,                          /* tp_call */
	0,                          /* tp_str */
	0,                          /* tp_getattro */
	0,                          /* tp_setattro */
	0,                          /* tp_as_buffer */
	Py_TPFLAGS_DEFAULT,         /* tp_flags */
	"CThostFtdcSyncDeltaDepthMarketDataField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaDepthMarketDataField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaDepthMarketDataField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaDepthMarketDataField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaDepthMarketDataField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaDepthMarketDataFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaDepthMarketDataField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaDepthMarketDataFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaDepthMarketDataField", (PyObject *)&PyCThostFtdcSyncDeltaDepthMarketDataFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaDepthMarketDataField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaDepthMarketDataFieldType);
		return -1;
    }

    return 0;
}
