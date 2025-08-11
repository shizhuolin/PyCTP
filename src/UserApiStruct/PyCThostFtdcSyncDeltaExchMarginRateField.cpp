
#include "PyCThostFtdcSyncDeltaExchMarginRateField.h"



static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaExchMarginRateField *self = (PyCThostFtdcSyncDeltaExchMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaExchMarginRateField_init(PyCThostFtdcSyncDeltaExchMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InstrumentID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaExchMarginRateField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaExchMarginRateField_BrokerID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaExchMarginRateField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaExchMarginRateField_InstrumentID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaExchMarginRateField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaExchMarginRateField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaExchMarginRateField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaExchMarginRateField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaExchMarginRateField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaExchMarginRateField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaExchMarginRateField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cddddci", (char **)kwlist
#endif

		, &pSyncDeltaExchMarginRateField_BrokerID, &pSyncDeltaExchMarginRateField_BrokerID_len
		, &pSyncDeltaExchMarginRateField_InstrumentID, &pSyncDeltaExchMarginRateField_InstrumentID_len
		, &pSyncDeltaExchMarginRateField_HedgeFlag
		, &pSyncDeltaExchMarginRateField_LongMarginRatioByMoney
		, &pSyncDeltaExchMarginRateField_LongMarginRatioByVolume
		, &pSyncDeltaExchMarginRateField_ShortMarginRatioByMoney
		, &pSyncDeltaExchMarginRateField_ShortMarginRatioByVolume
		, &pSyncDeltaExchMarginRateField_ActionDirection
		, &pSyncDeltaExchMarginRateField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaExchMarginRateField_BrokerID != NULL) {
		if(pSyncDeltaExchMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaExchMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaExchMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaExchMarginRateField_BrokerID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaExchMarginRateField_InstrumentID != NULL) {
		if(pSyncDeltaExchMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaExchMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaExchMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaExchMarginRateField_InstrumentID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaExchMarginRateField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pSyncDeltaExchMarginRateField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pSyncDeltaExchMarginRateField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pSyncDeltaExchMarginRateField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pSyncDeltaExchMarginRateField_ShortMarginRatioByVolume;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaExchMarginRateField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaExchMarginRateField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaExchMarginRateField_dealloc(PyCThostFtdcSyncDeltaExchMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_repr(PyCThostFtdcSyncDeltaExchMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InstrumentID", self->data.InstrumentID 
		, "HedgeFlag", self->data.HedgeFlag
		, "LongMarginRatioByMoney", self->data.LongMarginRatioByMoney
		, "LongMarginRatioByVolume", self->data.LongMarginRatioByVolume
		, "ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney
		, "ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaExchMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_BrokerID(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_InstrumentID(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_HedgeFlag(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_ActionDirection(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaExchMarginRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaExchMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_BrokerID(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_InstrumentID(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_HedgeFlag(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_ActionDirection(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaExchMarginRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaExchMarginRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaExchMarginRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaExchMarginRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaExchMarginRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaExchMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaExchMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaExchMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaExchMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaExchMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaExchMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaExchMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaExchMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaExchMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaExchMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaExchMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaExchMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaExchMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaExchMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaExchMarginRateField", (PyObject *)&PyCThostFtdcSyncDeltaExchMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaExchMarginRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaExchMarginRateFieldType);
		return -1;
    }

    return 0;
}
