
#include "PyCThostFtdcSyncDeltaInvstMarginRateField.h"

///风险结算追平投资者期货保证金率

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstMarginRateField *self = (PyCThostFtdcSyncDeltaInvstMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstMarginRateField_init(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaInvstMarginRateField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaInvstMarginRateField_InstrumentID_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char SyncDeltaInvstMarginRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaInvstMarginRateField_BrokerID = NULL;
    Py_ssize_t SyncDeltaInvstMarginRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaInvstMarginRateField_InvestorID = NULL;
    Py_ssize_t SyncDeltaInvstMarginRateField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaInvstMarginRateField_HedgeFlag = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double SyncDeltaInvstMarginRateField_LongMarginRatioByMoney = 0.0;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    double SyncDeltaInvstMarginRateField_LongMarginRatioByVolume = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double SyncDeltaInvstMarginRateField_ShortMarginRatioByMoney = 0.0;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    double SyncDeltaInvstMarginRateField_ShortMarginRatioByVolume = 0.0;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    int SyncDeltaInvstMarginRateField_IsRelative = 0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaInvstMarginRateField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaInvstMarginRateField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddici", (char **)kwlist
#endif

        , &SyncDeltaInvstMarginRateField_InstrumentID, &SyncDeltaInvstMarginRateField_InstrumentID_len 
        , &SyncDeltaInvstMarginRateField_InvestorRange 
        , &SyncDeltaInvstMarginRateField_BrokerID, &SyncDeltaInvstMarginRateField_BrokerID_len 
        , &SyncDeltaInvstMarginRateField_InvestorID, &SyncDeltaInvstMarginRateField_InvestorID_len 
        , &SyncDeltaInvstMarginRateField_HedgeFlag 
        , &SyncDeltaInvstMarginRateField_LongMarginRatioByMoney 
        , &SyncDeltaInvstMarginRateField_LongMarginRatioByVolume 
        , &SyncDeltaInvstMarginRateField_ShortMarginRatioByMoney 
        , &SyncDeltaInvstMarginRateField_ShortMarginRatioByVolume 
        , &SyncDeltaInvstMarginRateField_IsRelative 
        , &SyncDeltaInvstMarginRateField_ActionDirection 
        , &SyncDeltaInvstMarginRateField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaInvstMarginRateField_InstrumentID != NULL ) {
        if(SyncDeltaInvstMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaInvstMarginRateField_InstrumentID, SyncDeltaInvstMarginRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaInvstMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaInvstMarginRateField_InstrumentID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = SyncDeltaInvstMarginRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaInvstMarginRateField_BrokerID != NULL ) {
        if(SyncDeltaInvstMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaInvstMarginRateField_BrokerID, SyncDeltaInvstMarginRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaInvstMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaInvstMarginRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaInvstMarginRateField_InvestorID != NULL ) {
        if(SyncDeltaInvstMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaInvstMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaInvstMarginRateField_InvestorID, SyncDeltaInvstMarginRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaInvstMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaInvstMarginRateField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncDeltaInvstMarginRateField_HedgeFlag;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = SyncDeltaInvstMarginRateField_LongMarginRatioByMoney;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = SyncDeltaInvstMarginRateField_LongMarginRatioByVolume;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = SyncDeltaInvstMarginRateField_ShortMarginRatioByMoney;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = SyncDeltaInvstMarginRateField_ShortMarginRatioByVolume;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    self->data.IsRelative = SyncDeltaInvstMarginRateField_IsRelative;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaInvstMarginRateField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaInvstMarginRateField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaInvstMarginRateField_dealloc(PyCThostFtdcSyncDeltaInvstMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_repr(PyCThostFtdcSyncDeltaInvstMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
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
        ,"IsRelative", self->data.IsRelative 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
        
///是否相对交易所收取
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_IsRelative(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsRelative);
#else
    return PyInt_FromLong(self->data.IsRelative);
#endif
}

///是否相对交易所收取
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_IsRelative(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsRelative value out of range for C int");
        return -1;
    }
    self->data.IsRelative = (int)buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaInvstMarginRateField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///是否相对交易所收取 
    {(char *)"IsRelative", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_IsRelative, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_IsRelative, (char *)"IsRelative", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstMarginRateField", (PyObject *)&PyCThostFtdcSyncDeltaInvstMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstMarginRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstMarginRateFieldType);
		return -1;
    }

    return 0;
}
