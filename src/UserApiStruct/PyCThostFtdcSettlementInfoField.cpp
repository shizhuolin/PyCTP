
#include "PyCThostFtdcSettlementInfoField.h"



static PyObject *PyCThostFtdcSettlementInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSettlementInfoField *self = (PyCThostFtdcSettlementInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSettlementInfoField_init(PyCThostFtdcSettlementInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "SettlementID", "BrokerID", "InvestorID", "SequenceNo", "Content", "AccountID", "CurrencyID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSettlementInfoField_TradingDay = NULL;
	Py_ssize_t pSettlementInfoField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pSettlementInfoField_SettlementID = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSettlementInfoField_BrokerID = NULL;
	Py_ssize_t pSettlementInfoField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSettlementInfoField_InvestorID = NULL;
	Py_ssize_t pSettlementInfoField_InvestorID_len = 0;

	//TThostFtdcSequenceNoType int
	int pSettlementInfoField_SequenceNo = 0;

	//TThostFtdcContentType char[501]
	const char *pSettlementInfoField_Content = NULL;
	Py_ssize_t pSettlementInfoField_Content_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pSettlementInfoField_AccountID = NULL;
	Py_ssize_t pSettlementInfoField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSettlementInfoField_CurrencyID = NULL;
	Py_ssize_t pSettlementInfoField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#iy#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#is#s#is#s#s#", (char **)kwlist
#endif

		, &pSettlementInfoField_TradingDay, &pSettlementInfoField_TradingDay_len
		, &pSettlementInfoField_SettlementID
		, &pSettlementInfoField_BrokerID, &pSettlementInfoField_BrokerID_len
		, &pSettlementInfoField_InvestorID, &pSettlementInfoField_InvestorID_len
		, &pSettlementInfoField_SequenceNo
		, &pSettlementInfoField_Content, &pSettlementInfoField_Content_len
		, &pSettlementInfoField_AccountID, &pSettlementInfoField_AccountID_len
		, &pSettlementInfoField_CurrencyID, &pSettlementInfoField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSettlementInfoField_TradingDay != NULL) {
		if(pSettlementInfoField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSettlementInfoField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSettlementInfoField_TradingDay, sizeof(self->data.TradingDay) );
		pSettlementInfoField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pSettlementInfoField_SettlementID;

	//TThostFtdcBrokerIDType char[11]
	if(pSettlementInfoField_BrokerID != NULL) {
		if(pSettlementInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSettlementInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSettlementInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pSettlementInfoField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSettlementInfoField_InvestorID != NULL) {
		if(pSettlementInfoField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSettlementInfoField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSettlementInfoField_InvestorID, sizeof(self->data.InvestorID) );
		pSettlementInfoField_InvestorID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pSettlementInfoField_SequenceNo;

	//TThostFtdcContentType char[501]
	if(pSettlementInfoField_Content != NULL) {
		if(pSettlementInfoField_Content_len > (Py_ssize_t)sizeof(self->data.Content)) {
			PyErr_Format(PyExc_ValueError, "Content too long: length=%zd (max allowed is %zd)", pSettlementInfoField_Content_len, (Py_ssize_t)sizeof(self->data.Content));
			return -1;
		}
		strncpy(self->data.Content, pSettlementInfoField_Content, sizeof(self->data.Content) );
		pSettlementInfoField_Content = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pSettlementInfoField_AccountID != NULL) {
		if(pSettlementInfoField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pSettlementInfoField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pSettlementInfoField_AccountID, sizeof(self->data.AccountID) );
		pSettlementInfoField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSettlementInfoField_CurrencyID != NULL) {
		if(pSettlementInfoField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pSettlementInfoField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pSettlementInfoField_CurrencyID, sizeof(self->data.CurrencyID) );
		pSettlementInfoField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSettlementInfoField_dealloc(PyCThostFtdcSettlementInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSettlementInfoField_repr(PyCThostFtdcSettlementInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:s,s:s,s:i,s:s,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "SequenceNo", self->data.SequenceNo
		, "Content", self->data.Content 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSettlementInfoField_get_TradingDay(PyCThostFtdcSettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSettlementInfoField_get_SettlementID(PyCThostFtdcSettlementInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcSettlementInfoField_get_BrokerID(PyCThostFtdcSettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSettlementInfoField_get_InvestorID(PyCThostFtdcSettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSettlementInfoField_get_SequenceNo(PyCThostFtdcSettlementInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcSettlementInfoField_get_Content(PyCThostFtdcSettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.Content);
}

static PyObject *PyCThostFtdcSettlementInfoField_get_AccountID(PyCThostFtdcSettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcSettlementInfoField_get_CurrencyID(PyCThostFtdcSettlementInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcSettlementInfoField_set_TradingDay(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSettlementInfoField_set_SettlementID(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int"); 
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
    self->data.SettlementID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSettlementInfoField_set_BrokerID(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSettlementInfoField_set_InvestorID(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSettlementInfoField_set_SequenceNo(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSettlementInfoField_set_Content(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Content Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Content)) {
		PyErr_SetString(PyExc_ValueError, "Content must be less than 501 bytes");
		return -1;
	}
	strncpy(self->data.Content, buf, sizeof(self->data.Content));
	return 0;
}

static int PyCThostFtdcSettlementInfoField_set_AccountID(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcSettlementInfoField_set_CurrencyID(PyCThostFtdcSettlementInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSettlementInfoField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSettlementInfoField_get_TradingDay, (setter)PyCThostFtdcSettlementInfoField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcSettlementInfoField_get_SettlementID, (setter)PyCThostFtdcSettlementInfoField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSettlementInfoField_get_BrokerID, (setter)PyCThostFtdcSettlementInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSettlementInfoField_get_InvestorID, (setter)PyCThostFtdcSettlementInfoField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcSettlementInfoField_get_SequenceNo, (setter)PyCThostFtdcSettlementInfoField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"Content", (getter)PyCThostFtdcSettlementInfoField_get_Content, (setter)PyCThostFtdcSettlementInfoField_set_Content, (char *)"Content", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcSettlementInfoField_get_AccountID, (setter)PyCThostFtdcSettlementInfoField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcSettlementInfoField_get_CurrencyID, (setter)PyCThostFtdcSettlementInfoField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSettlementInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSettlementInfoField",	/* tp_name */
	sizeof(PyCThostFtdcSettlementInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSettlementInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSettlementInfoField_repr,   /* tp_repr */
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
	"CThostFtdcSettlementInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSettlementInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSettlementInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSettlementInfoField_new,       /* tp_new */
};

int PyCThostFtdcSettlementInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSettlementInfoField  */
	if (PyType_Ready(&PyCThostFtdcSettlementInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSettlementInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSettlementInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoField", (PyObject *)&PyCThostFtdcSettlementInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoField to module");
        Py_DECREF(&PyCThostFtdcSettlementInfoFieldType);
		return -1;
    }

    return 0;
}
