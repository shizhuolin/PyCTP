
#include "PyCThostFtdcQrySettlementInfoField.h"



static PyObject *PyCThostFtdcQrySettlementInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySettlementInfoField *self = (PyCThostFtdcQrySettlementInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySettlementInfoField_init(PyCThostFtdcQrySettlementInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "TradingDay", "AccountID", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQrySettlementInfoField_BrokerID = NULL;
	Py_ssize_t pQrySettlementInfoField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQrySettlementInfoField_InvestorID = NULL;
	Py_ssize_t pQrySettlementInfoField_InvestorID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pQrySettlementInfoField_TradingDay = NULL;
	Py_ssize_t pQrySettlementInfoField_TradingDay_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pQrySettlementInfoField_AccountID = NULL;
	Py_ssize_t pQrySettlementInfoField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQrySettlementInfoField_CurrencyID = NULL;
	Py_ssize_t pQrySettlementInfoField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

		, &pQrySettlementInfoField_BrokerID, &pQrySettlementInfoField_BrokerID_len
		, &pQrySettlementInfoField_InvestorID, &pQrySettlementInfoField_InvestorID_len
		, &pQrySettlementInfoField_TradingDay, &pQrySettlementInfoField_TradingDay_len
		, &pQrySettlementInfoField_AccountID, &pQrySettlementInfoField_AccountID_len
		, &pQrySettlementInfoField_CurrencyID, &pQrySettlementInfoField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQrySettlementInfoField_BrokerID != NULL) {
		if(pQrySettlementInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQrySettlementInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pQrySettlementInfoField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQrySettlementInfoField_InvestorID != NULL) {
		if(pQrySettlementInfoField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQrySettlementInfoField_InvestorID, sizeof(self->data.InvestorID) );
		pQrySettlementInfoField_InvestorID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pQrySettlementInfoField_TradingDay != NULL) {
		if(pQrySettlementInfoField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pQrySettlementInfoField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pQrySettlementInfoField_TradingDay, sizeof(self->data.TradingDay) );
		pQrySettlementInfoField_TradingDay = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pQrySettlementInfoField_AccountID != NULL) {
		if(pQrySettlementInfoField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pQrySettlementInfoField_AccountID, sizeof(self->data.AccountID) );
		pQrySettlementInfoField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQrySettlementInfoField_CurrencyID != NULL) {
		if(pQrySettlementInfoField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pQrySettlementInfoField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pQrySettlementInfoField_CurrencyID, sizeof(self->data.CurrencyID) );
		pQrySettlementInfoField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySettlementInfoField_dealloc(PyCThostFtdcQrySettlementInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySettlementInfoField_repr(PyCThostFtdcQrySettlementInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "TradingDay", self->data.TradingDay 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySettlementInfoField_get_BrokerID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQrySettlementInfoField_get_InvestorID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQrySettlementInfoField_get_TradingDay(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcQrySettlementInfoField_get_AccountID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcQrySettlementInfoField_get_CurrencyID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcQrySettlementInfoField_set_BrokerID(PyCThostFtdcQrySettlementInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySettlementInfoField_set_InvestorID(PyCThostFtdcQrySettlementInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySettlementInfoField_set_TradingDay(PyCThostFtdcQrySettlementInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
		PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcQrySettlementInfoField_set_AccountID(PyCThostFtdcQrySettlementInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySettlementInfoField_set_CurrencyID(PyCThostFtdcQrySettlementInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQrySettlementInfoField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQrySettlementInfoField_get_BrokerID, (setter)PyCThostFtdcQrySettlementInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQrySettlementInfoField_get_InvestorID, (setter)PyCThostFtdcQrySettlementInfoField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcQrySettlementInfoField_get_TradingDay, (setter)PyCThostFtdcQrySettlementInfoField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcQrySettlementInfoField_get_AccountID, (setter)PyCThostFtdcQrySettlementInfoField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcQrySettlementInfoField_get_CurrencyID, (setter)PyCThostFtdcQrySettlementInfoField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySettlementInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySettlementInfoField",	/* tp_name */
	sizeof(PyCThostFtdcQrySettlementInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySettlementInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySettlementInfoField_repr,   /* tp_repr */
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
	"CThostFtdcQrySettlementInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySettlementInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySettlementInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySettlementInfoField_new,       /* tp_new */
};

int PyCThostFtdcQrySettlementInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySettlementInfoField  */
	if (PyType_Ready(&PyCThostFtdcQrySettlementInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySettlementInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySettlementInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySettlementInfoField", (PyObject *)&PyCThostFtdcQrySettlementInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySettlementInfoField to module");
        Py_DECREF(&PyCThostFtdcQrySettlementInfoFieldType);
		return -1;
    }

    return 0;
}
