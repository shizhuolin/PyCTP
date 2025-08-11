
#include "PyCThostFtdcTransferBankToFutureReqField.h"



static PyObject *PyCThostFtdcTransferBankToFutureReqField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferBankToFutureReqField *self = (PyCThostFtdcTransferBankToFutureReqField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferBankToFutureReqField_init(PyCThostFtdcTransferBankToFutureReqField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FutureAccount", "FuturePwdFlag", "FutureAccPwd", "TradeAmt", "CustFee", "CurrencyCode",  NULL};

	//TThostFtdcAccountIDType char[13]
	const char *pTransferBankToFutureReqField_FutureAccount = NULL;
	Py_ssize_t pTransferBankToFutureReqField_FutureAccount_len = 0;

	//TThostFtdcFuturePwdFlagType char
	char pTransferBankToFutureReqField_FuturePwdFlag = 0;

	//TThostFtdcFutureAccPwdType char[17]
	const char *pTransferBankToFutureReqField_FutureAccPwd = NULL;
	Py_ssize_t pTransferBankToFutureReqField_FutureAccPwd_len = 0;

	//TThostFtdcMoneyType double
	double pTransferBankToFutureReqField_TradeAmt = 0.0;

	//TThostFtdcMoneyType double
	double pTransferBankToFutureReqField_CustFee = 0.0;

	//TThostFtdcCurrencyCodeType char[4]
	const char *pTransferBankToFutureReqField_CurrencyCode = NULL;
	Py_ssize_t pTransferBankToFutureReqField_CurrencyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#dds#", (char **)kwlist
#endif

		, &pTransferBankToFutureReqField_FutureAccount, &pTransferBankToFutureReqField_FutureAccount_len
		, &pTransferBankToFutureReqField_FuturePwdFlag
		, &pTransferBankToFutureReqField_FutureAccPwd, &pTransferBankToFutureReqField_FutureAccPwd_len
		, &pTransferBankToFutureReqField_TradeAmt
		, &pTransferBankToFutureReqField_CustFee
		, &pTransferBankToFutureReqField_CurrencyCode, &pTransferBankToFutureReqField_CurrencyCode_len


    )) {
        return -1;
    }

	//TThostFtdcAccountIDType char[13]
	if(pTransferBankToFutureReqField_FutureAccount != NULL) {
		if(pTransferBankToFutureReqField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
			PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", pTransferBankToFutureReqField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
			return -1;
		}
		strncpy(self->data.FutureAccount, pTransferBankToFutureReqField_FutureAccount, sizeof(self->data.FutureAccount) );
		pTransferBankToFutureReqField_FutureAccount = NULL;
	}

	//TThostFtdcFuturePwdFlagType char
	self->data.FuturePwdFlag = pTransferBankToFutureReqField_FuturePwdFlag;

	//TThostFtdcFutureAccPwdType char[17]
	if(pTransferBankToFutureReqField_FutureAccPwd != NULL) {
		if(pTransferBankToFutureReqField_FutureAccPwd_len > (Py_ssize_t)sizeof(self->data.FutureAccPwd)) {
			PyErr_Format(PyExc_ValueError, "FutureAccPwd too long: length=%zd (max allowed is %zd)", pTransferBankToFutureReqField_FutureAccPwd_len, (Py_ssize_t)sizeof(self->data.FutureAccPwd));
			return -1;
		}
		strncpy(self->data.FutureAccPwd, pTransferBankToFutureReqField_FutureAccPwd, sizeof(self->data.FutureAccPwd) );
		pTransferBankToFutureReqField_FutureAccPwd = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.TradeAmt = pTransferBankToFutureReqField_TradeAmt;
	//TThostFtdcMoneyType double
	self->data.CustFee = pTransferBankToFutureReqField_CustFee;
	//TThostFtdcCurrencyCodeType char[4]
	if(pTransferBankToFutureReqField_CurrencyCode != NULL) {
		if(pTransferBankToFutureReqField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
			PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", pTransferBankToFutureReqField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
			return -1;
		}
		strncpy(self->data.CurrencyCode, pTransferBankToFutureReqField_CurrencyCode, sizeof(self->data.CurrencyCode) );
		pTransferBankToFutureReqField_CurrencyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcTransferBankToFutureReqField_dealloc(PyCThostFtdcTransferBankToFutureReqField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_repr(PyCThostFtdcTransferBankToFutureReqField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:d,s:d,s:s}"
#endif

		, "FutureAccount", self->data.FutureAccount 
		, "FuturePwdFlag", self->data.FuturePwdFlag
		, "FutureAccPwd", self->data.FutureAccPwd 
		, "TradeAmt", self->data.TradeAmt
		, "CustFee", self->data.CustFee
		, "CurrencyCode", self->data.CurrencyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureReqField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_FutureAccount(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureAccount);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_FuturePwdFlag(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FuturePwdFlag), 1);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_FutureAccPwd(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureAccPwd);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_TradeAmt(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmt);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_CustFee(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcTransferBankToFutureReqField_get_CurrencyCode(PyCThostFtdcTransferBankToFutureReqField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyCode);
}

static int PyCThostFtdcTransferBankToFutureReqField_set_FutureAccount(PyCThostFtdcTransferBankToFutureReqField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
		PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.FutureAccount, buf, sizeof(self->data.FutureAccount));
	return 0;
}

static int PyCThostFtdcTransferBankToFutureReqField_set_FuturePwdFlag(PyCThostFtdcTransferBankToFutureReqField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FuturePwdFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FuturePwdFlag)) {
		PyErr_SetString(PyExc_ValueError, "FuturePwdFlag must be less than 1 bytes");
		return -1;
	}
	self->data.FuturePwdFlag = *buf;
	return 0;
}

static int PyCThostFtdcTransferBankToFutureReqField_set_FutureAccPwd(PyCThostFtdcTransferBankToFutureReqField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FutureAccPwd Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FutureAccPwd)) {
		PyErr_SetString(PyExc_ValueError, "FutureAccPwd must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.FutureAccPwd, buf, sizeof(self->data.FutureAccPwd));
	return 0;
}

static int PyCThostFtdcTransferBankToFutureReqField_set_TradeAmt(PyCThostFtdcTransferBankToFutureReqField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeAmt Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TradeAmt = buf;
    return 0;
}

static int PyCThostFtdcTransferBankToFutureReqField_set_CustFee(PyCThostFtdcTransferBankToFutureReqField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustFee Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CustFee = buf;
    return 0;
}

static int PyCThostFtdcTransferBankToFutureReqField_set_CurrencyCode(PyCThostFtdcTransferBankToFutureReqField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyCode, buf, sizeof(self->data.CurrencyCode));
	return 0;
}



static PyGetSetDef PyCThostFtdcTransferBankToFutureReqField_getset[] = {
	 {(char *)"FutureAccount", (getter)PyCThostFtdcTransferBankToFutureReqField_get_FutureAccount, (setter)PyCThostFtdcTransferBankToFutureReqField_set_FutureAccount, (char *)"FutureAccount", NULL},
	 {(char *)"FuturePwdFlag", (getter)PyCThostFtdcTransferBankToFutureReqField_get_FuturePwdFlag, (setter)PyCThostFtdcTransferBankToFutureReqField_set_FuturePwdFlag, (char *)"FuturePwdFlag", NULL},
	 {(char *)"FutureAccPwd", (getter)PyCThostFtdcTransferBankToFutureReqField_get_FutureAccPwd, (setter)PyCThostFtdcTransferBankToFutureReqField_set_FutureAccPwd, (char *)"FutureAccPwd", NULL},
	 {(char *)"TradeAmt", (getter)PyCThostFtdcTransferBankToFutureReqField_get_TradeAmt, (setter)PyCThostFtdcTransferBankToFutureReqField_set_TradeAmt, (char *)"TradeAmt", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcTransferBankToFutureReqField_get_CustFee, (setter)PyCThostFtdcTransferBankToFutureReqField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferBankToFutureReqField_get_CurrencyCode, (setter)PyCThostFtdcTransferBankToFutureReqField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferBankToFutureReqFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferBankToFutureReqField",	/* tp_name */
	sizeof(PyCThostFtdcTransferBankToFutureReqField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferBankToFutureReqField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferBankToFutureReqField_repr,   /* tp_repr */
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
	"CThostFtdcTransferBankToFutureReqField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferBankToFutureReqField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferBankToFutureReqField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferBankToFutureReqField_new,       /* tp_new */
};

int PyCThostFtdcTransferBankToFutureReqFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferBankToFutureReqField  */
	if (PyType_Ready(&PyCThostFtdcTransferBankToFutureReqFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferBankToFutureReqField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferBankToFutureReqFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferBankToFutureReqField", (PyObject *)&PyCThostFtdcTransferBankToFutureReqFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankToFutureReqField to module");
        Py_DECREF(&PyCThostFtdcTransferBankToFutureReqFieldType);
		return -1;
    }

    return 0;
}
