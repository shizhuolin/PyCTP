
#include "PyCThostFtdcInstrumentMarginRateAdjustField.h"



static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInstrumentMarginRateAdjustField *self = (PyCThostFtdcInstrumentMarginRateAdjustField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInstrumentMarginRateAdjustField_init(PyCThostFtdcInstrumentMarginRateAdjustField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "HedgeFlag", "LongMarginRatioByMoney", "LongMarginRatioByVolume", "ShortMarginRatioByMoney", "ShortMarginRatioByVolume", "IsRelative", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInstrumentMarginRateAdjustField_reserve1 = NULL;
	Py_ssize_t pInstrumentMarginRateAdjustField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pInstrumentMarginRateAdjustField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInstrumentMarginRateAdjustField_BrokerID = NULL;
	Py_ssize_t pInstrumentMarginRateAdjustField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInstrumentMarginRateAdjustField_InvestorID = NULL;
	Py_ssize_t pInstrumentMarginRateAdjustField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInstrumentMarginRateAdjustField_HedgeFlag = 0;

	//TThostFtdcRatioType double
	double pInstrumentMarginRateAdjustField_LongMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pInstrumentMarginRateAdjustField_LongMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pInstrumentMarginRateAdjustField_ShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pInstrumentMarginRateAdjustField_ShortMarginRatioByVolume = 0.0;

	//TThostFtdcBoolType int
	int pInstrumentMarginRateAdjustField_IsRelative = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInstrumentMarginRateAdjustField_InstrumentID = NULL;
	Py_ssize_t pInstrumentMarginRateAdjustField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#cddddiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#cddddis#", (char **)kwlist
#endif

		, &pInstrumentMarginRateAdjustField_reserve1, &pInstrumentMarginRateAdjustField_reserve1_len
		, &pInstrumentMarginRateAdjustField_InvestorRange
		, &pInstrumentMarginRateAdjustField_BrokerID, &pInstrumentMarginRateAdjustField_BrokerID_len
		, &pInstrumentMarginRateAdjustField_InvestorID, &pInstrumentMarginRateAdjustField_InvestorID_len
		, &pInstrumentMarginRateAdjustField_HedgeFlag
		, &pInstrumentMarginRateAdjustField_LongMarginRatioByMoney
		, &pInstrumentMarginRateAdjustField_LongMarginRatioByVolume
		, &pInstrumentMarginRateAdjustField_ShortMarginRatioByMoney
		, &pInstrumentMarginRateAdjustField_ShortMarginRatioByVolume
		, &pInstrumentMarginRateAdjustField_IsRelative
		, &pInstrumentMarginRateAdjustField_InstrumentID, &pInstrumentMarginRateAdjustField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInstrumentMarginRateAdjustField_reserve1 != NULL) {
		if(pInstrumentMarginRateAdjustField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateAdjustField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInstrumentMarginRateAdjustField_reserve1, sizeof(self->data.reserve1) );
		pInstrumentMarginRateAdjustField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInstrumentMarginRateAdjustField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pInstrumentMarginRateAdjustField_BrokerID != NULL) {
		if(pInstrumentMarginRateAdjustField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateAdjustField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInstrumentMarginRateAdjustField_BrokerID, sizeof(self->data.BrokerID) );
		pInstrumentMarginRateAdjustField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInstrumentMarginRateAdjustField_InvestorID != NULL) {
		if(pInstrumentMarginRateAdjustField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateAdjustField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInstrumentMarginRateAdjustField_InvestorID, sizeof(self->data.InvestorID) );
		pInstrumentMarginRateAdjustField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInstrumentMarginRateAdjustField_HedgeFlag;

	//TThostFtdcRatioType double
	self->data.LongMarginRatioByMoney = pInstrumentMarginRateAdjustField_LongMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.LongMarginRatioByVolume = pInstrumentMarginRateAdjustField_LongMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.ShortMarginRatioByMoney = pInstrumentMarginRateAdjustField_ShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.ShortMarginRatioByVolume = pInstrumentMarginRateAdjustField_ShortMarginRatioByVolume;
	//TThostFtdcBoolType int
	self->data.IsRelative = pInstrumentMarginRateAdjustField_IsRelative;

	//TThostFtdcInstrumentIDType char[81]
	if(pInstrumentMarginRateAdjustField_InstrumentID != NULL) {
		if(pInstrumentMarginRateAdjustField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInstrumentMarginRateAdjustField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInstrumentMarginRateAdjustField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInstrumentMarginRateAdjustField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInstrumentMarginRateAdjustField_dealloc(PyCThostFtdcInstrumentMarginRateAdjustField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_repr(PyCThostFtdcInstrumentMarginRateAdjustField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInstrumentMarginRateAdjustField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_reserve1(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorRange(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_BrokerID(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorID(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_HedgeFlag(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongMarginRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_IsRelative(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsRelative);
#else 
	return PyInt_FromLong(self->data.IsRelative);
#endif 
}

static PyObject *PyCThostFtdcInstrumentMarginRateAdjustField_get_InstrumentID(PyCThostFtdcInstrumentMarginRateAdjustField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_reserve1(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorRange(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_BrokerID(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorID(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_HedgeFlag(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByMoney(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByVolume(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_IsRelative(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInstrumentMarginRateAdjustField_set_InstrumentID(PyCThostFtdcInstrumentMarginRateAdjustField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInstrumentMarginRateAdjustField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_reserve1, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorRange, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_BrokerID, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_InvestorID, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_HedgeFlag, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"LongMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByMoney, (char *)"LongMarginRatioByMoney", NULL},
	 {(char *)"LongMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_LongMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_LongMarginRatioByVolume, (char *)"LongMarginRatioByVolume", NULL},
	 {(char *)"ShortMarginRatioByMoney", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByMoney, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByMoney, (char *)"ShortMarginRatioByMoney", NULL},
	 {(char *)"ShortMarginRatioByVolume", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_ShortMarginRatioByVolume, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_ShortMarginRatioByVolume, (char *)"ShortMarginRatioByVolume", NULL},
	 {(char *)"IsRelative", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_IsRelative, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_IsRelative, (char *)"IsRelative", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInstrumentMarginRateAdjustField_get_InstrumentID, (setter)PyCThostFtdcInstrumentMarginRateAdjustField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInstrumentMarginRateAdjustFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInstrumentMarginRateAdjustField",	/* tp_name */
	sizeof(PyCThostFtdcInstrumentMarginRateAdjustField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInstrumentMarginRateAdjustField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInstrumentMarginRateAdjustField_repr,   /* tp_repr */
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
	"CThostFtdcInstrumentMarginRateAdjustField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInstrumentMarginRateAdjustField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInstrumentMarginRateAdjustField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInstrumentMarginRateAdjustField_new,       /* tp_new */
};

int PyCThostFtdcInstrumentMarginRateAdjustFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInstrumentMarginRateAdjustField  */
	if (PyType_Ready(&PyCThostFtdcInstrumentMarginRateAdjustFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInstrumentMarginRateAdjustField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInstrumentMarginRateAdjustFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInstrumentMarginRateAdjustField", (PyObject *)&PyCThostFtdcInstrumentMarginRateAdjustFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInstrumentMarginRateAdjustField to module");
        Py_DECREF(&PyCThostFtdcInstrumentMarginRateAdjustFieldType);
		return -1;
    }

    return 0;
}
