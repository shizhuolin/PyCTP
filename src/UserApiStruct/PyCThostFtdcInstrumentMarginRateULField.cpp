
#include "PyCThostFtdcInstrumentMarginRateULField.h"



static PyObject *PyCThostFtdcInstrumentMarginRateULField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentMarginRateULField *self = (PyCThostFtdcInstrumentMarginRateULField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentMarginRateULField_init(PyCThostFtdcInstrumentMarginRateULField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentMarginRateULField_reserve1 = NULL;
	Py_ssize_t pInstrumentMarginRateULField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pInstrumentMarginRateULField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInstrumentMarginRateULField_BrokerID = NULL;
	Py_ssize_t pInstrumentMarginRateULField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInstrumentMarginRateULField_InvestorID = NULL;
	Py_ssize_t pInstrumentMarginRateULField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInstrumentMarginRateULField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pInstrumentMarginRateULField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pInstrumentMarginRateULField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentMarginRateULField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pInstrumentMarginRateULField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentMarginRateULField_InstrumentID = NULL;
	Py_ssize_t pInstrumentMarginRateULField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cdddds#", (char **)kwlist
#endif

		, &pInstrumentMarginRateULField_reserve1, &pInstrumentMarginRateULField_reserve1_len
		, &pInstrumentMarginRateULField_InvestorRange
		, &pInstrumentMarginRateULField_BrokerID, &pInstrumentMarginRateULField_BrokerID_len
		, &pInstrumentMarginRateULField_InvestorID, &pInstrumentMarginRateULField_InvestorID_len
		, &pInstrumentMarginRateULField_HedgeFlag
		, &pInstrumentMarginRateULField_LongMarginRatioByMoney
		, &pInstrumentMarginRateULField_LongMarginRatioByVolume
		, &pInstrumentMarginRateULField_ShortMarginRatioByMoney
		, &pInstrumentMarginRateULField_ShortMarginRatioByVolume
		, &pInstrumentMarginRateULField_InstrumentID, &pInstrumentMarginRateULField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentMarginRateULField_reserve1 != NULL) {
		if(pInstrumentMarginRateULField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateULField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentMarginRateULField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentMarginRateULField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInstrumentMarginRateULField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pInstrumentMarginRateULField_BrokerID != NULL) {
		if(pInstrumentMarginRateULField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateULField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInstrumentMarginRateULField_BrokerID, sizeof(self->data.BrokerID) );
		pInstrumentMarginRateULField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInstrumentMarginRateULField_InvestorID != NULL) {
		if(pInstrumentMarginRateULField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateULField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInstrumentMarginRateULField_InvestorID, sizeof(self->data.InvestorID) );
		pInstrumentMarginRateULField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInstrumentMarginRateULField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pInstrumentMarginRateULField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pInstrumentMarginRateULField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pInstrumentMarginRateULField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pInstrumentMarginRateULField_ShortMarginRatioByVolume;
	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentMarginRateULField_InstrumentID != NULL) {
		if(pInstrumentMarginRateULField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateULField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentMarginRateULField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentMarginRateULField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInstrumentMarginRateULField_dealloc(PyCThostFtdcInstrumentMarginRateULField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_repr(PyCThostFtdcInstrumentMarginRateULField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "HedgeFlag", self->data.HedgeFlag
		, "LongMarginRatioByMoney", self->data.LongMarginRatioByMoney
		, "LongMarginRatioByVolume", self->data.LongMarginRatioByVolume
		, "ShortMarginRatioByMoney", self->data.ShortMarginRatioByMoney
		, "ShortMarginRatioByVolume", self->data.ShortMarginRatioByVolume
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateULField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_reserve1(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_InvestorRange(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_BrokerID(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_InvestorID(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_HedgeFlag(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentMarginRateULField_get_InstrumentID(PyCThostFtdcInstrumentMarginRateULField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcInstrumentMarginRateULField_set_reserve1(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateULField_set_InvestorRange(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
		PyErr_SetString(PyExc_ValueError, "InvestorRange must be less than 1 bytes");
		return -1;
	}
	self->data.InvestorRange = *buf;
	return 0;
}

static int PyCThostFtdcInstrumentMarginRateULField_set_BrokerID(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateULField_set_InvestorID(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcInstrumentMarginRateULField_set_HedgeFlag(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateULField_set_InstrumentID(PyCThostFtdcInstrumentMarginRateULField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInstrumentMarginRateULField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentMarginRateULField_get_reserve1, (setter)PyCThostFtdcInstrumentMarginRateULField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentMarginRateULField_get_InvestorRange, (setter)PyCThostFtdcInstrumentMarginRateULField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentMarginRateULField_get_BrokerID, (setter)PyCThostFtdcInstrumentMarginRateULField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentMarginRateULField_get_InvestorID, (setter)PyCThostFtdcInstrumentMarginRateULField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentMarginRateULField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentMarginRateULField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateULField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateULField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateULField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateULField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentMarginRateULField_get_InstrumentID, (setter)PyCThostFtdcInstrumentMarginRateULField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentMarginRateULFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentMarginRateULField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentMarginRateULField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentMarginRateULField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentMarginRateULField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentMarginRateULField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentMarginRateULField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentMarginRateULField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentMarginRateULField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentMarginRateULFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentMarginRateULField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentMarginRateULFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentMarginRateULField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentMarginRateULFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateULField", (PyObject *)&PyCThostFtdcInstrumentMarginRateULFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateULField to module");
        Py_DECREF(&PyCThostFtdcInstrumentMarginRateULFieldType);
		return -1;
    }

    return 0;
}
