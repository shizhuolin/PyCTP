
#include "PyCThostFtdcSyncDeltaInvstMarginRateField.h"



static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstMarginRateField *self = (PyCThostFtdcSyncDeltaInvstMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstMarginRateField_init(PyCThostFtdcSyncDeltaInvstMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaInvstMarginRateField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaInvstMarginRateField_InstrumentID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncDeltaInvstMarginRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaInvstMarginRateField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaInvstMarginRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaInvstMarginRateField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaInvstMarginRateField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaInvstMarginRateField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstMarginRateField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstMarginRateField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstMarginRateField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstMarginRateField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcBoolType int
	int pSyncDeltaInvstMarginRateField_IsRelative = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaInvstMarginRateField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaInvstMarginRateField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddici", (char **)kwlist
#endif

		, &pSyncDeltaInvstMarginRateField_InstrumentID, &pSyncDeltaInvstMarginRateField_InstrumentID_len
		, &pSyncDeltaInvstMarginRateField_InvestorRange
		, &pSyncDeltaInvstMarginRateField_BrokerID, &pSyncDeltaInvstMarginRateField_BrokerID_len
		, &pSyncDeltaInvstMarginRateField_InvestorID, &pSyncDeltaInvstMarginRateField_InvestorID_len
		, &pSyncDeltaInvstMarginRateField_HedgeFlag
		, &pSyncDeltaInvstMarginRateField_LongMarginRatioByMoney
		, &pSyncDeltaInvstMarginRateField_LongMarginRatioByVolume
		, &pSyncDeltaInvstMarginRateField_ShortMarginRatioByMoney
		, &pSyncDeltaInvstMarginRateField_ShortMarginRatioByVolume
		, &pSyncDeltaInvstMarginRateField_IsRelative
		, &pSyncDeltaInvstMarginRateField_ActionDirection
		, &pSyncDeltaInvstMarginRateField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaInvstMarginRateField_InstrumentID != NULL) {
		if(pSyncDeltaInvstMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaInvstMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaInvstMarginRateField_InstrumentID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncDeltaInvstMarginRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaInvstMarginRateField_BrokerID != NULL) {
		if(pSyncDeltaInvstMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaInvstMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaInvstMarginRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaInvstMarginRateField_InvestorID != NULL) {
		if(pSyncDeltaInvstMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaInvstMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaInvstMarginRateField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaInvstMarginRateField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pSyncDeltaInvstMarginRateField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pSyncDeltaInvstMarginRateField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pSyncDeltaInvstMarginRateField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pSyncDeltaInvstMarginRateField_ShortMarginRatioByVolume;
	//TThostFtdcBoolType int
	self->data.IsRelative = pSyncDeltaInvstMarginRateField_IsRelative;

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaInvstMarginRateField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaInvstMarginRateField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaInvstMarginRateField_dealloc(PyCThostFtdcSyncDeltaInvstMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_repr(PyCThostFtdcSyncDeltaInvstMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
#endif

		, "InstrumentID", self->data.InstrumentID 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "HedgeFlag", self->data.HedgeFlag
		, "LongMarginRatioByMoney", self->data.LongMarginRatioByMoney
		, "LongMarginRatioByVolume", self->data.LongMarginRatioByVolume
		, "ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney
		, "ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume
		, "IsRelative", self->data.IsRelative
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_IsRelative(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsRelative);
#else 
	return PyInt_FromLong(self->data.IsRelative);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_IsRelative(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaInvstMarginRateField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"IsRelative", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_IsRelative, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_IsRelative, (char *)"IsRelative", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstMarginRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstMarginRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstMarginRateField", (PyObject *)&PyCThostFtdcSyncDeltaInvstMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstMarginRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstMarginRateFieldType);
		return -1;
    }

    return 0;
}
