
#include "PyCThostFtdcSyncDeltaInvstMarginRateULField.h"



static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstMarginRateULField *self = (PyCThostFtdcSyncDeltaInvstMarginRateULField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_init(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaInvstMarginRateULField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaInvstMarginRateULField_InstrumentID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncDeltaInvstMarginRateULField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaInvstMarginRateULField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaInvstMarginRateULField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaInvstMarginRateULField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaInvstMarginRateULField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaInvstMarginRateULField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstMarginRateULField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstMarginRateULField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaInvstMarginRateULField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddci", (char **)kwlist
#endif

		, &pSyncDeltaInvstMarginRateULField_InstrumentID, &pSyncDeltaInvstMarginRateULField_InstrumentID_len
		, &pSyncDeltaInvstMarginRateULField_InvestorRange
		, &pSyncDeltaInvstMarginRateULField_BrokerID, &pSyncDeltaInvstMarginRateULField_BrokerID_len
		, &pSyncDeltaInvstMarginRateULField_InvestorID, &pSyncDeltaInvstMarginRateULField_InvestorID_len
		, &pSyncDeltaInvstMarginRateULField_HedgeFlag
		, &pSyncDeltaInvstMarginRateULField_LongMarginRatioByMoney
		, &pSyncDeltaInvstMarginRateULField_LongMarginRatioByVolume
		, &pSyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney
		, &pSyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume
		, &pSyncDeltaInvstMarginRateULField_ActionDirection
		, &pSyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaInvstMarginRateULField_InstrumentID != NULL) {
		if(pSyncDeltaInvstMarginRateULField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstMarginRateULField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaInvstMarginRateULField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaInvstMarginRateULField_InstrumentID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncDeltaInvstMarginRateULField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaInvstMarginRateULField_BrokerID != NULL) {
		if(pSyncDeltaInvstMarginRateULField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstMarginRateULField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaInvstMarginRateULField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaInvstMarginRateULField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaInvstMarginRateULField_InvestorID != NULL) {
		if(pSyncDeltaInvstMarginRateULField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstMarginRateULField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaInvstMarginRateULField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaInvstMarginRateULField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaInvstMarginRateULField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pSyncDeltaInvstMarginRateULField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pSyncDeltaInvstMarginRateULField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pSyncDeltaInvstMarginRateULField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pSyncDeltaInvstMarginRateULField_ShortMarginRatioByVolume;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaInvstMarginRateULField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaInvstMarginRateULField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaInvstMarginRateULField_dealloc(PyCThostFtdcSyncDeltaInvstMarginRateULField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_repr(PyCThostFtdcSyncDeltaInvstMarginRateULField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
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
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstMarginRateULField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstMarginRateULField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateULField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorRange(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_BrokerID(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorID(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstMarginRateULField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstMarginRateULField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaInvstMarginRateULField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorRange, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstMarginRateULField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstMarginRateULField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstMarginRateULFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstMarginRateULField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstMarginRateULField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstMarginRateULField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstMarginRateULField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstMarginRateULField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstMarginRateULField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstMarginRateULField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstMarginRateULField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstMarginRateULFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstMarginRateULField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstMarginRateULField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstMarginRateULField", (PyObject *)&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstMarginRateULField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstMarginRateULFieldType);
		return -1;
    }

    return 0;
}
