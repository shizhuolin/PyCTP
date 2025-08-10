
#include "PyCThostFtdcSyncDeltaOptInvstMarginField.h"

///风险结算追平中金现货期权投资者保证金率

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaOptInvstMarginField *self = (PyCThostFtdcSyncDeltaOptInvstMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_init(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "IsRelative", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaOptInvstMarginField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaOptInvstMarginField_InstrumentID_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char SyncDeltaOptInvstMarginField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaOptInvstMarginField_BrokerID = NULL;
    Py_ssize_t SyncDeltaOptInvstMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaOptInvstMarginField_InvestorID = NULL;
    Py_ssize_t SyncDeltaOptInvstMarginField_InvestorID_len = 0;
            
    ///投机空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstMarginField_SShortMarginRatioByMoney = 0.0;
        
    ///投机空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptInvstMarginField_SShortMarginRatioByVolume = 0.0;
        
    ///保值空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstMarginField_HShortMarginRatioByMoney = 0.0;
        
    ///保值空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptInvstMarginField_HShortMarginRatioByVolume = 0.0;
        
    ///套利空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstMarginField_AShortMarginRatioByMoney = 0.0;
        
    ///套利空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptInvstMarginField_AShortMarginRatioByVolume = 0.0;
        
    ///是否跟随交易所收取
    // TThostFtdcBoolType int
    int SyncDeltaOptInvstMarginField_IsRelative = 0;
        
    ///做市商空头保证金调整系数
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstMarginField_MShortMarginRatioByMoney = 0.0;
        
    ///做市商空头保证金调整系数
    // TThostFtdcMoneyType double
    double SyncDeltaOptInvstMarginField_MShortMarginRatioByVolume = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaOptInvstMarginField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaOptInvstMarginField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddiddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ddddddiddci", (char **)kwlist
#endif

        , &SyncDeltaOptInvstMarginField_InstrumentID, &SyncDeltaOptInvstMarginField_InstrumentID_len 
        , &SyncDeltaOptInvstMarginField_InvestorRange 
        , &SyncDeltaOptInvstMarginField_BrokerID, &SyncDeltaOptInvstMarginField_BrokerID_len 
        , &SyncDeltaOptInvstMarginField_InvestorID, &SyncDeltaOptInvstMarginField_InvestorID_len 
        , &SyncDeltaOptInvstMarginField_SShortMarginRatioByMoney 
        , &SyncDeltaOptInvstMarginField_SShortMarginRatioByVolume 
        , &SyncDeltaOptInvstMarginField_HShortMarginRatioByMoney 
        , &SyncDeltaOptInvstMarginField_HShortMarginRatioByVolume 
        , &SyncDeltaOptInvstMarginField_AShortMarginRatioByMoney 
        , &SyncDeltaOptInvstMarginField_AShortMarginRatioByVolume 
        , &SyncDeltaOptInvstMarginField_IsRelative 
        , &SyncDeltaOptInvstMarginField_MShortMarginRatioByMoney 
        , &SyncDeltaOptInvstMarginField_MShortMarginRatioByVolume 
        , &SyncDeltaOptInvstMarginField_ActionDirection 
        , &SyncDeltaOptInvstMarginField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaOptInvstMarginField_InstrumentID != NULL ) {
        if(SyncDeltaOptInvstMarginField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaOptInvstMarginField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaOptInvstMarginField_InstrumentID, SyncDeltaOptInvstMarginField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaOptInvstMarginField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaOptInvstMarginField_InstrumentID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = SyncDeltaOptInvstMarginField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaOptInvstMarginField_BrokerID != NULL ) {
        if(SyncDeltaOptInvstMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaOptInvstMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaOptInvstMarginField_BrokerID, SyncDeltaOptInvstMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaOptInvstMarginField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaOptInvstMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaOptInvstMarginField_InvestorID != NULL ) {
        if(SyncDeltaOptInvstMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaOptInvstMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaOptInvstMarginField_InvestorID, SyncDeltaOptInvstMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaOptInvstMarginField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaOptInvstMarginField_InvestorID = NULL;
    }
            
    ///投机空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.SShortMarginRatioByMoney = SyncDeltaOptInvstMarginField_SShortMarginRatioByMoney;
        
    ///投机空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.SShortMarginRatioByVolume = SyncDeltaOptInvstMarginField_SShortMarginRatioByVolume;
        
    ///保值空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.HShortMarginRatioByMoney = SyncDeltaOptInvstMarginField_HShortMarginRatioByMoney;
        
    ///保值空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.HShortMarginRatioByVolume = SyncDeltaOptInvstMarginField_HShortMarginRatioByVolume;
        
    ///套利空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.AShortMarginRatioByMoney = SyncDeltaOptInvstMarginField_AShortMarginRatioByMoney;
        
    ///套利空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.AShortMarginRatioByVolume = SyncDeltaOptInvstMarginField_AShortMarginRatioByVolume;
        
    ///是否跟随交易所收取
    // TThostFtdcBoolType int
    self->data.IsRelative = SyncDeltaOptInvstMarginField_IsRelative;
        
    ///做市商空头保证金调整系数
    // TThostFtdcRatioType double
    self->data.MShortMarginRatioByMoney = SyncDeltaOptInvstMarginField_MShortMarginRatioByMoney;
        
    ///做市商空头保证金调整系数
    // TThostFtdcMoneyType double
    self->data.MShortMarginRatioByVolume = SyncDeltaOptInvstMarginField_MShortMarginRatioByVolume;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaOptInvstMarginField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaOptInvstMarginField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaOptInvstMarginField_dealloc(PyCThostFtdcSyncDeltaOptInvstMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_repr(PyCThostFtdcSyncDeltaOptInvstMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:c,s:i}"
#endif

        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
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
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_InstrumentID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_InstrumentID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorRange(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorRange(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_BrokerID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_BrokerID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SShortMarginRatioByMoney);
}

///投机空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.SShortMarginRatioByVolume);
}

///投机空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HShortMarginRatioByMoney);
}

///保值空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.HShortMarginRatioByVolume);
}

///保值空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AShortMarginRatioByMoney);
}

///套利空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.AShortMarginRatioByVolume);
}

///套利空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_IsRelative(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsRelative);
#else
    return PyInt_FromLong(self->data.IsRelative);
#endif
}

///是否跟随交易所收取
// TThostFtdcBoolType int
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_IsRelative(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MShortMarginRatioByMoney);
}

///做市商空头保证金调整系数
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MShortMarginRatioByVolume);
}

///做市商空头保证金调整系数
// TThostFtdcMoneyType double
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_ActionDirection(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_ActionDirection(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaOptInvstMarginField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投机空头保证金调整系数 
    {(char *)"SShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByMoney, (char *)"SShortMarginRatioByMoney", NULL},
    ///投机空头保证金调整系数 
    {(char *)"SShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByVolume, (char *)"SShortMarginRatioByVolume", NULL},
    ///保值空头保证金调整系数 
    {(char *)"HShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByMoney, (char *)"HShortMarginRatioByMoney", NULL},
    ///保值空头保证金调整系数 
    {(char *)"HShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByVolume, (char *)"HShortMarginRatioByVolume", NULL},
    ///套利空头保证金调整系数 
    {(char *)"AShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByMoney, (char *)"AShortMarginRatioByMoney", NULL},
    ///套利空头保证金调整系数 
    {(char *)"AShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByVolume, (char *)"AShortMarginRatioByVolume", NULL},
    ///是否跟随交易所收取 
    {(char *)"IsRelative", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_IsRelative, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_IsRelative, (char *)"IsRelative", NULL},
    ///做市商空头保证金调整系数 
    {(char *)"MShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByMoney, (char *)"MShortMarginRatioByMoney", NULL},
    ///做市商空头保证金调整系数 
    {(char *)"MShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByVolume, (char *)"MShortMarginRatioByVolume", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaOptInvstMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaOptInvstMarginField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaOptInvstMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaOptInvstMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaOptInvstMarginField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaOptInvstMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaOptInvstMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaOptInvstMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaOptInvstMarginField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaOptInvstMarginField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaOptInvstMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaOptInvstMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaOptInvstMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptInvstMarginField", (PyObject *)&PyCThostFtdcSyncDeltaOptInvstMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptInvstMarginField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaOptInvstMarginFieldType);
		return -1;
    }

    return 0;
}
