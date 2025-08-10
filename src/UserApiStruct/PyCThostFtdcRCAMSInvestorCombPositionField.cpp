
#include "PyCThostFtdcRCAMSInvestorCombPositionField.h"

///RCAMS策略组合持仓

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSInvestorCombPositionField *self = (PyCThostFtdcRCAMSInvestorCombPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSInvestorCombPositionField_init(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "HedgeFlag", "PosiDirection", "CombInstrumentID", "LegID", "ExchangeInstID", "TotalAmt", "ExchMargin", "Margin",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *RCAMSInvestorCombPositionField_ExchangeID = NULL;
    Py_ssize_t RCAMSInvestorCombPositionField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RCAMSInvestorCombPositionField_BrokerID = NULL;
    Py_ssize_t RCAMSInvestorCombPositionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *RCAMSInvestorCombPositionField_InvestorID = NULL;
    Py_ssize_t RCAMSInvestorCombPositionField_InvestorID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *RCAMSInvestorCombPositionField_InstrumentID = NULL;
    Py_ssize_t RCAMSInvestorCombPositionField_InstrumentID_len = 0;
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    char RCAMSInvestorCombPositionField_HedgeFlag = 0;
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    char RCAMSInvestorCombPositionField_PosiDirection = 0;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *RCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    Py_ssize_t RCAMSInvestorCombPositionField_CombInstrumentID_len = 0;
            
    ///单腿编号
    // TThostFtdcLegIDType int
    int RCAMSInvestorCombPositionField_LegID = 0;
        
    ///交易所组合合约代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *RCAMSInvestorCombPositionField_ExchangeInstID = NULL;
    Py_ssize_t RCAMSInvestorCombPositionField_ExchangeInstID_len = 0;
            
    ///持仓量
    // TThostFtdcVolumeType int
    int RCAMSInvestorCombPositionField_TotalAmt = 0;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    double RCAMSInvestorCombPositionField_ExchMargin = 0.0;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    double RCAMSInvestorCombPositionField_Margin = 0.0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ccy#iy#idd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ccs#is#idd", (char **)kwlist
#endif

        , &RCAMSInvestorCombPositionField_ExchangeID, &RCAMSInvestorCombPositionField_ExchangeID_len 
        , &RCAMSInvestorCombPositionField_BrokerID, &RCAMSInvestorCombPositionField_BrokerID_len 
        , &RCAMSInvestorCombPositionField_InvestorID, &RCAMSInvestorCombPositionField_InvestorID_len 
        , &RCAMSInvestorCombPositionField_InstrumentID, &RCAMSInvestorCombPositionField_InstrumentID_len 
        , &RCAMSInvestorCombPositionField_HedgeFlag 
        , &RCAMSInvestorCombPositionField_PosiDirection 
        , &RCAMSInvestorCombPositionField_CombInstrumentID, &RCAMSInvestorCombPositionField_CombInstrumentID_len 
        , &RCAMSInvestorCombPositionField_LegID 
        , &RCAMSInvestorCombPositionField_ExchangeInstID, &RCAMSInvestorCombPositionField_ExchangeInstID_len 
        , &RCAMSInvestorCombPositionField_TotalAmt 
        , &RCAMSInvestorCombPositionField_ExchMargin 
        , &RCAMSInvestorCombPositionField_Margin 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( RCAMSInvestorCombPositionField_ExchangeID != NULL ) {
        if(RCAMSInvestorCombPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", RCAMSInvestorCombPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, RCAMSInvestorCombPositionField_ExchangeID, RCAMSInvestorCombPositionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, RCAMSInvestorCombPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
        RCAMSInvestorCombPositionField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RCAMSInvestorCombPositionField_BrokerID != NULL ) {
        if(RCAMSInvestorCombPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RCAMSInvestorCombPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RCAMSInvestorCombPositionField_BrokerID, RCAMSInvestorCombPositionField_BrokerID_len);        
        strncpy(self->data.BrokerID, RCAMSInvestorCombPositionField_BrokerID, sizeof(self->data.BrokerID) );
        RCAMSInvestorCombPositionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( RCAMSInvestorCombPositionField_InvestorID != NULL ) {
        if(RCAMSInvestorCombPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", RCAMSInvestorCombPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, RCAMSInvestorCombPositionField_InvestorID, RCAMSInvestorCombPositionField_InvestorID_len);        
        strncpy(self->data.InvestorID, RCAMSInvestorCombPositionField_InvestorID, sizeof(self->data.InvestorID) );
        RCAMSInvestorCombPositionField_InvestorID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( RCAMSInvestorCombPositionField_InstrumentID != NULL ) {
        if(RCAMSInvestorCombPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", RCAMSInvestorCombPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, RCAMSInvestorCombPositionField_InstrumentID, RCAMSInvestorCombPositionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, RCAMSInvestorCombPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
        RCAMSInvestorCombPositionField_InstrumentID = NULL;
    }
            
    ///投套标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = RCAMSInvestorCombPositionField_HedgeFlag;
            
    ///持仓多空方向
    // TThostFtdcPosiDirectionType char
    self->data.PosiDirection = RCAMSInvestorCombPositionField_PosiDirection;
            
    ///组合合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( RCAMSInvestorCombPositionField_CombInstrumentID != NULL ) {
        if(RCAMSInvestorCombPositionField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", RCAMSInvestorCombPositionField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, RCAMSInvestorCombPositionField_CombInstrumentID, RCAMSInvestorCombPositionField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, RCAMSInvestorCombPositionField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        RCAMSInvestorCombPositionField_CombInstrumentID = NULL;
    }
            
    ///单腿编号
    // TThostFtdcLegIDType int
    self->data.LegID = RCAMSInvestorCombPositionField_LegID;
        
    ///交易所组合合约代码
    // TThostFtdcExchangeInstIDType char[81]
    if( RCAMSInvestorCombPositionField_ExchangeInstID != NULL ) {
        if(RCAMSInvestorCombPositionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", RCAMSInvestorCombPositionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, RCAMSInvestorCombPositionField_ExchangeInstID, RCAMSInvestorCombPositionField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, RCAMSInvestorCombPositionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        RCAMSInvestorCombPositionField_ExchangeInstID = NULL;
    }
            
    ///持仓量
    // TThostFtdcVolumeType int
    self->data.TotalAmt = RCAMSInvestorCombPositionField_TotalAmt;
        
    ///交易所保证金
    // TThostFtdcMoneyType double
    self->data.ExchMargin = RCAMSInvestorCombPositionField_ExchMargin;
        
    ///投资者保证金
    // TThostFtdcMoneyType double
    self->data.Margin = RCAMSInvestorCombPositionField_Margin;
        

    return 0;
}

static void PyCThostFtdcRCAMSInvestorCombPositionField_dealloc(PyCThostFtdcRCAMSInvestorCombPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_repr(PyCThostFtdcRCAMSInvestorCombPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:i,s:d,s:d}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInvestorCombPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeID(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_BrokerID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_BrokerID(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_InvestorID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_InvestorID(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_InstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_InstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_HedgeFlag(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投套标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_HedgeFlag(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_PosiDirection(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

///持仓多空方向
// TThostFtdcPosiDirectionType char
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_PosiDirection(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_CombInstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_CombInstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_LegID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LegID);
#else
    return PyInt_FromLong(self->data.LegID);
#endif
}

///单腿编号
// TThostFtdcLegIDType int
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_LegID(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeInstID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///交易所组合合约代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeInstID(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_TotalAmt(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TotalAmt);
#else
    return PyInt_FromLong(self->data.TotalAmt);
#endif
}

///持仓量
// TThostFtdcVolumeType int
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_TotalAmt(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchMargin(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchMargin);
}

///交易所保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchMargin(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_Margin(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Margin);
}

///投资者保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcRCAMSInvestorCombPositionField_set_Margin(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcRCAMSInvestorCombPositionField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_BrokerID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_InvestorID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_InstrumentID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投套标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_HedgeFlag, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///持仓多空方向 
    {(char *)"PosiDirection", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_PosiDirection, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
    ///组合合约代码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_CombInstrumentID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
    ///单腿编号 
    {(char *)"LegID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_LegID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_LegID, (char *)"LegID", NULL},
    ///交易所组合合约代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeInstID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///持仓量 
    {(char *)"TotalAmt", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_TotalAmt, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_TotalAmt, (char *)"TotalAmt", NULL},
    ///交易所保证金 
    {(char *)"ExchMargin", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchMargin, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchMargin, (char *)"ExchMargin", NULL},
    ///投资者保证金 
    {(char *)"Margin", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_Margin, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_Margin, (char *)"Margin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSInvestorCombPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSInvestorCombPositionField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSInvestorCombPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSInvestorCombPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSInvestorCombPositionField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSInvestorCombPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSInvestorCombPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSInvestorCombPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSInvestorCombPositionField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSInvestorCombPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSInvestorCombPositionField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSInvestorCombPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSInvestorCombPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSInvestorCombPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSInvestorCombPositionField", (PyObject *)&PyCThostFtdcRCAMSInvestorCombPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInvestorCombPositionField to module");
        Py_DECREF(&PyCThostFtdcRCAMSInvestorCombPositionFieldType);
		return -1;
    }

    return 0;
}
