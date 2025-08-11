
#include "PyCThostFtdcSPBMInterParameterField.h"



static PyObject *PyCThostFtdcSPBMInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMInterParameterField *self = (PyCThostFtdcSPBMInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMInterParameterField_init(PyCThostFtdcSPBMInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "InterRateZ", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSPBMInterParameterField_TradingDay = NULL;
	Py_ssize_t pSPBMInterParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSPBMInterParameterField_ExchangeID = NULL;
	Py_ssize_t pSPBMInterParameterField_ExchangeID_len = 0;

	//TThostFtdcSpreadIdType int
	int pSPBMInterParameterField_SpreadId = 0;

	//TThostFtdcRatioType double
	double pSPBMInterParameterField_InterRateZ = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
	Py_ssize_t pSPBMInterParameterField_Leg1ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
	Py_ssize_t pSPBMInterParameterField_Leg2ProdFamilyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#", (char **)kwlist
#endif

		, &pSPBMInterParameterField_TradingDay, &pSPBMInterParameterField_TradingDay_len
		, &pSPBMInterParameterField_ExchangeID, &pSPBMInterParameterField_ExchangeID_len
		, &pSPBMInterParameterField_SpreadId
		, &pSPBMInterParameterField_InterRateZ
		, &pSPBMInterParameterField_Leg1ProdFamilyCode, &pSPBMInterParameterField_Leg1ProdFamilyCode_len
		, &pSPBMInterParameterField_Leg2ProdFamilyCode, &pSPBMInterParameterField_Leg2ProdFamilyCode_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSPBMInterParameterField_TradingDay != NULL) {
		if(pSPBMInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSPBMInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSPBMInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSPBMInterParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSPBMInterParameterField_ExchangeID != NULL) {
		if(pSPBMInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPBMInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPBMInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPBMInterParameterField_ExchangeID = NULL;
	}

	//TThostFtdcSpreadIdType int
	self->data.SpreadId = pSPBMInterParameterField_SpreadId;

	//TThostFtdcRatioType double
	self->data.InterRateZ = pSPBMInterParameterField_InterRateZ;
	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMInterParameterField_Leg1ProdFamilyCode != NULL) {
		if(pSPBMInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSPBMInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg1ProdFamilyCode, pSPBMInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
		pSPBMInterParameterField_Leg1ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMInterParameterField_Leg2ProdFamilyCode != NULL) {
		if(pSPBMInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSPBMInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg2ProdFamilyCode, pSPBMInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
		pSPBMInterParameterField_Leg2ProdFamilyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcSPBMInterParameterField_dealloc(PyCThostFtdcSPBMInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMInterParameterField_repr(PyCThostFtdcSPBMInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "SpreadId", self->data.SpreadId
		, "InterRateZ", self->data.InterRateZ
		, "Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode 
		, "Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPBMInterParameterField_get_TradingDay(PyCThostFtdcSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSPBMInterParameterField_get_ExchangeID(PyCThostFtdcSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPBMInterParameterField_get_SpreadId(PyCThostFtdcSPBMInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SpreadId);
#else 
	return PyInt_FromLong(self->data.SpreadId);
#endif 
}

static PyObject *PyCThostFtdcSPBMInterParameterField_get_InterRateZ(PyCThostFtdcSPBMInterParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterRateZ);
}

static PyObject *PyCThostFtdcSPBMInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

static PyObject *PyCThostFtdcSPBMInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcSPBMInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

static int PyCThostFtdcSPBMInterParameterField_set_TradingDay(PyCThostFtdcSPBMInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMInterParameterField_set_ExchangeID(PyCThostFtdcSPBMInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMInterParameterField_set_SpreadId(PyCThostFtdcSPBMInterParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SpreadId Expected int"); 
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
    self->data.SpreadId = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSPBMInterParameterField_set_InterRateZ(PyCThostFtdcSPBMInterParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterRateZ Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterRateZ = buf;
    return 0;
}

static int PyCThostFtdcSPBMInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcSPBMInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Leg1ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "Leg1ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.Leg1ProdFamilyCode, buf, sizeof(self->data.Leg1ProdFamilyCode));
	return 0;
}

static int PyCThostFtdcSPBMInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcSPBMInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Leg2ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "Leg2ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.Leg2ProdFamilyCode, buf, sizeof(self->data.Leg2ProdFamilyCode));
	return 0;
}



static PyGetSetDef PyCThostFtdcSPBMInterParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSPBMInterParameterField_get_TradingDay, (setter)PyCThostFtdcSPBMInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSPBMInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SpreadId", (getter)PyCThostFtdcSPBMInterParameterField_get_SpreadId, (setter)PyCThostFtdcSPBMInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
	 {(char *)"InterRateZ", (getter)PyCThostFtdcSPBMInterParameterField_get_InterRateZ, (setter)PyCThostFtdcSPBMInterParameterField_set_InterRateZ, (char *)"InterRateZ", NULL},
	 {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcSPBMInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcSPBMInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
	 {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcSPBMInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcSPBMInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSPBMInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSPBMInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMInterParameterField", (PyObject *)&PyCThostFtdcSPBMInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSPBMInterParameterFieldType);
		return -1;
    }

    return 0;
}
