
#include "PyCThostFtdcTradingAccountPasswordUpdateField.h"



static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordUpdateField *self = (PyCThostFtdcTradingAccountPasswordUpdateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordUpdateField_init(PyCThostFtdcTradingAccountPasswordUpdateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "OldPassword", "NewPassword", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingAccountPasswordUpdateField_BrokerID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTradingAccountPasswordUpdateField_AccountID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTradingAccountPasswordUpdateField_OldPassword = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateField_OldPassword_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTradingAccountPasswordUpdateField_NewPassword = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateField_NewPassword_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pTradingAccountPasswordUpdateField_CurrencyID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

		, &pTradingAccountPasswordUpdateField_BrokerID, &pTradingAccountPasswordUpdateField_BrokerID_len
		, &pTradingAccountPasswordUpdateField_AccountID, &pTradingAccountPasswordUpdateField_AccountID_len
		, &pTradingAccountPasswordUpdateField_OldPassword, &pTradingAccountPasswordUpdateField_OldPassword_len
		, &pTradingAccountPasswordUpdateField_NewPassword, &pTradingAccountPasswordUpdateField_NewPassword_len
		, &pTradingAccountPasswordUpdateField_CurrencyID, &pTradingAccountPasswordUpdateField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingAccountPasswordUpdateField_BrokerID != NULL) {
		if(pTradingAccountPasswordUpdateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingAccountPasswordUpdateField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingAccountPasswordUpdateField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTradingAccountPasswordUpdateField_AccountID != NULL) {
		if(pTradingAccountPasswordUpdateField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pTradingAccountPasswordUpdateField_AccountID, sizeof(self->data.AccountID) );
		pTradingAccountPasswordUpdateField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTradingAccountPasswordUpdateField_OldPassword != NULL) {
		if(pTradingAccountPasswordUpdateField_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
			PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateField_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
			return -1;
		}
		strncpy(self->data.OldPassword, pTradingAccountPasswordUpdateField_OldPassword, sizeof(self->data.OldPassword) );
		pTradingAccountPasswordUpdateField_OldPassword = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTradingAccountPasswordUpdateField_NewPassword != NULL) {
		if(pTradingAccountPasswordUpdateField_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
			PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateField_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
			return -1;
		}
		strncpy(self->data.NewPassword, pTradingAccountPasswordUpdateField_NewPassword, sizeof(self->data.NewPassword) );
		pTradingAccountPasswordUpdateField_NewPassword = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pTradingAccountPasswordUpdateField_CurrencyID != NULL) {
		if(pTradingAccountPasswordUpdateField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pTradingAccountPasswordUpdateField_CurrencyID, sizeof(self->data.CurrencyID) );
		pTradingAccountPasswordUpdateField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradingAccountPasswordUpdateField_dealloc(PyCThostFtdcTradingAccountPasswordUpdateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_repr(PyCThostFtdcTradingAccountPasswordUpdateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "OldPassword", self->data.OldPassword 
		, "NewPassword", self->data.NewPassword 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_AccountID(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.OldPassword);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.NewPassword);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcTradingAccountPasswordUpdateField_set_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordUpdateField_set_AccountID(PyCThostFtdcTradingAccountPasswordUpdateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcTradingAccountPasswordUpdateField_set_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
		PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.OldPassword, buf, sizeof(self->data.OldPassword));
	return 0;
}

static int PyCThostFtdcTradingAccountPasswordUpdateField_set_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
		PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.NewPassword, buf, sizeof(self->data.NewPassword));
	return 0;
}

static int PyCThostFtdcTradingAccountPasswordUpdateField_set_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
	return 0;
}



static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_AccountID, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"OldPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_OldPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_OldPassword, (char *)"OldPassword", NULL},
	 {(char *)"NewPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_NewPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_NewPassword, (char *)"NewPassword", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountPasswordUpdateField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountPasswordUpdateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountPasswordUpdateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountPasswordUpdateField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountPasswordUpdateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountPasswordUpdateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountPasswordUpdateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountPasswordUpdateField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountPasswordUpdateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountPasswordUpdateField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountPasswordUpdateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountPasswordUpdateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountPasswordUpdateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateField", (PyObject *)&PyCThostFtdcTradingAccountPasswordUpdateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountPasswordUpdateFieldType);
		return -1;
    }

    return 0;
}
