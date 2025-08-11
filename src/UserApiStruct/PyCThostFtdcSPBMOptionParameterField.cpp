
#include "PyCThostFtdcSPBMOptionParameterField.h"



static PyObject *PyCThostFtdcSPBMOptionParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMOptionParameterField *self = (PyCThostFtdcSPBMOptionParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMOptionParameterField_init(PyCThostFtdcSPBMOptionParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "InstrumentID", "ProdFamilyCode", "Cvf", "DownPrice", "Delta", "SlimiDelta", "PreSettlementPrice",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSPBMOptionParameterField_TradingDay = NULL;
	Py_ssize_t pSPBMOptionParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSPBMOptionParameterField_ExchangeID = NULL;
	Py_ssize_t pSPBMOptionParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMOptionParameterField_InstrumentID = NULL;
	Py_ssize_t pSPBMOptionParameterField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMOptionParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pSPBMOptionParameterField_ProdFamilyCode_len = 0;

	//TThostFtdcVolumeMultipleType int
	int pSPBMOptionParameterField_Cvf = 0;

	//TThostFtdcPriceType double
	double pSPBMOptionParameterField_DownPrice = 0.0;

	//TThostFtdcDeltaType double
	double pSPBMOptionParameterField_Delta = 0.0;

	//TThostFtdcDeltaType double
	double pSPBMOptionParameterField_SlimiDelta = 0.0;

	//TThostFtdcPriceType double
	double pSPBMOptionParameterField_PreSettlementPrice = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#idddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#idddd", (char **)kwlist
#endif

		, &pSPBMOptionParameterField_TradingDay, &pSPBMOptionParameterField_TradingDay_len
		, &pSPBMOptionParameterField_ExchangeID, &pSPBMOptionParameterField_ExchangeID_len
		, &pSPBMOptionParameterField_InstrumentID, &pSPBMOptionParameterField_InstrumentID_len
		, &pSPBMOptionParameterField_ProdFamilyCode, &pSPBMOptionParameterField_ProdFamilyCode_len
		, &pSPBMOptionParameterField_Cvf
		, &pSPBMOptionParameterField_DownPrice
		, &pSPBMOptionParameterField_Delta
		, &pSPBMOptionParameterField_SlimiDelta
		, &pSPBMOptionParameterField_PreSettlementPrice


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSPBMOptionParameterField_TradingDay != NULL) {
		if(pSPBMOptionParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSPBMOptionParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSPBMOptionParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSPBMOptionParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSPBMOptionParameterField_ExchangeID != NULL) {
		if(pSPBMOptionParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPBMOptionParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPBMOptionParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPBMOptionParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMOptionParameterField_InstrumentID != NULL) {
		if(pSPBMOptionParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSPBMOptionParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSPBMOptionParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSPBMOptionParameterField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMOptionParameterField_ProdFamilyCode != NULL) {
		if(pSPBMOptionParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSPBMOptionParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pSPBMOptionParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pSPBMOptionParameterField_ProdFamilyCode = NULL;
	}

	//TThostFtdcVolumeMultipleType int
	self->data.Cvf = pSPBMOptionParameterField_Cvf;

	//TThostFtdcPriceType double
	self->data.DownPrice = pSPBMOptionParameterField_DownPrice;
	//TThostFtdcDeltaType double
	self->data.Delta = pSPBMOptionParameterField_Delta;
	//TThostFtdcDeltaType double
	self->data.SlimiDelta = pSPBMOptionParameterField_SlimiDelta;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pSPBMOptionParameterField_PreSettlementPrice;


    return 0;
}

static void PyCThostFtdcSPBMOptionParameterField_dealloc(PyCThostFtdcSPBMOptionParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_repr(PyCThostFtdcSPBMOptionParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:d,s:d,s:d,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "Cvf", self->data.Cvf
		, "DownPrice", self->data.DownPrice
		, "Delta", self->data.Delta
		, "SlimiDelta", self->data.SlimiDelta
		, "PreSettlementPrice", self->data.PreSettlementPrice


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMOptionParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_TradingDay(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_ExchangeID(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_InstrumentID(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_ProdFamilyCode(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_Cvf(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Cvf);
#else 
	return PyInt_FromLong(self->data.Cvf);
#endif 
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_DownPrice(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DownPrice);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_Delta(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Delta);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_SlimiDelta(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SlimiDelta);
}

static PyObject *PyCThostFtdcSPBMOptionParameterField_get_PreSettlementPrice(PyCThostFtdcSPBMOptionParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static int PyCThostFtdcSPBMOptionParameterField_set_TradingDay(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMOptionParameterField_set_ExchangeID(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMOptionParameterField_set_InstrumentID(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMOptionParameterField_set_ProdFamilyCode(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMOptionParameterField_set_Cvf(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMOptionParameterField_set_DownPrice(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DownPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DownPrice = buf;
    return 0;
}

static int PyCThostFtdcSPBMOptionParameterField_set_Delta(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Delta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Delta = buf;
    return 0;
}

static int PyCThostFtdcSPBMOptionParameterField_set_SlimiDelta(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SlimiDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SlimiDelta = buf;
    return 0;
}

static int PyCThostFtdcSPBMOptionParameterField_set_PreSettlementPrice(PyCThostFtdcSPBMOptionParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSPBMOptionParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSPBMOptionParameterField_get_TradingDay, (setter)PyCThostFtdcSPBMOptionParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMOptionParameterField_get_ExchangeID, (setter)PyCThostFtdcSPBMOptionParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSPBMOptionParameterField_get_InstrumentID, (setter)PyCThostFtdcSPBMOptionParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcSPBMOptionParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcSPBMOptionParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"Cvf", (getter)PyCThostFtdcSPBMOptionParameterField_get_Cvf, (setter)PyCThostFtdcSPBMOptionParameterField_set_Cvf, (char *)"Cvf", NULL},
	 {(char *)"DownPrice", (getter)PyCThostFtdcSPBMOptionParameterField_get_DownPrice, (setter)PyCThostFtdcSPBMOptionParameterField_set_DownPrice, (char *)"DownPrice", NULL},
	 {(char *)"Delta", (getter)PyCThostFtdcSPBMOptionParameterField_get_Delta, (setter)PyCThostFtdcSPBMOptionParameterField_set_Delta, (char *)"Delta", NULL},
	 {(char *)"SlimiDelta", (getter)PyCThostFtdcSPBMOptionParameterField_get_SlimiDelta, (setter)PyCThostFtdcSPBMOptionParameterField_set_SlimiDelta, (char *)"SlimiDelta", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSPBMOptionParameterField_get_PreSettlementPrice, (setter)PyCThostFtdcSPBMOptionParameterField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMOptionParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMOptionParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMOptionParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMOptionParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMOptionParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMOptionParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMOptionParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMOptionParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMOptionParameterField_new,       /* tp_new */
};

int PyCThostFtdcSPBMOptionParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMOptionParameterField  */
	if (PyType_Ready(&PyCThostFtdcSPBMOptionParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMOptionParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMOptionParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMOptionParameterField", (PyObject *)&PyCThostFtdcSPBMOptionParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMOptionParameterField to module");
        Py_DECREF(&PyCThostFtdcSPBMOptionParameterFieldType);
		return -1;
    }

    return 0;
}
