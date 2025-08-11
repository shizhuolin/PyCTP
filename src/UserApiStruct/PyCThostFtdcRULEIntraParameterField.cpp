
#include "PyCThostFtdcRULEIntraParameterField.h"



static PyObject *PyCThostFtdcRULEIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRULEIntraParameterField *self = (PyCThostFtdcRULEIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRULEIntraParameterField_init(PyCThostFtdcRULEIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProdFamilyCode", "StdInstrumentID", "StdInstrMargin", "UsualIntraRate", "DeliveryIntraRate",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRULEIntraParameterField_TradingDay = NULL;
	Py_ssize_t pRULEIntraParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRULEIntraParameterField_ExchangeID = NULL;
	Py_ssize_t pRULEIntraParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRULEIntraParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pRULEIntraParameterField_ProdFamilyCode_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRULEIntraParameterField_StdInstrumentID = NULL;
	Py_ssize_t pRULEIntraParameterField_StdInstrumentID_len = 0;

	//TThostFtdcMoneyType double
	double pRULEIntraParameterField_StdInstrMargin = 0.0;

	//TThostFtdcRatioType double
	double pRULEIntraParameterField_UsualIntraRate = 0.0;

	//TThostFtdcRatioType double
	double pRULEIntraParameterField_DeliveryIntraRate = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ddd", (char **)kwlist
#endif

		, &pRULEIntraParameterField_TradingDay, &pRULEIntraParameterField_TradingDay_len
		, &pRULEIntraParameterField_ExchangeID, &pRULEIntraParameterField_ExchangeID_len
		, &pRULEIntraParameterField_ProdFamilyCode, &pRULEIntraParameterField_ProdFamilyCode_len
		, &pRULEIntraParameterField_StdInstrumentID, &pRULEIntraParameterField_StdInstrumentID_len
		, &pRULEIntraParameterField_StdInstrMargin
		, &pRULEIntraParameterField_UsualIntraRate
		, &pRULEIntraParameterField_DeliveryIntraRate


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRULEIntraParameterField_TradingDay != NULL) {
		if(pRULEIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRULEIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRULEIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pRULEIntraParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pRULEIntraParameterField_ExchangeID != NULL) {
		if(pRULEIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRULEIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRULEIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRULEIntraParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pRULEIntraParameterField_ProdFamilyCode != NULL) {
		if(pRULEIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pRULEIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pRULEIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pRULEIntraParameterField_ProdFamilyCode = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pRULEIntraParameterField_StdInstrumentID != NULL) {
		if(pRULEIntraParameterField_StdInstrumentID_len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "StdInstrumentID too long: length=%zd (max allowed is %zd)", pRULEIntraParameterField_StdInstrumentID_len, (Py_ssize_t)sizeof(self->data.StdInstrumentID));
			return -1;
		}
		strncpy(self->data.StdInstrumentID, pRULEIntraParameterField_StdInstrumentID, sizeof(self->data.StdInstrumentID) );
		pRULEIntraParameterField_StdInstrumentID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.StdInstrMargin = pRULEIntraParameterField_StdInstrMargin;
	//TThostFtdcRatioType double
	self->data.UsualIntraRate = pRULEIntraParameterField_UsualIntraRate;
	//TThostFtdcRatioType double
	self->data.DeliveryIntraRate = pRULEIntraParameterField_DeliveryIntraRate;


    return 0;
}

static void PyCThostFtdcRULEIntraParameterField_dealloc(PyCThostFtdcRULEIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_repr(PyCThostFtdcRULEIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "StdInstrumentID", self->data.StdInstrumentID 
		, "StdInstrMargin", self->data.StdInstrMargin
		, "UsualIntraRate", self->data.UsualIntraRate
		, "DeliveryIntraRate", self->data.DeliveryIntraRate


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRULEIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_get_TradingDay(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_get_ExchangeID(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_get_ProdFamilyCode(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_get_StdInstrumentID(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.StdInstrumentID);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_get_StdInstrMargin(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StdInstrMargin);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_get_UsualIntraRate(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UsualIntraRate);
}

static PyObject *PyCThostFtdcRULEIntraParameterField_get_DeliveryIntraRate(PyCThostFtdcRULEIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryIntraRate);
}

static int PyCThostFtdcRULEIntraParameterField_set_TradingDay(PyCThostFtdcRULEIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEIntraParameterField_set_ExchangeID(PyCThostFtdcRULEIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEIntraParameterField_set_ProdFamilyCode(PyCThostFtdcRULEIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRULEIntraParameterField_set_StdInstrumentID(PyCThostFtdcRULEIntraParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StdInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StdInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "StdInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.StdInstrumentID, buf, sizeof(self->data.StdInstrumentID));
	return 0;
}

static int PyCThostFtdcRULEIntraParameterField_set_StdInstrMargin(PyCThostFtdcRULEIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StdInstrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StdInstrMargin = buf;
    return 0;
}

static int PyCThostFtdcRULEIntraParameterField_set_UsualIntraRate(PyCThostFtdcRULEIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsualIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UsualIntraRate = buf;
    return 0;
}

static int PyCThostFtdcRULEIntraParameterField_set_DeliveryIntraRate(PyCThostFtdcRULEIntraParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryIntraRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryIntraRate = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcRULEIntraParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRULEIntraParameterField_get_TradingDay, (setter)PyCThostFtdcRULEIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRULEIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcRULEIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcRULEIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcRULEIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"StdInstrumentID", (getter)PyCThostFtdcRULEIntraParameterField_get_StdInstrumentID, (setter)PyCThostFtdcRULEIntraParameterField_set_StdInstrumentID, (char *)"StdInstrumentID", NULL},
	 {(char *)"StdInstrMargin", (getter)PyCThostFtdcRULEIntraParameterField_get_StdInstrMargin, (setter)PyCThostFtdcRULEIntraParameterField_set_StdInstrMargin, (char *)"StdInstrMargin", NULL},
	 {(char *)"UsualIntraRate", (getter)PyCThostFtdcRULEIntraParameterField_get_UsualIntraRate, (setter)PyCThostFtdcRULEIntraParameterField_set_UsualIntraRate, (char *)"UsualIntraRate", NULL},
	 {(char *)"DeliveryIntraRate", (getter)PyCThostFtdcRULEIntraParameterField_get_DeliveryIntraRate, (setter)PyCThostFtdcRULEIntraParameterField_set_DeliveryIntraRate, (char *)"DeliveryIntraRate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRULEIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRULEIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRULEIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRULEIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRULEIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRULEIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRULEIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRULEIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRULEIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcRULEIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRULEIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcRULEIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRULEIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRULEIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRULEIntraParameterField", (PyObject *)&PyCThostFtdcRULEIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRULEIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcRULEIntraParameterFieldType);
		return -1;
    }

    return 0;
}
