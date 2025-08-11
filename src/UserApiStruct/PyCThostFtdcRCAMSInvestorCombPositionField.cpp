
#include "PyCThostFtdcRCAMSInvestorCombPositionField.h"



static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSInvestorCombPositionField *self = (PyCThostFtdcRCAMSInvestorCombPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSInvestorCombPositionField_init(PyCThostFtdcRCAMSInvestorCombPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "HedgeFlag", "PosiDirection", "CombInstrumentID", "LegID", "ExchangeInstID", "TotalAmt", "ExchMargin", "Margin",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pRCAMSInvestorCombPositionField_ExchangeID = NULL;
	Py_ssize_t pRCAMSInvestorCombPositionField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRCAMSInvestorCombPositionField_BrokerID = NULL;
	Py_ssize_t pRCAMSInvestorCombPositionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pRCAMSInvestorCombPositionField_InvestorID = NULL;
	Py_ssize_t pRCAMSInvestorCombPositionField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRCAMSInvestorCombPositionField_InstrumentID = NULL;
	Py_ssize_t pRCAMSInvestorCombPositionField_InstrumentID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pRCAMSInvestorCombPositionField_HedgeFlag = 0;

	//TThostFtdcPosiDirectionType char
	char pRCAMSInvestorCombPositionField_PosiDirection = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
	Py_ssize_t pRCAMSInvestorCombPositionField_CombInstrumentID_len = 0;

	//TThostFtdcLegIDType int
	int pRCAMSInvestorCombPositionField_LegID = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pRCAMSInvestorCombPositionField_ExchangeInstID = NULL;
	Py_ssize_t pRCAMSInvestorCombPositionField_ExchangeInstID_len = 0;

	//TThostFtdcVolumeType int
	int pRCAMSInvestorCombPositionField_TotalAmt = 0;

	//TThostFtdcMoneyType double
	double pRCAMSInvestorCombPositionField_ExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pRCAMSInvestorCombPositionField_Margin = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ccy#iy#idd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ccs#is#idd", (char **)kwlist
#endif

		, &pRCAMSInvestorCombPositionField_ExchangeID, &pRCAMSInvestorCombPositionField_ExchangeID_len
		, &pRCAMSInvestorCombPositionField_BrokerID, &pRCAMSInvestorCombPositionField_BrokerID_len
		, &pRCAMSInvestorCombPositionField_InvestorID, &pRCAMSInvestorCombPositionField_InvestorID_len
		, &pRCAMSInvestorCombPositionField_InstrumentID, &pRCAMSInvestorCombPositionField_InstrumentID_len
		, &pRCAMSInvestorCombPositionField_HedgeFlag
		, &pRCAMSInvestorCombPositionField_PosiDirection
		, &pRCAMSInvestorCombPositionField_CombInstrumentID, &pRCAMSInvestorCombPositionField_CombInstrumentID_len
		, &pRCAMSInvestorCombPositionField_LegID
		, &pRCAMSInvestorCombPositionField_ExchangeInstID, &pRCAMSInvestorCombPositionField_ExchangeInstID_len
		, &pRCAMSInvestorCombPositionField_TotalAmt
		, &pRCAMSInvestorCombPositionField_ExchMargin
		, &pRCAMSInvestorCombPositionField_Margin


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pRCAMSInvestorCombPositionField_ExchangeID != NULL) {
		if(pRCAMSInvestorCombPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRCAMSInvestorCombPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRCAMSInvestorCombPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRCAMSInvestorCombPositionField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRCAMSInvestorCombPositionField_BrokerID != NULL) {
		if(pRCAMSInvestorCombPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRCAMSInvestorCombPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRCAMSInvestorCombPositionField_BrokerID, sizeof(self->data.BrokerID) );
		pRCAMSInvestorCombPositionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pRCAMSInvestorCombPositionField_InvestorID != NULL) {
		if(pRCAMSInvestorCombPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pRCAMSInvestorCombPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pRCAMSInvestorCombPositionField_InvestorID, sizeof(self->data.InvestorID) );
		pRCAMSInvestorCombPositionField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pRCAMSInvestorCombPositionField_InstrumentID != NULL) {
		if(pRCAMSInvestorCombPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pRCAMSInvestorCombPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pRCAMSInvestorCombPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pRCAMSInvestorCombPositionField_InstrumentID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pRCAMSInvestorCombPositionField_HedgeFlag;

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pRCAMSInvestorCombPositionField_PosiDirection;

	//TThostFtdcInstrumentIDType char[81]
	if(pRCAMSInvestorCombPositionField_CombInstrumentID != NULL) {
		if(pRCAMSInvestorCombPositionField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pRCAMSInvestorCombPositionField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pRCAMSInvestorCombPositionField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pRCAMSInvestorCombPositionField_CombInstrumentID = NULL;
	}

	//TThostFtdcLegIDType int
	self->data.LegID = pRCAMSInvestorCombPositionField_LegID;

	//TThostFtdcExchangeInstIDType char[81]
	if(pRCAMSInvestorCombPositionField_ExchangeInstID != NULL) {
		if(pRCAMSInvestorCombPositionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pRCAMSInvestorCombPositionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pRCAMSInvestorCombPositionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pRCAMSInvestorCombPositionField_ExchangeInstID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.TotalAmt = pRCAMSInvestorCombPositionField_TotalAmt;

	//TThostFtdcMoneyType double
	self->data.ExchMargin = pRCAMSInvestorCombPositionField_ExchMargin;
	//TThostFtdcMoneyType double
	self->data.Margin = pRCAMSInvestorCombPositionField_Margin;


    return 0;
}

static void PyCThostFtdcRCAMSInvestorCombPositionField_dealloc(PyCThostFtdcRCAMSInvestorCombPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_repr(PyCThostFtdcRCAMSInvestorCombPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:i,s:d,s:d}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInvestorCombPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_BrokerID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_InvestorID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_InstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_HedgeFlag(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_PosiDirection(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_CombInstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_LegID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegID);
#else 
	return PyInt_FromLong(self->data.LegID);
#endif 
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeInstID(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_TotalAmt(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TotalAmt);
#else 
	return PyInt_FromLong(self->data.TotalAmt);
#endif 
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchMargin(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcRCAMSInvestorCombPositionField_get_Margin(PyCThostFtdcRCAMSInvestorCombPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeID(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_BrokerID(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_InvestorID(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_InstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_HedgeFlag(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_PosiDirection(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_CombInstrumentID(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_LegID(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeInstID(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_TotalAmt(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchMargin(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInvestorCombPositionField_set_Margin(PyCThostFtdcRCAMSInvestorCombPositionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRCAMSInvestorCombPositionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_BrokerID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_InvestorID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_InstrumentID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_HedgeFlag, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_PosiDirection, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_CombInstrumentID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
	 {(char *)"LegID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_LegID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_LegID, (char *)"LegID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchangeInstID, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"TotalAmt", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_TotalAmt, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_TotalAmt, (char *)"TotalAmt", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_ExchMargin, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcRCAMSInvestorCombPositionField_get_Margin, (setter)PyCThostFtdcRCAMSInvestorCombPositionField_set_Margin, (char *)"Margin", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSInvestorCombPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSInvestorCombPositionField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSInvestorCombPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSInvestorCombPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSInvestorCombPositionField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSInvestorCombPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSInvestorCombPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSInvestorCombPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSInvestorCombPositionField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSInvestorCombPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSInvestorCombPositionField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSInvestorCombPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSInvestorCombPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSInvestorCombPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSInvestorCombPositionField", (PyObject *)&PyCThostFtdcRCAMSInvestorCombPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInvestorCombPositionField to module");
        Py_DECREF(&PyCThostFtdcRCAMSInvestorCombPositionFieldType);
		return -1;
    }

    return 0;
}
