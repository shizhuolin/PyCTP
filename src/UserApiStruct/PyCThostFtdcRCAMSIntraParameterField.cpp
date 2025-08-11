
#include "PyCThostFtdcRCAMSIntraParameterField.h"



static PyObject *PyCThostFtdcRCAMSIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSIntraParameterField *self = (PyCThostFtdcRCAMSIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSIntraParameterField_init(PyCThostFtdcRCAMSIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "CombProductID", "HedgeRate",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRCAMSIntraParameterField_TradingDay = NULL;
	Py_ssize_t pRCAMSIntraParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRCAMSIntraParameterField_ExchangeID = NULL;
	Py_ssize_t pRCAMSIntraParameterField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSIntraParameterField_CombProductID = NULL;
	Py_ssize_t pRCAMSIntraParameterField_CombProductID_len = 0;

	//TThostFtdcHedgeRateType double
	double pRCAMSIntraParameterField_HedgeRate = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#d", (char **)kwlist
#endif

		, &pRCAMSIntraParameterField_TradingDay, &pRCAMSIntraParameterField_TradingDay_len
		, &pRCAMSIntraParameterField_ExchangeID, &pRCAMSIntraParameterField_ExchangeID_len
		, &pRCAMSIntraParameterField_CombProductID, &pRCAMSIntraParameterField_CombProductID_len
		, &pRCAMSIntraParameterField_HedgeRate


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRCAMSIntraParameterField_TradingDay != NULL) {
		if(pRCAMSIntraParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRCAMSIntraParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRCAMSIntraParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pRCAMSIntraParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pRCAMSIntraParameterField_ExchangeID != NULL) {
		if(pRCAMSIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRCAMSIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRCAMSIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRCAMSIntraParameterField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pRCAMSIntraParameterField_CombProductID != NULL) {
		if(pRCAMSIntraParameterField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
			PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", pRCAMSIntraParameterField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
			return -1;
		}
		strncpy(self->data.CombProductID, pRCAMSIntraParameterField_CombProductID, sizeof(self->data.CombProductID) );
		pRCAMSIntraParameterField_CombProductID = NULL;
	}

	//TThostFtdcHedgeRateType double
	self->data.HedgeRate = pRCAMSIntraParameterField_HedgeRate;


    return 0;
}

static void PyCThostFtdcRCAMSIntraParameterField_dealloc(PyCThostFtdcRCAMSIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSIntraParameterField_repr(PyCThostFtdcRCAMSIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "CombProductID", self->data.CombProductID 
		, "HedgeRate", self->data.HedgeRate


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRCAMSIntraParameterField_get_TradingDay(PyCThostFtdcRCAMSIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRCAMSIntraParameterField_get_ExchangeID(PyCThostFtdcRCAMSIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRCAMSIntraParameterField_get_CombProductID(PyCThostFtdcRCAMSIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProductID);
}

static PyObject *PyCThostFtdcRCAMSIntraParameterField_get_HedgeRate(PyCThostFtdcRCAMSIntraParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HedgeRate);
}

static int PyCThostFtdcRCAMSIntraParameterField_set_TradingDay(PyCThostFtdcRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSIntraParameterField_set_ExchangeID(PyCThostFtdcRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSIntraParameterField_set_CombProductID(PyCThostFtdcRCAMSIntraParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
		PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
	return 0;
}

static int PyCThostFtdcRCAMSIntraParameterField_set_HedgeRate(PyCThostFtdcRCAMSIntraParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRCAMSIntraParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRCAMSIntraParameterField_get_TradingDay, (setter)PyCThostFtdcRCAMSIntraParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcRCAMSIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"CombProductID", (getter)PyCThostFtdcRCAMSIntraParameterField_get_CombProductID, (setter)PyCThostFtdcRCAMSIntraParameterField_set_CombProductID, (char *)"CombProductID", NULL},
	 {(char *)"HedgeRate", (getter)PyCThostFtdcRCAMSIntraParameterField_get_HedgeRate, (setter)PyCThostFtdcRCAMSIntraParameterField_set_HedgeRate, (char *)"HedgeRate", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSIntraParameterField", (PyObject *)&PyCThostFtdcRCAMSIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcRCAMSIntraParameterFieldType);
		return -1;
    }

    return 0;
}
