
#include "PyCThostFtdcDepthMarketDataField.h"

///深度行情

static PyObject *PyCThostFtdcDepthMarketDataField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDepthMarketDataField *self = (PyCThostFtdcDepthMarketDataField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcDepthMarketDataField_init(PyCThostFtdcDepthMarketDataField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "reserve1", "ExchangeID", "reserve2", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1", "BidPrice2", "BidVolume2", "AskPrice2", "AskVolume2", "BidPrice3", "BidVolume3", "AskPrice3", "AskVolume3", "BidPrice4", "BidVolume4", "AskPrice4", "AskVolume4", "BidPrice5", "BidVolume5", "AskPrice5", "AskVolume5", "AveragePrice", "ActionDay", "InstrumentID", "ExchangeInstID", "BandingUpperPrice", "BandingLowerPrice",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *DepthMarketDataField_TradingDay = NULL;
    Py_ssize_t DepthMarketDataField_TradingDay_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *DepthMarketDataField_reserve1 = NULL;
    Py_ssize_t DepthMarketDataField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *DepthMarketDataField_ExchangeID = NULL;
    Py_ssize_t DepthMarketDataField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *DepthMarketDataField_reserve2 = NULL;
    Py_ssize_t DepthMarketDataField_reserve2_len = 0;
            
    ///最新价
    // TThostFtdcPriceType double
    double DepthMarketDataField_LastPrice = 0.0;
        
    ///上次结算价
    // TThostFtdcPriceType double
    double DepthMarketDataField_PreSettlementPrice = 0.0;
        
    ///昨收盘
    // TThostFtdcPriceType double
    double DepthMarketDataField_PreClosePrice = 0.0;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    double DepthMarketDataField_PreOpenInterest = 0.0;
        
    ///今开盘
    // TThostFtdcPriceType double
    double DepthMarketDataField_OpenPrice = 0.0;
        
    ///最高价
    // TThostFtdcPriceType double
    double DepthMarketDataField_HighestPrice = 0.0;
        
    ///最低价
    // TThostFtdcPriceType double
    double DepthMarketDataField_LowestPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int DepthMarketDataField_Volume = 0;
        
    ///成交金额
    // TThostFtdcMoneyType double
    double DepthMarketDataField_Turnover = 0.0;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    double DepthMarketDataField_OpenInterest = 0.0;
        
    ///今收盘
    // TThostFtdcPriceType double
    double DepthMarketDataField_ClosePrice = 0.0;
        
    ///本次结算价
    // TThostFtdcPriceType double
    double DepthMarketDataField_SettlementPrice = 0.0;
        
    ///涨停板价
    // TThostFtdcPriceType double
    double DepthMarketDataField_UpperLimitPrice = 0.0;
        
    ///跌停板价
    // TThostFtdcPriceType double
    double DepthMarketDataField_LowerLimitPrice = 0.0;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    double DepthMarketDataField_PreDelta = 0.0;
        
    ///今虚实度
    // TThostFtdcRatioType double
    double DepthMarketDataField_CurrDelta = 0.0;
        
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    const char *DepthMarketDataField_UpdateTime = NULL;
    Py_ssize_t DepthMarketDataField_UpdateTime_len = 0;
            
    ///最后修改毫秒
    // TThostFtdcMillisecType int
    int DepthMarketDataField_UpdateMillisec = 0;
        
    ///申买价一
    // TThostFtdcPriceType double
    double DepthMarketDataField_BidPrice1 = 0.0;
        
    ///申买量一
    // TThostFtdcVolumeType int
    int DepthMarketDataField_BidVolume1 = 0;
        
    ///申卖价一
    // TThostFtdcPriceType double
    double DepthMarketDataField_AskPrice1 = 0.0;
        
    ///申卖量一
    // TThostFtdcVolumeType int
    int DepthMarketDataField_AskVolume1 = 0;
        
    ///申买价二
    // TThostFtdcPriceType double
    double DepthMarketDataField_BidPrice2 = 0.0;
        
    ///申买量二
    // TThostFtdcVolumeType int
    int DepthMarketDataField_BidVolume2 = 0;
        
    ///申卖价二
    // TThostFtdcPriceType double
    double DepthMarketDataField_AskPrice2 = 0.0;
        
    ///申卖量二
    // TThostFtdcVolumeType int
    int DepthMarketDataField_AskVolume2 = 0;
        
    ///申买价三
    // TThostFtdcPriceType double
    double DepthMarketDataField_BidPrice3 = 0.0;
        
    ///申买量三
    // TThostFtdcVolumeType int
    int DepthMarketDataField_BidVolume3 = 0;
        
    ///申卖价三
    // TThostFtdcPriceType double
    double DepthMarketDataField_AskPrice3 = 0.0;
        
    ///申卖量三
    // TThostFtdcVolumeType int
    int DepthMarketDataField_AskVolume3 = 0;
        
    ///申买价四
    // TThostFtdcPriceType double
    double DepthMarketDataField_BidPrice4 = 0.0;
        
    ///申买量四
    // TThostFtdcVolumeType int
    int DepthMarketDataField_BidVolume4 = 0;
        
    ///申卖价四
    // TThostFtdcPriceType double
    double DepthMarketDataField_AskPrice4 = 0.0;
        
    ///申卖量四
    // TThostFtdcVolumeType int
    int DepthMarketDataField_AskVolume4 = 0;
        
    ///申买价五
    // TThostFtdcPriceType double
    double DepthMarketDataField_BidPrice5 = 0.0;
        
    ///申买量五
    // TThostFtdcVolumeType int
    int DepthMarketDataField_BidVolume5 = 0;
        
    ///申卖价五
    // TThostFtdcPriceType double
    double DepthMarketDataField_AskPrice5 = 0.0;
        
    ///申卖量五
    // TThostFtdcVolumeType int
    int DepthMarketDataField_AskVolume5 = 0;
        
    ///当日均价
    // TThostFtdcPriceType double
    double DepthMarketDataField_AveragePrice = 0.0;
        
    ///业务日期
    // TThostFtdcDateType char[9]
    const char *DepthMarketDataField_ActionDay = NULL;
    Py_ssize_t DepthMarketDataField_ActionDay_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *DepthMarketDataField_InstrumentID = NULL;
    Py_ssize_t DepthMarketDataField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *DepthMarketDataField_ExchangeInstID = NULL;
    Py_ssize_t DepthMarketDataField_ExchangeInstID_len = 0;
            
    ///上带价
    // TThostFtdcPriceType double
    double DepthMarketDataField_BandingUpperPrice = 0.0;
        
    ///下带价
    // TThostFtdcPriceType double
    double DepthMarketDataField_BandingLowerPrice = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#idididididididididididy#y#y#dd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddddddidddddddds#ididididididididididids#s#s#dd", (char **)kwlist
#endif

        , &DepthMarketDataField_TradingDay, &DepthMarketDataField_TradingDay_len 
        , &DepthMarketDataField_reserve1, &DepthMarketDataField_reserve1_len 
        , &DepthMarketDataField_ExchangeID, &DepthMarketDataField_ExchangeID_len 
        , &DepthMarketDataField_reserve2, &DepthMarketDataField_reserve2_len 
        , &DepthMarketDataField_LastPrice 
        , &DepthMarketDataField_PreSettlementPrice 
        , &DepthMarketDataField_PreClosePrice 
        , &DepthMarketDataField_PreOpenInterest 
        , &DepthMarketDataField_OpenPrice 
        , &DepthMarketDataField_HighestPrice 
        , &DepthMarketDataField_LowestPrice 
        , &DepthMarketDataField_Volume 
        , &DepthMarketDataField_Turnover 
        , &DepthMarketDataField_OpenInterest 
        , &DepthMarketDataField_ClosePrice 
        , &DepthMarketDataField_SettlementPrice 
        , &DepthMarketDataField_UpperLimitPrice 
        , &DepthMarketDataField_LowerLimitPrice 
        , &DepthMarketDataField_PreDelta 
        , &DepthMarketDataField_CurrDelta 
        , &DepthMarketDataField_UpdateTime, &DepthMarketDataField_UpdateTime_len 
        , &DepthMarketDataField_UpdateMillisec 
        , &DepthMarketDataField_BidPrice1 
        , &DepthMarketDataField_BidVolume1 
        , &DepthMarketDataField_AskPrice1 
        , &DepthMarketDataField_AskVolume1 
        , &DepthMarketDataField_BidPrice2 
        , &DepthMarketDataField_BidVolume2 
        , &DepthMarketDataField_AskPrice2 
        , &DepthMarketDataField_AskVolume2 
        , &DepthMarketDataField_BidPrice3 
        , &DepthMarketDataField_BidVolume3 
        , &DepthMarketDataField_AskPrice3 
        , &DepthMarketDataField_AskVolume3 
        , &DepthMarketDataField_BidPrice4 
        , &DepthMarketDataField_BidVolume4 
        , &DepthMarketDataField_AskPrice4 
        , &DepthMarketDataField_AskVolume4 
        , &DepthMarketDataField_BidPrice5 
        , &DepthMarketDataField_BidVolume5 
        , &DepthMarketDataField_AskPrice5 
        , &DepthMarketDataField_AskVolume5 
        , &DepthMarketDataField_AveragePrice 
        , &DepthMarketDataField_ActionDay, &DepthMarketDataField_ActionDay_len 
        , &DepthMarketDataField_InstrumentID, &DepthMarketDataField_InstrumentID_len 
        , &DepthMarketDataField_ExchangeInstID, &DepthMarketDataField_ExchangeInstID_len 
        , &DepthMarketDataField_BandingUpperPrice 
        , &DepthMarketDataField_BandingLowerPrice 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( DepthMarketDataField_TradingDay != NULL ) {
        if(DepthMarketDataField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", DepthMarketDataField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, DepthMarketDataField_TradingDay, DepthMarketDataField_TradingDay_len);        
        strncpy(self->data.TradingDay, DepthMarketDataField_TradingDay, sizeof(self->data.TradingDay) );
        DepthMarketDataField_TradingDay = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( DepthMarketDataField_reserve1 != NULL ) {
        if(DepthMarketDataField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", DepthMarketDataField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, DepthMarketDataField_reserve1, DepthMarketDataField_reserve1_len);        
        strncpy(self->data.reserve1, DepthMarketDataField_reserve1, sizeof(self->data.reserve1) );
        DepthMarketDataField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( DepthMarketDataField_ExchangeID != NULL ) {
        if(DepthMarketDataField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", DepthMarketDataField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, DepthMarketDataField_ExchangeID, DepthMarketDataField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, DepthMarketDataField_ExchangeID, sizeof(self->data.ExchangeID) );
        DepthMarketDataField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( DepthMarketDataField_reserve2 != NULL ) {
        if(DepthMarketDataField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", DepthMarketDataField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, DepthMarketDataField_reserve2, DepthMarketDataField_reserve2_len);        
        strncpy(self->data.reserve2, DepthMarketDataField_reserve2, sizeof(self->data.reserve2) );
        DepthMarketDataField_reserve2 = NULL;
    }
            
    ///最新价
    // TThostFtdcPriceType double
    self->data.LastPrice = DepthMarketDataField_LastPrice;
        
    ///上次结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = DepthMarketDataField_PreSettlementPrice;
        
    ///昨收盘
    // TThostFtdcPriceType double
    self->data.PreClosePrice = DepthMarketDataField_PreClosePrice;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    self->data.PreOpenInterest = DepthMarketDataField_PreOpenInterest;
        
    ///今开盘
    // TThostFtdcPriceType double
    self->data.OpenPrice = DepthMarketDataField_OpenPrice;
        
    ///最高价
    // TThostFtdcPriceType double
    self->data.HighestPrice = DepthMarketDataField_HighestPrice;
        
    ///最低价
    // TThostFtdcPriceType double
    self->data.LowestPrice = DepthMarketDataField_LowestPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = DepthMarketDataField_Volume;
        
    ///成交金额
    // TThostFtdcMoneyType double
    self->data.Turnover = DepthMarketDataField_Turnover;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    self->data.OpenInterest = DepthMarketDataField_OpenInterest;
        
    ///今收盘
    // TThostFtdcPriceType double
    self->data.ClosePrice = DepthMarketDataField_ClosePrice;
        
    ///本次结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = DepthMarketDataField_SettlementPrice;
        
    ///涨停板价
    // TThostFtdcPriceType double
    self->data.UpperLimitPrice = DepthMarketDataField_UpperLimitPrice;
        
    ///跌停板价
    // TThostFtdcPriceType double
    self->data.LowerLimitPrice = DepthMarketDataField_LowerLimitPrice;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    self->data.PreDelta = DepthMarketDataField_PreDelta;
        
    ///今虚实度
    // TThostFtdcRatioType double
    self->data.CurrDelta = DepthMarketDataField_CurrDelta;
        
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    if( DepthMarketDataField_UpdateTime != NULL ) {
        if(DepthMarketDataField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", DepthMarketDataField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
            return -1;
        }
        // memset(self->data.UpdateTime, 0, sizeof(self->data.UpdateTime));
        // memcpy(self->data.UpdateTime, DepthMarketDataField_UpdateTime, DepthMarketDataField_UpdateTime_len);        
        strncpy(self->data.UpdateTime, DepthMarketDataField_UpdateTime, sizeof(self->data.UpdateTime) );
        DepthMarketDataField_UpdateTime = NULL;
    }
            
    ///最后修改毫秒
    // TThostFtdcMillisecType int
    self->data.UpdateMillisec = DepthMarketDataField_UpdateMillisec;
        
    ///申买价一
    // TThostFtdcPriceType double
    self->data.BidPrice1 = DepthMarketDataField_BidPrice1;
        
    ///申买量一
    // TThostFtdcVolumeType int
    self->data.BidVolume1 = DepthMarketDataField_BidVolume1;
        
    ///申卖价一
    // TThostFtdcPriceType double
    self->data.AskPrice1 = DepthMarketDataField_AskPrice1;
        
    ///申卖量一
    // TThostFtdcVolumeType int
    self->data.AskVolume1 = DepthMarketDataField_AskVolume1;
        
    ///申买价二
    // TThostFtdcPriceType double
    self->data.BidPrice2 = DepthMarketDataField_BidPrice2;
        
    ///申买量二
    // TThostFtdcVolumeType int
    self->data.BidVolume2 = DepthMarketDataField_BidVolume2;
        
    ///申卖价二
    // TThostFtdcPriceType double
    self->data.AskPrice2 = DepthMarketDataField_AskPrice2;
        
    ///申卖量二
    // TThostFtdcVolumeType int
    self->data.AskVolume2 = DepthMarketDataField_AskVolume2;
        
    ///申买价三
    // TThostFtdcPriceType double
    self->data.BidPrice3 = DepthMarketDataField_BidPrice3;
        
    ///申买量三
    // TThostFtdcVolumeType int
    self->data.BidVolume3 = DepthMarketDataField_BidVolume3;
        
    ///申卖价三
    // TThostFtdcPriceType double
    self->data.AskPrice3 = DepthMarketDataField_AskPrice3;
        
    ///申卖量三
    // TThostFtdcVolumeType int
    self->data.AskVolume3 = DepthMarketDataField_AskVolume3;
        
    ///申买价四
    // TThostFtdcPriceType double
    self->data.BidPrice4 = DepthMarketDataField_BidPrice4;
        
    ///申买量四
    // TThostFtdcVolumeType int
    self->data.BidVolume4 = DepthMarketDataField_BidVolume4;
        
    ///申卖价四
    // TThostFtdcPriceType double
    self->data.AskPrice4 = DepthMarketDataField_AskPrice4;
        
    ///申卖量四
    // TThostFtdcVolumeType int
    self->data.AskVolume4 = DepthMarketDataField_AskVolume4;
        
    ///申买价五
    // TThostFtdcPriceType double
    self->data.BidPrice5 = DepthMarketDataField_BidPrice5;
        
    ///申买量五
    // TThostFtdcVolumeType int
    self->data.BidVolume5 = DepthMarketDataField_BidVolume5;
        
    ///申卖价五
    // TThostFtdcPriceType double
    self->data.AskPrice5 = DepthMarketDataField_AskPrice5;
        
    ///申卖量五
    // TThostFtdcVolumeType int
    self->data.AskVolume5 = DepthMarketDataField_AskVolume5;
        
    ///当日均价
    // TThostFtdcPriceType double
    self->data.AveragePrice = DepthMarketDataField_AveragePrice;
        
    ///业务日期
    // TThostFtdcDateType char[9]
    if( DepthMarketDataField_ActionDay != NULL ) {
        if(DepthMarketDataField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", DepthMarketDataField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
            return -1;
        }
        // memset(self->data.ActionDay, 0, sizeof(self->data.ActionDay));
        // memcpy(self->data.ActionDay, DepthMarketDataField_ActionDay, DepthMarketDataField_ActionDay_len);        
        strncpy(self->data.ActionDay, DepthMarketDataField_ActionDay, sizeof(self->data.ActionDay) );
        DepthMarketDataField_ActionDay = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( DepthMarketDataField_InstrumentID != NULL ) {
        if(DepthMarketDataField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", DepthMarketDataField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, DepthMarketDataField_InstrumentID, DepthMarketDataField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, DepthMarketDataField_InstrumentID, sizeof(self->data.InstrumentID) );
        DepthMarketDataField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( DepthMarketDataField_ExchangeInstID != NULL ) {
        if(DepthMarketDataField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", DepthMarketDataField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, DepthMarketDataField_ExchangeInstID, DepthMarketDataField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, DepthMarketDataField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        DepthMarketDataField_ExchangeInstID = NULL;
    }
            
    ///上带价
    // TThostFtdcPriceType double
    self->data.BandingUpperPrice = DepthMarketDataField_BandingUpperPrice;
        
    ///下带价
    // TThostFtdcPriceType double
    self->data.BandingLowerPrice = DepthMarketDataField_BandingLowerPrice;
        

    return 0;
}

static void PyCThostFtdcDepthMarketDataField_dealloc(PyCThostFtdcDepthMarketDataField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDepthMarketDataField_repr(PyCThostFtdcDepthMarketDataField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:y,s:y,s:y,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:s,s:s,s:s,s:d,s:d}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
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
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"BandingUpperPrice", self->data.BandingUpperPrice 
        ,"BandingLowerPrice", self->data.BandingLowerPrice 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepthMarketDataField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcDepthMarketDataField_get_TradingDay(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcDepthMarketDataField_set_TradingDay(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcDepthMarketDataField_get_reserve1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcDepthMarketDataField_set_reserve1(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcDepthMarketDataField_get_ExchangeID(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcDepthMarketDataField_set_ExchangeID(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcDepthMarketDataField_get_reserve2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcDepthMarketDataField_set_reserve2(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///最新价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcDepthMarketDataField_get_LastPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LastPrice);
}

///最新价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_LastPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_PreSettlementPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///上次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_PreSettlementPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_PreClosePrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreClosePrice);
}

///昨收盘
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_PreClosePrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_PreOpenInterest(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreOpenInterest);
}

///昨持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcDepthMarketDataField_set_PreOpenInterest(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_OpenPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenPrice);
}

///今开盘
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_OpenPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_HighestPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HighestPrice);
}

///最高价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_HighestPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_LowestPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowestPrice);
}

///最低价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_LowestPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_Volume(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_Volume(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_Turnover(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Turnover);
}

///成交金额
// TThostFtdcMoneyType double
static int PyCThostFtdcDepthMarketDataField_set_Turnover(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_OpenInterest(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenInterest);
}

///持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcDepthMarketDataField_set_OpenInterest(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_ClosePrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ClosePrice);
}

///今收盘
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_ClosePrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_SettlementPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///本次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_SettlementPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_UpperLimitPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UpperLimitPrice);
}

///涨停板价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_UpperLimitPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_LowerLimitPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowerLimitPrice);
}

///跌停板价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_LowerLimitPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_PreDelta(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreDelta);
}

///昨虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcDepthMarketDataField_set_PreDelta(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_CurrDelta(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrDelta);
}

///今虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcDepthMarketDataField_set_CurrDelta(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_UpdateTime(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UpdateTime, (Py_ssize_t)sizeof(self->data.UpdateTime));
    return PyBytes_FromString(self->data.UpdateTime);
}

///最后修改时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcDepthMarketDataField_set_UpdateTime(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_UpdateMillisec(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UpdateMillisec);
#else
    return PyInt_FromLong(self->data.UpdateMillisec);
#endif
}

///最后修改毫秒
// TThostFtdcMillisecType int
static int PyCThostFtdcDepthMarketDataField_set_UpdateMillisec(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice1);
}

///申买价一
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_BidPrice1(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume1);
#else
    return PyInt_FromLong(self->data.BidVolume1);
#endif
}

///申买量一
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_BidVolume1(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice1);
}

///申卖价一
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_AskPrice1(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume1);
#else
    return PyInt_FromLong(self->data.AskVolume1);
#endif
}

///申卖量一
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_AskVolume1(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice2);
}

///申买价二
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_BidPrice2(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume2);
#else
    return PyInt_FromLong(self->data.BidVolume2);
#endif
}

///申买量二
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_BidVolume2(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice2);
}

///申卖价二
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_AskPrice2(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume2);
#else
    return PyInt_FromLong(self->data.AskVolume2);
#endif
}

///申卖量二
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_AskVolume2(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice3);
}

///申买价三
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_BidPrice3(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume3);
#else
    return PyInt_FromLong(self->data.BidVolume3);
#endif
}

///申买量三
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_BidVolume3(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice3);
}

///申卖价三
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_AskPrice3(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume3);
#else
    return PyInt_FromLong(self->data.AskVolume3);
#endif
}

///申卖量三
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_AskVolume3(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice4);
}

///申买价四
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_BidPrice4(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume4);
#else
    return PyInt_FromLong(self->data.BidVolume4);
#endif
}

///申买量四
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_BidVolume4(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice4);
}

///申卖价四
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_AskPrice4(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume4);
#else
    return PyInt_FromLong(self->data.AskVolume4);
#endif
}

///申卖量四
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_AskVolume4(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BidPrice5);
}

///申买价五
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_BidPrice5(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.BidVolume5);
#else
    return PyInt_FromLong(self->data.BidVolume5);
#endif
}

///申买量五
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_BidVolume5(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AskPrice5);
}

///申卖价五
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_AskPrice5(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.AskVolume5);
#else
    return PyInt_FromLong(self->data.AskVolume5);
#endif
}

///申卖量五
// TThostFtdcVolumeType int
static int PyCThostFtdcDepthMarketDataField_set_AskVolume5(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_AveragePrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AveragePrice);
}

///当日均价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_AveragePrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_ActionDay(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDay, (Py_ssize_t)sizeof(self->data.ActionDay));
    return PyBytes_FromString(self->data.ActionDay);
}

///业务日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcDepthMarketDataField_set_ActionDay(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcDepthMarketDataField_get_InstrumentID(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcDepthMarketDataField_set_InstrumentID(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcDepthMarketDataField_get_ExchangeInstID(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcDepthMarketDataField_set_ExchangeInstID(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
            
///上带价
// TThostFtdcPriceType double
static PyObject *PyCThostFtdcDepthMarketDataField_get_BandingUpperPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BandingUpperPrice);
}

///上带价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_BandingUpperPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcDepthMarketDataField_get_BandingLowerPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.BandingLowerPrice);
}

///下带价
// TThostFtdcPriceType double
static int PyCThostFtdcDepthMarketDataField_set_BandingLowerPrice(PyCThostFtdcDepthMarketDataField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcDepthMarketDataField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcDepthMarketDataField_get_TradingDay, (setter)PyCThostFtdcDepthMarketDataField_set_TradingDay, (char *)"TradingDay", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcDepthMarketDataField_get_reserve1, (setter)PyCThostFtdcDepthMarketDataField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcDepthMarketDataField_get_ExchangeID, (setter)PyCThostFtdcDepthMarketDataField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcDepthMarketDataField_get_reserve2, (setter)PyCThostFtdcDepthMarketDataField_set_reserve2, (char *)"reserve2", NULL},
    ///最新价 
    {(char *)"LastPrice", (getter)PyCThostFtdcDepthMarketDataField_get_LastPrice, (setter)PyCThostFtdcDepthMarketDataField_set_LastPrice, (char *)"LastPrice", NULL},
    ///上次结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcDepthMarketDataField_get_PreSettlementPrice, (setter)PyCThostFtdcDepthMarketDataField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///昨收盘 
    {(char *)"PreClosePrice", (getter)PyCThostFtdcDepthMarketDataField_get_PreClosePrice, (setter)PyCThostFtdcDepthMarketDataField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
    ///昨持仓量 
    {(char *)"PreOpenInterest", (getter)PyCThostFtdcDepthMarketDataField_get_PreOpenInterest, (setter)PyCThostFtdcDepthMarketDataField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
    ///今开盘 
    {(char *)"OpenPrice", (getter)PyCThostFtdcDepthMarketDataField_get_OpenPrice, (setter)PyCThostFtdcDepthMarketDataField_set_OpenPrice, (char *)"OpenPrice", NULL},
    ///最高价 
    {(char *)"HighestPrice", (getter)PyCThostFtdcDepthMarketDataField_get_HighestPrice, (setter)PyCThostFtdcDepthMarketDataField_set_HighestPrice, (char *)"HighestPrice", NULL},
    ///最低价 
    {(char *)"LowestPrice", (getter)PyCThostFtdcDepthMarketDataField_get_LowestPrice, (setter)PyCThostFtdcDepthMarketDataField_set_LowestPrice, (char *)"LowestPrice", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcDepthMarketDataField_get_Volume, (setter)PyCThostFtdcDepthMarketDataField_set_Volume, (char *)"Volume", NULL},
    ///成交金额 
    {(char *)"Turnover", (getter)PyCThostFtdcDepthMarketDataField_get_Turnover, (setter)PyCThostFtdcDepthMarketDataField_set_Turnover, (char *)"Turnover", NULL},
    ///持仓量 
    {(char *)"OpenInterest", (getter)PyCThostFtdcDepthMarketDataField_get_OpenInterest, (setter)PyCThostFtdcDepthMarketDataField_set_OpenInterest, (char *)"OpenInterest", NULL},
    ///今收盘 
    {(char *)"ClosePrice", (getter)PyCThostFtdcDepthMarketDataField_get_ClosePrice, (setter)PyCThostFtdcDepthMarketDataField_set_ClosePrice, (char *)"ClosePrice", NULL},
    ///本次结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcDepthMarketDataField_get_SettlementPrice, (setter)PyCThostFtdcDepthMarketDataField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///涨停板价 
    {(char *)"UpperLimitPrice", (getter)PyCThostFtdcDepthMarketDataField_get_UpperLimitPrice, (setter)PyCThostFtdcDepthMarketDataField_set_UpperLimitPrice, (char *)"UpperLimitPrice", NULL},
    ///跌停板价 
    {(char *)"LowerLimitPrice", (getter)PyCThostFtdcDepthMarketDataField_get_LowerLimitPrice, (setter)PyCThostFtdcDepthMarketDataField_set_LowerLimitPrice, (char *)"LowerLimitPrice", NULL},
    ///昨虚实度 
    {(char *)"PreDelta", (getter)PyCThostFtdcDepthMarketDataField_get_PreDelta, (setter)PyCThostFtdcDepthMarketDataField_set_PreDelta, (char *)"PreDelta", NULL},
    ///今虚实度 
    {(char *)"CurrDelta", (getter)PyCThostFtdcDepthMarketDataField_get_CurrDelta, (setter)PyCThostFtdcDepthMarketDataField_set_CurrDelta, (char *)"CurrDelta", NULL},
    ///最后修改时间 
    {(char *)"UpdateTime", (getter)PyCThostFtdcDepthMarketDataField_get_UpdateTime, (setter)PyCThostFtdcDepthMarketDataField_set_UpdateTime, (char *)"UpdateTime", NULL},
    ///最后修改毫秒 
    {(char *)"UpdateMillisec", (getter)PyCThostFtdcDepthMarketDataField_get_UpdateMillisec, (setter)PyCThostFtdcDepthMarketDataField_set_UpdateMillisec, (char *)"UpdateMillisec", NULL},
    ///申买价一 
    {(char *)"BidPrice1", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice1, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice1, (char *)"BidPrice1", NULL},
    ///申买量一 
    {(char *)"BidVolume1", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume1, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume1, (char *)"BidVolume1", NULL},
    ///申卖价一 
    {(char *)"AskPrice1", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice1, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice1, (char *)"AskPrice1", NULL},
    ///申卖量一 
    {(char *)"AskVolume1", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume1, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume1, (char *)"AskVolume1", NULL},
    ///申买价二 
    {(char *)"BidPrice2", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice2, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice2, (char *)"BidPrice2", NULL},
    ///申买量二 
    {(char *)"BidVolume2", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume2, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume2, (char *)"BidVolume2", NULL},
    ///申卖价二 
    {(char *)"AskPrice2", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice2, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice2, (char *)"AskPrice2", NULL},
    ///申卖量二 
    {(char *)"AskVolume2", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume2, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume2, (char *)"AskVolume2", NULL},
    ///申买价三 
    {(char *)"BidPrice3", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice3, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice3, (char *)"BidPrice3", NULL},
    ///申买量三 
    {(char *)"BidVolume3", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume3, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume3, (char *)"BidVolume3", NULL},
    ///申卖价三 
    {(char *)"AskPrice3", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice3, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice3, (char *)"AskPrice3", NULL},
    ///申卖量三 
    {(char *)"AskVolume3", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume3, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume3, (char *)"AskVolume3", NULL},
    ///申买价四 
    {(char *)"BidPrice4", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice4, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice4, (char *)"BidPrice4", NULL},
    ///申买量四 
    {(char *)"BidVolume4", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume4, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume4, (char *)"BidVolume4", NULL},
    ///申卖价四 
    {(char *)"AskPrice4", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice4, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice4, (char *)"AskPrice4", NULL},
    ///申卖量四 
    {(char *)"AskVolume4", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume4, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume4, (char *)"AskVolume4", NULL},
    ///申买价五 
    {(char *)"BidPrice5", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice5, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice5, (char *)"BidPrice5", NULL},
    ///申买量五 
    {(char *)"BidVolume5", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume5, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume5, (char *)"BidVolume5", NULL},
    ///申卖价五 
    {(char *)"AskPrice5", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice5, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice5, (char *)"AskPrice5", NULL},
    ///申卖量五 
    {(char *)"AskVolume5", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume5, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume5, (char *)"AskVolume5", NULL},
    ///当日均价 
    {(char *)"AveragePrice", (getter)PyCThostFtdcDepthMarketDataField_get_AveragePrice, (setter)PyCThostFtdcDepthMarketDataField_set_AveragePrice, (char *)"AveragePrice", NULL},
    ///业务日期 
    {(char *)"ActionDay", (getter)PyCThostFtdcDepthMarketDataField_get_ActionDay, (setter)PyCThostFtdcDepthMarketDataField_set_ActionDay, (char *)"ActionDay", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcDepthMarketDataField_get_InstrumentID, (setter)PyCThostFtdcDepthMarketDataField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcDepthMarketDataField_get_ExchangeInstID, (setter)PyCThostFtdcDepthMarketDataField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///上带价 
    {(char *)"BandingUpperPrice", (getter)PyCThostFtdcDepthMarketDataField_get_BandingUpperPrice, (setter)PyCThostFtdcDepthMarketDataField_set_BandingUpperPrice, (char *)"BandingUpperPrice", NULL},
    ///下带价 
    {(char *)"BandingLowerPrice", (getter)PyCThostFtdcDepthMarketDataField_get_BandingLowerPrice, (setter)PyCThostFtdcDepthMarketDataField_set_BandingLowerPrice, (char *)"BandingLowerPrice", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDepthMarketDataFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDepthMarketDataField",	/* tp_name */
	sizeof(PyCThostFtdcDepthMarketDataField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDepthMarketDataField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDepthMarketDataField_repr,   /* tp_repr */
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
	"CThostFtdcDepthMarketDataField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDepthMarketDataField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDepthMarketDataField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDepthMarketDataField_new,       /* tp_new */
};

int PyCThostFtdcDepthMarketDataFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDepthMarketDataField  */
	if (PyType_Ready(&PyCThostFtdcDepthMarketDataFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDepthMarketDataField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDepthMarketDataFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDepthMarketDataField", (PyObject *)&PyCThostFtdcDepthMarketDataFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepthMarketDataField to module");
        Py_DECREF(&PyCThostFtdcDepthMarketDataFieldType);
		return -1;
    }

    return 0;
}
