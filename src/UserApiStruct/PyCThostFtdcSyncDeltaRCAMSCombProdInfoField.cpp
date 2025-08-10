
#include "PyCThostFtdcSyncDeltaRCAMSCombProdInfoField.h"

///风险结算追平RCAMS产品组合信息

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self = (PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_init(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductID", "CombProductID", "ProductGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *SyncDeltaRCAMSCombProdInfoField_TradingDay = NULL;
    Py_ssize_t SyncDeltaRCAMSCombProdInfoField_TradingDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaRCAMSCombProdInfoField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaRCAMSCombProdInfoField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSCombProdInfoField_ProductID = NULL;
    Py_ssize_t SyncDeltaRCAMSCombProdInfoField_ProductID_len = 0;
            
    ///商品组代码
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSCombProdInfoField_CombProductID = NULL;
    Py_ssize_t SyncDeltaRCAMSCombProdInfoField_CombProductID_len = 0;
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    const char *SyncDeltaRCAMSCombProdInfoField_ProductGroupID = NULL;
    Py_ssize_t SyncDeltaRCAMSCombProdInfoField_ProductGroupID_len = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaRCAMSCombProdInfoField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ci", (char **)kwlist
#endif

        , &SyncDeltaRCAMSCombProdInfoField_TradingDay, &SyncDeltaRCAMSCombProdInfoField_TradingDay_len 
        , &SyncDeltaRCAMSCombProdInfoField_ExchangeID, &SyncDeltaRCAMSCombProdInfoField_ExchangeID_len 
        , &SyncDeltaRCAMSCombProdInfoField_ProductID, &SyncDeltaRCAMSCombProdInfoField_ProductID_len 
        , &SyncDeltaRCAMSCombProdInfoField_CombProductID, &SyncDeltaRCAMSCombProdInfoField_CombProductID_len 
        , &SyncDeltaRCAMSCombProdInfoField_ProductGroupID, &SyncDeltaRCAMSCombProdInfoField_ProductGroupID_len 
        , &SyncDeltaRCAMSCombProdInfoField_ActionDirection 
        , &SyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( SyncDeltaRCAMSCombProdInfoField_TradingDay != NULL ) {
        if(SyncDeltaRCAMSCombProdInfoField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombProdInfoField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, SyncDeltaRCAMSCombProdInfoField_TradingDay, SyncDeltaRCAMSCombProdInfoField_TradingDay_len);        
        strncpy(self->data.TradingDay, SyncDeltaRCAMSCombProdInfoField_TradingDay, sizeof(self->data.TradingDay) );
        SyncDeltaRCAMSCombProdInfoField_TradingDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaRCAMSCombProdInfoField_ExchangeID != NULL ) {
        if(SyncDeltaRCAMSCombProdInfoField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombProdInfoField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaRCAMSCombProdInfoField_ExchangeID, SyncDeltaRCAMSCombProdInfoField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaRCAMSCombProdInfoField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaRCAMSCombProdInfoField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSCombProdInfoField_ProductID != NULL ) {
        if(SyncDeltaRCAMSCombProdInfoField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombProdInfoField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, SyncDeltaRCAMSCombProdInfoField_ProductID, SyncDeltaRCAMSCombProdInfoField_ProductID_len);        
        strncpy(self->data.ProductID, SyncDeltaRCAMSCombProdInfoField_ProductID, sizeof(self->data.ProductID) );
        SyncDeltaRCAMSCombProdInfoField_ProductID = NULL;
    }
            
    ///商品组代码
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSCombProdInfoField_CombProductID != NULL ) {
        if(SyncDeltaRCAMSCombProdInfoField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombProdInfoField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, SyncDeltaRCAMSCombProdInfoField_CombProductID, SyncDeltaRCAMSCombProdInfoField_CombProductID_len);        
        strncpy(self->data.CombProductID, SyncDeltaRCAMSCombProdInfoField_CombProductID, sizeof(self->data.CombProductID) );
        SyncDeltaRCAMSCombProdInfoField_CombProductID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    if( SyncDeltaRCAMSCombProdInfoField_ProductGroupID != NULL ) {
        if(SyncDeltaRCAMSCombProdInfoField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", SyncDeltaRCAMSCombProdInfoField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, SyncDeltaRCAMSCombProdInfoField_ProductGroupID, SyncDeltaRCAMSCombProdInfoField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, SyncDeltaRCAMSCombProdInfoField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        SyncDeltaRCAMSCombProdInfoField_ProductGroupID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaRCAMSCombProdInfoField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_dealloc(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_repr(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombProdInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject* val, void *closure) {
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
            
///产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///商品组代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_CombProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///商品组代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_CombProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
        PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
    // memcpy(self->data.CombProductID, buf, len);
    strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
    return 0;
}
            
///商品群代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///商品群代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject* val, void *closure) {
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
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_TradingDay, (char *)"TradingDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductID, (char *)"ProductID", NULL},
    ///商品组代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_CombProductID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_CombProductID, (char *)"CombProductID", NULL},
    ///商品群代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductGroupID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSCombProdInfoField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSCombProdInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSCombProdInfoField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSCombProdInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSCombProdInfoField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSCombProdInfoField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType);
		return -1;
    }

    return 0;
}
