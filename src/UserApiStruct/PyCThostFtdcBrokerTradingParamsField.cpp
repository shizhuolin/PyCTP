
#include "PyCThostFtdcBrokerTradingParamsField.h"



static PyObject *PyCThostFtdcBrokerTradingParamsField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerTradingParamsField *self = (PyCThostFtdcBrokerTradingParamsField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerTradingParamsField_init(PyCThostFtdcBrokerTradingParamsField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "MarginPriceType", "Algorithm", "AvailIncludeCloseProfit", "CurrencyID", "OptionRoyaltyPriceType", "AccountID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerTradingParamsField_BrokerID = NULL;
	Py_ssize_t pBrokerTradingParamsField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pBrokerTradingParamsField_InvestorID = NULL;
	Py_ssize_t pBrokerTradingParamsField_InvestorID_len = 0;

	//TThostFtdcMarginPriceTypeType char
	char pBrokerTradingParamsField_MarginPriceType = 0;

	//TThostFtdcAlgorithmType char
	char pBrokerTradingParamsField_Algorithm = 0;

	//TThostFtdcIncludeCloseProfitType char
	char pBrokerTradingParamsField_AvailIncludeCloseProfit = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pBrokerTradingParamsField_CurrencyID = NULL;
	Py_ssize_t pBrokerTradingParamsField_CurrencyID_len = 0;

	//TThostFtdcOptionRoyaltyPriceTypeType char
	char pBrokerTradingParamsField_OptionRoyaltyPriceType = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pBrokerTradingParamsField_AccountID = NULL;
	Py_ssize_t pBrokerTradingParamsField_AccountID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cccy#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cccs#cs#", (char **)kwlist
#endif

		, &pBrokerTradingParamsField_BrokerID, &pBrokerTradingParamsField_BrokerID_len
		, &pBrokerTradingParamsField_InvestorID, &pBrokerTradingParamsField_InvestorID_len
		, &pBrokerTradingParamsField_MarginPriceType
		, &pBrokerTradingParamsField_Algorithm
		, &pBrokerTradingParamsField_AvailIncludeCloseProfit
		, &pBrokerTradingParamsField_CurrencyID, &pBrokerTradingParamsField_CurrencyID_len
		, &pBrokerTradingParamsField_OptionRoyaltyPriceType
		, &pBrokerTradingParamsField_AccountID, &pBrokerTradingParamsField_AccountID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerTradingParamsField_BrokerID != NULL) {
		if(pBrokerTradingParamsField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerTradingParamsField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerTradingParamsField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerTradingParamsField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pBrokerTradingParamsField_InvestorID != NULL) {
		if(pBrokerTradingParamsField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pBrokerTradingParamsField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pBrokerTradingParamsField_InvestorID, sizeof(self->data.InvestorID) );
		pBrokerTradingParamsField_InvestorID = NULL;
	}

	//TThostFtdcMarginPriceTypeType char
	self->data.MarginPriceType = pBrokerTradingParamsField_MarginPriceType;

	//TThostFtdcAlgorithmType char
	self->data.Algorithm = pBrokerTradingParamsField_Algorithm;

	//TThostFtdcIncludeCloseProfitType char
	self->data.AvailIncludeCloseProfit = pBrokerTradingParamsField_AvailIncludeCloseProfit;

	//TThostFtdcCurrencyIDType char[4]
	if(pBrokerTradingParamsField_CurrencyID != NULL) {
		if(pBrokerTradingParamsField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pBrokerTradingParamsField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pBrokerTradingParamsField_CurrencyID, sizeof(self->data.CurrencyID) );
		pBrokerTradingParamsField_CurrencyID = NULL;
	}

	//TThostFtdcOptionRoyaltyPriceTypeType char
	self->data.OptionRoyaltyPriceType = pBrokerTradingParamsField_OptionRoyaltyPriceType;

	//TThostFtdcAccountIDType char[13]
	if(pBrokerTradingParamsField_AccountID != NULL) {
		if(pBrokerTradingParamsField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pBrokerTradingParamsField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pBrokerTradingParamsField_AccountID, sizeof(self->data.AccountID) );
		pBrokerTradingParamsField_AccountID = NULL;
	}



    return 0;
}

static void PyCThostFtdcBrokerTradingParamsField_dealloc(PyCThostFtdcBrokerTradingParamsField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_repr(PyCThostFtdcBrokerTradingParamsField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:c,s:c,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:c,s:c,s:s,s:c,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "MarginPriceType", self->data.MarginPriceType
		, "Algorithm", self->data.Algorithm
		, "AvailIncludeCloseProfit", self->data.AvailIncludeCloseProfit
		, "CurrencyID", self->data.CurrencyID 
		, "OptionRoyaltyPriceType", self->data.OptionRoyaltyPriceType
		, "AccountID", self->data.AccountID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingParamsField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_BrokerID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_InvestorID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_MarginPriceType(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MarginPriceType), 1);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_Algorithm(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Algorithm), 1);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_AvailIncludeCloseProfit(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AvailIncludeCloseProfit), 1);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_CurrencyID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_OptionRoyaltyPriceType(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OptionRoyaltyPriceType), 1);
}

static PyObject *PyCThostFtdcBrokerTradingParamsField_get_AccountID(PyCThostFtdcBrokerTradingParamsField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static int PyCThostFtdcBrokerTradingParamsField_set_BrokerID(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerTradingParamsField_set_InvestorID(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerTradingParamsField_set_MarginPriceType(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MarginPriceType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MarginPriceType)) {
		PyErr_SetString(PyExc_ValueError, "MarginPriceType must be less than 1 bytes");
		return -1;
	}
	self->data.MarginPriceType = *buf;
	return 0;
}

static int PyCThostFtdcBrokerTradingParamsField_set_Algorithm(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Algorithm Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Algorithm)) {
		PyErr_SetString(PyExc_ValueError, "Algorithm must be less than 1 bytes");
		return -1;
	}
	self->data.Algorithm = *buf;
	return 0;
}

static int PyCThostFtdcBrokerTradingParamsField_set_AvailIncludeCloseProfit(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AvailIncludeCloseProfit Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AvailIncludeCloseProfit)) {
		PyErr_SetString(PyExc_ValueError, "AvailIncludeCloseProfit must be less than 1 bytes");
		return -1;
	}
	self->data.AvailIncludeCloseProfit = *buf;
	return 0;
}

static int PyCThostFtdcBrokerTradingParamsField_set_CurrencyID(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerTradingParamsField_set_OptionRoyaltyPriceType(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionRoyaltyPriceType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionRoyaltyPriceType)) {
		PyErr_SetString(PyExc_ValueError, "OptionRoyaltyPriceType must be less than 1 bytes");
		return -1;
	}
	self->data.OptionRoyaltyPriceType = *buf;
	return 0;
}

static int PyCThostFtdcBrokerTradingParamsField_set_AccountID(PyCThostFtdcBrokerTradingParamsField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcBrokerTradingParamsField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerTradingParamsField_get_BrokerID, (setter)PyCThostFtdcBrokerTradingParamsField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcBrokerTradingParamsField_get_InvestorID, (setter)PyCThostFtdcBrokerTradingParamsField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"MarginPriceType", (getter)PyCThostFtdcBrokerTradingParamsField_get_MarginPriceType, (setter)PyCThostFtdcBrokerTradingParamsField_set_MarginPriceType, (char *)"MarginPriceType", NULL},
	 {(char *)"Algorithm", (getter)PyCThostFtdcBrokerTradingParamsField_get_Algorithm, (setter)PyCThostFtdcBrokerTradingParamsField_set_Algorithm, (char *)"Algorithm", NULL},
	 {(char *)"AvailIncludeCloseProfit", (getter)PyCThostFtdcBrokerTradingParamsField_get_AvailIncludeCloseProfit, (setter)PyCThostFtdcBrokerTradingParamsField_set_AvailIncludeCloseProfit, (char *)"AvailIncludeCloseProfit", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcBrokerTradingParamsField_get_CurrencyID, (setter)PyCThostFtdcBrokerTradingParamsField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"OptionRoyaltyPriceType", (getter)PyCThostFtdcBrokerTradingParamsField_get_OptionRoyaltyPriceType, (setter)PyCThostFtdcBrokerTradingParamsField_set_OptionRoyaltyPriceType, (char *)"OptionRoyaltyPriceType", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcBrokerTradingParamsField_get_AccountID, (setter)PyCThostFtdcBrokerTradingParamsField_set_AccountID, (char *)"AccountID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerTradingParamsFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerTradingParamsField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerTradingParamsField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerTradingParamsField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerTradingParamsField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerTradingParamsField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerTradingParamsField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerTradingParamsField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerTradingParamsField_new,       /* tp_new */
};

int PyCThostFtdcBrokerTradingParamsFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerTradingParamsField  */
	if (PyType_Ready(&PyCThostFtdcBrokerTradingParamsFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerTradingParamsField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerTradingParamsFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerTradingParamsField", (PyObject *)&PyCThostFtdcBrokerTradingParamsFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerTradingParamsField to module");
        Py_DECREF(&PyCThostFtdcBrokerTradingParamsFieldType);
		return -1;
    }

    return 0;
}
