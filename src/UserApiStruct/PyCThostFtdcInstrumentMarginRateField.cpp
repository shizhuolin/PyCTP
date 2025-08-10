
#include "PyCThostFtdcInstrumentMarginRateField.h"

///合约保证金率

static PyObject *PyCThostFtdcInstrumentMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentMarginRateField *self = (PyCThostFtdcInstrumentMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentMarginRateField_init(PyCThostFtdcInstrumentMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentMarginRateField_reserve1 = NULL;
    Py_ssize_t InstrumentMarginRateField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char InstrumentMarginRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InstrumentMarginRateField_BrokerID = NULL;
    Py_ssize_t InstrumentMarginRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InstrumentMarginRateField_InvestorID = NULL;
    Py_ssize_t InstrumentMarginRateField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InstrumentMarginRateField_HedgeFlag = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double InstrumentMarginRateField_LongMarginRatioByMoney = 0.0;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    double InstrumentMarginRateField_LongMarginRatioByVolume = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double InstrumentMarginRateField_ShortMarginRatioByMoney = 0.0;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    double InstrumentMarginRateField_ShortMarginRatioByVolume = 0.0;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    int InstrumentMarginRateField_IsRelative = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InstrumentMarginRateField_ExchangeID = NULL;
    Py_ssize_t InstrumentMarginRateField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *InstrumentMarginRateField_InvestUnitID = NULL;
    Py_ssize_t InstrumentMarginRateField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentMarginRateField_InstrumentID = NULL;
    Py_ssize_t InstrumentMarginRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddis#s#s#", (char **)kwlist
#endif

        , &InstrumentMarginRateField_reserve1, &InstrumentMarginRateField_reserve1_len 
        , &InstrumentMarginRateField_InvestorRange 
        , &InstrumentMarginRateField_BrokerID, &InstrumentMarginRateField_BrokerID_len 
        , &InstrumentMarginRateField_InvestorID, &InstrumentMarginRateField_InvestorID_len 
        , &InstrumentMarginRateField_HedgeFlag 
        , &InstrumentMarginRateField_LongMarginRatioByMoney 
        , &InstrumentMarginRateField_LongMarginRatioByVolume 
        , &InstrumentMarginRateField_ShortMarginRatioByMoney 
        , &InstrumentMarginRateField_ShortMarginRatioByVolume 
        , &InstrumentMarginRateField_IsRelative 
        , &InstrumentMarginRateField_ExchangeID, &InstrumentMarginRateField_ExchangeID_len 
        , &InstrumentMarginRateField_InvestUnitID, &InstrumentMarginRateField_InvestUnitID_len 
        , &InstrumentMarginRateField_InstrumentID, &InstrumentMarginRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentMarginRateField_reserve1 != NULL ) {
        if(InstrumentMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InstrumentMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InstrumentMarginRateField_reserve1, InstrumentMarginRateField_reserve1_len);        
        strncpy(self->data.reserve1, InstrumentMarginRateField_reserve1, sizeof(self->data.reserve1) );
        InstrumentMarginRateField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = InstrumentMarginRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InstrumentMarginRateField_BrokerID != NULL ) {
        if(InstrumentMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InstrumentMarginRateField_BrokerID, InstrumentMarginRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, InstrumentMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
        InstrumentMarginRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InstrumentMarginRateField_InvestorID != NULL ) {
        if(InstrumentMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InstrumentMarginRateField_InvestorID, InstrumentMarginRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, InstrumentMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
        InstrumentMarginRateField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InstrumentMarginRateField_HedgeFlag;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = InstrumentMarginRateField_LongMarginRatioByMoney;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = InstrumentMarginRateField_LongMarginRatioByVolume;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = InstrumentMarginRateField_ShortMarginRatioByMoney;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = InstrumentMarginRateField_ShortMarginRatioByVolume;
        
    ///是否相对交易所收取
    // TThostFtdcBoolType int
    self->data.IsRelative = InstrumentMarginRateField_IsRelative;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InstrumentMarginRateField_ExchangeID != NULL ) {
        if(InstrumentMarginRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InstrumentMarginRateField_ExchangeID, InstrumentMarginRateField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InstrumentMarginRateField_ExchangeID, sizeof(self->data.ExchangeID) );
        InstrumentMarginRateField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( InstrumentMarginRateField_InvestUnitID != NULL ) {
        if(InstrumentMarginRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, InstrumentMarginRateField_InvestUnitID, InstrumentMarginRateField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, InstrumentMarginRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        InstrumentMarginRateField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentMarginRateField_InstrumentID != NULL ) {
        if(InstrumentMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InstrumentMarginRateField_InstrumentID, InstrumentMarginRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InstrumentMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        InstrumentMarginRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInstrumentMarginRateField_dealloc(PyCThostFtdcInstrumentMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_repr(PyCThostFtdcInstrumentMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:i,s:s,s:s,s:s}"
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
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_reserve1(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentMarginRateField_set_reserve1(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InvestorRange(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcInstrumentMarginRateField_set_InvestorRange(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_BrokerID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInstrumentMarginRateField_set_BrokerID(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InvestorID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInstrumentMarginRateField_set_InvestorID(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_HedgeFlag(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInstrumentMarginRateField_set_HedgeFlag(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_IsRelative(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsRelative);
#else
    return PyInt_FromLong(self->data.IsRelative);
#endif
}

///是否相对交易所收取
// TThostFtdcBoolType int
static int PyCThostFtdcInstrumentMarginRateField_set_IsRelative(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_ExchangeID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInstrumentMarginRateField_set_ExchangeID(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InvestUnitID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcInstrumentMarginRateField_set_InvestUnitID(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InstrumentID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentMarginRateField_set_InstrumentID(PyCThostFtdcInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInstrumentMarginRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInstrumentMarginRateField_get_reserve1, (setter)PyCThostFtdcInstrumentMarginRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentMarginRateField_get_InvestorRange, (setter)PyCThostFtdcInstrumentMarginRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentMarginRateField_get_BrokerID, (setter)PyCThostFtdcInstrumentMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentMarginRateField_get_InvestorID, (setter)PyCThostFtdcInstrumentMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///是否相对交易所收取 
    {(char *)"IsRelative", (getter)PyCThostFtdcInstrumentMarginRateField_get_IsRelative, (setter)PyCThostFtdcInstrumentMarginRateField_set_IsRelative, (char *)"IsRelative", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentMarginRateField_get_ExchangeID, (setter)PyCThostFtdcInstrumentMarginRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcInstrumentMarginRateField_get_InvestUnitID, (setter)PyCThostFtdcInstrumentMarginRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentMarginRateField_get_InstrumentID, (setter)PyCThostFtdcInstrumentMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateField", (PyObject *)&PyCThostFtdcInstrumentMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateField to module");
        Py_DECREF(&PyCThostFtdcInstrumentMarginRateFieldType);
		return -1;
    }

    return 0;
}
