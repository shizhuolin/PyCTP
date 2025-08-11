
#include "PyCThostFtdcRCAMSInterParameterField.h"



static PyObject *PyCThostFtdcRCAMSInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSInterParameterField *self = (PyCThostFtdcRCAMSInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSInterParameterField_init(PyCThostFtdcRCAMSInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductGroupID", "Priority", "CreditRate", "CombProduct1", "CombProduct2",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRCAMSInterParameterField_TradingDay = NULL;
	Py_ssize_t pRCAMSInterParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRCAMSInterParameterField_ExchangeID = NULL;
	Py_ssize_t pRCAMSInterParameterField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSInterParameterField_ProductGroupID = NULL;
	Py_ssize_t pRCAMSInterParameterField_ProductGroupID_len = 0;

	//TThostFtdcRCAMSPriorityType int
	int pRCAMSInterParameterField_Priority = 0;

	//TThostFtdcHedgeRateType double
	double pRCAMSInterParameterField_CreditRate = 0.0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSInterParameterField_CombProduct1 = NULL;
	Py_ssize_t pRCAMSInterParameterField_CombProduct1_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSInterParameterField_CombProduct2 = NULL;
	Py_ssize_t pRCAMSInterParameterField_CombProduct2_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#idy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ids#s#", (char **)kwlist
#endif

		, &pRCAMSInterParameterField_TradingDay, &pRCAMSInterParameterField_TradingDay_len
		, &pRCAMSInterParameterField_ExchangeID, &pRCAMSInterParameterField_ExchangeID_len
		, &pRCAMSInterParameterField_ProductGroupID, &pRCAMSInterParameterField_ProductGroupID_len
		, &pRCAMSInterParameterField_Priority
		, &pRCAMSInterParameterField_CreditRate
		, &pRCAMSInterParameterField_CombProduct1, &pRCAMSInterParameterField_CombProduct1_len
		, &pRCAMSInterParameterField_CombProduct2, &pRCAMSInterParameterField_CombProduct2_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRCAMSInterParameterField_TradingDay != NULL) {
		if(pRCAMSInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRCAMSInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRCAMSInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pRCAMSInterParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pRCAMSInterParameterField_ExchangeID != NULL) {
		if(pRCAMSInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRCAMSInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRCAMSInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRCAMSInterParameterField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pRCAMSInterParameterField_ProductGroupID != NULL) {
		if(pRCAMSInterParameterField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pRCAMSInterParameterField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pRCAMSInterParameterField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pRCAMSInterParameterField_ProductGroupID = NULL;
	}

	//TThostFtdcRCAMSPriorityType int
	self->data.Priority = pRCAMSInterParameterField_Priority;

	//TThostFtdcHedgeRateType double
	self->data.CreditRate = pRCAMSInterParameterField_CreditRate;
	//TThostFtdcProductIDType char[41]
	if(pRCAMSInterParameterField_CombProduct1 != NULL) {
		if(pRCAMSInterParameterField_CombProduct1_len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
			PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is %zd)", pRCAMSInterParameterField_CombProduct1_len, (Py_ssize_t)sizeof(self->data.CombProduct1));
			return -1;
		}
		strncpy(self->data.CombProduct1, pRCAMSInterParameterField_CombProduct1, sizeof(self->data.CombProduct1) );
		pRCAMSInterParameterField_CombProduct1 = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pRCAMSInterParameterField_CombProduct2 != NULL) {
		if(pRCAMSInterParameterField_CombProduct2_len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
			PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is %zd)", pRCAMSInterParameterField_CombProduct2_len, (Py_ssize_t)sizeof(self->data.CombProduct2));
			return -1;
		}
		strncpy(self->data.CombProduct2, pRCAMSInterParameterField_CombProduct2, sizeof(self->data.CombProduct2) );
		pRCAMSInterParameterField_CombProduct2 = NULL;
	}



    return 0;
}

static void PyCThostFtdcRCAMSInterParameterField_dealloc(PyCThostFtdcRCAMSInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_repr(PyCThostFtdcRCAMSInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:d,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductGroupID", self->data.ProductGroupID 
		, "Priority", self->data.Priority
		, "CreditRate", self->data.CreditRate
		, "CombProduct1", self->data.CombProduct1 
		, "CombProduct2", self->data.CombProduct2 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_get_TradingDay(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_get_ExchangeID(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_get_ProductGroupID(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_get_Priority(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Priority);
#else 
	return PyInt_FromLong(self->data.Priority);
#endif 
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_get_CreditRate(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CreditRate);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_get_CombProduct1(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProduct1);
}

static PyObject *PyCThostFtdcRCAMSInterParameterField_get_CombProduct2(PyCThostFtdcRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProduct2);
}

static int PyCThostFtdcRCAMSInterParameterField_set_TradingDay(PyCThostFtdcRCAMSInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInterParameterField_set_ExchangeID(PyCThostFtdcRCAMSInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSInterParameterField_set_ProductGroupID(PyCThostFtdcRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
		PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
	return 0;
}

static int PyCThostFtdcRCAMSInterParameterField_set_Priority(PyCThostFtdcRCAMSInterParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Priority Expected int"); 
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
    self->data.Priority = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRCAMSInterParameterField_set_CreditRate(PyCThostFtdcRCAMSInterParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreditRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CreditRate = buf;
    return 0;
}

static int PyCThostFtdcRCAMSInterParameterField_set_CombProduct1(PyCThostFtdcRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
		PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProduct1, buf, sizeof(self->data.CombProduct1));
	return 0;
}

static int PyCThostFtdcRCAMSInterParameterField_set_CombProduct2(PyCThostFtdcRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
		PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProduct2, buf, sizeof(self->data.CombProduct2));
	return 0;
}



static PyGetSetDef PyCThostFtdcRCAMSInterParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRCAMSInterParameterField_get_TradingDay, (setter)PyCThostFtdcRCAMSInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSInterParameterField_get_ExchangeID, (setter)PyCThostFtdcRCAMSInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcRCAMSInterParameterField_get_ProductGroupID, (setter)PyCThostFtdcRCAMSInterParameterField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
	 {(char *)"Priority", (getter)PyCThostFtdcRCAMSInterParameterField_get_Priority, (setter)PyCThostFtdcRCAMSInterParameterField_set_Priority, (char *)"Priority", NULL},
	 {(char *)"CreditRate", (getter)PyCThostFtdcRCAMSInterParameterField_get_CreditRate, (setter)PyCThostFtdcRCAMSInterParameterField_set_CreditRate, (char *)"CreditRate", NULL},
	 {(char *)"CombProduct1", (getter)PyCThostFtdcRCAMSInterParameterField_get_CombProduct1, (setter)PyCThostFtdcRCAMSInterParameterField_set_CombProduct1, (char *)"CombProduct1", NULL},
	 {(char *)"CombProduct2", (getter)PyCThostFtdcRCAMSInterParameterField_get_CombProduct2, (setter)PyCThostFtdcRCAMSInterParameterField_set_CombProduct2, (char *)"CombProduct2", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSInterParameterField", (PyObject *)&PyCThostFtdcRCAMSInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSInterParameterField to module");
        Py_DECREF(&PyCThostFtdcRCAMSInterParameterFieldType);
		return -1;
    }

    return 0;
}
