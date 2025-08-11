
#include "PyCThostFtdcSyncDeltaRCAMSInstrParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self = (PyCThostFtdcSyncDeltaRCAMSInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_init(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductID", "HedgeRate", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRCAMSInstrParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRCAMSInstrParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRCAMSInstrParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInstrParameterField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSInstrParameterField_ProductID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInstrParameterField_ProductID_len = 0;

	//TThostFtdcHedgeRateType double
	double pSyncDeltaRCAMSInstrParameterField_HedgeRate = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRCAMSInstrParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#dci", (char **)kwlist
#endif

		, &pSyncDeltaRCAMSInstrParameterField_TradingDay, &pSyncDeltaRCAMSInstrParameterField_TradingDay_len
		, &pSyncDeltaRCAMSInstrParameterField_ExchangeID, &pSyncDeltaRCAMSInstrParameterField_ExchangeID_len
		, &pSyncDeltaRCAMSInstrParameterField_ProductID, &pSyncDeltaRCAMSInstrParameterField_ProductID_len
		, &pSyncDeltaRCAMSInstrParameterField_HedgeRate
		, &pSyncDeltaRCAMSInstrParameterField_ActionDirection
		, &pSyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRCAMSInstrParameterField_TradingDay != NULL) {
		if(pSyncDeltaRCAMSInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRCAMSInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRCAMSInstrParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRCAMSInstrParameterField_ExchangeID != NULL) {
		if(pSyncDeltaRCAMSInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRCAMSInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRCAMSInstrParameterField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSInstrParameterField_ProductID != NULL) {
		if(pSyncDeltaRCAMSInstrParameterField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInstrParameterField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pSyncDeltaRCAMSInstrParameterField_ProductID, sizeof(self->data.ProductID) );
		pSyncDeltaRCAMSInstrParameterField_ProductID = NULL;
	}

	//TThostFtdcHedgeRateType double
	self->data.HedgeRate = pSyncDeltaRCAMSInstrParameterField_HedgeRate;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRCAMSInstrParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRCAMSInstrParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSInstrParameterField_dealloc(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_repr(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 
		, "HedgeRate", self->data.HedgeRate
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ProductID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_HedgeRate(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HedgeRate);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInstrParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ProductID(PyCThostFtdcSyncDeltaRCAMSInstrParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_HedgeRate(PyCThostFtdcSyncDeltaRCAMSInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInstrParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInstrParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ProductID, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"HedgeRate", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_HedgeRate, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_HedgeRate, (char *)"HedgeRate", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInstrParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSInstrParameterFieldType);
		return -1;
    }

    return 0;
}
