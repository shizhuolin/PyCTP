
#include "PyCThostFtdcSPBMAddOnInterParameterField.h"



static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMAddOnInterParameterField *self = (PyCThostFtdcSPBMAddOnInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMAddOnInterParameterField_init(PyCThostFtdcSPBMAddOnInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "SpreadId", "AddOnInterRateZ2", "Leg1ProdFamilyCode", "Leg2ProdFamilyCode",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSPBMAddOnInterParameterField_TradingDay = NULL;
	Py_ssize_t pSPBMAddOnInterParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSPBMAddOnInterParameterField_ExchangeID = NULL;
	Py_ssize_t pSPBMAddOnInterParameterField_ExchangeID_len = 0;

	//TThostFtdcSpreadIdType int
	int pSPBMAddOnInterParameterField_SpreadId = 0;

	//TThostFtdcRatioType double
	double pSPBMAddOnInterParameterField_AddOnInterRateZ2 = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
	Py_ssize_t pSPBMAddOnInterParameterField_Leg1ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
	Py_ssize_t pSPBMAddOnInterParameterField_Leg2ProdFamilyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#idy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ids#s#", (char **)kwlist
#endif

		, &pSPBMAddOnInterParameterField_TradingDay, &pSPBMAddOnInterParameterField_TradingDay_len
		, &pSPBMAddOnInterParameterField_ExchangeID, &pSPBMAddOnInterParameterField_ExchangeID_len
		, &pSPBMAddOnInterParameterField_SpreadId
		, &pSPBMAddOnInterParameterField_AddOnInterRateZ2
		, &pSPBMAddOnInterParameterField_Leg1ProdFamilyCode, &pSPBMAddOnInterParameterField_Leg1ProdFamilyCode_len
		, &pSPBMAddOnInterParameterField_Leg2ProdFamilyCode, &pSPBMAddOnInterParameterField_Leg2ProdFamilyCode_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSPBMAddOnInterParameterField_TradingDay != NULL) {
		if(pSPBMAddOnInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSPBMAddOnInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSPBMAddOnInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSPBMAddOnInterParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSPBMAddOnInterParameterField_ExchangeID != NULL) {
		if(pSPBMAddOnInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPBMAddOnInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPBMAddOnInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPBMAddOnInterParameterField_ExchangeID = NULL;
	}

	//TThostFtdcSpreadIdType int
	self->data.SpreadId = pSPBMAddOnInterParameterField_SpreadId;

	//TThostFtdcRatioType double
	self->data.AddOnInterRateZ2 = pSPBMAddOnInterParameterField_AddOnInterRateZ2;
	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMAddOnInterParameterField_Leg1ProdFamilyCode != NULL) {
		if(pSPBMAddOnInterParameterField_Leg1ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg1ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSPBMAddOnInterParameterField_Leg1ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg1ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg1ProdFamilyCode, pSPBMAddOnInterParameterField_Leg1ProdFamilyCode, sizeof(self->data.Leg1ProdFamilyCode) );
		pSPBMAddOnInterParameterField_Leg1ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSPBMAddOnInterParameterField_Leg2ProdFamilyCode != NULL) {
		if(pSPBMAddOnInterParameterField_Leg2ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "Leg2ProdFamilyCode too long: length=%zd (max allowed is %zd)", pSPBMAddOnInterParameterField_Leg2ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.Leg2ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.Leg2ProdFamilyCode, pSPBMAddOnInterParameterField_Leg2ProdFamilyCode, sizeof(self->data.Leg2ProdFamilyCode) );
		pSPBMAddOnInterParameterField_Leg2ProdFamilyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcSPBMAddOnInterParameterField_dealloc(PyCThostFtdcSPBMAddOnInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_repr(PyCThostFtdcSPBMAddOnInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:d,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "SpreadId", self->data.SpreadId
		, "AddOnInterRateZ2", self->data.AddOnInterRateZ2
		, "Leg1ProdFamilyCode", self->data.Leg1ProdFamilyCode 
		, "Leg2ProdFamilyCode", self->data.Leg2ProdFamilyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMAddOnInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_TradingDay(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_ExchangeID(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_SpreadId(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SpreadId);
#else 
	return PyInt_FromLong(self->data.SpreadId);
#endif 
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_AddOnInterRateZ2(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AddOnInterRateZ2);
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_Leg1ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg1ProdFamilyCode);
}

static PyObject *PyCThostFtdcSPBMAddOnInterParameterField_get_Leg2ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.Leg2ProdFamilyCode);
}

static int PyCThostFtdcSPBMAddOnInterParameterField_set_TradingDay(PyCThostFtdcSPBMAddOnInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMAddOnInterParameterField_set_ExchangeID(PyCThostFtdcSPBMAddOnInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMAddOnInterParameterField_set_SpreadId(PyCThostFtdcSPBMAddOnInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMAddOnInterParameterField_set_AddOnInterRateZ2(PyCThostFtdcSPBMAddOnInterParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddOnInterRateZ2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AddOnInterRateZ2 = buf;
    return 0;
}

static int PyCThostFtdcSPBMAddOnInterParameterField_set_Leg1ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMAddOnInterParameterField_set_Leg2ProdFamilyCode(PyCThostFtdcSPBMAddOnInterParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSPBMAddOnInterParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_TradingDay, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SpreadId", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_SpreadId, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_SpreadId, (char *)"SpreadId", NULL},
	 {(char *)"AddOnInterRateZ2", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_AddOnInterRateZ2, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_AddOnInterRateZ2, (char *)"AddOnInterRateZ2", NULL},
	 {(char *)"Leg1ProdFamilyCode", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_Leg1ProdFamilyCode, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_Leg1ProdFamilyCode, (char *)"Leg1ProdFamilyCode", NULL},
	 {(char *)"Leg2ProdFamilyCode", (getter)PyCThostFtdcSPBMAddOnInterParameterField_get_Leg2ProdFamilyCode, (setter)PyCThostFtdcSPBMAddOnInterParameterField_set_Leg2ProdFamilyCode, (char *)"Leg2ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMAddOnInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMAddOnInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMAddOnInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMAddOnInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMAddOnInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMAddOnInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMAddOnInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMAddOnInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMAddOnInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSPBMAddOnInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMAddOnInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSPBMAddOnInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMAddOnInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMAddOnInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMAddOnInterParameterField", (PyObject *)&PyCThostFtdcSPBMAddOnInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMAddOnInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSPBMAddOnInterParameterFieldType);
		return -1;
    }

    return 0;
}
