
#include "PyCThostFtdcAuthUserIDField.h"



static PyObject *PyCThostFtdcAuthUserIDField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAuthUserIDField *self = (PyCThostFtdcAuthUserIDField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcAuthUserIDField_init(PyCThostFtdcAuthUserIDField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AppID", "UserID", "AuthType",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pAuthUserIDField_BrokerID = NULL;
	Py_ssize_t pAuthUserIDField_BrokerID_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pAuthUserIDField_AppID = NULL;
	Py_ssize_t pAuthUserIDField_AppID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pAuthUserIDField_UserID = NULL;
	Py_ssize_t pAuthUserIDField_UserID_len = 0;

	//TThostFtdcAuthTypeType char
	char pAuthUserIDField_AuthType = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#c", (char **)kwlist
#endif

		, &pAuthUserIDField_BrokerID, &pAuthUserIDField_BrokerID_len
		, &pAuthUserIDField_AppID, &pAuthUserIDField_AppID_len
		, &pAuthUserIDField_UserID, &pAuthUserIDField_UserID_len
		, &pAuthUserIDField_AuthType


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pAuthUserIDField_BrokerID != NULL) {
		if(pAuthUserIDField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pAuthUserIDField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pAuthUserIDField_BrokerID, sizeof(self->data.BrokerID) );
		pAuthUserIDField_BrokerID = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pAuthUserIDField_AppID != NULL) {
		if(pAuthUserIDField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
			PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", pAuthUserIDField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
			return -1;
		}
		strncpy(self->data.AppID, pAuthUserIDField_AppID, sizeof(self->data.AppID) );
		pAuthUserIDField_AppID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pAuthUserIDField_UserID != NULL) {
		if(pAuthUserIDField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pAuthUserIDField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pAuthUserIDField_UserID, sizeof(self->data.UserID) );
		pAuthUserIDField_UserID = NULL;
	}

	//TThostFtdcAuthTypeType char
	self->data.AuthType = pAuthUserIDField_AuthType;



    return 0;
}

static void PyCThostFtdcAuthUserIDField_dealloc(PyCThostFtdcAuthUserIDField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAuthUserIDField_repr(PyCThostFtdcAuthUserIDField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AppID", self->data.AppID 
		, "UserID", self->data.UserID 
		, "AuthType", self->data.AuthType


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthUserIDField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcAuthUserIDField_get_BrokerID(PyCThostFtdcAuthUserIDField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcAuthUserIDField_get_AppID(PyCThostFtdcAuthUserIDField *self, void *closure) {
	return PyBytes_FromString(self->data.AppID);
}

static PyObject *PyCThostFtdcAuthUserIDField_get_UserID(PyCThostFtdcAuthUserIDField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcAuthUserIDField_get_AuthType(PyCThostFtdcAuthUserIDField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AuthType), 1);
}

static int PyCThostFtdcAuthUserIDField_set_BrokerID(PyCThostFtdcAuthUserIDField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAuthUserIDField_set_AppID(PyCThostFtdcAuthUserIDField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AppID)) {
		PyErr_SetString(PyExc_ValueError, "AppID must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.AppID, buf, sizeof(self->data.AppID));
	return 0;
}

static int PyCThostFtdcAuthUserIDField_set_UserID(PyCThostFtdcAuthUserIDField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAuthUserIDField_set_AuthType(PyCThostFtdcAuthUserIDField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AuthType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AuthType)) {
		PyErr_SetString(PyExc_ValueError, "AuthType must be less than 1 bytes");
		return -1;
	}
	self->data.AuthType = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcAuthUserIDField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcAuthUserIDField_get_BrokerID, (setter)PyCThostFtdcAuthUserIDField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AppID", (getter)PyCThostFtdcAuthUserIDField_get_AppID, (setter)PyCThostFtdcAuthUserIDField_set_AppID, (char *)"AppID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcAuthUserIDField_get_UserID, (setter)PyCThostFtdcAuthUserIDField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"AuthType", (getter)PyCThostFtdcAuthUserIDField_get_AuthType, (setter)PyCThostFtdcAuthUserIDField_set_AuthType, (char *)"AuthType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAuthUserIDFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAuthUserIDField",	/* tp_name */
	sizeof(PyCThostFtdcAuthUserIDField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAuthUserIDField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAuthUserIDField_repr,   /* tp_repr */
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
	"CThostFtdcAuthUserIDField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAuthUserIDField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAuthUserIDField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAuthUserIDField_new,       /* tp_new */
};

int PyCThostFtdcAuthUserIDFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAuthUserIDField  */
	if (PyType_Ready(&PyCThostFtdcAuthUserIDFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAuthUserIDField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAuthUserIDFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAuthUserIDField", (PyObject *)&PyCThostFtdcAuthUserIDFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthUserIDField to module");
        Py_DECREF(&PyCThostFtdcAuthUserIDFieldType);
		return -1;
    }

    return 0;
}
