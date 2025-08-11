
#include "PyCThostFtdcSPBMFutureParameterField.h"



static PyObject *PyCThostFtdcSPBMFutureParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMFutureParameterField *self = (PyCThostFtdcSPBMFutureParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMFutureParameterField_init(PyCThostFtdcSPBMFutureParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "TimeRange", "MarginRate", "LockRateX", "AddOnRate", "PreSettlementPrice", "AddOnLockRateX2",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSPBMFutureParameterField_TradingDay = NULL;
	Py_ssize_t pSPBMFutureParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSPBMFutureParameterField_ExchangeID = NULL;
	Py_ssize_t pSPBMFutureParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMFutureParameterField_InstrumentID = NULL;
	Py_ssize_t pSPBMFutureParameterField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMFutureParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pSPBMFutureParameterField_ProdFamilyCode_len = 0;

	//TThostFtdcVolumeMultipleType int
	int pSPBMFutureParameterField_Cvf = 0;

	//TThostFtdcTimeRangeType char
	char pSPBMFutureParameterField_TimeRange = 0;

	//TThostFtdcRatioType double
	double pSPBMFutureParameterField_MarginRate = 0.0;

	//TThostFtdcRatioType double
	double pSPBMFutureParameterField_LockRateX = 0.0;

	//TThostFtdcRatioType double
	double pSPBMFutureParameterField_AddOnRate = 0.0;

	//TThostFtdcPriceType double
	double pSPBMFutureParameterField_PreSettlementPrice = 0.0;

	//TThostFtdcRatioType double
	double pSPBMFutureParameterField_AddOnLockRateX2 = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#icddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#icddddd", (char **)kwlist
#endif

		, &pSPBMFutureParameterField_TradingDay, &pSPBMFutureParameterField_TradingDay_len
		, &pSPBMFutureParameterField_ExchangeID, &pSPBMFutureParameterField_ExchangeID_len
		, &pSPBMFutureParameterField_InstrumentID, &pSPBMFutureParameterField_InstrumentID_len
		, &pSPBMFutureParameterField_ProdFamilyCode, &pSPBMFutureParameterField_ProdFamilyCode_len
		, &pSPBMFutureParameterField_Cvf
		, &pSPBMFutureParameterField_TimeRange
		, &pSPBMFutureParameterField_MarginRate
		, &pSPBMFutureParameterField_LockRateX
		, &pSPBMFutureParameterField_AddOnRate
		, &pSPBMFutureParameterField_PreSettlementPrice
		, &pSPBMFutureParameterField_AddOnLockRateX2


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSPBMFutureParameterField_TradingDay != NULL) {
		if(pSPBMFutureParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSPBMFutureParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSPBMFutureParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSPBMFutureParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSPBMFutureParameterField_ExchangeID != NULL) {
		if(pSPBMFutureParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPBMFutureParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPBMFutureParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPBMFutureParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMFutureParameterField_InstrumentID != NULL) {
		if(pSPBMFutureParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSPBMFutureParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSPBMFutureParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSPBMFutureParameterField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMFutureParameterField_ProdFamilyCode != NULL) {
		if(pSPBMFutureParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSPBMFutureParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pSPBMFutureParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pSPBMFutureParameterField_ProdFamilyCode = NULL;
	}

	//TThostFtdcVolumeMultipleType int
	self->data.Cvf = pSPBMFutureParameterField_Cvf;

	//TThostFtdcTimeRangeType char
	self->data.TimeRange = pSPBMFutureParameterField_TimeRange;

	//TThostFtdcRatioType double
	self->data.MarginRate = pSPBMFutureParameterField_MarginRate;
	//TThostFtdcRatioType double
	self->data.LockRateX = pSPBMFutureParameterField_LockRateX;
	//TThostFtdcRatioType double
	self->data.AddOnRate = pSPBMFutureParameterField_AddOnRate;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pSPBMFutureParameterField_PreSettlementPrice;
	//TThostFtdcRatioType double
	self->data.AddOnLockRateX2 = pSPBMFutureParameterField_AddOnLockRateX2;


    return 0;
}

static void PyCThostFtdcSPBMFutureParameterField_dealloc(PyCThostFtdcSPBMFutureParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_repr(PyCThostFtdcSPBMFutureParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c,s:d,s:d,s:d,s:d,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "Cvf", self->data.Cvf
		, "TimeRange", self->data.TimeRange
		, "MarginRate", self->data.MarginRate
		, "LockRateX", self->data.LockRateX
		, "AddOnRate", self->data.AddOnRate
		, "PreSettlementPrice", self->data.PreSettlementPrice
		, "AddOnLockRateX2", self->data.AddOnLockRateX2


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMFutureParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_TradingDay(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_ExchangeID(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_InstrumentID(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_ProdFamilyCode(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_Cvf(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Cvf);
#else 
	return PyInt_FromLong(self->data.Cvf);
#endif 
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_TimeRange(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeRange), 1);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_MarginRate(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRate);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_LockRateX(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LockRateX);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_AddOnRate(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnRate);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_PreSettlementPrice(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcSPBMFutureParameterField_get_AddOnLockRateX2(PyCThostFtdcSPBMFutureParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnLockRateX2);
}

static int PyCThostFtdcSPBMFutureParameterField_set_TradingDay(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMFutureParameterField_set_ExchangeID(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMFutureParameterField_set_InstrumentID(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMFutureParameterField_set_ProdFamilyCode(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMFutureParameterField_set_Cvf(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Cvf Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Cvf Expected int"); 
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
    self->data.Cvf = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSPBMFutureParameterField_set_TimeRange(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TimeRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TimeRange)) {
		PyErr_SetString(PyExc_ValueError, "TimeRange must be less than 1 bytes");
		return -1;
	}
	self->data.TimeRange = *buf;
	return 0;
}

static int PyCThostFtdcSPBMFutureParameterField_set_MarginRate(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRate = buf;
    return 0;
}

static int PyCThostFtdcSPBMFutureParameterField_set_LockRateX(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LockRateX Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LockRateX = buf;
    return 0;
}

static int PyCThostFtdcSPBMFutureParameterField_set_AddOnRate(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnRate = buf;
    return 0;
}

static int PyCThostFtdcSPBMFutureParameterField_set_PreSettlementPrice(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}

static int PyCThostFtdcSPBMFutureParameterField_set_AddOnLockRateX2(PyCThostFtdcSPBMFutureParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnLockRateX2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnLockRateX2 = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcSPBMFutureParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSPBMFutureParameterField_get_TradingDay, (setter)PyCThostFtdcSPBMFutureParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMFutureParameterField_get_ExchangeID, (setter)PyCThostFtdcSPBMFutureParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSPBMFutureParameterField_get_InstrumentID, (setter)PyCThostFtdcSPBMFutureParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSPBMFutureParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSPBMFutureParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"Cvf", (getter)PyCThostFtdcSPBMFutureParameterField_get_Cvf, (setter)PyCThostFtdcSPBMFutureParameterField_set_Cvf, (char *)"Cvf", NULL},
	 {(char *)"TimeRange", (getter)PyCThostFtdcSPBMFutureParameterField_get_TimeRange, (setter)PyCThostFtdcSPBMFutureParameterField_set_TimeRange, (char *)"TimeRange", NULL},
	 {(char *)"MarginRate", (getter)PyCThostFtdcSPBMFutureParameterField_get_MarginRate, (setter)PyCThostFtdcSPBMFutureParameterField_set_MarginRate, (char *)"MarginRate", NULL},
	 {(char *)"LockRateX", (getter)PyCThostFtdcSPBMFutureParameterField_get_LockRateX, (setter)PyCThostFtdcSPBMFutureParameterField_set_LockRateX, (char *)"LockRateX", NULL},
	 {(char *)"AddOnRate", (getter)PyCThostFtdcSPBMFutureParameterField_get_AddOnRate, (setter)PyCThostFtdcSPBMFutureParameterField_set_AddOnRate, (char *)"AddOnRate", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSPBMFutureParameterField_get_PreSettlementPrice, (setter)PyCThostFtdcSPBMFutureParameterField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"AddOnLockRateX2", (getter)PyCThostFtdcSPBMFutureParameterField_get_AddOnLockRateX2, (setter)PyCThostFtdcSPBMFutureParameterField_set_AddOnLockRateX2, (char *)"AddOnLockRateX2", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMFutureParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMFutureParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMFutureParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMFutureParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMFutureParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMFutureParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMFutureParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMFutureParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMFutureParameterField_new,       /* tp_new */
};

int PyCThostFtdcSPBMFutureParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMFutureParameterField  */
	if (PyType_Ready(&PyCThostFtdcSPBMFutureParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMFutureParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMFutureParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMFutureParameterField", (PyObject *)&PyCThostFtdcSPBMFutureParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMFutureParameterField to module");
        Py_DECREF(&PyCThostFtdcSPBMFutureParameterFieldType);
		return -1;
    }

    return 0;
}
