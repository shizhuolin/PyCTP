
#include "PyCThostFtdcSyncingInstrumentMarginRateField.h"



static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInstrumentMarginRateField *self = (PyCThostFtdcSyncingInstrumentMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInstrumentMarginRateField_init(PyCThostFtdcSyncingInstrumentMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pSyncingInstrumentMarginRateField_reserve1 = NULL;
	Py_ssize_t pSyncingInstrumentMarginRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pSyncingInstrumentMarginRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingInstrumentMarginRateField_BrokerID = NULL;
	Py_ssize_t pSyncingInstrumentMarginRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInstrumentMarginRateField_InvestorID = NULL;
	Py_ssize_t pSyncingInstrumentMarginRateField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncingInstrumentMarginRateField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentMarginRateField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInstrumentMarginRateField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncingInstrumentMarginRateField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInstrumentMarginRateField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcBoolType int
	int pSyncingInstrumentMarginRateField_IsRelative = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncingInstrumentMarginRateField_InstrumentID = NULL;
	Py_ssize_t pSyncingInstrumentMarginRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddis#", (char **)kwlist
#endif

		, &pSyncingInstrumentMarginRateField_reserve1, &pSyncingInstrumentMarginRateField_reserve1_len
		, &pSyncingInstrumentMarginRateField_InvestorRange
		, &pSyncingInstrumentMarginRateField_BrokerID, &pSyncingInstrumentMarginRateField_BrokerID_len
		, &pSyncingInstrumentMarginRateField_InvestorID, &pSyncingInstrumentMarginRateField_InvestorID_len
		, &pSyncingInstrumentMarginRateField_HedgeFlag
		, &pSyncingInstrumentMarginRateField_LongMarginRatioByMoney
		, &pSyncingInstrumentMarginRateField_LongMarginRatioByVolume
		, &pSyncingInstrumentMarginRateField_ShortMarginRatioByMoney
		, &pSyncingInstrumentMarginRateField_ShortMarginRatioByVolume
		, &pSyncingInstrumentMarginRateField_IsRelative
		, &pSyncingInstrumentMarginRateField_InstrumentID, &pSyncingInstrumentMarginRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pSyncingInstrumentMarginRateField_reserve1 != NULL) {
		if(pSyncingInstrumentMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pSyncingInstrumentMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pSyncingInstrumentMarginRateField_reserve1, sizeof(self->data.reserve1) );
		pSyncingInstrumentMarginRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pSyncingInstrumentMarginRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingInstrumentMarginRateField_BrokerID != NULL) {
		if(pSyncingInstrumentMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingInstrumentMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingInstrumentMarginRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInstrumentMarginRateField_InvestorID != NULL) {
		if(pSyncingInstrumentMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncingInstrumentMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncingInstrumentMarginRateField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncingInstrumentMarginRateField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pSyncingInstrumentMarginRateField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pSyncingInstrumentMarginRateField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pSyncingInstrumentMarginRateField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pSyncingInstrumentMarginRateField_ShortMarginRatioByVolume;
	//TThostFtdcBoolType int
	self->data.IsRelative = pSyncingInstrumentMarginRateField_IsRelative;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncingInstrumentMarginRateField_InstrumentID != NULL) {
		if(pSyncingInstrumentMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncingInstrumentMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncingInstrumentMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncingInstrumentMarginRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSyncingInstrumentMarginRateField_dealloc(PyCThostFtdcSyncingInstrumentMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_repr(PyCThostFtdcSyncingInstrumentMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:d,s:d,s:d,s:d,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:d,s:d,s:d,s:d,s:i,s:s}"
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
		, "IsRelative", self->data.IsRelative
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInstrumentMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_reserve1(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorRange(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_BrokerID(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorID(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_HedgeFlag(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_IsRelative(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsRelative);
#else 
	return PyInt_FromLong(self->data.IsRelative);
#endif 
}

static PyObject *PyCThostFtdcSyncingInstrumentMarginRateField_get_InstrumentID(PyCThostFtdcSyncingInstrumentMarginRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_reserve1(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorRange(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_BrokerID(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorID(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_HedgeFlag(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByMoney(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByVolume(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_IsRelative(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected int"); 
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
    self->data.IsRelative = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncingInstrumentMarginRateField_set_InstrumentID(PyCThostFtdcSyncingInstrumentMarginRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncingInstrumentMarginRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_reserve1, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorRange, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_BrokerID, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_InvestorID, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"IsRelative", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_IsRelative, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_IsRelative, (char *)"IsRelative", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncingInstrumentMarginRateField_get_InstrumentID, (setter)PyCThostFtdcSyncingInstrumentMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInstrumentMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInstrumentMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInstrumentMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInstrumentMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInstrumentMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInstrumentMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInstrumentMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInstrumentMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInstrumentMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInstrumentMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInstrumentMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInstrumentMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInstrumentMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInstrumentMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInstrumentMarginRateField", (PyObject *)&PyCThostFtdcSyncingInstrumentMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInstrumentMarginRateField to module");
        Py_DECREF(&PyCThostFtdcSyncingInstrumentMarginRateFieldType);
		return -1;
    }

    return 0;
}
