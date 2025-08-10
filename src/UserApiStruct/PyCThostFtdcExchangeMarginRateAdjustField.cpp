
#include "PyCThostFtdcExchangeMarginRateAdjustField.h"

///交易所保证金率调整

static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeMarginRateAdjustField *self = (PyCThostFtdcExchangeMarginRateAdjustField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeMarginRateAdjustField_init(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ExchLongMarginRatioByMoney", "ExchLongMarginRatioByVolume", "ExchShortMarginRatioByMoney", "ExchShortMarginRatioByVolume", "NoLongMarginRatioByMoney", "NoLongMarginRatioByVolume", "NoShortMarginRatioByMoney", "NoShortMarginRatioByVolume", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ExchangeMarginRateAdjustField_BrokerID = NULL;
    Py_ssize_t ExchangeMarginRateAdjustField_BrokerID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ExchangeMarginRateAdjustField_reserve1 = NULL;
    Py_ssize_t ExchangeMarginRateAdjustField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char ExchangeMarginRateAdjustField_HedgeFlag = 0;
            
    ///跟随交易所投资者多头保证金率
    // TThostFtdcRatioType double
    double ExchangeMarginRateAdjustField_LongMarginRatioByMoney = 0.0;
        
    ///跟随交易所投资者多头保证金费
    // TThostFtdcMoneyType double
    double ExchangeMarginRateAdjustField_LongMarginRatioByVolume = 0.0;
        
    ///跟随交易所投资者空头保证金率
    // TThostFtdcRatioType double
    double ExchangeMarginRateAdjustField_ShortMarginRatioByMoney = 0.0;
        
    ///跟随交易所投资者空头保证金费
    // TThostFtdcMoneyType double
    double ExchangeMarginRateAdjustField_ShortMarginRatioByVolume = 0.0;
        
    ///交易所多头保证金率
    // TThostFtdcRatioType double
    double ExchangeMarginRateAdjustField_ExchLongMarginRatioByMoney = 0.0;
        
    ///交易所多头保证金费
    // TThostFtdcMoneyType double
    double ExchangeMarginRateAdjustField_ExchLongMarginRatioByVolume = 0.0;
        
    ///交易所空头保证金率
    // TThostFtdcRatioType double
    double ExchangeMarginRateAdjustField_ExchShortMarginRatioByMoney = 0.0;
        
    ///交易所空头保证金费
    // TThostFtdcMoneyType double
    double ExchangeMarginRateAdjustField_ExchShortMarginRatioByVolume = 0.0;
        
    ///不跟随交易所投资者多头保证金率
    // TThostFtdcRatioType double
    double ExchangeMarginRateAdjustField_NoLongMarginRatioByMoney = 0.0;
        
    ///不跟随交易所投资者多头保证金费
    // TThostFtdcMoneyType double
    double ExchangeMarginRateAdjustField_NoLongMarginRatioByVolume = 0.0;
        
    ///不跟随交易所投资者空头保证金率
    // TThostFtdcRatioType double
    double ExchangeMarginRateAdjustField_NoShortMarginRatioByMoney = 0.0;
        
    ///不跟随交易所投资者空头保证金费
    // TThostFtdcMoneyType double
    double ExchangeMarginRateAdjustField_NoShortMarginRatioByVolume = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ExchangeMarginRateAdjustField_InstrumentID = NULL;
    Py_ssize_t ExchangeMarginRateAdjustField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cddddddddddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cdddddddddddds#", (char **)kwlist
#endif

        , &ExchangeMarginRateAdjustField_BrokerID, &ExchangeMarginRateAdjustField_BrokerID_len 
        , &ExchangeMarginRateAdjustField_reserve1, &ExchangeMarginRateAdjustField_reserve1_len 
        , &ExchangeMarginRateAdjustField_HedgeFlag 
        , &ExchangeMarginRateAdjustField_LongMarginRatioByMoney 
        , &ExchangeMarginRateAdjustField_LongMarginRatioByVolume 
        , &ExchangeMarginRateAdjustField_ShortMarginRatioByMoney 
        , &ExchangeMarginRateAdjustField_ShortMarginRatioByVolume 
        , &ExchangeMarginRateAdjustField_ExchLongMarginRatioByMoney 
        , &ExchangeMarginRateAdjustField_ExchLongMarginRatioByVolume 
        , &ExchangeMarginRateAdjustField_ExchShortMarginRatioByMoney 
        , &ExchangeMarginRateAdjustField_ExchShortMarginRatioByVolume 
        , &ExchangeMarginRateAdjustField_NoLongMarginRatioByMoney 
        , &ExchangeMarginRateAdjustField_NoLongMarginRatioByVolume 
        , &ExchangeMarginRateAdjustField_NoShortMarginRatioByMoney 
        , &ExchangeMarginRateAdjustField_NoShortMarginRatioByVolume 
        , &ExchangeMarginRateAdjustField_InstrumentID, &ExchangeMarginRateAdjustField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ExchangeMarginRateAdjustField_BrokerID != NULL ) {
        if(ExchangeMarginRateAdjustField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ExchangeMarginRateAdjustField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ExchangeMarginRateAdjustField_BrokerID, ExchangeMarginRateAdjustField_BrokerID_len);        
        strncpy(self->data.BrokerID, ExchangeMarginRateAdjustField_BrokerID, sizeof(self->data.BrokerID) );
        ExchangeMarginRateAdjustField_BrokerID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ExchangeMarginRateAdjustField_reserve1 != NULL ) {
        if(ExchangeMarginRateAdjustField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ExchangeMarginRateAdjustField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ExchangeMarginRateAdjustField_reserve1, ExchangeMarginRateAdjustField_reserve1_len);        
        strncpy(self->data.reserve1, ExchangeMarginRateAdjustField_reserve1, sizeof(self->data.reserve1) );
        ExchangeMarginRateAdjustField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = ExchangeMarginRateAdjustField_HedgeFlag;
            
    ///跟随交易所投资者多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = ExchangeMarginRateAdjustField_LongMarginRatioByMoney;
        
    ///跟随交易所投资者多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = ExchangeMarginRateAdjustField_LongMarginRatioByVolume;
        
    ///跟随交易所投资者空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = ExchangeMarginRateAdjustField_ShortMarginRatioByMoney;
        
    ///跟随交易所投资者空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = ExchangeMarginRateAdjustField_ShortMarginRatioByVolume;
        
    ///交易所多头保证金率
    // TThostFtdcRatioType double
    self->data.ExchLongMarginRatioByMoney = ExchangeMarginRateAdjustField_ExchLongMarginRatioByMoney;
        
    ///交易所多头保证金费
    // TThostFtdcMoneyType double
    self->data.ExchLongMarginRatioByVolume = ExchangeMarginRateAdjustField_ExchLongMarginRatioByVolume;
        
    ///交易所空头保证金率
    // TThostFtdcRatioType double
    self->data.ExchShortMarginRatioByMoney = ExchangeMarginRateAdjustField_ExchShortMarginRatioByMoney;
        
    ///交易所空头保证金费
    // TThostFtdcMoneyType double
    self->data.ExchShortMarginRatioByVolume = ExchangeMarginRateAdjustField_ExchShortMarginRatioByVolume;
        
    ///不跟随交易所投资者多头保证金率
    // TThostFtdcRatioType double
    self->data.NoLongMarginRatioByMoney = ExchangeMarginRateAdjustField_NoLongMarginRatioByMoney;
        
    ///不跟随交易所投资者多头保证金费
    // TThostFtdcMoneyType double
    self->data.NoLongMarginRatioByVolume = ExchangeMarginRateAdjustField_NoLongMarginRatioByVolume;
        
    ///不跟随交易所投资者空头保证金率
    // TThostFtdcRatioType double
    self->data.NoShortMarginRatioByMoney = ExchangeMarginRateAdjustField_NoShortMarginRatioByMoney;
        
    ///不跟随交易所投资者空头保证金费
    // TThostFtdcMoneyType double
    self->data.NoShortMarginRatioByVolume = ExchangeMarginRateAdjustField_NoShortMarginRatioByVolume;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ExchangeMarginRateAdjustField_InstrumentID != NULL ) {
        if(ExchangeMarginRateAdjustField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ExchangeMarginRateAdjustField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ExchangeMarginRateAdjustField_InstrumentID, ExchangeMarginRateAdjustField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ExchangeMarginRateAdjustField_InstrumentID, sizeof(self->data.InstrumentID) );
        ExchangeMarginRateAdjustField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcExchangeMarginRateAdjustField_dealloc(PyCThostFtdcExchangeMarginRateAdjustField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_repr(PyCThostFtdcExchangeMarginRateAdjustField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"LongMarginRatioByMoney", self->data.LongMarginRatioByMoney 
        ,"LongMarginRatioByVolume", self->data.LongMarginRatioByVolume 
        ,"ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney 
        ,"ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume 
        ,"ExchLongMarginRatioByMoney", self->data.ExchLongMarginRatioByMoney 
        ,"ExchLongMarginRatioByVolume", self->data.ExchLongMarginRatioByVolume 
        ,"ExchShortMarginRatioByMoney", self->data.ExchShortMarginRatioByMoney 
        ,"ExchShortMarginRatioByVolume", self->data.ExchShortMarginRatioByVolume 
        ,"NoLongMarginRatioByMoney", self->data.NoLongMarginRatioByMoney 
        ,"NoLongMarginRatioByVolume", self->data.NoLongMarginRatioByVolume 
        ,"NoShortMarginRatioByMoney", self->data.NoShortMarginRatioByMoney 
        ,"NoShortMarginRatioByVolume", self->data.NoShortMarginRatioByVolume 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeMarginRateAdjustField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_BrokerID(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcExchangeMarginRateAdjustField_set_BrokerID(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_reserve1(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcExchangeMarginRateAdjustField_set_reserve1(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_HedgeFlag(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcExchangeMarginRateAdjustField_set_HedgeFlag(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
            
///跟随交易所投资者多头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_LongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///跟随交易所投资者多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_LongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
        
///跟随交易所投资者多头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_LongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///跟随交易所投资者多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_LongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
        
///跟随交易所投资者空头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_ShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///跟随交易所投资者空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_ShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
        
///跟随交易所投资者空头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_ShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///跟随交易所投资者空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_ShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
        
///交易所多头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_ExchLongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchLongMarginRatioByMoney);
}

///交易所多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_ExchLongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchLongMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchLongMarginRatioByMoney = buf;
    return 0;
}
        
///交易所多头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_ExchLongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchLongMarginRatioByVolume);
}

///交易所多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_ExchLongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchLongMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchLongMarginRatioByVolume = buf;
    return 0;
}
        
///交易所空头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_ExchShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchShortMarginRatioByMoney);
}

///交易所空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_ExchShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchShortMarginRatioByMoney = buf;
    return 0;
}
        
///交易所空头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_ExchShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ExchShortMarginRatioByVolume);
}

///交易所空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_ExchShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchShortMarginRatioByVolume = buf;
    return 0;
}
        
///不跟随交易所投资者多头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_NoLongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NoLongMarginRatioByMoney);
}

///不跟随交易所投资者多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_NoLongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NoLongMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NoLongMarginRatioByMoney = buf;
    return 0;
}
        
///不跟随交易所投资者多头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_NoLongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NoLongMarginRatioByVolume);
}

///不跟随交易所投资者多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_NoLongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NoLongMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NoLongMarginRatioByVolume = buf;
    return 0;
}
        
///不跟随交易所投资者空头保证金率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_NoShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NoShortMarginRatioByMoney);
}

///不跟随交易所投资者空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_NoShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NoShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NoShortMarginRatioByMoney = buf;
    return 0;
}
        
///不跟随交易所投资者空头保证金费
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_NoShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.NoShortMarginRatioByVolume);
}

///不跟随交易所投资者空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcExchangeMarginRateAdjustField_set_NoShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NoShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.NoShortMarginRatioByVolume = buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcExchangeMarginRateAdjustField_get_InstrumentID(PyCThostFtdcExchangeMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcExchangeMarginRateAdjustField_set_InstrumentID(PyCThostFtdcExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcExchangeMarginRateAdjustField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_BrokerID, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_BrokerID, (char *)"BrokerID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_reserve1, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_HedgeFlag, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///跟随交易所投资者多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///跟随交易所投资者多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///跟随交易所投资者空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///跟随交易所投资者空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///交易所多头保证金率 
    {(char *)"ExchLongMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_ExchLongMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_ExchLongMarginRatioByMoney, (char *)"ExchLongMarginRatioByMoney", NULL},
    ///交易所多头保证金费 
    {(char *)"ExchLongMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_ExchLongMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_ExchLongMarginRatioByVolume, (char *)"ExchLongMarginRatioByVolume", NULL},
    ///交易所空头保证金率 
    {(char *)"ExchShortMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_ExchShortMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_ExchShortMarginRatioByMoney, (char *)"ExchShortMarginRatioByMoney", NULL},
    ///交易所空头保证金费 
    {(char *)"ExchShortMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_ExchShortMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_ExchShortMarginRatioByVolume, (char *)"ExchShortMarginRatioByVolume", NULL},
    ///不跟随交易所投资者多头保证金率 
    {(char *)"NoLongMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_NoLongMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_NoLongMarginRatioByMoney, (char *)"NoLongMarginRatioByMoney", NULL},
    ///不跟随交易所投资者多头保证金费 
    {(char *)"NoLongMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_NoLongMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_NoLongMarginRatioByVolume, (char *)"NoLongMarginRatioByVolume", NULL},
    ///不跟随交易所投资者空头保证金率 
    {(char *)"NoShortMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_NoShortMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_NoShortMarginRatioByMoney, (char *)"NoShortMarginRatioByMoney", NULL},
    ///不跟随交易所投资者空头保证金费 
    {(char *)"NoShortMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_NoShortMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_NoShortMarginRatioByVolume, (char *)"NoShortMarginRatioByVolume", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcExchangeMarginRateAdjustField_get_InstrumentID, (setter)PyCThostFtdcExchangeMarginRateAdjustField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeMarginRateAdjustFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeMarginRateAdjustField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeMarginRateAdjustField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeMarginRateAdjustField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeMarginRateAdjustField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeMarginRateAdjustField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeMarginRateAdjustField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeMarginRateAdjustField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeMarginRateAdjustField_new,       /* tp_new */
};

int PyCThostFtdcExchangeMarginRateAdjustFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeMarginRateAdjustField  */
	if (PyType_Ready(&PyCThostFtdcExchangeMarginRateAdjustFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeMarginRateAdjustField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeMarginRateAdjustFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeMarginRateAdjustField", (PyObject *)&PyCThostFtdcExchangeMarginRateAdjustFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeMarginRateAdjustField to module");
        Py_DECREF(&PyCThostFtdcExchangeMarginRateAdjustFieldType);
		return -1;
    }

    return 0;
}
