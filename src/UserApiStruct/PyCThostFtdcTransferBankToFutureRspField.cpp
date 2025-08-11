
#include "PyCThostFtdcTransferBankToFutureRspField.h"



static PyObject *PyCThostFtdcTransferBankToFutureRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferBankToFutureRspField *self = (PyCThostFtdcTransferBankToFutureRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferBankToFutureRspField_init(PyCThostFtdcTransferBankToFutureRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RetCode", "RetInfo", "FutureAccount", "TradeAmt", "CustFee", "CurrencyCode",  NULL};

	//TThostFtdcRetCodeType char[5]
	const char *pTransferBankToFutureRspField_RetCode = NULL;
	Py_ssize_t pTransferBankToFutureRspField_RetCode_len = 0;

	//TThostFtdcRetInfoType char[129]
	const char *pTransferBankToFutureRspField_RetInfo = NULL;
	Py_ssize_t pTransferBankToFutureRspField_RetInfo_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTransferBankToFutureRspField_FutureAccount = NULL;
	Py_ssize_t pTransferBankToFutureRspField_FutureAccount_len = 0;

	//TThostFtdcMoneyType double
	double pTransferBankToFutureRspField_TradeAmt = 0.0;

	//TThostFtdcMoneyType double
	double pTransferBankToFutureRspField_CustFee = 0.0;

	//TThostFtdcCurrencyCodeType char[4]
	const char *pTransferBankToFutureRspField_CurrencyCode = NULL;
	Py_ssize_t pTransferBankToFutureRspField_CurrencyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dds#", (char **)kwlist
#endif

		, &pTransferBankToFutureRspField_RetCode, &pTransferBankToFutureRspField_RetCode_len
		, &pTransferBankToFutureRspField_RetInfo, &pTransferBankToFutureRspField_RetInfo_len
		, &pTransferBankToFutureRspField_FutureAccount, &pTransferBankToFutureRspField_FutureAccount_len
		, &pTransferBankToFutureRspField_TradeAmt
		, &pTransferBankToFutureRspField_CustFee
		, &pTransferBankToFutureRspField_CurrencyCode, &pTransferBankToFutureRspField_CurrencyCode_len


    )) {
        return -1;
    }

	//TThostFtdcRetCodeType char[5]
	if(pTransferBankToFutureRspField_RetCode != NULL) {
		if(pTransferBankToFutureRspField_RetCode_len > (Py_ssize_t)sizeof(self->data.RetCode)) {
			PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is %zd)", pTransferBankToFutureRspField_RetCode_len, (Py_ssize_t)sizeof(self->data.RetCode));
			return -1;
		}
		strncpy(self->data.RetCode, pTransferBankToFutureRspField_RetCode, sizeof(self->data.RetCode) );
		pTransferBankToFutureRspField_RetCode = NULL;
	}

	//TThostFtdcRetInfoType char[129]
	if(pTransferBankToFutureRspField_RetInfo != NULL) {
		if(pTransferBankToFutureRspField_RetInfo_len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
			PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is %zd)", pTransferBankToFutureRspField_RetInfo_len, (Py_ssize_t)sizeof(self->data.RetInfo));
			return -1;
		}
		strncpy(self->data.RetInfo, pTransferBankToFutureRspField_RetInfo, sizeof(self->data.RetInfo) );
		pTransferBankToFutureRspField_RetInfo = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTransferBankToFutureRspField_FutureAccount != NULL) {
		if(pTransferBankToFutureRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
			PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", pTransferBankToFutureRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
			return -1;
		}
		strncpy(self->data.FutureAccount, pTransferBankToFutureRspField_FutureAccount, sizeof(self->data.FutureAccount) );
		pTransferBankToFutureRspField_FutureAccount = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.TradeAmt = pTransferBankToFutureRspField_TradeAmt;
	//TThostFtdcMoneyType double
	self->data.CustFee = pTransferBankToFutureRspField_CustFee;
	//TThostFtdcCurrencyCodeType char[4]
	if(pTransferBankToFutureRspField_CurrencyCode != NULL) {
		if(pTransferBankToFutureRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
			PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", pTransferBankToFutureRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
			return -1;
		}
		strncpy(self->data.CurrencyCode, pTransferBankToFutureRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
		pTransferBankToFutureRspField_CurrencyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcTransferBankToFutureRspField_dealloc(PyCThostFtdcTransferBankToFutureRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_repr(PyCThostFtdcTransferBankToFutureRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:s}"
#endif

		, "RetCode", self->data.RetCode 
		, "RetInfo", self->data.RetInfo 
		, "FutureAccount", self->data.FutureAccount 
		, "TradeAmt", self->data.TradeAmt
		, "CustFee", self->data.CustFee
		, "CurrencyCode", self->data.CurrencyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferBankToFutureRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_RetCode(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
	return PyBytes_FromString(self->data.RetCode);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_RetInfo(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
	return PyBytes_FromString(self->data.RetInfo);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_FutureAccount(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureAccount);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_TradeAmt(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmt);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_CustFee(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcTransferBankToFutureRspField_get_CurrencyCode(PyCThostFtdcTransferBankToFutureRspField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyCode);
}

static int PyCThostFtdcTransferBankToFutureRspField_set_RetCode(PyCThostFtdcTransferBankToFutureRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RetCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RetCode)) {
		PyErr_SetString(PyExc_ValueError, "RetCode must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.RetCode, buf, sizeof(self->data.RetCode));
	return 0;
}

static int PyCThostFtdcTransferBankToFutureRspField_set_RetInfo(PyCThostFtdcTransferBankToFutureRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RetInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
		PyErr_SetString(PyExc_ValueError, "RetInfo must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.RetInfo, buf, sizeof(self->data.RetInfo));
	return 0;
}

static int PyCThostFtdcTransferBankToFutureRspField_set_FutureAccount(PyCThostFtdcTransferBankToFutureRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferBankToFutureRspField_set_TradeAmt(PyCThostFtdcTransferBankToFutureRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferBankToFutureRspField_set_CustFee(PyCThostFtdcTransferBankToFutureRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferBankToFutureRspField_set_CurrencyCode(PyCThostFtdcTransferBankToFutureRspField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTransferBankToFutureRspField_getset[] = {
	 {(char *)"RetCode", (getter)PyCThostFtdcTransferBankToFutureRspField_get_RetCode, (setter)PyCThostFtdcTransferBankToFutureRspField_set_RetCode, (char *)"RetCode", NULL},
	 {(char *)"RetInfo", (getter)PyCThostFtdcTransferBankToFutureRspField_get_RetInfo, (setter)PyCThostFtdcTransferBankToFutureRspField_set_RetInfo, (char *)"RetInfo", NULL},
	 {(char *)"FutureAccount", (getter)PyCThostFtdcTransferBankToFutureRspField_get_FutureAccount, (setter)PyCThostFtdcTransferBankToFutureRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
	 {(char *)"TradeAmt", (getter)PyCThostFtdcTransferBankToFutureRspField_get_TradeAmt, (setter)PyCThostFtdcTransferBankToFutureRspField_set_TradeAmt, (char *)"TradeAmt", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcTransferBankToFutureRspField_get_CustFee, (setter)PyCThostFtdcTransferBankToFutureRspField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferBankToFutureRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferBankToFutureRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferBankToFutureRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferBankToFutureRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferBankToFutureRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferBankToFutureRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferBankToFutureRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferBankToFutureRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferBankToFutureRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferBankToFutureRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferBankToFutureRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferBankToFutureRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferBankToFutureRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferBankToFutureRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferBankToFutureRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferBankToFutureRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferBankToFutureRspField", (PyObject *)&PyCThostFtdcTransferBankToFutureRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferBankToFutureRspField to module");
        Py_DECREF(&PyCThostFtdcTransferBankToFutureRspFieldType);
		return -1;
    }

    return 0;
}
