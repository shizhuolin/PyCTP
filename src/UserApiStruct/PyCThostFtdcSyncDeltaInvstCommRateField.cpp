
#include "PyCThostFtdcSyncDeltaInvstCommRateField.h"



static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstCommRateField *self = (PyCThostFtdcSyncDeltaInvstCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstCommRateField_init(PyCThostFtdcSyncDeltaInvstCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaInvstCommRateField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaInvstCommRateField_InstrumentID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncDeltaInvstCommRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaInvstCommRateField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaInvstCommRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaInvstCommRateField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaInvstCommRateField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstCommRateField_OpenRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstCommRateField_OpenRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstCommRateField_CloseRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstCommRateField_CloseRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstCommRateField_CloseTodayRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstCommRateField_CloseTodayRatioByVolume = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaInvstCommRateField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaInvstCommRateField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ddddddci", (char **)kwlist
#endif

		, &pSyncDeltaInvstCommRateField_InstrumentID, &pSyncDeltaInvstCommRateField_InstrumentID_len
		, &pSyncDeltaInvstCommRateField_InvestorRange
		, &pSyncDeltaInvstCommRateField_BrokerID, &pSyncDeltaInvstCommRateField_BrokerID_len
		, &pSyncDeltaInvstCommRateField_InvestorID, &pSyncDeltaInvstCommRateField_InvestorID_len
		, &pSyncDeltaInvstCommRateField_OpenRatioByMoney
		, &pSyncDeltaInvstCommRateField_OpenRatioByVolume
		, &pSyncDeltaInvstCommRateField_CloseRatioByMoney
		, &pSyncDeltaInvstCommRateField_CloseRatioByVolume
		, &pSyncDeltaInvstCommRateField_CloseTodayRatioByMoney
		, &pSyncDeltaInvstCommRateField_CloseTodayRatioByVolume
		, &pSyncDeltaInvstCommRateField_ActionDirection
		, &pSyncDeltaInvstCommRateField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaInvstCommRateField_InstrumentID != NULL) {
		if(pSyncDeltaInvstCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaInvstCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaInvstCommRateField_InstrumentID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncDeltaInvstCommRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaInvstCommRateField_BrokerID != NULL) {
		if(pSyncDeltaInvstCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaInvstCommRateField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaInvstCommRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaInvstCommRateField_InvestorID != NULL) {
		if(pSyncDeltaInvstCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaInvstCommRateField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaInvstCommRateField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OpenRatioByMoney = pSyncDeltaInvstCommRateField_OpenRatioByMoney;
	//TThostFtdcRatioType double
	self->data.OpenRatioByVolume = pSyncDeltaInvstCommRateField_OpenRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseRatioByMoney = pSyncDeltaInvstCommRateField_CloseRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseRatioByVolume = pSyncDeltaInvstCommRateField_CloseRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByMoney = pSyncDeltaInvstCommRateField_CloseTodayRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByVolume = pSyncDeltaInvstCommRateField_CloseTodayRatioByVolume;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaInvstCommRateField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaInvstCommRateField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaInvstCommRateField_dealloc(PyCThostFtdcSyncDeltaInvstCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_repr(PyCThostFtdcSyncDeltaInvstCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
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
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_InvestorRange(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_BrokerID(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_InvestorID(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_OpenRatioByMoney(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_OpenRatioByVolume(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseRatioByMoney(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseRatioByVolume(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseTodayRatioByMoney(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseTodayRatioByVolume(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstCommRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstCommRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_InvestorRange(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_BrokerID(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_InvestorID(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_OpenRatioByMoney(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_OpenRatioByVolume(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseRatioByMoney(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseRatioByVolume(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseTodayRatioByMoney(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseTodayRatioByVolume(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstCommRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstCommRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaInvstCommRateField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
	 {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
	 {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
	 {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
	 {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
	 {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstCommRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstCommRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstCommRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstCommRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstCommRateField", (PyObject *)&PyCThostFtdcSyncDeltaInvstCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstCommRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstCommRateFieldType);
		return -1;
    }

    return 0;
}
