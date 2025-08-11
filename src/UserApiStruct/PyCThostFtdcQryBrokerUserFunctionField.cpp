
#include "PyCThostFtdcQryBrokerUserFunctionField.h"



static PyObject *PyCThostFtdcQryBrokerUserFunctionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBrokerUserFunctionField *self = (PyCThostFtdcQryBrokerUserFunctionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryBrokerUserFunctionField_init(PyCThostFtdcQryBrokerUserFunctionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryBrokerUserFunctionField_BrokerID = NULL;
	Py_ssize_t pQryBrokerUserFunctionField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQryBrokerUserFunctionField_UserID = NULL;
	Py_ssize_t pQryBrokerUserFunctionField_UserID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryBrokerUserFunctionField_BrokerID, &pQryBrokerUserFunctionField_BrokerID_len
		, &pQryBrokerUserFunctionField_UserID, &pQryBrokerUserFunctionField_UserID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryBrokerUserFunctionField_BrokerID != NULL) {
		if(pQryBrokerUserFunctionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryBrokerUserFunctionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryBrokerUserFunctionField_BrokerID, sizeof(self->data.BrokerID) );
		pQryBrokerUserFunctionField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQryBrokerUserFunctionField_UserID != NULL) {
		if(pQryBrokerUserFunctionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQryBrokerUserFunctionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQryBrokerUserFunctionField_UserID, sizeof(self->data.UserID) );
		pQryBrokerUserFunctionField_UserID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryBrokerUserFunctionField_dealloc(PyCThostFtdcQryBrokerUserFunctionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBrokerUserFunctionField_repr(PyCThostFtdcQryBrokerUserFunctionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserFunctionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryBrokerUserFunctionField_get_BrokerID(PyCThostFtdcQryBrokerUserFunctionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryBrokerUserFunctionField_get_UserID(PyCThostFtdcQryBrokerUserFunctionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static int PyCThostFtdcQryBrokerUserFunctionField_set_BrokerID(PyCThostFtdcQryBrokerUserFunctionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryBrokerUserFunctionField_set_UserID(PyCThostFtdcQryBrokerUserFunctionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryBrokerUserFunctionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryBrokerUserFunctionField_get_BrokerID, (setter)PyCThostFtdcQryBrokerUserFunctionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQryBrokerUserFunctionField_get_UserID, (setter)PyCThostFtdcQryBrokerUserFunctionField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBrokerUserFunctionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBrokerUserFunctionField",	/* tp_name */
	sizeof(PyCThostFtdcQryBrokerUserFunctionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBrokerUserFunctionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBrokerUserFunctionField_repr,   /* tp_repr */
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
	"CThostFtdcQryBrokerUserFunctionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBrokerUserFunctionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBrokerUserFunctionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBrokerUserFunctionField_new,       /* tp_new */
};

int PyCThostFtdcQryBrokerUserFunctionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBrokerUserFunctionField  */
	if (PyType_Ready(&PyCThostFtdcQryBrokerUserFunctionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBrokerUserFunctionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBrokerUserFunctionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBrokerUserFunctionField", (PyObject *)&PyCThostFtdcQryBrokerUserFunctionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerUserFunctionField to module");
        Py_DECREF(&PyCThostFtdcQryBrokerUserFunctionFieldType);
		return -1;
    }

    return 0;
}
