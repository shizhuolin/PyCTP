
#include "PyCThostFtdcWechatUserSystemInfoField.h"



static PyObject *PyCThostFtdcWechatUserSystemInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcWechatUserSystemInfoField *self = (PyCThostFtdcWechatUserSystemInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcWechatUserSystemInfoField_init(PyCThostFtdcWechatUserSystemInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "WechatCltSysInfoLen", "WechatCltSysInfo", "ClientIPPort", "ClientLoginTime", "ClientAppID", "ClientPublicIP", "ClientLoginRemark",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pWechatUserSystemInfoField_BrokerID = NULL;
	Py_ssize_t pWechatUserSystemInfoField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pWechatUserSystemInfoField_UserID = NULL;
	Py_ssize_t pWechatUserSystemInfoField_UserID_len = 0;

	//TThostFtdcSystemInfoLenType int
	int pWechatUserSystemInfoField_WechatCltSysInfoLen = 0;

	//TThostFtdcClientSystemInfoType char[273]
	const char *pWechatUserSystemInfoField_WechatCltSysInfo = NULL;
	Py_ssize_t pWechatUserSystemInfoField_WechatCltSysInfo_len = 0;

	//TThostFtdcIPPortType int
	int pWechatUserSystemInfoField_ClientIPPort = 0;

	//TThostFtdcTimeType char[9]
	const char *pWechatUserSystemInfoField_ClientLoginTime = NULL;
	Py_ssize_t pWechatUserSystemInfoField_ClientLoginTime_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pWechatUserSystemInfoField_ClientAppID = NULL;
	Py_ssize_t pWechatUserSystemInfoField_ClientAppID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pWechatUserSystemInfoField_ClientPublicIP = NULL;
	Py_ssize_t pWechatUserSystemInfoField_ClientPublicIP_len = 0;

	//TThostFtdcClientLoginRemarkType char[151]
	const char *pWechatUserSystemInfoField_ClientLoginRemark = NULL;
	Py_ssize_t pWechatUserSystemInfoField_ClientLoginRemark_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#is#s#s#s#", (char **)kwlist
#endif

		, &pWechatUserSystemInfoField_BrokerID, &pWechatUserSystemInfoField_BrokerID_len
		, &pWechatUserSystemInfoField_UserID, &pWechatUserSystemInfoField_UserID_len
		, &pWechatUserSystemInfoField_WechatCltSysInfoLen
		, &pWechatUserSystemInfoField_WechatCltSysInfo, &pWechatUserSystemInfoField_WechatCltSysInfo_len
		, &pWechatUserSystemInfoField_ClientIPPort
		, &pWechatUserSystemInfoField_ClientLoginTime, &pWechatUserSystemInfoField_ClientLoginTime_len
		, &pWechatUserSystemInfoField_ClientAppID, &pWechatUserSystemInfoField_ClientAppID_len
		, &pWechatUserSystemInfoField_ClientPublicIP, &pWechatUserSystemInfoField_ClientPublicIP_len
		, &pWechatUserSystemInfoField_ClientLoginRemark, &pWechatUserSystemInfoField_ClientLoginRemark_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pWechatUserSystemInfoField_BrokerID != NULL) {
		if(pWechatUserSystemInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pWechatUserSystemInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pWechatUserSystemInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pWechatUserSystemInfoField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pWechatUserSystemInfoField_UserID != NULL) {
		if(pWechatUserSystemInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pWechatUserSystemInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pWechatUserSystemInfoField_UserID, sizeof(self->data.UserID) );
		pWechatUserSystemInfoField_UserID = NULL;
	}

	//TThostFtdcSystemInfoLenType int
	self->data.WechatCltSysInfoLen = pWechatUserSystemInfoField_WechatCltSysInfoLen;

	//TThostFtdcClientSystemInfoType char[273]
	if(pWechatUserSystemInfoField_WechatCltSysInfo != NULL) {
		if(pWechatUserSystemInfoField_WechatCltSysInfo_len > (Py_ssize_t)sizeof(self->data.WechatCltSysInfo)) {
			PyErr_Format(PyExc_ValueError, "WechatCltSysInfo too long: length=%zd (max allowed is %zd)", pWechatUserSystemInfoField_WechatCltSysInfo_len, (Py_ssize_t)sizeof(self->data.WechatCltSysInfo));
			return -1;
		}
		strncpy(self->data.WechatCltSysInfo, pWechatUserSystemInfoField_WechatCltSysInfo, sizeof(self->data.WechatCltSysInfo) );
		pWechatUserSystemInfoField_WechatCltSysInfo = NULL;
	}

	//TThostFtdcIPPortType int
	self->data.ClientIPPort = pWechatUserSystemInfoField_ClientIPPort;

	//TThostFtdcTimeType char[9]
	if(pWechatUserSystemInfoField_ClientLoginTime != NULL) {
		if(pWechatUserSystemInfoField_ClientLoginTime_len > (Py_ssize_t)sizeof(self->data.ClientLoginTime)) {
			PyErr_Format(PyExc_ValueError, "ClientLoginTime too long: length=%zd (max allowed is %zd)", pWechatUserSystemInfoField_ClientLoginTime_len, (Py_ssize_t)sizeof(self->data.ClientLoginTime));
			return -1;
		}
		strncpy(self->data.ClientLoginTime, pWechatUserSystemInfoField_ClientLoginTime, sizeof(self->data.ClientLoginTime) );
		pWechatUserSystemInfoField_ClientLoginTime = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pWechatUserSystemInfoField_ClientAppID != NULL) {
		if(pWechatUserSystemInfoField_ClientAppID_len > (Py_ssize_t)sizeof(self->data.ClientAppID)) {
			PyErr_Format(PyExc_ValueError, "ClientAppID too long: length=%zd (max allowed is %zd)", pWechatUserSystemInfoField_ClientAppID_len, (Py_ssize_t)sizeof(self->data.ClientAppID));
			return -1;
		}
		strncpy(self->data.ClientAppID, pWechatUserSystemInfoField_ClientAppID, sizeof(self->data.ClientAppID) );
		pWechatUserSystemInfoField_ClientAppID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pWechatUserSystemInfoField_ClientPublicIP != NULL) {
		if(pWechatUserSystemInfoField_ClientPublicIP_len > (Py_ssize_t)sizeof(self->data.ClientPublicIP)) {
			PyErr_Format(PyExc_ValueError, "ClientPublicIP too long: length=%zd (max allowed is %zd)", pWechatUserSystemInfoField_ClientPublicIP_len, (Py_ssize_t)sizeof(self->data.ClientPublicIP));
			return -1;
		}
		strncpy(self->data.ClientPublicIP, pWechatUserSystemInfoField_ClientPublicIP, sizeof(self->data.ClientPublicIP) );
		pWechatUserSystemInfoField_ClientPublicIP = NULL;
	}

	//TThostFtdcClientLoginRemarkType char[151]
	if(pWechatUserSystemInfoField_ClientLoginRemark != NULL) {
		if(pWechatUserSystemInfoField_ClientLoginRemark_len > (Py_ssize_t)sizeof(self->data.ClientLoginRemark)) {
			PyErr_Format(PyExc_ValueError, "ClientLoginRemark too long: length=%zd (max allowed is %zd)", pWechatUserSystemInfoField_ClientLoginRemark_len, (Py_ssize_t)sizeof(self->data.ClientLoginRemark));
			return -1;
		}
		strncpy(self->data.ClientLoginRemark, pWechatUserSystemInfoField_ClientLoginRemark, sizeof(self->data.ClientLoginRemark) );
		pWechatUserSystemInfoField_ClientLoginRemark = NULL;
	}



    return 0;
}

static void PyCThostFtdcWechatUserSystemInfoField_dealloc(PyCThostFtdcWechatUserSystemInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_repr(PyCThostFtdcWechatUserSystemInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "WechatCltSysInfoLen", self->data.WechatCltSysInfoLen
		, "WechatCltSysInfo", self->data.WechatCltSysInfo 
		, "ClientIPPort", self->data.ClientIPPort
		, "ClientLoginTime", self->data.ClientLoginTime 
		, "ClientAppID", self->data.ClientAppID 
		, "ClientPublicIP", self->data.ClientPublicIP 
		, "ClientLoginRemark", self->data.ClientLoginRemark 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcWechatUserSystemInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_BrokerID(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_UserID(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfoLen(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.WechatCltSysInfoLen);
#else 
	return PyInt_FromLong(self->data.WechatCltSysInfoLen);
#endif 
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfo(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.WechatCltSysInfo);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientIPPort(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientIPPort);
#else 
	return PyInt_FromLong(self->data.ClientIPPort);
#endif 
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginTime(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientLoginTime);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientAppID(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientAppID);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientPublicIP(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientPublicIP);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginRemark(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientLoginRemark);
}

static int PyCThostFtdcWechatUserSystemInfoField_set_BrokerID(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWechatUserSystemInfoField_set_UserID(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfoLen(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WechatCltSysInfoLen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "WechatCltSysInfoLen Expected int"); 
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
    self->data.WechatCltSysInfoLen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfo(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "WechatCltSysInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.WechatCltSysInfo)) {
		PyErr_SetString(PyExc_ValueError, "WechatCltSysInfo must be less than 273 bytes");
		return -1;
	}
	strncpy(self->data.WechatCltSysInfo, buf, sizeof(self->data.WechatCltSysInfo));
	return 0;
}

static int PyCThostFtdcWechatUserSystemInfoField_set_ClientIPPort(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginTime(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWechatUserSystemInfoField_set_ClientAppID(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWechatUserSystemInfoField_set_ClientPublicIP(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginRemark(PyCThostFtdcWechatUserSystemInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcWechatUserSystemInfoField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcWechatUserSystemInfoField_get_BrokerID, (setter)PyCThostFtdcWechatUserSystemInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcWechatUserSystemInfoField_get_UserID, (setter)PyCThostFtdcWechatUserSystemInfoField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"WechatCltSysInfoLen", (getter)PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfoLen, (setter)PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfoLen, (char *)"WechatCltSysInfoLen", NULL},
	 {(char *)"WechatCltSysInfo", (getter)PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfo, (setter)PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfo, (char *)"WechatCltSysInfo", NULL},
	 {(char *)"ClientIPPort", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientIPPort, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
	 {(char *)"ClientLoginTime", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginTime, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginTime, (char *)"ClientLoginTime", NULL},
	 {(char *)"ClientAppID", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientAppID, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientAppID, (char *)"ClientAppID", NULL},
	 {(char *)"ClientPublicIP", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientPublicIP, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientPublicIP, (char *)"ClientPublicIP", NULL},
	 {(char *)"ClientLoginRemark", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginRemark, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginRemark, (char *)"ClientLoginRemark", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcWechatUserSystemInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcWechatUserSystemInfoField",	/* tp_name */
	sizeof(PyCThostFtdcWechatUserSystemInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcWechatUserSystemInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcWechatUserSystemInfoField_repr,   /* tp_repr */
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
	"CThostFtdcWechatUserSystemInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcWechatUserSystemInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcWechatUserSystemInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcWechatUserSystemInfoField_new,       /* tp_new */
};

int PyCThostFtdcWechatUserSystemInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcWechatUserSystemInfoField  */
	if (PyType_Ready(&PyCThostFtdcWechatUserSystemInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcWechatUserSystemInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcWechatUserSystemInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcWechatUserSystemInfoField", (PyObject *)&PyCThostFtdcWechatUserSystemInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcWechatUserSystemInfoField to module");
        Py_DECREF(&PyCThostFtdcWechatUserSystemInfoFieldType);
		return -1;
    }

    return 0;
}
