
#include "PyCThostFtdcQryRCAMSCombProductInfoField.h"

///RCAMS产品组合信息查询

static PyObject *PyCThostFtdcQryRCAMSCombProductInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRCAMSCombProductInfoField *self = (PyCThostFtdcQryRCAMSCombProductInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryRCAMSCombProductInfoField_init(PyCThostFtdcQryRCAMSCombProductInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ProductID", "CombProductID", "ProductGroupID",  NULL};


    ///产品代码
    // TThostFtdcProductIDType char[41]
    const char *QryRCAMSCombProductInfoField_ProductID = NULL;
    Py_ssize_t QryRCAMSCombProductInfoField_ProductID_len = 0;
            
    ///商品组代码
    // TThostFtdcProductIDType char[41]
    const char *QryRCAMSCombProductInfoField_CombProductID = NULL;
    Py_ssize_t QryRCAMSCombProductInfoField_CombProductID_len = 0;
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    const char *QryRCAMSCombProductInfoField_ProductGroupID = NULL;
    Py_ssize_t QryRCAMSCombProductInfoField_ProductGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryRCAMSCombProductInfoField_ProductID, &QryRCAMSCombProductInfoField_ProductID_len 
        , &QryRCAMSCombProductInfoField_CombProductID, &QryRCAMSCombProductInfoField_CombProductID_len 
        , &QryRCAMSCombProductInfoField_ProductGroupID, &QryRCAMSCombProductInfoField_ProductGroupID_len 


    )) {
        return -1;
    }


    ///产品代码
    // TThostFtdcProductIDType char[41]
    if( QryRCAMSCombProductInfoField_ProductID != NULL ) {
        if(QryRCAMSCombProductInfoField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", QryRCAMSCombProductInfoField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, QryRCAMSCombProductInfoField_ProductID, QryRCAMSCombProductInfoField_ProductID_len);        
        strncpy(self->data.ProductID, QryRCAMSCombProductInfoField_ProductID, sizeof(self->data.ProductID) );
        QryRCAMSCombProductInfoField_ProductID = NULL;
    }
            
    ///商品组代码
    // TThostFtdcProductIDType char[41]
    if( QryRCAMSCombProductInfoField_CombProductID != NULL ) {
        if(QryRCAMSCombProductInfoField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", QryRCAMSCombProductInfoField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, QryRCAMSCombProductInfoField_CombProductID, QryRCAMSCombProductInfoField_CombProductID_len);        
        strncpy(self->data.CombProductID, QryRCAMSCombProductInfoField_CombProductID, sizeof(self->data.CombProductID) );
        QryRCAMSCombProductInfoField_CombProductID = NULL;
    }
            
    ///商品群代码
    // TThostFtdcProductIDType char[41]
    if( QryRCAMSCombProductInfoField_ProductGroupID != NULL ) {
        if(QryRCAMSCombProductInfoField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", QryRCAMSCombProductInfoField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, QryRCAMSCombProductInfoField_ProductGroupID, QryRCAMSCombProductInfoField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, QryRCAMSCombProductInfoField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        QryRCAMSCombProductInfoField_ProductGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryRCAMSCombProductInfoField_dealloc(PyCThostFtdcQryRCAMSCombProductInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRCAMSCombProductInfoField_repr(PyCThostFtdcQryRCAMSCombProductInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSCombProductInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///产品代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcQryRCAMSCombProductInfoField_get_ProductID(PyCThostFtdcQryRCAMSCombProductInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryRCAMSCombProductInfoField_set_ProductID(PyCThostFtdcQryRCAMSCombProductInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryRCAMSCombProductInfoField_get_CombProductID(PyCThostFtdcQryRCAMSCombProductInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///商品组代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryRCAMSCombProductInfoField_set_CombProductID(PyCThostFtdcQryRCAMSCombProductInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryRCAMSCombProductInfoField_get_ProductGroupID(PyCThostFtdcQryRCAMSCombProductInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///商品群代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryRCAMSCombProductInfoField_set_ProductGroupID(PyCThostFtdcQryRCAMSCombProductInfoField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryRCAMSCombProductInfoField_getset[] = {
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcQryRCAMSCombProductInfoField_get_ProductID, (setter)PyCThostFtdcQryRCAMSCombProductInfoField_set_ProductID, (char *)"ProductID", NULL},
    ///商品组代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcQryRCAMSCombProductInfoField_get_CombProductID, (setter)PyCThostFtdcQryRCAMSCombProductInfoField_set_CombProductID, (char *)"CombProductID", NULL},
    ///商品群代码 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcQryRCAMSCombProductInfoField_get_ProductGroupID, (setter)PyCThostFtdcQryRCAMSCombProductInfoField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRCAMSCombProductInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRCAMSCombProductInfoField",	/* tp_name */
	sizeof(PyCThostFtdcQryRCAMSCombProductInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRCAMSCombProductInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRCAMSCombProductInfoField_repr,   /* tp_repr */
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
	"CThostFtdcQryRCAMSCombProductInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRCAMSCombProductInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRCAMSCombProductInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRCAMSCombProductInfoField_new,       /* tp_new */
};

int PyCThostFtdcQryRCAMSCombProductInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRCAMSCombProductInfoField  */
	if (PyType_Ready(&PyCThostFtdcQryRCAMSCombProductInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRCAMSCombProductInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRCAMSCombProductInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSCombProductInfoField", (PyObject *)&PyCThostFtdcQryRCAMSCombProductInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSCombProductInfoField to module");
        Py_DECREF(&PyCThostFtdcQryRCAMSCombProductInfoFieldType);
		return -1;
    }

    return 0;
}
