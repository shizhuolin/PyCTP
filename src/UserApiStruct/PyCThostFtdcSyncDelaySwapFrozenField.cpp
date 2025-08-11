
#include "PyCThostFtdcSyncDelaySwapFrozenField.h"



static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDelaySwapFrozenField *self = (PyCThostFtdcSyncDelaySwapFrozenField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDelaySwapFrozenField_init(PyCThostFtdcSyncDelaySwapFrozenField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"DelaySwapSeqNo", "BrokerID", "InvestorID", "FromCurrencyID", "FromRemainSwap", "IsManualSwap",  NULL};

	//TThostFtdcDepositSeqNoType char[15]
	const char *pSyncDelaySwapFrozenField_DelaySwapSeqNo = NULL;
	Py_ssize_t pSyncDelaySwapFrozenField_DelaySwapSeqNo_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDelaySwapFrozenField_BrokerID = NULL;
	Py_ssize_t pSyncDelaySwapFrozenField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDelaySwapFrozenField_InvestorID = NULL;
	Py_ssize_t pSyncDelaySwapFrozenField_InvestorID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncDelaySwapFrozenField_FromCurrencyID = NULL;
	Py_ssize_t pSyncDelaySwapFrozenField_FromCurrencyID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDelaySwapFrozenField_FromRemainSwap = 0.0;

	//TThostFtdcBoolType int
	int pSyncDelaySwapFrozenField_IsManualSwap = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#di", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#di", (char **)kwlist
#endif

		, &pSyncDelaySwapFrozenField_DelaySwapSeqNo, &pSyncDelaySwapFrozenField_DelaySwapSeqNo_len
		, &pSyncDelaySwapFrozenField_BrokerID, &pSyncDelaySwapFrozenField_BrokerID_len
		, &pSyncDelaySwapFrozenField_InvestorID, &pSyncDelaySwapFrozenField_InvestorID_len
		, &pSyncDelaySwapFrozenField_FromCurrencyID, &pSyncDelaySwapFrozenField_FromCurrencyID_len
		, &pSyncDelaySwapFrozenField_FromRemainSwap
		, &pSyncDelaySwapFrozenField_IsManualSwap


    )) {
        return -1;
    }

	//TThostFtdcDepositSeqNoType char[15]
	if(pSyncDelaySwapFrozenField_DelaySwapSeqNo != NULL) {
		if(pSyncDelaySwapFrozenField_DelaySwapSeqNo_len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
			PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is %zd)", pSyncDelaySwapFrozenField_DelaySwapSeqNo_len, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo));
			return -1;
		}
		strncpy(self->data.DelaySwapSeqNo, pSyncDelaySwapFrozenField_DelaySwapSeqNo, sizeof(self->data.DelaySwapSeqNo) );
		pSyncDelaySwapFrozenField_DelaySwapSeqNo = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDelaySwapFrozenField_BrokerID != NULL) {
		if(pSyncDelaySwapFrozenField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDelaySwapFrozenField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDelaySwapFrozenField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDelaySwapFrozenField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDelaySwapFrozenField_InvestorID != NULL) {
		if(pSyncDelaySwapFrozenField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDelaySwapFrozenField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDelaySwapFrozenField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDelaySwapFrozenField_InvestorID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSyncDelaySwapFrozenField_FromCurrencyID != NULL) {
		if(pSyncDelaySwapFrozenField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", pSyncDelaySwapFrozenField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
			return -1;
		}
		strncpy(self->data.FromCurrencyID, pSyncDelaySwapFrozenField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
		pSyncDelaySwapFrozenField_FromCurrencyID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.FromRemainSwap = pSyncDelaySwapFrozenField_FromRemainSwap;
	//TThostFtdcBoolType int
	self->data.IsManualSwap = pSyncDelaySwapFrozenField_IsManualSwap;



    return 0;
}

static void PyCThostFtdcSyncDelaySwapFrozenField_dealloc(PyCThostFtdcSyncDelaySwapFrozenField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_repr(PyCThostFtdcSyncDelaySwapFrozenField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:i}"
#endif

		, "DelaySwapSeqNo", self->data.DelaySwapSeqNo 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "FromCurrencyID", self->data.FromCurrencyID 
		, "FromRemainSwap", self->data.FromRemainSwap
		, "IsManualSwap", self->data.IsManualSwap


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDelaySwapFrozenField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
	return PyBytes_FromString(self->data.DelaySwapSeqNo);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_BrokerID(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_InvestorID(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_FromCurrencyID(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
	return PyBytes_FromString(self->data.FromCurrencyID);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_FromRemainSwap(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FromRemainSwap);
}

static PyObject *PyCThostFtdcSyncDelaySwapFrozenField_get_IsManualSwap(PyCThostFtdcSyncDelaySwapFrozenField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsManualSwap);
#else 
	return PyInt_FromLong(self->data.IsManualSwap);
#endif 
}

static int PyCThostFtdcSyncDelaySwapFrozenField_set_DelaySwapSeqNo(PyCThostFtdcSyncDelaySwapFrozenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapFrozenField_set_BrokerID(PyCThostFtdcSyncDelaySwapFrozenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapFrozenField_set_InvestorID(PyCThostFtdcSyncDelaySwapFrozenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapFrozenField_set_FromCurrencyID(PyCThostFtdcSyncDelaySwapFrozenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapFrozenField_set_FromRemainSwap(PyCThostFtdcSyncDelaySwapFrozenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDelaySwapFrozenField_set_IsManualSwap(PyCThostFtdcSyncDelaySwapFrozenField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDelaySwapFrozenField_getset[] = {
	 {(char *)"DelaySwapSeqNo", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_DelaySwapSeqNo, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_DelaySwapSeqNo, (char *)"DelaySwapSeqNo", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_BrokerID, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_InvestorID, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"FromCurrencyID", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_FromCurrencyID, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
	 {(char *)"FromRemainSwap", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_FromRemainSwap, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_FromRemainSwap, (char *)"FromRemainSwap", NULL},
	 {(char *)"IsManualSwap", (getter)PyCThostFtdcSyncDelaySwapFrozenField_get_IsManualSwap, (setter)PyCThostFtdcSyncDelaySwapFrozenField_set_IsManualSwap, (char *)"IsManualSwap", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDelaySwapFrozenFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDelaySwapFrozenField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDelaySwapFrozenField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDelaySwapFrozenField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDelaySwapFrozenField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDelaySwapFrozenField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDelaySwapFrozenField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDelaySwapFrozenField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDelaySwapFrozenField_new,       /* tp_new */
};

int PyCThostFtdcSyncDelaySwapFrozenFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDelaySwapFrozenField  */
	if (PyType_Ready(&PyCThostFtdcSyncDelaySwapFrozenFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDelaySwapFrozenField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDelaySwapFrozenFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDelaySwapFrozenField", (PyObject *)&PyCThostFtdcSyncDelaySwapFrozenFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDelaySwapFrozenField to module");
        Py_DECREF(&PyCThostFtdcSyncDelaySwapFrozenFieldType);
		return -1;
    }

    return 0;
}
