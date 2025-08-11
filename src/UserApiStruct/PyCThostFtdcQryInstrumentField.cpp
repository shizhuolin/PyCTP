
#include "PyCThostFtdcQryInstrumentField.h"



static PyObject *PyCThostFtdcQryInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInstrumentField *self = (PyCThostFtdcQryInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInstrumentField_init(PyCThostFtdcQryInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "reserve2", "reserve3", "InstrumentID", "ExchangeInstID", "ProductID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryInstrumentField_reserve1 = NULL;
	Py_ssize_t pQryInstrumentField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInstrumentField_ExchangeID = NULL;
	Py_ssize_t pQryInstrumentField_ExchangeID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pQryInstrumentField_reserve2 = NULL;
	Py_ssize_t pQryInstrumentField_reserve2_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryInstrumentField_reserve3 = NULL;
	Py_ssize_t pQryInstrumentField_reserve3_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInstrumentField_InstrumentID = NULL;
	Py_ssize_t pQryInstrumentField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pQryInstrumentField_ExchangeInstID = NULL;
	Py_ssize_t pQryInstrumentField_ExchangeInstID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInstrumentField_ProductID = NULL;
	Py_ssize_t pQryInstrumentField_ProductID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pQryInstrumentField_reserve1, &pQryInstrumentField_reserve1_len
		, &pQryInstrumentField_ExchangeID, &pQryInstrumentField_ExchangeID_len
		, &pQryInstrumentField_reserve2, &pQryInstrumentField_reserve2_len
		, &pQryInstrumentField_reserve3, &pQryInstrumentField_reserve3_len
		, &pQryInstrumentField_InstrumentID, &pQryInstrumentField_InstrumentID_len
		, &pQryInstrumentField_ExchangeInstID, &pQryInstrumentField_ExchangeInstID_len
		, &pQryInstrumentField_ProductID, &pQryInstrumentField_ProductID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryInstrumentField_reserve1 != NULL) {
		if(pQryInstrumentField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryInstrumentField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryInstrumentField_reserve1, sizeof(self->data.reserve1) );
		pQryInstrumentField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryInstrumentField_ExchangeID != NULL) {
		if(pQryInstrumentField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInstrumentField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInstrumentField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInstrumentField_ExchangeID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pQryInstrumentField_reserve2 != NULL) {
		if(pQryInstrumentField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pQryInstrumentField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pQryInstrumentField_reserve2, sizeof(self->data.reserve2) );
		pQryInstrumentField_reserve2 = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryInstrumentField_reserve3 != NULL) {
		if(pQryInstrumentField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pQryInstrumentField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pQryInstrumentField_reserve3, sizeof(self->data.reserve3) );
		pQryInstrumentField_reserve3 = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInstrumentField_InstrumentID != NULL) {
		if(pQryInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryInstrumentField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pQryInstrumentField_ExchangeInstID != NULL) {
		if(pQryInstrumentField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pQryInstrumentField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pQryInstrumentField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pQryInstrumentField_ExchangeInstID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInstrumentField_ProductID != NULL) {
		if(pQryInstrumentField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pQryInstrumentField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pQryInstrumentField_ProductID, sizeof(self->data.ProductID) );
		pQryInstrumentField_ProductID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInstrumentField_dealloc(PyCThostFtdcQryInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInstrumentField_repr(PyCThostFtdcQryInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "reserve2", self->data.reserve2 
		, "reserve3", self->data.reserve3 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "ProductID", self->data.ProductID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInstrumentField_get_reserve1(PyCThostFtdcQryInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryInstrumentField_get_ExchangeID(PyCThostFtdcQryInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInstrumentField_get_reserve2(PyCThostFtdcQryInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcQryInstrumentField_get_reserve3(PyCThostFtdcQryInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcQryInstrumentField_get_InstrumentID(PyCThostFtdcQryInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcQryInstrumentField_get_ExchangeInstID(PyCThostFtdcQryInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcQryInstrumentField_get_ProductID(PyCThostFtdcQryInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static int PyCThostFtdcQryInstrumentField_set_reserve1(PyCThostFtdcQryInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentField_set_ExchangeID(PyCThostFtdcQryInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentField_set_reserve2(PyCThostFtdcQryInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInstrumentField_set_reserve3(PyCThostFtdcQryInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
		PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
	return 0;
}

static int PyCThostFtdcQryInstrumentField_set_InstrumentID(PyCThostFtdcQryInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}

static int PyCThostFtdcQryInstrumentField_set_ExchangeInstID(PyCThostFtdcQryInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}

static int PyCThostFtdcQryInstrumentField_set_ProductID(PyCThostFtdcQryInstrumentField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInstrumentField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcQryInstrumentField_get_reserve1, (setter)PyCThostFtdcQryInstrumentField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInstrumentField_get_ExchangeID, (setter)PyCThostFtdcQryInstrumentField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcQryInstrumentField_get_reserve2, (setter)PyCThostFtdcQryInstrumentField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcQryInstrumentField_get_reserve3, (setter)PyCThostFtdcQryInstrumentField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryInstrumentField_get_InstrumentID, (setter)PyCThostFtdcQryInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryInstrumentField_get_ExchangeInstID, (setter)PyCThostFtdcQryInstrumentField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcQryInstrumentField_get_ProductID, (setter)PyCThostFtdcQryInstrumentField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcQryInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcQryInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcQryInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcQryInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentField", (PyObject *)&PyCThostFtdcQryInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentField to module");
        Py_DECREF(&PyCThostFtdcQryInstrumentFieldType);
		return -1;
    }

    return 0;
}
