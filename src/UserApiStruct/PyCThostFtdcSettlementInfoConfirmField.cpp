
#include "PyCThostFtdcSettlementInfoConfirmField.h"



static PyObject *PyCThostFtdcSettlementInfoConfirmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSettlementInfoConfirmField *self = (PyCThostFtdcSettlementInfoConfirmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSettlementInfoConfirmField_init(PyCThostFtdcSettlementInfoConfirmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ConfirmDate", "ConfirmTime", "SettlementID", "AccountID", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSettlementInfoConfirmField_BrokerID = NULL;
	Py_ssize_t pSettlementInfoConfirmField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSettlementInfoConfirmField_InvestorID = NULL;
	Py_ssize_t pSettlementInfoConfirmField_InvestorID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pSettlementInfoConfirmField_ConfirmDate = NULL;
	Py_ssize_t pSettlementInfoConfirmField_ConfirmDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pSettlementInfoConfirmField_ConfirmTime = NULL;
	Py_ssize_t pSettlementInfoConfirmField_ConfirmTime_len = 0;

	//TThostFtdcSettlementIDType int
	int pSettlementInfoConfirmField_SettlementID = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pSettlementInfoConfirmField_AccountID = NULL;
	Py_ssize_t pSettlementInfoConfirmField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSettlementInfoConfirmField_CurrencyID = NULL;
	Py_ssize_t pSettlementInfoConfirmField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#s#", (char **)kwlist
#endif

		, &pSettlementInfoConfirmField_BrokerID, &pSettlementInfoConfirmField_BrokerID_len
		, &pSettlementInfoConfirmField_InvestorID, &pSettlementInfoConfirmField_InvestorID_len
		, &pSettlementInfoConfirmField_ConfirmDate, &pSettlementInfoConfirmField_ConfirmDate_len
		, &pSettlementInfoConfirmField_ConfirmTime, &pSettlementInfoConfirmField_ConfirmTime_len
		, &pSettlementInfoConfirmField_SettlementID
		, &pSettlementInfoConfirmField_AccountID, &pSettlementInfoConfirmField_AccountID_len
		, &pSettlementInfoConfirmField_CurrencyID, &pSettlementInfoConfirmField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSettlementInfoConfirmField_BrokerID != NULL) {
		if(pSettlementInfoConfirmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSettlementInfoConfirmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSettlementInfoConfirmField_BrokerID, sizeof(self->data.BrokerID) );
		pSettlementInfoConfirmField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSettlementInfoConfirmField_InvestorID != NULL) {
		if(pSettlementInfoConfirmField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSettlementInfoConfirmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSettlementInfoConfirmField_InvestorID, sizeof(self->data.InvestorID) );
		pSettlementInfoConfirmField_InvestorID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pSettlementInfoConfirmField_ConfirmDate != NULL) {
		if(pSettlementInfoConfirmField_ConfirmDate_len > (Py_ssize_t)sizeof(self->data.ConfirmDate)) {
			PyErr_Format(PyExc_ValueError, "ConfirmDate too long: length=%zd (max allowed is %zd)", pSettlementInfoConfirmField_ConfirmDate_len, (Py_ssize_t)sizeof(self->data.ConfirmDate));
			return -1;
		}
		strncpy(self->data.ConfirmDate, pSettlementInfoConfirmField_ConfirmDate, sizeof(self->data.ConfirmDate) );
		pSettlementInfoConfirmField_ConfirmDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pSettlementInfoConfirmField_ConfirmTime != NULL) {
		if(pSettlementInfoConfirmField_ConfirmTime_len > (Py_ssize_t)sizeof(self->data.ConfirmTime)) {
			PyErr_Format(PyExc_ValueError, "ConfirmTime too long: length=%zd (max allowed is %zd)", pSettlementInfoConfirmField_ConfirmTime_len, (Py_ssize_t)sizeof(self->data.ConfirmTime));
			return -1;
		}
		strncpy(self->data.ConfirmTime, pSettlementInfoConfirmField_ConfirmTime, sizeof(self->data.ConfirmTime) );
		pSettlementInfoConfirmField_ConfirmTime = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pSettlementInfoConfirmField_SettlementID;

	//TThostFtdcAccountIDType char[13]
	if(pSettlementInfoConfirmField_AccountID != NULL) {
		if(pSettlementInfoConfirmField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pSettlementInfoConfirmField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pSettlementInfoConfirmField_AccountID, sizeof(self->data.AccountID) );
		pSettlementInfoConfirmField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSettlementInfoConfirmField_CurrencyID != NULL) {
		if(pSettlementInfoConfirmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pSettlementInfoConfirmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pSettlementInfoConfirmField_CurrencyID, sizeof(self->data.CurrencyID) );
		pSettlementInfoConfirmField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSettlementInfoConfirmField_dealloc(PyCThostFtdcSettlementInfoConfirmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_repr(PyCThostFtdcSettlementInfoConfirmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ConfirmDate", self->data.ConfirmDate 
		, "ConfirmTime", self->data.ConfirmTime 
		, "SettlementID", self->data.SettlementID
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSettlementInfoConfirmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_BrokerID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_InvestorID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_ConfirmDate(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.ConfirmDate);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_ConfirmTime(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.ConfirmTime);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_SettlementID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_AccountID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcSettlementInfoConfirmField_get_CurrencyID(PyCThostFtdcSettlementInfoConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcSettlementInfoConfirmField_set_BrokerID(PyCThostFtdcSettlementInfoConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSettlementInfoConfirmField_set_InvestorID(PyCThostFtdcSettlementInfoConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSettlementInfoConfirmField_set_ConfirmDate(PyCThostFtdcSettlementInfoConfirmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ConfirmDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ConfirmDate)) {
		PyErr_SetString(PyExc_ValueError, "ConfirmDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ConfirmDate, buf, sizeof(self->data.ConfirmDate));
	return 0;
}

static int PyCThostFtdcSettlementInfoConfirmField_set_ConfirmTime(PyCThostFtdcSettlementInfoConfirmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ConfirmTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ConfirmTime)) {
		PyErr_SetString(PyExc_ValueError, "ConfirmTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ConfirmTime, buf, sizeof(self->data.ConfirmTime));
	return 0;
}

static int PyCThostFtdcSettlementInfoConfirmField_set_SettlementID(PyCThostFtdcSettlementInfoConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSettlementInfoConfirmField_set_AccountID(PyCThostFtdcSettlementInfoConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSettlementInfoConfirmField_set_CurrencyID(PyCThostFtdcSettlementInfoConfirmField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSettlementInfoConfirmField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_BrokerID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_InvestorID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ConfirmDate", (getter)PyCThostFtdcSettlementInfoConfirmField_get_ConfirmDate, (setter)PyCThostFtdcSettlementInfoConfirmField_set_ConfirmDate, (char *)"ConfirmDate", NULL},
	 {(char *)"ConfirmTime", (getter)PyCThostFtdcSettlementInfoConfirmField_get_ConfirmTime, (setter)PyCThostFtdcSettlementInfoConfirmField_set_ConfirmTime, (char *)"ConfirmTime", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_SettlementID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_AccountID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcSettlementInfoConfirmField_get_CurrencyID, (setter)PyCThostFtdcSettlementInfoConfirmField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSettlementInfoConfirmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSettlementInfoConfirmField",	/* tp_name */
	sizeof(PyCThostFtdcSettlementInfoConfirmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSettlementInfoConfirmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSettlementInfoConfirmField_repr,   /* tp_repr */
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
	"CThostFtdcSettlementInfoConfirmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSettlementInfoConfirmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSettlementInfoConfirmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSettlementInfoConfirmField_new,       /* tp_new */
};

int PyCThostFtdcSettlementInfoConfirmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSettlementInfoConfirmField  */
	if (PyType_Ready(&PyCThostFtdcSettlementInfoConfirmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSettlementInfoConfirmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSettlementInfoConfirmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSettlementInfoConfirmField", (PyObject *)&PyCThostFtdcSettlementInfoConfirmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSettlementInfoConfirmField to module");
        Py_DECREF(&PyCThostFtdcSettlementInfoConfirmFieldType);
		return -1;
    }

    return 0;
}
