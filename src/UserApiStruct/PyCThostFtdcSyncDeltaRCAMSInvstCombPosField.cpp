
#include "PyCThostFtdcSyncDeltaRCAMSInvstCombPosField.h"



static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self = (PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_init(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "HedgeFlag", "PosiDirection", "CombInstrumentID", "LegID", "ExchangeInstID", "TotalAmt", "ExchMargin", "Margin", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRCAMSInvstCombPosField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInvstCombPosField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaRCAMSInvstCombPosField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInvstCombPosField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaRCAMSInvstCombPosField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInvstCombPosField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaRCAMSInvstCombPosField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInvstCombPosField_InstrumentID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaRCAMSInvstCombPosField_HedgeFlag = 0;

	//TThostFtdcPosiDirectionType char
	char pSyncDeltaRCAMSInvstCombPosField_PosiDirection = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len = 0;

	//TThostFtdcLegIDType int
	int pSyncDeltaRCAMSInvstCombPosField_LegID = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len = 0;

	//TThostFtdcVolumeType int
	int pSyncDeltaRCAMSInvstCombPosField_TotalAmt = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaRCAMSInvstCombPosField_ExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaRCAMSInvstCombPosField_Margin = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRCAMSInvstCombPosField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ccy#iy#iddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ccs#is#iddci", (char **)kwlist
#endif

		, &pSyncDeltaRCAMSInvstCombPosField_ExchangeID, &pSyncDeltaRCAMSInvstCombPosField_ExchangeID_len
		, &pSyncDeltaRCAMSInvstCombPosField_BrokerID, &pSyncDeltaRCAMSInvstCombPosField_BrokerID_len
		, &pSyncDeltaRCAMSInvstCombPosField_InvestorID, &pSyncDeltaRCAMSInvstCombPosField_InvestorID_len
		, &pSyncDeltaRCAMSInvstCombPosField_InstrumentID, &pSyncDeltaRCAMSInvstCombPosField_InstrumentID_len
		, &pSyncDeltaRCAMSInvstCombPosField_HedgeFlag
		, &pSyncDeltaRCAMSInvstCombPosField_PosiDirection
		, &pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID, &pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len
		, &pSyncDeltaRCAMSInvstCombPosField_LegID
		, &pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID, &pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len
		, &pSyncDeltaRCAMSInvstCombPosField_TotalAmt
		, &pSyncDeltaRCAMSInvstCombPosField_ExchMargin
		, &pSyncDeltaRCAMSInvstCombPosField_Margin
		, &pSyncDeltaRCAMSInvstCombPosField_ActionDirection
		, &pSyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRCAMSInvstCombPosField_ExchangeID != NULL) {
		if(pSyncDeltaRCAMSInvstCombPosField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInvstCombPosField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRCAMSInvstCombPosField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRCAMSInvstCombPosField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaRCAMSInvstCombPosField_BrokerID != NULL) {
		if(pSyncDeltaRCAMSInvstCombPosField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInvstCombPosField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaRCAMSInvstCombPosField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaRCAMSInvstCombPosField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaRCAMSInvstCombPosField_InvestorID != NULL) {
		if(pSyncDeltaRCAMSInvstCombPosField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInvstCombPosField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaRCAMSInvstCombPosField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaRCAMSInvstCombPosField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaRCAMSInvstCombPosField_InstrumentID != NULL) {
		if(pSyncDeltaRCAMSInvstCombPosField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInvstCombPosField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaRCAMSInvstCombPosField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaRCAMSInvstCombPosField_InstrumentID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaRCAMSInvstCombPosField_HedgeFlag;

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pSyncDeltaRCAMSInvstCombPosField_PosiDirection;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID != NULL) {
		if(pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pSyncDeltaRCAMSInvstCombPosField_CombInstrumentID = NULL;
	}

	//TThostFtdcLegIDType int
	self->data.LegID = pSyncDeltaRCAMSInvstCombPosField_LegID;

	//TThostFtdcExchangeInstIDType char[81]
	if(pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID != NULL) {
		if(pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pSyncDeltaRCAMSInvstCombPosField_ExchangeInstID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.TotalAmt = pSyncDeltaRCAMSInvstCombPosField_TotalAmt;

	//TThostFtdcMoneyType double
	self->data.ExchMargin = pSyncDeltaRCAMSInvstCombPosField_ExchMargin;
	//TThostFtdcMoneyType double
	self->data.Margin = pSyncDeltaRCAMSInvstCombPosField_Margin;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRCAMSInvstCombPosField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRCAMSInvstCombPosField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_dealloc(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_repr(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:i,s:d,s:d,s:c,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InstrumentID", self->data.InstrumentID 
		, "HedgeFlag", self->data.HedgeFlag
		, "PosiDirection", self->data.PosiDirection
		, "CombInstrumentID", self->data.CombInstrumentID 
		, "LegID", self->data.LegID
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "TotalAmt", self->data.TotalAmt
		, "ExchMargin", self->data.ExchMargin
		, "Margin", self->data.Margin
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInvstCombPosField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_BrokerID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InvestorID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_PosiDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_CombInstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_LegID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegID);
#else 
	return PyInt_FromLong(self->data.LegID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_TotalAmt(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TotalAmt);
#else 
	return PyInt_FromLong(self->data.TotalAmt);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchMargin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_Margin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_BrokerID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InvestorID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_PosiDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
		PyErr_SetString(PyExc_ValueError, "PosiDirection must be less than 1 bytes");
		return -1;
	}
	self->data.PosiDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_CombInstrumentID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_LegID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LegID Expected int"); 
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
    self->data.LegID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_TotalAmt(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected int"); 
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
    self->data.TotalAmt = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchMargin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_Margin(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Margin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Margin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_PosiDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_CombInstrumentID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
	 {(char *)"LegID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_LegID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_LegID, (char *)"LegID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"TotalAmt", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_TotalAmt, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_TotalAmt, (char *)"TotalAmt", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ExchMargin, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_Margin, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_Margin, (char *)"Margin", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSInvstCombPosField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSInvstCombPosField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSInvstCombPosField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSInvstCombPosField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSInvstCombPosField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSInvstCombPosField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInvstCombPosField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInvstCombPosField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSInvstCombPosFieldType);
		return -1;
    }

    return 0;
}
