
#include "PyCThostFtdcExchangeMarginRateField.h"



static PyObject *PyCThostFtdcExchangeMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeMarginRateField *self = (PyCThostFtdcExchangeMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeMarginRateField_init(PyCThostFtdcExchangeMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "ExchangeID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pExchangeMarginRateField_BrokerID = NULL;
	Py_ssize_t pExchangeMarginRateField_BrokerID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pExchangeMarginRateField_reserve1 = NULL;
	Py_ssize_t pExchangeMarginRateField_reserve1_len = 0;

	//TThostFtdcHedgeFlagType char
	char pExchangeMarginRateField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pExchangeMarginRateField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pExchangeMarginRateField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pExchangeMarginRateField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pExchangeMarginRateField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeMarginRateField_ExchangeID = NULL;
	Py_ssize_t pExchangeMarginRateField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pExchangeMarginRateField_InstrumentID = NULL;
	Py_ssize_t pExchangeMarginRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cddddy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cdddds#s#", (char **)kwlist
#endif

		, &pExchangeMarginRateField_BrokerID, &pExchangeMarginRateField_BrokerID_len
		, &pExchangeMarginRateField_reserve1, &pExchangeMarginRateField_reserve1_len
		, &pExchangeMarginRateField_HedgeFlag
		, &pExchangeMarginRateField_LongMarginRatioByMoney
		, &pExchangeMarginRateField_LongMarginRatioByVolume
		, &pExchangeMarginRateField_ShortMarginRatioByMoney
		, &pExchangeMarginRateField_ShortMarginRatioByVolume
		, &pExchangeMarginRateField_ExchangeID, &pExchangeMarginRateField_ExchangeID_len
		, &pExchangeMarginRateField_InstrumentID, &pExchangeMarginRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pExchangeMarginRateField_BrokerID != NULL) {
		if(pExchangeMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pExchangeMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pExchangeMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
		pExchangeMarginRateField_BrokerID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pExchangeMarginRateField_reserve1 != NULL) {
		if(pExchangeMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeMarginRateField_reserve1, sizeof(self->data.reserve1) );
		pExchangeMarginRateField_reserve1 = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pExchangeMarginRateField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pExchangeMarginRateField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pExchangeMarginRateField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pExchangeMarginRateField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pExchangeMarginRateField_ShortMarginRatioByVolume;
	//TThostFtdcExchangeIDType char[9]
	if(pExchangeMarginRateField_ExchangeID != NULL) {
		if(pExchangeMarginRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeMarginRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeMarginRateField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeMarginRateField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pExchangeMarginRateField_InstrumentID != NULL) {
		if(pExchangeMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pExchangeMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pExchangeMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pExchangeMarginRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeMarginRateField_dealloc(PyCThostFtdcExchangeMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_repr(PyCThostFtdcExchangeMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "reserve1", self->data.reserve1 
		, "HedgeFlag", self->data.HedgeFlag
		, "LongMarginRatioByMoney", self->data.LongMarginRatioByMoney
		, "LongMarginRatioByVolume", self->data.LongMarginRatioByVolume
		, "ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney
		, "ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_BrokerID(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_reserve1(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_HedgeFlag(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_ExchangeID(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeMarginRateField_get_InstrumentID(PyCThostFtdcExchangeMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcExchangeMarginRateField_set_BrokerID(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeMarginRateField_set_reserve1(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcExchangeMarginRateField_set_HedgeFlag(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeMarginRateField_set_ExchangeID(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeMarginRateField_set_InstrumentID(PyCThostFtdcExchangeMarginRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeMarginRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcExchangeMarginRateField_get_BrokerID, (setter)PyCThostFtdcExchangeMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeMarginRateField_get_reserve1, (setter)PyCThostFtdcExchangeMarginRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcExchangeMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcExchangeMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcExchangeMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcExchangeMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcExchangeMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeMarginRateField_get_ExchangeID, (setter)PyCThostFtdcExchangeMarginRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcExchangeMarginRateField_get_InstrumentID, (setter)PyCThostFtdcExchangeMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcExchangeMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcExchangeMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeMarginRateField", (PyObject *)&PyCThostFtdcExchangeMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeMarginRateField to module");
        Py_DECREF(&PyCThostFtdcExchangeMarginRateFieldType);
		return -1;
    }

    return 0;
}
