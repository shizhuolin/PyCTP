
#include "PyCThostFtdcBrokerUserOTPParamField.h"



static PyObject *PyCThostFtdcBrokerUserOTPParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserOTPParamField *self = (PyCThostFtdcBrokerUserOTPParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserOTPParamField_init(PyCThostFtdcBrokerUserOTPParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "OTPVendorsID", "SerialNumber", "AuthKey", "LastDrift", "LastSuccess", "OTPType",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerUserOTPParamField_BrokerID = NULL;
	Py_ssize_t pBrokerUserOTPParamField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pBrokerUserOTPParamField_UserID = NULL;
	Py_ssize_t pBrokerUserOTPParamField_UserID_len = 0;

	//TThostFtdcOTPVendorsIDType char[2]
	const char *pBrokerUserOTPParamField_OTPVendorsID = NULL;
	Py_ssize_t pBrokerUserOTPParamField_OTPVendorsID_len = 0;

	//TThostFtdcSerialNumberType char[17]
	const char *pBrokerUserOTPParamField_SerialNumber = NULL;
	Py_ssize_t pBrokerUserOTPParamField_SerialNumber_len = 0;

	//TThostFtdcAuthKeyType char[41]
	const char *pBrokerUserOTPParamField_AuthKey = NULL;
	Py_ssize_t pBrokerUserOTPParamField_AuthKey_len = 0;

	//TThostFtdcLastDriftType int
	int pBrokerUserOTPParamField_LastDrift = 0;

	//TThostFtdcLastSuccessType int
	int pBrokerUserOTPParamField_LastSuccess = 0;

	//TThostFtdcOTPTypeType char
	char pBrokerUserOTPParamField_OTPType = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iic", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iic", (char **)kwlist
#endif

		, &pBrokerUserOTPParamField_BrokerID, &pBrokerUserOTPParamField_BrokerID_len
		, &pBrokerUserOTPParamField_UserID, &pBrokerUserOTPParamField_UserID_len
		, &pBrokerUserOTPParamField_OTPVendorsID, &pBrokerUserOTPParamField_OTPVendorsID_len
		, &pBrokerUserOTPParamField_SerialNumber, &pBrokerUserOTPParamField_SerialNumber_len
		, &pBrokerUserOTPParamField_AuthKey, &pBrokerUserOTPParamField_AuthKey_len
		, &pBrokerUserOTPParamField_LastDrift
		, &pBrokerUserOTPParamField_LastSuccess
		, &pBrokerUserOTPParamField_OTPType


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerUserOTPParamField_BrokerID != NULL) {
		if(pBrokerUserOTPParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerUserOTPParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerUserOTPParamField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerUserOTPParamField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pBrokerUserOTPParamField_UserID != NULL) {
		if(pBrokerUserOTPParamField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pBrokerUserOTPParamField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pBrokerUserOTPParamField_UserID, sizeof(self->data.UserID) );
		pBrokerUserOTPParamField_UserID = NULL;
	}

	//TThostFtdcOTPVendorsIDType char[2]
	if(pBrokerUserOTPParamField_OTPVendorsID != NULL) {
		if(pBrokerUserOTPParamField_OTPVendorsID_len > (Py_ssize_t)sizeof(self->data.OTPVendorsID)) {
			PyErr_Format(PyExc_ValueError, "OTPVendorsID too long: length=%zd (max allowed is %zd)", pBrokerUserOTPParamField_OTPVendorsID_len, (Py_ssize_t)sizeof(self->data.OTPVendorsID));
			return -1;
		}
		strncpy(self->data.OTPVendorsID, pBrokerUserOTPParamField_OTPVendorsID, sizeof(self->data.OTPVendorsID) );
		pBrokerUserOTPParamField_OTPVendorsID = NULL;
	}

	//TThostFtdcSerialNumberType char[17]
	if(pBrokerUserOTPParamField_SerialNumber != NULL) {
		if(pBrokerUserOTPParamField_SerialNumber_len > (Py_ssize_t)sizeof(self->data.SerialNumber)) {
			PyErr_Format(PyExc_ValueError, "SerialNumber too long: length=%zd (max allowed is %zd)", pBrokerUserOTPParamField_SerialNumber_len, (Py_ssize_t)sizeof(self->data.SerialNumber));
			return -1;
		}
		strncpy(self->data.SerialNumber, pBrokerUserOTPParamField_SerialNumber, sizeof(self->data.SerialNumber) );
		pBrokerUserOTPParamField_SerialNumber = NULL;
	}

	//TThostFtdcAuthKeyType char[41]
	if(pBrokerUserOTPParamField_AuthKey != NULL) {
		if(pBrokerUserOTPParamField_AuthKey_len > (Py_ssize_t)sizeof(self->data.AuthKey)) {
			PyErr_Format(PyExc_ValueError, "AuthKey too long: length=%zd (max allowed is %zd)", pBrokerUserOTPParamField_AuthKey_len, (Py_ssize_t)sizeof(self->data.AuthKey));
			return -1;
		}
		strncpy(self->data.AuthKey, pBrokerUserOTPParamField_AuthKey, sizeof(self->data.AuthKey) );
		pBrokerUserOTPParamField_AuthKey = NULL;
	}

	//TThostFtdcLastDriftType int
	self->data.LastDrift = pBrokerUserOTPParamField_LastDrift;

	//TThostFtdcLastSuccessType int
	self->data.LastSuccess = pBrokerUserOTPParamField_LastSuccess;

	//TThostFtdcOTPTypeType char
	self->data.OTPType = pBrokerUserOTPParamField_OTPType;



    return 0;
}

static void PyCThostFtdcBrokerUserOTPParamField_dealloc(PyCThostFtdcBrokerUserOTPParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_repr(PyCThostFtdcBrokerUserOTPParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "OTPVendorsID", self->data.OTPVendorsID 
		, "SerialNumber", self->data.SerialNumber 
		, "AuthKey", self->data.AuthKey 
		, "LastDrift", self->data.LastDrift
		, "LastSuccess", self->data.LastSuccess
		, "OTPType", self->data.OTPType


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserOTPParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_BrokerID(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_UserID(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_OTPVendorsID(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
	return PyBytes_FromString(self->data.OTPVendorsID);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_SerialNumber(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
	return PyBytes_FromString(self->data.SerialNumber);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_AuthKey(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
	return PyBytes_FromString(self->data.AuthKey);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_LastDrift(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LastDrift);
#else 
	return PyInt_FromLong(self->data.LastDrift);
#endif 
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_LastSuccess(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LastSuccess);
#else 
	return PyInt_FromLong(self->data.LastSuccess);
#endif 
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_OTPType(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OTPType), 1);
}

static int PyCThostFtdcBrokerUserOTPParamField_set_BrokerID(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserOTPParamField_set_UserID(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserOTPParamField_set_OTPVendorsID(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OTPVendorsID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OTPVendorsID)) {
		PyErr_SetString(PyExc_ValueError, "OTPVendorsID must be less than 2 bytes");
		return -1;
	}
	strncpy(self->data.OTPVendorsID, buf, sizeof(self->data.OTPVendorsID));
	return 0;
}

static int PyCThostFtdcBrokerUserOTPParamField_set_SerialNumber(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SerialNumber Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SerialNumber)) {
		PyErr_SetString(PyExc_ValueError, "SerialNumber must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.SerialNumber, buf, sizeof(self->data.SerialNumber));
	return 0;
}

static int PyCThostFtdcBrokerUserOTPParamField_set_AuthKey(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AuthKey Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AuthKey)) {
		PyErr_SetString(PyExc_ValueError, "AuthKey must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.AuthKey, buf, sizeof(self->data.AuthKey));
	return 0;
}

static int PyCThostFtdcBrokerUserOTPParamField_set_LastDrift(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastDrift Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LastDrift Expected int"); 
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
    self->data.LastDrift = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBrokerUserOTPParamField_set_LastSuccess(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastSuccess Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LastSuccess Expected int"); 
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
    self->data.LastSuccess = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBrokerUserOTPParamField_set_OTPType(PyCThostFtdcBrokerUserOTPParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OTPType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OTPType)) {
		PyErr_SetString(PyExc_ValueError, "OTPType must be less than 1 bytes");
		return -1;
	}
	self->data.OTPType = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcBrokerUserOTPParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserOTPParamField_get_BrokerID, (setter)PyCThostFtdcBrokerUserOTPParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcBrokerUserOTPParamField_get_UserID, (setter)PyCThostFtdcBrokerUserOTPParamField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OTPVendorsID", (getter)PyCThostFtdcBrokerUserOTPParamField_get_OTPVendorsID, (setter)PyCThostFtdcBrokerUserOTPParamField_set_OTPVendorsID, (char *)"OTPVendorsID", NULL},
	 {(char *)"SerialNumber", (getter)PyCThostFtdcBrokerUserOTPParamField_get_SerialNumber, (setter)PyCThostFtdcBrokerUserOTPParamField_set_SerialNumber, (char *)"SerialNumber", NULL},
	 {(char *)"AuthKey", (getter)PyCThostFtdcBrokerUserOTPParamField_get_AuthKey, (setter)PyCThostFtdcBrokerUserOTPParamField_set_AuthKey, (char *)"AuthKey", NULL},
	 {(char *)"LastDrift", (getter)PyCThostFtdcBrokerUserOTPParamField_get_LastDrift, (setter)PyCThostFtdcBrokerUserOTPParamField_set_LastDrift, (char *)"LastDrift", NULL},
	 {(char *)"LastSuccess", (getter)PyCThostFtdcBrokerUserOTPParamField_get_LastSuccess, (setter)PyCThostFtdcBrokerUserOTPParamField_set_LastSuccess, (char *)"LastSuccess", NULL},
	 {(char *)"OTPType", (getter)PyCThostFtdcBrokerUserOTPParamField_get_OTPType, (setter)PyCThostFtdcBrokerUserOTPParamField_set_OTPType, (char *)"OTPType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserOTPParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserOTPParamField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserOTPParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserOTPParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserOTPParamField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserOTPParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserOTPParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserOTPParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserOTPParamField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserOTPParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserOTPParamField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserOTPParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserOTPParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserOTPParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserOTPParamField", (PyObject *)&PyCThostFtdcBrokerUserOTPParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserOTPParamField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserOTPParamFieldType);
		return -1;
    }

    return 0;
}
