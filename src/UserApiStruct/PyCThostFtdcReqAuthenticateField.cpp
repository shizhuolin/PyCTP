
#include "PyCThostFtdcReqAuthenticateField.h"



static PyObject *PyCThostFtdcReqAuthenticateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqAuthenticateField *self = (PyCThostFtdcReqAuthenticateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqAuthenticateField_init(PyCThostFtdcReqAuthenticateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserProductInfo", "AuthCode", "AppID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pReqAuthenticateField_BrokerID = NULL;
	Py_ssize_t pReqAuthenticateField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqAuthenticateField_UserID = NULL;
	Py_ssize_t pReqAuthenticateField_UserID_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqAuthenticateField_UserProductInfo = NULL;
	Py_ssize_t pReqAuthenticateField_UserProductInfo_len = 0;

	//TThostFtdcAuthCodeType char[17]
	const char *pReqAuthenticateField_AuthCode = NULL;
	Py_ssize_t pReqAuthenticateField_AuthCode_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pReqAuthenticateField_AppID = NULL;
	Py_ssize_t pReqAuthenticateField_AppID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

		, &pReqAuthenticateField_BrokerID, &pReqAuthenticateField_BrokerID_len
		, &pReqAuthenticateField_UserID, &pReqAuthenticateField_UserID_len
		, &pReqAuthenticateField_UserProductInfo, &pReqAuthenticateField_UserProductInfo_len
		, &pReqAuthenticateField_AuthCode, &pReqAuthenticateField_AuthCode_len
		, &pReqAuthenticateField_AppID, &pReqAuthenticateField_AppID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pReqAuthenticateField_BrokerID != NULL) {
		if(pReqAuthenticateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqAuthenticateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqAuthenticateField_BrokerID, sizeof(self->data.BrokerID) );
		pReqAuthenticateField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pReqAuthenticateField_UserID != NULL) {
		if(pReqAuthenticateField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqAuthenticateField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqAuthenticateField_UserID, sizeof(self->data.UserID) );
		pReqAuthenticateField_UserID = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqAuthenticateField_UserProductInfo != NULL) {
		if(pReqAuthenticateField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pReqAuthenticateField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pReqAuthenticateField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pReqAuthenticateField_UserProductInfo = NULL;
	}

	//TThostFtdcAuthCodeType char[17]
	if(pReqAuthenticateField_AuthCode != NULL) {
		if(pReqAuthenticateField_AuthCode_len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
			PyErr_Format(PyExc_ValueError, "AuthCode too long: length=%zd (max allowed is %zd)", pReqAuthenticateField_AuthCode_len, (Py_ssize_t)sizeof(self->data.AuthCode));
			return -1;
		}
		strncpy(self->data.AuthCode, pReqAuthenticateField_AuthCode, sizeof(self->data.AuthCode) );
		pReqAuthenticateField_AuthCode = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pReqAuthenticateField_AppID != NULL) {
		if(pReqAuthenticateField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
			PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", pReqAuthenticateField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
			return -1;
		}
		strncpy(self->data.AppID, pReqAuthenticateField_AppID, sizeof(self->data.AppID) );
		pReqAuthenticateField_AppID = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqAuthenticateField_dealloc(PyCThostFtdcReqAuthenticateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqAuthenticateField_repr(PyCThostFtdcReqAuthenticateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "UserProductInfo", self->data.UserProductInfo 
		, "AuthCode", self->data.AuthCode 
		, "AppID", self->data.AppID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqAuthenticateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqAuthenticateField_get_BrokerID(PyCThostFtdcReqAuthenticateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqAuthenticateField_get_UserID(PyCThostFtdcReqAuthenticateField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqAuthenticateField_get_UserProductInfo(PyCThostFtdcReqAuthenticateField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcReqAuthenticateField_get_AuthCode(PyCThostFtdcReqAuthenticateField *self, void *closure) {
	return PyBytes_FromString(self->data.AuthCode);
}

static PyObject *PyCThostFtdcReqAuthenticateField_get_AppID(PyCThostFtdcReqAuthenticateField *self, void *closure) {
	return PyBytes_FromString(self->data.AppID);
}

static int PyCThostFtdcReqAuthenticateField_set_BrokerID(PyCThostFtdcReqAuthenticateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqAuthenticateField_set_UserID(PyCThostFtdcReqAuthenticateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqAuthenticateField_set_UserProductInfo(PyCThostFtdcReqAuthenticateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqAuthenticateField_set_AuthCode(PyCThostFtdcReqAuthenticateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AuthCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
		PyErr_SetString(PyExc_ValueError, "AuthCode must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.AuthCode, buf, sizeof(self->data.AuthCode));
	return 0;
}

static int PyCThostFtdcReqAuthenticateField_set_AppID(PyCThostFtdcReqAuthenticateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqAuthenticateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqAuthenticateField_get_BrokerID, (setter)PyCThostFtdcReqAuthenticateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqAuthenticateField_get_UserID, (setter)PyCThostFtdcReqAuthenticateField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcReqAuthenticateField_get_UserProductInfo, (setter)PyCThostFtdcReqAuthenticateField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"AuthCode", (getter)PyCThostFtdcReqAuthenticateField_get_AuthCode, (setter)PyCThostFtdcReqAuthenticateField_set_AuthCode, (char *)"AuthCode", NULL},
	 {(char *)"AppID", (getter)PyCThostFtdcReqAuthenticateField_get_AppID, (setter)PyCThostFtdcReqAuthenticateField_set_AppID, (char *)"AppID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqAuthenticateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqAuthenticateField",	/* tp_name */
	sizeof(PyCThostFtdcReqAuthenticateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqAuthenticateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqAuthenticateField_repr,   /* tp_repr */
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
	"CThostFtdcReqAuthenticateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqAuthenticateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqAuthenticateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqAuthenticateField_new,       /* tp_new */
};

int PyCThostFtdcReqAuthenticateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqAuthenticateField  */
	if (PyType_Ready(&PyCThostFtdcReqAuthenticateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqAuthenticateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqAuthenticateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqAuthenticateField", (PyObject *)&PyCThostFtdcReqAuthenticateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqAuthenticateField to module");
        Py_DECREF(&PyCThostFtdcReqAuthenticateFieldType);
		return -1;
    }

    return 0;
}
