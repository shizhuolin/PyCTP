
#include "PyCThostFtdcSyncDelaySwapField.h"



static PyObject *PyCThostFtdcSyncDelaySwapField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDelaySwapField *self = (PyCThostFtdcSyncDelaySwapField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDelaySwapField_init(PyCThostFtdcSyncDelaySwapField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DelaySwapSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "FromAmount", "FromFrozenSwap", "FromRemainSwap", "ToCurrencyID", "ToAmount", "IsManualSwap", "IsAllRemainSetZero",  NULL};

	//TThostFtdcDepositSeqNoType char[15]
	const char *pSyncDelaySwapField_DelaySwapSeqNo = NULL;
	Py_ssize_t pSyncDelaySwapField_DelaySwapSeqNo_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDelaySwapField_BrokerID = NULL;
	Py_ssize_t pSyncDelaySwapField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDelaySwapField_InvestorID = NULL;
	Py_ssize_t pSyncDelaySwapField_InvestorID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncDelaySwapField_FromCurrencyID = NULL;
	Py_ssize_t pSyncDelaySwapField_FromCurrencyID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDelaySwapField_FromAmount = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDelaySwapField_FromFrozenSwap = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDelaySwapField_FromRemainSwap = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncDelaySwapField_ToCurrencyID = NULL;
	Py_ssize_t pSyncDelaySwapField_ToCurrencyID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDelaySwapField_ToAmount = 0.0;

	//TThostFtdcBoolType int
	int pSyncDelaySwapField_IsManualSwap = 0;

	//TThostFtdcBoolType int
	int pSyncDelaySwapField_IsAllRemainSetZero = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddy#dii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddds#dii", (char **)kwlist
#endif

		, &pSyncDelaySwapField_DelaySwapSeqNo, &pSyncDelaySwapField_DelaySwapSeqNo_len
		, &pSyncDelaySwapField_BrokerID, &pSyncDelaySwapField_BrokerID_len
		, &pSyncDelaySwapField_InvestorID, &pSyncDelaySwapField_InvestorID_len
		, &pSyncDelaySwapField_FromCurrencyID, &pSyncDelaySwapField_FromCurrencyID_len
		, &pSyncDelaySwapField_FromAmount
		, &pSyncDelaySwapField_FromFrozenSwap
		, &pSyncDelaySwapField_FromRemainSwap
		, &pSyncDelaySwapField_ToCurrencyID, &pSyncDelaySwapField_ToCurrencyID_len
		, &pSyncDelaySwapField_ToAmount
		, &pSyncDelaySwapField_IsManualSwap
		, &pSyncDelaySwapField_IsAllRemainSetZero


    )) {
        return -1;
    }

	//TThostFtdcDepositSeqNoType char[15]
	if(pSyncDelaySwapField_DelaySwapSeqNo != NULL) {
		if(pSyncDelaySwapField_DelaySwapSeqNo_len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
			PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is %zd)", pSyncDelaySwapField_DelaySwapSeqNo_len, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo));
			return -1;
		}
		strncpy(self->data.DelaySwapSeqNo, pSyncDelaySwapField_DelaySwapSeqNo, sizeof(self->data.DelaySwapSeqNo) );
		pSyncDelaySwapField_DelaySwapSeqNo = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDelaySwapField_BrokerID != NULL) {
		if(pSyncDelaySwapField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDelaySwapField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDelaySwapField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDelaySwapField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDelaySwapField_InvestorID != NULL) {
		if(pSyncDelaySwapField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDelaySwapField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDelaySwapField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDelaySwapField_InvestorID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSyncDelaySwapField_FromCurrencyID != NULL) {
		if(pSyncDelaySwapField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", pSyncDelaySwapField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
			return -1;
		}
		strncpy(self->data.FromCurrencyID, pSyncDelaySwapField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
		pSyncDelaySwapField_FromCurrencyID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.FromAmount = pSyncDelaySwapField_FromAmount;
	//TThostFtdcMoneyType double
	self->data.FromFrozenSwap = pSyncDelaySwapField_FromFrozenSwap;
	//TThostFtdcMoneyType double
	self->data.FromRemainSwap = pSyncDelaySwapField_FromRemainSwap;
	//TThostFtdcCurrencyIDType char[4]
	if(pSyncDelaySwapField_ToCurrencyID != NULL) {
		if(pSyncDelaySwapField_ToCurrencyID_len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is %zd)", pSyncDelaySwapField_ToCurrencyID_len, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
			return -1;
		}
		strncpy(self->data.ToCurrencyID, pSyncDelaySwapField_ToCurrencyID, sizeof(self->data.ToCurrencyID) );
		pSyncDelaySwapField_ToCurrencyID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.ToAmount = pSyncDelaySwapField_ToAmount;
	//TThostFtdcBoolType int
	self->data.IsManualSwap = pSyncDelaySwapField_IsManualSwap;

	//TThostFtdcBoolType int
	self->data.IsAllRemainSetZero = pSyncDelaySwapField_IsAllRemainSetZero;



    return 0;
}

static void PyCThostFtdcSyncDelaySwapField_dealloc(PyCThostFtdcSyncDelaySwapField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_repr(PyCThostFtdcSyncDelaySwapField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:y,s:d,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:s,s:d,s:i,s:i}"
#endif

		, "DelaySwapSeqNo", self->data.DelaySwapSeqNo 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "FromCurrencyID", self->data.FromCurrencyID 
		, "FromAmount", self->data.FromAmount
		, "FromFrozenSwap", self->data.FromFrozenSwap
		, "FromRemainSwap", self->data.FromRemainSwap
		, "ToCurrencyID", self->data.ToCurrencyID 
		, "ToAmount", self->data.ToAmount
		, "IsManualSwap", self->data.IsManualSwap
		, "IsAllRemainSetZero", self->data.IsAllRemainSetZero


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyBytes_FromString(self->data.DelaySwapSeqNo);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_BrokerID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_InvestorID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromCurrencyID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyBytes_FromString(self->data.FromCurrencyID);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromAmount(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FromAmount);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromFrozenSwap(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FromFrozenSwap);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_FromRemainSwap(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FromRemainSwap);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_ToCurrencyID(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyBytes_FromString(self->data.ToCurrencyID);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_ToAmount(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ToAmount);
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_IsManualSwap(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsManualSwap);
#else 
	return PyInt_FromLong(self->data.IsManualSwap);
#endif 
}

static PyObject *PyCThostFtdcSyncDelaySwapField_get_IsAllRemainSetZero(PyCThostFtdcSyncDelaySwapField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsAllRemainSetZero);
#else 
	return PyInt_FromLong(self->data.IsAllRemainSetZero);
#endif 
}

static int PyCThostFtdcSyncDelaySwapField_set_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "DelaySwapSeqNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
		PyErr_SetString(PyExc_ValueError, "DelaySwapSeqNo must be less than 15 bytes");
		return -1;
	}
	strncpy(self->data.DelaySwapSeqNo, buf, sizeof(self->data.DelaySwapSeqNo));
	return 0;
}

static int PyCThostFtdcSyncDelaySwapField_set_BrokerID(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapField_set_InvestorID(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapField_set_FromCurrencyID(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapField_set_FromAmount(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromAmount = buf;
    return 0;
}

static int PyCThostFtdcSyncDelaySwapField_set_FromFrozenSwap(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromFrozenSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromFrozenSwap = buf;
    return 0;
}

static int PyCThostFtdcSyncDelaySwapField_set_FromRemainSwap(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromRemainSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FromRemainSwap = buf;
    return 0;
}

static int PyCThostFtdcSyncDelaySwapField_set_ToCurrencyID(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapField_set_ToAmount(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ToAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ToAmount = buf;
    return 0;
}

static int PyCThostFtdcSyncDelaySwapField_set_IsManualSwap(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsManualSwap Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsManualSwap Expected int"); 
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
    self->data.IsManualSwap = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDelaySwapField_set_IsAllRemainSetZero(PyCThostFtdcSyncDelaySwapField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAllRemainSetZero Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsAllRemainSetZero Expected int"); 
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
    self->data.IsAllRemainSetZero = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDelaySwapField_getset[] = {
	 {(char *)"DelaySwapSeqNo", (getter)PyCThostFtdcSyncDelaySwapField_get_DelaySwapSeqNo, (setter)PyCThostFtdcSyncDelaySwapField_set_DelaySwapSeqNo, (char *)"DelaySwapSeqNo", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDelaySwapField_get_BrokerID, (setter)PyCThostFtdcSyncDelaySwapField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDelaySwapField_get_InvestorID, (setter)PyCThostFtdcSyncDelaySwapField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"FromCurrencyID", (getter)PyCThostFtdcSyncDelaySwapField_get_FromCurrencyID, (setter)PyCThostFtdcSyncDelaySwapField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
	 {(char *)"FromAmount", (getter)PyCThostFtdcSyncDelaySwapField_get_FromAmount, (setter)PyCThostFtdcSyncDelaySwapField_set_FromAmount, (char *)"FromAmount", NULL},
	 {(char *)"FromFrozenSwap", (getter)PyCThostFtdcSyncDelaySwapField_get_FromFrozenSwap, (setter)PyCThostFtdcSyncDelaySwapField_set_FromFrozenSwap, (char *)"FromFrozenSwap", NULL},
	 {(char *)"FromRemainSwap", (getter)PyCThostFtdcSyncDelaySwapField_get_FromRemainSwap, (setter)PyCThostFtdcSyncDelaySwapField_set_FromRemainSwap, (char *)"FromRemainSwap", NULL},
	 {(char *)"ToCurrencyID", (getter)PyCThostFtdcSyncDelaySwapField_get_ToCurrencyID, (setter)PyCThostFtdcSyncDelaySwapField_set_ToCurrencyID, (char *)"ToCurrencyID", NULL},
	 {(char *)"ToAmount", (getter)PyCThostFtdcSyncDelaySwapField_get_ToAmount, (setter)PyCThostFtdcSyncDelaySwapField_set_ToAmount, (char *)"ToAmount", NULL},
	 {(char *)"IsManualSwap", (getter)PyCThostFtdcSyncDelaySwapField_get_IsManualSwap, (setter)PyCThostFtdcSyncDelaySwapField_set_IsManualSwap, (char *)"IsManualSwap", NULL},
	 {(char *)"IsAllRemainSetZero", (getter)PyCThostFtdcSyncDelaySwapField_get_IsAllRemainSetZero, (setter)PyCThostFtdcSyncDelaySwapField_set_IsAllRemainSetZero, (char *)"IsAllRemainSetZero", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDelaySwapFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDelaySwapField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDelaySwapField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDelaySwapField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDelaySwapField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDelaySwapField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDelaySwapField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDelaySwapField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDelaySwapField_new,       /* tp_new */
};

int PyCThostFtdcSyncDelaySwapFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDelaySwapField  */
	if (PyType_Ready(&PyCThostFtdcSyncDelaySwapFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDelaySwapField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDelaySwapFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDelaySwapField", (PyObject *)&PyCThostFtdcSyncDelaySwapFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDelaySwapField to module");
        Py_DECREF(&PyCThostFtdcSyncDelaySwapFieldType);
		return -1;
    }

    return 0;
}
