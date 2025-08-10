
#include "PyCThostFtdcQrySPMMProductParamField.h"

///SPMM产品参数查询

static PyObject *PyCThostFtdcQrySPMMProductParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPMMProductParamField *self = (PyCThostFtdcQrySPMMProductParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPMMProductParamField_init(PyCThostFtdcQrySPMMProductParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ProductID",  NULL};


    ///产品代码
    // TThostFtdcSPMMProductIDType char[41]
    const char *QrySPMMProductParamField_ProductID = NULL;
    Py_ssize_t QrySPMMProductParamField_ProductID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QrySPMMProductParamField_ProductID, &QrySPMMProductParamField_ProductID_len 


    )) {
        return -1;
    }


    ///产品代码
    // TThostFtdcSPMMProductIDType char[41]
    if( QrySPMMProductParamField_ProductID != NULL ) {
        if(QrySPMMProductParamField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", QrySPMMProductParamField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, QrySPMMProductParamField_ProductID, QrySPMMProductParamField_ProductID_len);        
        strncpy(self->data.ProductID, QrySPMMProductParamField_ProductID, sizeof(self->data.ProductID) );
        QrySPMMProductParamField_ProductID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySPMMProductParamField_dealloc(PyCThostFtdcQrySPMMProductParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPMMProductParamField_repr(PyCThostFtdcQrySPMMProductParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPMMProductParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///产品代码
// TThostFtdcSPMMProductIDType char[41]
static PyObject *PyCThostFtdcQrySPMMProductParamField_get_ProductID(PyCThostFtdcQrySPMMProductParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcSPMMProductIDType char[41]
static int PyCThostFtdcQrySPMMProductParamField_set_ProductID(PyCThostFtdcQrySPMMProductParamField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySPMMProductParamField_getset[] = {
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcQrySPMMProductParamField_get_ProductID, (setter)PyCThostFtdcQrySPMMProductParamField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPMMProductParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPMMProductParamField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPMMProductParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPMMProductParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPMMProductParamField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPMMProductParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPMMProductParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPMMProductParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPMMProductParamField_new,       /* tp_new */
};

int PyCThostFtdcQrySPMMProductParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPMMProductParamField  */
	if (PyType_Ready(&PyCThostFtdcQrySPMMProductParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPMMProductParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPMMProductParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPMMProductParamField", (PyObject *)&PyCThostFtdcQrySPMMProductParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPMMProductParamField to module");
        Py_DECREF(&PyCThostFtdcQrySPMMProductParamFieldType);
		return -1;
    }

    return 0;
}
