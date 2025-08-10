
#include "PyCThostFtdcSyncDeltaSPMMProductParamField.h"

///风险结算追平SPMM产品相关参数

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPMMProductParamField *self = (PyCThostFtdcSyncDeltaSPMMProductParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPMMProductParamField_init(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ProductID", "CommodityID", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncDeltaSPMMProductParamField_ExchangeID = NULL;
    Py_ssize_t SyncDeltaSPMMProductParamField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SyncDeltaSPMMProductParamField_ProductID = NULL;
    Py_ssize_t SyncDeltaSPMMProductParamField_ProductID_len = 0;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SyncDeltaSPMMProductParamField_CommodityID = NULL;
    Py_ssize_t SyncDeltaSPMMProductParamField_CommodityID_len = 0;
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SyncDeltaSPMMProductParamField_CommodityGroupID = NULL;
    Py_ssize_t SyncDeltaSPMMProductParamField_CommodityGroupID_len = 0;
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    char SyncDeltaSPMMProductParamField_ActionDirection = 0;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    int SyncDeltaSPMMProductParamField_SyncDeltaSequenceNo = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ci", (char **)kwlist
#endif

        , &SyncDeltaSPMMProductParamField_ExchangeID, &SyncDeltaSPMMProductParamField_ExchangeID_len 
        , &SyncDeltaSPMMProductParamField_ProductID, &SyncDeltaSPMMProductParamField_ProductID_len 
        , &SyncDeltaSPMMProductParamField_CommodityID, &SyncDeltaSPMMProductParamField_CommodityID_len 
        , &SyncDeltaSPMMProductParamField_CommodityGroupID, &SyncDeltaSPMMProductParamField_CommodityGroupID_len 
        , &SyncDeltaSPMMProductParamField_ActionDirection 
        , &SyncDeltaSPMMProductParamField_SyncDeltaSequenceNo 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncDeltaSPMMProductParamField_ExchangeID != NULL ) {
        if(SyncDeltaSPMMProductParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMProductParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncDeltaSPMMProductParamField_ExchangeID, SyncDeltaSPMMProductParamField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncDeltaSPMMProductParamField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncDeltaSPMMProductParamField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SyncDeltaSPMMProductParamField_ProductID != NULL ) {
        if(SyncDeltaSPMMProductParamField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMProductParamField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, SyncDeltaSPMMProductParamField_ProductID, SyncDeltaSPMMProductParamField_ProductID_len);        
        strncpy(self->data.ProductID, SyncDeltaSPMMProductParamField_ProductID, sizeof(self->data.ProductID) );
        SyncDeltaSPMMProductParamField_ProductID = NULL;
    }
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SyncDeltaSPMMProductParamField_CommodityID != NULL ) {
        if(SyncDeltaSPMMProductParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMProductParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
            return -1;
        }
        // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
        // memcpy(self->data.CommodityID, SyncDeltaSPMMProductParamField_CommodityID, SyncDeltaSPMMProductParamField_CommodityID_len);        
        strncpy(self->data.CommodityID, SyncDeltaSPMMProductParamField_CommodityID, sizeof(self->data.CommodityID) );
        SyncDeltaSPMMProductParamField_CommodityID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SyncDeltaSPMMProductParamField_CommodityGroupID != NULL ) {
        if(SyncDeltaSPMMProductParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", SyncDeltaSPMMProductParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
            return -1;
        }
        // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
        // memcpy(self->data.CommodityGroupID, SyncDeltaSPMMProductParamField_CommodityGroupID, SyncDeltaSPMMProductParamField_CommodityGroupID_len);        
        strncpy(self->data.CommodityGroupID, SyncDeltaSPMMProductParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
        SyncDeltaSPMMProductParamField_CommodityGroupID = NULL;
    }
            
    ///操作标志
    // TThostFtdcActionDirectionType char
    self->data.ActionDirection = SyncDeltaSPMMProductParamField_ActionDirection;
            
    ///追平序号
    // TThostFtdcSequenceNoType int
    self->data.SyncDeltaSequenceNo = SyncDeltaSPMMProductParamField_SyncDeltaSequenceNo;
        

    return 0;
}

static void PyCThostFtdcSyncDeltaSPMMProductParamField_dealloc(PyCThostFtdcSyncDeltaSPMMProductParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_repr(PyCThostFtdcSyncDeltaSPMMProductParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"CommodityID", self->data.CommodityID//, (Py_ssize_t)sizeof(self->data.CommodityID) 
        ,"CommodityGroupID", self->data.CommodityGroupID//, (Py_ssize_t)sizeof(self->data.CommodityGroupID) 
        ,"ActionDirection", self->data.ActionDirection 
        ,"SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMProductParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_ExchangeID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_ExchangeID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject* val, void *closure) {
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
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_ProductID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_ProductID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject* val, void *closure) {
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
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityID, (Py_ssize_t)sizeof(self->data.CommodityID));
    return PyBytes_FromString(self->data.CommodityID);
}

///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
    // memcpy(self->data.CommodityID, buf, len);
    strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
    return 0;
}
            
///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupID, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
    return PyBytes_FromString(self->data.CommodityGroupID);
}

///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
        PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
    // memcpy(self->data.CommodityGroupID, buf, len);
    strncpy(self->data.CommodityGroupID, buf, sizeof(self->data.CommodityGroupID));
    return 0;
}
            
///操作标志
// TThostFtdcActionDirectionType char
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_ActionDirection(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

///操作标志
// TThostFtdcActionDirectionType char
static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_ActionDirection(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else
    return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif
}

///追平序号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject* val, void *closure) {
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
        

static PyGetSetDef PyCThostFtdcSyncDeltaSPMMProductParamField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_ProductID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_ProductID, (char *)"ProductID", NULL},
    ///商品组代码 
    {(char *)"CommodityID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityID, (char *)"CommodityID", NULL},
    ///商品群代码 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
    ///操作标志 
    {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
    ///追平序号 
    {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPMMProductParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPMMProductParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPMMProductParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPMMProductParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPMMProductParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPMMProductParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPMMProductParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPMMProductParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPMMProductParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPMMProductParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPMMProductParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPMMProductParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPMMProductParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMProductParamField", (PyObject *)&PyCThostFtdcSyncDeltaSPMMProductParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMProductParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPMMProductParamFieldType);
		return -1;
    }

    return 0;
}
