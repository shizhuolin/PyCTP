
#include "PyCThostFtdcSyncDeltaRCAMSInterParameterField.h"

///风险结算追平RCAMS跨品种风险折抵参数

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterField *self = (PyCThostFtdcSyncDeltaRCAMSInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_init(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductGroupID", "Priority", "CreditRate", "CombProduct1", "CombProduct2", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRCAMSInterParameterField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRCAMSInterParameterField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRCAMSInterParameterField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRCAMSInterParameterField_ExchangeID_len = 0;
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSInterParameterField_ProductGroupID = NULL;
    Py_ssize_t SyncDeltaRCAMSInterParameterField_ProductGroupID_len = 0;
            
    ///优先级
    // TThostFtdcRCAMSPriorityType int
    int SyncDeltaRCAMSInterParameterField_Priority = 0;
        
    ///折抵率
    // TThostFtdcHedgeRateType double
    double SyncDeltaRCAMSInterParameterField_CreditRate = 0.0;
        
    ///产品组合代码1
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSInterParameterField_CombProduct1 = NULL;
    Py_ssize_t SyncDeltaRCAMSInterParameterField_CombProduct1_len = 0;
            
    ///产品组合代码2
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSInterParameterField_CombProduct2 = NULL;
    Py_ssize_t SyncDeltaRCAMSInterParameterField_CombProduct2_len = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRCAMSInterParameterField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#idy#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ids#s#ci", (char **)kwlist
#endif

        , &SyncDeltaRCAMSInterParameterField_TradingDay, &SyncDeltaRCAMSInterParameterField_TradingDay_len 
        , &SyncDeltaRCAMSInterParameterField_ExchangeID, &SyncDeltaRCAMSInterParameterField_ExchangeID_len 
        , &SyncDeltaRCAMSInterParameterField_ProductGroupID, &SyncDeltaRCAMSInterParameterField_ProductGroupID_len 
        , &SyncDeltaRCAMSInterParameterField_Priority 
        , &SyncDeltaRCAMSInterParameterField_CreditRate 
        , &SyncDeltaRCAMSInterParameterField_CombProduct1, &SyncDeltaRCAMSInterParameterField_CombProduct1_len 
        , &SyncDeltaRCAMSInterParameterField_CombProduct2, &SyncDeltaRCAMSInterParameterField_CombProduct2_len 
        , &SyncDeltaRCAMSInterParameterField_ActionDirection 
        , &SyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRCAMSInterParameterField_TradingDay != NULL ) {
        if(SyncDeltaRCAMSInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRCAMSInterParameterField_TradingDay, SyncDeltaRCAMSInterParameterField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRCAMSInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRCAMSInterParameterField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRCAMSInterParameterField_ExchangeID != NULL ) {
        if(SyncDeltaRCAMSInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRCAMSInterParameterField_ExchangeID, SyncDeltaRCAMSInterParameterField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRCAMSInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRCAMSInterParameterField_ExchangeID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSInterParameterField_ProductGroupID != NULL ) {
        if(SyncDeltaRCAMSInterParameterField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInterParameterField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, SyncDeltaRCAMSInterParameterField_ProductGroupID, SyncDeltaRCAMSInterParameterField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, SyncDeltaRCAMSInterParameterField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        SyncDeltaRCAMSInterParameterField_ProductGroupID = NULL;
    }
            
    ///优先级
    // TThostFtdcRCAMSPriorityType int
    self->data.Priority = SyncDeltaRCAMSInterParameterField_Priority;
        
    ///折抵率
    // TThostFtdcHedgeRateType double
    self->data.CreditRate = SyncDeltaRCAMSInterParameterField_CreditRate;
        
    ///产品组合代码1
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSInterParameterField_CombProduct1 != NULL ) {
        if(SyncDeltaRCAMSInterParameterField_CombProduct1_len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
            PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInterParameterField_CombProduct1_len, (Py_ssize_t)sizeof(self->data.CombProduct1));
            return -1;
        }
        // memset(self->data.CombProduct1, 0, sizeof(self->data.CombProduct1));
        // memcpy(self->data.CombProduct1, SyncDeltaRCAMSInterParameterField_CombProduct1, SyncDeltaRCAMSInterParameterField_CombProduct1_len);        
        strncpy(self->data.CombProduct1, SyncDeltaRCAMSInterParameterField_CombProduct1, sizeof(self->data.CombProduct1) );
        SyncDeltaRCAMSInterParameterField_CombProduct1 = NULL;
    }
            
    ///产品组合代码2
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSInterParameterField_CombProduct2 != NULL ) {
        if(SyncDeltaRCAMSInterParameterField_CombProduct2_len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
            PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSInterParameterField_CombProduct2_len, (Py_ssize_t)sizeof(self->data.CombProduct2));
            return -1;
        }
        // memset(self->data.CombProduct2, 0, sizeof(self->data.CombProduct2));
        // memcpy(self->data.CombProduct2, SyncDeltaRCAMSInterParameterField_CombProduct2, SyncDeltaRCAMSInterParameterField_CombProduct2_len);        
        strncpy(self->data.CombProduct2, SyncDeltaRCAMSInterParameterField_CombProduct2, sizeof(self->data.CombProduct2) );
        SyncDeltaRCAMSInterParameterField_CombProduct2 = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRCAMSInterParameterField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSInterParameterField_dealloc(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_repr(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:d,s:s,s:s,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 
        ,"Priority", self->data.Priority 
        ,"CreditRate", self->data.CreditRate 
        ,"CombProduct1", self->data.CombProduct1//, (Py_ssize_t)sizeof(self->data.CombProduct1) 
        ,"CombProduct2", self->data.CombProduct2//, (Py_ssize_t)sizeof(self->data.CombProduct2) 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
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
            
///商品群代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///商品群代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
    // memcpy(self->data.ProductGroupID, buf, len);
    strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
    return 0;
}
            
///优先级
// TThostFtdcRCAMSPriorityType int
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_Priority(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.Priority);
#else
    return PyInt_FromLong(self->data.Priority);
#endif
}

///优先级
// TThostFtdcRCAMSPriorityType int
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_Priority(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the Priority value out of range for C int");
        return -1;
    }
    self->data.Priority = (int)buf;
    return 0;
}
        
///折抵率
// TThostFtdcHedgeRateType double
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CreditRate(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
    return PyFloat_FromDouble(self->data.CreditRate);
}

///折抵率
// TThostFtdcHedgeRateType double
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CreditRate(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreditRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CreditRate = buf;
    return 0;
}
        
///产品组合代码1
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct1(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProduct1, (Py_ssize_t)sizeof(self->data.CombProduct1));
    return PyBytes_FromString(self->data.CombProduct1);
}

///产品组合代码1
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct1(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProduct1, 0, sizeof(self->data.CombProduct1));
    // memcpy(self->data.CombProduct1, buf, len);
    strncpy(self->data.CombProduct1, buf, sizeof(self->data.CombProduct1));
    return 0;
}
            
///产品组合代码2
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct2(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProduct2, (Py_ssize_t)sizeof(self->data.CombProduct2));
    return PyBytes_FromString(self->data.CombProduct2);
}

///产品组合代码2
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct2(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
        PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProduct2, 0, sizeof(self->data.CombProduct2));
    // memcpy(self->data.CombProduct2, buf, len);
    strncpy(self->data.CombProduct2, buf, sizeof(self->data.CombProduct2));
    return 0;
}
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInterParameterField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///商品群代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ProductGroupID, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
    ///优先级 
    {(char *)"Priority", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_Priority, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_Priority, (char *)"Priority", NULL},
    ///折抵率 
    {(char *)"CreditRate", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CreditRate, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CreditRate, (char *)"CreditRate", NULL},
    ///产品组合代码1 
    {(char *)"CombProduct1", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct1, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct1, (char *)"CombProduct1", NULL},
    ///产品组合代码2 
    {(char *)"CombProduct2", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct2, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct2, (char *)"CombProduct2", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInterParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType);
		return -1;
    }

    return 0;
}
