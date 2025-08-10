
#include "PyCThostFtdcSyncingInstrumentCommissionRateField.h"

///正在同步中的合约手续费率

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInstrumentCommissionRateField *self = (PyCThostFtdcSyncingInstrumentCommissionRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInstrumentCommissionRateField_init(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *SyncingInstrumentCommissionRateField_reserve1 = NULL;
    Py_ssize_t SyncingInstrumentCommissionRateField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char SyncingInstrumentCommissionRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncingInstrumentCommissionRateField_BrokerID = NULL;
    Py_ssize_t SyncingInstrumentCommissionRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingInstrumentCommissionRateField_InvestorID = NULL;
    Py_ssize_t SyncingInstrumentCommissionRateField_InvestorID_len = 0;
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    double SyncingInstrumentCommissionRateField_OpenRatioByMoney = 0.0;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    double SyncingInstrumentCommissionRateField_OpenRatioByVolume = 0.0;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    double SyncingInstrumentCommissionRateField_CloseRatioByMoney = 0.0;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    double SyncingInstrumentCommissionRateField_CloseRatioByVolume = 0.0;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    double SyncingInstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;
        
    ///平今手续费
    // TThostFtdcRatioType double
    double SyncingInstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncingInstrumentCommissionRateField_InstrumentID = NULL;
    Py_ssize_t SyncingInstrumentCommissionRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddds#", (char **)kwlist
#endif

        , &SyncingInstrumentCommissionRateField_reserve1, &SyncingInstrumentCommissionRateField_reserve1_len 
        , &SyncingInstrumentCommissionRateField_InvestorRange 
        , &SyncingInstrumentCommissionRateField_BrokerID, &SyncingInstrumentCommissionRateField_BrokerID_len 
        , &SyncingInstrumentCommissionRateField_InvestorID, &SyncingInstrumentCommissionRateField_InvestorID_len 
        , &SyncingInstrumentCommissionRateField_OpenRatioByMoney 
        , &SyncingInstrumentCommissionRateField_OpenRatioByVolume 
        , &SyncingInstrumentCommissionRateField_CloseRatioByMoney 
        , &SyncingInstrumentCommissionRateField_CloseRatioByVolume 
        , &SyncingInstrumentCommissionRateField_CloseTodayRatioByMoney 
        , &SyncingInstrumentCommissionRateField_CloseTodayRatioByVolume 
        , &SyncingInstrumentCommissionRateField_InstrumentID, &SyncingInstrumentCommissionRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( SyncingInstrumentCommissionRateField_reserve1 != NULL ) {
        if(SyncingInstrumentCommissionRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", SyncingInstrumentCommissionRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, SyncingInstrumentCommissionRateField_reserve1, SyncingInstrumentCommissionRateField_reserve1_len);        
        strncpy(self->data.reserve1, SyncingInstrumentCommissionRateField_reserve1, sizeof(self->data.reserve1) );
        SyncingInstrumentCommissionRateField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = SyncingInstrumentCommissionRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncingInstrumentCommissionRateField_BrokerID != NULL ) {
        if(SyncingInstrumentCommissionRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncingInstrumentCommissionRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncingInstrumentCommissionRateField_BrokerID, SyncingInstrumentCommissionRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncingInstrumentCommissionRateField_BrokerID, sizeof(self->data.BrokerID) );
        SyncingInstrumentCommissionRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingInstrumentCommissionRateField_InvestorID != NULL ) {
        if(SyncingInstrumentCommissionRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncingInstrumentCommissionRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncingInstrumentCommissionRateField_InvestorID, SyncingInstrumentCommissionRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncingInstrumentCommissionRateField_InvestorID, sizeof(self->data.InvestorID) );
        SyncingInstrumentCommissionRateField_InvestorID = NULL;
    }
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    self->data.OpenRatioByMoney = SyncingInstrumentCommissionRateField_OpenRatioByMoney;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    self->data.OpenRatioByVolume = SyncingInstrumentCommissionRateField_OpenRatioByVolume;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    self->data.CloseRatioByMoney = SyncingInstrumentCommissionRateField_CloseRatioByMoney;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    self->data.CloseRatioByVolume = SyncingInstrumentCommissionRateField_CloseRatioByVolume;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByMoney = SyncingInstrumentCommissionRateField_CloseTodayRatioByMoney;
        
    ///平今手续费
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByVolume = SyncingInstrumentCommissionRateField_CloseTodayRatioByVolume;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncingInstrumentCommissionRateField_InstrumentID != NULL ) {
        if(SyncingInstrumentCommissionRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncingInstrumentCommissionRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncingInstrumentCommissionRateField_InstrumentID, SyncingInstrumentCommissionRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncingInstrumentCommissionRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncingInstrumentCommissionRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSyncingInstrumentCommissionRateField_dealloc(PyCThostFtdcSyncingInstrumentCommissionRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_repr(PyCThostFtdcSyncingInstrumentCommissionRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OpenRatioByMoney", self->data.OpenRatioByMoney 
        ,"OpenRatioByVolume", self->data.OpenRatioByVolume 
        ,"CloseRatioByMoney", self->data.CloseRatioByMoney 
        ,"CloseRatioByVolume", self->data.CloseRatioByVolume 
        ,"CloseTodayRatioByMoney", self->data.CloseTodayRatioByMoney 
        ,"CloseTodayRatioByVolume", self->data.CloseTodayRatioByVolume 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentCommissionRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_reserve1(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_reserve1(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorRange(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorRange(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_BrokerID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_BrokerID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
            
///开仓手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

///开仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByMoney = buf;
    return 0;
}
        
///开仓手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

///开仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByVolume = buf;
    return 0;
}
        
///平仓手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

///平仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByMoney = buf;
    return 0;
}
        
///平仓手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

///平仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByVolume = buf;
    return 0;
}
        
///平今手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

///平今手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByMoney = buf;
    return 0;
}
        
///平今手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

///平今手续费
// TThostFtdcRatioType double
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByVolume = buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_InstrumentID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_InstrumentID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSyncingInstrumentCommissionRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_reserve1, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorRange, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_BrokerID, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorID, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///开仓手续费率 
    {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
    ///开仓手续费 
    {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
    ///平仓手续费率 
    {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
    ///平仓手续费 
    {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
    ///平今手续费率 
    {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
    ///平今手续费 
    {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_InstrumentID, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInstrumentCommissionRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInstrumentCommissionRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInstrumentCommissionRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInstrumentCommissionRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInstrumentCommissionRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInstrumentCommissionRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInstrumentCommissionRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInstrumentCommissionRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInstrumentCommissionRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInstrumentCommissionRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInstrumentCommissionRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInstrumentCommissionRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInstrumentCommissionRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentCommissionRateField", (PyObject *)&PyCThostFtdcSyncingInstrumentCommissionRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentCommissionRateField to module");
        Py_DECREF(&PyCThostFtdcSyncingInstrumentCommissionRateFieldType);
		return -1;
    }

    return 0;
}
