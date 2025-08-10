
#include "PyCThostFtdcQryRCAMSIntraParameterField.h"

///RCAMS品种内风险对冲参数查询

static PyObject *PyCThostFtdcQryRCAMSIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRCAMSIntraParameterField *self = (PyCThostFtdcQryRCAMSIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryRCAMSIntraParameterField_init(PyCThostFtdcQryRCAMSIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CombProductID",  NULL};


    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    const char *QryRCAMSIntraParameterField_CombProductID = NULL;
    Py_ssize_t QryRCAMSIntraParameterField_CombProductID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

        , &QryRCAMSIntraParameterField_CombProductID, &QryRCAMSIntraParameterField_CombProductID_len 


    )) {
        return -1;
    }


    ///产品组合代码
    // TThostFtdcProductIDType char[41]
    if( QryRCAMSIntraParameterField_CombProductID != NULL ) {
        if(QryRCAMSIntraParameterField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
            PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", QryRCAMSIntraParameterField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
            return -1;
        }
        // memset(self->data.CombProductID, 0, sizeof(self->data.CombProductID));
        // memcpy(self->data.CombProductID, QryRCAMSIntraParameterField_CombProductID, QryRCAMSIntraParameterField_CombProductID_len);        
        strncpy(self->data.CombProductID, QryRCAMSIntraParameterField_CombProductID, sizeof(self->data.CombProductID) );
        QryRCAMSIntraParameterField_CombProductID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryRCAMSIntraParameterField_dealloc(PyCThostFtdcQryRCAMSIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRCAMSIntraParameterField_repr(PyCThostFtdcQryRCAMSIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

        ,"CombProductID", self->data.CombProductID//, (Py_ssize_t)sizeof(self->data.CombProductID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRCAMSIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///产品组合代码
// TThostFtdcProductIDType char[41]
static PyObject *PyCThostFtdcQryRCAMSIntraParameterField_get_CombProductID(PyCThostFtdcQryRCAMSIntraParameterField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombProductID, (Py_ssize_t)sizeof(self->data.CombProductID));
    return PyBytes_FromString(self->data.CombProductID);
}

///产品组合代码
// TThostFtdcProductIDType char[41]
static int PyCThostFtdcQryRCAMSIntraParameterField_set_CombProductID(PyCThostFtdcQryRCAMSIntraParameterField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryRCAMSIntraParameterField_getset[] = {
    ///产品组合代码 
    {(char *)"CombProductID", (getter)PyCThostFtdcQryRCAMSIntraParameterField_get_CombProductID, (setter)PyCThostFtdcQryRCAMSIntraParameterField_set_CombProductID, (char *)"CombProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRCAMSIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRCAMSIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQryRCAMSIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRCAMSIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRCAMSIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQryRCAMSIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRCAMSIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRCAMSIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRCAMSIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcQryRCAMSIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRCAMSIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcQryRCAMSIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRCAMSIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRCAMSIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRCAMSIntraParameterField", (PyObject *)&PyCThostFtdcQryRCAMSIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRCAMSIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcQryRCAMSIntraParameterFieldType);
		return -1;
    }

    return 0;
}
