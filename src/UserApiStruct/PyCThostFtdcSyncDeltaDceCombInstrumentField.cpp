
#include "PyCThostFtdcSyncDeltaDceCombInstrumentField.h"



static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaDceCombInstrumentField *self = (PyCThostFtdcSyncDeltaDceCombInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_init(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CombInstrumentID", "ExchangeID", "ExchangeInstID", "TradeGroupID", "CombHedgeFlag", "CombinationType", "Direction", "ProductID", "Xparameter", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaDceCombInstrumentField_CombInstrumentID = NULL;
	Py_ssize_t pSyncDeltaDceCombInstrumentField_CombInstrumentID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaDceCombInstrumentField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaDceCombInstrumentField_ExchangeID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pSyncDeltaDceCombInstrumentField_ExchangeInstID = NULL;
	Py_ssize_t pSyncDeltaDceCombInstrumentField_ExchangeInstID_len = 0;

	//TThostFtdcTradeGroupIDType int
	int pSyncDeltaDceCombInstrumentField_TradeGroupID = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaDceCombInstrumentField_CombHedgeFlag = 0;

	//TThostFtdcDceCombinationTypeType char
	char pSyncDeltaDceCombInstrumentField_CombinationType = 0;

	//TThostFtdcDirectionType char
	char pSyncDeltaDceCombInstrumentField_Direction = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaDceCombInstrumentField_ProductID = NULL;
	Py_ssize_t pSyncDeltaDceCombInstrumentField_ProductID_len = 0;

	//TThostFtdcDiscountRatioType double
	double pSyncDeltaDceCombInstrumentField_Xparameter = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaDceCombInstrumentField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#icccy#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#icccs#dci", (char **)kwlist
#endif

		, &pSyncDeltaDceCombInstrumentField_CombInstrumentID, &pSyncDeltaDceCombInstrumentField_CombInstrumentID_len
		, &pSyncDeltaDceCombInstrumentField_ExchangeID, &pSyncDeltaDceCombInstrumentField_ExchangeID_len
		, &pSyncDeltaDceCombInstrumentField_ExchangeInstID, &pSyncDeltaDceCombInstrumentField_ExchangeInstID_len
		, &pSyncDeltaDceCombInstrumentField_TradeGroupID
		, &pSyncDeltaDceCombInstrumentField_CombHedgeFlag
		, &pSyncDeltaDceCombInstrumentField_CombinationType
		, &pSyncDeltaDceCombInstrumentField_Direction
		, &pSyncDeltaDceCombInstrumentField_ProductID, &pSyncDeltaDceCombInstrumentField_ProductID_len
		, &pSyncDeltaDceCombInstrumentField_Xparameter
		, &pSyncDeltaDceCombInstrumentField_ActionDirection
		, &pSyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaDceCombInstrumentField_CombInstrumentID != NULL) {
		if(pSyncDeltaDceCombInstrumentField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaDceCombInstrumentField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pSyncDeltaDceCombInstrumentField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pSyncDeltaDceCombInstrumentField_CombInstrumentID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaDceCombInstrumentField_ExchangeID != NULL) {
		if(pSyncDeltaDceCombInstrumentField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaDceCombInstrumentField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaDceCombInstrumentField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaDceCombInstrumentField_ExchangeID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pSyncDeltaDceCombInstrumentField_ExchangeInstID != NULL) {
		if(pSyncDeltaDceCombInstrumentField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pSyncDeltaDceCombInstrumentField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pSyncDeltaDceCombInstrumentField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pSyncDeltaDceCombInstrumentField_ExchangeInstID = NULL;
	}

	//TThostFtdcTradeGroupIDType int
	self->data.TradeGroupID = pSyncDeltaDceCombInstrumentField_TradeGroupID;

	//TThostFtdcHedgeFlagType char
	self->data.CombHedgeFlag = pSyncDeltaDceCombInstrumentField_CombHedgeFlag;

	//TThostFtdcDceCombinationTypeType char
	self->data.CombinationType = pSyncDeltaDceCombInstrumentField_CombinationType;

	//TThostFtdcDirectionType char
	self->data.Direction = pSyncDeltaDceCombInstrumentField_Direction;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaDceCombInstrumentField_ProductID != NULL) {
		if(pSyncDeltaDceCombInstrumentField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaDceCombInstrumentField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pSyncDeltaDceCombInstrumentField_ProductID, sizeof(self->data.ProductID) );
		pSyncDeltaDceCombInstrumentField_ProductID = NULL;
	}

	//TThostFtdcDiscountRatioType double
	self->data.Xparameter = pSyncDeltaDceCombInstrumentField_Xparameter;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaDceCombInstrumentField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaDceCombInstrumentField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaDceCombInstrumentField_dealloc(PyCThostFtdcSyncDeltaDceCombInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_repr(PyCThostFtdcSyncDeltaDceCombInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:c,s:c,s:c,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:c,s:c,s:c,s:s,s:d,s:c,s:i}"
#endif

		, "CombInstrumentID", self->data.CombInstrumentID 
		, "ExchangeID", self->data.ExchangeID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "TradeGroupID", self->data.TradeGroupID
		, "CombHedgeFlag", self->data.CombHedgeFlag
		, "CombinationType", self->data.CombinationType
		, "Direction", self->data.Direction
		, "ProductID", self->data.ProductID 
		, "Xparameter", self->data.Xparameter
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDceCombInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombInstrumentID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeInstID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_TradeGroupID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TradeGroupID);
#else 
	return PyInt_FromLong(self->data.TradeGroupID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombHedgeFlag(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CombHedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombinationType(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CombinationType), 1);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Direction(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ProductID(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Xparameter(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Xparameter);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ActionDirection(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaDceCombInstrumentField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDceCombInstrumentField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombInstrumentID(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeID(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeInstID(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_TradeGroupID(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected int"); 
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
    self->data.TradeGroupID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombHedgeFlag(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.CombHedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombinationType(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombinationType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombinationType)) {
		PyErr_SetString(PyExc_ValueError, "CombinationType must be less than 1 bytes");
		return -1;
	}
	self->data.CombinationType = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Direction(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ProductID(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Xparameter(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Xparameter Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Xparameter = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ActionDirection(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDceCombInstrumentField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDceCombInstrumentField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaDceCombInstrumentField_getset[] = {
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombInstrumentID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"TradeGroupID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_TradeGroupID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_TradeGroupID, (char *)"TradeGroupID", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombHedgeFlag, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"CombinationType", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_CombinationType, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_CombinationType, (char *)"CombinationType", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Direction, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ProductID, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"Xparameter", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_Xparameter, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_Xparameter, (char *)"Xparameter", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaDceCombInstrumentField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaDceCombInstrumentField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaDceCombInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaDceCombInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaDceCombInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaDceCombInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaDceCombInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaDceCombInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaDceCombInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaDceCombInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaDceCombInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaDceCombInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaDceCombInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaDceCombInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaDceCombInstrumentField", (PyObject *)&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaDceCombInstrumentField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaDceCombInstrumentFieldType);
		return -1;
    }

    return 0;
}
