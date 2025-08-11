
#include "PyCThostFtdcQryLoginForbiddenIPField.h"



static PyObject *PyCThostFtdcQryLoginForbiddenIPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryLoginForbiddenIPField *self = (PyCThostFtdcQryLoginForbiddenIPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryLoginForbiddenIPField_init(PyCThostFtdcQryLoginForbiddenIPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "IPAddress",  NULL};

	//TThostFtdcOldIPAddressType char[16]
	const char *pQryLoginForbiddenIPField_reserve1 = NULL;
	Py_ssize_t pQryLoginForbiddenIPField_reserve1_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pQryLoginForbiddenIPField_IPAddress = NULL;
	Py_ssize_t pQryLoginForbiddenIPField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryLoginForbiddenIPField_reserve1, &pQryLoginForbiddenIPField_reserve1_len
		, &pQryLoginForbiddenIPField_IPAddress, &pQryLoginForbiddenIPField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcOldIPAddressType char[16]
	if(pQryLoginForbiddenIPField_reserve1 != NULL) {
		if(pQryLoginForbiddenIPField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryLoginForbiddenIPField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryLoginForbiddenIPField_reserve1, sizeof(self->data.reserve1) );
		pQryLoginForbiddenIPField_reserve1 = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pQryLoginForbiddenIPField_IPAddress != NULL) {
		if(pQryLoginForbiddenIPField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pQryLoginForbiddenIPField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pQryLoginForbiddenIPField_IPAddress, sizeof(self->data.IPAddress) );
		pQryLoginForbiddenIPField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryLoginForbiddenIPField_dealloc(PyCThostFtdcQryLoginForbiddenIPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryLoginForbiddenIPField_repr(PyCThostFtdcQryLoginForbiddenIPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLoginForbiddenIPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryLoginForbiddenIPField_get_reserve1(PyCThostFtdcQryLoginForbiddenIPField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryLoginForbiddenIPField_get_IPAddress(PyCThostFtdcQryLoginForbiddenIPField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcQryLoginForbiddenIPField_set_reserve1(PyCThostFtdcQryLoginForbiddenIPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcQryLoginForbiddenIPField_set_IPAddress(PyCThostFtdcQryLoginForbiddenIPField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryLoginForbiddenIPField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcQryLoginForbiddenIPField_get_reserve1, (setter)PyCThostFtdcQryLoginForbiddenIPField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcQryLoginForbiddenIPField_get_IPAddress, (setter)PyCThostFtdcQryLoginForbiddenIPField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryLoginForbiddenIPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryLoginForbiddenIPField",	/* tp_name */
	sizeof(PyCThostFtdcQryLoginForbiddenIPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryLoginForbiddenIPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryLoginForbiddenIPField_repr,   /* tp_repr */
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
	"CThostFtdcQryLoginForbiddenIPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryLoginForbiddenIPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryLoginForbiddenIPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryLoginForbiddenIPField_new,       /* tp_new */
};

int PyCThostFtdcQryLoginForbiddenIPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryLoginForbiddenIPField  */
	if (PyType_Ready(&PyCThostFtdcQryLoginForbiddenIPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryLoginForbiddenIPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryLoginForbiddenIPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryLoginForbiddenIPField", (PyObject *)&PyCThostFtdcQryLoginForbiddenIPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryLoginForbiddenIPField to module");
        Py_DECREF(&PyCThostFtdcQryLoginForbiddenIPFieldType);
		return -1;
    }

    return 0;
}
