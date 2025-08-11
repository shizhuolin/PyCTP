
#include "PyCThostFtdcBrokerWithdrawAlgorithmField.h"



static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerWithdrawAlgorithmField *self = (PyCThostFtdcBrokerWithdrawAlgorithmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_init(PyCThostFtdcBrokerWithdrawAlgorithmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "WithdrawAlgorithm", "UsingRatio", "IncludeCloseProfit", "AllWithoutTrade", "AvailIncludeCloseProfit", "IsBrokerUserEvent", "CurrencyID", "FundMortgageRatio", "BalanceAlgorithm",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerWithdrawAlgorithmField_BrokerID = NULL;
	Py_ssize_t pBrokerWithdrawAlgorithmField_BrokerID_len = 0;

	//TThostFtdcAlgorithmType char
	char pBrokerWithdrawAlgorithmField_WithdrawAlgorithm = 0;

	//TThostFtdcRatioType double
	double pBrokerWithdrawAlgorithmField_UsingRatio = 0.0;

	//TThostFtdcIncludeCloseProfitType char
	char pBrokerWithdrawAlgorithmField_IncludeCloseProfit = 0;

	//TThostFtdcAllWithoutTradeType char
	char pBrokerWithdrawAlgorithmField_AllWithoutTrade = 0;

	//TThostFtdcIncludeCloseProfitType char
	char pBrokerWithdrawAlgorithmField_AvailIncludeCloseProfit = 0;

	//TThostFtdcBoolType int
	int pBrokerWithdrawAlgorithmField_IsBrokerUserEvent = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pBrokerWithdrawAlgorithmField_CurrencyID = NULL;
	Py_ssize_t pBrokerWithdrawAlgorithmField_CurrencyID_len = 0;

	//TThostFtdcRatioType double
	double pBrokerWithdrawAlgorithmField_FundMortgageRatio = 0.0;

	//TThostFtdcBalanceAlgorithmType char
	char pBrokerWithdrawAlgorithmField_BalanceAlgorithm = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cdccciy#dc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cdcccis#dc", (char **)kwlist
#endif

		, &pBrokerWithdrawAlgorithmField_BrokerID, &pBrokerWithdrawAlgorithmField_BrokerID_len
		, &pBrokerWithdrawAlgorithmField_WithdrawAlgorithm
		, &pBrokerWithdrawAlgorithmField_UsingRatio
		, &pBrokerWithdrawAlgorithmField_IncludeCloseProfit
		, &pBrokerWithdrawAlgorithmField_AllWithoutTrade
		, &pBrokerWithdrawAlgorithmField_AvailIncludeCloseProfit
		, &pBrokerWithdrawAlgorithmField_IsBrokerUserEvent
		, &pBrokerWithdrawAlgorithmField_CurrencyID, &pBrokerWithdrawAlgorithmField_CurrencyID_len
		, &pBrokerWithdrawAlgorithmField_FundMortgageRatio
		, &pBrokerWithdrawAlgorithmField_BalanceAlgorithm


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerWithdrawAlgorithmField_BrokerID != NULL) {
		if(pBrokerWithdrawAlgorithmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerWithdrawAlgorithmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerWithdrawAlgorithmField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerWithdrawAlgorithmField_BrokerID = NULL;
	}

	//TThostFtdcAlgorithmType char
	self->data.WithdrawAlgorithm = pBrokerWithdrawAlgorithmField_WithdrawAlgorithm;

	//TThostFtdcRatioType double
	self->data.UsingRatio = pBrokerWithdrawAlgorithmField_UsingRatio;
	//TThostFtdcIncludeCloseProfitType char
	self->data.IncludeCloseProfit = pBrokerWithdrawAlgorithmField_IncludeCloseProfit;

	//TThostFtdcAllWithoutTradeType char
	self->data.AllWithoutTrade = pBrokerWithdrawAlgorithmField_AllWithoutTrade;

	//TThostFtdcIncludeCloseProfitType char
	self->data.AvailIncludeCloseProfit = pBrokerWithdrawAlgorithmField_AvailIncludeCloseProfit;

	//TThostFtdcBoolType int
	self->data.IsBrokerUserEvent = pBrokerWithdrawAlgorithmField_IsBrokerUserEvent;

	//TThostFtdcCurrencyIDType char[4]
	if(pBrokerWithdrawAlgorithmField_CurrencyID != NULL) {
		if(pBrokerWithdrawAlgorithmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pBrokerWithdrawAlgorithmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pBrokerWithdrawAlgorithmField_CurrencyID, sizeof(self->data.CurrencyID) );
		pBrokerWithdrawAlgorithmField_CurrencyID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.FundMortgageRatio = pBrokerWithdrawAlgorithmField_FundMortgageRatio;
	//TThostFtdcBalanceAlgorithmType char
	self->data.BalanceAlgorithm = pBrokerWithdrawAlgorithmField_BalanceAlgorithm;



    return 0;
}

static void PyCThostFtdcBrokerWithdrawAlgorithmField_dealloc(PyCThostFtdcBrokerWithdrawAlgorithmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_repr(PyCThostFtdcBrokerWithdrawAlgorithmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:d,s:c,s:c,s:c,s:i,s:y,s:d,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:d,s:c,s:c,s:c,s:i,s:s,s:d,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "WithdrawAlgorithm", self->data.WithdrawAlgorithm
		, "UsingRatio", self->data.UsingRatio
		, "IncludeCloseProfit", self->data.IncludeCloseProfit
		, "AllWithoutTrade", self->data.AllWithoutTrade
		, "AvailIncludeCloseProfit", self->data.AvailIncludeCloseProfit
		, "IsBrokerUserEvent", self->data.IsBrokerUserEvent
		, "CurrencyID", self->data.CurrencyID 
		, "FundMortgageRatio", self->data.FundMortgageRatio
		, "BalanceAlgorithm", self->data.BalanceAlgorithm


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerWithdrawAlgorithmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_BrokerID(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_WithdrawAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.WithdrawAlgorithm), 1);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_UsingRatio(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UsingRatio);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_IncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IncludeCloseProfit), 1);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_AllWithoutTrade(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AllWithoutTrade), 1);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_AvailIncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AvailIncludeCloseProfit), 1);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_IsBrokerUserEvent(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsBrokerUserEvent);
#else 
	return PyInt_FromLong(self->data.IsBrokerUserEvent);
#endif 
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_CurrencyID(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_FundMortgageRatio(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageRatio);
}

static PyObject *PyCThostFtdcBrokerWithdrawAlgorithmField_get_BalanceAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BalanceAlgorithm), 1);
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_BrokerID(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_WithdrawAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "WithdrawAlgorithm Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.WithdrawAlgorithm)) {
		PyErr_SetString(PyExc_ValueError, "WithdrawAlgorithm must be less than 1 bytes");
		return -1;
	}
	self->data.WithdrawAlgorithm = *buf;
	return 0;
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_UsingRatio(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsingRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UsingRatio = buf;
    return 0;
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_IncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IncludeCloseProfit Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IncludeCloseProfit)) {
		PyErr_SetString(PyExc_ValueError, "IncludeCloseProfit must be less than 1 bytes");
		return -1;
	}
	self->data.IncludeCloseProfit = *buf;
	return 0;
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_AllWithoutTrade(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AllWithoutTrade Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AllWithoutTrade)) {
		PyErr_SetString(PyExc_ValueError, "AllWithoutTrade must be less than 1 bytes");
		return -1;
	}
	self->data.AllWithoutTrade = *buf;
	return 0;
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_AvailIncludeCloseProfit(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_IsBrokerUserEvent(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsBrokerUserEvent Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsBrokerUserEvent Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.IsBrokerUserEvent = (int)buf; 
    return 0; 
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_CurrencyID(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_FundMortgageRatio(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageRatio = buf;
    return 0;
}

static int PyCThostFtdcBrokerWithdrawAlgorithmField_set_BalanceAlgorithm(PyCThostFtdcBrokerWithdrawAlgorithmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BalanceAlgorithm Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BalanceAlgorithm)) {
		PyErr_SetString(PyExc_ValueError, "BalanceAlgorithm must be less than 1 bytes");
		return -1;
	}
	self->data.BalanceAlgorithm = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcBrokerWithdrawAlgorithmField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_BrokerID, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"WithdrawAlgorithm", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_WithdrawAlgorithm, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_WithdrawAlgorithm, (char *)"WithdrawAlgorithm", NULL},
	 {(char *)"UsingRatio", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_UsingRatio, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_UsingRatio, (char *)"UsingRatio", NULL},
	 {(char *)"IncludeCloseProfit", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_IncludeCloseProfit, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_IncludeCloseProfit, (char *)"IncludeCloseProfit", NULL},
	 {(char *)"AllWithoutTrade", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_AllWithoutTrade, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_AllWithoutTrade, (char *)"AllWithoutTrade", NULL},
	 {(char *)"AvailIncludeCloseProfit", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_AvailIncludeCloseProfit, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_AvailIncludeCloseProfit, (char *)"AvailIncludeCloseProfit", NULL},
	 {(char *)"IsBrokerUserEvent", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_IsBrokerUserEvent, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_IsBrokerUserEvent, (char *)"IsBrokerUserEvent", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_CurrencyID, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"FundMortgageRatio", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_FundMortgageRatio, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_FundMortgageRatio, (char *)"FundMortgageRatio", NULL},
	 {(char *)"BalanceAlgorithm", (getter)PyCThostFtdcBrokerWithdrawAlgorithmField_get_BalanceAlgorithm, (setter)PyCThostFtdcBrokerWithdrawAlgorithmField_set_BalanceAlgorithm, (char *)"BalanceAlgorithm", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerWithdrawAlgorithmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerWithdrawAlgorithmField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerWithdrawAlgorithmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerWithdrawAlgorithmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerWithdrawAlgorithmField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerWithdrawAlgorithmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerWithdrawAlgorithmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerWithdrawAlgorithmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerWithdrawAlgorithmField_new,       /* tp_new */
};

int PyCThostFtdcBrokerWithdrawAlgorithmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerWithdrawAlgorithmField  */
	if (PyType_Ready(&PyCThostFtdcBrokerWithdrawAlgorithmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerWithdrawAlgorithmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerWithdrawAlgorithmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerWithdrawAlgorithmField", (PyObject *)&PyCThostFtdcBrokerWithdrawAlgorithmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerWithdrawAlgorithmField to module");
        Py_DECREF(&PyCThostFtdcBrokerWithdrawAlgorithmFieldType);
		return -1;
    }

    return 0;
}
