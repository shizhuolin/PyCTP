
#include "PyCThostFtdcProductGroupField.h"



static PyObject *PyCThostFtdcProductGroupField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcProductGroupField *self = (PyCThostFtdcProductGroupField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcProductGroupField_init(PyCThostFtdcProductGroupField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "reserve2", "ProductID", "ProductGroupID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pProductGroupField_reserve1 = NULL;
	Py_ssize_t pProductGroupField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pProductGroupField_ExchangeID = NULL;
	Py_ssize_t pProductGroupField_ExchangeID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pProductGroupField_reserve2 = NULL;
	Py_ssize_t pProductGroupField_reserve2_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pProductGroupField_ProductID = NULL;
	Py_ssize_t pProductGroupField_ProductID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pProductGroupField_ProductGroupID = NULL;
	Py_ssize_t pProductGroupField_ProductGroupID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

		, &pProductGroupField_reserve1, &pProductGroupField_reserve1_len
		, &pProductGroupField_ExchangeID, &pProductGroupField_ExchangeID_len
		, &pProductGroupField_reserve2, &pProductGroupField_reserve2_len
		, &pProductGroupField_ProductID, &pProductGroupField_ProductID_len
		, &pProductGroupField_ProductGroupID, &pProductGroupField_ProductGroupID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pProductGroupField_reserve1 != NULL) {
		if(pProductGroupField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pProductGroupField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pProductGroupField_reserve1, sizeof(self->data.reserve1) );
		pProductGroupField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pProductGroupField_ExchangeID != NULL) {
		if(pProductGroupField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pProductGroupField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pProductGroupField_ExchangeID, sizeof(self->data.ExchangeID) );
		pProductGroupField_ExchangeID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pProductGroupField_reserve2 != NULL) {
		if(pProductGroupField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pProductGroupField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pProductGroupField_reserve2, sizeof(self->data.reserve2) );
		pProductGroupField_reserve2 = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pProductGroupField_ProductID != NULL) {
		if(pProductGroupField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pProductGroupField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pProductGroupField_ProductID, sizeof(self->data.ProductID) );
		pProductGroupField_ProductID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pProductGroupField_ProductGroupID != NULL) {
		if(pProductGroupField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pProductGroupField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pProductGroupField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pProductGroupField_ProductGroupID = NULL;
	}



    return 0;
}

static void PyCThostFtdcProductGroupField_dealloc(PyCThostFtdcProductGroupField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcProductGroupField_repr(PyCThostFtdcProductGroupField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "reserve2", self->data.reserve2 
		, "ProductID", self->data.ProductID 
		, "ProductGroupID", self->data.ProductGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcProductGroupField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcProductGroupField_get_reserve1(PyCThostFtdcProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcProductGroupField_get_ExchangeID(PyCThostFtdcProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcProductGroupField_get_reserve2(PyCThostFtdcProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcProductGroupField_get_ProductID(PyCThostFtdcProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcProductGroupField_get_ProductGroupID(PyCThostFtdcProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static int PyCThostFtdcProductGroupField_set_reserve1(PyCThostFtdcProductGroupField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcProductGroupField_set_ExchangeID(PyCThostFtdcProductGroupField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcProductGroupField_set_reserve2(PyCThostFtdcProductGroupField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcProductGroupField_set_ProductID(PyCThostFtdcProductGroupField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcProductGroupField_set_ProductGroupID(PyCThostFtdcProductGroupField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
		PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
	return 0;
}



static PyGetSetDef PyCThostFtdcProductGroupField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcProductGroupField_get_reserve1, (setter)PyCThostFtdcProductGroupField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcProductGroupField_get_ExchangeID, (setter)PyCThostFtdcProductGroupField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcProductGroupField_get_reserve2, (setter)PyCThostFtdcProductGroupField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcProductGroupField_get_ProductID, (setter)PyCThostFtdcProductGroupField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcProductGroupField_get_ProductGroupID, (setter)PyCThostFtdcProductGroupField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcProductGroupFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcProductGroupField",	/* tp_name */
	sizeof(PyCThostFtdcProductGroupField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcProductGroupField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcProductGroupField_repr,   /* tp_repr */
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
	"CThostFtdcProductGroupField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcProductGroupField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcProductGroupField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcProductGroupField_new,       /* tp_new */
};

int PyCThostFtdcProductGroupFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcProductGroupField  */
	if (PyType_Ready(&PyCThostFtdcProductGroupFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcProductGroupField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcProductGroupFieldType);
    if( PyModule_AddObject(module, "CThostFtdcProductGroupField", (PyObject *)&PyCThostFtdcProductGroupFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcProductGroupField to module");
        Py_DECREF(&PyCThostFtdcProductGroupFieldType);
		return -1;
    }

    return 0;
}
