
#include "PyCThostFtdcSyncDeltaOptInvstMarginField.h"



static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaOptInvstMarginField *self = (PyCThostFtdcSyncDeltaOptInvstMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_init(PyCThostFtdcSyncDeltaOptInvstMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "IsRelative", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaOptInvstMarginField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaOptInvstMarginField_InstrumentID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncDeltaOptInvstMarginField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaOptInvstMarginField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaOptInvstMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaOptInvstMarginField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaOptInvstMarginField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstMarginField_SShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptInvstMarginField_SShortMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstMarginField_HShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptInvstMarginField_HShortMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstMarginField_AShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptInvstMarginField_AShortMarginRatioByVolume = 0.0;

	//TThostFtdcBoolType int
	int pSyncDeltaOptInvstMarginField_IsRelative = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstMarginField_MShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptInvstMarginField_MShortMarginRatioByVolume = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaOptInvstMarginField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaOptInvstMarginField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddiddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ddddddiddci", (char **)kwlist
#endif

		, &pSyncDeltaOptInvstMarginField_InstrumentID, &pSyncDeltaOptInvstMarginField_InstrumentID_len
		, &pSyncDeltaOptInvstMarginField_InvestorRange
		, &pSyncDeltaOptInvstMarginField_BrokerID, &pSyncDeltaOptInvstMarginField_BrokerID_len
		, &pSyncDeltaOptInvstMarginField_InvestorID, &pSyncDeltaOptInvstMarginField_InvestorID_len
		, &pSyncDeltaOptInvstMarginField_SShortMarginRatioByMoney
		, &pSyncDeltaOptInvstMarginField_SShortMarginRatioByVolume
		, &pSyncDeltaOptInvstMarginField_HShortMarginRatioByMoney
		, &pSyncDeltaOptInvstMarginField_HShortMarginRatioByVolume
		, &pSyncDeltaOptInvstMarginField_AShortMarginRatioByMoney
		, &pSyncDeltaOptInvstMarginField_AShortMarginRatioByVolume
		, &pSyncDeltaOptInvstMarginField_IsRelative
		, &pSyncDeltaOptInvstMarginField_MShortMarginRatioByMoney
		, &pSyncDeltaOptInvstMarginField_MShortMarginRatioByVolume
		, &pSyncDeltaOptInvstMarginField_ActionDirection
		, &pSyncDeltaOptInvstMarginField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaOptInvstMarginField_InstrumentID != NULL) {
		if(pSyncDeltaOptInvstMarginField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptInvstMarginField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaOptInvstMarginField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaOptInvstMarginField_InstrumentID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncDeltaOptInvstMarginField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaOptInvstMarginField_BrokerID != NULL) {
		if(pSyncDeltaOptInvstMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptInvstMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaOptInvstMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaOptInvstMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaOptInvstMarginField_InvestorID != NULL) {
		if(pSyncDeltaOptInvstMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptInvstMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaOptInvstMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaOptInvstMarginField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.SShortMarginRatioByMoney = pSyncDeltaOptInvstMarginField_SShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.SShortMarginRatioByVolume = pSyncDeltaOptInvstMarginField_SShortMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.HShortMarginRatioByMoney = pSyncDeltaOptInvstMarginField_HShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.HShortMarginRatioByVolume = pSyncDeltaOptInvstMarginField_HShortMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.AShortMarginRatioByMoney = pSyncDeltaOptInvstMarginField_AShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.AShortMarginRatioByVolume = pSyncDeltaOptInvstMarginField_AShortMarginRatioByVolume;
	//TThostFtdcBoolType int
	self->data.IsRelative = pSyncDeltaOptInvstMarginField_IsRelative;

	//TThostFtdcRatioType double
	self->data.MShortMarginRatioByMoney = pSyncDeltaOptInvstMarginField_MShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.MShortMarginRatioByVolume = pSyncDeltaOptInvstMarginField_MShortMarginRatioByVolume;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaOptInvstMarginField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaOptInvstMarginField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaOptInvstMarginField_dealloc(PyCThostFtdcSyncDeltaOptInvstMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_repr(PyCThostFtdcSyncDeltaOptInvstMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:c,s:i}"
#endif

		, "InstrumentID", self->data.InstrumentID 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "SShortMarginRatioByMoney", self->data.SShortMarginRatioByMoney
		, "SShortMarginRatioByVolume", self->data.SShortMarginRatioByVolume
		, "HShortMarginRatioByMoney", self->data.HShortMarginRatioByMoney
		, "HShortMarginRatioByVolume", self->data.HShortMarginRatioByVolume
		, "AShortMarginRatioByMoney", self->data.AShortMarginRatioByMoney
		, "AShortMarginRatioByVolume", self->data.AShortMarginRatioByVolume
		, "IsRelative", self->data.IsRelative
		, "MShortMarginRatioByMoney", self->data.MShortMarginRatioByMoney
		, "MShortMarginRatioByVolume", self->data.MShortMarginRatioByVolume
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_InstrumentID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorRange(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_BrokerID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorID(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_IsRelative(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsRelative);
#else 
	return PyInt_FromLong(self->data.IsRelative);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_ActionDirection(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstMarginField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_InstrumentID(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorRange(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_BrokerID(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorID(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_IsRelative(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_ActionDirection(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstMarginField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstMarginField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaOptInvstMarginField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"SShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByMoney, (char *)"SShortMarginRatioByMoney", NULL},
	 {(char *)"SShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_SShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_SShortMarginRatioByVolume, (char *)"SShortMarginRatioByVolume", NULL},
	 {(char *)"HShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByMoney, (char *)"HShortMarginRatioByMoney", NULL},
	 {(char *)"HShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_HShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_HShortMarginRatioByVolume, (char *)"HShortMarginRatioByVolume", NULL},
	 {(char *)"AShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByMoney, (char *)"AShortMarginRatioByMoney", NULL},
	 {(char *)"AShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_AShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_AShortMarginRatioByVolume, (char *)"AShortMarginRatioByVolume", NULL},
	 {(char *)"IsRelative", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_IsRelative, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_IsRelative, (char *)"IsRelative", NULL},
	 {(char *)"MShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByMoney, (char *)"MShortMarginRatioByMoney", NULL},
	 {(char *)"MShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_MShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_MShortMarginRatioByVolume, (char *)"MShortMarginRatioByVolume", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaOptInvstMarginField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaOptInvstMarginField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaOptInvstMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaOptInvstMarginField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaOptInvstMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaOptInvstMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaOptInvstMarginField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaOptInvstMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaOptInvstMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaOptInvstMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaOptInvstMarginField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaOptInvstMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaOptInvstMarginField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaOptInvstMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaOptInvstMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaOptInvstMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptInvstMarginField", (PyObject *)&PyCThostFtdcSyncDeltaOptInvstMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptInvstMarginField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaOptInvstMarginFieldType);
		return -1;
    }

    return 0;
}
