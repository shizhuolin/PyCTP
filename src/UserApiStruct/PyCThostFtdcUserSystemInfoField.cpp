
#include "PyCThostFtdcUserSystemInfoField.h"



static PyObject *PyCThostFtdcUserSystemInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserSystemInfoField *self = (PyCThostFtdcUserSystemInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcUserSystemInfoField_init(PyCThostFtdcUserSystemInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "ClientSystemInfoLen", "ClientSystemInfo", "reserve1", "ClientIPPort", "ClientLoginTime", "ClientAppID", "ClientPublicIP", "ClientLoginRemark",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pUserSystemInfoField_BrokerID = NULL;
	Py_ssize_t pUserSystemInfoField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pUserSystemInfoField_UserID = NULL;
	Py_ssize_t pUserSystemInfoField_UserID_len = 0;

	//TThostFtdcSystemInfoLenType int
	int pUserSystemInfoField_ClientSystemInfoLen = 0;

	//TThostFtdcClientSystemInfoType char[273]
	const char *pUserSystemInfoField_ClientSystemInfo = NULL;
	Py_ssize_t pUserSystemInfoField_ClientSystemInfo_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pUserSystemInfoField_reserve1 = NULL;
	Py_ssize_t pUserSystemInfoField_reserve1_len = 0;

	//TThostFtdcIPPortType int
	int pUserSystemInfoField_ClientIPPort = 0;

	//TThostFtdcTimeType char[9]
	const char *pUserSystemInfoField_ClientLoginTime = NULL;
	Py_ssize_t pUserSystemInfoField_ClientLoginTime_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pUserSystemInfoField_ClientAppID = NULL;
	Py_ssize_t pUserSystemInfoField_ClientAppID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pUserSystemInfoField_ClientPublicIP = NULL;
	Py_ssize_t pUserSystemInfoField_ClientPublicIP_len = 0;

	//TThostFtdcClientLoginRemarkType char[151]
	const char *pUserSystemInfoField_ClientLoginRemark = NULL;
	Py_ssize_t pUserSystemInfoField_ClientLoginRemark_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#y#iy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#s#is#s#s#s#", (char **)kwlist
#endif

		, &pUserSystemInfoField_BrokerID, &pUserSystemInfoField_BrokerID_len
		, &pUserSystemInfoField_UserID, &pUserSystemInfoField_UserID_len
		, &pUserSystemInfoField_ClientSystemInfoLen
		, &pUserSystemInfoField_ClientSystemInfo, &pUserSystemInfoField_ClientSystemInfo_len
		, &pUserSystemInfoField_reserve1, &pUserSystemInfoField_reserve1_len
		, &pUserSystemInfoField_ClientIPPort
		, &pUserSystemInfoField_ClientLoginTime, &pUserSystemInfoField_ClientLoginTime_len
		, &pUserSystemInfoField_ClientAppID, &pUserSystemInfoField_ClientAppID_len
		, &pUserSystemInfoField_ClientPublicIP, &pUserSystemInfoField_ClientPublicIP_len
		, &pUserSystemInfoField_ClientLoginRemark, &pUserSystemInfoField_ClientLoginRemark_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pUserSystemInfoField_BrokerID != NULL) {
		if(pUserSystemInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pUserSystemInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pUserSystemInfoField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pUserSystemInfoField_UserID != NULL) {
		if(pUserSystemInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pUserSystemInfoField_UserID, sizeof(self->data.UserID) );
		pUserSystemInfoField_UserID = NULL;
	}

	//TThostFtdcSystemInfoLenType int
	self->data.ClientSystemInfoLen = pUserSystemInfoField_ClientSystemInfoLen;

	//TThostFtdcClientSystemInfoType char[273]
	if(pUserSystemInfoField_ClientSystemInfo != NULL) {
		if(pUserSystemInfoField_ClientSystemInfo_len > (Py_ssize_t)sizeof(self->data.ClientSystemInfo)) {
			PyErr_Format(PyExc_ValueError, "ClientSystemInfo too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_ClientSystemInfo_len, (Py_ssize_t)sizeof(self->data.ClientSystemInfo));
			return -1;
		}
		strncpy(self->data.ClientSystemInfo, pUserSystemInfoField_ClientSystemInfo, sizeof(self->data.ClientSystemInfo) );
		pUserSystemInfoField_ClientSystemInfo = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pUserSystemInfoField_reserve1 != NULL) {
		if(pUserSystemInfoField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pUserSystemInfoField_reserve1, sizeof(self->data.reserve1) );
		pUserSystemInfoField_reserve1 = NULL;
	}

	//TThostFtdcIPPortType int
	self->data.ClientIPPort = pUserSystemInfoField_ClientIPPort;

	//TThostFtdcTimeType char[9]
	if(pUserSystemInfoField_ClientLoginTime != NULL) {
		if(pUserSystemInfoField_ClientLoginTime_len > (Py_ssize_t)sizeof(self->data.ClientLoginTime)) {
			PyErr_Format(PyExc_ValueError, "ClientLoginTime too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_ClientLoginTime_len, (Py_ssize_t)sizeof(self->data.ClientLoginTime));
			return -1;
		}
		strncpy(self->data.ClientLoginTime, pUserSystemInfoField_ClientLoginTime, sizeof(self->data.ClientLoginTime) );
		pUserSystemInfoField_ClientLoginTime = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pUserSystemInfoField_ClientAppID != NULL) {
		if(pUserSystemInfoField_ClientAppID_len > (Py_ssize_t)sizeof(self->data.ClientAppID)) {
			PyErr_Format(PyExc_ValueError, "ClientAppID too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_ClientAppID_len, (Py_ssize_t)sizeof(self->data.ClientAppID));
			return -1;
		}
		strncpy(self->data.ClientAppID, pUserSystemInfoField_ClientAppID, sizeof(self->data.ClientAppID) );
		pUserSystemInfoField_ClientAppID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pUserSystemInfoField_ClientPublicIP != NULL) {
		if(pUserSystemInfoField_ClientPublicIP_len > (Py_ssize_t)sizeof(self->data.ClientPublicIP)) {
			PyErr_Format(PyExc_ValueError, "ClientPublicIP too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_ClientPublicIP_len, (Py_ssize_t)sizeof(self->data.ClientPublicIP));
			return -1;
		}
		strncpy(self->data.ClientPublicIP, pUserSystemInfoField_ClientPublicIP, sizeof(self->data.ClientPublicIP) );
		pUserSystemInfoField_ClientPublicIP = NULL;
	}

	//TThostFtdcClientLoginRemarkType char[151]
	if(pUserSystemInfoField_ClientLoginRemark != NULL) {
		if(pUserSystemInfoField_ClientLoginRemark_len > (Py_ssize_t)sizeof(self->data.ClientLoginRemark)) {
			PyErr_Format(PyExc_ValueError, "ClientLoginRemark too long: length=%zd (max allowed is %zd)", pUserSystemInfoField_ClientLoginRemark_len, (Py_ssize_t)sizeof(self->data.ClientLoginRemark));
			return -1;
		}
		strncpy(self->data.ClientLoginRemark, pUserSystemInfoField_ClientLoginRemark, sizeof(self->data.ClientLoginRemark) );
		pUserSystemInfoField_ClientLoginRemark = NULL;
	}



    return 0;
}

static void PyCThostFtdcUserSystemInfoField_dealloc(PyCThostFtdcUserSystemInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserSystemInfoField_repr(PyCThostFtdcUserSystemInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:s,s:i,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "ClientSystemInfoLen", self->data.ClientSystemInfoLen
		, "ClientSystemInfo", self->data.ClientSystemInfo 
		, "reserve1", self->data.reserve1 
		, "ClientIPPort", self->data.ClientIPPort
		, "ClientLoginTime", self->data.ClientLoginTime 
		, "ClientAppID", self->data.ClientAppID 
		, "ClientPublicIP", self->data.ClientPublicIP 
		, "ClientLoginRemark", self->data.ClientLoginRemark 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSystemInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_BrokerID(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_UserID(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientSystemInfoLen(PyCThostFtdcUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientSystemInfoLen);
#else 
	return PyInt_FromLong(self->data.ClientSystemInfoLen);
#endif 
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientSystemInfo(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientSystemInfo);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_reserve1(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientIPPort(PyCThostFtdcUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientIPPort);
#else 
	return PyInt_FromLong(self->data.ClientIPPort);
#endif 
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientLoginTime(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientLoginTime);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientAppID(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientAppID);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientPublicIP(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientPublicIP);
}

static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientLoginRemark(PyCThostFtdcUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientLoginRemark);
}

static int PyCThostFtdcUserSystemInfoField_set_BrokerID(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSystemInfoField_set_UserID(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSystemInfoField_set_ClientSystemInfoLen(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientSystemInfoLen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ClientSystemInfoLen Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.ClientSystemInfoLen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcUserSystemInfoField_set_ClientSystemInfo(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientSystemInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientSystemInfo)) {
		PyErr_SetString(PyExc_ValueError, "ClientSystemInfo must be less than 273 bytes");
		return -1;
	}
	strncpy(self->data.ClientSystemInfo, buf, sizeof(self->data.ClientSystemInfo));
	return 0;
}

static int PyCThostFtdcUserSystemInfoField_set_reserve1(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSystemInfoField_set_ClientIPPort(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPPort Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ClientIPPort Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.ClientIPPort = (int)buf; 
    return 0; 
}

static int PyCThostFtdcUserSystemInfoField_set_ClientLoginTime(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientLoginTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientLoginTime)) {
		PyErr_SetString(PyExc_ValueError, "ClientLoginTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ClientLoginTime, buf, sizeof(self->data.ClientLoginTime));
	return 0;
}

static int PyCThostFtdcUserSystemInfoField_set_ClientAppID(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientAppID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientAppID)) {
		PyErr_SetString(PyExc_ValueError, "ClientAppID must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.ClientAppID, buf, sizeof(self->data.ClientAppID));
	return 0;
}

static int PyCThostFtdcUserSystemInfoField_set_ClientPublicIP(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientPublicIP Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientPublicIP)) {
		PyErr_SetString(PyExc_ValueError, "ClientPublicIP must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.ClientPublicIP, buf, sizeof(self->data.ClientPublicIP));
	return 0;
}

static int PyCThostFtdcUserSystemInfoField_set_ClientLoginRemark(PyCThostFtdcUserSystemInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientLoginRemark Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientLoginRemark)) {
		PyErr_SetString(PyExc_ValueError, "ClientLoginRemark must be less than 151 bytes");
		return -1;
	}
	strncpy(self->data.ClientLoginRemark, buf, sizeof(self->data.ClientLoginRemark));
	return 0;
}



static PyGetSetDef PyCThostFtdcUserSystemInfoField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcUserSystemInfoField_get_BrokerID, (setter)PyCThostFtdcUserSystemInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcUserSystemInfoField_get_UserID, (setter)PyCThostFtdcUserSystemInfoField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ClientSystemInfoLen", (getter)PyCThostFtdcUserSystemInfoField_get_ClientSystemInfoLen, (setter)PyCThostFtdcUserSystemInfoField_set_ClientSystemInfoLen, (char *)"ClientSystemInfoLen", NULL},
	 {(char *)"ClientSystemInfo", (getter)PyCThostFtdcUserSystemInfoField_get_ClientSystemInfo, (setter)PyCThostFtdcUserSystemInfoField_set_ClientSystemInfo, (char *)"ClientSystemInfo", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcUserSystemInfoField_get_reserve1, (setter)PyCThostFtdcUserSystemInfoField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ClientIPPort", (getter)PyCThostFtdcUserSystemInfoField_get_ClientIPPort, (setter)PyCThostFtdcUserSystemInfoField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
	 {(char *)"ClientLoginTime", (getter)PyCThostFtdcUserSystemInfoField_get_ClientLoginTime, (setter)PyCThostFtdcUserSystemInfoField_set_ClientLoginTime, (char *)"ClientLoginTime", NULL},
	 {(char *)"ClientAppID", (getter)PyCThostFtdcUserSystemInfoField_get_ClientAppID, (setter)PyCThostFtdcUserSystemInfoField_set_ClientAppID, (char *)"ClientAppID", NULL},
	 {(char *)"ClientPublicIP", (getter)PyCThostFtdcUserSystemInfoField_get_ClientPublicIP, (setter)PyCThostFtdcUserSystemInfoField_set_ClientPublicIP, (char *)"ClientPublicIP", NULL},
	 {(char *)"ClientLoginRemark", (getter)PyCThostFtdcUserSystemInfoField_get_ClientLoginRemark, (setter)PyCThostFtdcUserSystemInfoField_set_ClientLoginRemark, (char *)"ClientLoginRemark", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserSystemInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserSystemInfoField",	/* tp_name */
	sizeof(PyCThostFtdcUserSystemInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserSystemInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserSystemInfoField_repr,   /* tp_repr */
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
	"CThostFtdcUserSystemInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserSystemInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserSystemInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserSystemInfoField_new,       /* tp_new */
};

int PyCThostFtdcUserSystemInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserSystemInfoField  */
	if (PyType_Ready(&PyCThostFtdcUserSystemInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserSystemInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserSystemInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserSystemInfoField", (PyObject *)&PyCThostFtdcUserSystemInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserSystemInfoField to module");
        Py_DECREF(&PyCThostFtdcUserSystemInfoFieldType);
		return -1;
    }

    return 0;
}
