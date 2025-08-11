
#include "PyCThostFtdcSyncDeltaRULEIntraParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRULEIntraParameterField *self = (PyCThostFtdcSyncDeltaRULEIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_init(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdFamilyCode", "StdInstrumentID", "StdInstrMargin", "UsualIntraRate", "DeliveryIntraRate", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRULEIntraParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRULEIntraParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRULEIntraParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRULEIntraParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaRULEIntraParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pSyncDeltaRULEIntraParameterField_ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaRULEIntraParameterField_StdInstrumentID = NULL;
	Py_ssize_t pSyncDeltaRULEIntraParameterField_StdInstrumentID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaRULEIntraParameterField_StdInstrMargin = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaRULEIntraParameterField_UsualIntraRate = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaRULEIntraParameterField_DeliveryIntraRate = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRULEIntraParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddci", (char **)kwlist
#endif

		, &pSyncDeltaRULEIntraParameterField_TradingDay, &pSyncDeltaRULEIntraParameterField_TradingDay_len
		, &pSyncDeltaRULEIntraParameterField_ExchangeID, &pSyncDeltaRULEIntraParameterField_ExchangeID_len
		, &pSyncDeltaRULEIntraParameterField_ProdFamilyCode, &pSyncDeltaRULEIntraParameterField_ProdFamilyCode_len
		, &pSyncDeltaRULEIntraParameterField_StdInstrumentID, &pSyncDeltaRULEIntraParameterField_StdInstrumentID_len
		, &pSyncDeltaRULEIntraParameterField_StdInstrMargin
		, &pSyncDeltaRULEIntraParameterField_UsualIntraRate
		, &pSyncDeltaRULEIntraParameterField_DeliveryIntraRate
		, &pSyncDeltaRULEIntraParameterField_ActionDirection
		, &pSyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRULEIntraParameterField_TradingDay != NULL) {
		if(pSyncDeltaRULEIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRULEIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRULEIntraParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRULEIntraParameterField_ExchangeID != NULL) {
		if(pSyncDeltaRULEIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRULEIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRULEIntraParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaRULEIntraParameterField_ProdFamilyCode != NULL) {
		if(pSyncDeltaRULEIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pSyncDeltaRULEIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pSyncDeltaRULEIntraParameterField_ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaRULEIntraParameterField_StdInstrumentID != NULL) {
		if(pSyncDeltaRULEIntraParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaRULEIntraParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
			return -1;
		}
		strncpy(self->data.StdInstrumentID, pSyncDeltaRULEIntraParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
		pSyncDeltaRULEIntraParameterField_StdInstrumentID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.StdInstrMargin = pSyncDeltaRULEIntraParameterField_StdInstrMargin;
	//TThostFtdcRatioType double
	self->data.UsualIntraRate = pSyncDeltaRULEIntraParameterField_UsualIntraRate;
	//TThostFtdcRatioType double
	self->data.DeliveryIntraRate = pSyncDeltaRULEIntraParameterField_DeliveryIntraRate;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRULEIntraParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRULEIntraParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRULEIntraParameterField_dealloc(PyCThostFtdcSyncDeltaRULEIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_repr(PyCThostFtdcSyncDeltaRULEIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "StdInstrumentID", self->data.StdInstrumentID 
		, "StdInstrMargin", self->data.StdInstrMargin
		, "UsualIntraRate", self->data.UsualIntraRate
		, "DeliveryIntraRate", self->data.DeliveryIntraRate
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRULEIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ProdFamilyCode(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrumentID(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.StdInstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrMargin(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StdInstrMargin);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_UsualIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UsualIntraRate);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_DeliveryIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryIntraRate);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRULEIntraParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEIntraParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ProdFamilyCode(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrumentID(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrMargin(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StdInstrMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_UsualIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsualIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UsualIntraRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_DeliveryIntraRate(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryIntraRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRULEIntraParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRULEIntraParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRULEIntraParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"StdInstrumentID", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrumentID, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
	 {(char *)"StdInstrMargin", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_StdInstrMargin, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_StdInstrMargin, (char *)"StdInstrMargin", NULL},
	 {(char *)"UsualIntraRate", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_UsualIntraRate, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_UsualIntraRate, (char *)"UsualIntraRate", NULL},
	 {(char *)"DeliveryIntraRate", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_DeliveryIntraRate, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_DeliveryIntraRate, (char *)"DeliveryIntraRate", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRULEIntraParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRULEIntraParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRULEIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRULEIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRULEIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRULEIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRULEIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRULEIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRULEIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRULEIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRULEIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRULEIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRULEIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRULEIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRULEIntraParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRULEIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRULEIntraParameterFieldType);
		return -1;
    }

    return 0;
}
