
#include "PyCThostFtdcInstrumentStatusField.h"

///合约状态

static PyObject *PyCThostFtdcInstrumentStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentStatusField *self = (PyCThostFtdcInstrumentStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentStatusField_init(PyCThostFtdcInstrumentStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "reserve1", "SettlementGroupID", "reserve2", "InstrumentStatus", "TradingSegmentSN", "EnterTime", "EnterReason", "ExchangeInstID", "InstrumentID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *InstrumentStatusField_ExchangeID = NULL;
    Py_ssize_t InstrumentStatusField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *InstrumentStatusField_reserve1 = NULL;
    Py_ssize_t InstrumentStatusField_reserve1_len = 0;
            
    ///结算组代码
    // TThostFtdcSettlementGroupIDType char[9]
    const char *InstrumentStatusField_SettlementGroupID = NULL;
    Py_ssize_t InstrumentStatusField_SettlementGroupID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *InstrumentStatusField_reserve2 = NULL;
    Py_ssize_t InstrumentStatusField_reserve2_len = 0;
            
    ///合约交易状态
    // TThostFtdcInstrumentStatusType char
    char InstrumentStatusField_InstrumentStatus = 0;
            
    ///交易阶段编号
    // TThostFtdcTradingSegmentSNType int
    int InstrumentStatusField_TradingSegmentSN = 0;
        
    ///进入本状态时间
    // TThostFtdcTimeType char[9]
    const char *InstrumentStatusField_EnterTime = NULL;
    Py_ssize_t InstrumentStatusField_EnterTime_len = 0;
            
    ///进入本状态原因
    // TThostFtdcInstStatusEnterReasonType char
    char InstrumentStatusField_EnterReason = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *InstrumentStatusField_ExchangeInstID = NULL;
    Py_ssize_t InstrumentStatusField_ExchangeInstID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *InstrumentStatusField_InstrumentID = NULL;
    Py_ssize_t InstrumentStatusField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ciy#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cis#cs#s#", (char **)kwlist
#endif

        , &InstrumentStatusField_ExchangeID, &InstrumentStatusField_ExchangeID_len 
        , &InstrumentStatusField_reserve1, &InstrumentStatusField_reserve1_len 
        , &InstrumentStatusField_SettlementGroupID, &InstrumentStatusField_SettlementGroupID_len 
        , &InstrumentStatusField_reserve2, &InstrumentStatusField_reserve2_len 
        , &InstrumentStatusField_InstrumentStatus 
        , &InstrumentStatusField_TradingSegmentSN 
        , &InstrumentStatusField_EnterTime, &InstrumentStatusField_EnterTime_len 
        , &InstrumentStatusField_EnterReason 
        , &InstrumentStatusField_ExchangeInstID, &InstrumentStatusField_ExchangeInstID_len 
        , &InstrumentStatusField_InstrumentID, &InstrumentStatusField_InstrumentID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( InstrumentStatusField_ExchangeID != NULL ) {
        if(InstrumentStatusField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", InstrumentStatusField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, InstrumentStatusField_ExchangeID, InstrumentStatusField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, InstrumentStatusField_ExchangeID, sizeof(self->data.ExchangeID) );
        InstrumentStatusField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( InstrumentStatusField_reserve1 != NULL ) {
        if(InstrumentStatusField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", InstrumentStatusField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, InstrumentStatusField_reserve1, InstrumentStatusField_reserve1_len);        
        strncpy(self->data.reserve1, InstrumentStatusField_reserve1, sizeof(self->data.reserve1) );
        InstrumentStatusField_reserve1 = NULL;
    }
            
    ///结算组代码
    // TThostFtdcSettlementGroupIDType char[9]
    if( InstrumentStatusField_SettlementGroupID != NULL ) {
        if(InstrumentStatusField_SettlementGroupID_len > (Py_ssize_t)sizeof(self->data.SettlementGroupID)) {
            PyErr_Format(PyExc_ValueError, "SettlementGroupID too long: length=%zd (max allowed is %zd)", InstrumentStatusField_SettlementGroupID_len, (Py_ssize_t)sizeof(self->data.SettlementGroupID));
            return -1;
        }
        // memset(self->data.SettlementGroupID, 0, sizeof(self->data.SettlementGroupID));
        // memcpy(self->data.SettlementGroupID, InstrumentStatusField_SettlementGroupID, InstrumentStatusField_SettlementGroupID_len);        
        strncpy(self->data.SettlementGroupID, InstrumentStatusField_SettlementGroupID, sizeof(self->data.SettlementGroupID) );
        InstrumentStatusField_SettlementGroupID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( InstrumentStatusField_reserve2 != NULL ) {
        if(InstrumentStatusField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", InstrumentStatusField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, InstrumentStatusField_reserve2, InstrumentStatusField_reserve2_len);        
        strncpy(self->data.reserve2, InstrumentStatusField_reserve2, sizeof(self->data.reserve2) );
        InstrumentStatusField_reserve2 = NULL;
    }
            
    ///合约交易状态
    // TThostFtdcInstrumentStatusType char
    self->data.InstrumentStatus = InstrumentStatusField_InstrumentStatus;
            
    ///交易阶段编号
    // TThostFtdcTradingSegmentSNType int
    self->data.TradingSegmentSN = InstrumentStatusField_TradingSegmentSN;
        
    ///进入本状态时间
    // TThostFtdcTimeType char[9]
    if( InstrumentStatusField_EnterTime != NULL ) {
        if(InstrumentStatusField_EnterTime_len > (Py_ssize_t)sizeof(self->data.EnterTime)) {
            PyErr_Format(PyExc_ValueError, "EnterTime too long: length=%zd (max allowed is %zd)", InstrumentStatusField_EnterTime_len, (Py_ssize_t)sizeof(self->data.EnterTime));
            return -1;
        }
        // memset(self->data.EnterTime, 0, sizeof(self->data.EnterTime));
        // memcpy(self->data.EnterTime, InstrumentStatusField_EnterTime, InstrumentStatusField_EnterTime_len);        
        strncpy(self->data.EnterTime, InstrumentStatusField_EnterTime, sizeof(self->data.EnterTime) );
        InstrumentStatusField_EnterTime = NULL;
    }
            
    ///进入本状态原因
    // TThostFtdcInstStatusEnterReasonType char
    self->data.EnterReason = InstrumentStatusField_EnterReason;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( InstrumentStatusField_ExchangeInstID != NULL ) {
        if(InstrumentStatusField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", InstrumentStatusField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, InstrumentStatusField_ExchangeInstID, InstrumentStatusField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, InstrumentStatusField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        InstrumentStatusField_ExchangeInstID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( InstrumentStatusField_InstrumentID != NULL ) {
        if(InstrumentStatusField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", InstrumentStatusField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, InstrumentStatusField_InstrumentID, InstrumentStatusField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, InstrumentStatusField_InstrumentID, sizeof(self->data.InstrumentID) );
        InstrumentStatusField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcInstrumentStatusField_dealloc(PyCThostFtdcInstrumentStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentStatusField_repr(PyCThostFtdcInstrumentStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i,s:s,s:c,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"SettlementGroupID", self->data.SettlementGroupID//, (Py_ssize_t)sizeof(self->data.SettlementGroupID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"InstrumentStatus", self->data.InstrumentStatus 
        ,"TradingSegmentSN", self->data.TradingSegmentSN 
        ,"EnterTime", self->data.EnterTime//, (Py_ssize_t)sizeof(self->data.EnterTime) 
        ,"EnterReason", self->data.EnterReason 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcInstrumentStatusField_get_ExchangeID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcInstrumentStatusField_set_ExchangeID(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcInstrumentStatusField_get_reserve1(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcInstrumentStatusField_set_reserve1(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
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
            
///结算组代码
// TThostFtdcSettlementGroupIDType char[9]
static PyObject *PyCThostFtdcInstrumentStatusField_get_SettlementGroupID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SettlementGroupID, (Py_ssize_t)sizeof(self->data.SettlementGroupID));
    return PyBytes_FromString(self->data.SettlementGroupID);
}

///结算组代码
// TThostFtdcSettlementGroupIDType char[9]
static int PyCThostFtdcInstrumentStatusField_set_SettlementGroupID(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SettlementGroupID)) {
        PyErr_SetString(PyExc_ValueError, "SettlementGroupID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.SettlementGroupID, 0, sizeof(self->data.SettlementGroupID));
    // memcpy(self->data.SettlementGroupID, buf, len);
    strncpy(self->data.SettlementGroupID, buf, sizeof(self->data.SettlementGroupID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcInstrumentStatusField_get_reserve2(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcInstrumentStatusField_set_reserve2(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
    // memcpy(self->data.reserve2, buf, len);
    strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
    return 0;
}
            
///合约交易状态
// TThostFtdcInstrumentStatusType char
static PyObject *PyCThostFtdcInstrumentStatusField_get_InstrumentStatus(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InstrumentStatus), 1);
}

///合约交易状态
// TThostFtdcInstrumentStatusType char
static int PyCThostFtdcInstrumentStatusField_set_InstrumentStatus(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentStatus)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentStatus must be equal 1 bytes");
        return -1;
    }
    self->data.InstrumentStatus = *buf;
    return 0;
}
            
///交易阶段编号
// TThostFtdcTradingSegmentSNType int
static PyObject *PyCThostFtdcInstrumentStatusField_get_TradingSegmentSN(PyCThostFtdcInstrumentStatusField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TradingSegmentSN);
#else
    return PyInt_FromLong(self->data.TradingSegmentSN);
#endif
}

///交易阶段编号
// TThostFtdcTradingSegmentSNType int
static int PyCThostFtdcInstrumentStatusField_set_TradingSegmentSN(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingSegmentSN Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingSegmentSN Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TradingSegmentSN value out of range for C int");
        return -1;
    }
    self->data.TradingSegmentSN = (int)buf;
    return 0;
}
        
///进入本状态时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcInstrumentStatusField_get_EnterTime(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.EnterTime, (Py_ssize_t)sizeof(self->data.EnterTime));
    return PyBytes_FromString(self->data.EnterTime);
}

///进入本状态时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcInstrumentStatusField_set_EnterTime(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EnterTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.EnterTime)) {
        PyErr_SetString(PyExc_ValueError, "EnterTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.EnterTime, 0, sizeof(self->data.EnterTime));
    // memcpy(self->data.EnterTime, buf, len);
    strncpy(self->data.EnterTime, buf, sizeof(self->data.EnterTime));
    return 0;
}
            
///进入本状态原因
// TThostFtdcInstStatusEnterReasonType char
static PyObject *PyCThostFtdcInstrumentStatusField_get_EnterReason(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.EnterReason), 1);
}

///进入本状态原因
// TThostFtdcInstStatusEnterReasonType char
static int PyCThostFtdcInstrumentStatusField_set_EnterReason(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "EnterReason Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.EnterReason)) {
        PyErr_SetString(PyExc_ValueError, "EnterReason must be equal 1 bytes");
        return -1;
    }
    self->data.EnterReason = *buf;
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcInstrumentStatusField_get_ExchangeInstID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcInstrumentStatusField_set_ExchangeInstID(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcInstrumentStatusField_get_InstrumentID(PyCThostFtdcInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcInstrumentStatusField_set_InstrumentID(PyCThostFtdcInstrumentStatusField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcInstrumentStatusField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentStatusField_get_ExchangeID, (setter)PyCThostFtdcInstrumentStatusField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcInstrumentStatusField_get_reserve1, (setter)PyCThostFtdcInstrumentStatusField_set_reserve1, (char *)"reserve1", NULL},
    ///结算组代码 
    {(char *)"SettlementGroupID", (getter)PyCThostFtdcInstrumentStatusField_get_SettlementGroupID, (setter)PyCThostFtdcInstrumentStatusField_set_SettlementGroupID, (char *)"SettlementGroupID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcInstrumentStatusField_get_reserve2, (setter)PyCThostFtdcInstrumentStatusField_set_reserve2, (char *)"reserve2", NULL},
    ///合约交易状态 
    {(char *)"InstrumentStatus", (getter)PyCThostFtdcInstrumentStatusField_get_InstrumentStatus, (setter)PyCThostFtdcInstrumentStatusField_set_InstrumentStatus, (char *)"InstrumentStatus", NULL},
    ///交易阶段编号 
    {(char *)"TradingSegmentSN", (getter)PyCThostFtdcInstrumentStatusField_get_TradingSegmentSN, (setter)PyCThostFtdcInstrumentStatusField_set_TradingSegmentSN, (char *)"TradingSegmentSN", NULL},
    ///进入本状态时间 
    {(char *)"EnterTime", (getter)PyCThostFtdcInstrumentStatusField_get_EnterTime, (setter)PyCThostFtdcInstrumentStatusField_set_EnterTime, (char *)"EnterTime", NULL},
    ///进入本状态原因 
    {(char *)"EnterReason", (getter)PyCThostFtdcInstrumentStatusField_get_EnterReason, (setter)PyCThostFtdcInstrumentStatusField_set_EnterReason, (char *)"EnterReason", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcInstrumentStatusField_get_ExchangeInstID, (setter)PyCThostFtdcInstrumentStatusField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentStatusField_get_InstrumentID, (setter)PyCThostFtdcInstrumentStatusField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentStatusField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentStatusField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentStatusField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentStatusField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentStatusField", (PyObject *)&PyCThostFtdcInstrumentStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentStatusField to module");
        Py_DECREF(&PyCThostFtdcInstrumentStatusFieldType);
		return -1;
    }

    return 0;
}
