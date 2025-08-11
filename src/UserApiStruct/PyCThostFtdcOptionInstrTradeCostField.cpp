
#include "PyCThostFtdcOptionInstrTradeCostField.h"



static PyObject *PyCThostFtdcOptionInstrTradeCostField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrTradeCostField *self = (PyCThostFtdcOptionInstrTradeCostField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrTradeCostField_init(PyCThostFtdcOptionInstrTradeCostField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "HedgeFlag", "FixedMargin", "MiniMargin", "Royalty", "ExchFixedMargin", "ExchMiniMargin", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pOptionInstrTradeCostField_BrokerID = NULL;
	Py_ssize_t pOptionInstrTradeCostField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOptionInstrTradeCostField_InvestorID = NULL;
	Py_ssize_t pOptionInstrTradeCostField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pOptionInstrTradeCostField_reserve1 = NULL;
	Py_ssize_t pOptionInstrTradeCostField_reserve1_len = 0;

	//TThostFtdcHedgeFlagType char
	char pOptionInstrTradeCostField_HedgeFlag = 0;

	//TThostFtdcMoneyType double
	double pOptionInstrTradeCostField_FixedMargin = 0.0;

	//TThostFtdcMoneyType double
	double pOptionInstrTradeCostField_MiniMargin = 0.0;

	//TThostFtdcMoneyType double
	double pOptionInstrTradeCostField_Royalty = 0.0;

	//TThostFtdcMoneyType double
	double pOptionInstrTradeCostField_ExchFixedMargin = 0.0;

	//TThostFtdcMoneyType double
	double pOptionInstrTradeCostField_ExchMiniMargin = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pOptionInstrTradeCostField_ExchangeID = NULL;
	Py_ssize_t pOptionInstrTradeCostField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pOptionInstrTradeCostField_InvestUnitID = NULL;
	Py_ssize_t pOptionInstrTradeCostField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOptionInstrTradeCostField_InstrumentID = NULL;
	Py_ssize_t pOptionInstrTradeCostField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cdddddy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cddddds#s#s#", (char **)kwlist
#endif

		, &pOptionInstrTradeCostField_BrokerID, &pOptionInstrTradeCostField_BrokerID_len
		, &pOptionInstrTradeCostField_InvestorID, &pOptionInstrTradeCostField_InvestorID_len
		, &pOptionInstrTradeCostField_reserve1, &pOptionInstrTradeCostField_reserve1_len
		, &pOptionInstrTradeCostField_HedgeFlag
		, &pOptionInstrTradeCostField_FixedMargin
		, &pOptionInstrTradeCostField_MiniMargin
		, &pOptionInstrTradeCostField_Royalty
		, &pOptionInstrTradeCostField_ExchFixedMargin
		, &pOptionInstrTradeCostField_ExchMiniMargin
		, &pOptionInstrTradeCostField_ExchangeID, &pOptionInstrTradeCostField_ExchangeID_len
		, &pOptionInstrTradeCostField_InvestUnitID, &pOptionInstrTradeCostField_InvestUnitID_len
		, &pOptionInstrTradeCostField_InstrumentID, &pOptionInstrTradeCostField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pOptionInstrTradeCostField_BrokerID != NULL) {
		if(pOptionInstrTradeCostField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOptionInstrTradeCostField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOptionInstrTradeCostField_BrokerID, sizeof(self->data.BrokerID) );
		pOptionInstrTradeCostField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOptionInstrTradeCostField_InvestorID != NULL) {
		if(pOptionInstrTradeCostField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOptionInstrTradeCostField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOptionInstrTradeCostField_InvestorID, sizeof(self->data.InvestorID) );
		pOptionInstrTradeCostField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pOptionInstrTradeCostField_reserve1 != NULL) {
		if(pOptionInstrTradeCostField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pOptionInstrTradeCostField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pOptionInstrTradeCostField_reserve1, sizeof(self->data.reserve1) );
		pOptionInstrTradeCostField_reserve1 = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pOptionInstrTradeCostField_HedgeFlag;

	//TThostFtdcMoneyType double
	self->data.FixedMargin = pOptionInstrTradeCostField_FixedMargin;
	//TThostFtdcMoneyType double
	self->data.MiniMargin = pOptionInstrTradeCostField_MiniMargin;
	//TThostFtdcMoneyType double
	self->data.Royalty = pOptionInstrTradeCostField_Royalty;
	//TThostFtdcMoneyType double
	self->data.ExchFixedMargin = pOptionInstrTradeCostField_ExchFixedMargin;
	//TThostFtdcMoneyType double
	self->data.ExchMiniMargin = pOptionInstrTradeCostField_ExchMiniMargin;
	//TThostFtdcExchangeIDType char[9]
	if(pOptionInstrTradeCostField_ExchangeID != NULL) {
		if(pOptionInstrTradeCostField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pOptionInstrTradeCostField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pOptionInstrTradeCostField_ExchangeID, sizeof(self->data.ExchangeID) );
		pOptionInstrTradeCostField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pOptionInstrTradeCostField_InvestUnitID != NULL) {
		if(pOptionInstrTradeCostField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pOptionInstrTradeCostField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pOptionInstrTradeCostField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pOptionInstrTradeCostField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOptionInstrTradeCostField_InstrumentID != NULL) {
		if(pOptionInstrTradeCostField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOptionInstrTradeCostField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOptionInstrTradeCostField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOptionInstrTradeCostField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcOptionInstrTradeCostField_dealloc(PyCThostFtdcOptionInstrTradeCostField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_repr(PyCThostFtdcOptionInstrTradeCostField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:d,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:d,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "HedgeFlag", self->data.HedgeFlag
		, "FixedMargin", self->data.FixedMargin
		, "MiniMargin", self->data.MiniMargin
		, "Royalty", self->data.Royalty
		, "ExchFixedMargin", self->data.ExchFixedMargin
		, "ExchMiniMargin", self->data.ExchMiniMargin
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrTradeCostField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_BrokerID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_InvestorID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_reserve1(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_HedgeFlag(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_FixedMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FixedMargin);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_MiniMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MiniMargin);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_Royalty(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Royalty);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_ExchFixedMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchFixedMargin);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_ExchMiniMargin(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMiniMargin);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_ExchangeID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_InvestUnitID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcOptionInstrTradeCostField_get_InstrumentID(PyCThostFtdcOptionInstrTradeCostField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcOptionInstrTradeCostField_set_BrokerID(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrTradeCostField_set_InvestorID(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrTradeCostField_set_reserve1(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrTradeCostField_set_HedgeFlag(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrTradeCostField_set_FixedMargin(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FixedMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FixedMargin = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrTradeCostField_set_MiniMargin(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MiniMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MiniMargin = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrTradeCostField_set_Royalty(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Royalty Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Royalty = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrTradeCostField_set_ExchFixedMargin(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchFixedMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchFixedMargin = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrTradeCostField_set_ExchMiniMargin(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMiniMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMiniMargin = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrTradeCostField_set_ExchangeID(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrTradeCostField_set_InvestUnitID(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrTradeCostField_set_InstrumentID(PyCThostFtdcOptionInstrTradeCostField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOptionInstrTradeCostField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_BrokerID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_InvestorID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrTradeCostField_get_reserve1, (setter)PyCThostFtdcOptionInstrTradeCostField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcOptionInstrTradeCostField_get_HedgeFlag, (setter)PyCThostFtdcOptionInstrTradeCostField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"FixedMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_FixedMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_FixedMargin, (char *)"FixedMargin", NULL},
	 {(char *)"MiniMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_MiniMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_MiniMargin, (char *)"MiniMargin", NULL},
	 {(char *)"Royalty", (getter)PyCThostFtdcOptionInstrTradeCostField_get_Royalty, (setter)PyCThostFtdcOptionInstrTradeCostField_set_Royalty, (char *)"Royalty", NULL},
	 {(char *)"ExchFixedMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_ExchFixedMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_ExchFixedMargin, (char *)"ExchFixedMargin", NULL},
	 {(char *)"ExchMiniMargin", (getter)PyCThostFtdcOptionInstrTradeCostField_get_ExchMiniMargin, (setter)PyCThostFtdcOptionInstrTradeCostField_set_ExchMiniMargin, (char *)"ExchMiniMargin", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_ExchangeID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_InvestUnitID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrTradeCostField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrTradeCostField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrTradeCostFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrTradeCostField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrTradeCostField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrTradeCostField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrTradeCostField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrTradeCostField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrTradeCostField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrTradeCostField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrTradeCostField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrTradeCostFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrTradeCostField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrTradeCostFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrTradeCostField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrTradeCostFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrTradeCostField", (PyObject *)&PyCThostFtdcOptionInstrTradeCostFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrTradeCostField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrTradeCostFieldType);
		return -1;
    }

    return 0;
}
