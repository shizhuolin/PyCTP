
#include "PyCThostFtdcSyncDeltaOptInvstCommRateField.h"

///风险结算追平期权手续费率

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaOptInvstCommRateField *self = (PyCThostFtdcSyncDeltaOptInvstCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_init(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaOptInvstCommRateField_InstrumentID = NULL;
    Py_ssize_t SyncDeltaOptInvstCommRateField_InstrumentID_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char SyncDeltaOptInvstCommRateField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncDeltaOptInvstCommRateField_BrokerID = NULL;
    Py_ssize_t SyncDeltaOptInvstCommRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncDeltaOptInvstCommRateField_InvestorID = NULL;
    Py_ssize_t SyncDeltaOptInvstCommRateField_InvestorID_len = 0;
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_OpenRatioByMoney = 0.0;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_OpenRatioByVolume = 0.0;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_CloseRatioByMoney = 0.0;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_CloseRatioByVolume = 0.0;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney = 0.0;
        
    ///平今手续费
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume = 0.0;
        
    ///执行手续费率
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_StrikeRatioByMoney = 0.0;
        
    ///执行手续费
    // TThostFtdcRatioType double
    double SyncDeltaOptInvstCommRateField_StrikeRatioByVolume = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaOptInvstCommRateField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ddddddddci", (char **)kwlist
#endif

        , &SyncDeltaOptInvstCommRateField_InstrumentID, &SyncDeltaOptInvstCommRateField_InstrumentID_len 
        , &SyncDeltaOptInvstCommRateField_InvestorRange 
        , &SyncDeltaOptInvstCommRateField_BrokerID, &SyncDeltaOptInvstCommRateField_BrokerID_len 
        , &SyncDeltaOptInvstCommRateField_InvestorID, &SyncDeltaOptInvstCommRateField_InvestorID_len 
        , &SyncDeltaOptInvstCommRateField_OpenRatioByMoney 
        , &SyncDeltaOptInvstCommRateField_OpenRatioByVolume 
        , &SyncDeltaOptInvstCommRateField_CloseRatioByMoney 
        , &SyncDeltaOptInvstCommRateField_CloseRatioByVolume 
        , &SyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney 
        , &SyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume 
        , &SyncDeltaOptInvstCommRateField_StrikeRatioByMoney 
        , &SyncDeltaOptInvstCommRateField_StrikeRatioByVolume 
        , &SyncDeltaOptInvstCommRateField_ActionDirection 
        , &SyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaOptInvstCommRateField_InstrumentID != NULL ) {
        if(SyncDeltaOptInvstCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaOptInvstCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, SyncDeltaOptInvstCommRateField_InstrumentID, SyncDeltaOptInvstCommRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, SyncDeltaOptInvstCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        SyncDeltaOptInvstCommRateField_InstrumentID = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = SyncDeltaOptInvstCommRateField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncDeltaOptInvstCommRateField_BrokerID != NULL ) {
        if(SyncDeltaOptInvstCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncDeltaOptInvstCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncDeltaOptInvstCommRateField_BrokerID, SyncDeltaOptInvstCommRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncDeltaOptInvstCommRateField_BrokerID, sizeof(self->data.BrokerID) );
        SyncDeltaOptInvstCommRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncDeltaOptInvstCommRateField_InvestorID != NULL ) {
        if(SyncDeltaOptInvstCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncDeltaOptInvstCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncDeltaOptInvstCommRateField_InvestorID, SyncDeltaOptInvstCommRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncDeltaOptInvstCommRateField_InvestorID, sizeof(self->data.InvestorID) );
        SyncDeltaOptInvstCommRateField_InvestorID = NULL;
    }
            
    ///开仓手续费率
    // TThostFtdcRatioType double
    self->data.OpenRatioByMoney = SyncDeltaOptInvstCommRateField_OpenRatioByMoney;
        
    ///开仓手续费
    // TThostFtdcRatioType double
    self->data.OpenRatioByVolume = SyncDeltaOptInvstCommRateField_OpenRatioByVolume;
        
    ///平仓手续费率
    // TThostFtdcRatioType double
    self->data.CloseRatioByMoney = SyncDeltaOptInvstCommRateField_CloseRatioByMoney;
        
    ///平仓手续费
    // TThostFtdcRatioType double
    self->data.CloseRatioByVolume = SyncDeltaOptInvstCommRateField_CloseRatioByVolume;
        
    ///平今手续费率
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByMoney = SyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney;
        
    ///平今手续费
    // TThostFtdcRatioType double
    self->data.CloseTodayRatioByVolume = SyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume;
        
    ///执行手续费率
    // TThostFtdcRatioType double
    self->data.StrikeRatioByMoney = SyncDeltaOptInvstCommRateField_StrikeRatioByMoney;
        
    ///执行手续费
    // TThostFtdcRatioType double
    self->data.StrikeRatioByVolume = SyncDeltaOptInvstCommRateField_StrikeRatioByVolume;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaOptInvstCommRateField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaOptInvstCommRateField_dealloc(PyCThostFtdcSyncDeltaOptInvstCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_repr(PyCThostFtdcSyncDeltaOptInvstCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"OpenRatioByMoney", self->data.OpenRatioByMoney 
        ,"OpenRatioByVolume", self->data.OpenRatioByVolume 
        ,"CloseRatioByMoney", self->data.CloseRatioByMoney 
        ,"CloseRatioByVolume", self->data.CloseRatioByVolume 
        ,"CloseTodayRatioByMoney", self->data.CloseTodayRatioByMoney 
        ,"CloseTodayRatioByVolume", self->data.CloseTodayRatioByVolume 
        ,"StrikeRatioByMoney", self->data.StrikeRatioByMoney 
        ,"StrikeRatioByVolume", self->data.StrikeRatioByVolume 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InstrumentID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InstrumentID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorRange(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorRange(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_BrokerID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_BrokerID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

///开仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

///开仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

///平仓手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

///平仓手续费
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

///平今手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

///平今手续费
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
        
///执行手续费率
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeRatioByMoney);
}

///执行手续费率
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByMoney = buf;
    return 0;
}
        
///执行手续费
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyFloat_FromDouble(self->data.StrikeRatioByVolume);
}

///执行手续费
// TThostFtdcRatioType double
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByVolume = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_ActionDirection(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_ActionDirection(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaOptInvstCommRateField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///开仓手续费率 
    {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
    ///开仓手续费 
    {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
    ///平仓手续费率 
    {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
    ///平仓手续费 
    {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
    ///平今手续费率 
    {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
    ///平今手续费 
    {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
    ///执行手续费率 
    {(char *)"StrikeRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByMoney, (char *)"StrikeRatioByMoney", NULL},
    ///执行手续费 
    {(char *)"StrikeRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByVolume, (char *)"StrikeRatioByVolume", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaOptInvstCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaOptInvstCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaOptInvstCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaOptInvstCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaOptInvstCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaOptInvstCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaOptInvstCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaOptInvstCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaOptInvstCommRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaOptInvstCommRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaOptInvstCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptInvstCommRateField", (PyObject *)&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptInvstCommRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType);
		return -1;
    }

    return 0;
}
