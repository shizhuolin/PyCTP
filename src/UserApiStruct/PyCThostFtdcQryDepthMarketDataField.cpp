
#include "PyCThostFtdcQryDepthMarketDataField.h"



static PyObject *PyCThostFtdcQryDepthMarketDataField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryDepthMarketDataField *self = (PyCThostFtdcQryDepthMarketDataField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryDepthMarketDataField_init(PyCThostFtdcQryDepthMarketDataField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "InstrumentID", "ProductClass",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryDepthMarketDataField_reserve1 = NULL;
	Py_ssize_t pQryDepthMarketDataField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryDepthMarketDataField_ExchangeID = NULL;
	Py_ssize_t pQryDepthMarketDataField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryDepthMarketDataField_InstrumentID = NULL;
	Py_ssize_t pQryDepthMarketDataField_InstrumentID_len = 0;

	//TThostFtdcProductClassType char
	char pQryDepthMarketDataField_ProductClass = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#c", (char **)kwlist
#endif

		, &pQryDepthMarketDataField_reserve1, &pQryDepthMarketDataField_reserve1_len
		, &pQryDepthMarketDataField_ExchangeID, &pQryDepthMarketDataField_ExchangeID_len
		, &pQryDepthMarketDataField_InstrumentID, &pQryDepthMarketDataField_InstrumentID_len
		, &pQryDepthMarketDataField_ProductClass


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryDepthMarketDataField_reserve1 != NULL) {
		if(pQryDepthMarketDataField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryDepthMarketDataField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryDepthMarketDataField_reserve1, sizeof(self->data.reserve1) );
		pQryDepthMarketDataField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryDepthMarketDataField_ExchangeID != NULL) {
		if(pQryDepthMarketDataField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryDepthMarketDataField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryDepthMarketDataField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryDepthMarketDataField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryDepthMarketDataField_InstrumentID != NULL) {
		if(pQryDepthMarketDataField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryDepthMarketDataField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryDepthMarketDataField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryDepthMarketDataField_InstrumentID = NULL;
	}

	//TThostFtdcProductClassType char
	self->data.ProductClass = pQryDepthMarketDataField_ProductClass;



    return 0;
}

static void PyCThostFtdcQryDepthMarketDataField_dealloc(PyCThostFtdcQryDepthMarketDataField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryDepthMarketDataField_repr(PyCThostFtdcQryDepthMarketDataField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c}"
#endif

		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "ProductClass", self->data.ProductClass


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryDepthMarketDataField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryDepthMarketDataField_get_reserve1(PyCThostFtdcQryDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryDepthMarketDataField_get_ExchangeID(PyCThostFtdcQryDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryDepthMarketDataField_get_InstrumentID(PyCThostFtdcQryDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcQryDepthMarketDataField_get_ProductClass(PyCThostFtdcQryDepthMarketDataField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ProductClass), 1);
}

static int PyCThostFtdcQryDepthMarketDataField_set_reserve1(PyCThostFtdcQryDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryDepthMarketDataField_set_ExchangeID(PyCThostFtdcQryDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryDepthMarketDataField_set_InstrumentID(PyCThostFtdcQryDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryDepthMarketDataField_set_ProductClass(PyCThostFtdcQryDepthMarketDataField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductClass)) {
		PyErr_SetString(PyExc_ValueError, "ProductClass must be less than 1 bytes");
		return -1;
	}
	self->data.ProductClass = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcQryDepthMarketDataField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcQryDepthMarketDataField_get_reserve1, (setter)PyCThostFtdcQryDepthMarketDataField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryDepthMarketDataField_get_ExchangeID, (setter)PyCThostFtdcQryDepthMarketDataField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryDepthMarketDataField_get_InstrumentID, (setter)PyCThostFtdcQryDepthMarketDataField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ProductClass", (getter)PyCThostFtdcQryDepthMarketDataField_get_ProductClass, (setter)PyCThostFtdcQryDepthMarketDataField_set_ProductClass, (char *)"ProductClass", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryDepthMarketDataFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryDepthMarketDataField",	/* tp_name */
	sizeof(PyCThostFtdcQryDepthMarketDataField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryDepthMarketDataField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryDepthMarketDataField_repr,   /* tp_repr */
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
	"CThostFtdcQryDepthMarketDataField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryDepthMarketDataField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryDepthMarketDataField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryDepthMarketDataField_new,       /* tp_new */
};

int PyCThostFtdcQryDepthMarketDataFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryDepthMarketDataField  */
	if (PyType_Ready(&PyCThostFtdcQryDepthMarketDataFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryDepthMarketDataField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryDepthMarketDataFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryDepthMarketDataField", (PyObject *)&PyCThostFtdcQryDepthMarketDataFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryDepthMarketDataField to module");
        Py_DECREF(&PyCThostFtdcQryDepthMarketDataFieldType);
		return -1;
    }

    return 0;
}
