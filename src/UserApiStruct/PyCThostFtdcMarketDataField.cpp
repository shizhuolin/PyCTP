
#include "PyCThostFtdcMarketDataField.h"



static PyObject *PyCThostFtdcMarketDataField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataField *self = (PyCThostFtdcMarketDataField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataField_init(PyCThostFtdcMarketDataField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "reserve1", "ExchangeID", "reserve2", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "ActionDay", "InstrumentID", "ExchangeInstID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pMarketDataField_TradingDay = NULL;
	Py_ssize_t pMarketDataField_TradingDay_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pMarketDataField_reserve1 = NULL;
	Py_ssize_t pMarketDataField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pMarketDataField_ExchangeID = NULL;
	Py_ssize_t pMarketDataField_ExchangeID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pMarketDataField_reserve2 = NULL;
	Py_ssize_t pMarketDataField_reserve2_len = 0;

	//TThostFtdcPriceType double
	double pMarketDataField_LastPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_PreSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_PreClosePrice = 0.0;

	//TThostFtdcLargeVolumeType double
	double pMarketDataField_PreOpenInterest = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_OpenPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_HighestPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_LowestPrice = 0.0;

	//TThostFtdcVolumeType int
	int pMarketDataField_Volume = 0;

	//TThostFtdcMoneyType double
	double pMarketDataField_Turnover = 0.0;

	//TThostFtdcLargeVolumeType double
	double pMarketDataField_OpenInterest = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_ClosePrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_SettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_UpperLimitPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataField_LowerLimitPrice = 0.0;

	//TThostFtdcRatioType double
	double pMarketDataField_PreDelta = 0.0;

	//TThostFtdcRatioType double
	double pMarketDataField_CurrDelta = 0.0;

	//TThostFtdcTimeType char[9]
	const char *pMarketDataField_UpdateTime = NULL;
	Py_ssize_t pMarketDataField_UpdateTime_len = 0;

	//TThostFtdcMillisecType int
	int pMarketDataField_UpdateMillisec = 0;

	//TThostFtdcDateType char[9]
	const char *pMarketDataField_ActionDay = NULL;
	Py_ssize_t pMarketDataField_ActionDay_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pMarketDataField_InstrumentID = NULL;
	Py_ssize_t pMarketDataField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pMarketDataField_ExchangeInstID = NULL;
	Py_ssize_t pMarketDataField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddddddidddddddds#is#s#s#", (char **)kwlist
#endif

		, &pMarketDataField_TradingDay, &pMarketDataField_TradingDay_len
		, &pMarketDataField_reserve1, &pMarketDataField_reserve1_len
		, &pMarketDataField_ExchangeID, &pMarketDataField_ExchangeID_len
		, &pMarketDataField_reserve2, &pMarketDataField_reserve2_len
		, &pMarketDataField_LastPrice
		, &pMarketDataField_PreSettlementPrice
		, &pMarketDataField_PreClosePrice
		, &pMarketDataField_PreOpenInterest
		, &pMarketDataField_OpenPrice
		, &pMarketDataField_HighestPrice
		, &pMarketDataField_LowestPrice
		, &pMarketDataField_Volume
		, &pMarketDataField_Turnover
		, &pMarketDataField_OpenInterest
		, &pMarketDataField_ClosePrice
		, &pMarketDataField_SettlementPrice
		, &pMarketDataField_UpperLimitPrice
		, &pMarketDataField_LowerLimitPrice
		, &pMarketDataField_PreDelta
		, &pMarketDataField_CurrDelta
		, &pMarketDataField_UpdateTime, &pMarketDataField_UpdateTime_len
		, &pMarketDataField_UpdateMillisec
		, &pMarketDataField_ActionDay, &pMarketDataField_ActionDay_len
		, &pMarketDataField_InstrumentID, &pMarketDataField_InstrumentID_len
		, &pMarketDataField_ExchangeInstID, &pMarketDataField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pMarketDataField_TradingDay != NULL) {
		if(pMarketDataField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pMarketDataField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pMarketDataField_TradingDay, sizeof(self->data.TradingDay) );
		pMarketDataField_TradingDay = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pMarketDataField_reserve1 != NULL) {
		if(pMarketDataField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pMarketDataField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pMarketDataField_reserve1, sizeof(self->data.reserve1) );
		pMarketDataField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pMarketDataField_ExchangeID != NULL) {
		if(pMarketDataField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pMarketDataField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pMarketDataField_ExchangeID, sizeof(self->data.ExchangeID) );
		pMarketDataField_ExchangeID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pMarketDataField_reserve2 != NULL) {
		if(pMarketDataField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pMarketDataField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pMarketDataField_reserve2, sizeof(self->data.reserve2) );
		pMarketDataField_reserve2 = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LastPrice = pMarketDataField_LastPrice;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pMarketDataField_PreSettlementPrice;
	//TThostFtdcPriceType double
	self->data.PreClosePrice = pMarketDataField_PreClosePrice;
	//TThostFtdcLargeVolumeType double
	self->data.PreOpenInterest = pMarketDataField_PreOpenInterest;
	//TThostFtdcPriceType double
	self->data.OpenPrice = pMarketDataField_OpenPrice;
	//TThostFtdcPriceType double
	self->data.HighestPrice = pMarketDataField_HighestPrice;
	//TThostFtdcPriceType double
	self->data.LowestPrice = pMarketDataField_LowestPrice;
	//TThostFtdcVolumeType int
	self->data.Volume = pMarketDataField_Volume;

	//TThostFtdcMoneyType double
	self->data.Turnover = pMarketDataField_Turnover;
	//TThostFtdcLargeVolumeType double
	self->data.OpenInterest = pMarketDataField_OpenInterest;
	//TThostFtdcPriceType double
	self->data.ClosePrice = pMarketDataField_ClosePrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pMarketDataField_SettlementPrice;
	//TThostFtdcPriceType double
	self->data.UpperLimitPrice = pMarketDataField_UpperLimitPrice;
	//TThostFtdcPriceType double
	self->data.LowerLimitPrice = pMarketDataField_LowerLimitPrice;
	//TThostFtdcRatioType double
	self->data.PreDelta = pMarketDataField_PreDelta;
	//TThostFtdcRatioType double
	self->data.CurrDelta = pMarketDataField_CurrDelta;
	//TThostFtdcTimeType char[9]
	if(pMarketDataField_UpdateTime != NULL) {
		if(pMarketDataField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
			PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", pMarketDataField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
			return -1;
		}
		strncpy(self->data.UpdateTime, pMarketDataField_UpdateTime, sizeof(self->data.UpdateTime) );
		pMarketDataField_UpdateTime = NULL;
	}

	//TThostFtdcMillisecType int
	self->data.UpdateMillisec = pMarketDataField_UpdateMillisec;

	//TThostFtdcDateType char[9]
	if(pMarketDataField_ActionDay != NULL) {
		if(pMarketDataField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
			PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", pMarketDataField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
			return -1;
		}
		strncpy(self->data.ActionDay, pMarketDataField_ActionDay, sizeof(self->data.ActionDay) );
		pMarketDataField_ActionDay = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pMarketDataField_InstrumentID != NULL) {
		if(pMarketDataField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pMarketDataField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pMarketDataField_InstrumentID, sizeof(self->data.InstrumentID) );
		pMarketDataField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pMarketDataField_ExchangeInstID != NULL) {
		if(pMarketDataField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pMarketDataField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pMarketDataField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pMarketDataField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcMarketDataField_dealloc(PyCThostFtdcMarketDataField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataField_repr(PyCThostFtdcMarketDataField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:s,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "reserve2", self->data.reserve2 
		, "LastPrice", self->data.LastPrice
		, "PreSettlementPrice", self->data.PreSettlementPrice
		, "PreClosePrice", self->data.PreClosePrice
		, "PreOpenInterest", self->data.PreOpenInterest
		, "OpenPrice", self->data.OpenPrice
		, "HighestPrice", self->data.HighestPrice
		, "LowestPrice", self->data.LowestPrice
		, "Volume", self->data.Volume
		, "Turnover", self->data.Turnover
		, "OpenInterest", self->data.OpenInterest
		, "ClosePrice", self->data.ClosePrice
		, "SettlementPrice", self->data.SettlementPrice
		, "UpperLimitPrice", self->data.UpperLimitPrice
		, "LowerLimitPrice", self->data.LowerLimitPrice
		, "PreDelta", self->data.PreDelta
		, "CurrDelta", self->data.CurrDelta
		, "UpdateTime", self->data.UpdateTime 
		, "UpdateMillisec", self->data.UpdateMillisec
		, "ActionDay", self->data.ActionDay 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMarketDataField_get_TradingDay(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcMarketDataField_get_reserve1(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcMarketDataField_get_ExchangeID(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcMarketDataField_get_reserve2(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcMarketDataField_get_LastPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_PreSettlementPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_PreClosePrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreClosePrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_PreOpenInterest(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreOpenInterest);
}

static PyObject *PyCThostFtdcMarketDataField_get_OpenPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_HighestPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HighestPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_LowestPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LowestPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_Volume(PyCThostFtdcMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcMarketDataField_get_Turnover(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Turnover);
}

static PyObject *PyCThostFtdcMarketDataField_get_OpenInterest(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenInterest);
}

static PyObject *PyCThostFtdcMarketDataField_get_ClosePrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ClosePrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_SettlementPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_UpperLimitPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UpperLimitPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_LowerLimitPrice(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LowerLimitPrice);
}

static PyObject *PyCThostFtdcMarketDataField_get_PreDelta(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreDelta);
}

static PyObject *PyCThostFtdcMarketDataField_get_CurrDelta(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CurrDelta);
}

static PyObject *PyCThostFtdcMarketDataField_get_UpdateTime(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.UpdateTime);
}

static PyObject *PyCThostFtdcMarketDataField_get_UpdateMillisec(PyCThostFtdcMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UpdateMillisec);
#else 
	return PyInt_FromLong(self->data.UpdateMillisec);
#endif 
}

static PyObject *PyCThostFtdcMarketDataField_get_ActionDay(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDay);
}

static PyObject *PyCThostFtdcMarketDataField_get_InstrumentID(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcMarketDataField_get_ExchangeInstID(PyCThostFtdcMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcMarketDataField_set_TradingDay(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataField_set_reserve1(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataField_set_ExchangeID(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataField_set_reserve2(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcMarketDataField_set_LastPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_PreSettlementPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_PreClosePrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreClosePrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_PreOpenInterest(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreOpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreOpenInterest = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_OpenPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_HighestPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HighestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HighestPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_LowestPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowestPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_Volume(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Volume Expected int"); 
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
    self->data.Volume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcMarketDataField_set_Turnover(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Turnover Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Turnover = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_OpenInterest(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenInterest = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_ClosePrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ClosePrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_SettlementPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SettlementPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_UpperLimitPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpperLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UpperLimitPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_LowerLimitPrice(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowerLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowerLimitPrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_PreDelta(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreDelta = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_CurrDelta(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrDelta = buf;
    return 0;
}

static int PyCThostFtdcMarketDataField_set_UpdateTime(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
		PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.UpdateTime, buf, sizeof(self->data.UpdateTime));
	return 0;
}

static int PyCThostFtdcMarketDataField_set_UpdateMillisec(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected int"); 
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
    self->data.UpdateMillisec = (int)buf; 
    return 0; 
}

static int PyCThostFtdcMarketDataField_set_ActionDay(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
		PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionDay, buf, sizeof(self->data.ActionDay));
	return 0;
}

static int PyCThostFtdcMarketDataField_set_InstrumentID(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataField_set_ExchangeInstID(PyCThostFtdcMarketDataField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}



static PyGetSetDef PyCThostFtdcMarketDataField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcMarketDataField_get_TradingDay, (setter)PyCThostFtdcMarketDataField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcMarketDataField_get_reserve1, (setter)PyCThostFtdcMarketDataField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcMarketDataField_get_ExchangeID, (setter)PyCThostFtdcMarketDataField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcMarketDataField_get_reserve2, (setter)PyCThostFtdcMarketDataField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"LastPrice", (getter)PyCThostFtdcMarketDataField_get_LastPrice, (setter)PyCThostFtdcMarketDataField_set_LastPrice, (char *)"LastPrice", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcMarketDataField_get_PreSettlementPrice, (setter)PyCThostFtdcMarketDataField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"PreClosePrice", (getter)PyCThostFtdcMarketDataField_get_PreClosePrice, (setter)PyCThostFtdcMarketDataField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
	 {(char *)"PreOpenInterest", (getter)PyCThostFtdcMarketDataField_get_PreOpenInterest, (setter)PyCThostFtdcMarketDataField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
	 {(char *)"OpenPrice", (getter)PyCThostFtdcMarketDataField_get_OpenPrice, (setter)PyCThostFtdcMarketDataField_set_OpenPrice, (char *)"OpenPrice", NULL},
	 {(char *)"HighestPrice", (getter)PyCThostFtdcMarketDataField_get_HighestPrice, (setter)PyCThostFtdcMarketDataField_set_HighestPrice, (char *)"HighestPrice", NULL},
	 {(char *)"LowestPrice", (getter)PyCThostFtdcMarketDataField_get_LowestPrice, (setter)PyCThostFtdcMarketDataField_set_LowestPrice, (char *)"LowestPrice", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcMarketDataField_get_Volume, (setter)PyCThostFtdcMarketDataField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"Turnover", (getter)PyCThostFtdcMarketDataField_get_Turnover, (setter)PyCThostFtdcMarketDataField_set_Turnover, (char *)"Turnover", NULL},
	 {(char *)"OpenInterest", (getter)PyCThostFtdcMarketDataField_get_OpenInterest, (setter)PyCThostFtdcMarketDataField_set_OpenInterest, (char *)"OpenInterest", NULL},
	 {(char *)"ClosePrice", (getter)PyCThostFtdcMarketDataField_get_ClosePrice, (setter)PyCThostFtdcMarketDataField_set_ClosePrice, (char *)"ClosePrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcMarketDataField_get_SettlementPrice, (setter)PyCThostFtdcMarketDataField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"UpperLimitPrice", (getter)PyCThostFtdcMarketDataField_get_UpperLimitPrice, (setter)PyCThostFtdcMarketDataField_set_UpperLimitPrice, (char *)"UpperLimitPrice", NULL},
	 {(char *)"LowerLimitPrice", (getter)PyCThostFtdcMarketDataField_get_LowerLimitPrice, (setter)PyCThostFtdcMarketDataField_set_LowerLimitPrice, (char *)"LowerLimitPrice", NULL},
	 {(char *)"PreDelta", (getter)PyCThostFtdcMarketDataField_get_PreDelta, (setter)PyCThostFtdcMarketDataField_set_PreDelta, (char *)"PreDelta", NULL},
	 {(char *)"CurrDelta", (getter)PyCThostFtdcMarketDataField_get_CurrDelta, (setter)PyCThostFtdcMarketDataField_set_CurrDelta, (char *)"CurrDelta", NULL},
	 {(char *)"UpdateTime", (getter)PyCThostFtdcMarketDataField_get_UpdateTime, (setter)PyCThostFtdcMarketDataField_set_UpdateTime, (char *)"UpdateTime", NULL},
	 {(char *)"UpdateMillisec", (getter)PyCThostFtdcMarketDataField_get_UpdateMillisec, (setter)PyCThostFtdcMarketDataField_set_UpdateMillisec, (char *)"UpdateMillisec", NULL},
	 {(char *)"ActionDay", (getter)PyCThostFtdcMarketDataField_get_ActionDay, (setter)PyCThostFtdcMarketDataField_set_ActionDay, (char *)"ActionDay", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcMarketDataField_get_InstrumentID, (setter)PyCThostFtdcMarketDataField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcMarketDataField_get_ExchangeInstID, (setter)PyCThostFtdcMarketDataField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataField", (PyObject *)&PyCThostFtdcMarketDataFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataField to module");
        Py_DECREF(&PyCThostFtdcMarketDataFieldType);
		return -1;
    }

    return 0;
}
