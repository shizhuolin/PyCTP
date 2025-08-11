
#include "PyCThostFtdcQryBrokerUserEventField.h"



static PyObject *PyCThostFtdcQryBrokerUserEventField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBrokerUserEventField *self = (PyCThostFtdcQryBrokerUserEventField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryBrokerUserEventField_init(PyCThostFtdcQryBrokerUserEventField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserEventType",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryBrokerUserEventField_BrokerID = NULL;
	Py_ssize_t pQryBrokerUserEventField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pQryBrokerUserEventField_UserID = NULL;
	Py_ssize_t pQryBrokerUserEventField_UserID_len = 0;

	//TThostFtdcUserEventTypeType char
	char pQryBrokerUserEventField_UserEventType = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#c", (char **)kwlist
#endif

		, &pQryBrokerUserEventField_BrokerID, &pQryBrokerUserEventField_BrokerID_len
		, &pQryBrokerUserEventField_UserID, &pQryBrokerUserEventField_UserID_len
		, &pQryBrokerUserEventField_UserEventType


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryBrokerUserEventField_BrokerID != NULL) {
		if(pQryBrokerUserEventField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryBrokerUserEventField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryBrokerUserEventField_BrokerID, sizeof(self->data.BrokerID) );
		pQryBrokerUserEventField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pQryBrokerUserEventField_UserID != NULL) {
		if(pQryBrokerUserEventField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pQryBrokerUserEventField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pQryBrokerUserEventField_UserID, sizeof(self->data.UserID) );
		pQryBrokerUserEventField_UserID = NULL;
	}

	//TThostFtdcUserEventTypeType char
	self->data.UserEventType = pQryBrokerUserEventField_UserEventType;



    return 0;
}

static void PyCThostFtdcQryBrokerUserEventField_dealloc(PyCThostFtdcQryBrokerUserEventField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBrokerUserEventField_repr(PyCThostFtdcQryBrokerUserEventField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "UserEventType", self->data.UserEventType


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerUserEventField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryBrokerUserEventField_get_BrokerID(PyCThostFtdcQryBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryBrokerUserEventField_get_UserID(PyCThostFtdcQryBrokerUserEventField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcQryBrokerUserEventField_get_UserEventType(PyCThostFtdcQryBrokerUserEventField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.UserEventType), 1);
}

static int PyCThostFtdcQryBrokerUserEventField_set_BrokerID(PyCThostFtdcQryBrokerUserEventField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryBrokerUserEventField_set_UserID(PyCThostFtdcQryBrokerUserEventField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryBrokerUserEventField_set_UserEventType(PyCThostFtdcQryBrokerUserEventField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserEventType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserEventType)) {
		PyErr_SetString(PyExc_ValueError, "UserEventType must be less than 1 bytes");
		return -1;
	}
	self->data.UserEventType = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcQryBrokerUserEventField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryBrokerUserEventField_get_BrokerID, (setter)PyCThostFtdcQryBrokerUserEventField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcQryBrokerUserEventField_get_UserID, (setter)PyCThostFtdcQryBrokerUserEventField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"UserEventType", (getter)PyCThostFtdcQryBrokerUserEventField_get_UserEventType, (setter)PyCThostFtdcQryBrokerUserEventField_set_UserEventType, (char *)"UserEventType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBrokerUserEventFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBrokerUserEventField",	/* tp_name */
	sizeof(PyCThostFtdcQryBrokerUserEventField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBrokerUserEventField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBrokerUserEventField_repr,   /* tp_repr */
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
	"CThostFtdcQryBrokerUserEventField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBrokerUserEventField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBrokerUserEventField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBrokerUserEventField_new,       /* tp_new */
};

int PyCThostFtdcQryBrokerUserEventFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBrokerUserEventField  */
	if (PyType_Ready(&PyCThostFtdcQryBrokerUserEventFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBrokerUserEventField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBrokerUserEventFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBrokerUserEventField", (PyObject *)&PyCThostFtdcQryBrokerUserEventFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerUserEventField to module");
        Py_DECREF(&PyCThostFtdcQryBrokerUserEventFieldType);
		return -1;
    }

    return 0;
}
