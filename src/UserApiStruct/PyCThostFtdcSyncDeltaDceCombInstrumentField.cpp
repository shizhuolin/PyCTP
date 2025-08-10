
#include "PyCThostFtdcSyncDeltaDceCombInstrumentField.h"

///风险结算追平组合优先级

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaDceCombInstrumentField *self = (PyCThostFtdcSyncDeltaDceCombInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_init(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CombInstrumentID", "ExchangeID", "ExchangeInstID", "TradeGroupID", "CombHedgeFlag", "CombinationType", "Direction", "ProductID", "Xparameter", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaDceCombInstrumentField_CombInstrumentID = NULL;
    Py_ssize_t SyncDeltaDceCombInstrumentField_CombInstrumentID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaDceCombInstrumentField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaDceCombInstrumentField_ExchangeID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *SyncDeltaDceCombInstrumentField_ExchangeInstID = NULL;
    Py_ssize_t SyncDeltaDceCombInstrumentField_ExchangeInstID_len = 0;
            
    ///成交组号
    // TThostFtdcTradeGroupIDType int
    int SyncDeltaDceCombInstrumentField_TradeGroupID = 0;
        
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char SyncDeltaDceCombInstrumentField_CombHedgeFlag = 0;
            
    ///组合类型
    // TThostFtdcDceCombinationTypeType char
    char SyncDeltaDceCombInstrumentField_CombinationType = 0;
            
    ///买卖
    // TThostFtdcDirectionType char
    char SyncDeltaDceCombInstrumentField_Direction = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaDceCombInstrumentField_ProductID = NULL;
    Py_ssize_t SyncDeltaDceCombInstrumentField_ProductID_len = 0;
            
    ///期权组合保证金比例
    // TThostFtdcDiscountRatioType double
    double SyncDeltaDceCombInstrumentField_Xparameter = 0.0;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaDceCombInstrumentField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#icccy#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#icccs#dci", (char **)kwlist
#endif

        , &SyncDeltaDceCombInstrumentField_CombInstrumentID, &SyncDeltaDceCombInstrumentField_CombInstrumentID_len 
        , &SyncDeltaDceCombInstrumentField_ExchangeID, &SyncDeltaDceCombInstrumentField_ExchangeID_len 
        , &SyncDeltaDceCombInstrumentField_ExchangeInstID, &SyncDeltaDceCombInstrumentField_ExchangeInstID_len 
        , &SyncDeltaDceCombInstrumentField_TradeGroupID 
        , &SyncDeltaDceCombInstrumentField_CombHedgeFlag 
        , &SyncDeltaDceCombInstrumentField_CombinationType 
        , &SyncDeltaDceCombInstrumentField_Direction 
        , &SyncDeltaDceCombInstrumentField_ProductID, &SyncDeltaDceCombInstrumentField_ProductID_len 
        , &SyncDeltaDceCombInstrumentField_Xparameter 
        , &SyncDeltaDceCombInstrumentField_ActionDirection 
        , &SyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaDceCombInstrumentField_CombInstrumentID != NULL ) {
        if(SyncDeltaDceCombInstrumentField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", SyncDeltaDceCombInstrumentField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, SyncDeltaDceCombInstrumentField_CombInstrumentID, SyncDeltaDceCombInstrumentField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, SyncDeltaDceCombInstrumentField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        SyncDeltaDceCombInstrumentField_CombInstrumentID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaDceCombInstrumentField_ExchangeID != NULL ) {
        if(SyncDeltaDceCombInstrumentField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaDceCombInstrumentField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaDceCombInstrumentField_ExchangeID, SyncDeltaDceCombInstrumentField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaDceCombInstrumentField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaDceCombInstrumentField_ExchangeID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( SyncDeltaDceCombInstrumentField_ExchangeInstID != NULL ) {
        if(SyncDeltaDceCombInstrumentField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", SyncDeltaDceCombInstrumentField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, SyncDeltaDceCombInstrumentField_ExchangeInstID, SyncDeltaDceCombInstrumentField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, SyncDeltaDceCombInstrumentField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        SyncDeltaDceCombInstrumentField_ExchangeInstID = NULL;
    }
            
    ///成交组号
    // TThostFtdcTradeGroupIDType int
    self->data.TradeGroupID = SyncDeltaDceCombInstrumentField_TradeGroupID;
        
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.CombHedgeFlag = SyncDeltaDceCombInstrumentField_CombHedgeFlag;
            
    ///组合类型
    // TThostFtdcDceCombinationTypeType char
    self->data.CombinationType = SyncDeltaDceCombInstrumentField_CombinationType;
            
    ///买卖
    // TThostFtdcDirectionType char
    self->data.Direction = SyncDeltaDceCombInstrumentField_Direction;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaDceCombInstrumentField_ProductID != NULL ) {
        if(SyncDeltaDceCombInstrumentField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", SyncDeltaDceCombInstrumentField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, SyncDeltaDceCombInstrumentField_ProductID, SyncDeltaDceCombInstrumentField_ProductID_len);        
        strncpy(self->data.ProductID, SyncDeltaDceCombInstrumentField_ProductID, sizeof(self->data.ProductID) );
        SyncDeltaDceCombInstrumentField_ProductID = NULL;
    }
            
    ///期权组合保证金比例
    // TThostFtdcDiscountRatioType double
    self->data.Xparameter = SyncDeltaDceCombInstrumentField_Xparameter;
        
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaDceCombInstrumentField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaDceCombInstrumentField_dealloc(PyCThostFtdcSyncDeltaDceCombInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_repr(PyCThostFtdcSyncDeltaDceCombInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:c,s:c,s:c,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:c,s:c,s:c,s:s,s:d,s:c,s:i}"
#endif

        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"TradeGroupID", self->data.TradeGroupID 
        ,"CombHedgeFlag", self->data.CombHedgeFlag 
        ,"CombinationType", self->data.CombinationType 
        ,"Direction", self->data.Direction 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"Xparameter", self->data.Xparameter 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDceCombInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombInstrumentID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombInstrumentID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
    // memcpy(self->data.CombInstrumentID, buf, len);
    strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeInstID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeInstID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
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
            
///成交组号
// TThostFtdcTradeGroupIDType int
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_TradeGroupID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.TradeGroupID);
#else
    return PyInt_FromLong(self->data.TradeGroupID);
#endif
}

///成交组号
// TThostFtdcTradeGroupIDType int
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_TradeGroupID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the TradeGroupID value out of range for C int");
        return -1;
    }
    self->data.TradeGroupID = (int)buf;
    return 0;
}
        
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombHedgeFlag(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CombHedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombHedgeFlag(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.CombHedgeFlag = *buf;
    return 0;
}
            
///组合类型
// TThostFtdcDceCombinationTypeType char
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombinationType(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.CombinationType), 1);
}

///组合类型
// TThostFtdcDceCombinationTypeType char
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombinationType(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombinationType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombinationType)) {
        PyErr_SetString(PyExc_ValueError, "CombinationType must be equal 1 bytes");
        return -1;
    }
    self->data.CombinationType = *buf;
    return 0;
}
            
///买卖
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Direction(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖
// TThostFtdcDirectionType char
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Direction(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ProductID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ProductID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///期权组合保证金比例
// TThostFtdcDiscountRatioType double
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Xparameter(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    return PyFloat_FromDouble(self->data.Xparameter);
}

///期权组合保证金比例
// TThostFtdcDiscountRatioType double
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Xparameter(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Xparameter Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Xparameter = buf;
    return 0;
}
        
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ActionDirection(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ActionDirection(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaDceCombInstrumentField_getset[] = {
    ///合约代码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombInstrumentID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///成交组号 
    {(char *)"TradeGroupID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_TradeGroupID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_TradeGroupID, (char *)"TradeGroupID", NULL},
    ///投机套保标志 
    {(char *)"CombHedgeFlag", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombHedgeFlag, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
    ///组合类型 
    {(char *)"CombinationType", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombinationType, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombinationType, (char *)"CombinationType", NULL},
    ///买卖 
    {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Direction, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Direction, (char *)"Direction", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ProductID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ProductID, (char *)"ProductID", NULL},
    ///期权组合保证金比例 
    {(char *)"Xparameter", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Xparameter, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Xparameter, (char *)"Xparameter", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaDceCombInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaDceCombInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaDceCombInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaDceCombInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaDceCombInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaDceCombInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaDceCombInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaDceCombInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaDceCombInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaDceCombInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaDceCombInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaDceCombInstrumentField", (PyObject *)&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaDceCombInstrumentField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType);
		return -1;
    }

    return 0;
}
