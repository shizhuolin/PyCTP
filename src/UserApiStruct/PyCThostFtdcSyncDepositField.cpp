
#include "PyCThostFtdcSyncDepositField.h"



static PyObject *PyCThostFtdcSyncDepositField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDepositField *self = (PyCThostFtdcSyncDepositField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDepositField_init(PyCThostFtdcSyncDepositField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DepositSeqNo", "BrokerID", "InvestorID", "Deposit", "IsForce", "CurrencyID", "IsFromSopt", "TradingPassword", "IsSecAgentTranfer",  NULL};

	//TThostFtdcDepositSeqNoType char[15]
	const char *pSyncDepositField_DepositSeqNo = NULL;
	Py_ssize_t pSyncDepositField_DepositSeqNo_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDepositField_BrokerID = NULL;
	Py_ssize_t pSyncDepositField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDepositField_InvestorID = NULL;
	Py_ssize_t pSyncDepositField_InvestorID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDepositField_Deposit = 0.0;

	//TThostFtdcBoolType int
	int pSyncDepositField_IsForce = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncDepositField_CurrencyID = NULL;
	Py_ssize_t pSyncDepositField_CurrencyID_len = 0;

	//TThostFtdcBoolType int
	int pSyncDepositField_IsFromSopt = 0;

	//TThostFtdcPasswordType char[41]
	const char *pSyncDepositField_TradingPassword = NULL;
	Py_ssize_t pSyncDepositField_TradingPassword_len = 0;

	//TThostFtdcBoolType int
	int pSyncDepositField_IsSecAgentTranfer = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#diy#iy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dis#is#i", (char **)kwlist
#endif

		, &pSyncDepositField_DepositSeqNo, &pSyncDepositField_DepositSeqNo_len
		, &pSyncDepositField_BrokerID, &pSyncDepositField_BrokerID_len
		, &pSyncDepositField_InvestorID, &pSyncDepositField_InvestorID_len
		, &pSyncDepositField_Deposit
		, &pSyncDepositField_IsForce
		, &pSyncDepositField_CurrencyID, &pSyncDepositField_CurrencyID_len
		, &pSyncDepositField_IsFromSopt
		, &pSyncDepositField_TradingPassword, &pSyncDepositField_TradingPassword_len
		, &pSyncDepositField_IsSecAgentTranfer


    )) {
        return -1;
    }

	//TThostFtdcDepositSeqNoType char[15]
	if(pSyncDepositField_DepositSeqNo != NULL) {
		if(pSyncDepositField_DepositSeqNo_len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
			PyErr_Format(PyExc_ValueError, "DepositSeqNo too long: length=%zd (max allowed is %zd)", pSyncDepositField_DepositSeqNo_len, (Py_ssize_t)sizeof(self->data.DepositSeqNo));
			return -1;
		}
		strncpy(self->data.DepositSeqNo, pSyncDepositField_DepositSeqNo, sizeof(self->data.DepositSeqNo) );
		pSyncDepositField_DepositSeqNo = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDepositField_BrokerID != NULL) {
		if(pSyncDepositField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDepositField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDepositField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDepositField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDepositField_InvestorID != NULL) {
		if(pSyncDepositField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDepositField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDepositField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDepositField_InvestorID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.Deposit = pSyncDepositField_Deposit;
	//TThostFtdcBoolType int
	self->data.IsForce = pSyncDepositField_IsForce;

	//TThostFtdcCurrencyIDType char[4]
	if(pSyncDepositField_CurrencyID != NULL) {
		if(pSyncDepositField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pSyncDepositField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pSyncDepositField_CurrencyID, sizeof(self->data.CurrencyID) );
		pSyncDepositField_CurrencyID = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsFromSopt = pSyncDepositField_IsFromSopt;

	//TThostFtdcPasswordType char[41]
	if(pSyncDepositField_TradingPassword != NULL) {
		if(pSyncDepositField_TradingPassword_len > (Py_ssize_t)sizeof(self->data.TradingPassword)) {
			PyErr_Format(PyExc_ValueError, "TradingPassword too long: length=%zd (max allowed is %zd)", pSyncDepositField_TradingPassword_len, (Py_ssize_t)sizeof(self->data.TradingPassword));
			return -1;
		}
		strncpy(self->data.TradingPassword, pSyncDepositField_TradingPassword, sizeof(self->data.TradingPassword) );
		pSyncDepositField_TradingPassword = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSecAgentTranfer = pSyncDepositField_IsSecAgentTranfer;



    return 0;
}

static void PyCThostFtdcSyncDepositField_dealloc(PyCThostFtdcSyncDepositField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDepositField_repr(PyCThostFtdcSyncDepositField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:i,s:y,s:i,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:i,s:s,s:i,s:s,s:i}"
#endif

		, "DepositSeqNo", self->data.DepositSeqNo 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "Deposit", self->data.Deposit
		, "IsForce", self->data.IsForce
		, "CurrencyID", self->data.CurrencyID 
		, "IsFromSopt", self->data.IsFromSopt
		, "TradingPassword", self->data.TradingPassword 
		, "IsSecAgentTranfer", self->data.IsSecAgentTranfer


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDepositField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDepositField_get_DepositSeqNo(PyCThostFtdcSyncDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.DepositSeqNo);
}

static PyObject *PyCThostFtdcSyncDepositField_get_BrokerID(PyCThostFtdcSyncDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDepositField_get_InvestorID(PyCThostFtdcSyncDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDepositField_get_Deposit(PyCThostFtdcSyncDepositField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Deposit);
}

static PyObject *PyCThostFtdcSyncDepositField_get_IsForce(PyCThostFtdcSyncDepositField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsForce);
#else 
	return PyInt_FromLong(self->data.IsForce);
#endif 
}

static PyObject *PyCThostFtdcSyncDepositField_get_CurrencyID(PyCThostFtdcSyncDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcSyncDepositField_get_IsFromSopt(PyCThostFtdcSyncDepositField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsFromSopt);
#else 
	return PyInt_FromLong(self->data.IsFromSopt);
#endif 
}

static PyObject *PyCThostFtdcSyncDepositField_get_TradingPassword(PyCThostFtdcSyncDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingPassword);
}

static PyObject *PyCThostFtdcSyncDepositField_get_IsSecAgentTranfer(PyCThostFtdcSyncDepositField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSecAgentTranfer);
#else 
	return PyInt_FromLong(self->data.IsSecAgentTranfer);
#endif 
}

static int PyCThostFtdcSyncDepositField_set_DepositSeqNo(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "DepositSeqNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
		PyErr_SetString(PyExc_ValueError, "DepositSeqNo must be less than 15 bytes");
		return -1;
	}
	strncpy(self->data.DepositSeqNo, buf, sizeof(self->data.DepositSeqNo));
	return 0;
}

static int PyCThostFtdcSyncDepositField_set_BrokerID(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDepositField_set_InvestorID(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDepositField_set_Deposit(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDepositField_set_IsForce(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsForce Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsForce Expected int"); 
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
    self->data.IsForce = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDepositField_set_CurrencyID(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDepositField_set_IsFromSopt(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsFromSopt Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsFromSopt Expected int"); 
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
    self->data.IsFromSopt = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDepositField_set_TradingPassword(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingPassword)) {
		PyErr_SetString(PyExc_ValueError, "TradingPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.TradingPassword, buf, sizeof(self->data.TradingPassword));
	return 0;
}

static int PyCThostFtdcSyncDepositField_set_IsSecAgentTranfer(PyCThostFtdcSyncDepositField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSecAgentTranfer Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsSecAgentTranfer Expected int"); 
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
    self->data.IsSecAgentTranfer = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDepositField_getset[] = {
	 {(char *)"DepositSeqNo", (getter)PyCThostFtdcSyncDepositField_get_DepositSeqNo, (setter)PyCThostFtdcSyncDepositField_set_DepositSeqNo, (char *)"DepositSeqNo", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDepositField_get_BrokerID, (setter)PyCThostFtdcSyncDepositField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDepositField_get_InvestorID, (setter)PyCThostFtdcSyncDepositField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"Deposit", (getter)PyCThostFtdcSyncDepositField_get_Deposit, (setter)PyCThostFtdcSyncDepositField_set_Deposit, (char *)"Deposit", NULL},
	 {(char *)"IsForce", (getter)PyCThostFtdcSyncDepositField_get_IsForce, (setter)PyCThostFtdcSyncDepositField_set_IsForce, (char *)"IsForce", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcSyncDepositField_get_CurrencyID, (setter)PyCThostFtdcSyncDepositField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"IsFromSopt", (getter)PyCThostFtdcSyncDepositField_get_IsFromSopt, (setter)PyCThostFtdcSyncDepositField_set_IsFromSopt, (char *)"IsFromSopt", NULL},
	 {(char *)"TradingPassword", (getter)PyCThostFtdcSyncDepositField_get_TradingPassword, (setter)PyCThostFtdcSyncDepositField_set_TradingPassword, (char *)"TradingPassword", NULL},
	 {(char *)"IsSecAgentTranfer", (getter)PyCThostFtdcSyncDepositField_get_IsSecAgentTranfer, (setter)PyCThostFtdcSyncDepositField_set_IsSecAgentTranfer, (char *)"IsSecAgentTranfer", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDepositFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDepositField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDepositField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDepositField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDepositField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDepositField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDepositField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDepositField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDepositField_new,       /* tp_new */
};

int PyCThostFtdcSyncDepositFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDepositField  */
	if (PyType_Ready(&PyCThostFtdcSyncDepositFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDepositField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDepositFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDepositField", (PyObject *)&PyCThostFtdcSyncDepositFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDepositField to module");
        Py_DECREF(&PyCThostFtdcSyncDepositFieldType);
		return -1;
    }

    return 0;
}
