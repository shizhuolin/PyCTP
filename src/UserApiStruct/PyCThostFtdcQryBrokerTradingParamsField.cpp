
#include "PyCThostFtdcQryBrokerTradingParamsField.h"



static PyObject *PyCThostFtdcQryBrokerTradingParamsField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBrokerTradingParamsField *self = (PyCThostFtdcQryBrokerTradingParamsField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryBrokerTradingParamsField_init(PyCThostFtdcQryBrokerTradingParamsField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "CurrencyID", "AccountID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryBrokerTradingParamsField_BrokerID = NULL;
	Py_ssize_t pQryBrokerTradingParamsField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryBrokerTradingParamsField_InvestorID = NULL;
	Py_ssize_t pQryBrokerTradingParamsField_InvestorID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQryBrokerTradingParamsField_CurrencyID = NULL;
	Py_ssize_t pQryBrokerTradingParamsField_CurrencyID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQryBrokerTradingParamsField_AccountID = NULL;
	Py_ssize_t pQryBrokerTradingParamsField_AccountID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryBrokerTradingParamsField_BrokerID, &pQryBrokerTradingParamsField_BrokerID_len
		, &pQryBrokerTradingParamsField_InvestorID, &pQryBrokerTradingParamsField_InvestorID_len
		, &pQryBrokerTradingParamsField_CurrencyID, &pQryBrokerTradingParamsField_CurrencyID_len
		, &pQryBrokerTradingParamsField_AccountID, &pQryBrokerTradingParamsField_AccountID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryBrokerTradingParamsField_BrokerID != NULL) {
		if(pQryBrokerTradingParamsField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryBrokerTradingParamsField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryBrokerTradingParamsField_BrokerID, sizeof(self->data.BrokerID) );
		pQryBrokerTradingParamsField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryBrokerTradingParamsField_InvestorID != NULL) {
		if(pQryBrokerTradingParamsField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryBrokerTradingParamsField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryBrokerTradingParamsField_InvestorID, sizeof(self->data.InvestorID) );
		pQryBrokerTradingParamsField_InvestorID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQryBrokerTradingParamsField_CurrencyID != NULL) {
		if(pQryBrokerTradingParamsField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pQryBrokerTradingParamsField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pQryBrokerTradingParamsField_CurrencyID, sizeof(self->data.CurrencyID) );
		pQryBrokerTradingParamsField_CurrencyID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pQryBrokerTradingParamsField_AccountID != NULL) {
		if(pQryBrokerTradingParamsField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pQryBrokerTradingParamsField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pQryBrokerTradingParamsField_AccountID, sizeof(self->data.AccountID) );
		pQryBrokerTradingParamsField_AccountID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryBrokerTradingParamsField_dealloc(PyCThostFtdcQryBrokerTradingParamsField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBrokerTradingParamsField_repr(PyCThostFtdcQryBrokerTradingParamsField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "CurrencyID", self->data.CurrencyID 
		, "AccountID", self->data.AccountID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerTradingParamsField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryBrokerTradingParamsField_get_BrokerID(PyCThostFtdcQryBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryBrokerTradingParamsField_get_InvestorID(PyCThostFtdcQryBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryBrokerTradingParamsField_get_CurrencyID(PyCThostFtdcQryBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcQryBrokerTradingParamsField_get_AccountID(PyCThostFtdcQryBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static int PyCThostFtdcQryBrokerTradingParamsField_set_BrokerID(PyCThostFtdcQryBrokerTradingParamsField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryBrokerTradingParamsField_set_InvestorID(PyCThostFtdcQryBrokerTradingParamsField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcQryBrokerTradingParamsField_set_CurrencyID(PyCThostFtdcQryBrokerTradingParamsField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryBrokerTradingParamsField_set_AccountID(PyCThostFtdcQryBrokerTradingParamsField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryBrokerTradingParamsField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryBrokerTradingParamsField_get_BrokerID, (setter)PyCThostFtdcQryBrokerTradingParamsField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryBrokerTradingParamsField_get_InvestorID, (setter)PyCThostFtdcQryBrokerTradingParamsField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcQryBrokerTradingParamsField_get_CurrencyID, (setter)PyCThostFtdcQryBrokerTradingParamsField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcQryBrokerTradingParamsField_get_AccountID, (setter)PyCThostFtdcQryBrokerTradingParamsField_set_AccountID, (char *)"AccountID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBrokerTradingParamsFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBrokerTradingParamsField",	/* tp_name */
	sizeof(PyCThostFtdcQryBrokerTradingParamsField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBrokerTradingParamsField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBrokerTradingParamsField_repr,   /* tp_repr */
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
	"CThostFtdcQryBrokerTradingParamsField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBrokerTradingParamsField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBrokerTradingParamsField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBrokerTradingParamsField_new,       /* tp_new */
};

int PyCThostFtdcQryBrokerTradingParamsFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBrokerTradingParamsField  */
	if (PyType_Ready(&PyCThostFtdcQryBrokerTradingParamsFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBrokerTradingParamsField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBrokerTradingParamsFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBrokerTradingParamsField", (PyObject *)&PyCThostFtdcQryBrokerTradingParamsFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerTradingParamsField to module");
        Py_DECREF(&PyCThostFtdcQryBrokerTradingParamsFieldType);
		return -1;
    }

    return 0;
}
