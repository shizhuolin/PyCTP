
#include "PyCThostFtdcQryBrokerUserField.h"



static PyObject *PyCThostFtdcQryBrokerUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBrokerUserField *self = (PyCThostFtdcQryBrokerUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryBrokerUserField_init(PyCThostFtdcQryBrokerUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryBrokerUserField_BrokerID = NULL;
	Py_ssize_t pQryBrokerUserField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQryBrokerUserField_UserID = NULL;
	Py_ssize_t pQryBrokerUserField_UserID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryBrokerUserField_BrokerID, &pQryBrokerUserField_BrokerID_len
		, &pQryBrokerUserField_UserID, &pQryBrokerUserField_UserID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryBrokerUserField_BrokerID != NULL) {
		if(pQryBrokerUserField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryBrokerUserField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryBrokerUserField_BrokerID, sizeof(self->data.BrokerID) );
		pQryBrokerUserField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQryBrokerUserField_UserID != NULL) {
		if(pQryBrokerUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQryBrokerUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQryBrokerUserField_UserID, sizeof(self->data.UserID) );
		pQryBrokerUserField_UserID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryBrokerUserField_dealloc(PyCThostFtdcQryBrokerUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBrokerUserField_repr(PyCThostFtdcQryBrokerUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryBrokerUserField_get_BrokerID(PyCThostFtdcQryBrokerUserField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryBrokerUserField_get_UserID(PyCThostFtdcQryBrokerUserField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static int PyCThostFtdcQryBrokerUserField_set_BrokerID(PyCThostFtdcQryBrokerUserField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
		PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
	return 0;
}

static int PyCThostFtdcQryBrokerUserField_set_UserID(PyCThostFtdcQryBrokerUserField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
		PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryBrokerUserField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryBrokerUserField_get_BrokerID, (setter)PyCThostFtdcQryBrokerUserField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQryBrokerUserField_get_UserID, (setter)PyCThostFtdcQryBrokerUserField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBrokerUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBrokerUserField",	/* tp_name */
	sizeof(PyCThostFtdcQryBrokerUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBrokerUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBrokerUserField_repr,   /* tp_repr */
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
	"CThostFtdcQryBrokerUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBrokerUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBrokerUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBrokerUserField_new,       /* tp_new */
};

int PyCThostFtdcQryBrokerUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBrokerUserField  */
	if (PyType_Ready(&PyCThostFtdcQryBrokerUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBrokerUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBrokerUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBrokerUserField", (PyObject *)&PyCThostFtdcQryBrokerUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerUserField to module");
        Py_DECREF(&PyCThostFtdcQryBrokerUserFieldType);
		return -1;
    }

    return 0;
}
