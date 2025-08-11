
#include "PyCThostFtdcInvestorWithdrawAlgorithmField.h"



static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorWithdrawAlgorithmField *self = (PyCThostFtdcInvestorWithdrawAlgorithmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorWithdrawAlgorithmField_init(PyCThostFtdcInvestorWithdrawAlgorithmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorRange", "InvestorID", "UsingRatio", "CurrencyID", "FundMortgageRatio",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorWithdrawAlgorithmField_BrokerID = NULL;
	Py_ssize_t pInvestorWithdrawAlgorithmField_BrokerID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pInvestorWithdrawAlgorithmField_InvestorRange = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorWithdrawAlgorithmField_InvestorID = NULL;
	Py_ssize_t pInvestorWithdrawAlgorithmField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pInvestorWithdrawAlgorithmField_UsingRatio = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pInvestorWithdrawAlgorithmField_CurrencyID = NULL;
	Py_ssize_t pInvestorWithdrawAlgorithmField_CurrencyID_len = 0;

	//TThostFtdcRatioType double
	double pInvestorWithdrawAlgorithmField_FundMortgageRatio = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#dy#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#ds#d", (char **)kwlist
#endif

		, &pInvestorWithdrawAlgorithmField_BrokerID, &pInvestorWithdrawAlgorithmField_BrokerID_len
		, &pInvestorWithdrawAlgorithmField_InvestorRange
		, &pInvestorWithdrawAlgorithmField_InvestorID, &pInvestorWithdrawAlgorithmField_InvestorID_len
		, &pInvestorWithdrawAlgorithmField_UsingRatio
		, &pInvestorWithdrawAlgorithmField_CurrencyID, &pInvestorWithdrawAlgorithmField_CurrencyID_len
		, &pInvestorWithdrawAlgorithmField_FundMortgageRatio


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorWithdrawAlgorithmField_BrokerID != NULL) {
		if(pInvestorWithdrawAlgorithmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorWithdrawAlgorithmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorWithdrawAlgorithmField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorWithdrawAlgorithmField_BrokerID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInvestorWithdrawAlgorithmField_InvestorRange;

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorWithdrawAlgorithmField_InvestorID != NULL) {
		if(pInvestorWithdrawAlgorithmField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorWithdrawAlgorithmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorWithdrawAlgorithmField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorWithdrawAlgorithmField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.UsingRatio = pInvestorWithdrawAlgorithmField_UsingRatio;
	//TThostFtdcCurrencyIDType char[4]
	if(pInvestorWithdrawAlgorithmField_CurrencyID != NULL) {
		if(pInvestorWithdrawAlgorithmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pInvestorWithdrawAlgorithmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pInvestorWithdrawAlgorithmField_CurrencyID, sizeof(self->data.CurrencyID) );
		pInvestorWithdrawAlgorithmField_CurrencyID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.FundMortgageRatio = pInvestorWithdrawAlgorithmField_FundMortgageRatio;


    return 0;
}

static void PyCThostFtdcInvestorWithdrawAlgorithmField_dealloc(PyCThostFtdcInvestorWithdrawAlgorithmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_repr(PyCThostFtdcInvestorWithdrawAlgorithmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:d,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:d,s:s,s:d}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorRange", self->data.InvestorRange
		, "InvestorID", self->data.InvestorID 
		, "UsingRatio", self->data.UsingRatio
		, "CurrencyID", self->data.CurrencyID 
		, "FundMortgageRatio", self->data.FundMortgageRatio


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorWithdrawAlgorithmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_BrokerID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorRange(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_UsingRatio(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UsingRatio);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_CurrencyID(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcInvestorWithdrawAlgorithmField_get_FundMortgageRatio(PyCThostFtdcInvestorWithdrawAlgorithmField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageRatio);
}

static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_BrokerID(PyCThostFtdcInvestorWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorRange(PyCThostFtdcInvestorWithdrawAlgorithmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
		PyErr_SetString(PyExc_ValueError, "InvestorRange must be less than 1 bytes");
		return -1;
	}
	self->data.InvestorRange = *buf;
	return 0;
}

static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorID(PyCThostFtdcInvestorWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_UsingRatio(PyCThostFtdcInvestorWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_CurrencyID(PyCThostFtdcInvestorWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorWithdrawAlgorithmField_set_FundMortgageRatio(PyCThostFtdcInvestorWithdrawAlgorithmField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorWithdrawAlgorithmField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_BrokerID, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorRange, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_InvestorID, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"UsingRatio", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_UsingRatio, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_UsingRatio, (char *)"UsingRatio", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_CurrencyID, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"FundMortgageRatio", (getter)PyCThostFtdcInvestorWithdrawAlgorithmField_get_FundMortgageRatio, (setter)PyCThostFtdcInvestorWithdrawAlgorithmField_set_FundMortgageRatio, (char *)"FundMortgageRatio", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorWithdrawAlgorithmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorWithdrawAlgorithmField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorWithdrawAlgorithmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorWithdrawAlgorithmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorWithdrawAlgorithmField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorWithdrawAlgorithmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorWithdrawAlgorithmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorWithdrawAlgorithmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorWithdrawAlgorithmField_new,       /* tp_new */
};

int PyCThostFtdcInvestorWithdrawAlgorithmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorWithdrawAlgorithmField  */
	if (PyType_Ready(&PyCThostFtdcInvestorWithdrawAlgorithmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorWithdrawAlgorithmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorWithdrawAlgorithmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorWithdrawAlgorithmField", (PyObject *)&PyCThostFtdcInvestorWithdrawAlgorithmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorWithdrawAlgorithmField to module");
        Py_DECREF(&PyCThostFtdcInvestorWithdrawAlgorithmFieldType);
		return -1;
    }

    return 0;
}
