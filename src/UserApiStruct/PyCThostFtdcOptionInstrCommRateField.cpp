
#include "PyCThostFtdcOptionInstrCommRateField.h"



static PyObject *PyCThostFtdcOptionInstrCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrCommRateField *self = (PyCThostFtdcOptionInstrCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrCommRateField_init(PyCThostFtdcOptionInstrCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pOptionInstrCommRateField_reserve1 = NULL;
	Py_ssize_t pOptionInstrCommRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pOptionInstrCommRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pOptionInstrCommRateField_BrokerID = NULL;
	Py_ssize_t pOptionInstrCommRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOptionInstrCommRateField_InvestorID = NULL;
	Py_ssize_t pOptionInstrCommRateField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_OpenRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_OpenRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_CloseRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_CloseRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_CloseTodayRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_CloseTodayRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_StrikeRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pOptionInstrCommRateField_StrikeRatioByVolume = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pOptionInstrCommRateField_ExchangeID = NULL;
	Py_ssize_t pOptionInstrCommRateField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pOptionInstrCommRateField_InvestUnitID = NULL;
	Py_ssize_t pOptionInstrCommRateField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOptionInstrCommRateField_InstrumentID = NULL;
	Py_ssize_t pOptionInstrCommRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddddds#s#s#", (char **)kwlist
#endif

		, &pOptionInstrCommRateField_reserve1, &pOptionInstrCommRateField_reserve1_len
		, &pOptionInstrCommRateField_InvestorRange
		, &pOptionInstrCommRateField_BrokerID, &pOptionInstrCommRateField_BrokerID_len
		, &pOptionInstrCommRateField_InvestorID, &pOptionInstrCommRateField_InvestorID_len
		, &pOptionInstrCommRateField_OpenRatioByMoney
		, &pOptionInstrCommRateField_OpenRatioByVolume
		, &pOptionInstrCommRateField_CloseRatioByMoney
		, &pOptionInstrCommRateField_CloseRatioByVolume
		, &pOptionInstrCommRateField_CloseTodayRatioByMoney
		, &pOptionInstrCommRateField_CloseTodayRatioByVolume
		, &pOptionInstrCommRateField_StrikeRatioByMoney
		, &pOptionInstrCommRateField_StrikeRatioByVolume
		, &pOptionInstrCommRateField_ExchangeID, &pOptionInstrCommRateField_ExchangeID_len
		, &pOptionInstrCommRateField_InvestUnitID, &pOptionInstrCommRateField_InvestUnitID_len
		, &pOptionInstrCommRateField_InstrumentID, &pOptionInstrCommRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pOptionInstrCommRateField_reserve1 != NULL) {
		if(pOptionInstrCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pOptionInstrCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pOptionInstrCommRateField_reserve1, sizeof(self->data.reserve1) );
		pOptionInstrCommRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pOptionInstrCommRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pOptionInstrCommRateField_BrokerID != NULL) {
		if(pOptionInstrCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOptionInstrCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOptionInstrCommRateField_BrokerID, sizeof(self->data.BrokerID) );
		pOptionInstrCommRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOptionInstrCommRateField_InvestorID != NULL) {
		if(pOptionInstrCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOptionInstrCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOptionInstrCommRateField_InvestorID, sizeof(self->data.InvestorID) );
		pOptionInstrCommRateField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OpenRatioByMoney = pOptionInstrCommRateField_OpenRatioByMoney;
	//TThostFtdcRatioType double
	self->data.OpenRatioByVolume = pOptionInstrCommRateField_OpenRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseRatioByMoney = pOptionInstrCommRateField_CloseRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseRatioByVolume = pOptionInstrCommRateField_CloseRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByMoney = pOptionInstrCommRateField_CloseTodayRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByVolume = pOptionInstrCommRateField_CloseTodayRatioByVolume;
	//TThostFtdcRatioType double
	self->data.StrikeRatioByMoney = pOptionInstrCommRateField_StrikeRatioByMoney;
	//TThostFtdcRatioType double
	self->data.StrikeRatioByVolume = pOptionInstrCommRateField_StrikeRatioByVolume;
	//TThostFtdcExchangeIDType char[9]
	if(pOptionInstrCommRateField_ExchangeID != NULL) {
		if(pOptionInstrCommRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pOptionInstrCommRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pOptionInstrCommRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pOptionInstrCommRateField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pOptionInstrCommRateField_InvestUnitID != NULL) {
		if(pOptionInstrCommRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pOptionInstrCommRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pOptionInstrCommRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pOptionInstrCommRateField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOptionInstrCommRateField_InstrumentID != NULL) {
		if(pOptionInstrCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOptionInstrCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOptionInstrCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOptionInstrCommRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcOptionInstrCommRateField_dealloc(PyCThostFtdcOptionInstrCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_repr(PyCThostFtdcOptionInstrCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OpenRatioByMoney", self->data.OpenRatioByMoney
		, "OpenRatioByVolume", self->data.OpenRatioByVolume
		, "CloseRatioByMoney", self->data.CloseRatioByMoney
		, "CloseRatioByVolume", self->data.CloseRatioByVolume
		, "CloseTodayRatioByMoney", self->data.CloseTodayRatioByMoney
		, "CloseTodayRatioByVolume", self->data.CloseTodayRatioByVolume
		, "StrikeRatioByMoney", self->data.StrikeRatioByMoney
		, "StrikeRatioByVolume", self->data.StrikeRatioByVolume
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_reserve1(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_InvestorRange(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_BrokerID(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_InvestorID(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_OpenRatioByMoney(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_OpenRatioByVolume(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_CloseRatioByMoney(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_CloseRatioByVolume(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_CloseTodayRatioByMoney(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_CloseTodayRatioByVolume(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_StrikeRatioByMoney(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeRatioByMoney);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_StrikeRatioByVolume(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeRatioByVolume);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_ExchangeID(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_InvestUnitID(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcOptionInstrCommRateField_get_InstrumentID(PyCThostFtdcOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcOptionInstrCommRateField_set_reserve1(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrCommRateField_set_InvestorRange(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrCommRateField_set_BrokerID(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrCommRateField_set_InvestorID(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrCommRateField_set_OpenRatioByMoney(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_OpenRatioByVolume(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_CloseRatioByMoney(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_CloseRatioByVolume(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_CloseTodayRatioByMoney(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_CloseTodayRatioByVolume(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_StrikeRatioByMoney(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_StrikeRatioByVolume(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcOptionInstrCommRateField_set_ExchangeID(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrCommRateField_set_InvestUnitID(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOptionInstrCommRateField_set_InstrumentID(PyCThostFtdcOptionInstrCommRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOptionInstrCommRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrCommRateField_get_reserve1, (setter)PyCThostFtdcOptionInstrCommRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcOptionInstrCommRateField_get_InvestorRange, (setter)PyCThostFtdcOptionInstrCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrCommRateField_get_BrokerID, (setter)PyCThostFtdcOptionInstrCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrCommRateField_get_InvestorID, (setter)PyCThostFtdcOptionInstrCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcOptionInstrCommRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcOptionInstrCommRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
	 {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcOptionInstrCommRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcOptionInstrCommRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
	 {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcOptionInstrCommRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcOptionInstrCommRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
	 {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcOptionInstrCommRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcOptionInstrCommRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
	 {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcOptionInstrCommRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcOptionInstrCommRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
	 {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcOptionInstrCommRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcOptionInstrCommRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
	 {(char *)"StrikeRatioByMoney", (getter)PyCThostFtdcOptionInstrCommRateField_get_StrikeRatioByMoney, (setter)PyCThostFtdcOptionInstrCommRateField_set_StrikeRatioByMoney, (char *)"StrikeRatioByMoney", NULL},
	 {(char *)"StrikeRatioByVolume", (getter)PyCThostFtdcOptionInstrCommRateField_get_StrikeRatioByVolume, (setter)PyCThostFtdcOptionInstrCommRateField_set_StrikeRatioByVolume, (char *)"StrikeRatioByVolume", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcOptionInstrCommRateField_get_ExchangeID, (setter)PyCThostFtdcOptionInstrCommRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcOptionInstrCommRateField_get_InvestUnitID, (setter)PyCThostFtdcOptionInstrCommRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrCommRateField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrCommRateField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrCommRateField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrCommRateField", (PyObject *)&PyCThostFtdcOptionInstrCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrCommRateField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrCommRateFieldType);
		return -1;
    }

    return 0;
}
