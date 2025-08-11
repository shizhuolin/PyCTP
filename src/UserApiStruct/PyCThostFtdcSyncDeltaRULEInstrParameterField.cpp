
#include "PyCThostFtdcSyncDeltaRULEInstrParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRULEInstrParameterField *self = (PyCThostFtdcSyncDeltaRULEInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_init(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "InstrumentClass", "StdInstrumentID", "BSpecRatio", "SSpecRatio", "BHedgeRatio", "SHedgeRatio", "BAddOnMargin", "SAddOnMargin", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRULEInstrParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRULEInstrParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRULEInstrParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRULEInstrParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaRULEInstrParameterField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaRULEInstrParameterField_InstrumentID_len = 0;

	//TThostFtdcInstrumentClassType char
	char pSyncDeltaRULEInstrParameterField_InstrumentClass = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaRULEInstrParameterField_StdInstrumentID = NULL;
	Py_ssize_t pSyncDeltaRULEInstrParameterField_StdInstrumentID_len = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaRULEInstrParameterField_BSpecRatio = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaRULEInstrParameterField_SSpecRatio = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaRULEInstrParameterField_BHedgeRatio = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaRULEInstrParameterField_SHedgeRatio = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaRULEInstrParameterField_BAddOnMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaRULEInstrParameterField_SAddOnMargin = 0.0;

	//TThostFtdcCommodityGroupIDType int
	int pSyncDeltaRULEInstrParameterField_CommodityGroupID = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRULEInstrParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#ddddddici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#ddddddici", (char **)kwlist
#endif

		, &pSyncDeltaRULEInstrParameterField_TradingDay, &pSyncDeltaRULEInstrParameterField_TradingDay_len
		, &pSyncDeltaRULEInstrParameterField_ExchangeID, &pSyncDeltaRULEInstrParameterField_ExchangeID_len
		, &pSyncDeltaRULEInstrParameterField_InstrumentID, &pSyncDeltaRULEInstrParameterField_InstrumentID_len
		, &pSyncDeltaRULEInstrParameterField_InstrumentClass
		, &pSyncDeltaRULEInstrParameterField_StdInstrumentID, &pSyncDeltaRULEInstrParameterField_StdInstrumentID_len
		, &pSyncDeltaRULEInstrParameterField_BSpecRatio
		, &pSyncDeltaRULEInstrParameterField_SSpecRatio
		, &pSyncDeltaRULEInstrParameterField_BHedgeRatio
		, &pSyncDeltaRULEInstrParameterField_SHedgeRatio
		, &pSyncDeltaRULEInstrParameterField_BAddOnMargin
		, &pSyncDeltaRULEInstrParameterField_SAddOnMargin
		, &pSyncDeltaRULEInstrParameterField_CommodityGroupID
		, &pSyncDeltaRULEInstrParameterField_ActionDirection
		, &pSyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRULEInstrParameterField_TradingDay != NULL) {
		if(pSyncDeltaRULEInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRULEInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRULEInstrParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRULEInstrParameterField_ExchangeID != NULL) {
		if(pSyncDeltaRULEInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRULEInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRULEInstrParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaRULEInstrParameterField_InstrumentID != NULL) {
		if(pSyncDeltaRULEInstrParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEInstrParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaRULEInstrParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaRULEInstrParameterField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentClassType char
	self->data.InstrumentClass = pSyncDeltaRULEInstrParameterField_InstrumentClass;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaRULEInstrParameterField_StdInstrumentID != NULL) {
		if(pSyncDeltaRULEInstrParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEInstrParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
			return -1;
		}
		strncpy(self->data.StdInstrumentID, pSyncDeltaRULEInstrParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
		pSyncDeltaRULEInstrParameterField_StdInstrumentID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.BSpecRatio = pSyncDeltaRULEInstrParameterField_BSpecRatio;
	//TThostFtdcRatioType double
	self->data.SSpecRatio = pSyncDeltaRULEInstrParameterField_SSpecRatio;
	//TThostFtdcRatioType double
	self->data.BHedgeRatio = pSyncDeltaRULEInstrParameterField_BHedgeRatio;
	//TThostFtdcRatioType double
	self->data.SHedgeRatio = pSyncDeltaRULEInstrParameterField_SHedgeRatio;
	//TThostFtdcMoneyType double
	self->data.BAddOnMargin = pSyncDeltaRULEInstrParameterField_BAddOnMargin;
	//TThostFtdcMoneyType double
	self->data.SAddOnMargin = pSyncDeltaRULEInstrParameterField_SAddOnMargin;
	//TThostFtdcCommodityGroupIDType int
	self->data.CommodityGroupID = pSyncDeltaRULEInstrParameterField_CommodityGroupID;

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRULEInstrParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRULEInstrParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRULEInstrParameterField_dealloc(PyCThostFtdcSyncDeltaRULEInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_repr(PyCThostFtdcSyncDeltaRULEInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "InstrumentClass", self->data.InstrumentClass
		, "StdInstrumentID", self->data.StdInstrumentID 
		, "BSpecRatio", self->data.BSpecRatio
		, "SSpecRatio", self->data.SSpecRatio
		, "BHedgeRatio", self->data.BHedgeRatio
		, "SHedgeRatio", self->data.SHedgeRatio
		, "BAddOnMargin", self->data.BAddOnMargin
		, "SAddOnMargin", self->data.SAddOnMargin
		, "CommodityGroupID", self->data.CommodityGroupID
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentClass(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InstrumentClass), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_StdInstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.StdInstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BSpecRatio);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SSpecRatio);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BHedgeRatio);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SHedgeRatio);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BAddOnMargin);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SAddOnMargin);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_CommodityGroupID(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CommodityGroupID);
#else 
	return PyInt_FromLong(self->data.CommodityGroupID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentClass(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentClass Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentClass)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentClass must be less than 1 bytes");
		return -1;
	}
	self->data.InstrumentClass = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_StdInstrumentID(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.StdInstrumentID, buf, sizeof(self->data.StdInstrumentID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BSpecRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BSpecRatio = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SSpecRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SSpecRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SSpecRatio = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BHedgeRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BHedgeRatio = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SHedgeRatio(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SHedgeRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SHedgeRatio = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BAddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BAddOnMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SAddOnMargin(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SAddOnMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SAddOnMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_CommodityGroupID(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected int"); 
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
    self->data.CommodityGroupID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEInstrParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRULEInstrParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InstrumentClass", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_InstrumentClass, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_InstrumentClass, (char *)"InstrumentClass", NULL},
	 {(char *)"StdInstrumentID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_StdInstrumentID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
	 {(char *)"BSpecRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BSpecRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BSpecRatio, (char *)"BSpecRatio", NULL},
	 {(char *)"SSpecRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SSpecRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SSpecRatio, (char *)"SSpecRatio", NULL},
	 {(char *)"BHedgeRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BHedgeRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BHedgeRatio, (char *)"BHedgeRatio", NULL},
	 {(char *)"SHedgeRatio", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SHedgeRatio, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SHedgeRatio, (char *)"SHedgeRatio", NULL},
	 {(char *)"BAddOnMargin", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_BAddOnMargin, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_BAddOnMargin, (char *)"BAddOnMargin", NULL},
	 {(char *)"SAddOnMargin", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SAddOnMargin, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SAddOnMargin, (char *)"SAddOnMargin", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRULEInstrParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRULEInstrParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRULEInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRULEInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRULEInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRULEInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRULEInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRULEInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRULEInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRULEInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRULEInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRULEInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRULEInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRULEInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEInstrParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRULEInstrParameterFieldType);
		return -1;
    }

    return 0;
}
