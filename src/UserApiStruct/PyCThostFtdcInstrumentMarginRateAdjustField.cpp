
#include "PyCThostFtdcInstrumentMarginRateAdjustField.h"

///合约保证金率调整

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentMarginRateAdjustField *self = (PyCThostFtdcInstrumentMarginRateAdjustField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentMarginRateAdjustField_init(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentMarginRateAdjustField_reserve1 = NULL;
    Py_ssize_t InstrumentMarginRateAdjustField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char InstrumentMarginRateAdjustField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InstrumentMarginRateAdjustField_BrokerID = NULL;
    Py_ssize_t InstrumentMarginRateAdjustField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InstrumentMarginRateAdjustField_InvestorID = NULL;
    Py_ssize_t InstrumentMarginRateAdjustField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InstrumentMarginRateAdjustField_HedgeFlag = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double InstrumentMarginRateAdjustField_LongMarginRatioByMoney = 0.0;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    double InstrumentMarginRateAdjustField_LongMarginRatioByVolume = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double InstrumentMarginRateAdjustField_ShortMarginRatioByMoney = 0.0;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    double InstrumentMarginRateAdjustField_ShortMarginRatioByVolume = 0.0;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    int InstrumentMarginRateAdjustField_IsRelative = 0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentMarginRateAdjustField_InstrumentID = NULL;
    Py_ssize_t InstrumentMarginRateAdjustField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddis#", (char **)kwlist
#endif

        , &InstrumentMarginRateAdjustField_reserve1, &InstrumentMarginRateAdjustField_reserve1_len 
        , &InstrumentMarginRateAdjustField_InvestorRange 
        , &InstrumentMarginRateAdjustField_BrokerID, &InstrumentMarginRateAdjustField_BrokerID_len 
        , &InstrumentMarginRateAdjustField_InvestorID, &InstrumentMarginRateAdjustField_InvestorID_len 
        , &InstrumentMarginRateAdjustField_HedgeFlag 
        , &InstrumentMarginRateAdjustField_LongMarginRatioByMoney 
        , &InstrumentMarginRateAdjustField_LongMarginRatioByVolume 
        , &InstrumentMarginRateAdjustField_ShortMarginRatioByMoney 
        , &InstrumentMarginRateAdjustField_ShortMarginRatioByVolume 
        , &InstrumentMarginRateAdjustField_IsRelative 
        , &InstrumentMarginRateAdjustField_InstrumentID, &InstrumentMarginRateAdjustField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentMarginRateAdjustField_reserve1 != NULL ) {
        if(InstrumentMarginRateAdjustField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InstrumentMarginRateAdjustField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InstrumentMarginRateAdjustField_reserve1, InstrumentMarginRateAdjustField_reserve1_len);        
        strncpy(self->data.reserve1, InstrumentMarginRateAdjustField_reserve1, sizeof(self->data.reserve1) );
        InstrumentMarginRateAdjustField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = InstrumentMarginRateAdjustField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InstrumentMarginRateAdjustField_BrokerID != NULL ) {
        if(InstrumentMarginRateAdjustField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateAdjustField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InstrumentMarginRateAdjustField_BrokerID, InstrumentMarginRateAdjustField_BrokerID_len);        
        strncpy(self->data.BrokerID, InstrumentMarginRateAdjustField_BrokerID, sizeof(self->data.BrokerID) );
        InstrumentMarginRateAdjustField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InstrumentMarginRateAdjustField_InvestorID != NULL ) {
        if(InstrumentMarginRateAdjustField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateAdjustField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InstrumentMarginRateAdjustField_InvestorID, InstrumentMarginRateAdjustField_InvestorID_len);        
        strncpy(self->data.InvestorID, InstrumentMarginRateAdjustField_InvestorID, sizeof(self->data.InvestorID) );
        InstrumentMarginRateAdjustField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InstrumentMarginRateAdjustField_HedgeFlag;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = InstrumentMarginRateAdjustField_LongMarginRatioByMoney;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = InstrumentMarginRateAdjustField_LongMarginRatioByVolume;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = InstrumentMarginRateAdjustField_ShortMarginRatioByMoney;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = InstrumentMarginRateAdjustField_ShortMarginRatioByVolume;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    self->data.IsRelative = InstrumentMarginRateAdjustField_IsRelative;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentMarginRateAdjustField_InstrumentID != NULL ) {
        if(InstrumentMarginRateAdjustField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateAdjustField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InstrumentMarginRateAdjustField_InstrumentID, InstrumentMarginRateAdjustField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InstrumentMarginRateAdjustField_InstrumentID, sizeof(self->data.InstrumentID) );
        InstrumentMarginRateAdjustField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInstrumentMarginRateAdjustField_dealloc(PyCThostFtdcInstrumentMarginRateAdjustField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_repr(PyCThostFtdcInstrumentMarginRateAdjustField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateAdjustField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_reserve1(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_reserve1(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorRange(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorRange(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_BrokerID(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_BrokerID(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorID(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorID(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_HedgeFlag(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_HedgeFlag(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_IsRelative(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsRelative);
#else
    return PyInt_FromLong(self->data.IsRelative);
#endif
}

///是否相对交易所收取
// TThostFtdcBoolType int
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_IsRelative(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_InstrumentID(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentMarginRateAdjustField_set_InstrumentID(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInstrumentMarginRateAdjustField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_reserve1, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorRange, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_BrokerID, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorID, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///是否相对交易所收取 
    {(char *)"IsRelative", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_IsRelative, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_IsRelative, (char *)"IsRelative", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_InstrumentID, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentMarginRateAdjustFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentMarginRateAdjustField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentMarginRateAdjustField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentMarginRateAdjustField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentMarginRateAdjustField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentMarginRateAdjustField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentMarginRateAdjustField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentMarginRateAdjustField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentMarginRateAdjustField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentMarginRateAdjustFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentMarginRateAdjustField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentMarginRateAdjustFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentMarginRateAdjustField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentMarginRateAdjustFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateAdjustField", (PyObject *)&PyCThostFtdcInstrumentMarginRateAdjustFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateAdjustField to module");
        Py_DECREF(&PyCThostFtdcInstrumentMarginRateAdjustFieldType);
		return -1;
    }

    return 0;
}
