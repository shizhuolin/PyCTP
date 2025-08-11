
#include "PyCThostFtdcSyncDeltaSPBMAddOnInterParamField.h"



static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self = (PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_init(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "AddOnInterRateZ2", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaSPBMAddOnInterParamField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaSPBMAddOnInterParamField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPBMAddOnInterParamField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPBMAddOnInterParamField_ExchangeID_len = 0;

	//TThostFtdcSpreadIdType int
	int pSyncDeltaSPBMAddOnInterParamField_SpreadId = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaSPBMAddOnInterParamField_AddOnInterRateZ2 = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_len = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPBMAddOnInterParamField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPBMAddOnInterParamField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#ci", (char **)kwlist
#endif

		, &pSyncDeltaSPBMAddOnInterParamField_TradingDay, &pSyncDeltaSPBMAddOnInterParamField_TradingDay_len
		, &pSyncDeltaSPBMAddOnInterParamField_ExchangeID, &pSyncDeltaSPBMAddOnInterParamField_ExchangeID_len
		, &pSyncDeltaSPBMAddOnInterParamField_SpreadId
		, &pSyncDeltaSPBMAddOnInterParamField_AddOnInterRateZ2
		, &pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode, &pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_len
		, &pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode, &pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_len
		, &pSyncDeltaSPBMAddOnInterParamField_ActionDirection
		, &pSyncDeltaSPBMAddOnInterParamField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaSPBMAddOnInterParamField_TradingDay != NULL) {
		if(pSyncDeltaSPBMAddOnInterParamField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMAddOnInterParamField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaSPBMAddOnInterParamField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaSPBMAddOnInterParamField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPBMAddOnInterParamField_ExchangeID != NULL) {
		if(pSyncDeltaSPBMAddOnInterParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMAddOnInterParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPBMAddOnInterParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPBMAddOnInterParamField_ExchangeID = NULL;
	}

	//TThostFtdcSpreadIdType int
	self->data.SpreadId = pSyncDeltaSPBMAddOnInterParamField_SpreadId;

	//TThostFtdcRatioType double
	self->data.AddOnInterRateZ2 = pSyncDeltaSPBMAddOnInterParamField_AddOnInterRateZ2;
	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode != NULL) {
		if(pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg1ProdFamilyCode, pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
		pSyncDeltaSPBMAddOnInterParamField_Leg1ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode != NULL) {
		if(pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg2ProdFamilyCode, pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
		pSyncDeltaSPBMAddOnInterParamField_Leg2ProdFamilyCode = NULL;
	}

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPBMAddOnInterParamField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPBMAddOnInterParamField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_dealloc(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_repr(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "SpreadId", self->data.SpreadId
		, "AddOnInterRateZ2", self->data.AddOnInterRateZ2
		, "Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode 
		, "Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode 
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPBMAddOnInterParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_TradingDay(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_ExchangeID(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_SpreadId(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SpreadId);
#else 
	return PyInt_FromLong(self->data.SpreadId);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_AddOnInterRateZ2(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnInterRateZ2);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_ActionDirection(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_TradingDay(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_ExchangeID(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_SpreadId(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_AddOnInterRateZ2(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnInterRateZ2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnInterRateZ2 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_Leg1ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_Leg2ProdFamilyCode(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_ActionDirection(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SpreadId", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_SpreadId, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_SpreadId, (char *)"SpreadId", NULL},
	 {(char *)"AddOnInterRateZ2", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_AddOnInterRateZ2, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_AddOnInterRateZ2, (char *)"AddOnInterRateZ2", NULL},
	 {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
	 {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPBMAddOnInterParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPBMAddOnInterParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPBMAddOnInterParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPBMAddOnInterParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPBMAddOnInterParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPBMAddOnInterParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPBMAddOnInterParamField", (PyObject *)&PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPBMAddOnInterParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPBMAddOnInterParamFieldType);
		return -1;
    }

    return 0;
}
