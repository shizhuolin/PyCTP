
#include "PyCThostFtdcOptionInstrMarginAdjustField.h"

///当前期权合约保证金调整系数

static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrMarginAdjustField *self = (PyCThostFtdcOptionInstrMarginAdjustField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrMarginAdjustField_init(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "IsRelative", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OptionInstrMarginAdjustField_reserve1 = NULL;
    Py_ssize_t OptionInstrMarginAdjustField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char OptionInstrMarginAdjustField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OptionInstrMarginAdjustField_BrokerID = NULL;
    Py_ssize_t OptionInstrMarginAdjustField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OptionInstrMarginAdjustField_InvestorID = NULL;
    Py_ssize_t OptionInstrMarginAdjustField_InvestorID_len = 0;
            
    ///投机空头保证金调整系数
    // TThostFtdcRatioType double
    double OptionInstrMarginAdjustField_SShortMarginRatioByMoney = 0.0;
        
    ///投机空头保证金调整系数
    // TThostFtdcMoneyType double
    double OptionInstrMarginAdjustField_SShortMarginRatioByVolume = 0.0;
        
    ///保值空头保证金调整系数
    // TThostFtdcRatioType double
    double OptionInstrMarginAdjustField_HShortMarginRatioByMoney = 0.0;
        
    ///保值空头保证金调整系数
    // TThostFtdcMoneyType double
    double OptionInstrMarginAdjustField_HShortMarginRatioByVolume = 0.0;
        
    ///套利空头保证金调整系数
    // TThostFtdcRatioType double
    double OptionInstrMarginAdjustField_AShortMarginRatioByMoney = 0.0;
        
    ///套利空头保证金调整系数
    // TThostFtdcMoneyType double
    double OptionInstrMarginAdjustField_AShortMarginRatioByVolume = 0.0;
        
    ///是否跟随交易所收取
    // TThostFtdcBoolType int
    int OptionInstrMarginAdjustField_IsRelative = 0;
        
    ///做市商空头保证金调整系数
    // TThostFtdcRatioType double
    double OptionInstrMarginAdjustField_MShortMarginRatioByMoney = 0.0;
        
    ///做市商空头保证金调整系数
    // TThostFtdcMoneyType double
    double OptionInstrMarginAdjustField_MShortMarginRatioByVolume = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OptionInstrMarginAdjustField_InstrumentID = NULL;
    Py_ssize_t OptionInstrMarginAdjustField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddiddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ddddddidds#", (char **)kwlist
#endif

        , &OptionInstrMarginAdjustField_reserve1, &OptionInstrMarginAdjustField_reserve1_len 
        , &OptionInstrMarginAdjustField_InvestorRange 
        , &OptionInstrMarginAdjustField_BrokerID, &OptionInstrMarginAdjustField_BrokerID_len 
        , &OptionInstrMarginAdjustField_InvestorID, &OptionInstrMarginAdjustField_InvestorID_len 
        , &OptionInstrMarginAdjustField_SShortMarginRatioByMoney 
        , &OptionInstrMarginAdjustField_SShortMarginRatioByVolume 
        , &OptionInstrMarginAdjustField_HShortMarginRatioByMoney 
        , &OptionInstrMarginAdjustField_HShortMarginRatioByVolume 
        , &OptionInstrMarginAdjustField_AShortMarginRatioByMoney 
        , &OptionInstrMarginAdjustField_AShortMarginRatioByVolume 
        , &OptionInstrMarginAdjustField_IsRelative 
        , &OptionInstrMarginAdjustField_MShortMarginRatioByMoney 
        , &OptionInstrMarginAdjustField_MShortMarginRatioByVolume 
        , &OptionInstrMarginAdjustField_InstrumentID, &OptionInstrMarginAdjustField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OptionInstrMarginAdjustField_reserve1 != NULL ) {
        if(OptionInstrMarginAdjustField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OptionInstrMarginAdjustField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OptionInstrMarginAdjustField_reserve1, OptionInstrMarginAdjustField_reserve1_len);        
        strncpy(self->data.reserve1, OptionInstrMarginAdjustField_reserve1, sizeof(self->data.reserve1) );
        OptionInstrMarginAdjustField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = OptionInstrMarginAdjustField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OptionInstrMarginAdjustField_BrokerID != NULL ) {
        if(OptionInstrMarginAdjustField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OptionInstrMarginAdjustField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OptionInstrMarginAdjustField_BrokerID, OptionInstrMarginAdjustField_BrokerID_len);        
        strncpy(self->data.BrokerID, OptionInstrMarginAdjustField_BrokerID, sizeof(self->data.BrokerID) );
        OptionInstrMarginAdjustField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OptionInstrMarginAdjustField_InvestorID != NULL ) {
        if(OptionInstrMarginAdjustField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OptionInstrMarginAdjustField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OptionInstrMarginAdjustField_InvestorID, OptionInstrMarginAdjustField_InvestorID_len);        
        strncpy(self->data.InvestorID, OptionInstrMarginAdjustField_InvestorID, sizeof(self->data.InvestorID) );
        OptionInstrMarginAdjustField_InvestorID = NULL;
    }
            
    ///投机空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.SShortMarginRatioByMoney = OptionInstrMarginAdjustField_SShortMarginRatioByMoney;
        
    ///投机空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.SShortMarginRatioByVolume = OptionInstrMarginAdjustField_SShortMarginRatioByVolume;
        
    ///保值空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.HShortMarginRatioByMoney = OptionInstrMarginAdjustField_HShortMarginRatioByMoney;
        
    ///保值空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.HShortMarginRatioByVolume = OptionInstrMarginAdjustField_HShortMarginRatioByVolume;
        
    ///套利空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.AShortMarginRatioByMoney = OptionInstrMarginAdjustField_AShortMarginRatioByMoney;
        
    ///套利空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.AShortMarginRatioByVolume = OptionInstrMarginAdjustField_AShortMarginRatioByVolume;
        
    ///是否跟随交易所收取
    // TThostFtdcBoolType int
    self->data.IsRelative = OptionInstrMarginAdjustField_IsRelative;
        
    ///做市商空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.MShortMarginRatioByMoney = OptionInstrMarginAdjustField_MShortMarginRatioByMoney;
        
    ///做市商空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.MShortMarginRatioByVolume = OptionInstrMarginAdjustField_MShortMarginRatioByVolume;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OptionInstrMarginAdjustField_InstrumentID != NULL ) {
        if(OptionInstrMarginAdjustField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OptionInstrMarginAdjustField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OptionInstrMarginAdjustField_InstrumentID, OptionInstrMarginAdjustField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OptionInstrMarginAdjustField_InstrumentID, sizeof(self->data.InstrumentID) );
        OptionInstrMarginAdjustField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcOptionInstrMarginAdjustField_dealloc(PyCThostFtdcOptionInstrMarginAdjustField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_repr(PyCThostFtdcOptionInstrMarginAdjustField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"SShortMarginRatioByMoney", self->data.SShortMarginRatioByMoney 
        ,"SShortMarginRatioByVolume", self->data.SShortMarginRatioByVolume 
        ,"HShortMarginRatioByMoney", self->data.HShortMarginRatioByMoney 
        ,"HShortMarginRatioByVolume", self->data.HShortMarginRatioByVolume 
        ,"AShortMarginRatioByMoney", self->data.AShortMarginRatioByMoney 
        ,"AShortMarginRatioByVolume", self->data.AShortMarginRatioByVolume 
        ,"IsRelative", self->data.IsRelative 
        ,"MShortMarginRatioByMoney", self->data.MShortMarginRatioByMoney 
        ,"MShortMarginRatioByVolume", self->data.MShortMarginRatioByVolume 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrMarginAdjustField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_reserve1(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOptionInstrMarginAdjustField_set_reserve1(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_InvestorRange(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcOptionInstrMarginAdjustField_set_InvestorRange(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_BrokerID(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOptionInstrMarginAdjustField_set_BrokerID(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_InvestorID(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOptionInstrMarginAdjustField_set_InvestorID(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
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
            
///投机空头保证金调整系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_SShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SShortMarginRatioByMoney);
}

///投机空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_SShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SShortMarginRatioByMoney = buf;
    return 0;
}
        
///投机空头保证金调整系数
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_SShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SShortMarginRatioByVolume);
}

///投机空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_SShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SShortMarginRatioByVolume = buf;
    return 0;
}
        
///保值空头保证金调整系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_HShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HShortMarginRatioByMoney);
}

///保值空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_HShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HShortMarginRatioByMoney = buf;
    return 0;
}
        
///保值空头保证金调整系数
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_HShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HShortMarginRatioByVolume);
}

///保值空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_HShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HShortMarginRatioByVolume = buf;
    return 0;
}
        
///套利空头保证金调整系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_AShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AShortMarginRatioByMoney);
}

///套利空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_AShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AShortMarginRatioByMoney = buf;
    return 0;
}
        
///套利空头保证金调整系数
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_AShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AShortMarginRatioByVolume);
}

///套利空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_AShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AShortMarginRatioByVolume = buf;
    return 0;
}
        
///是否跟随交易所收取
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_IsRelative(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsRelative);
#else
    return PyInt_FromLong(self->data.IsRelative);
#endif
}

///是否跟随交易所收取
// TThostFtdcBoolType int
static int PyCThostFtdcOptionInstrMarginAdjustField_set_IsRelative(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
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
        
///做市商空头保证金调整系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_MShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MShortMarginRatioByMoney);
}

///做市商空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_MShortMarginRatioByMoney(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MShortMarginRatioByMoney = buf;
    return 0;
}
        
///做市商空头保证金调整系数
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_MShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MShortMarginRatioByVolume);
}

///做市商空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrMarginAdjustField_set_MShortMarginRatioByVolume(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MShortMarginRatioByVolume = buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOptionInstrMarginAdjustField_get_InstrumentID(PyCThostFtdcOptionInstrMarginAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOptionInstrMarginAdjustField_set_InstrumentID(PyCThostFtdcOptionInstrMarginAdjustField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcOptionInstrMarginAdjustField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_reserve1, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_InvestorRange, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_BrokerID, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_InvestorID, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机空头保证金调整系数 
    {(char *)"SShortMarginRatioByMoney", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_SShortMarginRatioByMoney, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_SShortMarginRatioByMoney, (char *)"SShortMarginRatioByMoney", NULL},
    ///投机空头保证金调整系数 
    {(char *)"SShortMarginRatioByVolume", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_SShortMarginRatioByVolume, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_SShortMarginRatioByVolume, (char *)"SShortMarginRatioByVolume", NULL},
    ///保值空头保证金调整系数 
    {(char *)"HShortMarginRatioByMoney", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_HShortMarginRatioByMoney, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_HShortMarginRatioByMoney, (char *)"HShortMarginRatioByMoney", NULL},
    ///保值空头保证金调整系数 
    {(char *)"HShortMarginRatioByVolume", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_HShortMarginRatioByVolume, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_HShortMarginRatioByVolume, (char *)"HShortMarginRatioByVolume", NULL},
    ///套利空头保证金调整系数 
    {(char *)"AShortMarginRatioByMoney", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_AShortMarginRatioByMoney, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_AShortMarginRatioByMoney, (char *)"AShortMarginRatioByMoney", NULL},
    ///套利空头保证金调整系数 
    {(char *)"AShortMarginRatioByVolume", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_AShortMarginRatioByVolume, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_AShortMarginRatioByVolume, (char *)"AShortMarginRatioByVolume", NULL},
    ///是否跟随交易所收取 
    {(char *)"IsRelative", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_IsRelative, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_IsRelative, (char *)"IsRelative", NULL},
    ///做市商空头保证金调整系数 
    {(char *)"MShortMarginRatioByMoney", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_MShortMarginRatioByMoney, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_MShortMarginRatioByMoney, (char *)"MShortMarginRatioByMoney", NULL},
    ///做市商空头保证金调整系数 
    {(char *)"MShortMarginRatioByVolume", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_MShortMarginRatioByVolume, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_MShortMarginRatioByVolume, (char *)"MShortMarginRatioByVolume", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrMarginAdjustField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrMarginAdjustField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrMarginAdjustFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrMarginAdjustField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrMarginAdjustField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrMarginAdjustField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrMarginAdjustField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrMarginAdjustField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrMarginAdjustField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrMarginAdjustField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrMarginAdjustField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrMarginAdjustFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrMarginAdjustField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrMarginAdjustFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrMarginAdjustField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrMarginAdjustFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrMarginAdjustField", (PyObject *)&PyCThostFtdcOptionInstrMarginAdjustFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrMarginAdjustField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrMarginAdjustFieldType);
		return -1;
    }

    return 0;
}
