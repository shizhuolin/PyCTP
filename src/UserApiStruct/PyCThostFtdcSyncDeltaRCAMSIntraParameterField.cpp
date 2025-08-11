
#include "PyCThostFtdcSyncDeltaRCAMSIntraParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self = (PyCThostFtdcSyncDeltaRCAMSIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_init(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "CombProductID", "HedgeRate", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRCAMSIntraParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRCAMSIntraParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRCAMSIntraParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRCAMSIntraParameterField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSIntraParameterField_CombProductID = NULL;
	Py_ssize_t pSyncDeltaRCAMSIntraParameterField_CombProductID_len = 0;

	//TThostFtdcHedgeRateType double
	double pSyncDeltaRCAMSIntraParameterField_HedgeRate = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRCAMSIntraParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dci", (char **)kwlist
#endif

		, &pSyncDeltaRCAMSIntraParameterField_TradingDay, &pSyncDeltaRCAMSIntraParameterField_TradingDay_len
		, &pSyncDeltaRCAMSIntraParameterField_ExchangeID, &pSyncDeltaRCAMSIntraParameterField_ExchangeID_len
		, &pSyncDeltaRCAMSIntraParameterField_CombProductID, &pSyncDeltaRCAMSIntraParameterField_CombProductID_len
		, &pSyncDeltaRCAMSIntraParameterField_HedgeRate
		, &pSyncDeltaRCAMSIntraParameterField_ActionDirection
		, &pSyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRCAMSIntraParameterField_TradingDay != NULL) {
		if(pSyncDeltaRCAMSIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRCAMSIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRCAMSIntraParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRCAMSIntraParameterField_ExchangeID != NULL) {
		if(pSyncDeltaRCAMSIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRCAMSIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRCAMSIntraParameterField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSIntraParameterField_CombProductID != NULL) {
		if(pSyncDeltaRCAMSIntraParameterField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
			PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSIntraParameterField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
			return -1;
		}
		strncpy(self->data.CombProductID, pSyncDeltaRCAMSIntraParameterField_CombProductID, sizeof(self->data.CombProductID) );
		pSyncDeltaRCAMSIntraParameterField_CombProductID = NULL;
	}

	//TThostFtdcHedgeRateType double
	self->data.HedgeRate = pSyncDeltaRCAMSIntraParameterField_HedgeRate;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRCAMSIntraParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRCAMSIntraParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSIntraParameterField_dealloc(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_repr(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "CombProductID", self->data.CombProductID 
		, "HedgeRate", self->data.HedgeRate
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_CombProductID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProductID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_HedgeRate(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HedgeRate);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSIntraParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_CombProductID(PyCThostFtdcSyncDeltaRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_HedgeRate(PyCThostFtdcSyncDeltaRCAMSIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HedgeRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSIntraParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"CombProductID", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_CombProductID, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_CombProductID, (char *)"CombProductID", NULL},
	 {(char *)"HedgeRate", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_HedgeRate, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_HedgeRate, (char *)"HedgeRate", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSIntraParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSIntraParameterFieldType);
		return -1;
    }

    return 0;
}
