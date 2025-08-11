
#include "PyCThostFtdcQryAccountregisterField.h"



static PyObject *PyCThostFtdcQryAccountregisterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryAccountregisterField *self = (PyCThostFtdcQryAccountregisterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryAccountregisterField_init(PyCThostFtdcQryAccountregisterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "BankID", "BankBranchID", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryAccountregisterField_BrokerID = NULL;
	Py_ssize_t pQryAccountregisterField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQryAccountregisterField_AccountID = NULL;
	Py_ssize_t pQryAccountregisterField_AccountID_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pQryAccountregisterField_BankID = NULL;
	Py_ssize_t pQryAccountregisterField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pQryAccountregisterField_BankBranchID = NULL;
	Py_ssize_t pQryAccountregisterField_BankBranchID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQryAccountregisterField_CurrencyID = NULL;
	Py_ssize_t pQryAccountregisterField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryAccountregisterField_BrokerID, &pQryAccountregisterField_BrokerID_len
		, &pQryAccountregisterField_AccountID, &pQryAccountregisterField_AccountID_len
		, &pQryAccountregisterField_BankID, &pQryAccountregisterField_BankID_len
		, &pQryAccountregisterField_BankBranchID, &pQryAccountregisterField_BankBranchID_len
		, &pQryAccountregisterField_CurrencyID, &pQryAccountregisterField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryAccountregisterField_BrokerID != NULL) {
		if(pQryAccountregisterField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryAccountregisterField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryAccountregisterField_BrokerID, sizeof(self->data.BrokerID) );
		pQryAccountregisterField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pQryAccountregisterField_AccountID != NULL) {
		if(pQryAccountregisterField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pQryAccountregisterField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pQryAccountregisterField_AccountID, sizeof(self->data.AccountID) );
		pQryAccountregisterField_AccountID = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pQryAccountregisterField_BankID != NULL) {
		if(pQryAccountregisterField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pQryAccountregisterField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pQryAccountregisterField_BankID, sizeof(self->data.BankID) );
		pQryAccountregisterField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pQryAccountregisterField_BankBranchID != NULL) {
		if(pQryAccountregisterField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pQryAccountregisterField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pQryAccountregisterField_BankBranchID, sizeof(self->data.BankBranchID) );
		pQryAccountregisterField_BankBranchID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQryAccountregisterField_CurrencyID != NULL) {
		if(pQryAccountregisterField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pQryAccountregisterField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pQryAccountregisterField_CurrencyID, sizeof(self->data.CurrencyID) );
		pQryAccountregisterField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryAccountregisterField_dealloc(PyCThostFtdcQryAccountregisterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryAccountregisterField_repr(PyCThostFtdcQryAccountregisterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "BankID", self->data.BankID 
		, "BankBranchID", self->data.BankBranchID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryAccountregisterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryAccountregisterField_get_BrokerID(PyCThostFtdcQryAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryAccountregisterField_get_AccountID(PyCThostFtdcQryAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcQryAccountregisterField_get_BankID(PyCThostFtdcQryAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcQryAccountregisterField_get_BankBranchID(PyCThostFtdcQryAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcQryAccountregisterField_get_CurrencyID(PyCThostFtdcQryAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcQryAccountregisterField_set_BrokerID(PyCThostFtdcQryAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryAccountregisterField_set_AccountID(PyCThostFtdcQryAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryAccountregisterField_set_BankID(PyCThostFtdcQryAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
		PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
	return 0;
}

static int PyCThostFtdcQryAccountregisterField_set_BankBranchID(PyCThostFtdcQryAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
		PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.BankBranchID, buf, sizeof(self->data.BankBranchID));
	return 0;
}

static int PyCThostFtdcQryAccountregisterField_set_CurrencyID(PyCThostFtdcQryAccountregisterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryAccountregisterField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryAccountregisterField_get_BrokerID, (setter)PyCThostFtdcQryAccountregisterField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcQryAccountregisterField_get_AccountID, (setter)PyCThostFtdcQryAccountregisterField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcQryAccountregisterField_get_BankID, (setter)PyCThostFtdcQryAccountregisterField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcQryAccountregisterField_get_BankBranchID, (setter)PyCThostFtdcQryAccountregisterField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcQryAccountregisterField_get_CurrencyID, (setter)PyCThostFtdcQryAccountregisterField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryAccountregisterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryAccountregisterField",	/* tp_name */
	sizeof(PyCThostFtdcQryAccountregisterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryAccountregisterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryAccountregisterField_repr,   /* tp_repr */
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
	"CThostFtdcQryAccountregisterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryAccountregisterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryAccountregisterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryAccountregisterField_new,       /* tp_new */
};

int PyCThostFtdcQryAccountregisterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryAccountregisterField  */
	if (PyType_Ready(&PyCThostFtdcQryAccountregisterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryAccountregisterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryAccountregisterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryAccountregisterField", (PyObject *)&PyCThostFtdcQryAccountregisterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryAccountregisterField to module");
        Py_DECREF(&PyCThostFtdcQryAccountregisterFieldType);
		return -1;
    }

    return 0;
}
