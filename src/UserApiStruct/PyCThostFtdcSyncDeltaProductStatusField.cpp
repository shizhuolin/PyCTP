
#include "PyCThostFtdcSyncDeltaProductStatusField.h"

///风险结算追平产品信息

static PyObject *PyCThostFtdcSyncDeltaProductStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaProductStatusField *self = (PyCThostFtdcSyncDeltaProductStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaProductStatusField_init(PyCThostFtdcSyncDeltaProductStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"SyncDeltaSequenceNo", "ExchangeID", "ProductID", "ProductStatus",  NULL};


    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaProductStatusField_SyncDeltaSequenceNo = 0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaProductStatusField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaProductStatusField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *SyncDeltaProductStatusField_ProductID = NULL;
    Py_ssize_t SyncDeltaProductStatusField_ProductID_len = 0;
            
    ///是否允许交易
    // TThostFtdcProductStatusType char
    char SyncDeltaProductStatusField_ProductStatus = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#s#c", (char **)kwlist
#endif

        , &SyncDeltaProductStatusField_SyncDeltaSequenceNo 
        , &SyncDeltaProductStatusField_ExchangeID, &SyncDeltaProductStatusField_ExchangeID_len 
        , &SyncDeltaProductStatusField_ProductID, &SyncDeltaProductStatusField_ProductID_len 
        , &SyncDeltaProductStatusField_ProductStatus 


    )) {
        return -1;
    }


    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaProductStatusField_SyncDeltaSequenceNo;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaProductStatusField_ExchangeID != NULL ) {
        if(SyncDeltaProductStatusField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaProductStatusField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaProductStatusField_ExchangeID, SyncDeltaProductStatusField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaProductStatusField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaProductStatusField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( SyncDeltaProductStatusField_ProductID != NULL ) {
        if(SyncDeltaProductStatusField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", SyncDeltaProductStatusField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, SyncDeltaProductStatusField_ProductID, SyncDeltaProductStatusField_ProductID_len);        
        strncpy(self->data.ProductID, SyncDeltaProductStatusField_ProductID, sizeof(self->data.ProductID) );
        SyncDeltaProductStatusField_ProductID = NULL;
    }
            
    ///是否允许交易
    // TThostFtdcProductStatusType char
    self->data.ProductStatus = SyncDeltaProductStatusField_ProductStatus;
            

    return 0;
}

static void PyCThostFtdcSyncDeltaProductStatusField_dealloc(PyCThostFtdcSyncDeltaProductStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaProductStatusField_repr(PyCThostFtdcSyncDeltaProductStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:s,s:c}"
#endif

        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"ProductStatus", self->data.ProductStatus 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaProductStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///追平序号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcSyncDeltaProductStatusField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaProductStatusField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaProductStatusField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaProductStatusField *self, PyObject* val, void *closure) {
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
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaProductStatusField_get_ExchangeID(PyCThostFtdcSyncDeltaProductStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaProductStatusField_set_ExchangeID(PyCThostFtdcSyncDeltaProductStatusField *self, PyObject* val, void *closure) {
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
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcSyncDeltaProductStatusField_get_ProductID(PyCThostFtdcSyncDeltaProductStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcSyncDeltaProductStatusField_set_ProductID(PyCThostFtdcSyncDeltaProductStatusField *self, PyObject* val, void *closure) {
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
            
///是否允许交易
// TThostFtdcProductStatusType char
static PyObject *PyCThostFtdcSyncDeltaProductStatusField_get_ProductStatus(PyCThostFtdcSyncDeltaProductStatusField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ProductStatus), 1);
}

///是否允许交易
// TThostFtdcProductStatusType char
static int PyCThostFtdcSyncDeltaProductStatusField_set_ProductStatus(PyCThostFtdcSyncDeltaProductStatusField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductStatus Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductStatus)) {
        PyErr_SetString(PyExc_ValueError, "ProductStatus must be equal 1 bytes");
        return -1;
    }
    self->data.ProductStatus = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSyncDeltaProductStatusField_getset[] = {
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaProductStatusField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaProductStatusField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaProductStatusField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaProductStatusField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaProductStatusField_get_ProductID, (setter)PyCThostFtdcSyncDeltaProductStatusField_set_ProductID, (char *)"ProductID", NULL},
    ///是否允许交易 
    {(char *)"ProductStatus", (getter)PyCThostFtdcSyncDeltaProductStatusField_get_ProductStatus, (setter)PyCThostFtdcSyncDeltaProductStatusField_set_ProductStatus, (char *)"ProductStatus", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaProductStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaProductStatusField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaProductStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaProductStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaProductStatusField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaProductStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaProductStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaProductStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaProductStatusField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaProductStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaProductStatusField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaProductStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaProductStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaProductStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaProductStatusField", (PyObject *)&PyCThostFtdcSyncDeltaProductStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaProductStatusField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaProductStatusFieldType);
		return -1;
    }

    return 0;
}
