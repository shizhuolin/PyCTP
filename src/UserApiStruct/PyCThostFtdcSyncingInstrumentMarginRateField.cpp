
#include "PyCThostFtdcSyncingInstrumentMarginRateField.h"

///正在同步中的合约保证金率

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInstrumentMarginRateField *self = (PyCThostFtdcSyncingInstrumentMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInstrumentMarginRateField_init(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *SyncingInstrumentMarginRateField_reserve1 = NULL;
    Py_ssize_t SyncingInstrumentMarginRateField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char SyncingInstrumentMarginRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncingInstrumentMarginRateField_BrokerID = NULL;
    Py_ssize_t SyncingInstrumentMarginRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInstrumentMarginRateField_InvestorID = NULL;
    Py_ssize_t SyncingInstrumentMarginRateField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncingInstrumentMarginRateField_HedgeFlag = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double SyncingInstrumentMarginRateField_LongMarginRatioByMoney = 0.0;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    double SyncingInstrumentMarginRateField_LongMarginRatioByVolume = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double SyncingInstrumentMarginRateField_ShortMarginRatioByMoney = 0.0;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    double SyncingInstrumentMarginRateField_ShortMarginRatioByVolume = 0.0;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    int SyncingInstrumentMarginRateField_IsRelative = 0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncingInstrumentMarginRateField_InstrumentID = NULL;
    Py_ssize_t SyncingInstrumentMarginRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddis#", (char **)kwlist
#endif

        , &SyncingInstrumentMarginRateField_reserve1, &SyncingInstrumentMarginRateField_reserve1_len 
        , &SyncingInstrumentMarginRateField_InvestorRange 
        , &SyncingInstrumentMarginRateField_BrokerID, &SyncingInstrumentMarginRateField_BrokerID_len 
        , &SyncingInstrumentMarginRateField_InvestorID, &SyncingInstrumentMarginRateField_InvestorID_len 
        , &SyncingInstrumentMarginRateField_HedgeFlag 
        , &SyncingInstrumentMarginRateField_LongMarginRatioByMoney 
        , &SyncingInstrumentMarginRateField_LongMarginRatioByVolume 
        , &SyncingInstrumentMarginRateField_ShortMarginRatioByMoney 
        , &SyncingInstrumentMarginRateField_ShortMarginRatioByVolume 
        , &SyncingInstrumentMarginRateField_IsRelative 
        , &SyncingInstrumentMarginRateField_InstrumentID, &SyncingInstrumentMarginRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( SyncingInstrumentMarginRateField_reserve1 != NULL ) {
        if(SyncingInstrumentMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", SyncingInstrumentMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, SyncingInstrumentMarginRateField_reserve1, SyncingInstrumentMarginRateField_reserve1_len);        
        strncpy(self->data.reserve1, SyncingInstrumentMarginRateField_reserve1, sizeof(self->data.reserve1) );
        SyncingInstrumentMarginRateField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = SyncingInstrumentMarginRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncingInstrumentMarginRateField_BrokerID != NULL ) {
        if(SyncingInstrumentMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncingInstrumentMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncingInstrumentMarginRateField_BrokerID, SyncingInstrumentMarginRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncingInstrumentMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
        SyncingInstrumentMarginRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInstrumentMarginRateField_InvestorID != NULL ) {
        if(SyncingInstrumentMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncingInstrumentMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncingInstrumentMarginRateField_InvestorID, SyncingInstrumentMarginRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncingInstrumentMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
        SyncingInstrumentMarginRateField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = SyncingInstrumentMarginRateField_HedgeFlag;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = SyncingInstrumentMarginRateField_LongMarginRatioByMoney;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = SyncingInstrumentMarginRateField_LongMarginRatioByVolume;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = SyncingInstrumentMarginRateField_ShortMarginRatioByMoney;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = SyncingInstrumentMarginRateField_ShortMarginRatioByVolume;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    self->data.IsRelative = SyncingInstrumentMarginRateField_IsRelative;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncingInstrumentMarginRateField_InstrumentID != NULL ) {
        if(SyncingInstrumentMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncingInstrumentMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncingInstrumentMarginRateField_InstrumentID, SyncingInstrumentMarginRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncingInstrumentMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncingInstrumentMarginRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSyncingInstrumentMarginRateField_dealloc(PyCThostFtdcSyncingInstrumentMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_repr(PyCThostFtdcSyncingInstrumentMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:i,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"LongMarginRatioByMoney", self->data.LongMarginRatioByMoney 
        ,"LongMarginRatioByVolume", self->data.LongMarginRatioByVolume 
        ,"ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney 
        ,"ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume 
        ,"IsRelative", self->data.IsRelative 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_reserve1(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_reserve1(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorRange(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorRange(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_BrokerID(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_BrokerID(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorID(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorID(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_HedgeFlag(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_HedgeFlag(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_IsRelative(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsRelative);
#else
    return PyInt_FromLong(self->data.IsRelative);
#endif
}

///是否相对交易所收取
// TThostFtdcBoolType int
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_IsRelative(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_InstrumentID(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncingInstrumentMarginRateField_set_InstrumentID(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSyncingInstrumentMarginRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_reserve1, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorRange, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_BrokerID, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorID, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///是否相对交易所收取 
    {(char *)"IsRelative", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_IsRelative, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_IsRelative, (char *)"IsRelative", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_InstrumentID, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInstrumentMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInstrumentMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInstrumentMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInstrumentMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInstrumentMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInstrumentMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInstrumentMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInstrumentMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInstrumentMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInstrumentMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInstrumentMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInstrumentMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInstrumentMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInstrumentMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentMarginRateField", (PyObject *)&PyCThostFtdcSyncingInstrumentMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentMarginRateField to module");
        Py_DECREF(&PyCThostFtdcSyncingInstrumentMarginRateFieldType);
		return -1;
    }

    return 0;
}
