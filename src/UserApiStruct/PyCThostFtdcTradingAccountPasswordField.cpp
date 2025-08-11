
#include "PyCThostFtdcTradingAccountPasswordField.h"



static PyObject *PyCThostFtdcTradingAccountPasswordField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordField *self = (PyCThostFtdcTradingAccountPasswordField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordField_init(PyCThostFtdcTradingAccountPasswordField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "Password", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingAccountPasswordField_BrokerID = NULL;
	Py_ssize_t pTradingAccountPasswordField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTradingAccountPasswordField_AccountID = NULL;
	Py_ssize_t pTradingAccountPasswordField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTradingAccountPasswordField_Password = NULL;
	Py_ssize_t pTradingAccountPasswordField_Password_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pTradingAccountPasswordField_CurrencyID = NULL;
	Py_ssize_t pTradingAccountPasswordField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pTradingAccountPasswordField_BrokerID, &pTradingAccountPasswordField_BrokerID_len
		, &pTradingAccountPasswordField_AccountID, &pTradingAccountPasswordField_AccountID_len
		, &pTradingAccountPasswordField_Password, &pTradingAccountPasswordField_Password_len
		, &pTradingAccountPasswordField_CurrencyID, &pTradingAccountPasswordField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingAccountPasswordField_BrokerID != NULL) {
		if(pTradingAccountPasswordField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingAccountPasswordField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingAccountPasswordField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTradingAccountPasswordField_AccountID != NULL) {
		if(pTradingAccountPasswordField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pTradingAccountPasswordField_AccountID, sizeof(self->data.AccountID) );
		pTradingAccountPasswordField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTradingAccountPasswordField_Password != NULL) {
		if(pTradingAccountPasswordField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pTradingAccountPasswordField_Password, sizeof(self->data.Password) );
		pTradingAccountPasswordField_Password = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pTradingAccountPasswordField_CurrencyID != NULL) {
		if(pTradingAccountPasswordField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pTradingAccountPasswordField_CurrencyID, sizeof(self->data.CurrencyID) );
		pTradingAccountPasswordField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradingAccountPasswordField_dealloc(PyCThostFtdcTradingAccountPasswordField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountPasswordField_repr(PyCThostFtdcTradingAccountPasswordField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingAccountPasswordField_get_BrokerID(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordField_get_AccountID(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordField_get_Password(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcTradingAccountPasswordField_get_CurrencyID(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcTradingAccountPasswordField_set_BrokerID(PyCThostFtdcTradingAccountPasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordField_set_AccountID(PyCThostFtdcTradingAccountPasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordField_set_Password(PyCThostFtdcTradingAccountPasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordField_set_CurrencyID(PyCThostFtdcTradingAccountPasswordField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTradingAccountPasswordField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordField_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountPasswordField_get_AccountID, (setter)PyCThostFtdcTradingAccountPasswordField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcTradingAccountPasswordField_get_Password, (setter)PyCThostFtdcTradingAccountPasswordField_set_Password, (char *)"Password", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountPasswordField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountPasswordField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountPasswordFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountPasswordField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountPasswordField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountPasswordField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountPasswordField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountPasswordField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountPasswordField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountPasswordField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountPasswordField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountPasswordFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountPasswordField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountPasswordFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountPasswordField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountPasswordFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordField", (PyObject *)&PyCThostFtdcTradingAccountPasswordFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountPasswordFieldType);
		return -1;
    }

    return 0;
}
