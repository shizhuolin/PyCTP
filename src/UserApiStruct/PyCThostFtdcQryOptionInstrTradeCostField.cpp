
#include "PyCThostFtdcQryOptionInstrTradeCostField.h"



static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOptionInstrTradeCostField *self = (PyCThostFtdcQryOptionInstrTradeCostField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_init(PyCThostFtdcQryOptionInstrTradeCostField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "HedgeFlag", "InputPrice", "UnderlyingPrice", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryOptionInstrTradeCostField_BrokerID = NULL;
	Py_ssize_t pQryOptionInstrTradeCostField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryOptionInstrTradeCostField_InvestorID = NULL;
	Py_ssize_t pQryOptionInstrTradeCostField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryOptionInstrTradeCostField_reserve1 = NULL;
	Py_ssize_t pQryOptionInstrTradeCostField_reserve1_len = 0;

	//TThostFtdcHedgeFlagType char
	char pQryOptionInstrTradeCostField_HedgeFlag = 0;

	//TThostFtdcPriceType double
	double pQryOptionInstrTradeCostField_InputPrice = 0.0;

	//TThostFtdcPriceType double
	double pQryOptionInstrTradeCostField_UnderlyingPrice = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryOptionInstrTradeCostField_ExchangeID = NULL;
	Py_ssize_t pQryOptionInstrTradeCostField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryOptionInstrTradeCostField_InvestUnitID = NULL;
	Py_ssize_t pQryOptionInstrTradeCostField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryOptionInstrTradeCostField_InstrumentID = NULL;
	Py_ssize_t pQryOptionInstrTradeCostField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cddy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cdds#s#s#", (char **)kwlist
#endif

		, &pQryOptionInstrTradeCostField_BrokerID, &pQryOptionInstrTradeCostField_BrokerID_len
		, &pQryOptionInstrTradeCostField_InvestorID, &pQryOptionInstrTradeCostField_InvestorID_len
		, &pQryOptionInstrTradeCostField_reserve1, &pQryOptionInstrTradeCostField_reserve1_len
		, &pQryOptionInstrTradeCostField_HedgeFlag
		, &pQryOptionInstrTradeCostField_InputPrice
		, &pQryOptionInstrTradeCostField_UnderlyingPrice
		, &pQryOptionInstrTradeCostField_ExchangeID, &pQryOptionInstrTradeCostField_ExchangeID_len
		, &pQryOptionInstrTradeCostField_InvestUnitID, &pQryOptionInstrTradeCostField_InvestUnitID_len
		, &pQryOptionInstrTradeCostField_InstrumentID, &pQryOptionInstrTradeCostField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryOptionInstrTradeCostField_BrokerID != NULL) {
		if(pQryOptionInstrTradeCostField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryOptionInstrTradeCostField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryOptionInstrTradeCostField_BrokerID, sizeof(self->data.BrokerID) );
		pQryOptionInstrTradeCostField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryOptionInstrTradeCostField_InvestorID != NULL) {
		if(pQryOptionInstrTradeCostField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryOptionInstrTradeCostField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryOptionInstrTradeCostField_InvestorID, sizeof(self->data.InvestorID) );
		pQryOptionInstrTradeCostField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryOptionInstrTradeCostField_reserve1 != NULL) {
		if(pQryOptionInstrTradeCostField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryOptionInstrTradeCostField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryOptionInstrTradeCostField_reserve1, sizeof(self->data.reserve1) );
		pQryOptionInstrTradeCostField_reserve1 = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pQryOptionInstrTradeCostField_HedgeFlag;

	//TThostFtdcPriceType double
	self->data.InputPrice = pQryOptionInstrTradeCostField_InputPrice;
	//TThostFtdcPriceType double
	self->data.UnderlyingPrice = pQryOptionInstrTradeCostField_UnderlyingPrice;
	//TThostFtdcExchangeIDType char[9]
	if(pQryOptionInstrTradeCostField_ExchangeID != NULL) {
		if(pQryOptionInstrTradeCostField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryOptionInstrTradeCostField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryOptionInstrTradeCostField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryOptionInstrTradeCostField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryOptionInstrTradeCostField_InvestUnitID != NULL) {
		if(pQryOptionInstrTradeCostField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryOptionInstrTradeCostField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryOptionInstrTradeCostField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryOptionInstrTradeCostField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryOptionInstrTradeCostField_InstrumentID != NULL) {
		if(pQryOptionInstrTradeCostField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryOptionInstrTradeCostField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryOptionInstrTradeCostField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryOptionInstrTradeCostField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryOptionInstrTradeCostField_dealloc(PyCThostFtdcQryOptionInstrTradeCostField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_repr(PyCThostFtdcQryOptionInstrTradeCostField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:d,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:d,s:d,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "HedgeFlag", self->data.HedgeFlag
		, "InputPrice", self->data.InputPrice
		, "UnderlyingPrice", self->data.UnderlyingPrice
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrTradeCostField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_BrokerID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InvestorID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_reserve1(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_HedgeFlag(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InputPrice(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InputPrice);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_UnderlyingPrice(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UnderlyingPrice);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_ExchangeID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InvestUnitID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryOptionInstrTradeCostField_get_InstrumentID(PyCThostFtdcQryOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryOptionInstrTradeCostField_set_BrokerID(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionInstrTradeCostField_set_InvestorID(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryOptionInstrTradeCostField_set_reserve1(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_set_HedgeFlag(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "HedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.HedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_set_InputPrice(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InputPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InputPrice = buf;
    return 0;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_set_UnderlyingPrice(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UnderlyingPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UnderlyingPrice = buf;
    return 0;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_set_ExchangeID(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_set_InvestUnitID(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}

static int PyCThostFtdcQryOptionInstrTradeCostField_set_InstrumentID(PyCThostFtdcQryOptionInstrTradeCostField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryOptionInstrTradeCostField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_BrokerID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InvestorID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_reserve1, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_HedgeFlag, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"InputPrice", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InputPrice, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InputPrice, (char *)"InputPrice", NULL},
	 {(char *)"UnderlyingPrice", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_UnderlyingPrice, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_UnderlyingPrice, (char *)"UnderlyingPrice", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_ExchangeID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InvestUnitID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryOptionInstrTradeCostField_get_InstrumentID, (setter)PyCThostFtdcQryOptionInstrTradeCostField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOptionInstrTradeCostFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOptionInstrTradeCostField",	/* tp_name */
	sizeof(PyCThostFtdcQryOptionInstrTradeCostField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOptionInstrTradeCostField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOptionInstrTradeCostField_repr,   /* tp_repr */
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
	"CThostFtdcQryOptionInstrTradeCostField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOptionInstrTradeCostField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOptionInstrTradeCostField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOptionInstrTradeCostField_new,       /* tp_new */
};

int PyCThostFtdcQryOptionInstrTradeCostFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOptionInstrTradeCostField  */
	if (PyType_Ready(&PyCThostFtdcQryOptionInstrTradeCostFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOptionInstrTradeCostField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOptionInstrTradeCostFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOptionInstrTradeCostField", (PyObject *)&PyCThostFtdcQryOptionInstrTradeCostFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionInstrTradeCostField to module");
        Py_DECREF(&PyCThostFtdcQryOptionInstrTradeCostFieldType);
		return -1;
    }

    return 0;
}
