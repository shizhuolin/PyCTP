
#include "PyCThostFtdcInstrumentCommissionRateField.h"



static PyObject *PyCThostFtdcInstrumentCommissionRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentCommissionRateField *self = (PyCThostFtdcInstrumentCommissionRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentCommissionRateField_init(PyCThostFtdcInstrumentCommissionRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "ExchangeID", "BizType", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentCommissionRateField_reserve1 = NULL;
	Py_ssize_t pInstrumentCommissionRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pInstrumentCommissionRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInstrumentCommissionRateField_BrokerID = NULL;
	Py_ssize_t pInstrumentCommissionRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInstrumentCommissionRateField_InvestorID = NULL;
	Py_ssize_t pInstrumentCommissionRateField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pInstrumentCommissionRateField_OpenRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentCommissionRateField_OpenRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentCommissionRateField_CloseRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentCommissionRateField_CloseRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInstrumentCommissionRateField_ExchangeID = NULL;
	Py_ssize_t pInstrumentCommissionRateField_ExchangeID_len = 0;

	//TThostFtdcBizTypeType char
	char pInstrumentCommissionRateField_BizType = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInstrumentCommissionRateField_InvestUnitID = NULL;
	Py_ssize_t pInstrumentCommissionRateField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentCommissionRateField_InstrumentID = NULL;
	Py_ssize_t pInstrumentCommissionRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddds#cs#s#", (char **)kwlist
#endif

		, &pInstrumentCommissionRateField_reserve1, &pInstrumentCommissionRateField_reserve1_len
		, &pInstrumentCommissionRateField_InvestorRange
		, &pInstrumentCommissionRateField_BrokerID, &pInstrumentCommissionRateField_BrokerID_len
		, &pInstrumentCommissionRateField_InvestorID, &pInstrumentCommissionRateField_InvestorID_len
		, &pInstrumentCommissionRateField_OpenRatioByMoney
		, &pInstrumentCommissionRateField_OpenRatioByVolume
		, &pInstrumentCommissionRateField_CloseRatioByMoney
		, &pInstrumentCommissionRateField_CloseRatioByVolume
		, &pInstrumentCommissionRateField_CloseTodayRatioByMoney
		, &pInstrumentCommissionRateField_CloseTodayRatioByVolume
		, &pInstrumentCommissionRateField_ExchangeID, &pInstrumentCommissionRateField_ExchangeID_len
		, &pInstrumentCommissionRateField_BizType
		, &pInstrumentCommissionRateField_InvestUnitID, &pInstrumentCommissionRateField_InvestUnitID_len
		, &pInstrumentCommissionRateField_InstrumentID, &pInstrumentCommissionRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentCommissionRateField_reserve1 != NULL) {
		if(pInstrumentCommissionRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentCommissionRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentCommissionRateField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentCommissionRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInstrumentCommissionRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pInstrumentCommissionRateField_BrokerID != NULL) {
		if(pInstrumentCommissionRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInstrumentCommissionRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInstrumentCommissionRateField_BrokerID, sizeof(self->data.BrokerID) );
		pInstrumentCommissionRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInstrumentCommissionRateField_InvestorID != NULL) {
		if(pInstrumentCommissionRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInstrumentCommissionRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInstrumentCommissionRateField_InvestorID, sizeof(self->data.InvestorID) );
		pInstrumentCommissionRateField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OpenRatioByMoney = pInstrumentCommissionRateField_OpenRatioByMoney;
	//TThostFtdcRatioType double
	self->data.OpenRatioByVolume = pInstrumentCommissionRateField_OpenRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseRatioByMoney = pInstrumentCommissionRateField_CloseRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseRatioByVolume = pInstrumentCommissionRateField_CloseRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByMoney = pInstrumentCommissionRateField_CloseTodayRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByVolume = pInstrumentCommissionRateField_CloseTodayRatioByVolume;
	//TThostFtdcExchangeIDType char[9]
	if(pInstrumentCommissionRateField_ExchangeID != NULL) {
		if(pInstrumentCommissionRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInstrumentCommissionRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInstrumentCommissionRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInstrumentCommissionRateField_ExchangeID = NULL;
	}

	//TThostFtdcBizTypeType char
	self->data.BizType = pInstrumentCommissionRateField_BizType;

	//TThostFtdcInvestUnitIDType char[17]
	if(pInstrumentCommissionRateField_InvestUnitID != NULL) {
		if(pInstrumentCommissionRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInstrumentCommissionRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInstrumentCommissionRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInstrumentCommissionRateField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentCommissionRateField_InstrumentID != NULL) {
		if(pInstrumentCommissionRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentCommissionRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentCommissionRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentCommissionRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInstrumentCommissionRateField_dealloc(PyCThostFtdcInstrumentCommissionRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_repr(PyCThostFtdcInstrumentCommissionRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:c,s:s,s:s}"
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
		, "ExchangeID", self->data.ExchangeID 
		, "BizType", self->data.BizType
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentCommissionRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_reserve1(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InvestorRange(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_BrokerID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InvestorID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByMoney(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByVolume(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_ExchangeID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_BizType(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InvestUnitID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInstrumentCommissionRateField_get_InstrumentID(PyCThostFtdcInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcInstrumentCommissionRateField_set_reserve1(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_InvestorRange(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_BrokerID(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_InvestorID(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByMoney(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByVolume(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByMoney(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByVolume(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByMoney(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByVolume(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_ExchangeID(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_BizType(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BizType)) {
		PyErr_SetString(PyExc_ValueError, "BizType must be less than 1 bytes");
		return -1;
	}
	self->data.BizType = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentCommissionRateField_set_InvestUnitID(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentCommissionRateField_set_InstrumentID(PyCThostFtdcInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInstrumentCommissionRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentCommissionRateField_get_reserve1, (setter)PyCThostFtdcInstrumentCommissionRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InvestorRange, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_BrokerID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InvestorID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
	 {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcInstrumentCommissionRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcInstrumentCommissionRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
	 {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
	 {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
	 {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
	 {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcInstrumentCommissionRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcInstrumentCommissionRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_ExchangeID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BizType", (getter)PyCThostFtdcInstrumentCommissionRateField_get_BizType, (setter)PyCThostFtdcInstrumentCommissionRateField_set_BizType, (char *)"BizType", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InvestUnitID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentCommissionRateField_get_InstrumentID, (setter)PyCThostFtdcInstrumentCommissionRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentCommissionRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentCommissionRateField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentCommissionRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentCommissionRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentCommissionRateField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentCommissionRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentCommissionRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentCommissionRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentCommissionRateField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentCommissionRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentCommissionRateField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentCommissionRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentCommissionRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentCommissionRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentCommissionRateField", (PyObject *)&PyCThostFtdcInstrumentCommissionRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentCommissionRateField to module");
        Py_DECREF(&PyCThostFtdcInstrumentCommissionRateFieldType);
		return -1;
    }

    return 0;
}
