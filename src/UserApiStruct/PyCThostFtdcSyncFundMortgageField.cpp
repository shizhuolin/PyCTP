
#include "PyCThostFtdcSyncFundMortgageField.h"



static PyObject *PyCThostFtdcSyncFundMortgageField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncFundMortgageField *self = (PyCThostFtdcSyncFundMortgageField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncFundMortgageField_init(PyCThostFtdcSyncFundMortgageField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"MortgageSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "MortgageAmount", "ToCurrencyID",  NULL};

	//TThostFtdcDepositSeqNoType char[15]
	const char *pSyncFundMortgageField_MortgageSeqNo = NULL;
	Py_ssize_t pSyncFundMortgageField_MortgageSeqNo_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncFundMortgageField_BrokerID = NULL;
	Py_ssize_t pSyncFundMortgageField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncFundMortgageField_InvestorID = NULL;
	Py_ssize_t pSyncFundMortgageField_InvestorID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncFundMortgageField_FromCurrencyID = NULL;
	Py_ssize_t pSyncFundMortgageField_FromCurrencyID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncFundMortgageField_MortgageAmount = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncFundMortgageField_ToCurrencyID = NULL;
	Py_ssize_t pSyncFundMortgageField_ToCurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ds#", (char **)kwlist
#endif

		, &pSyncFundMortgageField_MortgageSeqNo, &pSyncFundMortgageField_MortgageSeqNo_len
		, &pSyncFundMortgageField_BrokerID, &pSyncFundMortgageField_BrokerID_len
		, &pSyncFundMortgageField_InvestorID, &pSyncFundMortgageField_InvestorID_len
		, &pSyncFundMortgageField_FromCurrencyID, &pSyncFundMortgageField_FromCurrencyID_len
		, &pSyncFundMortgageField_MortgageAmount
		, &pSyncFundMortgageField_ToCurrencyID, &pSyncFundMortgageField_ToCurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcDepositSeqNoType char[15]
	if(pSyncFundMortgageField_MortgageSeqNo != NULL) {
		if(pSyncFundMortgageField_MortgageSeqNo_len > (Py_ssize_t)sizeof(self->data.MortgageSeqNo)) {
			PyErr_Format(PyExc_ValueError, "MortgageSeqNo too long: length=%zd (max allowed is %zd)", pSyncFundMortgageField_MortgageSeqNo_len, (Py_ssize_t)sizeof(self->data.MortgageSeqNo));
			return -1;
		}
		strncpy(self->data.MortgageSeqNo, pSyncFundMortgageField_MortgageSeqNo, sizeof(self->data.MortgageSeqNo) );
		pSyncFundMortgageField_MortgageSeqNo = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncFundMortgageField_BrokerID != NULL) {
		if(pSyncFundMortgageField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncFundMortgageField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncFundMortgageField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncFundMortgageField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncFundMortgageField_InvestorID != NULL) {
		if(pSyncFundMortgageField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncFundMortgageField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncFundMortgageField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncFundMortgageField_InvestorID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSyncFundMortgageField_FromCurrencyID != NULL) {
		if(pSyncFundMortgageField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", pSyncFundMortgageField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
			return -1;
		}
		strncpy(self->data.FromCurrencyID, pSyncFundMortgageField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
		pSyncFundMortgageField_FromCurrencyID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.MortgageAmount = pSyncFundMortgageField_MortgageAmount;
	//TThostFtdcCurrencyIDType char[4]
	if(pSyncFundMortgageField_ToCurrencyID != NULL) {
		if(pSyncFundMortgageField_ToCurrencyID_len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is %zd)", pSyncFundMortgageField_ToCurrencyID_len, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
			return -1;
		}
		strncpy(self->data.ToCurrencyID, pSyncFundMortgageField_ToCurrencyID, sizeof(self->data.ToCurrencyID) );
		pSyncFundMortgageField_ToCurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSyncFundMortgageField_dealloc(PyCThostFtdcSyncFundMortgageField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_repr(PyCThostFtdcSyncFundMortgageField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:s}"
#endif

		, "MortgageSeqNo", self->data.MortgageSeqNo 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "FromCurrencyID", self->data.FromCurrencyID 
		, "MortgageAmount", self->data.MortgageAmount
		, "ToCurrencyID", self->data.ToCurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncFundMortgageField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_get_MortgageSeqNo(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
	return PyBytes_FromString(self->data.MortgageSeqNo);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_get_BrokerID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_get_InvestorID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_get_FromCurrencyID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
	return PyBytes_FromString(self->data.FromCurrencyID);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_get_MortgageAmount(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MortgageAmount);
}

static PyObject *PyCThostFtdcSyncFundMortgageField_get_ToCurrencyID(PyCThostFtdcSyncFundMortgageField *self, void *closure) {
	return PyBytes_FromString(self->data.ToCurrencyID);
}

static int PyCThostFtdcSyncFundMortgageField_set_MortgageSeqNo(PyCThostFtdcSyncFundMortgageField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MortgageSeqNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MortgageSeqNo)) {
		PyErr_SetString(PyExc_ValueError, "MortgageSeqNo must be less than 15 bytes");
		return -1;
	}
	strncpy(self->data.MortgageSeqNo, buf, sizeof(self->data.MortgageSeqNo));
	return 0;
}

static int PyCThostFtdcSyncFundMortgageField_set_BrokerID(PyCThostFtdcSyncFundMortgageField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncFundMortgageField_set_InvestorID(PyCThostFtdcSyncFundMortgageField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncFundMortgageField_set_FromCurrencyID(PyCThostFtdcSyncFundMortgageField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.FromCurrencyID, buf, sizeof(self->data.FromCurrencyID));
	return 0;
}

static int PyCThostFtdcSyncFundMortgageField_set_MortgageAmount(PyCThostFtdcSyncFundMortgageField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MortgageAmount = buf;
    return 0;
}

static int PyCThostFtdcSyncFundMortgageField_set_ToCurrencyID(PyCThostFtdcSyncFundMortgageField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.ToCurrencyID, buf, sizeof(self->data.ToCurrencyID));
	return 0;
}



static PyGetSetDef PyCThostFtdcSyncFundMortgageField_getset[] = {
	 {(char *)"MortgageSeqNo", (getter)PyCThostFtdcSyncFundMortgageField_get_MortgageSeqNo, (setter)PyCThostFtdcSyncFundMortgageField_set_MortgageSeqNo, (char *)"MortgageSeqNo", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncFundMortgageField_get_BrokerID, (setter)PyCThostFtdcSyncFundMortgageField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncFundMortgageField_get_InvestorID, (setter)PyCThostFtdcSyncFundMortgageField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"FromCurrencyID", (getter)PyCThostFtdcSyncFundMortgageField_get_FromCurrencyID, (setter)PyCThostFtdcSyncFundMortgageField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
	 {(char *)"MortgageAmount", (getter)PyCThostFtdcSyncFundMortgageField_get_MortgageAmount, (setter)PyCThostFtdcSyncFundMortgageField_set_MortgageAmount, (char *)"MortgageAmount", NULL},
	 {(char *)"ToCurrencyID", (getter)PyCThostFtdcSyncFundMortgageField_get_ToCurrencyID, (setter)PyCThostFtdcSyncFundMortgageField_set_ToCurrencyID, (char *)"ToCurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncFundMortgageFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncFundMortgageField",	/* tp_name */
	sizeof(PyCThostFtdcSyncFundMortgageField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncFundMortgageField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncFundMortgageField_repr,   /* tp_repr */
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
	"CThostFtdcSyncFundMortgageField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncFundMortgageField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncFundMortgageField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncFundMortgageField_new,       /* tp_new */
};

int PyCThostFtdcSyncFundMortgageFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncFundMortgageField  */
	if (PyType_Ready(&PyCThostFtdcSyncFundMortgageFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncFundMortgageField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncFundMortgageFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncFundMortgageField", (PyObject *)&PyCThostFtdcSyncFundMortgageFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncFundMortgageField to module");
        Py_DECREF(&PyCThostFtdcSyncFundMortgageFieldType);
		return -1;
    }

    return 0;
}
