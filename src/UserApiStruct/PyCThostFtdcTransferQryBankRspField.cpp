
#include "PyCThostFtdcTransferQryBankRspField.h"



static PyObject *PyCThostFtdcTransferQryBankRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferQryBankRspField *self = (PyCThostFtdcTransferQryBankRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferQryBankRspField_init(PyCThostFtdcTransferQryBankRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RetCode", "RetInfo", "FutureAccount", "TradeAmt", "UseAmt", "FetchAmt", "CurrencyCode",  NULL};

	//TThostFtdcRetCodeType char[5]
	const char *pTransferQryBankRspField_RetCode = NULL;
	Py_ssize_t pTransferQryBankRspField_RetCode_len = 0;

	//TThostFtdcRetInfoType char[129]
	const char *pTransferQryBankRspField_RetInfo = NULL;
	Py_ssize_t pTransferQryBankRspField_RetInfo_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTransferQryBankRspField_FutureAccount = NULL;
	Py_ssize_t pTransferQryBankRspField_FutureAccount_len = 0;

	//TThostFtdcMoneyType double
	double pTransferQryBankRspField_TradeAmt = 0.0;

	//TThostFtdcMoneyType double
	double pTransferQryBankRspField_UseAmt = 0.0;

	//TThostFtdcMoneyType double
	double pTransferQryBankRspField_FetchAmt = 0.0;

	//TThostFtdcCurrencyCodeType char[4]
	const char *pTransferQryBankRspField_CurrencyCode = NULL;
	Py_ssize_t pTransferQryBankRspField_CurrencyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ddds#", (char **)kwlist
#endif

		, &pTransferQryBankRspField_RetCode, &pTransferQryBankRspField_RetCode_len
		, &pTransferQryBankRspField_RetInfo, &pTransferQryBankRspField_RetInfo_len
		, &pTransferQryBankRspField_FutureAccount, &pTransferQryBankRspField_FutureAccount_len
		, &pTransferQryBankRspField_TradeAmt
		, &pTransferQryBankRspField_UseAmt
		, &pTransferQryBankRspField_FetchAmt
		, &pTransferQryBankRspField_CurrencyCode, &pTransferQryBankRspField_CurrencyCode_len


    )) {
        return -1;
    }

	//TThostFtdcRetCodeType char[5]
	if(pTransferQryBankRspField_RetCode != NULL) {
		if(pTransferQryBankRspField_RetCode_len > (Py_ssize_t)sizeof(self->data.RetCode)) {
			PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is %zd)", pTransferQryBankRspField_RetCode_len, (Py_ssize_t)sizeof(self->data.RetCode));
			return -1;
		}
		strncpy(self->data.RetCode, pTransferQryBankRspField_RetCode, sizeof(self->data.RetCode) );
		pTransferQryBankRspField_RetCode = NULL;
	}

	//TThostFtdcRetInfoType char[129]
	if(pTransferQryBankRspField_RetInfo != NULL) {
		if(pTransferQryBankRspField_RetInfo_len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
			PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is %zd)", pTransferQryBankRspField_RetInfo_len, (Py_ssize_t)sizeof(self->data.RetInfo));
			return -1;
		}
		strncpy(self->data.RetInfo, pTransferQryBankRspField_RetInfo, sizeof(self->data.RetInfo) );
		pTransferQryBankRspField_RetInfo = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTransferQryBankRspField_FutureAccount != NULL) {
		if(pTransferQryBankRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
			PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", pTransferQryBankRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
			return -1;
		}
		strncpy(self->data.FutureAccount, pTransferQryBankRspField_FutureAccount, sizeof(self->data.FutureAccount) );
		pTransferQryBankRspField_FutureAccount = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.TradeAmt = pTransferQryBankRspField_TradeAmt;
	//TThostFtdcMoneyType double
	self->data.UseAmt = pTransferQryBankRspField_UseAmt;
	//TThostFtdcMoneyType double
	self->data.FetchAmt = pTransferQryBankRspField_FetchAmt;
	//TThostFtdcCurrencyCodeType char[4]
	if(pTransferQryBankRspField_CurrencyCode != NULL) {
		if(pTransferQryBankRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
			PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", pTransferQryBankRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
			return -1;
		}
		strncpy(self->data.CurrencyCode, pTransferQryBankRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
		pTransferQryBankRspField_CurrencyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcTransferQryBankRspField_dealloc(PyCThostFtdcTransferQryBankRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_repr(PyCThostFtdcTransferQryBankRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:d,s:s}"
#endif

		, "RetCode", self->data.RetCode 
		, "RetInfo", self->data.RetInfo 
		, "FutureAccount", self->data.FutureAccount 
		, "TradeAmt", self->data.TradeAmt
		, "UseAmt", self->data.UseAmt
		, "FetchAmt", self->data.FetchAmt
		, "CurrencyCode", self->data.CurrencyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryBankRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_get_RetCode(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.RetCode);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_get_RetInfo(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.RetInfo);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_get_FutureAccount(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureAccount);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_get_TradeAmt(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmt);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_get_UseAmt(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UseAmt);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_get_FetchAmt(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FetchAmt);
}

static PyObject *PyCThostFtdcTransferQryBankRspField_get_CurrencyCode(PyCThostFtdcTransferQryBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyCode);
}

static int PyCThostFtdcTransferQryBankRspField_set_RetCode(PyCThostFtdcTransferQryBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryBankRspField_set_RetInfo(PyCThostFtdcTransferQryBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryBankRspField_set_FutureAccount(PyCThostFtdcTransferQryBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryBankRspField_set_TradeAmt(PyCThostFtdcTransferQryBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryBankRspField_set_UseAmt(PyCThostFtdcTransferQryBankRspField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseAmt Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseAmt = buf;
    return 0;
}

static int PyCThostFtdcTransferQryBankRspField_set_FetchAmt(PyCThostFtdcTransferQryBankRspField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FetchAmt Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FetchAmt = buf;
    return 0;
}

static int PyCThostFtdcTransferQryBankRspField_set_CurrencyCode(PyCThostFtdcTransferQryBankRspField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTransferQryBankRspField_getset[] = {
	 {(char *)"RetCode", (getter)PyCThostFtdcTransferQryBankRspField_get_RetCode, (setter)PyCThostFtdcTransferQryBankRspField_set_RetCode, (char *)"RetCode", NULL},
	 {(char *)"RetInfo", (getter)PyCThostFtdcTransferQryBankRspField_get_RetInfo, (setter)PyCThostFtdcTransferQryBankRspField_set_RetInfo, (char *)"RetInfo", NULL},
	 {(char *)"FutureAccount", (getter)PyCThostFtdcTransferQryBankRspField_get_FutureAccount, (setter)PyCThostFtdcTransferQryBankRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
	 {(char *)"TradeAmt", (getter)PyCThostFtdcTransferQryBankRspField_get_TradeAmt, (setter)PyCThostFtdcTransferQryBankRspField_set_TradeAmt, (char *)"TradeAmt", NULL},
	 {(char *)"UseAmt", (getter)PyCThostFtdcTransferQryBankRspField_get_UseAmt, (setter)PyCThostFtdcTransferQryBankRspField_set_UseAmt, (char *)"UseAmt", NULL},
	 {(char *)"FetchAmt", (getter)PyCThostFtdcTransferQryBankRspField_get_FetchAmt, (setter)PyCThostFtdcTransferQryBankRspField_set_FetchAmt, (char *)"FetchAmt", NULL},
	 {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferQryBankRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferQryBankRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferQryBankRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferQryBankRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferQryBankRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferQryBankRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferQryBankRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferQryBankRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferQryBankRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferQryBankRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferQryBankRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferQryBankRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferQryBankRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferQryBankRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferQryBankRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferQryBankRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferQryBankRspField", (PyObject *)&PyCThostFtdcTransferQryBankRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryBankRspField to module");
        Py_DECREF(&PyCThostFtdcTransferQryBankRspFieldType);
		return -1;
    }

    return 0;
}
