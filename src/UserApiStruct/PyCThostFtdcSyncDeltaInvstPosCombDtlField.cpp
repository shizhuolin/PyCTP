
#include "PyCThostFtdcSyncDeltaInvstPosCombDtlField.h"

///风险结算追平组合持仓明细

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlField *self = (PyCThostFtdcSyncDeltaInvstPosCombDtlField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_init(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "OpenDate", "ExchangeID", "SettlementID", "BrokerID", "InvestorID", "ComTradeID", "TradeID", "InstrumentID", "HedgeFlag", "Direction", "TotalAmt", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LegID", "LegMultiple", "TradeGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaInvstPosCombDtlField_TradingDay = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_TradingDay_len = 0;
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    const char *SyncDeltaInvstPosCombDtlField_OpenDate = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_OpenDate_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaInvstPosCombDtlField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_ExchangeID_len = 0;
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    int SyncDeltaInvstPosCombDtlField_SettlementID = 0;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaInvstPosCombDtlField_BrokerID = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaInvstPosCombDtlField_InvestorID = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_InvestorID_len = 0;
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    const char *SyncDeltaInvstPosCombDtlField_ComTradeID = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_ComTradeID_len = 0;
            
    ///撮合编号
    // TThostFtdcTradeIDType char[21]
    const char *SyncDeltaInvstPosCombDtlField_TradeID = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_TradeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaInvstPosCombDtlField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaInvstPosCombDtlField_InstrumentID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaInvstPosCombDtlField_HedgeFlag = 0;
            
    ///买卖
    // TThostFtdcDirectionType char
    char SyncDeltaInvstPosCombDtlField_Direction = 0;
            
    ///持仓量
    // TThostFtdcVolumeType int
    int SyncDeltaInvstPosCombDtlField_TotalAmt = 0;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosCombDtlField_Margin = 0.0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double SyncDeltaInvstPosCombDtlField_ExchMargin = 0.0;
        
    ///保证金率
    // TThostFtdcRatioType double
    double SyncDeltaInvstPosCombDtlField_MarginRateByMoney = 0.0;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    double SyncDeltaInvstPosCombDtlField_MarginRateByVolume = 0.0;
        
    ///单腿编号
    // TThostFtdcLegIDType int
    int SyncDeltaInvstPosCombDtlField_LegID = 0;
        
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    int SyncDeltaInvstPosCombDtlField_LegMultiple = 0;
        
    ///成交组号
    // TThostFtdcTradeGroupIDType int
    int SyncDeltaInvstPosCombDtlField_TradeGroupID = 0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaInvstPosCombDtlField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#y#y#y#cciddddiiici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#s#s#s#s#cciddddiiici", (char **)kwlist
#endif

        , &SyncDeltaInvstPosCombDtlField_TradingDay, &SyncDeltaInvstPosCombDtlField_TradingDay_len 
        , &SyncDeltaInvstPosCombDtlField_OpenDate, &SyncDeltaInvstPosCombDtlField_OpenDate_len 
        , &SyncDeltaInvstPosCombDtlField_ExchangeID, &SyncDeltaInvstPosCombDtlField_ExchangeID_len 
        , &SyncDeltaInvstPosCombDtlField_SettlementID 
        , &SyncDeltaInvstPosCombDtlField_BrokerID, &SyncDeltaInvstPosCombDtlField_BrokerID_len 
        , &SyncDeltaInvstPosCombDtlField_InvestorID, &SyncDeltaInvstPosCombDtlField_InvestorID_len 
        , &SyncDeltaInvstPosCombDtlField_ComTradeID, &SyncDeltaInvstPosCombDtlField_ComTradeID_len 
        , &SyncDeltaInvstPosCombDtlField_TradeID, &SyncDeltaInvstPosCombDtlField_TradeID_len 
        , &SyncDeltaInvstPosCombDtlField_InstrumentID, &SyncDeltaInvstPosCombDtlField_InstrumentID_len 
        , &SyncDeltaInvstPosCombDtlField_HedgeFlag 
        , &SyncDeltaInvstPosCombDtlField_Direction 
        , &SyncDeltaInvstPosCombDtlField_TotalAmt 
        , &SyncDeltaInvstPosCombDtlField_Margin 
        , &SyncDeltaInvstPosCombDtlField_ExchMargin 
        , &SyncDeltaInvstPosCombDtlField_MarginRateByMoney 
        , &SyncDeltaInvstPosCombDtlField_MarginRateByVolume 
        , &SyncDeltaInvstPosCombDtlField_LegID 
        , &SyncDeltaInvstPosCombDtlField_LegMultiple 
        , &SyncDeltaInvstPosCombDtlField_TradeGroupID 
        , &SyncDeltaInvstPosCombDtlField_ActionDirection 
        , &SyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaInvstPosCombDtlField_TradingDay != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaInvstPosCombDtlField_TradingDay, SyncDeltaInvstPosCombDtlField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaInvstPosCombDtlField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaInvstPosCombDtlField_TradingDay = NULL;
    }
            
    ///开仓日期
    // TThostFtdcDateType char[9]
    if( SyncDeltaInvstPosCombDtlField_OpenDate != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
            PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
            return -1;
        }
        // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
        // memcpy(self->data.OpenDate, SyncDeltaInvstPosCombDtlField_OpenDate, SyncDeltaInvstPosCombDtlField_OpenDate_len);        
        strncpy(self->data.OpenDate, SyncDeltaInvstPosCombDtlField_OpenDate, sizeof(self->data.OpenDate) );
        SyncDeltaInvstPosCombDtlField_OpenDate = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaInvstPosCombDtlField_ExchangeID != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaInvstPosCombDtlField_ExchangeID, SyncDeltaInvstPosCombDtlField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaInvstPosCombDtlField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaInvstPosCombDtlField_ExchangeID = NULL;
    }
            
    ///结算编号
    // TThostFtdcSettlementIDType int
    self->data.SettlementID = SyncDeltaInvstPosCombDtlField_SettlementID;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaInvstPosCombDtlField_BrokerID != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaInvstPosCombDtlField_BrokerID, SyncDeltaInvstPosCombDtlField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaInvstPosCombDtlField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaInvstPosCombDtlField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaInvstPosCombDtlField_InvestorID != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaInvstPosCombDtlField_InvestorID, SyncDeltaInvstPosCombDtlField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaInvstPosCombDtlField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaInvstPosCombDtlField_InvestorID = NULL;
    }
            
    ///组合编号
    // TThostFtdcTradeIDType char[21]
    if( SyncDeltaInvstPosCombDtlField_ComTradeID != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
            PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
            return -1;
        }
        // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
        // memcpy(self->data.ComTradeID, SyncDeltaInvstPosCombDtlField_ComTradeID, SyncDeltaInvstPosCombDtlField_ComTradeID_len);        
        strncpy(self->data.ComTradeID, SyncDeltaInvstPosCombDtlField_ComTradeID, sizeof(self->data.ComTradeID) );
        SyncDeltaInvstPosCombDtlField_ComTradeID = NULL;
    }
            
    ///撮合编号
    // TThostFtdcTradeIDType char[21]
    if( SyncDeltaInvstPosCombDtlField_TradeID != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
            PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
            return -1;
        }
        // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
        // memcpy(self->data.TradeID, SyncDeltaInvstPosCombDtlField_TradeID, SyncDeltaInvstPosCombDtlField_TradeID_len);        
        strncpy(self->data.TradeID, SyncDeltaInvstPosCombDtlField_TradeID, sizeof(self->data.TradeID) );
        SyncDeltaInvstPosCombDtlField_TradeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaInvstPosCombDtlField_InstrumentID != NULL ) {
        if(SyncDeltaInvstPosCombDtlField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstPosCombDtlField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaInvstPosCombDtlField_InstrumentID, SyncDeltaInvstPosCombDtlField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaInvstPosCombDtlField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaInvstPosCombDtlField_InstrumentID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaInvstPosCombDtlField_HedgeFlag;
            
    ///买卖
    // TThostFtdcDirectionType char
    self->data.Direction = SyncDeltaInvstPosCombDtlField_Direction;
            
    ///持仓量
    // TThostFtdcVolumeType int
    self->data.TotalAmt = SyncDeltaInvstPosCombDtlField_TotalAmt;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    self->data.Margin = SyncDeltaInvstPosCombDtlField_Margin;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = SyncDeltaInvstPosCombDtlField_ExchMargin;
        
    ///保证金率
    // TThostFtdcRatioType double
    self->data.MarginRateByMoney = SyncDeltaInvstPosCombDtlField_MarginRateByMoney;
        
    ///保证金率(按手数)
    // TThostFtdcRatioType double
    self->data.MarginRateByVolume = SyncDeltaInvstPosCombDtlField_MarginRateByVolume;
        
    ///单腿编号
    // TThostFtdcLegIDType int
    self->data.LegID = SyncDeltaInvstPosCombDtlField_LegID;
        
    ///单腿乘数
    // TThostFtdcLegMultipleType int
    self->data.LegMultiple = SyncDeltaInvstPosCombDtlField_LegMultiple;
        
    ///成交组号
    // TThostFtdcTradeGroupIDType int
    self->data.TradeGroupID = SyncDeltaInvstPosCombDtlField_TradeGroupID;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaInvstPosCombDtlField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaInvstPosCombDtlField_dealloc(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_repr(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:i,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"OpenDate", self->data.OpenDate//, (Py_ssize_t)sizeof(self->data.OpenDate) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"SettlementID", self->data.SettlementID 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ComTradeID", self->data.ComTradeID//, (Py_ssize_t)sizeof(self->data.ComTradeID) 
        ,"TradeID", self->data.TradeID//, (Py_ssize_t)sizeof(self->data.TradeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"Direction", self->data.Direction 
        ,"TotalAmt", self->data.TotalAmt 
        ,"Margin", self->data.Margin 
        ,"ExchMargin", self->data.ExchMargin 
        ,"MarginRateByMoney", self->data.MarginRateByMoney 
        ,"MarginRateByVolume", self->data.MarginRateByVolume 
        ,"LegID", self->data.LegID 
        ,"LegMultiple", self->data.LegMultiple 
        ,"TradeGroupID", self->data.TradeGroupID 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosCombDtlField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradingDay(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradingDay(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
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
            
///开仓日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_OpenDate(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OpenDate, (Py_ssize_t)sizeof(self->data.OpenDate));
    return PyBytes_FromString(self->data.OpenDate);
}

///开仓日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_OpenDate(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
        PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.OpenDate, 0, sizeof(self->data.OpenDate));
    // memcpy(self->data.OpenDate, buf, len);
    strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchangeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchangeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
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
            
///结算编号
// TThostFtdcSettlementIDType int
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SettlementID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SettlementID);
#else
    return PyInt_FromLong(self->data.SettlementID);
#endif
}

///结算编号
// TThostFtdcSettlementIDType int
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SettlementID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SettlementID value out of range for C int");
        return -1;
    }
    self->data.SettlementID = (int)buf;
    return 0;
}
        
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_BrokerID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_BrokerID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InvestorID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InvestorID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///组合编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ComTradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ComTradeID, (Py_ssize_t)sizeof(self->data.ComTradeID));
    return PyBytes_FromString(self->data.ComTradeID);
}

///组合编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ComTradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
        PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ComTradeID, 0, sizeof(self->data.ComTradeID));
    // memcpy(self->data.ComTradeID, buf, len);
    strncpy(self->data.ComTradeID, buf, sizeof(self->data.ComTradeID));
    return 0;
}
            
///撮合编号
// TThostFtdcTradeIDType char[21]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradeID, (Py_ssize_t)sizeof(self->data.TradeID));
    return PyBytes_FromString(self->data.TradeID);
}

///撮合编号
// TThostFtdcTradeIDType char[21]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
        PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TradeID, 0, sizeof(self->data.TradeID));
    // memcpy(self->data.TradeID, buf, len);
    strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///买卖
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Direction(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖
// TThostFtdcDirectionType char
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Direction(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///持仓量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TotalAmt(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TotalAmt);
#else
    return PyInt_FromLong(self->data.TotalAmt);
#endif
}

///持仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TotalAmt(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TotalAmt value out of range for C int");
        return -1;
    }
    self->data.TotalAmt = (int)buf;
    return 0;
}
        
///投资者保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Margin(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///投资者保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Margin(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Margin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Margin = buf;
    return 0;
}
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchMargin(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchMargin(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMargin = buf;
    return 0;
}
        
///保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

///保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByMoney = buf;
    return 0;
}
        
///保证金率(按手数)
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

///保证金率(按手数)
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByVolume = buf;
    return 0;
}
        
///单腿编号
// TThostFtdcLegIDType int
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegID);
#else
    return PyInt_FromLong(self->data.LegID);
#endif
}

///单腿编号
// TThostFtdcLegIDType int
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegID value out of range for C int");
        return -1;
    }
    self->data.LegID = (int)buf;
    return 0;
}
        
///单腿乘数
// TThostFtdcLegMultipleType int
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegMultiple(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegMultiple);
#else
    return PyInt_FromLong(self->data.LegMultiple);
#endif
}

///单腿乘数
// TThostFtdcLegMultipleType int
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegMultiple(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LegMultiple value out of range for C int");
        return -1;
    }
    self->data.LegMultiple = (int)buf;
    return 0;
}
        
///成交组号
// TThostFtdcTradeGroupIDType int
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeGroupID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TradeGroupID);
#else
    return PyInt_FromLong(self->data.TradeGroupID);
#endif
}

///成交组号
// TThostFtdcTradeGroupIDType int
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeGroupID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TradeGroupID value out of range for C int");
        return -1;
    }
    self->data.TradeGroupID = (int)buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaInvstPosCombDtlField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradingDay, (char *)"TradingDay", NULL},
    ///开仓日期 
    {(char *)"OpenDate", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_OpenDate, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_OpenDate, (char *)"OpenDate", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///结算编号 
    {(char *)"SettlementID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SettlementID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SettlementID, (char *)"SettlementID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InvestorID, (char *)"InvestorID", NULL},
    ///组合编号 
    {(char *)"ComTradeID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ComTradeID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ComTradeID, (char *)"ComTradeID", NULL},
    ///撮合编号 
    {(char *)"TradeID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeID, (char *)"TradeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///买卖 
    {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Direction, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Direction, (char *)"Direction", NULL},
    ///持仓量 
    {(char *)"TotalAmt", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TotalAmt, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TotalAmt, (char *)"TotalAmt", NULL},
    ///投资者保证金 
    {(char *)"Margin", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Margin, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Margin, (char *)"Margin", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchMargin, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///保证金率 
    {(char *)"MarginRateByMoney", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByMoney, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
    ///保证金率(按手数) 
    {(char *)"MarginRateByVolume", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByVolume, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
    ///单腿编号 
    {(char *)"LegID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegID, (char *)"LegID", NULL},
    ///单腿乘数 
    {(char *)"LegMultiple", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegMultiple, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegMultiple, (char *)"LegMultiple", NULL},
    ///成交组号 
    {(char *)"TradeGroupID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeGroupID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeGroupID, (char *)"TradeGroupID", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstPosCombDtlField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstPosCombDtlField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstPosCombDtlField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstPosCombDtlField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstPosCombDtlField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstPosCombDtlField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstPosCombDtlField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstPosCombDtlField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstPosCombDtlField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstPosCombDtlField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstPosCombDtlField", (PyObject *)&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstPosCombDtlField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType);
		return -1;
    }

    return 0;
}
