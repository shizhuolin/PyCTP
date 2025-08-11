
#include "PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField.h"



static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self = (PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_init(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdGroup", "RuleId", "Priority", "HedgeFlag", "CombMargin", "ExchangeInstID", "LegID", "LegInstrumentID", "Direction", "LegMultiple", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRCAMSCombRuleDtlField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombRuleDtlField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRCAMSCombRuleDtlField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombRuleDtlField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSCombRuleDtlField_ProdGroup = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombRuleDtlField_ProdGroup_len = 0;

	//TThostFtdcRuleIdType char[51]
	const char *pSyncDeltaRCAMSCombRuleDtlField_RuleId = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombRuleDtlField_RuleId_len = 0;

	//TThostFtdcRCAMSPriorityType int
	int pSyncDeltaRCAMSCombRuleDtlField_Priority = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaRCAMSCombRuleDtlField_HedgeFlag = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaRCAMSCombRuleDtlField_CombMargin = 0.0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len = 0;

	//TThostFtdcLegIDType int
	int pSyncDeltaRCAMSCombRuleDtlField_LegID = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len = 0;

	//TThostFtdcDirectionType char
	char pSyncDeltaRCAMSCombRuleDtlField_Direction = 0;

	//TThostFtdcLegMultipleType int
	int pSyncDeltaRCAMSCombRuleDtlField_LegMultiple = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRCAMSCombRuleDtlField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icdy#iy#cici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#icds#is#cici", (char **)kwlist
#endif

		, &pSyncDeltaRCAMSCombRuleDtlField_TradingDay, &pSyncDeltaRCAMSCombRuleDtlField_TradingDay_len
		, &pSyncDeltaRCAMSCombRuleDtlField_ExchangeID, &pSyncDeltaRCAMSCombRuleDtlField_ExchangeID_len
		, &pSyncDeltaRCAMSCombRuleDtlField_ProdGroup, &pSyncDeltaRCAMSCombRuleDtlField_ProdGroup_len
		, &pSyncDeltaRCAMSCombRuleDtlField_RuleId, &pSyncDeltaRCAMSCombRuleDtlField_RuleId_len
		, &pSyncDeltaRCAMSCombRuleDtlField_Priority
		, &pSyncDeltaRCAMSCombRuleDtlField_HedgeFlag
		, &pSyncDeltaRCAMSCombRuleDtlField_CombMargin
		, &pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, &pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len
		, &pSyncDeltaRCAMSCombRuleDtlField_LegID
		, &pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, &pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len
		, &pSyncDeltaRCAMSCombRuleDtlField_Direction
		, &pSyncDeltaRCAMSCombRuleDtlField_LegMultiple
		, &pSyncDeltaRCAMSCombRuleDtlField_ActionDirection
		, &pSyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRCAMSCombRuleDtlField_TradingDay != NULL) {
		if(pSyncDeltaRCAMSCombRuleDtlField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombRuleDtlField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRCAMSCombRuleDtlField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRCAMSCombRuleDtlField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRCAMSCombRuleDtlField_ExchangeID != NULL) {
		if(pSyncDeltaRCAMSCombRuleDtlField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombRuleDtlField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRCAMSCombRuleDtlField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRCAMSCombRuleDtlField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSCombRuleDtlField_ProdGroup != NULL) {
		if(pSyncDeltaRCAMSCombRuleDtlField_ProdGroup_len > (Py_ssize_t)sizeof(self->data.ProdGroup)) {
			PyErr_Format(PyExc_ValueError, "ProdGroup too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombRuleDtlField_ProdGroup_len, (Py_ssize_t)sizeof(self->data.ProdGroup));
			return -1;
		}
		strncpy(self->data.ProdGroup, pSyncDeltaRCAMSCombRuleDtlField_ProdGroup, sizeof(self->data.ProdGroup) );
		pSyncDeltaRCAMSCombRuleDtlField_ProdGroup = NULL;
	}

	//TThostFtdcRuleIdType char[51]
	if(pSyncDeltaRCAMSCombRuleDtlField_RuleId != NULL) {
		if(pSyncDeltaRCAMSCombRuleDtlField_RuleId_len > (Py_ssize_t)sizeof(self->data.RuleId)) {
			PyErr_Format(PyExc_ValueError, "RuleId too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombRuleDtlField_RuleId_len, (Py_ssize_t)sizeof(self->data.RuleId));
			return -1;
		}
		strncpy(self->data.RuleId, pSyncDeltaRCAMSCombRuleDtlField_RuleId, sizeof(self->data.RuleId) );
		pSyncDeltaRCAMSCombRuleDtlField_RuleId = NULL;
	}

	//TThostFtdcRCAMSPriorityType int
	self->data.Priority = pSyncDeltaRCAMSCombRuleDtlField_Priority;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaRCAMSCombRuleDtlField_HedgeFlag;

	//TThostFtdcMoneyType double
	self->data.CombMargin = pSyncDeltaRCAMSCombRuleDtlField_CombMargin;
	//TThostFtdcExchangeInstIDType char[81]
	if(pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID != NULL) {
		if(pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pSyncDeltaRCAMSCombRuleDtlField_ExchangeInstID = NULL;
	}

	//TThostFtdcLegIDType int
	self->data.LegID = pSyncDeltaRCAMSCombRuleDtlField_LegID;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID != NULL) {
		if(pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "LegInstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID_len, (Py_ssize_t)sizeof(self->data.LegInstrumentID));
			return -1;
		}
		strncpy(self->data.LegInstrumentID, pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID, sizeof(self->data.LegInstrumentID) );
		pSyncDeltaRCAMSCombRuleDtlField_LegInstrumentID = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pSyncDeltaRCAMSCombRuleDtlField_Direction;

	//TThostFtdcLegMultipleType int
	self->data.LegMultiple = pSyncDeltaRCAMSCombRuleDtlField_LegMultiple;

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRCAMSCombRuleDtlField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRCAMSCombRuleDtlField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_dealloc(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_repr(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:y,s:i,s:y,s:c,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:d,s:s,s:i,s:s,s:c,s:i,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProdGroup", self->data.ProdGroup 
		, "RuleId", self->data.RuleId 
		, "Priority", self->data.Priority
		, "HedgeFlag", self->data.HedgeFlag
		, "CombMargin", self->data.CombMargin
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "LegID", self->data.LegID
		, "LegInstrumentID", self->data.LegInstrumentID 
		, "Direction", self->data.Direction
		, "LegMultiple", self->data.LegMultiple
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombRuleDtlField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ProdGroup(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdGroup);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_RuleId(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.RuleId);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Priority(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Priority);
#else 
	return PyInt_FromLong(self->data.Priority);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_CombMargin(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CombMargin);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegID);
#else 
	return PyInt_FromLong(self->data.LegID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegInstrumentID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.LegInstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Direction(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegMultiple(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegMultiple);
#else 
	return PyInt_FromLong(self->data.LegMultiple);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ProdGroup(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProdGroup Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProdGroup)) {
		PyErr_SetString(PyExc_ValueError, "ProdGroup must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProdGroup, buf, sizeof(self->data.ProdGroup));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_RuleId(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RuleId Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RuleId)) {
		PyErr_SetString(PyExc_ValueError, "RuleId must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.RuleId, buf, sizeof(self->data.RuleId));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Priority(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Priority Expected int"); 
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
    self->data.Priority = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_CombMargin(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CombMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeInstID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegInstrumentID(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LegInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LegInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "LegInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.LegInstrumentID, buf, sizeof(self->data.LegInstrumentID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Direction(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
		PyErr_SetString(PyExc_ValueError, "Direction must be less than 1 bytes");
		return -1;
	}
	self->data.Direction = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegMultiple(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected int"); 
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
    self->data.LegMultiple = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProdGroup", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ProdGroup, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ProdGroup, (char *)"ProdGroup", NULL},
	 {(char *)"RuleId", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_RuleId, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_RuleId, (char *)"RuleId", NULL},
	 {(char *)"Priority", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Priority, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Priority, (char *)"Priority", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"CombMargin", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_CombMargin, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_CombMargin, (char *)"CombMargin", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"LegID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegID, (char *)"LegID", NULL},
	 {(char *)"LegInstrumentID", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegInstrumentID, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegInstrumentID, (char *)"LegInstrumentID", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_Direction, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"LegMultiple", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_LegMultiple, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_LegMultiple, (char *)"LegMultiple", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSCombRuleDtlField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSCombRuleDtlField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSCombRuleDtlField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSCombRuleDtlField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSCombRuleDtlField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSCombRuleDtlField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSCombRuleDtlField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSCombRuleDtlFieldType);
		return -1;
    }

    return 0;
}
