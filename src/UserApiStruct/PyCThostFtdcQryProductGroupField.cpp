
#include "PyCThostFtdcQryProductGroupField.h"



static PyObject *PyCThostFtdcQryProductGroupField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryProductGroupField *self = (PyCThostFtdcQryProductGroupField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryProductGroupField_init(PyCThostFtdcQryProductGroupField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "ProductID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryProductGroupField_reserve1 = NULL;
	Py_ssize_t pQryProductGroupField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryProductGroupField_ExchangeID = NULL;
	Py_ssize_t pQryProductGroupField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryProductGroupField_ProductID = NULL;
	Py_ssize_t pQryProductGroupField_ProductID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryProductGroupField_reserve1, &pQryProductGroupField_reserve1_len
		, &pQryProductGroupField_ExchangeID, &pQryProductGroupField_ExchangeID_len
		, &pQryProductGroupField_ProductID, &pQryProductGroupField_ProductID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryProductGroupField_reserve1 != NULL) {
		if(pQryProductGroupField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryProductGroupField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryProductGroupField_reserve1, sizeof(self->data.reserve1) );
		pQryProductGroupField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryProductGroupField_ExchangeID != NULL) {
		if(pQryProductGroupField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryProductGroupField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryProductGroupField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryProductGroupField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryProductGroupField_ProductID != NULL) {
		if(pQryProductGroupField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pQryProductGroupField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pQryProductGroupField_ProductID, sizeof(self->data.ProductID) );
		pQryProductGroupField_ProductID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryProductGroupField_dealloc(PyCThostFtdcQryProductGroupField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryProductGroupField_repr(PyCThostFtdcQryProductGroupField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductGroupField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryProductGroupField_get_reserve1(PyCThostFtdcQryProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryProductGroupField_get_ExchangeID(PyCThostFtdcQryProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryProductGroupField_get_ProductID(PyCThostFtdcQryProductGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static int PyCThostFtdcQryProductGroupField_set_reserve1(PyCThostFtdcQryProductGroupField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryProductGroupField_set_ExchangeID(PyCThostFtdcQryProductGroupField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryProductGroupField_set_ProductID(PyCThostFtdcQryProductGroupField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryProductGroupField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcQryProductGroupField_get_reserve1, (setter)PyCThostFtdcQryProductGroupField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryProductGroupField_get_ExchangeID, (setter)PyCThostFtdcQryProductGroupField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcQryProductGroupField_get_ProductID, (setter)PyCThostFtdcQryProductGroupField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryProductGroupFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryProductGroupField",	/* tp_name */
	sizeof(PyCThostFtdcQryProductGroupField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryProductGroupField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryProductGroupField_repr,   /* tp_repr */
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
	"CThostFtdcQryProductGroupField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryProductGroupField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryProductGroupField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryProductGroupField_new,       /* tp_new */
};

int PyCThostFtdcQryProductGroupFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryProductGroupField  */
	if (PyType_Ready(&PyCThostFtdcQryProductGroupFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryProductGroupField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryProductGroupFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryProductGroupField", (PyObject *)&PyCThostFtdcQryProductGroupFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryProductGroupField to module");
        Py_DECREF(&PyCThostFtdcQryProductGroupFieldType);
		return -1;
    }

    return 0;
}
