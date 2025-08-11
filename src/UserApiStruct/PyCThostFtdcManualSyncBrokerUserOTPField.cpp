
#include "PyCThostFtdcManualSyncBrokerUserOTPField.h"



static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcManualSyncBrokerUserOTPField *self = (PyCThostFtdcManualSyncBrokerUserOTPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcManualSyncBrokerUserOTPField_init(PyCThostFtdcManualSyncBrokerUserOTPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "OTPType", "FirstOTP", "SecondOTP",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pManualSyncBrokerUserOTPField_BrokerID = NULL;
	Py_ssize_t pManualSyncBrokerUserOTPField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pManualSyncBrokerUserOTPField_UserID = NULL;
	Py_ssize_t pManualSyncBrokerUserOTPField_UserID_len = 0;

	//TThostFtdcOTPTypeType char
	char pManualSyncBrokerUserOTPField_OTPType = 0;

	//TThostFtdcPasswordType char[41]
	const char *pManualSyncBrokerUserOTPField_FirstOTP = NULL;
	Py_ssize_t pManualSyncBrokerUserOTPField_FirstOTP_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pManualSyncBrokerUserOTPField_SecondOTP = NULL;
	Py_ssize_t pManualSyncBrokerUserOTPField_SecondOTP_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#", (char **)kwlist
#endif

		, &pManualSyncBrokerUserOTPField_BrokerID, &pManualSyncBrokerUserOTPField_BrokerID_len
		, &pManualSyncBrokerUserOTPField_UserID, &pManualSyncBrokerUserOTPField_UserID_len
		, &pManualSyncBrokerUserOTPField_OTPType
		, &pManualSyncBrokerUserOTPField_FirstOTP, &pManualSyncBrokerUserOTPField_FirstOTP_len
		, &pManualSyncBrokerUserOTPField_SecondOTP, &pManualSyncBrokerUserOTPField_SecondOTP_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pManualSyncBrokerUserOTPField_BrokerID != NULL) {
		if(pManualSyncBrokerUserOTPField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pManualSyncBrokerUserOTPField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pManualSyncBrokerUserOTPField_BrokerID, sizeof(self->data.BrokerID) );
		pManualSyncBrokerUserOTPField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pManualSyncBrokerUserOTPField_UserID != NULL) {
		if(pManualSyncBrokerUserOTPField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pManualSyncBrokerUserOTPField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pManualSyncBrokerUserOTPField_UserID, sizeof(self->data.UserID) );
		pManualSyncBrokerUserOTPField_UserID = NULL;
	}

	//TThostFtdcOTPTypeType char
	self->data.OTPType = pManualSyncBrokerUserOTPField_OTPType;

	//TThostFtdcPasswordType char[41]
	if(pManualSyncBrokerUserOTPField_FirstOTP != NULL) {
		if(pManualSyncBrokerUserOTPField_FirstOTP_len > (Py_ssize_t)sizeof(self->data.FirstOTP)) {
			PyErr_Format(PyExc_ValueError, "FirstOTP too long: length=%zd (max allowed is %zd)", pManualSyncBrokerUserOTPField_FirstOTP_len, (Py_ssize_t)sizeof(self->data.FirstOTP));
			return -1;
		}
		strncpy(self->data.FirstOTP, pManualSyncBrokerUserOTPField_FirstOTP, sizeof(self->data.FirstOTP) );
		pManualSyncBrokerUserOTPField_FirstOTP = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pManualSyncBrokerUserOTPField_SecondOTP != NULL) {
		if(pManualSyncBrokerUserOTPField_SecondOTP_len > (Py_ssize_t)sizeof(self->data.SecondOTP)) {
			PyErr_Format(PyExc_ValueError, "SecondOTP too long: length=%zd (max allowed is %zd)", pManualSyncBrokerUserOTPField_SecondOTP_len, (Py_ssize_t)sizeof(self->data.SecondOTP));
			return -1;
		}
		strncpy(self->data.SecondOTP, pManualSyncBrokerUserOTPField_SecondOTP, sizeof(self->data.SecondOTP) );
		pManualSyncBrokerUserOTPField_SecondOTP = NULL;
	}



    return 0;
}

static void PyCThostFtdcManualSyncBrokerUserOTPField_dealloc(PyCThostFtdcManualSyncBrokerUserOTPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_repr(PyCThostFtdcManualSyncBrokerUserOTPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "OTPType", self->data.OTPType
		, "FirstOTP", self->data.FirstOTP 
		, "SecondOTP", self->data.SecondOTP 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcManualSyncBrokerUserOTPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_BrokerID(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_UserID(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_OTPType(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OTPType), 1);
}

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_FirstOTP(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.FirstOTP);
}

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_SecondOTP(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.SecondOTP);
}

static int PyCThostFtdcManualSyncBrokerUserOTPField_set_BrokerID(PyCThostFtdcManualSyncBrokerUserOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcManualSyncBrokerUserOTPField_set_UserID(PyCThostFtdcManualSyncBrokerUserOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcManualSyncBrokerUserOTPField_set_OTPType(PyCThostFtdcManualSyncBrokerUserOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcManualSyncBrokerUserOTPField_set_FirstOTP(PyCThostFtdcManualSyncBrokerUserOTPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FirstOTP Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FirstOTP)) {
		PyErr_SetString(PyExc_ValueError, "FirstOTP must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.FirstOTP, buf, sizeof(self->data.FirstOTP));
	return 0;
}

static int PyCThostFtdcManualSyncBrokerUserOTPField_set_SecondOTP(PyCThostFtdcManualSyncBrokerUserOTPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SecondOTP Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SecondOTP)) {
		PyErr_SetString(PyExc_ValueError, "SecondOTP must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.SecondOTP, buf, sizeof(self->data.SecondOTP));
	return 0;
}



static PyGetSetDef PyCThostFtdcManualSyncBrokerUserOTPField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_BrokerID, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_UserID, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OTPType", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_OTPType, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_OTPType, (char *)"OTPType", NULL},
	 {(char *)"FirstOTP", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_FirstOTP, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_FirstOTP, (char *)"FirstOTP", NULL},
	 {(char *)"SecondOTP", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_SecondOTP, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_SecondOTP, (char *)"SecondOTP", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcManualSyncBrokerUserOTPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcManualSyncBrokerUserOTPField",	/* tp_name */
	sizeof(PyCThostFtdcManualSyncBrokerUserOTPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcManualSyncBrokerUserOTPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcManualSyncBrokerUserOTPField_repr,   /* tp_repr */
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
	"CThostFtdcManualSyncBrokerUserOTPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcManualSyncBrokerUserOTPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcManualSyncBrokerUserOTPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcManualSyncBrokerUserOTPField_new,       /* tp_new */
};

int PyCThostFtdcManualSyncBrokerUserOTPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcManualSyncBrokerUserOTPField  */
	if (PyType_Ready(&PyCThostFtdcManualSyncBrokerUserOTPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcManualSyncBrokerUserOTPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcManualSyncBrokerUserOTPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcManualSyncBrokerUserOTPField", (PyObject *)&PyCThostFtdcManualSyncBrokerUserOTPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcManualSyncBrokerUserOTPField to module");
        Py_DECREF(&PyCThostFtdcManualSyncBrokerUserOTPFieldType);
		return -1;
    }

    return 0;
}
