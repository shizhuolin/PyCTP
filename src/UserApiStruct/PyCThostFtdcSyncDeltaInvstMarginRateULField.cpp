
#include "PyCThostFtdcSyncDeltaInvstMarginRateULField.h"

///风险结算追平期权标的调整保证金率

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstMarginRateULField *self = (PyCThostFtdcSyncDeltaInvstMarginRateULField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_init(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaInvstMarginRateULField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaInvstMarginRateULField_InstrumentID_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char SyncDeltaInvstMarginRateULField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaInvstMarginRateULField_BrokerID = NULL;
    Py_ssize_t SyncDeltaInvstMarginRateULField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaInvstMarginRateULField_InvestorID = NULL;
    Py_ssize_t SyncDeltaInvstMarginRateULField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaInvstMarginRateULField_HedgeFlag = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double SyncDeltaInvstMarginRateULField_LongMarginRatioByMoney = 0.0;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    double SyncDeltaInvstMarginRateULField_LongMarginRatioByVolume = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double SyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney = 0.0;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    double SyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaInvstMarginRateULField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddci", (char **)kwlist
#endif

        , &SyncDeltaInvstMarginRateULField_InstrumentID, &SyncDeltaInvstMarginRateULField_InstrumentID_len 
        , &SyncDeltaInvstMarginRateULField_InvestorRange 
        , &SyncDeltaInvstMarginRateULField_BrokerID, &SyncDeltaInvstMarginRateULField_BrokerID_len 
        , &SyncDeltaInvstMarginRateULField_InvestorID, &SyncDeltaInvstMarginRateULField_InvestorID_len 
        , &SyncDeltaInvstMarginRateULField_HedgeFlag 
        , &SyncDeltaInvstMarginRateULField_LongMarginRatioByMoney 
        , &SyncDeltaInvstMarginRateULField_LongMarginRatioByVolume 
        , &SyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney 
        , &SyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume 
        , &SyncDeltaInvstMarginRateULField_ActionDirection 
        , &SyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaInvstMarginRateULField_InstrumentID != NULL ) {
        if(SyncDeltaInvstMarginRateULField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstMarginRateULField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaInvstMarginRateULField_InstrumentID, SyncDeltaInvstMarginRateULField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaInvstMarginRateULField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaInvstMarginRateULField_InstrumentID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = SyncDeltaInvstMarginRateULField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaInvstMarginRateULField_BrokerID != NULL ) {
        if(SyncDeltaInvstMarginRateULField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstMarginRateULField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaInvstMarginRateULField_BrokerID, SyncDeltaInvstMarginRateULField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaInvstMarginRateULField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaInvstMarginRateULField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaInvstMarginRateULField_InvestorID != NULL ) {
        if(SyncDeltaInvstMarginRateULField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstMarginRateULField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaInvstMarginRateULField_InvestorID, SyncDeltaInvstMarginRateULField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaInvstMarginRateULField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaInvstMarginRateULField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaInvstMarginRateULField_HedgeFlag;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = SyncDeltaInvstMarginRateULField_LongMarginRatioByMoney;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = SyncDeltaInvstMarginRateULField_LongMarginRatioByVolume;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = SyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = SyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaInvstMarginRateULField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaInvstMarginRateULField_dealloc(PyCThostFtdcSyncDeltaInvstMarginRateULField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_repr(PyCThostFtdcSyncDeltaInvstMarginRateULField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"LongMarginRatioByMoney", self->data.LongMarginRatioByMoney 
        ,"LongMarginRatioByVolume", self->data.LongMarginRatioByVolume 
        ,"ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney 
        ,"ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateULField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    self->data.InvestorRange = *buf;
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
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
            
///多头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByMoney = buf;
    return 0;
}
        
///多头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByVolume = buf;
    return 0;
}
        
///空头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByMoney = buf;
    return 0;
}
        
///空头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByVolume = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaInvstMarginRateULField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateULFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstMarginRateULField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstMarginRateULField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstMarginRateULField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstMarginRateULField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstMarginRateULField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstMarginRateULField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstMarginRateULField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstMarginRateULField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstMarginRateULField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstMarginRateULField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstMarginRateULField", (PyObject *)&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstMarginRateULField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType);
		return -1;
    }

    return 0;
}
