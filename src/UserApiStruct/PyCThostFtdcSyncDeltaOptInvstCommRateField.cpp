
#include "PyCThostFtdcSyncDeltaOptInvstCommRateField.h"



static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaOptInvstCommRateField *self = (PyCThostFtdcSyncDeltaOptInvstCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_init(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaOptInvstCommRateField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaOptInvstCommRateField_InstrumentID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncDeltaOptInvstCommRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaOptInvstCommRateField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaOptInvstCommRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaOptInvstCommRateField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaOptInvstCommRateField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_OpenRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_OpenRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_CloseRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_CloseRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_StrikeRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptInvstCommRateField_StrikeRatioByVolume = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaOptInvstCommRateField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ddddddddci", (char **)kwlist
#endif

		, &pSyncDeltaOptInvstCommRateField_InstrumentID, &pSyncDeltaOptInvstCommRateField_InstrumentID_len
		, &pSyncDeltaOptInvstCommRateField_InvestorRange
		, &pSyncDeltaOptInvstCommRateField_BrokerID, &pSyncDeltaOptInvstCommRateField_BrokerID_len
		, &pSyncDeltaOptInvstCommRateField_InvestorID, &pSyncDeltaOptInvstCommRateField_InvestorID_len
		, &pSyncDeltaOptInvstCommRateField_OpenRatioByMoney
		, &pSyncDeltaOptInvstCommRateField_OpenRatioByVolume
		, &pSyncDeltaOptInvstCommRateField_CloseRatioByMoney
		, &pSyncDeltaOptInvstCommRateField_CloseRatioByVolume
		, &pSyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney
		, &pSyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume
		, &pSyncDeltaOptInvstCommRateField_StrikeRatioByMoney
		, &pSyncDeltaOptInvstCommRateField_StrikeRatioByVolume
		, &pSyncDeltaOptInvstCommRateField_ActionDirection
		, &pSyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaOptInvstCommRateField_InstrumentID != NULL) {
		if(pSyncDeltaOptInvstCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptInvstCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaOptInvstCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaOptInvstCommRateField_InstrumentID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncDeltaOptInvstCommRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaOptInvstCommRateField_BrokerID != NULL) {
		if(pSyncDeltaOptInvstCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptInvstCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaOptInvstCommRateField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaOptInvstCommRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaOptInvstCommRateField_InvestorID != NULL) {
		if(pSyncDeltaOptInvstCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptInvstCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaOptInvstCommRateField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaOptInvstCommRateField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OpenRatioByMoney = pSyncDeltaOptInvstCommRateField_OpenRatioByMoney;
	//TThostFtdcRatioType double
	self->data.OpenRatioByVolume = pSyncDeltaOptInvstCommRateField_OpenRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseRatioByMoney = pSyncDeltaOptInvstCommRateField_CloseRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseRatioByVolume = pSyncDeltaOptInvstCommRateField_CloseRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByMoney = pSyncDeltaOptInvstCommRateField_CloseTodayRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByVolume = pSyncDeltaOptInvstCommRateField_CloseTodayRatioByVolume;
	//TThostFtdcRatioType double
	self->data.StrikeRatioByMoney = pSyncDeltaOptInvstCommRateField_StrikeRatioByMoney;
	//TThostFtdcRatioType double
	self->data.StrikeRatioByVolume = pSyncDeltaOptInvstCommRateField_StrikeRatioByVolume;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaOptInvstCommRateField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaOptInvstCommRateField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaOptInvstCommRateField_dealloc(PyCThostFtdcSyncDeltaOptInvstCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_repr(PyCThostFtdcSyncDeltaOptInvstCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

		, "InstrumentID", self->data.InstrumentID 
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
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptInvstCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InstrumentID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorRange(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_BrokerID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorID(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_ActionDirection(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaOptInvstCommRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstCommRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InstrumentID(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorRange(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_BrokerID(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorID(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByMoney(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByVolume(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_ActionDirection(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptInvstCommRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptInvstCommRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaOptInvstCommRateField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
	 {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
	 {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
	 {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
	 {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
	 {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
	 {(char *)"StrikeRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByMoney, (char *)"StrikeRatioByMoney", NULL},
	 {(char *)"StrikeRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_StrikeRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_StrikeRatioByVolume, (char *)"StrikeRatioByVolume", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaOptInvstCommRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaOptInvstCommRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaOptInvstCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaOptInvstCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaOptInvstCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaOptInvstCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaOptInvstCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaOptInvstCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaOptInvstCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaOptInvstCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaOptInvstCommRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaOptInvstCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaOptInvstCommRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaOptInvstCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptInvstCommRateField", (PyObject *)&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptInvstCommRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaOptInvstCommRateFieldType);
		return -1;
    }

    return 0;
}
