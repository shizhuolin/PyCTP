
#include "PyCThostFtdcSyncDeltaOptExchMarginField.h"

///风险结算追平中金现货期权交易所保证金率

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaOptExchMarginField *self = (PyCThostFtdcSyncDeltaOptExchMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_init(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InstrumentID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaOptExchMarginField_BrokerID = NULL;
    Py_ssize_t SyncDeltaOptExchMarginField_BrokerID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaOptExchMarginField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaOptExchMarginField_InstrumentID_len = 0;
            
    ///投机空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptExchMarginField_SShortMarginRatioByMoney = 0.0;
        
    ///投机空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptExchMarginField_SShortMarginRatioByVolume = 0.0;
        
    ///保值空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptExchMarginField_HShortMarginRatioByMoney = 0.0;
        
    ///保值空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptExchMarginField_HShortMarginRatioByVolume = 0.0;
        
    ///套利空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptExchMarginField_AShortMarginRatioByMoney = 0.0;
        
    ///套利空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptExchMarginField_AShortMarginRatioByVolume = 0.0;
        
    ///做市商空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptExchMarginField_MShortMarginRatioByMoney = 0.0;
        
    ///做市商空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptExchMarginField_MShortMarginRatioByVolume = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaOptExchMarginField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaOptExchMarginField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ddddddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddci", (char **)kwlist
#endif

        , &SyncDeltaOptExchMarginField_BrokerID, &SyncDeltaOptExchMarginField_BrokerID_len 
        , &SyncDeltaOptExchMarginField_InstrumentID, &SyncDeltaOptExchMarginField_InstrumentID_len 
        , &SyncDeltaOptExchMarginField_SShortMarginRatioByMoney 
        , &SyncDeltaOptExchMarginField_SShortMarginRatioByVolume 
        , &SyncDeltaOptExchMarginField_HShortMarginRatioByMoney 
        , &SyncDeltaOptExchMarginField_HShortMarginRatioByVolume 
        , &SyncDeltaOptExchMarginField_AShortMarginRatioByMoney 
        , &SyncDeltaOptExchMarginField_AShortMarginRatioByVolume 
        , &SyncDeltaOptExchMarginField_MShortMarginRatioByMoney 
        , &SyncDeltaOptExchMarginField_MShortMarginRatioByVolume 
        , &SyncDeltaOptExchMarginField_ActionDirection 
        , &SyncDeltaOptExchMarginField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaOptExchMarginField_BrokerID != NULL ) {
        if(SyncDeltaOptExchMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaOptExchMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaOptExchMarginField_BrokerID, SyncDeltaOptExchMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaOptExchMarginField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaOptExchMarginField_BrokerID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaOptExchMarginField_InstrumentID != NULL ) {
        if(SyncDeltaOptExchMarginField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaOptExchMarginField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaOptExchMarginField_InstrumentID, SyncDeltaOptExchMarginField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaOptExchMarginField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaOptExchMarginField_InstrumentID = NULL;
    }
            
    ///投机空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.SShortMarginRatioByMoney = SyncDeltaOptExchMarginField_SShortMarginRatioByMoney;
        
    ///投机空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.SShortMarginRatioByVolume = SyncDeltaOptExchMarginField_SShortMarginRatioByVolume;
        
    ///保值空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.HShortMarginRatioByMoney = SyncDeltaOptExchMarginField_HShortMarginRatioByMoney;
        
    ///保值空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.HShortMarginRatioByVolume = SyncDeltaOptExchMarginField_HShortMarginRatioByVolume;
        
    ///套利空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.AShortMarginRatioByMoney = SyncDeltaOptExchMarginField_AShortMarginRatioByMoney;
        
    ///套利空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.AShortMarginRatioByVolume = SyncDeltaOptExchMarginField_AShortMarginRatioByVolume;
        
    ///做市商空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.MShortMarginRatioByMoney = SyncDeltaOptExchMarginField_MShortMarginRatioByMoney;
        
    ///做市商空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.MShortMarginRatioByVolume = SyncDeltaOptExchMarginField_MShortMarginRatioByVolume;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaOptExchMarginField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaOptExchMarginField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaOptExchMarginField_dealloc(PyCThostFtdcSyncDeltaOptExchMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_repr(PyCThostFtdcSyncDeltaOptExchMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"SShortMarginRatioByMoney", self->data.SShortMarginRatioByMoney 
        ,"SShortMarginRatioByVolume", self->data.SShortMarginRatioByVolume 
        ,"HShortMarginRatioByMoney", self->data.HShortMarginRatioByMoney 
        ,"HShortMarginRatioByVolume", self->data.HShortMarginRatioByVolume 
        ,"AShortMarginRatioByMoney", self->data.AShortMarginRatioByMoney 
        ,"AShortMarginRatioByVolume", self->data.AShortMarginRatioByVolume 
        ,"MShortMarginRatioByMoney", self->data.MShortMarginRatioByMoney 
        ,"MShortMarginRatioByVolume", self->data.MShortMarginRatioByVolume 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptExchMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_BrokerID(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_BrokerID(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_InstrumentID(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_InstrumentID(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
            
///投机空头保证金调整系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SShortMarginRatioByMoney);
}

///投机空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SShortMarginRatioByVolume);
}

///投机空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HShortMarginRatioByMoney);
}

///保值空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HShortMarginRatioByVolume);
}

///保值空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AShortMarginRatioByMoney);
}

///套利空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AShortMarginRatioByVolume);
}

///套利空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
        
///做市商空头保证金调整系数
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MShortMarginRatioByMoney);
}

///做市商空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MShortMarginRatioByVolume);
}

///做市商空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_ActionDirection(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_ActionDirection(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaOptExchMarginField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaOptExchMarginField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投机空头保证金调整系数 
    {(char *)"SShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByMoney, (char *)"SShortMarginRatioByMoney", NULL},
    ///投机空头保证金调整系数 
    {(char *)"SShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByVolume, (char *)"SShortMarginRatioByVolume", NULL},
    ///保值空头保证金调整系数 
    {(char *)"HShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByMoney, (char *)"HShortMarginRatioByMoney", NULL},
    ///保值空头保证金调整系数 
    {(char *)"HShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByVolume, (char *)"HShortMarginRatioByVolume", NULL},
    ///套利空头保证金调整系数 
    {(char *)"AShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByMoney, (char *)"AShortMarginRatioByMoney", NULL},
    ///套利空头保证金调整系数 
    {(char *)"AShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByVolume, (char *)"AShortMarginRatioByVolume", NULL},
    ///做市商空头保证金调整系数 
    {(char *)"MShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByMoney, (char *)"MShortMarginRatioByMoney", NULL},
    ///做市商空头保证金调整系数 
    {(char *)"MShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByVolume, (char *)"MShortMarginRatioByVolume", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaOptExchMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaOptExchMarginField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaOptExchMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaOptExchMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaOptExchMarginField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaOptExchMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaOptExchMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaOptExchMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaOptExchMarginField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaOptExchMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaOptExchMarginField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaOptExchMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaOptExchMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaOptExchMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptExchMarginField", (PyObject *)&PyCThostFtdcSyncDeltaOptExchMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptExchMarginField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaOptExchMarginFieldType);
		return -1;
    }

    return 0;
}
