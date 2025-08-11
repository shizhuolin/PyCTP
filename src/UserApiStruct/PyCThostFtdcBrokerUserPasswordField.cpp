
#include "PyCThostFtdcBrokerUserPasswordField.h"



static PyObject *PyCThostFtdcBrokerUserPasswordField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserPasswordField *self = (PyCThostFtdcBrokerUserPasswordField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserPasswordField_init(PyCThostFtdcBrokerUserPasswordField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "Password", "LastUpdateTime", "LastLoginTime", "ExpireDate", "WeakExpireDate",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerUserPasswordField_BrokerID = NULL;
	Py_ssize_t pBrokerUserPasswordField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pBrokerUserPasswordField_UserID = NULL;
	Py_ssize_t pBrokerUserPasswordField_UserID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pBrokerUserPasswordField_Password = NULL;
	Py_ssize_t pBrokerUserPasswordField_Password_len = 0;

	//TThostFtdcDateTimeType char[17]
	const char *pBrokerUserPasswordField_LastUpdateTime = NULL;
	Py_ssize_t pBrokerUserPasswordField_LastUpdateTime_len = 0;

	//TThostFtdcDateTimeType char[17]
	const char *pBrokerUserPasswordField_LastLoginTime = NULL;
	Py_ssize_t pBrokerUserPasswordField_LastLoginTime_len = 0;

	//TThostFtdcDateType char[9]
	const char *pBrokerUserPasswordField_ExpireDate = NULL;
	Py_ssize_t pBrokerUserPasswordField_ExpireDate_len = 0;

	//TThostFtdcDateType char[9]
	const char *pBrokerUserPasswordField_WeakExpireDate = NULL;
	Py_ssize_t pBrokerUserPasswordField_WeakExpireDate_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pBrokerUserPasswordField_BrokerID, &pBrokerUserPasswordField_BrokerID_len
		, &pBrokerUserPasswordField_UserID, &pBrokerUserPasswordField_UserID_len
		, &pBrokerUserPasswordField_Password, &pBrokerUserPasswordField_Password_len
		, &pBrokerUserPasswordField_LastUpdateTime, &pBrokerUserPasswordField_LastUpdateTime_len
		, &pBrokerUserPasswordField_LastLoginTime, &pBrokerUserPasswordField_LastLoginTime_len
		, &pBrokerUserPasswordField_ExpireDate, &pBrokerUserPasswordField_ExpireDate_len
		, &pBrokerUserPasswordField_WeakExpireDate, &pBrokerUserPasswordField_WeakExpireDate_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerUserPasswordField_BrokerID != NULL) {
		if(pBrokerUserPasswordField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerUserPasswordField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerUserPasswordField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerUserPasswordField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pBrokerUserPasswordField_UserID != NULL) {
		if(pBrokerUserPasswordField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pBrokerUserPasswordField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pBrokerUserPasswordField_UserID, sizeof(self->data.UserID) );
		pBrokerUserPasswordField_UserID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pBrokerUserPasswordField_Password != NULL) {
		if(pBrokerUserPasswordField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pBrokerUserPasswordField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pBrokerUserPasswordField_Password, sizeof(self->data.Password) );
		pBrokerUserPasswordField_Password = NULL;
	}

	//TThostFtdcDateTimeType char[17]
	if(pBrokerUserPasswordField_LastUpdateTime != NULL) {
		if(pBrokerUserPasswordField_LastUpdateTime_len > (Py_ssize_t)sizeof(self->data.LastUpdateTime)) {
			PyErr_Format(PyExc_ValueError, "LastUpdateTime too long: length=%zd (max allowed is %zd)", pBrokerUserPasswordField_LastUpdateTime_len, (Py_ssize_t)sizeof(self->data.LastUpdateTime));
			return -1;
		}
		strncpy(self->data.LastUpdateTime, pBrokerUserPasswordField_LastUpdateTime, sizeof(self->data.LastUpdateTime) );
		pBrokerUserPasswordField_LastUpdateTime = NULL;
	}

	//TThostFtdcDateTimeType char[17]
	if(pBrokerUserPasswordField_LastLoginTime != NULL) {
		if(pBrokerUserPasswordField_LastLoginTime_len > (Py_ssize_t)sizeof(self->data.LastLoginTime)) {
			PyErr_Format(PyExc_ValueError, "LastLoginTime too long: length=%zd (max allowed is %zd)", pBrokerUserPasswordField_LastLoginTime_len, (Py_ssize_t)sizeof(self->data.LastLoginTime));
			return -1;
		}
		strncpy(self->data.LastLoginTime, pBrokerUserPasswordField_LastLoginTime, sizeof(self->data.LastLoginTime) );
		pBrokerUserPasswordField_LastLoginTime = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pBrokerUserPasswordField_ExpireDate != NULL) {
		if(pBrokerUserPasswordField_ExpireDate_len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
			PyErr_Format(PyExc_ValueError, "ExpireDate too long: length=%zd (max allowed is %zd)", pBrokerUserPasswordField_ExpireDate_len, (Py_ssize_t)sizeof(self->data.ExpireDate));
			return -1;
		}
		strncpy(self->data.ExpireDate, pBrokerUserPasswordField_ExpireDate, sizeof(self->data.ExpireDate) );
		pBrokerUserPasswordField_ExpireDate = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pBrokerUserPasswordField_WeakExpireDate != NULL) {
		if(pBrokerUserPasswordField_WeakExpireDate_len > (Py_ssize_t)sizeof(self->data.WeakExpireDate)) {
			PyErr_Format(PyExc_ValueError, "WeakExpireDate too long: length=%zd (max allowed is %zd)", pBrokerUserPasswordField_WeakExpireDate_len, (Py_ssize_t)sizeof(self->data.WeakExpireDate));
			return -1;
		}
		strncpy(self->data.WeakExpireDate, pBrokerUserPasswordField_WeakExpireDate, sizeof(self->data.WeakExpireDate) );
		pBrokerUserPasswordField_WeakExpireDate = NULL;
	}



    return 0;
}

static void PyCThostFtdcBrokerUserPasswordField_dealloc(PyCThostFtdcBrokerUserPasswordField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_repr(PyCThostFtdcBrokerUserPasswordField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "Password", self->data.Password 
		, "LastUpdateTime", self->data.LastUpdateTime 
		, "LastLoginTime", self->data.LastLoginTime 
		, "ExpireDate", self->data.ExpireDate 
		, "WeakExpireDate", self->data.WeakExpireDate 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserPasswordField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_get_BrokerID(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_get_UserID(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_get_Password(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_get_LastUpdateTime(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.LastUpdateTime);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_get_LastLoginTime(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.LastLoginTime);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_get_ExpireDate(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.ExpireDate);
}

static PyObject *PyCThostFtdcBrokerUserPasswordField_get_WeakExpireDate(PyCThostFtdcBrokerUserPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.WeakExpireDate);
}

static int PyCThostFtdcBrokerUserPasswordField_set_BrokerID(PyCThostFtdcBrokerUserPasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserPasswordField_set_UserID(PyCThostFtdcBrokerUserPasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerUserPasswordField_set_Password(PyCThostFtdcBrokerUserPasswordField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Password)) {
		PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Password, buf, sizeof(self->data.Password));
	return 0;
}

static int PyCThostFtdcBrokerUserPasswordField_set_LastUpdateTime(PyCThostFtdcBrokerUserPasswordField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastUpdateTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastUpdateTime)) {
		PyErr_SetString(PyExc_ValueError, "LastUpdateTime must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.LastUpdateTime, buf, sizeof(self->data.LastUpdateTime));
	return 0;
}

static int PyCThostFtdcBrokerUserPasswordField_set_LastLoginTime(PyCThostFtdcBrokerUserPasswordField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastLoginTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastLoginTime)) {
		PyErr_SetString(PyExc_ValueError, "LastLoginTime must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.LastLoginTime, buf, sizeof(self->data.LastLoginTime));
	return 0;
}

static int PyCThostFtdcBrokerUserPasswordField_set_ExpireDate(PyCThostFtdcBrokerUserPasswordField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExpireDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExpireDate)) {
		PyErr_SetString(PyExc_ValueError, "ExpireDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExpireDate, buf, sizeof(self->data.ExpireDate));
	return 0;
}

static int PyCThostFtdcBrokerUserPasswordField_set_WeakExpireDate(PyCThostFtdcBrokerUserPasswordField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "WeakExpireDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.WeakExpireDate)) {
		PyErr_SetString(PyExc_ValueError, "WeakExpireDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.WeakExpireDate, buf, sizeof(self->data.WeakExpireDate));
	return 0;
}



static PyGetSetDef PyCThostFtdcBrokerUserPasswordField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserPasswordField_get_BrokerID, (setter)PyCThostFtdcBrokerUserPasswordField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcBrokerUserPasswordField_get_UserID, (setter)PyCThostFtdcBrokerUserPasswordField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcBrokerUserPasswordField_get_Password, (setter)PyCThostFtdcBrokerUserPasswordField_set_Password, (char *)"Password", NULL},
	 {(char *)"LastUpdateTime", (getter)PyCThostFtdcBrokerUserPasswordField_get_LastUpdateTime, (setter)PyCThostFtdcBrokerUserPasswordField_set_LastUpdateTime, (char *)"LastUpdateTime", NULL},
	 {(char *)"LastLoginTime", (getter)PyCThostFtdcBrokerUserPasswordField_get_LastLoginTime, (setter)PyCThostFtdcBrokerUserPasswordField_set_LastLoginTime, (char *)"LastLoginTime", NULL},
	 {(char *)"ExpireDate", (getter)PyCThostFtdcBrokerUserPasswordField_get_ExpireDate, (setter)PyCThostFtdcBrokerUserPasswordField_set_ExpireDate, (char *)"ExpireDate", NULL},
	 {(char *)"WeakExpireDate", (getter)PyCThostFtdcBrokerUserPasswordField_get_WeakExpireDate, (setter)PyCThostFtdcBrokerUserPasswordField_set_WeakExpireDate, (char *)"WeakExpireDate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserPasswordFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserPasswordField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserPasswordField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserPasswordField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserPasswordField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserPasswordField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserPasswordField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserPasswordField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserPasswordField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserPasswordFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserPasswordField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserPasswordFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserPasswordField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserPasswordFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserPasswordField", (PyObject *)&PyCThostFtdcBrokerUserPasswordFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserPasswordField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserPasswordFieldType);
		return -1;
    }

    return 0;
}
