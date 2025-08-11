
#include "PyCThostFtdcSyncDeltaSPBMInterParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMInterParameterField *self = (PyCThostFtdcSyncDeltaSPBMInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_init(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "InterRateZ", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaSPBMInterParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaSPBMInterParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPBMInterParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPBMInterParameterField_ExchangeID_len = 0;

	//TThostFtdcSpreadIdType int
	int pSyncDeltaSPBMInterParameterField_SpreadId = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMInterParameterField_InterRateZ = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPBMInterParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#ci", (char **)kwlist
#endif

		, &pSyncDeltaSPBMInterParameterField_TradingDay, &pSyncDeltaSPBMInterParameterField_TradingDay_len
		, &pSyncDeltaSPBMInterParameterField_ExchangeID, &pSyncDeltaSPBMInterParameterField_ExchangeID_len
		, &pSyncDeltaSPBMInterParameterField_SpreadId
		, &pSyncDeltaSPBMInterParameterField_InterRateZ
		, &pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, &pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len
		, &pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, &pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len
		, &pSyncDeltaSPBMInterParameterField_ActionDirection
		, &pSyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaSPBMInterParameterField_TradingDay != NULL) {
		if(pSyncDeltaSPBMInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaSPBMInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaSPBMInterParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPBMInterParameterField_ExchangeID != NULL) {
		if(pSyncDeltaSPBMInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPBMInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPBMInterParameterField_ExchangeID = NULL;
	}

	//TThostFtdcSpreadIdType int
	self->data.SpreadId = pSyncDeltaSPBMInterParameterField_SpreadId;

	//TThostFtdcRatioType double
	self->data.InterRateZ = pSyncDeltaSPBMInterParameterField_InterRateZ;
	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode != NULL) {
		if(pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg1ProdFamilyCode, pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
		pSyncDeltaSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode != NULL) {
		if(pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg2ProdFamilyCode, pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
		pSyncDeltaSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
	}

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPBMInterParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPBMInterParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMInterParameterField_dealloc(PyCThostFtdcSyncDeltaSPBMInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_repr(PyCThostFtdcSyncDeltaSPBMInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "SpreadId", self->data.SpreadId
		, "InterRateZ", self->data.InterRateZ
		, "Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode 
		, "Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode 
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SpreadId(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SpreadId);
#else 
	return PyInt_FromLong(self->data.SpreadId);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_InterRateZ(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterRateZ);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SpreadId(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected int"); 
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
    self->data.SpreadId = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_InterRateZ(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterRateZ Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterRateZ = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.Leg1ProdFamilyCode, buf, sizeof(self->data.Leg1ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.Leg2ProdFamilyCode, buf, sizeof(self->data.Leg2ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMInterParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaSPBMInterParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SpreadId", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SpreadId, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
	 {(char *)"InterRateZ", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_InterRateZ, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_InterRateZ, (char *)"InterRateZ", NULL},
	 {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
	 {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMInterParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMInterParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMInterParameterField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMInterParameterFieldType);
		return -1;
    }

    return 0;
}
