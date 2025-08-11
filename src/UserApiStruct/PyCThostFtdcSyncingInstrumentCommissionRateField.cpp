
#include "PyCThostFtdcSyncingInstrumentCommissionRateField.h"



static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInstrumentCommissionRateField *self = (PyCThostFtdcSyncingInstrumentCommissionRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInstrumentCommissionRateField_init(PyCThostFtdcSyncingInstrumentCommissionRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pSyncingInstrumentCommissionRateField_reserve1 = NULL;
	Py_ssize_t pSyncingInstrumentCommissionRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncingInstrumentCommissionRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingInstrumentCommissionRateField_BrokerID = NULL;
	Py_ssize_t pSyncingInstrumentCommissionRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInstrumentCommissionRateField_InvestorID = NULL;
	Py_ssize_t pSyncingInstrumentCommissionRateField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentCommissionRateField_OpenRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentCommissionRateField_OpenRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentCommissionRateField_CloseRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentCommissionRateField_CloseRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentCommissionRateField_CloseTodayRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentCommissionRateField_CloseTodayRatioByVolume = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncingInstrumentCommissionRateField_InstrumentID = NULL;
	Py_ssize_t pSyncingInstrumentCommissionRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddds#", (char **)kwlist
#endif

		, &pSyncingInstrumentCommissionRateField_reserve1, &pSyncingInstrumentCommissionRateField_reserve1_len
		, &pSyncingInstrumentCommissionRateField_InvestorRange
		, &pSyncingInstrumentCommissionRateField_BrokerID, &pSyncingInstrumentCommissionRateField_BrokerID_len
		, &pSyncingInstrumentCommissionRateField_InvestorID, &pSyncingInstrumentCommissionRateField_InvestorID_len
		, &pSyncingInstrumentCommissionRateField_OpenRatioByMoney
		, &pSyncingInstrumentCommissionRateField_OpenRatioByVolume
		, &pSyncingInstrumentCommissionRateField_CloseRatioByMoney
		, &pSyncingInstrumentCommissionRateField_CloseRatioByVolume
		, &pSyncingInstrumentCommissionRateField_CloseTodayRatioByMoney
		, &pSyncingInstrumentCommissionRateField_CloseTodayRatioByVolume
		, &pSyncingInstrumentCommissionRateField_InstrumentID, &pSyncingInstrumentCommissionRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pSyncingInstrumentCommissionRateField_reserve1 != NULL) {
		if(pSyncingInstrumentCommissionRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pSyncingInstrumentCommissionRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pSyncingInstrumentCommissionRateField_reserve1, sizeof(self->data.reserve1) );
		pSyncingInstrumentCommissionRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncingInstrumentCommissionRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingInstrumentCommissionRateField_BrokerID != NULL) {
		if(pSyncingInstrumentCommissionRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentCommissionRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingInstrumentCommissionRateField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingInstrumentCommissionRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInstrumentCommissionRateField_InvestorID != NULL) {
		if(pSyncingInstrumentCommissionRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentCommissionRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncingInstrumentCommissionRateField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncingInstrumentCommissionRateField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OpenRatioByMoney = pSyncingInstrumentCommissionRateField_OpenRatioByMoney;
	//TThostFtdcRatioType double
	self->data.OpenRatioByVolume = pSyncingInstrumentCommissionRateField_OpenRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseRatioByMoney = pSyncingInstrumentCommissionRateField_CloseRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseRatioByVolume = pSyncingInstrumentCommissionRateField_CloseRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByMoney = pSyncingInstrumentCommissionRateField_CloseTodayRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByVolume = pSyncingInstrumentCommissionRateField_CloseTodayRatioByVolume;
	//TThostFtdcInstrumentIDType char[81]
	if(pSyncingInstrumentCommissionRateField_InstrumentID != NULL) {
		if(pSyncingInstrumentCommissionRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentCommissionRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncingInstrumentCommissionRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncingInstrumentCommissionRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSyncingInstrumentCommissionRateField_dealloc(PyCThostFtdcSyncingInstrumentCommissionRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_repr(PyCThostFtdcSyncingInstrumentCommissionRateField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentCommissionRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_reserve1(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorRange(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_BrokerID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

static PyObject *PyCThostFtdcSyncingInstrumentCommissionRateField_get_InstrumentID(PyCThostFtdcSyncingInstrumentCommissionRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_reserve1(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorRange(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_BrokerID(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorID(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByMoney(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByVolume(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentCommissionRateField_set_InstrumentID(PyCThostFtdcSyncingInstrumentCommissionRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncingInstrumentCommissionRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_reserve1, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorRange, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_BrokerID, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_InvestorID, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
	 {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
	 {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
	 {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
	 {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
	 {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncingInstrumentCommissionRateField_get_InstrumentID, (setter)PyCThostFtdcSyncingInstrumentCommissionRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInstrumentCommissionRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInstrumentCommissionRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInstrumentCommissionRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInstrumentCommissionRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInstrumentCommissionRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInstrumentCommissionRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInstrumentCommissionRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInstrumentCommissionRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInstrumentCommissionRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInstrumentCommissionRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInstrumentCommissionRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInstrumentCommissionRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInstrumentCommissionRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInstrumentCommissionRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentCommissionRateField", (PyObject *)&PyCThostFtdcSyncingInstrumentCommissionRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentCommissionRateField to module");
        Py_DECREF(&PyCThostFtdcSyncingInstrumentCommissionRateFieldType);
		return -1;
    }

    return 0;
}
