
#include "PyCThostFtdcQrySettlementInfoConfirmField.h"



static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySettlementInfoConfirmField *self = (PyCThostFtdcQrySettlementInfoConfirmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySettlementInfoConfirmField_init(PyCThostFtdcQrySettlementInfoConfirmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "AccountID", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQrySettlementInfoConfirmField_BrokerID = NULL;
	Py_ssize_t pQrySettlementInfoConfirmField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQrySettlementInfoConfirmField_InvestorID = NULL;
	Py_ssize_t pQrySettlementInfoConfirmField_InvestorID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQrySettlementInfoConfirmField_AccountID = NULL;
	Py_ssize_t pQrySettlementInfoConfirmField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQrySettlementInfoConfirmField_CurrencyID = NULL;
	Py_ssize_t pQrySettlementInfoConfirmField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQrySettlementInfoConfirmField_BrokerID, &pQrySettlementInfoConfirmField_BrokerID_len
		, &pQrySettlementInfoConfirmField_InvestorID, &pQrySettlementInfoConfirmField_InvestorID_len
		, &pQrySettlementInfoConfirmField_AccountID, &pQrySettlementInfoConfirmField_AccountID_len
		, &pQrySettlementInfoConfirmField_CurrencyID, &pQrySettlementInfoConfirmField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQrySettlementInfoConfirmField_BrokerID != NULL) {
		if(pQrySettlementInfoConfirmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoConfirmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQrySettlementInfoConfirmField_BrokerID, sizeof(self->data.BrokerID) );
		pQrySettlementInfoConfirmField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQrySettlementInfoConfirmField_InvestorID != NULL) {
		if(pQrySettlementInfoConfirmField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoConfirmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQrySettlementInfoConfirmField_InvestorID, sizeof(self->data.InvestorID) );
		pQrySettlementInfoConfirmField_InvestorID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pQrySettlementInfoConfirmField_AccountID != NULL) {
		if(pQrySettlementInfoConfirmField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoConfirmField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pQrySettlementInfoConfirmField_AccountID, sizeof(self->data.AccountID) );
		pQrySettlementInfoConfirmField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQrySettlementInfoConfirmField_CurrencyID != NULL) {
		if(pQrySettlementInfoConfirmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoConfirmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pQrySettlementInfoConfirmField_CurrencyID, sizeof(self->data.CurrencyID) );
		pQrySettlementInfoConfirmField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySettlementInfoConfirmField_dealloc(PyCThostFtdcQrySettlementInfoConfirmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_repr(PyCThostFtdcQrySettlementInfoConfirmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoConfirmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_BrokerID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_InvestorID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_AccountID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_CurrencyID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcQrySettlementInfoConfirmField_set_BrokerID(PyCThostFtdcQrySettlementInfoConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySettlementInfoConfirmField_set_InvestorID(PyCThostFtdcQrySettlementInfoConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySettlementInfoConfirmField_set_AccountID(PyCThostFtdcQrySettlementInfoConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySettlementInfoConfirmField_set_CurrencyID(PyCThostFtdcQrySettlementInfoConfirmField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQrySettlementInfoConfirmField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_BrokerID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_InvestorID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_AccountID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_CurrencyID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySettlementInfoConfirmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySettlementInfoConfirmField",	/* tp_name */
	sizeof(PyCThostFtdcQrySettlementInfoConfirmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySettlementInfoConfirmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySettlementInfoConfirmField_repr,   /* tp_repr */
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
	"CThostFtdcQrySettlementInfoConfirmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySettlementInfoConfirmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySettlementInfoConfirmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySettlementInfoConfirmField_new,       /* tp_new */
};

int PyCThostFtdcQrySettlementInfoConfirmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySettlementInfoConfirmField  */
	if (PyType_Ready(&PyCThostFtdcQrySettlementInfoConfirmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySettlementInfoConfirmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySettlementInfoConfirmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySettlementInfoConfirmField", (PyObject *)&PyCThostFtdcQrySettlementInfoConfirmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySettlementInfoConfirmField to module");
        Py_DECREF(&PyCThostFtdcQrySettlementInfoConfirmFieldType);
		return -1;
    }

    return 0;
}
