
#include "PyCThostFtdcQryRCAMSShortOptAdjustParamField.h"

///RCAMS空头期权风险调整参数查询

static PyObject *PyCThostFtdcQryRCAMSShortOptAdjustParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRCAMSShortOptAdjustParamField *self = (PyCThostFtdcQryRCAMSShortOptAdjustParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryRCAMSShortOptAdjustParamField_init(PyCThostFtdcQryRCAMSShortOptAdjustParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CombProductID",  NULL};


    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    const char *QryRCAMSShortOptAdjustParamField_CombProductID = NULL;
    Py_ssize_t QryRCAMSShortOptAdjustParamField_CombProductID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QryRCAMSShortOptAdjustParamField_CombProductID, &QryRCAMSShortOptAdjustParamField_CombProductID_len 


    )) {
        return -1;
    }


    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    if( QryRCAMSShortOptAdjustParamField_CombProductID != NULL ) {
        if(QryRCAMSShortOptAdjustParamField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", QryRCAMSShortOptAdjustParamField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, QryRCAMSShortOptAdjustParamField_CombProductID, QryRCAMSShortOptAdjustParamField_CombProductID_len);        
        strncpy(self->data.CombProductID, QryRCAMSShortOptAdjustParamField_CombProductID, sizeof(self->data.CombProductID) );
        QryRCAMSShortOptAdjustParamField_CombProductID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryRCAMSShortOptAdjustParamField_dealloc(PyCThostFtdcQryRCAMSShortOptAdjustParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRCAMSShortOptAdjustParamField_repr(PyCThostFtdcQryRCAMSShortOptAdjustParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSShortOptAdjustParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///产品组合代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcQryRCAMSShortOptAdjustParamField_get_CombProductID(PyCThostFtdcQryRCAMSShortOptAdjustParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///产品组合代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryRCAMSShortOptAdjustParamField_set_CombProductID(PyCThostFtdcQryRCAMSShortOptAdjustParamField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryRCAMSShortOptAdjustParamField_getset[] = {
    ///产品组合代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcQryRCAMSShortOptAdjustParamField_get_CombProductID, (setter)PyCThostFtdcQryRCAMSShortOptAdjustParamField_set_CombProductID, (char *)"CombProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRCAMSShortOptAdjustParamField",	/* tp_name */
	sizeof(PyCThostFtdcQryRCAMSShortOptAdjustParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRCAMSShortOptAdjustParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRCAMSShortOptAdjustParamField_repr,   /* tp_repr */
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
	"CThostFtdcQryRCAMSShortOptAdjustParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRCAMSShortOptAdjustParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRCAMSShortOptAdjustParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRCAMSShortOptAdjustParamField_new,       /* tp_new */
};

int PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRCAMSShortOptAdjustParamField  */
	if (PyType_Ready(&PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRCAMSShortOptAdjustParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSShortOptAdjustParamField", (PyObject *)&PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSShortOptAdjustParamField to module");
        Py_DECREF(&PyCThostFtdcQryRCAMSShortOptAdjustParamFieldType);
		return -1;
    }

    return 0;
}
