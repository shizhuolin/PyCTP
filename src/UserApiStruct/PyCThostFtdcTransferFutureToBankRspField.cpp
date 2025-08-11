
#include "PyCThostFtdcTransferFutureToBankRspField.h"



static PyObject *PyCThostFtdcTransferFutureToBankRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferFutureToBankRspField *self = (PyCThostFtdcTransferFutureToBankRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferFutureToBankRspField_init(PyCThostFtdcTransferFutureToBankRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RetCode", "RetInfo", "FutureAccount", "TradeAmt", "CustFee", "CurrencyCode",  NULL};

	//TThostFtdcRetCodeType char[5]
	const char *pTransferFutureToBankRspField_RetCode = NULL;
	Py_ssize_t pTransferFutureToBankRspField_RetCode_len = 0;

	//TThostFtdcRetInfoType char[129]
	const char *pTransferFutureToBankRspField_RetInfo = NULL;
	Py_ssize_t pTransferFutureToBankRspField_RetInfo_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTransferFutureToBankRspField_FutureAccount = NULL;
	Py_ssize_t pTransferFutureToBankRspField_FutureAccount_len = 0;

	//TThostFtdcMoneyType double
	double pTransferFutureToBankRspField_TradeAmt = 0.0;

	//TThostFtdcMoneyType double
	double pTransferFutureToBankRspField_CustFee = 0.0;

	//TThostFtdcCurrencyCodeType char[4]
	const char *pTransferFutureToBankRspField_CurrencyCode = NULL;
	Py_ssize_t pTransferFutureToBankRspField_CurrencyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dds#", (char **)kwlist
#endif

		, &pTransferFutureToBankRspField_RetCode, &pTransferFutureToBankRspField_RetCode_len
		, &pTransferFutureToBankRspField_RetInfo, &pTransferFutureToBankRspField_RetInfo_len
		, &pTransferFutureToBankRspField_FutureAccount, &pTransferFutureToBankRspField_FutureAccount_len
		, &pTransferFutureToBankRspField_TradeAmt
		, &pTransferFutureToBankRspField_CustFee
		, &pTransferFutureToBankRspField_CurrencyCode, &pTransferFutureToBankRspField_CurrencyCode_len


    )) {
        return -1;
    }

	//TThostFtdcRetCodeType char[5]
	if(pTransferFutureToBankRspField_RetCode != NULL) {
		if(pTransferFutureToBankRspField_RetCode_len > (Py_ssize_t)sizeof(self->data.RetCode)) {
			PyErr_Format(PyExc_ValueError, "RetCode too long: length=%zd (max allowed is %zd)", pTransferFutureToBankRspField_RetCode_len, (Py_ssize_t)sizeof(self->data.RetCode));
			return -1;
		}
		strncpy(self->data.RetCode, pTransferFutureToBankRspField_RetCode, sizeof(self->data.RetCode) );
		pTransferFutureToBankRspField_RetCode = NULL;
	}

	//TThostFtdcRetInfoType char[129]
	if(pTransferFutureToBankRspField_RetInfo != NULL) {
		if(pTransferFutureToBankRspField_RetInfo_len > (Py_ssize_t)sizeof(self->data.RetInfo)) {
			PyErr_Format(PyExc_ValueError, "RetInfo too long: length=%zd (max allowed is %zd)", pTransferFutureToBankRspField_RetInfo_len, (Py_ssize_t)sizeof(self->data.RetInfo));
			return -1;
		}
		strncpy(self->data.RetInfo, pTransferFutureToBankRspField_RetInfo, sizeof(self->data.RetInfo) );
		pTransferFutureToBankRspField_RetInfo = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTransferFutureToBankRspField_FutureAccount != NULL) {
		if(pTransferFutureToBankRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
			PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", pTransferFutureToBankRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
			return -1;
		}
		strncpy(self->data.FutureAccount, pTransferFutureToBankRspField_FutureAccount, sizeof(self->data.FutureAccount) );
		pTransferFutureToBankRspField_FutureAccount = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.TradeAmt = pTransferFutureToBankRspField_TradeAmt;
	//TThostFtdcMoneyType double
	self->data.CustFee = pTransferFutureToBankRspField_CustFee;
	//TThostFtdcCurrencyCodeType char[4]
	if(pTransferFutureToBankRspField_CurrencyCode != NULL) {
		if(pTransferFutureToBankRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
			PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", pTransferFutureToBankRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
			return -1;
		}
		strncpy(self->data.CurrencyCode, pTransferFutureToBankRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
		pTransferFutureToBankRspField_CurrencyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcTransferFutureToBankRspField_dealloc(PyCThostFtdcTransferFutureToBankRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_repr(PyCThostFtdcTransferFutureToBankRspField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferFutureToBankRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_RetCode(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.RetCode);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_RetInfo(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.RetInfo);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_FutureAccount(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureAccount);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_TradeAmt(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmt);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_CustFee(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcTransferFutureToBankRspField_get_CurrencyCode(PyCThostFtdcTransferFutureToBankRspField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyCode);
}

static int PyCThostFtdcTransferFutureToBankRspField_set_RetCode(PyCThostFtdcTransferFutureToBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferFutureToBankRspField_set_RetInfo(PyCThostFtdcTransferFutureToBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferFutureToBankRspField_set_FutureAccount(PyCThostFtdcTransferFutureToBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferFutureToBankRspField_set_TradeAmt(PyCThostFtdcTransferFutureToBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferFutureToBankRspField_set_CustFee(PyCThostFtdcTransferFutureToBankRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferFutureToBankRspField_set_CurrencyCode(PyCThostFtdcTransferFutureToBankRspField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTransferFutureToBankRspField_getset[] = {
	 {(char *)"RetCode", (getter)PyCThostFtdcTransferFutureToBankRspField_get_RetCode, (setter)PyCThostFtdcTransferFutureToBankRspField_set_RetCode, (char *)"RetCode", NULL},
	 {(char *)"RetInfo", (getter)PyCThostFtdcTransferFutureToBankRspField_get_RetInfo, (setter)PyCThostFtdcTransferFutureToBankRspField_set_RetInfo, (char *)"RetInfo", NULL},
	 {(char *)"FutureAccount", (getter)PyCThostFtdcTransferFutureToBankRspField_get_FutureAccount, (setter)PyCThostFtdcTransferFutureToBankRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
	 {(char *)"TradeAmt", (getter)PyCThostFtdcTransferFutureToBankRspField_get_TradeAmt, (setter)PyCThostFtdcTransferFutureToBankRspField_set_TradeAmt, (char *)"TradeAmt", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcTransferFutureToBankRspField_get_CustFee, (setter)PyCThostFtdcTransferFutureToBankRspField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferFutureToBankRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferFutureToBankRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferFutureToBankRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferFutureToBankRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferFutureToBankRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferFutureToBankRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferFutureToBankRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferFutureToBankRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferFutureToBankRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferFutureToBankRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferFutureToBankRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferFutureToBankRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferFutureToBankRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferFutureToBankRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferFutureToBankRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferFutureToBankRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferFutureToBankRspField", (PyObject *)&PyCThostFtdcTransferFutureToBankRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferFutureToBankRspField to module");
        Py_DECREF(&PyCThostFtdcTransferFutureToBankRspFieldType);
		return -1;
    }

    return 0;
}
