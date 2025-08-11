
#include "PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField.h"



static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self = (PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_init(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "CombProductID", "HedgeFlag", "AdjustValue", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRCAMSSOptAdjParamField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRCAMSSOptAdjParamField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRCAMSSOptAdjParamField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRCAMSSOptAdjParamField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSSOptAdjParamField_CombProductID = NULL;
	Py_ssize_t pSyncDeltaRCAMSSOptAdjParamField_CombProductID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaRCAMSSOptAdjParamField_HedgeFlag = 0;

	//TThostFtdcAdjustValueType double
	double pSyncDeltaRCAMSSOptAdjParamField_AdjustValue = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRCAMSSOptAdjParamField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRCAMSSOptAdjParamField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cdci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cdci", (char **)kwlist
#endif

		, &pSyncDeltaRCAMSSOptAdjParamField_TradingDay, &pSyncDeltaRCAMSSOptAdjParamField_TradingDay_len
		, &pSyncDeltaRCAMSSOptAdjParamField_ExchangeID, &pSyncDeltaRCAMSSOptAdjParamField_ExchangeID_len
		, &pSyncDeltaRCAMSSOptAdjParamField_CombProductID, &pSyncDeltaRCAMSSOptAdjParamField_CombProductID_len
		, &pSyncDeltaRCAMSSOptAdjParamField_HedgeFlag
		, &pSyncDeltaRCAMSSOptAdjParamField_AdjustValue
		, &pSyncDeltaRCAMSSOptAdjParamField_ActionDirection
		, &pSyncDeltaRCAMSSOptAdjParamField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRCAMSSOptAdjParamField_TradingDay != NULL) {
		if(pSyncDeltaRCAMSSOptAdjParamField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSSOptAdjParamField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRCAMSSOptAdjParamField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRCAMSSOptAdjParamField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRCAMSSOptAdjParamField_ExchangeID != NULL) {
		if(pSyncDeltaRCAMSSOptAdjParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSSOptAdjParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRCAMSSOptAdjParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRCAMSSOptAdjParamField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSSOptAdjParamField_CombProductID != NULL) {
		if(pSyncDeltaRCAMSSOptAdjParamField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
			PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSSOptAdjParamField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
			return -1;
		}
		strncpy(self->data.CombProductID, pSyncDeltaRCAMSSOptAdjParamField_CombProductID, sizeof(self->data.CombProductID) );
		pSyncDeltaRCAMSSOptAdjParamField_CombProductID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaRCAMSSOptAdjParamField_HedgeFlag;

	//TThostFtdcAdjustValueType double
	self->data.AdjustValue = pSyncDeltaRCAMSSOptAdjParamField_AdjustValue;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRCAMSSOptAdjParamField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRCAMSSOptAdjParamField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_dealloc(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_repr(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:d,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "CombProductID", self->data.CombProductID 
		, "HedgeFlag", self->data.HedgeFlag
		, "AdjustValue", self->data.AdjustValue
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSSOptAdjParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_CombProductID(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProductID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_AdjustValue(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AdjustValue);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_CombProductID(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
		PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_HedgeFlag(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_AdjustValue(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AdjustValue Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AdjustValue = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"CombProductID", (getter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_CombProductID, (setter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_CombProductID, (char *)"CombProductID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"AdjustValue", (getter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_AdjustValue, (setter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_AdjustValue, (char *)"AdjustValue", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSSOptAdjParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSSOptAdjParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSSOptAdjParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSSOptAdjParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSSOptAdjParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSSOptAdjParamField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSSOptAdjParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSSOptAdjParamFieldType);
		return -1;
    }

    return 0;
}
