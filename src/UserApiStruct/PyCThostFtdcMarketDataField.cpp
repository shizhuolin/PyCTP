
#include "PyCThostFtdcMarketDataField.h"

///市场行情

static PyObject *PyCThostFtdcMarketDataField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataField *self = (PyCThostFtdcMarketDataField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataField_init(PyCThostFtdcMarketDataField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "reserve1", "ExchangeID", "reserve2", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "ActionDay", "InstrumentID", "ExchangeInstID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *MarketDataField_TradingDay = NULL;
    Py_ssize_t MarketDataField_TradingDay_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *MarketDataField_reserve1 = NULL;
    Py_ssize_t MarketDataField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *MarketDataField_ExchangeID = NULL;
    Py_ssize_t MarketDataField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *MarketDataField_reserve2 = NULL;
    Py_ssize_t MarketDataField_reserve2_len = 0;
            
    ///最新价
    // TThostFtdcPriceType double
    double MarketDataField_LastPrice = 0.0;
        
    ///上次结算价
    // TThostFtdcPriceType double
    double MarketDataField_PreSettlementPrice = 0.0;
        
    ///昨收盘
    // TThostFtdcPriceType double
    double MarketDataField_PreClosePrice = 0.0;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    double MarketDataField_PreOpenInterest = 0.0;
        
    ///今开盘
    // TThostFtdcPriceType double
    double MarketDataField_OpenPrice = 0.0;
        
    ///最高价
    // TThostFtdcPriceType double
    double MarketDataField_HighestPrice = 0.0;
        
    ///最低价
    // TThostFtdcPriceType double
    double MarketDataField_LowestPrice = 0.0;
        
    ///数量
    // TThostFtdcVolumeType int
    int MarketDataField_Volume = 0;
        
    ///成交金额
    // TThostFtdcMoneyType double
    double MarketDataField_Turnover = 0.0;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    double MarketDataField_OpenInterest = 0.0;
        
    ///今收盘
    // TThostFtdcPriceType double
    double MarketDataField_ClosePrice = 0.0;
        
    ///本次结算价
    // TThostFtdcPriceType double
    double MarketDataField_SettlementPrice = 0.0;
        
    ///涨停板价
    // TThostFtdcPriceType double
    double MarketDataField_UpperLimitPrice = 0.0;
        
    ///跌停板价
    // TThostFtdcPriceType double
    double MarketDataField_LowerLimitPrice = 0.0;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    double MarketDataField_PreDelta = 0.0;
        
    ///今虚实度
    // TThostFtdcRatioType double
    double MarketDataField_CurrDelta = 0.0;
        
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    const char *MarketDataField_UpdateTime = NULL;
    Py_ssize_t MarketDataField_UpdateTime_len = 0;
            
    ///最后修改毫秒
    // TThostFtdcMillisecType int
    int MarketDataField_UpdateMillisec = 0;
        
    ///业务日期
    // TThostFtdcDateType char[9]
    const char *MarketDataField_ActionDay = NULL;
    Py_ssize_t MarketDataField_ActionDay_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *MarketDataField_InstrumentID = NULL;
    Py_ssize_t MarketDataField_InstrumentID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *MarketDataField_ExchangeInstID = NULL;
    Py_ssize_t MarketDataField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddddddidddddddds#is#s#s#", (char **)kwlist
#endif

        , &MarketDataField_TradingDay, &MarketDataField_TradingDay_len 
        , &MarketDataField_reserve1, &MarketDataField_reserve1_len 
        , &MarketDataField_ExchangeID, &MarketDataField_ExchangeID_len 
        , &MarketDataField_reserve2, &MarketDataField_reserve2_len 
        , &MarketDataField_LastPrice 
        , &MarketDataField_PreSettlementPrice 
        , &MarketDataField_PreClosePrice 
        , &MarketDataField_PreOpenInterest 
        , &MarketDataField_OpenPrice 
        , &MarketDataField_HighestPrice 
        , &MarketDataField_LowestPrice 
        , &MarketDataField_Volume 
        , &MarketDataField_Turnover 
        , &MarketDataField_OpenInterest 
        , &MarketDataField_ClosePrice 
        , &MarketDataField_SettlementPrice 
        , &MarketDataField_UpperLimitPrice 
        , &MarketDataField_LowerLimitPrice 
        , &MarketDataField_PreDelta 
        , &MarketDataField_CurrDelta 
        , &MarketDataField_UpdateTime, &MarketDataField_UpdateTime_len 
        , &MarketDataField_UpdateMillisec 
        , &MarketDataField_ActionDay, &MarketDataField_ActionDay_len 
        , &MarketDataField_InstrumentID, &MarketDataField_InstrumentID_len 
        , &MarketDataField_ExchangeInstID, &MarketDataField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( MarketDataField_TradingDay != NULL ) {
        if(MarketDataField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", MarketDataField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, MarketDataField_TradingDay, MarketDataField_TradingDay_len);        
        strncpy(self->data.TradingDay, MarketDataField_TradingDay, sizeof(self->data.TradingDay) );
        MarketDataField_TradingDay = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( MarketDataField_reserve1 != NULL ) {
        if(MarketDataField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", MarketDataField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, MarketDataField_reserve1, MarketDataField_reserve1_len);        
        strncpy(self->data.reserve1, MarketDataField_reserve1, sizeof(self->data.reserve1) );
        MarketDataField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( MarketDataField_ExchangeID != NULL ) {
        if(MarketDataField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", MarketDataField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, MarketDataField_ExchangeID, MarketDataField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, MarketDataField_ExchangeID, sizeof(self->data.ExchangeID) );
        MarketDataField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( MarketDataField_reserve2 != NULL ) {
        if(MarketDataField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", MarketDataField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, MarketDataField_reserve2, MarketDataField_reserve2_len);        
        strncpy(self->data.reserve2, MarketDataField_reserve2, sizeof(self->data.reserve2) );
        MarketDataField_reserve2 = NULL;
    }
            
    ///最新价
    // TThostFtdcPriceType double
    self->data.LastPrice = MarketDataField_LastPrice;
        
    ///上次结算价
    // TThostFtdcPriceType double
    self->data.PreSettlementPrice = MarketDataField_PreSettlementPrice;
        
    ///昨收盘
    // TThostFtdcPriceType double
    self->data.PreClosePrice = MarketDataField_PreClosePrice;
        
    ///昨持仓量
    // TThostFtdcLargeVolumeType double
    self->data.PreOpenInterest = MarketDataField_PreOpenInterest;
        
    ///今开盘
    // TThostFtdcPriceType double
    self->data.OpenPrice = MarketDataField_OpenPrice;
        
    ///最高价
    // TThostFtdcPriceType double
    self->data.HighestPrice = MarketDataField_HighestPrice;
        
    ///最低价
    // TThostFtdcPriceType double
    self->data.LowestPrice = MarketDataField_LowestPrice;
        
    ///数量
    // TThostFtdcVolumeType int
    self->data.Volume = MarketDataField_Volume;
        
    ///成交金额
    // TThostFtdcMoneyType double
    self->data.Turnover = MarketDataField_Turnover;
        
    ///持仓量
    // TThostFtdcLargeVolumeType double
    self->data.OpenInterest = MarketDataField_OpenInterest;
        
    ///今收盘
    // TThostFtdcPriceType double
    self->data.ClosePrice = MarketDataField_ClosePrice;
        
    ///本次结算价
    // TThostFtdcPriceType double
    self->data.SettlementPrice = MarketDataField_SettlementPrice;
        
    ///涨停板价
    // TThostFtdcPriceType double
    self->data.UpperLimitPrice = MarketDataField_UpperLimitPrice;
        
    ///跌停板价
    // TThostFtdcPriceType double
    self->data.LowerLimitPrice = MarketDataField_LowerLimitPrice;
        
    ///昨虚实度
    // TThostFtdcRatioType double
    self->data.PreDelta = MarketDataField_PreDelta;
        
    ///今虚实度
    // TThostFtdcRatioType double
    self->data.CurrDelta = MarketDataField_CurrDelta;
        
    ///最后修改时间
    // TThostFtdcTimeType char[9]
    if( MarketDataField_UpdateTime != NULL ) {
        if(MarketDataField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
            PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", MarketDataField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
            return -1;
        }
        // memset(self->data.UpdateTime, 0, sizeof(self->data.UpdateTime));
        // memcpy(self->data.UpdateTime, MarketDataField_UpdateTime, MarketDataField_UpdateTime_len);        
        strncpy(self->data.UpdateTime, MarketDataField_UpdateTime, sizeof(self->data.UpdateTime) );
        MarketDataField_UpdateTime = NULL;
    }
            
    ///最后修改毫秒
    // TThostFtdcMillisecType int
    self->data.UpdateMillisec = MarketDataField_UpdateMillisec;
        
    ///业务日期
    // TThostFtdcDateType char[9]
    if( MarketDataField_ActionDay != NULL ) {
        if(MarketDataField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", MarketDataField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
            return -1;
        }
        // memset(self->data.ActionDay, 0, sizeof(self->data.ActionDay));
        // memcpy(self->data.ActionDay, MarketDataField_ActionDay, MarketDataField_ActionDay_len);        
        strncpy(self->data.ActionDay, MarketDataField_ActionDay, sizeof(self->data.ActionDay) );
        MarketDataField_ActionDay = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( MarketDataField_InstrumentID != NULL ) {
        if(MarketDataField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", MarketDataField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, MarketDataField_InstrumentID, MarketDataField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, MarketDataField_InstrumentID, sizeof(self->data.InstrumentID) );
        MarketDataField_InstrumentID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( MarketDataField_ExchangeInstID != NULL ) {
        if(MarketDataField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", MarketDataField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, MarketDataField_ExchangeInstID, MarketDataField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, MarketDataField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        MarketDataField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcMarketDataField_dealloc(PyCThostFtdcMarketDataField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataField_repr(PyCThostFtdcMarketDataField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:s,s:s,s:s}"
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
        ,"ActionDay", self->data.ActionDay//, (Py_ssize_t)sizeof(self->data.ActionDay) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcMarketDataField_get_TradingDay(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcMarketDataField_set_TradingDay(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_reserve1(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcMarketDataField_set_reserve1(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_ExchangeID(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcMarketDataField_set_ExchangeID(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_reserve2(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcMarketDataField_set_reserve2(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_LastPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LastPrice);
}

///最新价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_LastPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_PreSettlementPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

///上次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_PreSettlementPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_PreClosePrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreClosePrice);
}

///昨收盘
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_PreClosePrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_PreOpenInterest(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreOpenInterest);
}

///昨持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcMarketDataField_set_PreOpenInterest(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_OpenPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenPrice);
}

///今开盘
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_OpenPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_HighestPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HighestPrice);
}

///最高价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_HighestPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_LowestPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowestPrice);
}

///最低价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_LowestPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_Volume(PyCThostFtdcMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Volume);
#else
    return PyInt_FromLong(self->data.Volume);
#endif
}

///数量
// TThostFtdcVolumeType int
static int PyCThostFtdcMarketDataField_set_Volume(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_Turnover(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Turnover);
}

///成交金额
// TThostFtdcMoneyType double
static int PyCThostFtdcMarketDataField_set_Turnover(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_OpenInterest(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenInterest);
}

///持仓量
// TThostFtdcLargeVolumeType double
static int PyCThostFtdcMarketDataField_set_OpenInterest(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_ClosePrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ClosePrice);
}

///今收盘
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_ClosePrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_SettlementPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SettlementPrice);
}

///本次结算价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_SettlementPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_UpperLimitPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.UpperLimitPrice);
}

///涨停板价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_UpperLimitPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_LowerLimitPrice(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LowerLimitPrice);
}

///跌停板价
// TThostFtdcPriceType double
static int PyCThostFtdcMarketDataField_set_LowerLimitPrice(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_PreDelta(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.PreDelta);
}

///昨虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcMarketDataField_set_PreDelta(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_CurrDelta(PyCThostFtdcMarketDataField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CurrDelta);
}

///今虚实度
// TThostFtdcRatioType double
static int PyCThostFtdcMarketDataField_set_CurrDelta(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_UpdateTime(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UpdateTime, (Py_ssize_t)sizeof(self->data.UpdateTime));
    return PyBytes_FromString(self->data.UpdateTime);
}

///最后修改时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcMarketDataField_set_UpdateTime(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_UpdateMillisec(PyCThostFtdcMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.UpdateMillisec);
#else
    return PyInt_FromLong(self->data.UpdateMillisec);
#endif
}

///最后修改毫秒
// TThostFtdcMillisecType int
static int PyCThostFtdcMarketDataField_set_UpdateMillisec(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
        
///业务日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcMarketDataField_get_ActionDay(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDay, (Py_ssize_t)sizeof(self->data.ActionDay));
    return PyBytes_FromString(self->data.ActionDay);
}

///业务日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcMarketDataField_set_ActionDay(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_InstrumentID(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcMarketDataField_set_InstrumentID(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcMarketDataField_get_ExchangeInstID(PyCThostFtdcMarketDataField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcMarketDataField_set_ExchangeInstID(PyCThostFtdcMarketDataField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcMarketDataField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcMarketDataField_get_TradingDay, (setter)PyCThostFtdcMarketDataField_set_TradingDay, (char *)"TradingDay", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcMarketDataField_get_reserve1, (setter)PyCThostFtdcMarketDataField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcMarketDataField_get_ExchangeID, (setter)PyCThostFtdcMarketDataField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcMarketDataField_get_reserve2, (setter)PyCThostFtdcMarketDataField_set_reserve2, (char *)"reserve2", NULL},
    ///最新价 
    {(char *)"LastPrice", (getter)PyCThostFtdcMarketDataField_get_LastPrice, (setter)PyCThostFtdcMarketDataField_set_LastPrice, (char *)"LastPrice", NULL},
    ///上次结算价 
    {(char *)"PreSettlementPrice", (getter)PyCThostFtdcMarketDataField_get_PreSettlementPrice, (setter)PyCThostFtdcMarketDataField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
    ///昨收盘 
    {(char *)"PreClosePrice", (getter)PyCThostFtdcMarketDataField_get_PreClosePrice, (setter)PyCThostFtdcMarketDataField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
    ///昨持仓量 
    {(char *)"PreOpenInterest", (getter)PyCThostFtdcMarketDataField_get_PreOpenInterest, (setter)PyCThostFtdcMarketDataField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
    ///今开盘 
    {(char *)"OpenPrice", (getter)PyCThostFtdcMarketDataField_get_OpenPrice, (setter)PyCThostFtdcMarketDataField_set_OpenPrice, (char *)"OpenPrice", NULL},
    ///最高价 
    {(char *)"HighestPrice", (getter)PyCThostFtdcMarketDataField_get_HighestPrice, (setter)PyCThostFtdcMarketDataField_set_HighestPrice, (char *)"HighestPrice", NULL},
    ///最低价 
    {(char *)"LowestPrice", (getter)PyCThostFtdcMarketDataField_get_LowestPrice, (setter)PyCThostFtdcMarketDataField_set_LowestPrice, (char *)"LowestPrice", NULL},
    ///数量 
    {(char *)"Volume", (getter)PyCThostFtdcMarketDataField_get_Volume, (setter)PyCThostFtdcMarketDataField_set_Volume, (char *)"Volume", NULL},
    ///成交金额 
    {(char *)"Turnover", (getter)PyCThostFtdcMarketDataField_get_Turnover, (setter)PyCThostFtdcMarketDataField_set_Turnover, (char *)"Turnover", NULL},
    ///持仓量 
    {(char *)"OpenInterest", (getter)PyCThostFtdcMarketDataField_get_OpenInterest, (setter)PyCThostFtdcMarketDataField_set_OpenInterest, (char *)"OpenInterest", NULL},
    ///今收盘 
    {(char *)"ClosePrice", (getter)PyCThostFtdcMarketDataField_get_ClosePrice, (setter)PyCThostFtdcMarketDataField_set_ClosePrice, (char *)"ClosePrice", NULL},
    ///本次结算价 
    {(char *)"SettlementPrice", (getter)PyCThostFtdcMarketDataField_get_SettlementPrice, (setter)PyCThostFtdcMarketDataField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
    ///涨停板价 
    {(char *)"UpperLimitPrice", (getter)PyCThostFtdcMarketDataField_get_UpperLimitPrice, (setter)PyCThostFtdcMarketDataField_set_UpperLimitPrice, (char *)"UpperLimitPrice", NULL},
    ///跌停板价 
    {(char *)"LowerLimitPrice", (getter)PyCThostFtdcMarketDataField_get_LowerLimitPrice, (setter)PyCThostFtdcMarketDataField_set_LowerLimitPrice, (char *)"LowerLimitPrice", NULL},
    ///昨虚实度 
    {(char *)"PreDelta", (getter)PyCThostFtdcMarketDataField_get_PreDelta, (setter)PyCThostFtdcMarketDataField_set_PreDelta, (char *)"PreDelta", NULL},
    ///今虚实度 
    {(char *)"CurrDelta", (getter)PyCThostFtdcMarketDataField_get_CurrDelta, (setter)PyCThostFtdcMarketDataField_set_CurrDelta, (char *)"CurrDelta", NULL},
    ///最后修改时间 
    {(char *)"UpdateTime", (getter)PyCThostFtdcMarketDataField_get_UpdateTime, (setter)PyCThostFtdcMarketDataField_set_UpdateTime, (char *)"UpdateTime", NULL},
    ///最后修改毫秒 
    {(char *)"UpdateMillisec", (getter)PyCThostFtdcMarketDataField_get_UpdateMillisec, (setter)PyCThostFtdcMarketDataField_set_UpdateMillisec, (char *)"UpdateMillisec", NULL},
    ///业务日期 
    {(char *)"ActionDay", (getter)PyCThostFtdcMarketDataField_get_ActionDay, (setter)PyCThostFtdcMarketDataField_set_ActionDay, (char *)"ActionDay", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcMarketDataField_get_InstrumentID, (setter)PyCThostFtdcMarketDataField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcMarketDataField_get_ExchangeInstID, (setter)PyCThostFtdcMarketDataField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataField", (PyObject *)&PyCThostFtdcMarketDataFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataField to module");
        Py_DECREF(&PyCThostFtdcMarketDataFieldType);
		return -1;
    }

    return 0;
}
