
#include "PyCThostFtdcInstrumentMarginRateULField.h"

///合约保证金率调整

static PyObject *PyCThostFtdcInstrumentMarginRateULField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentMarginRateULField *self = (PyCThostFtdcInstrumentMarginRateULField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentMarginRateULField_init(PyCThostFtdcInstrumentMarginRateULField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentMarginRateULField_reserve1 = NULL;
    Py_ssize_t InstrumentMarginRateULField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char InstrumentMarginRateULField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *InstrumentMarginRateULField_BrokerID = NULL;
    Py_ssize_t InstrumentMarginRateULField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *InstrumentMarginRateULField_InvestorID = NULL;
    Py_ssize_t InstrumentMarginRateULField_InvestorID_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char InstrumentMarginRateULField_HedgeFlag = 0;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    double InstrumentMarginRateULField_LongMarginRatioByMoney = 0.0;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    double InstrumentMarginRateULField_LongMarginRatioByVolume = 0.0;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    double InstrumentMarginRateULField_ShortMarginRatioByMoney = 0.0;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    double InstrumentMarginRateULField_ShortMarginRatioByVolume = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentMarginRateULField_InstrumentID = NULL;
    Py_ssize_t InstrumentMarginRateULField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cdddds#", (char **)kwlist
#endif

        , &InstrumentMarginRateULField_reserve1, &InstrumentMarginRateULField_reserve1_len 
        , &InstrumentMarginRateULField_InvestorRange 
        , &InstrumentMarginRateULField_BrokerID, &InstrumentMarginRateULField_BrokerID_len 
        , &InstrumentMarginRateULField_InvestorID, &InstrumentMarginRateULField_InvestorID_len 
        , &InstrumentMarginRateULField_HedgeFlag 
        , &InstrumentMarginRateULField_LongMarginRatioByMoney 
        , &InstrumentMarginRateULField_LongMarginRatioByVolume 
        , &InstrumentMarginRateULField_ShortMarginRatioByMoney 
        , &InstrumentMarginRateULField_ShortMarginRatioByVolume 
        , &InstrumentMarginRateULField_InstrumentID, &InstrumentMarginRateULField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentMarginRateULField_reserve1 != NULL ) {
        if(InstrumentMarginRateULField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InstrumentMarginRateULField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InstrumentMarginRateULField_reserve1, InstrumentMarginRateULField_reserve1_len);        
        strncpy(self->data.reserve1, InstrumentMarginRateULField_reserve1, sizeof(self->data.reserve1) );
        InstrumentMarginRateULField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = InstrumentMarginRateULField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( InstrumentMarginRateULField_BrokerID != NULL ) {
        if(InstrumentMarginRateULField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateULField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, InstrumentMarginRateULField_BrokerID, InstrumentMarginRateULField_BrokerID_len);        
        strncpy(self->data.BrokerID, InstrumentMarginRateULField_BrokerID, sizeof(self->data.BrokerID) );
        InstrumentMarginRateULField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( InstrumentMarginRateULField_InvestorID != NULL ) {
        if(InstrumentMarginRateULField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateULField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, InstrumentMarginRateULField_InvestorID, InstrumentMarginRateULField_InvestorID_len);        
        strncpy(self->data.InvestorID, InstrumentMarginRateULField_InvestorID, sizeof(self->data.InvestorID) );
        InstrumentMarginRateULField_InvestorID = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = InstrumentMarginRateULField_HedgeFlag;
            
    ///多头保证金率
    // TThostFtdcRatioType double
    self->data.LongMarginRatioByMoney = InstrumentMarginRateULField_LongMarginRatioByMoney;
        
    ///多头保证金费
    // TThostFtdcMoneyType double
    self->data.LongMarginRatioByVolume = InstrumentMarginRateULField_LongMarginRatioByVolume;
        
    ///空头保证金率
    // TThostFtdcRatioType double
    self->data.ShortMarginRatioByMoney = InstrumentMarginRateULField_ShortMarginRatioByMoney;
        
    ///空头保证金费
    // TThostFtdcMoneyType double
    self->data.ShortMarginRatioByVolume = InstrumentMarginRateULField_ShortMarginRatioByVolume;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentMarginRateULField_InstrumentID != NULL ) {
        if(InstrumentMarginRateULField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InstrumentMarginRateULField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InstrumentMarginRateULField_InstrumentID, InstrumentMarginRateULField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InstrumentMarginRateULField_InstrumentID, sizeof(self->data.InstrumentID) );
        InstrumentMarginRateULField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInstrumentMarginRateULField_dealloc(PyCThostFtdcInstrumentMarginRateULField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_repr(PyCThostFtdcInstrumentMarginRateULField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:s}"
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
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateULField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_reserve1(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentMarginRateULField_set_reserve1(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_InvestorRange(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcInstrumentMarginRateULField_set_InvestorRange(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_BrokerID(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcInstrumentMarginRateULField_set_BrokerID(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_InvestorID(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcInstrumentMarginRateULField_set_InvestorID(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_HedgeFlag(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcInstrumentMarginRateULField_set_HedgeFlag(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

///多头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

///多头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

///空头保证金率
// TThostFtdcRatioType double
static int PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

///空头保证金费
// TThostFtdcMoneyType double
static int PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_InstrumentID(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentMarginRateULField_set_InstrumentID(PyCThostFtdcInstrumentMarginRateULField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInstrumentMarginRateULField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInstrumentMarginRateULField_get_reserve1, (setter)PyCThostFtdcInstrumentMarginRateULField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentMarginRateULField_get_InvestorRange, (setter)PyCThostFtdcInstrumentMarginRateULField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentMarginRateULField_get_BrokerID, (setter)PyCThostFtdcInstrumentMarginRateULField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentMarginRateULField_get_InvestorID, (setter)PyCThostFtdcInstrumentMarginRateULField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentMarginRateULField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentMarginRateULField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///多头保证金率 
    {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
    ///多头保证金费 
    {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
    ///空头保证金率 
    {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
    ///空头保证金费 
    {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentMarginRateULField_get_InstrumentID, (setter)PyCThostFtdcInstrumentMarginRateULField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentMarginRateULFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentMarginRateULField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentMarginRateULField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentMarginRateULField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentMarginRateULField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentMarginRateULField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentMarginRateULField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentMarginRateULField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentMarginRateULField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentMarginRateULFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentMarginRateULField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentMarginRateULFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentMarginRateULField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentMarginRateULFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateULField", (PyObject *)&PyCThostFtdcInstrumentMarginRateULFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateULField to module");
        Py_DECREF(&PyCThostFtdcInstrumentMarginRateULFieldType);
		return -1;
    }

    return 0;
}
