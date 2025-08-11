
#include "PyCThostFtdcQryAuthForbiddenIPField.h"



static PyObject *PyCThostFtdcQryAuthForbiddenIPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryAuthForbiddenIPField *self = (PyCThostFtdcQryAuthForbiddenIPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryAuthForbiddenIPField_init(PyCThostFtdcQryAuthForbiddenIPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"IPAddress",  NULL};

	//TThostFtdcIPAddressType char[33]
	const char *pQryAuthForbiddenIPField_IPAddress = NULL;
	Py_ssize_t pQryAuthForbiddenIPField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#", (char **)kwlist
#endif

		, &pQryAuthForbiddenIPField_IPAddress, &pQryAuthForbiddenIPField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcIPAddressType char[33]
	if(pQryAuthForbiddenIPField_IPAddress != NULL) {
		if(pQryAuthForbiddenIPField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pQryAuthForbiddenIPField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pQryAuthForbiddenIPField_IPAddress, sizeof(self->data.IPAddress) );
		pQryAuthForbiddenIPField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryAuthForbiddenIPField_dealloc(PyCThostFtdcQryAuthForbiddenIPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryAuthForbiddenIPField_repr(PyCThostFtdcQryAuthForbiddenIPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s}"
#endif

		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAuthForbiddenIPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryAuthForbiddenIPField_get_IPAddress(PyCThostFtdcQryAuthForbiddenIPField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcQryAuthForbiddenIPField_set_IPAddress(PyCThostFtdcQryAuthForbiddenIPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
		PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryAuthForbiddenIPField_getset[] = {
	 {(char *)"IPAddress", (getter)PyCThostFtdcQryAuthForbiddenIPField_get_IPAddress, (setter)PyCThostFtdcQryAuthForbiddenIPField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryAuthForbiddenIPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryAuthForbiddenIPField",	/* tp_name */
	sizeof(PyCThostFtdcQryAuthForbiddenIPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryAuthForbiddenIPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryAuthForbiddenIPField_repr,   /* tp_repr */
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
	"CThostFtdcQryAuthForbiddenIPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryAuthForbiddenIPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryAuthForbiddenIPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryAuthForbiddenIPField_new,       /* tp_new */
};

int PyCThostFtdcQryAuthForbiddenIPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryAuthForbiddenIPField  */
	if (PyType_Ready(&PyCThostFtdcQryAuthForbiddenIPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryAuthForbiddenIPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryAuthForbiddenIPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryAuthForbiddenIPField", (PyObject *)&PyCThostFtdcQryAuthForbiddenIPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryAuthForbiddenIPField to module");
        Py_DECREF(&PyCThostFtdcQryAuthForbiddenIPFieldType);
		return -1;
    }

    return 0;
}
