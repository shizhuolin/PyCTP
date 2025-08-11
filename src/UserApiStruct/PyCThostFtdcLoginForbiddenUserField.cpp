
#include "PyCThostFtdcLoginForbiddenUserField.h"



static PyObject *PyCThostFtdcLoginForbiddenUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLoginForbiddenUserField *self = (PyCThostFtdcLoginForbiddenUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcLoginForbiddenUserField_init(PyCThostFtdcLoginForbiddenUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "reserve1", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pLoginForbiddenUserField_BrokerID = NULL;
	Py_ssize_t pLoginForbiddenUserField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pLoginForbiddenUserField_UserID = NULL;
	Py_ssize_t pLoginForbiddenUserField_UserID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pLoginForbiddenUserField_reserve1 = NULL;
	Py_ssize_t pLoginForbiddenUserField_reserve1_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pLoginForbiddenUserField_IPAddress = NULL;
	Py_ssize_t pLoginForbiddenUserField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pLoginForbiddenUserField_BrokerID, &pLoginForbiddenUserField_BrokerID_len
		, &pLoginForbiddenUserField_UserID, &pLoginForbiddenUserField_UserID_len
		, &pLoginForbiddenUserField_reserve1, &pLoginForbiddenUserField_reserve1_len
		, &pLoginForbiddenUserField_IPAddress, &pLoginForbiddenUserField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pLoginForbiddenUserField_BrokerID != NULL) {
		if(pLoginForbiddenUserField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pLoginForbiddenUserField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pLoginForbiddenUserField_BrokerID, sizeof(self->data.BrokerID) );
		pLoginForbiddenUserField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pLoginForbiddenUserField_UserID != NULL) {
		if(pLoginForbiddenUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pLoginForbiddenUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pLoginForbiddenUserField_UserID, sizeof(self->data.UserID) );
		pLoginForbiddenUserField_UserID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pLoginForbiddenUserField_reserve1 != NULL) {
		if(pLoginForbiddenUserField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pLoginForbiddenUserField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pLoginForbiddenUserField_reserve1, sizeof(self->data.reserve1) );
		pLoginForbiddenUserField_reserve1 = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pLoginForbiddenUserField_IPAddress != NULL) {
		if(pLoginForbiddenUserField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pLoginForbiddenUserField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pLoginForbiddenUserField_IPAddress, sizeof(self->data.IPAddress) );
		pLoginForbiddenUserField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcLoginForbiddenUserField_dealloc(PyCThostFtdcLoginForbiddenUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLoginForbiddenUserField_repr(PyCThostFtdcLoginForbiddenUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "reserve1", self->data.reserve1 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginForbiddenUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcLoginForbiddenUserField_get_BrokerID(PyCThostFtdcLoginForbiddenUserField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcLoginForbiddenUserField_get_UserID(PyCThostFtdcLoginForbiddenUserField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcLoginForbiddenUserField_get_reserve1(PyCThostFtdcLoginForbiddenUserField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcLoginForbiddenUserField_get_IPAddress(PyCThostFtdcLoginForbiddenUserField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcLoginForbiddenUserField_set_BrokerID(PyCThostFtdcLoginForbiddenUserField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginForbiddenUserField_set_UserID(PyCThostFtdcLoginForbiddenUserField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginForbiddenUserField_set_reserve1(PyCThostFtdcLoginForbiddenUserField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginForbiddenUserField_set_IPAddress(PyCThostFtdcLoginForbiddenUserField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcLoginForbiddenUserField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcLoginForbiddenUserField_get_BrokerID, (setter)PyCThostFtdcLoginForbiddenUserField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcLoginForbiddenUserField_get_UserID, (setter)PyCThostFtdcLoginForbiddenUserField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcLoginForbiddenUserField_get_reserve1, (setter)PyCThostFtdcLoginForbiddenUserField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcLoginForbiddenUserField_get_IPAddress, (setter)PyCThostFtdcLoginForbiddenUserField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLoginForbiddenUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLoginForbiddenUserField",	/* tp_name */
	sizeof(PyCThostFtdcLoginForbiddenUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLoginForbiddenUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLoginForbiddenUserField_repr,   /* tp_repr */
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
	"CThostFtdcLoginForbiddenUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLoginForbiddenUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLoginForbiddenUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLoginForbiddenUserField_new,       /* tp_new */
};

int PyCThostFtdcLoginForbiddenUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLoginForbiddenUserField  */
	if (PyType_Ready(&PyCThostFtdcLoginForbiddenUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLoginForbiddenUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLoginForbiddenUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLoginForbiddenUserField", (PyObject *)&PyCThostFtdcLoginForbiddenUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoginForbiddenUserField to module");
        Py_DECREF(&PyCThostFtdcLoginForbiddenUserFieldType);
		return -1;
    }

    return 0;
}
