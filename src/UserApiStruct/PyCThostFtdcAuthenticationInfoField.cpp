
#include "PyCThostFtdcAuthenticationInfoField.h"



static PyObject *PyCThostFtdcAuthenticationInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAuthenticationInfoField *self = (PyCThostFtdcAuthenticationInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcAuthenticationInfoField_init(PyCThostFtdcAuthenticationInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserProductInfo", "AuthInfo", "IsResult", "AppID", "AppType", "reserve1", "ClientIPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pAuthenticationInfoField_BrokerID = NULL;
	Py_ssize_t pAuthenticationInfoField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pAuthenticationInfoField_UserID = NULL;
	Py_ssize_t pAuthenticationInfoField_UserID_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pAuthenticationInfoField_UserProductInfo = NULL;
	Py_ssize_t pAuthenticationInfoField_UserProductInfo_len = 0;

	//TThostFtdcAuthInfoType char[129]
	const char *pAuthenticationInfoField_AuthInfo = NULL;
	Py_ssize_t pAuthenticationInfoField_AuthInfo_len = 0;

	//TThostFtdcBoolType int
	int pAuthenticationInfoField_IsResult = 0;

	//TThostFtdcAppIDType char[33]
	const char *pAuthenticationInfoField_AppID = NULL;
	Py_ssize_t pAuthenticationInfoField_AppID_len = 0;

	//TThostFtdcAppTypeType char
	char pAuthenticationInfoField_AppType = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pAuthenticationInfoField_reserve1 = NULL;
	Py_ssize_t pAuthenticationInfoField_reserve1_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pAuthenticationInfoField_ClientIPAddress = NULL;
	Py_ssize_t pAuthenticationInfoField_ClientIPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#cs#s#", (char **)kwlist
#endif

		, &pAuthenticationInfoField_BrokerID, &pAuthenticationInfoField_BrokerID_len
		, &pAuthenticationInfoField_UserID, &pAuthenticationInfoField_UserID_len
		, &pAuthenticationInfoField_UserProductInfo, &pAuthenticationInfoField_UserProductInfo_len
		, &pAuthenticationInfoField_AuthInfo, &pAuthenticationInfoField_AuthInfo_len
		, &pAuthenticationInfoField_IsResult
		, &pAuthenticationInfoField_AppID, &pAuthenticationInfoField_AppID_len
		, &pAuthenticationInfoField_AppType
		, &pAuthenticationInfoField_reserve1, &pAuthenticationInfoField_reserve1_len
		, &pAuthenticationInfoField_ClientIPAddress, &pAuthenticationInfoField_ClientIPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pAuthenticationInfoField_BrokerID != NULL) {
		if(pAuthenticationInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pAuthenticationInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pAuthenticationInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pAuthenticationInfoField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pAuthenticationInfoField_UserID != NULL) {
		if(pAuthenticationInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pAuthenticationInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pAuthenticationInfoField_UserID, sizeof(self->data.UserID) );
		pAuthenticationInfoField_UserID = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pAuthenticationInfoField_UserProductInfo != NULL) {
		if(pAuthenticationInfoField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pAuthenticationInfoField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pAuthenticationInfoField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pAuthenticationInfoField_UserProductInfo = NULL;
	}

	//TThostFtdcAuthInfoType char[129]
	if(pAuthenticationInfoField_AuthInfo != NULL) {
		if(pAuthenticationInfoField_AuthInfo_len > (Py_ssize_t)sizeof(self->data.AuthInfo)) {
			PyErr_Format(PyExc_ValueError, "AuthInfo too long: length=%zd (max allowed is %zd)", pAuthenticationInfoField_AuthInfo_len, (Py_ssize_t)sizeof(self->data.AuthInfo));
			return -1;
		}
		strncpy(self->data.AuthInfo, pAuthenticationInfoField_AuthInfo, sizeof(self->data.AuthInfo) );
		pAuthenticationInfoField_AuthInfo = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsResult = pAuthenticationInfoField_IsResult;

	//TThostFtdcAppIDType char[33]
	if(pAuthenticationInfoField_AppID != NULL) {
		if(pAuthenticationInfoField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
			PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", pAuthenticationInfoField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
			return -1;
		}
		strncpy(self->data.AppID, pAuthenticationInfoField_AppID, sizeof(self->data.AppID) );
		pAuthenticationInfoField_AppID = NULL;
	}

	//TThostFtdcAppTypeType char
	self->data.AppType = pAuthenticationInfoField_AppType;

	//TThostFtdcOldIPAddressType char[16]
	if(pAuthenticationInfoField_reserve1 != NULL) {
		if(pAuthenticationInfoField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pAuthenticationInfoField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pAuthenticationInfoField_reserve1, sizeof(self->data.reserve1) );
		pAuthenticationInfoField_reserve1 = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pAuthenticationInfoField_ClientIPAddress != NULL) {
		if(pAuthenticationInfoField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
			PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", pAuthenticationInfoField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
			return -1;
		}
		strncpy(self->data.ClientIPAddress, pAuthenticationInfoField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
		pAuthenticationInfoField_ClientIPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcAuthenticationInfoField_dealloc(PyCThostFtdcAuthenticationInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_repr(PyCThostFtdcAuthenticationInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:c,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "UserProductInfo", self->data.UserProductInfo 
		, "AuthInfo", self->data.AuthInfo 
		, "IsResult", self->data.IsResult
		, "AppID", self->data.AppID 
		, "AppType", self->data.AppType
		, "reserve1", self->data.reserve1 
		, "ClientIPAddress", self->data.ClientIPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthenticationInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_BrokerID(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_UserID(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_UserProductInfo(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_AuthInfo(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.AuthInfo);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_IsResult(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsResult);
#else 
	return PyInt_FromLong(self->data.IsResult);
#endif 
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_AppID(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.AppID);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_AppType(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AppType), 1);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_reserve1(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcAuthenticationInfoField_get_ClientIPAddress(PyCThostFtdcAuthenticationInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientIPAddress);
}

static int PyCThostFtdcAuthenticationInfoField_set_BrokerID(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAuthenticationInfoField_set_UserID(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAuthenticationInfoField_set_UserProductInfo(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
		PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
	return 0;
}

static int PyCThostFtdcAuthenticationInfoField_set_AuthInfo(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AuthInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AuthInfo)) {
		PyErr_SetString(PyExc_ValueError, "AuthInfo must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.AuthInfo, buf, sizeof(self->data.AuthInfo));
	return 0;
}

static int PyCThostFtdcAuthenticationInfoField_set_IsResult(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsResult Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsResult Expected int"); 
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
    self->data.IsResult = (int)buf; 
    return 0; 
}

static int PyCThostFtdcAuthenticationInfoField_set_AppID(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAuthenticationInfoField_set_AppType(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AppType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AppType)) {
		PyErr_SetString(PyExc_ValueError, "AppType must be less than 1 bytes");
		return -1;
	}
	self->data.AppType = *buf;
	return 0;
}

static int PyCThostFtdcAuthenticationInfoField_set_reserve1(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAuthenticationInfoField_set_ClientIPAddress(PyCThostFtdcAuthenticationInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
		PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.ClientIPAddress, buf, sizeof(self->data.ClientIPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcAuthenticationInfoField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcAuthenticationInfoField_get_BrokerID, (setter)PyCThostFtdcAuthenticationInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcAuthenticationInfoField_get_UserID, (setter)PyCThostFtdcAuthenticationInfoField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcAuthenticationInfoField_get_UserProductInfo, (setter)PyCThostFtdcAuthenticationInfoField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"AuthInfo", (getter)PyCThostFtdcAuthenticationInfoField_get_AuthInfo, (setter)PyCThostFtdcAuthenticationInfoField_set_AuthInfo, (char *)"AuthInfo", NULL},
	 {(char *)"IsResult", (getter)PyCThostFtdcAuthenticationInfoField_get_IsResult, (setter)PyCThostFtdcAuthenticationInfoField_set_IsResult, (char *)"IsResult", NULL},
	 {(char *)"AppID", (getter)PyCThostFtdcAuthenticationInfoField_get_AppID, (setter)PyCThostFtdcAuthenticationInfoField_set_AppID, (char *)"AppID", NULL},
	 {(char *)"AppType", (getter)PyCThostFtdcAuthenticationInfoField_get_AppType, (setter)PyCThostFtdcAuthenticationInfoField_set_AppType, (char *)"AppType", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcAuthenticationInfoField_get_reserve1, (setter)PyCThostFtdcAuthenticationInfoField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ClientIPAddress", (getter)PyCThostFtdcAuthenticationInfoField_get_ClientIPAddress, (setter)PyCThostFtdcAuthenticationInfoField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAuthenticationInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAuthenticationInfoField",	/* tp_name */
	sizeof(PyCThostFtdcAuthenticationInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAuthenticationInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAuthenticationInfoField_repr,   /* tp_repr */
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
	"CThostFtdcAuthenticationInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAuthenticationInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAuthenticationInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAuthenticationInfoField_new,       /* tp_new */
};

int PyCThostFtdcAuthenticationInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAuthenticationInfoField  */
	if (PyType_Ready(&PyCThostFtdcAuthenticationInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAuthenticationInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAuthenticationInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAuthenticationInfoField", (PyObject *)&PyCThostFtdcAuthenticationInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthenticationInfoField to module");
        Py_DECREF(&PyCThostFtdcAuthenticationInfoFieldType);
		return -1;
    }

    return 0;
}
