
#include "PyCThostFtdcRCAMSInstrParameterField.h"



static PyObject *PyCThostFtdcRCAMSInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSInstrParameterField *self = (PyCThostFtdcRCAMSInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSInstrParameterField_init(PyCThostFtdcRCAMSInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductID", "HedgeRate",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRCAMSInstrParameterField_TradingDay = NULL;
	Py_ssize_t pRCAMSInstrParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRCAMSInstrParameterField_ExchangeID = NULL;
	Py_ssize_t pRCAMSInstrParameterField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSInstrParameterField_ProductID = NULL;
	Py_ssize_t pRCAMSInstrParameterField_ProductID_len = 0;

	//TThostFtdcHedgeRateType double
	double pRCAMSInstrParameterField_HedgeRate = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#d", (char **)kwlist
#endif

		, &pRCAMSInstrParameterField_TradingDay, &pRCAMSInstrParameterField_TradingDay_len
		, &pRCAMSInstrParameterField_ExchangeID, &pRCAMSInstrParameterField_ExchangeID_len
		, &pRCAMSInstrParameterField_ProductID, &pRCAMSInstrParameterField_ProductID_len
		, &pRCAMSInstrParameterField_HedgeRate


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRCAMSInstrParameterField_TradingDay != NULL) {
		if(pRCAMSInstrParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRCAMSInstrParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRCAMSInstrParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pRCAMSInstrParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pRCAMSInstrParameterField_ExchangeID != NULL) {
		if(pRCAMSInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRCAMSInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRCAMSInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRCAMSInstrParameterField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pRCAMSInstrParameterField_ProductID != NULL) {
		if(pRCAMSInstrParameterField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pRCAMSInstrParameterField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pRCAMSInstrParameterField_ProductID, sizeof(self->data.ProductID) );
		pRCAMSInstrParameterField_ProductID = NULL;
	}

	//TThostFtdcHedgeRateType double
	self->data.HedgeRate = pRCAMSInstrParameterField_HedgeRate;


    return 0;
}

static void PyCThostFtdcRCAMSInstrParameterField_dealloc(PyCThostFtdcRCAMSInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSInstrParameterField_repr(PyCThostFtdcRCAMSInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 
		, "HedgeRate", self->data.HedgeRate


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_TradingDay(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_ExchangeID(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_ProductID(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcRCAMSInstrParameterField_get_HedgeRate(PyCThostFtdcRCAMSInstrParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HedgeRate);
}

static int PyCThostFtdcRCAMSInstrParameterField_set_TradingDay(PyCThostFtdcRCAMSInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInstrParameterField_set_ExchangeID(PyCThostFtdcRCAMSInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInstrParameterField_set_ProductID(PyCThostFtdcRCAMSInstrParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcRCAMSInstrParameterField_set_HedgeRate(PyCThostFtdcRCAMSInstrParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HedgeRate = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcRCAMSInstrParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRCAMSInstrParameterField_get_TradingDay, (setter)PyCThostFtdcRCAMSInstrParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcRCAMSInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcRCAMSInstrParameterField_get_ProductID, (setter)PyCThostFtdcRCAMSInstrParameterField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"HedgeRate", (getter)PyCThostFtdcRCAMSInstrParameterField_get_HedgeRate, (setter)PyCThostFtdcRCAMSInstrParameterField_set_HedgeRate, (char *)"HedgeRate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSInstrParameterField", (PyObject *)&PyCThostFtdcRCAMSInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcRCAMSInstrParameterFieldType);
		return -1;
    }

    return 0;
}
