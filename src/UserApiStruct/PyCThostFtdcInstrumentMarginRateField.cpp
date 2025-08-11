
#include "PyCThostFtdcInstrumentMarginRateField.h"



static PyObject *PyCThostFtdcInstrumentMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentMarginRateField *self = (PyCThostFtdcInstrumentMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentMarginRateField_init(PyCThostFtdcInstrumentMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentMarginRateField_reserve1 = NULL;
	Py_ssize_t pInstrumentMarginRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pInstrumentMarginRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInstrumentMarginRateField_BrokerID = NULL;
	Py_ssize_t pInstrumentMarginRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInstrumentMarginRateField_InvestorID = NULL;
	Py_ssize_t pInstrumentMarginRateField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInstrumentMarginRateField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pInstrumentMarginRateField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pInstrumentMarginRateField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentMarginRateField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pInstrumentMarginRateField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcBoolType int
	int pInstrumentMarginRateField_IsRelative = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInstrumentMarginRateField_ExchangeID = NULL;
	Py_ssize_t pInstrumentMarginRateField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInstrumentMarginRateField_InvestUnitID = NULL;
	Py_ssize_t pInstrumentMarginRateField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentMarginRateField_InstrumentID = NULL;
	Py_ssize_t pInstrumentMarginRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddis#s#s#", (char **)kwlist
#endif

		, &pInstrumentMarginRateField_reserve1, &pInstrumentMarginRateField_reserve1_len
		, &pInstrumentMarginRateField_InvestorRange
		, &pInstrumentMarginRateField_BrokerID, &pInstrumentMarginRateField_BrokerID_len
		, &pInstrumentMarginRateField_InvestorID, &pInstrumentMarginRateField_InvestorID_len
		, &pInstrumentMarginRateField_HedgeFlag
		, &pInstrumentMarginRateField_LongMarginRatioByMoney
		, &pInstrumentMarginRateField_LongMarginRatioByVolume
		, &pInstrumentMarginRateField_ShortMarginRatioByMoney
		, &pInstrumentMarginRateField_ShortMarginRatioByVolume
		, &pInstrumentMarginRateField_IsRelative
		, &pInstrumentMarginRateField_ExchangeID, &pInstrumentMarginRateField_ExchangeID_len
		, &pInstrumentMarginRateField_InvestUnitID, &pInstrumentMarginRateField_InvestUnitID_len
		, &pInstrumentMarginRateField_InstrumentID, &pInstrumentMarginRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentMarginRateField_reserve1 != NULL) {
		if(pInstrumentMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentMarginRateField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentMarginRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInstrumentMarginRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pInstrumentMarginRateField_BrokerID != NULL) {
		if(pInstrumentMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInstrumentMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
		pInstrumentMarginRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInstrumentMarginRateField_InvestorID != NULL) {
		if(pInstrumentMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInstrumentMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
		pInstrumentMarginRateField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInstrumentMarginRateField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pInstrumentMarginRateField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pInstrumentMarginRateField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pInstrumentMarginRateField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pInstrumentMarginRateField_ShortMarginRatioByVolume;
	//TThostFtdcBoolType int
	self->data.IsRelative = pInstrumentMarginRateField_IsRelative;

	//TThostFtdcExchangeIDType char[9]
	if(pInstrumentMarginRateField_ExchangeID != NULL) {
		if(pInstrumentMarginRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInstrumentMarginRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInstrumentMarginRateField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInstrumentMarginRateField_InvestUnitID != NULL) {
		if(pInstrumentMarginRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInstrumentMarginRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInstrumentMarginRateField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentMarginRateField_InstrumentID != NULL) {
		if(pInstrumentMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentMarginRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInstrumentMarginRateField_dealloc(PyCThostFtdcInstrumentMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_repr(PyCThostFtdcInstrumentMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:i,s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "HedgeFlag", self->data.HedgeFlag
		, "LongMarginRatioByMoney", self->data.LongMarginRatioByMoney
		, "LongMarginRatioByVolume", self->data.LongMarginRatioByVolume
		, "ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney
		, "ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume
		, "IsRelative", self->data.IsRelative
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_reserve1(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InvestorRange(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_BrokerID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InvestorID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_HedgeFlag(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_IsRelative(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsRelative);
#else 
	return PyInt_FromLong(self->data.IsRelative);
#endif 
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_ExchangeID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InvestUnitID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateField_get_InstrumentID(PyCThostFtdcInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcInstrumentMarginRateField_set_reserve1(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateField_set_InvestorRange(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateField_set_BrokerID(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateField_set_InvestorID(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateField_set_HedgeFlag(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcInstrumentMarginRateField_set_IsRelative(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected int"); 
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
    self->data.IsRelative = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInstrumentMarginRateField_set_ExchangeID(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateField_set_InvestUnitID(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateField_set_InstrumentID(PyCThostFtdcInstrumentMarginRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInstrumentMarginRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentMarginRateField_get_reserve1, (setter)PyCThostFtdcInstrumentMarginRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentMarginRateField_get_InvestorRange, (setter)PyCThostFtdcInstrumentMarginRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentMarginRateField_get_BrokerID, (setter)PyCThostFtdcInstrumentMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentMarginRateField_get_InvestorID, (setter)PyCThostFtdcInstrumentMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"IsRelative", (getter)PyCThostFtdcInstrumentMarginRateField_get_IsRelative, (setter)PyCThostFtdcInstrumentMarginRateField_set_IsRelative, (char *)"IsRelative", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentMarginRateField_get_ExchangeID, (setter)PyCThostFtdcInstrumentMarginRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInstrumentMarginRateField_get_InvestUnitID, (setter)PyCThostFtdcInstrumentMarginRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentMarginRateField_get_InstrumentID, (setter)PyCThostFtdcInstrumentMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateField", (PyObject *)&PyCThostFtdcInstrumentMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateField to module");
        Py_DECREF(&PyCThostFtdcInstrumentMarginRateFieldType);
		return -1;
    }

    return 0;
}
