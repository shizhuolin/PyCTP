
#include "PyCThostFtdcSPMMProductParamField.h"

///SPMM产品参数

static PyObject *PyCThostFtdcSPMMProductParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPMMProductParamField *self = (PyCThostFtdcSPMMProductParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSPMMProductParamField_init(PyCThostFtdcSPMMProductParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ProductID", "CommodityID", "CommodityGroupID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SPMMProductParamField_ExchangeID = NULL;
    Py_ssize_t SPMMProductParamField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SPMMProductParamField_ProductID = NULL;
    Py_ssize_t SPMMProductParamField_ProductID_len = 0;
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SPMMProductParamField_CommodityID = NULL;
    Py_ssize_t SPMMProductParamField_CommodityID_len = 0;
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *SPMMProductParamField_CommodityGroupID = NULL;
    Py_ssize_t SPMMProductParamField_CommodityGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &SPMMProductParamField_ExchangeID, &SPMMProductParamField_ExchangeID_len 
        , &SPMMProductParamField_ProductID, &SPMMProductParamField_ProductID_len 
        , &SPMMProductParamField_CommodityID, &SPMMProductParamField_CommodityID_len 
        , &SPMMProductParamField_CommodityGroupID, &SPMMProductParamField_CommodityGroupID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SPMMProductParamField_ExchangeID != NULL ) {
        if(SPMMProductParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SPMMProductParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SPMMProductParamField_ExchangeID, SPMMProductParamField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SPMMProductParamField_ExchangeID, sizeof(self->data.ExchangeID) );
        SPMMProductParamField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SPMMProductParamField_ProductID != NULL ) {
        if(SPMMProductParamField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", SPMMProductParamField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, SPMMProductParamField_ProductID, SPMMProductParamField_ProductID_len);        
        strncpy(self->data.ProductID, SPMMProductParamField_ProductID, sizeof(self->data.ProductID) );
        SPMMProductParamField_ProductID = NULL;
    }
            
    ///商品组代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SPMMProductParamField_CommodityID != NULL ) {
        if(SPMMProductParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
            PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", SPMMProductParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
            return -1;
        }
        // memset(self->data.CommodityID, 0, sizeof(self->data.CommodityID));
        // memcpy(self->data.CommodityID, SPMMProductParamField_CommodityID, SPMMProductParamField_CommodityID_len);        
        strncpy(self->data.CommodityID, SPMMProductParamField_CommodityID, sizeof(self->data.CommodityID) );
        SPMMProductParamField_CommodityID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcSPMMProductIDType char[41]
    if( SPMMProductParamField_CommodityGroupID != NULL ) {
        if(SPMMProductParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
            PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", SPMMProductParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
            return -1;
        }
        // memset(self->data.CommodityGroupID, 0, sizeof(self->data.CommodityGroupID));
        // memcpy(self->data.CommodityGroupID, SPMMProductParamField_CommodityGroupID, SPMMProductParamField_CommodityGroupID_len);        
        strncpy(self->data.CommodityGroupID, SPMMProductParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
        SPMMProductParamField_CommodityGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSPMMProductParamField_dealloc(PyCThostFtdcSPMMProductParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPMMProductParamField_repr(PyCThostFtdcSPMMProductParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"CommodityID", self->data.CommodityID//, (Py_ssize_t)sizeof(self->data.CommodityID) 
        ,"CommodityGroupID", self->data.CommodityGroupID//, (Py_ssize_t)sizeof(self->data.CommodityGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPMMProductParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSPMMProductParamField_get_ExchangeID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSPMMProductParamField_set_ExchangeID(PyCThostFtdcSPMMProductParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPMMProductParamField_get_ProductID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSPMMProductParamField_set_ProductID(PyCThostFtdcSPMMProductParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPMMProductParamField_get_CommodityID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityID, (Py_ssize_t)sizeof(self->data.CommodityID));
    return PyBytes_FromString(self->data.CommodityID);
}

///商品组代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSPMMProductParamField_set_CommodityID(PyCThostFtdcSPMMProductParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSPMMProductParamField_get_CommodityGroupID(PyCThostFtdcSPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CommodityGroupID, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
    return PyBytes_FromString(self->data.CommodityGroupID);
}

///商品群代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcSPMMProductParamField_set_CommodityGroupID(PyCThostFtdcSPMMProductParamField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSPMMProductParamField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSPMMProductParamField_get_ExchangeID, (setter)PyCThostFtdcSPMMProductParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcSPMMProductParamField_get_ProductID, (setter)PyCThostFtdcSPMMProductParamField_set_ProductID, (char *)"ProductID", NULL},
    ///商品组代码 
    {(char *)"CommodityID", (getter)PyCThostFtdcSPMMProductParamField_get_CommodityID, (setter)PyCThostFtdcSPMMProductParamField_set_CommodityID, (char *)"CommodityID", NULL},
    ///商品群代码 
    {(char *)"CommodityGroupID", (getter)PyCThostFtdcSPMMProductParamField_get_CommodityGroupID, (setter)PyCThostFtdcSPMMProductParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPMMProductParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPMMProductParamField",	/* tp_name */
	sizeof(PyCThostFtdcSPMMProductParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPMMProductParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPMMProductParamField_repr,   /* tp_repr */
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
	"CThostFtdcSPMMProductParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPMMProductParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPMMProductParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPMMProductParamField_new,       /* tp_new */
};

int PyCThostFtdcSPMMProductParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPMMProductParamField  */
	if (PyType_Ready(&PyCThostFtdcSPMMProductParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPMMProductParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPMMProductParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPMMProductParamField", (PyObject *)&PyCThostFtdcSPMMProductParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPMMProductParamField to module");
        Py_DECREF(&PyCThostFtdcSPMMProductParamFieldType);
		return -1;
    }

    return 0;
}
