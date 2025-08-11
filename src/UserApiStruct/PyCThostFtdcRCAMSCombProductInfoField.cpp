
#include "PyCThostFtdcRCAMSCombProductInfoField.h"



static PyObject *PyCThostFtdcRCAMSCombProductInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRCAMSCombProductInfoField *self = (PyCThostFtdcRCAMSCombProductInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRCAMSCombProductInfoField_init(PyCThostFtdcRCAMSCombProductInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductID", "CombProductID", "ProductGroupID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRCAMSCombProductInfoField_TradingDay = NULL;
	Py_ssize_t pRCAMSCombProductInfoField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRCAMSCombProductInfoField_ExchangeID = NULL;
	Py_ssize_t pRCAMSCombProductInfoField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSCombProductInfoField_ProductID = NULL;
	Py_ssize_t pRCAMSCombProductInfoField_ProductID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSCombProductInfoField_CombProductID = NULL;
	Py_ssize_t pRCAMSCombProductInfoField_CombProductID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pRCAMSCombProductInfoField_ProductGroupID = NULL;
	Py_ssize_t pRCAMSCombProductInfoField_ProductGroupID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

		, &pRCAMSCombProductInfoField_TradingDay, &pRCAMSCombProductInfoField_TradingDay_len
		, &pRCAMSCombProductInfoField_ExchangeID, &pRCAMSCombProductInfoField_ExchangeID_len
		, &pRCAMSCombProductInfoField_ProductID, &pRCAMSCombProductInfoField_ProductID_len
		, &pRCAMSCombProductInfoField_CombProductID, &pRCAMSCombProductInfoField_CombProductID_len
		, &pRCAMSCombProductInfoField_ProductGroupID, &pRCAMSCombProductInfoField_ProductGroupID_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRCAMSCombProductInfoField_TradingDay != NULL) {
		if(pRCAMSCombProductInfoField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRCAMSCombProductInfoField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRCAMSCombProductInfoField_TradingDay, sizeof(self->data.TradingDay) );
		pRCAMSCombProductInfoField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pRCAMSCombProductInfoField_ExchangeID != NULL) {
		if(pRCAMSCombProductInfoField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRCAMSCombProductInfoField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRCAMSCombProductInfoField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRCAMSCombProductInfoField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pRCAMSCombProductInfoField_ProductID != NULL) {
		if(pRCAMSCombProductInfoField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pRCAMSCombProductInfoField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pRCAMSCombProductInfoField_ProductID, sizeof(self->data.ProductID) );
		pRCAMSCombProductInfoField_ProductID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pRCAMSCombProductInfoField_CombProductID != NULL) {
		if(pRCAMSCombProductInfoField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
			PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", pRCAMSCombProductInfoField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
			return -1;
		}
		strncpy(self->data.CombProductID, pRCAMSCombProductInfoField_CombProductID, sizeof(self->data.CombProductID) );
		pRCAMSCombProductInfoField_CombProductID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pRCAMSCombProductInfoField_ProductGroupID != NULL) {
		if(pRCAMSCombProductInfoField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pRCAMSCombProductInfoField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pRCAMSCombProductInfoField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pRCAMSCombProductInfoField_ProductGroupID = NULL;
	}



    return 0;
}

static void PyCThostFtdcRCAMSCombProductInfoField_dealloc(PyCThostFtdcRCAMSCombProductInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRCAMSCombProductInfoField_repr(PyCThostFtdcRCAMSCombProductInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 
		, "CombProductID", self->data.CombProductID 
		, "ProductGroupID", self->data.ProductGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRCAMSCombProductInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRCAMSCombProductInfoField_get_TradingDay(PyCThostFtdcRCAMSCombProductInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRCAMSCombProductInfoField_get_ExchangeID(PyCThostFtdcRCAMSCombProductInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRCAMSCombProductInfoField_get_ProductID(PyCThostFtdcRCAMSCombProductInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcRCAMSCombProductInfoField_get_CombProductID(PyCThostFtdcRCAMSCombProductInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProductID);
}

static PyObject *PyCThostFtdcRCAMSCombProductInfoField_get_ProductGroupID(PyCThostFtdcRCAMSCombProductInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static int PyCThostFtdcRCAMSCombProductInfoField_set_TradingDay(PyCThostFtdcRCAMSCombProductInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSCombProductInfoField_set_ExchangeID(PyCThostFtdcRCAMSCombProductInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSCombProductInfoField_set_ProductID(PyCThostFtdcRCAMSCombProductInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSCombProductInfoField_set_CombProductID(PyCThostFtdcRCAMSCombProductInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRCAMSCombProductInfoField_set_ProductGroupID(PyCThostFtdcRCAMSCombProductInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRCAMSCombProductInfoField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRCAMSCombProductInfoField_get_TradingDay, (setter)PyCThostFtdcRCAMSCombProductInfoField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRCAMSCombProductInfoField_get_ExchangeID, (setter)PyCThostFtdcRCAMSCombProductInfoField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcRCAMSCombProductInfoField_get_ProductID, (setter)PyCThostFtdcRCAMSCombProductInfoField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"CombProductID", (getter)PyCThostFtdcRCAMSCombProductInfoField_get_CombProductID, (setter)PyCThostFtdcRCAMSCombProductInfoField_set_CombProductID, (char *)"CombProductID", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcRCAMSCombProductInfoField_get_ProductGroupID, (setter)PyCThostFtdcRCAMSCombProductInfoField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRCAMSCombProductInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRCAMSCombProductInfoField",	/* tp_name */
	sizeof(PyCThostFtdcRCAMSCombProductInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRCAMSCombProductInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRCAMSCombProductInfoField_repr,   /* tp_repr */
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
	"CThostFtdcRCAMSCombProductInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRCAMSCombProductInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRCAMSCombProductInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRCAMSCombProductInfoField_new,       /* tp_new */
};

int PyCThostFtdcRCAMSCombProductInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRCAMSCombProductInfoField  */
	if (PyType_Ready(&PyCThostFtdcRCAMSCombProductInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRCAMSCombProductInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRCAMSCombProductInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRCAMSCombProductInfoField", (PyObject *)&PyCThostFtdcRCAMSCombProductInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRCAMSCombProductInfoField to module");
        Py_DECREF(&PyCThostFtdcRCAMSCombProductInfoFieldType);
		return -1;
    }

    return 0;
}
