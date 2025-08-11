
#include "PyCThostFtdcUserIPField.h"



static PyObject *PyCThostFtdcUserIPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserIPField *self = (PyCThostFtdcUserIPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcUserIPField_init(PyCThostFtdcUserIPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "reserve1", "reserve2", "MacAddress", "IPAddress", "IPMask",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pUserIPField_BrokerID = NULL;
	Py_ssize_t pUserIPField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pUserIPField_UserID = NULL;
	Py_ssize_t pUserIPField_UserID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pUserIPField_reserve1 = NULL;
	Py_ssize_t pUserIPField_reserve1_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pUserIPField_reserve2 = NULL;
	Py_ssize_t pUserIPField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pUserIPField_MacAddress = NULL;
	Py_ssize_t pUserIPField_MacAddress_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pUserIPField_IPAddress = NULL;
	Py_ssize_t pUserIPField_IPAddress_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pUserIPField_IPMask = NULL;
	Py_ssize_t pUserIPField_IPMask_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pUserIPField_BrokerID, &pUserIPField_BrokerID_len
		, &pUserIPField_UserID, &pUserIPField_UserID_len
		, &pUserIPField_reserve1, &pUserIPField_reserve1_len
		, &pUserIPField_reserve2, &pUserIPField_reserve2_len
		, &pUserIPField_MacAddress, &pUserIPField_MacAddress_len
		, &pUserIPField_IPAddress, &pUserIPField_IPAddress_len
		, &pUserIPField_IPMask, &pUserIPField_IPMask_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pUserIPField_BrokerID != NULL) {
		if(pUserIPField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pUserIPField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pUserIPField_BrokerID, sizeof(self->data.BrokerID) );
		pUserIPField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pUserIPField_UserID != NULL) {
		if(pUserIPField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pUserIPField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pUserIPField_UserID, sizeof(self->data.UserID) );
		pUserIPField_UserID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pUserIPField_reserve1 != NULL) {
		if(pUserIPField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pUserIPField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pUserIPField_reserve1, sizeof(self->data.reserve1) );
		pUserIPField_reserve1 = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pUserIPField_reserve2 != NULL) {
		if(pUserIPField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pUserIPField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pUserIPField_reserve2, sizeof(self->data.reserve2) );
		pUserIPField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pUserIPField_MacAddress != NULL) {
		if(pUserIPField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pUserIPField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pUserIPField_MacAddress, sizeof(self->data.MacAddress) );
		pUserIPField_MacAddress = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pUserIPField_IPAddress != NULL) {
		if(pUserIPField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pUserIPField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pUserIPField_IPAddress, sizeof(self->data.IPAddress) );
		pUserIPField_IPAddress = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pUserIPField_IPMask != NULL) {
		if(pUserIPField_IPMask_len > (Py_ssize_t)sizeof(self->data.IPMask)) {
			PyErr_Format(PyExc_ValueError, "IPMask too long: length=%zd (max allowed is %zd)", pUserIPField_IPMask_len, (Py_ssize_t)sizeof(self->data.IPMask));
			return -1;
		}
		strncpy(self->data.IPMask, pUserIPField_IPMask, sizeof(self->data.IPMask) );
		pUserIPField_IPMask = NULL;
	}



    return 0;
}

static void PyCThostFtdcUserIPField_dealloc(PyCThostFtdcUserIPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserIPField_repr(PyCThostFtdcUserIPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "reserve1", self->data.reserve1 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "IPAddress", self->data.IPAddress 
		, "IPMask", self->data.IPMask 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserIPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcUserIPField_get_BrokerID(PyCThostFtdcUserIPField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcUserIPField_get_UserID(PyCThostFtdcUserIPField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcUserIPField_get_reserve1(PyCThostFtdcUserIPField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcUserIPField_get_reserve2(PyCThostFtdcUserIPField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcUserIPField_get_MacAddress(PyCThostFtdcUserIPField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcUserIPField_get_IPAddress(PyCThostFtdcUserIPField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcUserIPField_get_IPMask(PyCThostFtdcUserIPField *self, void *closure) {
	return PyBytes_FromString(self->data.IPMask);
}

static int PyCThostFtdcUserIPField_set_BrokerID(PyCThostFtdcUserIPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserIPField_set_UserID(PyCThostFtdcUserIPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserIPField_set_reserve1(PyCThostFtdcUserIPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserIPField_set_reserve2(PyCThostFtdcUserIPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcUserIPField_set_MacAddress(PyCThostFtdcUserIPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
		PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
	return 0;
}

static int PyCThostFtdcUserIPField_set_IPAddress(PyCThostFtdcUserIPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserIPField_set_IPMask(PyCThostFtdcUserIPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IPMask Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IPMask)) {
		PyErr_SetString(PyExc_ValueError, "IPMask must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.IPMask, buf, sizeof(self->data.IPMask));
	return 0;
}



static PyGetSetDef PyCThostFtdcUserIPField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcUserIPField_get_BrokerID, (setter)PyCThostFtdcUserIPField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcUserIPField_get_UserID, (setter)PyCThostFtdcUserIPField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcUserIPField_get_reserve1, (setter)PyCThostFtdcUserIPField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcUserIPField_get_reserve2, (setter)PyCThostFtdcUserIPField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcUserIPField_get_MacAddress, (setter)PyCThostFtdcUserIPField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcUserIPField_get_IPAddress, (setter)PyCThostFtdcUserIPField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"IPMask", (getter)PyCThostFtdcUserIPField_get_IPMask, (setter)PyCThostFtdcUserIPField_set_IPMask, (char *)"IPMask", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserIPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserIPField",	/* tp_name */
	sizeof(PyCThostFtdcUserIPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserIPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserIPField_repr,   /* tp_repr */
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
	"CThostFtdcUserIPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserIPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserIPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserIPField_new,       /* tp_new */
};

int PyCThostFtdcUserIPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserIPField  */
	if (PyType_Ready(&PyCThostFtdcUserIPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserIPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserIPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserIPField", (PyObject *)&PyCThostFtdcUserIPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserIPField to module");
        Py_DECREF(&PyCThostFtdcUserIPFieldType);
		return -1;
    }

    return 0;
}
