
#include "PyCThostFtdcInstrumentOrderCommRateField.h"



static PyObject *PyCThostFtdcInstrumentOrderCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentOrderCommRateField *self = (PyCThostFtdcInstrumentOrderCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentOrderCommRateField_init(PyCThostFtdcInstrumentOrderCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "OrderCommByVolume", "OrderActionCommByVolume", "ExchangeID", "InvestUnitID", "InstrumentID", "OrderCommByTrade", "OrderActionCommByTrade",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentOrderCommRateField_reserve1 = NULL;
	Py_ssize_t pInstrumentOrderCommRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pInstrumentOrderCommRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInstrumentOrderCommRateField_BrokerID = NULL;
	Py_ssize_t pInstrumentOrderCommRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInstrumentOrderCommRateField_InvestorID = NULL;
	Py_ssize_t pInstrumentOrderCommRateField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInstrumentOrderCommRateField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pInstrumentOrderCommRateField_OrderCommByVolume = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentOrderCommRateField_OrderActionCommByVolume = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInstrumentOrderCommRateField_ExchangeID = NULL;
	Py_ssize_t pInstrumentOrderCommRateField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInstrumentOrderCommRateField_InvestUnitID = NULL;
	Py_ssize_t pInstrumentOrderCommRateField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentOrderCommRateField_InstrumentID = NULL;
	Py_ssize_t pInstrumentOrderCommRateField_InstrumentID_len = 0;

	//TThostFtdcRatioType double
	double pInstrumentOrderCommRateField_OrderCommByTrade = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentOrderCommRateField_OrderActionCommByTrade = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddy#y#y#dd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cdds#s#s#dd", (char **)kwlist
#endif

		, &pInstrumentOrderCommRateField_reserve1, &pInstrumentOrderCommRateField_reserve1_len
		, &pInstrumentOrderCommRateField_InvestorRange
		, &pInstrumentOrderCommRateField_BrokerID, &pInstrumentOrderCommRateField_BrokerID_len
		, &pInstrumentOrderCommRateField_InvestorID, &pInstrumentOrderCommRateField_InvestorID_len
		, &pInstrumentOrderCommRateField_HedgeFlag
		, &pInstrumentOrderCommRateField_OrderCommByVolume
		, &pInstrumentOrderCommRateField_OrderActionCommByVolume
		, &pInstrumentOrderCommRateField_ExchangeID, &pInstrumentOrderCommRateField_ExchangeID_len
		, &pInstrumentOrderCommRateField_InvestUnitID, &pInstrumentOrderCommRateField_InvestUnitID_len
		, &pInstrumentOrderCommRateField_InstrumentID, &pInstrumentOrderCommRateField_InstrumentID_len
		, &pInstrumentOrderCommRateField_OrderCommByTrade
		, &pInstrumentOrderCommRateField_OrderActionCommByTrade


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentOrderCommRateField_reserve1 != NULL) {
		if(pInstrumentOrderCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentOrderCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentOrderCommRateField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentOrderCommRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInstrumentOrderCommRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pInstrumentOrderCommRateField_BrokerID != NULL) {
		if(pInstrumentOrderCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInstrumentOrderCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInstrumentOrderCommRateField_BrokerID, sizeof(self->data.BrokerID) );
		pInstrumentOrderCommRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInstrumentOrderCommRateField_InvestorID != NULL) {
		if(pInstrumentOrderCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInstrumentOrderCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInstrumentOrderCommRateField_InvestorID, sizeof(self->data.InvestorID) );
		pInstrumentOrderCommRateField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInstrumentOrderCommRateField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.OrderCommByVolume = pInstrumentOrderCommRateField_OrderCommByVolume;
	//TThostFtdcRatioType double
	self->data.OrderActionCommByVolume = pInstrumentOrderCommRateField_OrderActionCommByVolume;
	//TThostFtdcExchangeIDType char[9]
	if(pInstrumentOrderCommRateField_ExchangeID != NULL) {
		if(pInstrumentOrderCommRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInstrumentOrderCommRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInstrumentOrderCommRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInstrumentOrderCommRateField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInstrumentOrderCommRateField_InvestUnitID != NULL) {
		if(pInstrumentOrderCommRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInstrumentOrderCommRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInstrumentOrderCommRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInstrumentOrderCommRateField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentOrderCommRateField_InstrumentID != NULL) {
		if(pInstrumentOrderCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentOrderCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentOrderCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentOrderCommRateField_InstrumentID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OrderCommByTrade = pInstrumentOrderCommRateField_OrderCommByTrade;
	//TThostFtdcRatioType double
	self->data.OrderActionCommByTrade = pInstrumentOrderCommRateField_OrderActionCommByTrade;


    return 0;
}

static void PyCThostFtdcInstrumentOrderCommRateField_dealloc(PyCThostFtdcInstrumentOrderCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_repr(PyCThostFtdcInstrumentOrderCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:y,s:y,s:y,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:s,s:s,s:s,s:d,s:d}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "HedgeFlag", self->data.HedgeFlag
		, "OrderCommByVolume", self->data.OrderCommByVolume
		, "OrderActionCommByVolume", self->data.OrderActionCommByVolume
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 
		, "OrderCommByTrade", self->data.OrderCommByTrade
		, "OrderActionCommByTrade", self->data.OrderActionCommByTrade


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentOrderCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_reserve1(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InvestorRange(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_BrokerID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InvestorID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_HedgeFlag(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByVolume(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OrderCommByVolume);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByVolume(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OrderActionCommByVolume);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_ExchangeID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InvestUnitID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_InstrumentID(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByTrade(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OrderCommByTrade);
}

static PyObject *PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByTrade(PyCThostFtdcInstrumentOrderCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OrderActionCommByTrade);
}

static int PyCThostFtdcInstrumentOrderCommRateField_set_reserve1(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_InvestorRange(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_BrokerID(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_InvestorID(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_HedgeFlag(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByVolume(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCommByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderCommByVolume = buf;
    return 0;
}

static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByVolume(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionCommByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderActionCommByVolume = buf;
    return 0;
}

static int PyCThostFtdcInstrumentOrderCommRateField_set_ExchangeID(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_InvestUnitID(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_InstrumentID(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByTrade(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCommByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderCommByTrade = buf;
    return 0;
}

static int PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByTrade(PyCThostFtdcInstrumentOrderCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionCommByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OrderActionCommByTrade = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcInstrumentOrderCommRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_reserve1, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InvestorRange, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_BrokerID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InvestorID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"OrderCommByVolume", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByVolume, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByVolume, (char *)"OrderCommByVolume", NULL},
	 {(char *)"OrderActionCommByVolume", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByVolume, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByVolume, (char *)"OrderActionCommByVolume", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_ExchangeID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InvestUnitID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_InstrumentID, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"OrderCommByTrade", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderCommByTrade, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderCommByTrade, (char *)"OrderCommByTrade", NULL},
	 {(char *)"OrderActionCommByTrade", (getter)PyCThostFtdcInstrumentOrderCommRateField_get_OrderActionCommByTrade, (setter)PyCThostFtdcInstrumentOrderCommRateField_set_OrderActionCommByTrade, (char *)"OrderActionCommByTrade", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentOrderCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentOrderCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentOrderCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentOrderCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentOrderCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentOrderCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentOrderCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentOrderCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentOrderCommRateField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentOrderCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentOrderCommRateField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentOrderCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentOrderCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentOrderCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentOrderCommRateField", (PyObject *)&PyCThostFtdcInstrumentOrderCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentOrderCommRateField to module");
        Py_DECREF(&PyCThostFtdcInstrumentOrderCommRateFieldType);
		return -1;
    }

    return 0;
}
