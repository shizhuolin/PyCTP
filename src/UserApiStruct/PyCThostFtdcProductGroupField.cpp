
#include "PyCThostFtdcProductGroupField.h"

///投资者品种/跨品种保证金产品组

static PyObject *PyCThostFtdcProductGroupField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcProductGroupField *self = (PyCThostFtdcProductGroupField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcProductGroupField_init(PyCThostFtdcProductGroupField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "reserve2", "ProductID", "ProductGroupID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ProductGroupField_reserve1 = NULL;
    Py_ssize_t ProductGroupField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ProductGroupField_ExchangeID = NULL;
    Py_ssize_t ProductGroupField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ProductGroupField_reserve2 = NULL;
    Py_ssize_t ProductGroupField_reserve2_len = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ProductGroupField_ProductID = NULL;
    Py_ssize_t ProductGroupField_ProductID_len = 0;
            
    ///产品组代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ProductGroupField_ProductGroupID = NULL;
    Py_ssize_t ProductGroupField_ProductGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

        , &ProductGroupField_reserve1, &ProductGroupField_reserve1_len 
        , &ProductGroupField_ExchangeID, &ProductGroupField_ExchangeID_len 
        , &ProductGroupField_reserve2, &ProductGroupField_reserve2_len 
        , &ProductGroupField_ProductID, &ProductGroupField_ProductID_len 
        , &ProductGroupField_ProductGroupID, &ProductGroupField_ProductGroupID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ProductGroupField_reserve1 != NULL ) {
        if(ProductGroupField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ProductGroupField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ProductGroupField_reserve1, ProductGroupField_reserve1_len);        
        strncpy(self->data.reserve1, ProductGroupField_reserve1, sizeof(self->data.reserve1) );
        ProductGroupField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ProductGroupField_ExchangeID != NULL ) {
        if(ProductGroupField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ProductGroupField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ProductGroupField_ExchangeID, ProductGroupField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ProductGroupField_ExchangeID, sizeof(self->data.ExchangeID) );
        ProductGroupField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ProductGroupField_reserve2 != NULL ) {
        if(ProductGroupField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", ProductGroupField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
            return -1;
        }
        // memset(self->data.reserve2, 0, sizeof(self->data.reserve2));
        // memcpy(self->data.reserve2, ProductGroupField_reserve2, ProductGroupField_reserve2_len);        
        strncpy(self->data.reserve2, ProductGroupField_reserve2, sizeof(self->data.reserve2) );
        ProductGroupField_reserve2 = NULL;
    }
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( ProductGroupField_ProductID != NULL ) {
        if(ProductGroupField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", ProductGroupField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, ProductGroupField_ProductID, ProductGroupField_ProductID_len);        
        strncpy(self->data.ProductID, ProductGroupField_ProductID, sizeof(self->data.ProductID) );
        ProductGroupField_ProductID = NULL;
    }
            
    ///产品组代码
    // TThostFtdcInstrumentIDType char[81]
    if( ProductGroupField_ProductGroupID != NULL ) {
        if(ProductGroupField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", ProductGroupField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, ProductGroupField_ProductGroupID, ProductGroupField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, ProductGroupField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        ProductGroupField_ProductGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcProductGroupField_dealloc(PyCThostFtdcProductGroupField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcProductGroupField_repr(PyCThostFtdcProductGroupField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve2", self->data.reserve2//, (Py_ssize_t)sizeof(self->data.reserve2) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductGroupField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcProductGroupField_get_reserve1(PyCThostFtdcProductGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcProductGroupField_set_reserve1(PyCThostFtdcProductGroupField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcProductGroupField_get_ExchangeID(PyCThostFtdcProductGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcProductGroupField_set_ExchangeID(PyCThostFtdcProductGroupField *self, PyObject* val, void *closure) {
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
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcProductGroupField_get_reserve2(PyCThostFtdcProductGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve2, (Py_ssize_t)sizeof(self->data.reserve2));
    return PyBytes_FromString(self->data.reserve2);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcProductGroupField_set_reserve2(PyCThostFtdcProductGroupField *self, PyObject* val, void *closure) {
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
            
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcProductGroupField_get_ProductID(PyCThostFtdcProductGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcProductGroupField_set_ProductID(PyCThostFtdcProductGroupField *self, PyObject* val, void *closure) {
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
            
///产品组代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcProductGroupField_get_ProductGroupID(PyCThostFtdcProductGroupField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///产品组代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcProductGroupField_set_ProductGroupID(PyCThostFtdcProductGroupField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
    // memcpy(self->data.ProductGroupID, buf, len);
    strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcProductGroupField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcProductGroupField_get_reserve1, (setter)PyCThostFtdcProductGroupField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcProductGroupField_get_ExchangeID, (setter)PyCThostFtdcProductGroupField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve2", (getter)PyCThostFtdcProductGroupField_get_reserve2, (setter)PyCThostFtdcProductGroupField_set_reserve2, (char *)"reserve2", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcProductGroupField_get_ProductID, (setter)PyCThostFtdcProductGroupField_set_ProductID, (char *)"ProductID", NULL},
    ///产品组代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcProductGroupField_get_ProductGroupID, (setter)PyCThostFtdcProductGroupField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcProductGroupFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcProductGroupField",	/* tp_name */
	sizeof(PyCThostFtdcProductGroupField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcProductGroupField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcProductGroupField_repr,   /* tp_repr */
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
	"CThostFtdcProductGroupField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcProductGroupField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcProductGroupField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcProductGroupField_new,       /* tp_new */
};

int PyCThostFtdcProductGroupFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcProductGroupField  */
	if (PyType_Ready(&PyCThostFtdcProductGroupFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcProductGroupField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcProductGroupFieldType);
    if( PyModule_AddObject(module, "CThostFtdcProductGroupField", (PyObject *)&PyCThostFtdcProductGroupFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductGroupField to module");
        Py_DECREF(&PyCThostFtdcProductGroupFieldType);
		return -1;
    }

    return 0;
}
