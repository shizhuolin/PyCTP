
#include "PyCThostFtdcSyncDeltaSPBMFutureParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMFutureParameterField *self = (PyCThostFtdcSyncDeltaSPBMFutureParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_init(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "TimeRange", "MarginRate", "LockRateX", "AddOnRate", "PreSettlementPrice", "AddOnLockRateX2", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaSPBMFutureParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaSPBMFutureParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPBMFutureParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPBMFutureParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMFutureParameterField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaSPBMFutureParameterField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMFutureParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaSPBMFutureParameterField_ProdFamilyCode_len = 0;

	//TThostFtdcVolumeMultipleType int
	int pSyncDeltaSPBMFutureParameterField_Cvf = 0;

	//TThostFtdcTimeRangeType char
	char pSyncDeltaSPBMFutureParameterField_TimeRange = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMFutureParameterField_MarginRate = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMFutureParameterField_LockRateX = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMFutureParameterField_AddOnRate = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaSPBMFutureParameterField_PreSettlementPrice = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMFutureParameterField_AddOnLockRateX2 = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPBMFutureParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icdddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#icdddddci", (char **)kwlist
#endif

		, &pSyncDeltaSPBMFutureParameterField_TradingDay, &pSyncDeltaSPBMFutureParameterField_TradingDay_len
		, &pSyncDeltaSPBMFutureParameterField_ExchangeID, &pSyncDeltaSPBMFutureParameterField_ExchangeID_len
		, &pSyncDeltaSPBMFutureParameterField_InstrumentID, &pSyncDeltaSPBMFutureParameterField_InstrumentID_len
		, &pSyncDeltaSPBMFutureParameterField_ProdFamilyCode, &pSyncDeltaSPBMFutureParameterField_ProdFamilyCode_len
		, &pSyncDeltaSPBMFutureParameterField_Cvf
		, &pSyncDeltaSPBMFutureParameterField_TimeRange
		, &pSyncDeltaSPBMFutureParameterField_MarginRate
		, &pSyncDeltaSPBMFutureParameterField_LockRateX
		, &pSyncDeltaSPBMFutureParameterField_AddOnRate
		, &pSyncDeltaSPBMFutureParameterField_PreSettlementPrice
		, &pSyncDeltaSPBMFutureParameterField_AddOnLockRateX2
		, &pSyncDeltaSPBMFutureParameterField_ActionDirection
		, &pSyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaSPBMFutureParameterField_TradingDay != NULL) {
		if(pSyncDeltaSPBMFutureParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMFutureParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaSPBMFutureParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaSPBMFutureParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPBMFutureParameterField_ExchangeID != NULL) {
		if(pSyncDeltaSPBMFutureParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMFutureParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPBMFutureParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPBMFutureParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMFutureParameterField_InstrumentID != NULL) {
		if(pSyncDeltaSPBMFutureParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMFutureParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaSPBMFutureParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaSPBMFutureParameterField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMFutureParameterField_ProdFamilyCode != NULL) {
		if(pSyncDeltaSPBMFutureParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMFutureParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pSyncDeltaSPBMFutureParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pSyncDeltaSPBMFutureParameterField_ProdFamilyCode = NULL;
	}

	//TThostFtdcVolumeMultipleType int
	self->data.Cvf = pSyncDeltaSPBMFutureParameterField_Cvf;

	//TThostFtdcTimeRangeType char
	self->data.TimeRange = pSyncDeltaSPBMFutureParameterField_TimeRange;

	//TThostFtdcRatioType double
	self->data.MarginRate = pSyncDeltaSPBMFutureParameterField_MarginRate;
	//TThostFtdcRatioType double
	self->data.LockRateX = pSyncDeltaSPBMFutureParameterField_LockRateX;
	//TThostFtdcRatioType double
	self->data.AddOnRate = pSyncDeltaSPBMFutureParameterField_AddOnRate;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pSyncDeltaSPBMFutureParameterField_PreSettlementPrice;
	//TThostFtdcRatioType double
	self->data.AddOnLockRateX2 = pSyncDeltaSPBMFutureParameterField_AddOnLockRateX2;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPBMFutureParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPBMFutureParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMFutureParameterField_dealloc(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_repr(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "Cvf", self->data.Cvf
		, "TimeRange", self->data.TimeRange
		, "MarginRate", self->data.MarginRate
		, "LockRateX", self->data.LockRateX
		, "AddOnRate", self->data.AddOnRate
		, "PreSettlementPrice", self->data.PreSettlementPrice
		, "AddOnLockRateX2", self->data.AddOnLockRateX2
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMFutureParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_InstrumentID(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_Cvf(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Cvf);
#else 
	return PyInt_FromLong(self->data.Cvf);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TimeRange(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeRange), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_MarginRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRate);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_LockRateX(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LockRateX);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnRate);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_PreSettlementPrice(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnLockRateX2(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnLockRateX2);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMFutureParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_InstrumentID(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_Cvf(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Cvf Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Cvf Expected int"); 
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
    self->data.Cvf = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TimeRange(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TimeRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TimeRange)) {
		PyErr_SetString(PyExc_ValueError, "TimeRange must be less than 1 bytes");
		return -1;
	}
	self->data.TimeRange = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_MarginRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_LockRateX(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LockRateX Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LockRateX = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnRate(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_PreSettlementPrice(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnLockRateX2(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnLockRateX2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnLockRateX2 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
		PyErr_SetString(PyExc_ValueError, "ActionDirection must be less than 1 bytes");
		return -1;
	}
	self->data.ActionDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMFutureParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int"); 
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
    self->data.SyncDeltaSequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDeltaSPBMFutureParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"Cvf", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_Cvf, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_Cvf, (char *)"Cvf", NULL},
	 {(char *)"TimeRange", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_TimeRange, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_TimeRange, (char *)"TimeRange", NULL},
	 {(char *)"MarginRate", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_MarginRate, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_MarginRate, (char *)"MarginRate", NULL},
	 {(char *)"LockRateX", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_LockRateX, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_LockRateX, (char *)"LockRateX", NULL},
	 {(char *)"AddOnRate", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnRate, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnRate, (char *)"AddOnRate", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_PreSettlementPrice, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"AddOnLockRateX2", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_AddOnLockRateX2, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_AddOnLockRateX2, (char *)"AddOnLockRateX2", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMFutureParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMFutureParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMFutureParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMFutureParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMFutureParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMFutureParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMFutureParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMFutureParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMFutureParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMFutureParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMFutureParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMFutureParameterField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMFutureParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMFutureParameterFieldType);
		return -1;
    }

    return 0;
}
