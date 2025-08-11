
#include "PyCThostFtdcMarketDataBaseField.h"



static PyObject *PyCThostFtdcMarketDataBaseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarketDataBaseField *self = (PyCThostFtdcMarketDataBaseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMarketDataBaseField_init(PyCThostFtdcMarketDataBaseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "PreDelta",  NULL};

	//TThostFtdcDateType char[9]
	const char *pMarketDataBaseField_TradingDay = NULL;
	Py_ssize_t pMarketDataBaseField_TradingDay_len = 0;

	//TThostFtdcPriceType double
	double pMarketDataBaseField_PreSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pMarketDataBaseField_PreClosePrice = 0.0;

	//TThostFtdcLargeVolumeType double
	double pMarketDataBaseField_PreOpenInterest = 0.0;

	//TThostFtdcRatioType double
	double pMarketDataBaseField_PreDelta = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#dddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#dddd", (char **)kwlist
#endif

		, &pMarketDataBaseField_TradingDay, &pMarketDataBaseField_TradingDay_len
		, &pMarketDataBaseField_PreSettlementPrice
		, &pMarketDataBaseField_PreClosePrice
		, &pMarketDataBaseField_PreOpenInterest
		, &pMarketDataBaseField_PreDelta


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pMarketDataBaseField_TradingDay != NULL) {
		if(pMarketDataBaseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pMarketDataBaseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pMarketDataBaseField_TradingDay, sizeof(self->data.TradingDay) );
		pMarketDataBaseField_TradingDay = NULL;
	}

	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pMarketDataBaseField_PreSettlementPrice;
	//TThostFtdcPriceType double
	self->data.PreClosePrice = pMarketDataBaseField_PreClosePrice;
	//TThostFtdcLargeVolumeType double
	self->data.PreOpenInterest = pMarketDataBaseField_PreOpenInterest;
	//TThostFtdcRatioType double
	self->data.PreDelta = pMarketDataBaseField_PreDelta;


    return 0;
}

static void PyCThostFtdcMarketDataBaseField_dealloc(PyCThostFtdcMarketDataBaseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarketDataBaseField_repr(PyCThostFtdcMarketDataBaseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:d,s:d,s:d,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "PreSettlementPrice", self->data.PreSettlementPrice
		, "PreClosePrice", self->data.PreClosePrice
		, "PreOpenInterest", self->data.PreOpenInterest
		, "PreDelta", self->data.PreDelta


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarketDataBaseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMarketDataBaseField_get_TradingDay(PyCThostFtdcMarketDataBaseField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcMarketDataBaseField_get_PreSettlementPrice(PyCThostFtdcMarketDataBaseField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcMarketDataBaseField_get_PreClosePrice(PyCThostFtdcMarketDataBaseField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreClosePrice);
}

static PyObject *PyCThostFtdcMarketDataBaseField_get_PreOpenInterest(PyCThostFtdcMarketDataBaseField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreOpenInterest);
}

static PyObject *PyCThostFtdcMarketDataBaseField_get_PreDelta(PyCThostFtdcMarketDataBaseField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreDelta);
}

static int PyCThostFtdcMarketDataBaseField_set_TradingDay(PyCThostFtdcMarketDataBaseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataBaseField_set_PreSettlementPrice(PyCThostFtdcMarketDataBaseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarketDataBaseField_set_PreClosePrice(PyCThostFtdcMarketDataBaseField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreClosePrice = buf;
    return 0;
}

static int PyCThostFtdcMarketDataBaseField_set_PreOpenInterest(PyCThostFtdcMarketDataBaseField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreOpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreOpenInterest = buf;
    return 0;
}

static int PyCThostFtdcMarketDataBaseField_set_PreDelta(PyCThostFtdcMarketDataBaseField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreDelta = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcMarketDataBaseField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcMarketDataBaseField_get_TradingDay, (setter)PyCThostFtdcMarketDataBaseField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcMarketDataBaseField_get_PreSettlementPrice, (setter)PyCThostFtdcMarketDataBaseField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"PreClosePrice", (getter)PyCThostFtdcMarketDataBaseField_get_PreClosePrice, (setter)PyCThostFtdcMarketDataBaseField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
	 {(char *)"PreOpenInterest", (getter)PyCThostFtdcMarketDataBaseField_get_PreOpenInterest, (setter)PyCThostFtdcMarketDataBaseField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
	 {(char *)"PreDelta", (getter)PyCThostFtdcMarketDataBaseField_get_PreDelta, (setter)PyCThostFtdcMarketDataBaseField_set_PreDelta, (char *)"PreDelta", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarketDataBaseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarketDataBaseField",	/* tp_name */
	sizeof(PyCThostFtdcMarketDataBaseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarketDataBaseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarketDataBaseField_repr,   /* tp_repr */
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
	"CThostFtdcMarketDataBaseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarketDataBaseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarketDataBaseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarketDataBaseField_new,       /* tp_new */
};

int PyCThostFtdcMarketDataBaseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarketDataBaseField  */
	if (PyType_Ready(&PyCThostFtdcMarketDataBaseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarketDataBaseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarketDataBaseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarketDataBaseField", (PyObject *)&PyCThostFtdcMarketDataBaseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarketDataBaseField to module");
        Py_DECREF(&PyCThostFtdcMarketDataBaseFieldType);
		return -1;
    }

    return 0;
}
