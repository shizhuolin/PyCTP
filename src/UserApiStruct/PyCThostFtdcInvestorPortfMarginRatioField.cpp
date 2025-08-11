
#include "PyCThostFtdcInvestorPortfMarginRatioField.h"



static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPortfMarginRatioField *self = (PyCThostFtdcInvestorPortfMarginRatioField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPortfMarginRatioField_init(PyCThostFtdcInvestorPortfMarginRatioField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorRange", "BrokerID", "InvestorID", "ExchangeID", "MarginRatio", "ProductGroupID",  NULL};

	//TThostFtdcInvestorRangeType char
	char pInvestorPortfMarginRatioField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorPortfMarginRatioField_BrokerID = NULL;
	Py_ssize_t pInvestorPortfMarginRatioField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorPortfMarginRatioField_InvestorID = NULL;
	Py_ssize_t pInvestorPortfMarginRatioField_InvestorID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorPortfMarginRatioField_ExchangeID = NULL;
	Py_ssize_t pInvestorPortfMarginRatioField_ExchangeID_len = 0;

	//TThostFtdcRatioType double
	double pInvestorPortfMarginRatioField_MarginRatio = 0.0;

	//TThostFtdcProductIDType char[41]
	const char *pInvestorPortfMarginRatioField_ProductGroupID = NULL;
	Py_ssize_t pInvestorPortfMarginRatioField_ProductGroupID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cy#y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cs#s#s#ds#", (char **)kwlist
#endif

		, &pInvestorPortfMarginRatioField_InvestorRange
		, &pInvestorPortfMarginRatioField_BrokerID, &pInvestorPortfMarginRatioField_BrokerID_len
		, &pInvestorPortfMarginRatioField_InvestorID, &pInvestorPortfMarginRatioField_InvestorID_len
		, &pInvestorPortfMarginRatioField_ExchangeID, &pInvestorPortfMarginRatioField_ExchangeID_len
		, &pInvestorPortfMarginRatioField_MarginRatio
		, &pInvestorPortfMarginRatioField_ProductGroupID, &pInvestorPortfMarginRatioField_ProductGroupID_len


    )) {
        return -1;
    }

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pInvestorPortfMarginRatioField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorPortfMarginRatioField_BrokerID != NULL) {
		if(pInvestorPortfMarginRatioField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorPortfMarginRatioField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorPortfMarginRatioField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorPortfMarginRatioField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorPortfMarginRatioField_InvestorID != NULL) {
		if(pInvestorPortfMarginRatioField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorPortfMarginRatioField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorPortfMarginRatioField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorPortfMarginRatioField_InvestorID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorPortfMarginRatioField_ExchangeID != NULL) {
		if(pInvestorPortfMarginRatioField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorPortfMarginRatioField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorPortfMarginRatioField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorPortfMarginRatioField_ExchangeID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.MarginRatio = pInvestorPortfMarginRatioField_MarginRatio;
	//TThostFtdcProductIDType char[41]
	if(pInvestorPortfMarginRatioField_ProductGroupID != NULL) {
		if(pInvestorPortfMarginRatioField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pInvestorPortfMarginRatioField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pInvestorPortfMarginRatioField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pInvestorPortfMarginRatioField_ProductGroupID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestorPortfMarginRatioField_dealloc(PyCThostFtdcInvestorPortfMarginRatioField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_repr(PyCThostFtdcInvestorPortfMarginRatioField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:c,s:y,s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:c,s:s,s:s,s:s,s:d,s:s}"
#endif

		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExchangeID", self->data.ExchangeID 
		, "MarginRatio", self->data.MarginRatio
		, "ProductGroupID", self->data.ProductGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfMarginRatioField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_get_InvestorRange(PyCThostFtdcInvestorPortfMarginRatioField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_get_BrokerID(PyCThostFtdcInvestorPortfMarginRatioField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_get_InvestorID(PyCThostFtdcInvestorPortfMarginRatioField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_get_ExchangeID(PyCThostFtdcInvestorPortfMarginRatioField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_get_MarginRatio(PyCThostFtdcInvestorPortfMarginRatioField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRatio);
}

static PyObject *PyCThostFtdcInvestorPortfMarginRatioField_get_ProductGroupID(PyCThostFtdcInvestorPortfMarginRatioField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static int PyCThostFtdcInvestorPortfMarginRatioField_set_InvestorRange(PyCThostFtdcInvestorPortfMarginRatioField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfMarginRatioField_set_BrokerID(PyCThostFtdcInvestorPortfMarginRatioField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfMarginRatioField_set_InvestorID(PyCThostFtdcInvestorPortfMarginRatioField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfMarginRatioField_set_ExchangeID(PyCThostFtdcInvestorPortfMarginRatioField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfMarginRatioField_set_MarginRatio(PyCThostFtdcInvestorPortfMarginRatioField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRatio = buf;
    return 0;
}

static int PyCThostFtdcInvestorPortfMarginRatioField_set_ProductGroupID(PyCThostFtdcInvestorPortfMarginRatioField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorPortfMarginRatioField_getset[] = {
	 {(char *)"InvestorRange", (getter)PyCThostFtdcInvestorPortfMarginRatioField_get_InvestorRange, (setter)PyCThostFtdcInvestorPortfMarginRatioField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPortfMarginRatioField_get_BrokerID, (setter)PyCThostFtdcInvestorPortfMarginRatioField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPortfMarginRatioField_get_InvestorID, (setter)PyCThostFtdcInvestorPortfMarginRatioField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPortfMarginRatioField_get_ExchangeID, (setter)PyCThostFtdcInvestorPortfMarginRatioField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"MarginRatio", (getter)PyCThostFtdcInvestorPortfMarginRatioField_get_MarginRatio, (setter)PyCThostFtdcInvestorPortfMarginRatioField_set_MarginRatio, (char *)"MarginRatio", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcInvestorPortfMarginRatioField_get_ProductGroupID, (setter)PyCThostFtdcInvestorPortfMarginRatioField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPortfMarginRatioFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPortfMarginRatioField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPortfMarginRatioField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPortfMarginRatioField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPortfMarginRatioField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPortfMarginRatioField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPortfMarginRatioField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPortfMarginRatioField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPortfMarginRatioField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPortfMarginRatioFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPortfMarginRatioField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPortfMarginRatioFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPortfMarginRatioField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPortfMarginRatioFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfMarginRatioField", (PyObject *)&PyCThostFtdcInvestorPortfMarginRatioFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfMarginRatioField to module");
        Py_DECREF(&PyCThostFtdcInvestorPortfMarginRatioFieldType);
		return -1;
    }

    return 0;
}
