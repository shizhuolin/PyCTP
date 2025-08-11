
#include "PyCThostFtdcMMInstrumentCommissionRateField.h"



static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMMInstrumentCommissionRateField *self = (PyCThostFtdcMMInstrumentCommissionRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMMInstrumentCommissionRateField_init(PyCThostFtdcMMInstrumentCommissionRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pMMInstrumentCommissionRateField_reserve1 = NULL;
	Py_ssize_t pMMInstrumentCommissionRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pMMInstrumentCommissionRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pMMInstrumentCommissionRateField_BrokerID = NULL;
	Py_ssize_t pMMInstrumentCommissionRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pMMInstrumentCommissionRateField_InvestorID = NULL;
	Py_ssize_t pMMInstrumentCommissionRateField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pMMInstrumentCommissionRateField_OpenRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pMMInstrumentCommissionRateField_OpenRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pMMInstrumentCommissionRateField_CloseRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pMMInstrumentCommissionRateField_CloseRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pMMInstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pMMInstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pMMInstrumentCommissionRateField_InstrumentID = NULL;
	Py_ssize_t pMMInstrumentCommissionRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddds#", (char **)kwlist
#endif

		, &pMMInstrumentCommissionRateField_reserve1, &pMMInstrumentCommissionRateField_reserve1_len
		, &pMMInstrumentCommissionRateField_InvestorRange
		, &pMMInstrumentCommissionRateField_BrokerID, &pMMInstrumentCommissionRateField_BrokerID_len
		, &pMMInstrumentCommissionRateField_InvestorID, &pMMInstrumentCommissionRateField_InvestorID_len
		, &pMMInstrumentCommissionRateField_OpenRatioByMoney
		, &pMMInstrumentCommissionRateField_OpenRatioByVolume
		, &pMMInstrumentCommissionRateField_CloseRatioByMoney
		, &pMMInstrumentCommissionRateField_CloseRatioByVolume
		, &pMMInstrumentCommissionRateField_CloseTodayRatioByMoney
		, &pMMInstrumentCommissionRateField_CloseTodayRatioByVolume
		, &pMMInstrumentCommissionRateField_InstrumentID, &pMMInstrumentCommissionRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pMMInstrumentCommissionRateField_reserve1 != NULL) {
		if(pMMInstrumentCommissionRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pMMInstrumentCommissionRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pMMInstrumentCommissionRateField_reserve1, sizeof(self->data.reserve1) );
		pMMInstrumentCommissionRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pMMInstrumentCommissionRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pMMInstrumentCommissionRateField_BrokerID != NULL) {
		if(pMMInstrumentCommissionRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pMMInstrumentCommissionRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pMMInstrumentCommissionRateField_BrokerID, sizeof(self->data.BrokerID) );
		pMMInstrumentCommissionRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pMMInstrumentCommissionRateField_InvestorID != NULL) {
		if(pMMInstrumentCommissionRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pMMInstrumentCommissionRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pMMInstrumentCommissionRateField_InvestorID, sizeof(self->data.InvestorID) );
		pMMInstrumentCommissionRateField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OpenRatioByMoney = pMMInstrumentCommissionRateField_OpenRatioByMoney;
	//TThostFtdcRatioType double
	self->data.OpenRatioByVolume = pMMInstrumentCommissionRateField_OpenRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseRatioByMoney = pMMInstrumentCommissionRateField_CloseRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseRatioByVolume = pMMInstrumentCommissionRateField_CloseRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByMoney = pMMInstrumentCommissionRateField_CloseTodayRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByVolume = pMMInstrumentCommissionRateField_CloseTodayRatioByVolume;
	//TThostFtdcInstrumentIDType char[81]
	if(pMMInstrumentCommissionRateField_InstrumentID != NULL) {
		if(pMMInstrumentCommissionRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pMMInstrumentCommissionRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pMMInstrumentCommissionRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pMMInstrumentCommissionRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcMMInstrumentCommissionRateField_dealloc(PyCThostFtdcMMInstrumentCommissionRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_repr(PyCThostFtdcMMInstrumentCommissionRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OpenRatioByMoney", self->data.OpenRatioByMoney
		, "OpenRatioByVolume", self->data.OpenRatioByVolume
		, "CloseRatioByMoney", self->data.CloseRatioByMoney
		, "CloseRatioByVolume", self->data.CloseRatioByVolume
		, "CloseTodayRatioByMoney", self->data.CloseTodayRatioByMoney
		, "CloseTodayRatioByVolume", self->data.CloseTodayRatioByVolume
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMMInstrumentCommissionRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_reserve1(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_InvestorRange(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_BrokerID(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_InvestorID(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_OpenRatioByMoney(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_OpenRatioByVolume(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_CloseRatioByMoney(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_CloseRatioByVolume(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_CloseTodayRatioByMoney(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_CloseTodayRatioByVolume(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

static PyObject *PyCThostFtdcMMInstrumentCommissionRateField_get_InstrumentID(PyCThostFtdcMMInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcMMInstrumentCommissionRateField_set_reserve1(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMInstrumentCommissionRateField_set_InvestorRange(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMInstrumentCommissionRateField_set_BrokerID(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMInstrumentCommissionRateField_set_InvestorID(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMInstrumentCommissionRateField_set_OpenRatioByMoney(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcMMInstrumentCommissionRateField_set_OpenRatioByVolume(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcMMInstrumentCommissionRateField_set_CloseRatioByMoney(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcMMInstrumentCommissionRateField_set_CloseRatioByVolume(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcMMInstrumentCommissionRateField_set_CloseTodayRatioByMoney(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcMMInstrumentCommissionRateField_set_CloseTodayRatioByVolume(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcMMInstrumentCommissionRateField_set_InstrumentID(PyCThostFtdcMMInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcMMInstrumentCommissionRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_reserve1, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_InvestorRange, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_BrokerID, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_InvestorID, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
	 {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
	 {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
	 {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
	 {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
	 {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcMMInstrumentCommissionRateField_get_InstrumentID, (setter)PyCThostFtdcMMInstrumentCommissionRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMMInstrumentCommissionRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMMInstrumentCommissionRateField",	/* tp_name */
	sizeof(PyCThostFtdcMMInstrumentCommissionRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMMInstrumentCommissionRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMMInstrumentCommissionRateField_repr,   /* tp_repr */
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
	"CThostFtdcMMInstrumentCommissionRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMMInstrumentCommissionRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMMInstrumentCommissionRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMMInstrumentCommissionRateField_new,       /* tp_new */
};

int PyCThostFtdcMMInstrumentCommissionRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMMInstrumentCommissionRateField  */
	if (PyType_Ready(&PyCThostFtdcMMInstrumentCommissionRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMMInstrumentCommissionRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMMInstrumentCommissionRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMMInstrumentCommissionRateField", (PyObject *)&PyCThostFtdcMMInstrumentCommissionRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMMInstrumentCommissionRateField to module");
        Py_DECREF(&PyCThostFtdcMMInstrumentCommissionRateFieldType);
		return -1;
    }

    return 0;
}
