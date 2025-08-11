
#include "PyCThostFtdcQryClassifiedInstrumentField.h"



static PyObject *PyCThostFtdcQryClassifiedInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryClassifiedInstrumentField *self = (PyCThostFtdcQryClassifiedInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryClassifiedInstrumentField_init(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "ExchangeID", "ExchangeInstID", "ProductID", "TradingType", "ClassType",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryClassifiedInstrumentField_InstrumentID = NULL;
	Py_ssize_t pQryClassifiedInstrumentField_InstrumentID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryClassifiedInstrumentField_ExchangeID = NULL;
	Py_ssize_t pQryClassifiedInstrumentField_ExchangeID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pQryClassifiedInstrumentField_ExchangeInstID = NULL;
	Py_ssize_t pQryClassifiedInstrumentField_ExchangeInstID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryClassifiedInstrumentField_ProductID = NULL;
	Py_ssize_t pQryClassifiedInstrumentField_ProductID_len = 0;

	//TThostFtdcTradingTypeType char
	char pQryClassifiedInstrumentField_TradingType = 0;

	//TThostFtdcClassTypeType char
	char pQryClassifiedInstrumentField_ClassType = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cc", (char **)kwlist
#endif

		, &pQryClassifiedInstrumentField_InstrumentID, &pQryClassifiedInstrumentField_InstrumentID_len
		, &pQryClassifiedInstrumentField_ExchangeID, &pQryClassifiedInstrumentField_ExchangeID_len
		, &pQryClassifiedInstrumentField_ExchangeInstID, &pQryClassifiedInstrumentField_ExchangeInstID_len
		, &pQryClassifiedInstrumentField_ProductID, &pQryClassifiedInstrumentField_ProductID_len
		, &pQryClassifiedInstrumentField_TradingType
		, &pQryClassifiedInstrumentField_ClassType


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pQryClassifiedInstrumentField_InstrumentID != NULL) {
		if(pQryClassifiedInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryClassifiedInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryClassifiedInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryClassifiedInstrumentField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pQryClassifiedInstrumentField_ExchangeID != NULL) {
		if(pQryClassifiedInstrumentField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryClassifiedInstrumentField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryClassifiedInstrumentField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryClassifiedInstrumentField_ExchangeID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pQryClassifiedInstrumentField_ExchangeInstID != NULL) {
		if(pQryClassifiedInstrumentField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pQryClassifiedInstrumentField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pQryClassifiedInstrumentField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pQryClassifiedInstrumentField_ExchangeInstID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryClassifiedInstrumentField_ProductID != NULL) {
		if(pQryClassifiedInstrumentField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pQryClassifiedInstrumentField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pQryClassifiedInstrumentField_ProductID, sizeof(self->data.ProductID) );
		pQryClassifiedInstrumentField_ProductID = NULL;
	}

	//TThostFtdcTradingTypeType char
	self->data.TradingType = pQryClassifiedInstrumentField_TradingType;

	//TThostFtdcClassTypeType char
	self->data.ClassType = pQryClassifiedInstrumentField_ClassType;



    return 0;
}

static void PyCThostFtdcQryClassifiedInstrumentField_dealloc(PyCThostFtdcQryClassifiedInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_repr(PyCThostFtdcQryClassifiedInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:c}"
#endif

		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeID", self->data.ExchangeID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "ProductID", self->data.ProductID 
		, "TradingType", self->data.TradingType
		, "ClassType", self->data.ClassType


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryClassifiedInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_InstrumentID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeInstID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ProductID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_TradingType(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradingType), 1);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ClassType(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ClassType), 1);
}

static int PyCThostFtdcQryClassifiedInstrumentField_set_InstrumentID(PyCThostFtdcQryClassifiedInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeID(PyCThostFtdcQryClassifiedInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeInstID(PyCThostFtdcQryClassifiedInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryClassifiedInstrumentField_set_ProductID(PyCThostFtdcQryClassifiedInstrumentField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryClassifiedInstrumentField_set_TradingType(PyCThostFtdcQryClassifiedInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingType)) {
		PyErr_SetString(PyExc_ValueError, "TradingType must be less than 1 bytes");
		return -1;
	}
	self->data.TradingType = *buf;
	return 0;
}

static int PyCThostFtdcQryClassifiedInstrumentField_set_ClassType(PyCThostFtdcQryClassifiedInstrumentField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClassType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClassType)) {
		PyErr_SetString(PyExc_ValueError, "ClassType must be less than 1 bytes");
		return -1;
	}
	self->data.ClassType = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcQryClassifiedInstrumentField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_InstrumentID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeInstID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ProductID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"TradingType", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_TradingType, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_TradingType, (char *)"TradingType", NULL},
	 {(char *)"ClassType", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ClassType, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ClassType, (char *)"ClassType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryClassifiedInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryClassifiedInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcQryClassifiedInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryClassifiedInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryClassifiedInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcQryClassifiedInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryClassifiedInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryClassifiedInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryClassifiedInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcQryClassifiedInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryClassifiedInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcQryClassifiedInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryClassifiedInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryClassifiedInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryClassifiedInstrumentField", (PyObject *)&PyCThostFtdcQryClassifiedInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryClassifiedInstrumentField to module");
        Py_DECREF(&PyCThostFtdcQryClassifiedInstrumentFieldType);
		return -1;
    }

    return 0;
}
