
#include "PyCThostFtdcSyncDeltaRCAMSInvstCombPosField.h"

///风险结算追平RCAMS策略组合持仓

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self = (PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_init(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "HedgeFlag", "PosiDirection", "CombInstrumentID", "LegID", "ExchangeInstID", "TotalAmt", "ExchMargin", "Margin", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRCAMSInvstCombPosField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRCAMSInvstCombPosField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaRCAMSInvstCombPosField_BrokerID = NULL;
    Py_ssize_t SyncDeltaRCAMSInvstCombPosField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaRCAMSInvstCombPosField_InvestorID = NULL;
    Py_ssize_t SyncDeltaRCAMSInvstCombPosField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRCAMSInvstCombPosField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaRCAMSInvstCombPosField_InstrumentID_len = 0;
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaRCAMSInvstCombPosField_HedgeFlag = 0;
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    char SyncDeltaRCAMSInvstCombPosField_PosiDirection = 0;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaRCAMSInvstCombPosField_CombInstrumentID = NULL;
    Py_ssize_t SyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len = 0;
            
    ///单腿编号
    // TThostFtdcLegIDType int
    int SyncDeltaRCAMSInvstCombPosField_LegID = 0;
        
    ///交易所组合合约代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *SyncDeltaRCAMSInvstCombPosField_ExchangeInstID = NULL;
    Py_ssize_t SyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len = 0;
            
    ///持仓量
    // TThostFtdcVolumeType int
    int SyncDeltaRCAMSInvstCombPosField_TotalAmt = 0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double SyncDeltaRCAMSInvstCombPosField_ExchMargin = 0.0;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    double SyncDeltaRCAMSInvstCombPosField_Margin = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRCAMSInvstCombPosField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ccy#iy#iddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ccs#is#iddci", (char **)kwlist
#endif

        , &SyncDeltaRCAMSInvstCombPosField_ExchangeID, &SyncDeltaRCAMSInvstCombPosField_ExchangeID_len 
        , &SyncDeltaRCAMSInvstCombPosField_BrokerID, &SyncDeltaRCAMSInvstCombPosField_BrokerID_len 
        , &SyncDeltaRCAMSInvstCombPosField_InvestorID, &SyncDeltaRCAMSInvstCombPosField_InvestorID_len 
        , &SyncDeltaRCAMSInvstCombPosField_InstrumentID, &SyncDeltaRCAMSInvstCombPosField_InstrumentID_len 
        , &SyncDeltaRCAMSInvstCombPosField_HedgeFlag 
        , &SyncDeltaRCAMSInvstCombPosField_PosiDirection 
        , &SyncDeltaRCAMSInvstCombPosField_CombInstrumentID, &SyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len 
        , &SyncDeltaRCAMSInvstCombPosField_LegID 
        , &SyncDeltaRCAMSInvstCombPosField_ExchangeInstID, &SyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len 
        , &SyncDeltaRCAMSInvstCombPosField_TotalAmt 
        , &SyncDeltaRCAMSInvstCombPosField_ExchMargin 
        , &SyncDeltaRCAMSInvstCombPosField_Margin 
        , &SyncDeltaRCAMSInvstCombPosField_ActionDirection 
        , &SyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRCAMSInvstCombPosField_ExchangeID != NULL ) {
        if(SyncDeltaRCAMSInvstCombPosField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInvstCombPosField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRCAMSInvstCombPosField_ExchangeID, SyncDeltaRCAMSInvstCombPosField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRCAMSInvstCombPosField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRCAMSInvstCombPosField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaRCAMSInvstCombPosField_BrokerID != NULL ) {
        if(SyncDeltaRCAMSInvstCombPosField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInvstCombPosField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaRCAMSInvstCombPosField_BrokerID, SyncDeltaRCAMSInvstCombPosField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaRCAMSInvstCombPosField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaRCAMSInvstCombPosField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaRCAMSInvstCombPosField_InvestorID != NULL ) {
        if(SyncDeltaRCAMSInvstCombPosField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInvstCombPosField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaRCAMSInvstCombPosField_InvestorID, SyncDeltaRCAMSInvstCombPosField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaRCAMSInvstCombPosField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaRCAMSInvstCombPosField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRCAMSInvstCombPosField_InstrumentID != NULL ) {
        if(SyncDeltaRCAMSInvstCombPosField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInvstCombPosField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaRCAMSInvstCombPosField_InstrumentID, SyncDeltaRCAMSInvstCombPosField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaRCAMSInvstCombPosField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaRCAMSInvstCombPosField_InstrumentID = NULL;
    }
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaRCAMSInvstCombPosField_HedgeFlag;
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = SyncDeltaRCAMSInvstCombPosField_PosiDirection;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaRCAMSInvstCombPosField_CombInstrumentID != NULL ) {
        if(SyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, SyncDeltaRCAMSInvstCombPosField_CombInstrumentID, SyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, SyncDeltaRCAMSInvstCombPosField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        SyncDeltaRCAMSInvstCombPosField_CombInstrumentID = NULL;
    }
            
    ///单腿编号
    // TThostFtdcLegIDType int
    self->data.LegID = SyncDeltaRCAMSInvstCombPosField_LegID;
        
    ///交易所组合合约代码
    // TThostFtdcExchangeInstIDType char[81]
    if( SyncDeltaRCAMSInvstCombPosField_ExchangeInstID != NULL ) {
        if(SyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, SyncDeltaRCAMSInvstCombPosField_ExchangeInstID, SyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, SyncDeltaRCAMSInvstCombPosField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        SyncDeltaRCAMSInvstCombPosField_ExchangeInstID = NULL;
    }
            
    ///持仓量
    // TThostFtdcVolumeType int
    self->data.TotalAmt = SyncDeltaRCAMSInvstCombPosField_TotalAmt;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = SyncDeltaRCAMSInvstCombPosField_ExchMargin;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    self->data.Margin = SyncDeltaRCAMSInvstCombPosField_Margin;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRCAMSInvstCombPosField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_dealloc(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_repr(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:i,s:d,s:d,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"PosiDirection", self->data.PosiDirection 
        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 
        ,"LegID", self->data.LegID 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"TotalAmt", self->data.TotalAmt 
        ,"ExchMargin", self->data.ExchMargin 
        ,"Margin", self->data.Margin 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInvstCombPosField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_BrokerID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_BrokerID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InvestorID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InvestorID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
            
///投套标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投套标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
            
///持仓多空方向
// TThostFtdcPosiDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_PosiDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///持仓多空方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_PosiDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    self->data.PosiDirection = *buf;
    return 0;
}
            
///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_CombInstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_CombInstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
    // memcpy(self->data.CombInstrumentID, buf, len);
    strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
    return 0;
}
            
///单腿编号
// TThostFtdcLegIDType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_LegID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegID);
#else
    return PyInt_FromLong(self->data.LegID);
#endif
}

///单腿编号
// TThostFtdcLegIDType int
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_LegID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
        
///交易所组合合约代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///交易所组合合约代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
            
///持仓量
// TThostFtdcVolumeType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_TotalAmt(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TotalAmt);
#else
    return PyInt_FromLong(self->data.TotalAmt);
#endif
}

///持仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_TotalAmt(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
        
///交易所保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchMargin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchMargin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
        
///投资者保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_Margin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///投资者保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_Margin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投套标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///持仓多空方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_PosiDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///组合合约代码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_CombInstrumentID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
    ///单腿编号 
    {(char *)"LegID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_LegID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_LegID, (char *)"LegID", NULL},
    ///交易所组合合约代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///持仓量 
    {(char *)"TotalAmt", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_TotalAmt, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_TotalAmt, (char *)"TotalAmt", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchMargin, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///投资者保证金 
    {(char *)"Margin", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_Margin, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_Margin, (char *)"Margin", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSInvstCombPosField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSInvstCombPosField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSInvstCombPosField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSInvstCombPosField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInvstCombPosField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInvstCombPosField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType);
		return -1;
    }

    return 0;
}
