
#include "PyCThostFtdcBrokerDepositField.h"



static PyObject *PyCThostFtdcBrokerDepositField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerDepositField *self = (PyCThostFtdcBrokerDepositField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerDepositField_init(PyCThostFtdcBrokerDepositField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "ParticipantID", "ExchangeID", "PreBalance", "CurrMargin", "CloseProfit", "Balance", "Deposit", "Withdraw", "Available", "Reserve", "FrozenMargin",  NULL};

	//TThostFtdcTradeDateType char[9]
	const char *pBrokerDepositField_TradingDay = NULL;
	Py_ssize_t pBrokerDepositField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pBrokerDepositField_BrokerID = NULL;
	Py_ssize_t pBrokerDepositField_BrokerID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pBrokerDepositField_ParticipantID = NULL;
	Py_ssize_t pBrokerDepositField_ParticipantID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pBrokerDepositField_ExchangeID = NULL;
	Py_ssize_t pBrokerDepositField_ExchangeID_len = 0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_PreBalance = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_CurrMargin = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_Balance = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_Deposit = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_Withdraw = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_Available = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_Reserve = 0.0;

	//TThostFtdcMoneyType double
	double pBrokerDepositField_FrozenMargin = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddddddddd", (char **)kwlist
#endif

		, &pBrokerDepositField_TradingDay, &pBrokerDepositField_TradingDay_len
		, &pBrokerDepositField_BrokerID, &pBrokerDepositField_BrokerID_len
		, &pBrokerDepositField_ParticipantID, &pBrokerDepositField_ParticipantID_len
		, &pBrokerDepositField_ExchangeID, &pBrokerDepositField_ExchangeID_len
		, &pBrokerDepositField_PreBalance
		, &pBrokerDepositField_CurrMargin
		, &pBrokerDepositField_CloseProfit
		, &pBrokerDepositField_Balance
		, &pBrokerDepositField_Deposit
		, &pBrokerDepositField_Withdraw
		, &pBrokerDepositField_Available
		, &pBrokerDepositField_Reserve
		, &pBrokerDepositField_FrozenMargin


    )) {
        return -1;
    }

	//TThostFtdcTradeDateType char[9]
	if(pBrokerDepositField_TradingDay != NULL) {
		if(pBrokerDepositField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pBrokerDepositField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pBrokerDepositField_TradingDay, sizeof(self->data.TradingDay) );
		pBrokerDepositField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pBrokerDepositField_BrokerID != NULL) {
		if(pBrokerDepositField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pBrokerDepositField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pBrokerDepositField_BrokerID, sizeof(self->data.BrokerID) );
		pBrokerDepositField_BrokerID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pBrokerDepositField_ParticipantID != NULL) {
		if(pBrokerDepositField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pBrokerDepositField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pBrokerDepositField_ParticipantID, sizeof(self->data.ParticipantID) );
		pBrokerDepositField_ParticipantID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pBrokerDepositField_ExchangeID != NULL) {
		if(pBrokerDepositField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pBrokerDepositField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pBrokerDepositField_ExchangeID, sizeof(self->data.ExchangeID) );
		pBrokerDepositField_ExchangeID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PreBalance = pBrokerDepositField_PreBalance;
	//TThostFtdcMoneyType double
	self->data.CurrMargin = pBrokerDepositField_CurrMargin;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pBrokerDepositField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.Balance = pBrokerDepositField_Balance;
	//TThostFtdcMoneyType double
	self->data.Deposit = pBrokerDepositField_Deposit;
	//TThostFtdcMoneyType double
	self->data.Withdraw = pBrokerDepositField_Withdraw;
	//TThostFtdcMoneyType double
	self->data.Available = pBrokerDepositField_Available;
	//TThostFtdcMoneyType double
	self->data.Reserve = pBrokerDepositField_Reserve;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pBrokerDepositField_FrozenMargin;


    return 0;
}

static void PyCThostFtdcBrokerDepositField_dealloc(PyCThostFtdcBrokerDepositField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerDepositField_repr(PyCThostFtdcBrokerDepositField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "BrokerID", self->data.BrokerID 
		, "ParticipantID", self->data.ParticipantID 
		, "ExchangeID", self->data.ExchangeID 
		, "PreBalance", self->data.PreBalance
		, "CurrMargin", self->data.CurrMargin
		, "CloseProfit", self->data.CloseProfit
		, "Balance", self->data.Balance
		, "Deposit", self->data.Deposit
		, "Withdraw", self->data.Withdraw
		, "Available", self->data.Available
		, "Reserve", self->data.Reserve
		, "FrozenMargin", self->data.FrozenMargin


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerDepositField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_TradingDay(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_BrokerID(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_ParticipantID(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_ExchangeID(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_PreBalance(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreBalance);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_CurrMargin(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CurrMargin);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_CloseProfit(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_Balance(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Balance);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_Deposit(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Deposit);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_Withdraw(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Withdraw);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_Available(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Available);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_Reserve(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Reserve);
}

static PyObject *PyCThostFtdcBrokerDepositField_get_FrozenMargin(PyCThostFtdcBrokerDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static int PyCThostFtdcBrokerDepositField_set_TradingDay(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerDepositField_set_BrokerID(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcBrokerDepositField_set_ParticipantID(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
		PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcBrokerDepositField_set_ExchangeID(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcBrokerDepositField_set_PreBalance(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreBalance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreBalance = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_CurrMargin(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrMargin = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_CloseProfit(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfit = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_Balance(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Balance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Balance = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_Deposit(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Deposit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Deposit = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_Withdraw(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Withdraw Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Withdraw = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_Available(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Available Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Available = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_Reserve(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reserve Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Reserve = buf;
    return 0;
}

static int PyCThostFtdcBrokerDepositField_set_FrozenMargin(PyCThostFtdcBrokerDepositField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenMargin = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcBrokerDepositField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcBrokerDepositField_get_TradingDay, (setter)PyCThostFtdcBrokerDepositField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcBrokerDepositField_get_BrokerID, (setter)PyCThostFtdcBrokerDepositField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcBrokerDepositField_get_ParticipantID, (setter)PyCThostFtdcBrokerDepositField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcBrokerDepositField_get_ExchangeID, (setter)PyCThostFtdcBrokerDepositField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"PreBalance", (getter)PyCThostFtdcBrokerDepositField_get_PreBalance, (setter)PyCThostFtdcBrokerDepositField_set_PreBalance, (char *)"PreBalance", NULL},
	 {(char *)"CurrMargin", (getter)PyCThostFtdcBrokerDepositField_get_CurrMargin, (setter)PyCThostFtdcBrokerDepositField_set_CurrMargin, (char *)"CurrMargin", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcBrokerDepositField_get_CloseProfit, (setter)PyCThostFtdcBrokerDepositField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"Balance", (getter)PyCThostFtdcBrokerDepositField_get_Balance, (setter)PyCThostFtdcBrokerDepositField_set_Balance, (char *)"Balance", NULL},
	 {(char *)"Deposit", (getter)PyCThostFtdcBrokerDepositField_get_Deposit, (setter)PyCThostFtdcBrokerDepositField_set_Deposit, (char *)"Deposit", NULL},
	 {(char *)"Withdraw", (getter)PyCThostFtdcBrokerDepositField_get_Withdraw, (setter)PyCThostFtdcBrokerDepositField_set_Withdraw, (char *)"Withdraw", NULL},
	 {(char *)"Available", (getter)PyCThostFtdcBrokerDepositField_get_Available, (setter)PyCThostFtdcBrokerDepositField_set_Available, (char *)"Available", NULL},
	 {(char *)"Reserve", (getter)PyCThostFtdcBrokerDepositField_get_Reserve, (setter)PyCThostFtdcBrokerDepositField_set_Reserve, (char *)"Reserve", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcBrokerDepositField_get_FrozenMargin, (setter)PyCThostFtdcBrokerDepositField_set_FrozenMargin, (char *)"FrozenMargin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerDepositFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerDepositField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerDepositField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerDepositField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerDepositField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerDepositField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerDepositField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerDepositField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerDepositField_new,       /* tp_new */
};

int PyCThostFtdcBrokerDepositFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerDepositField  */
	if (PyType_Ready(&PyCThostFtdcBrokerDepositFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerDepositField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerDepositFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerDepositField", (PyObject *)&PyCThostFtdcBrokerDepositFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerDepositField to module");
        Py_DECREF(&PyCThostFtdcBrokerDepositFieldType);
		return -1;
    }

    return 0;
}
