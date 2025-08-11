
#include "PyCThostFtdcIndexPriceField.h"



static PyObject *PyCThostFtdcIndexPriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcIndexPriceField *self = (PyCThostFtdcIndexPriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcIndexPriceField_init(PyCThostFtdcIndexPriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "ClosePrice", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pIndexPriceField_BrokerID = NULL;
	Py_ssize_t pIndexPriceField_BrokerID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pIndexPriceField_reserve1 = NULL;
	Py_ssize_t pIndexPriceField_reserve1_len = 0;

	//TThostFtdcPriceType double
	double pIndexPriceField_ClosePrice = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pIndexPriceField_InstrumentID = NULL;
	Py_ssize_t pIndexPriceField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#", (char **)kwlist
#endif

		, &pIndexPriceField_BrokerID, &pIndexPriceField_BrokerID_len
		, &pIndexPriceField_reserve1, &pIndexPriceField_reserve1_len
		, &pIndexPriceField_ClosePrice
		, &pIndexPriceField_InstrumentID, &pIndexPriceField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pIndexPriceField_BrokerID != NULL) {
		if(pIndexPriceField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pIndexPriceField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pIndexPriceField_BrokerID, sizeof(self->data.BrokerID) );
		pIndexPriceField_BrokerID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pIndexPriceField_reserve1 != NULL) {
		if(pIndexPriceField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pIndexPriceField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pIndexPriceField_reserve1, sizeof(self->data.reserve1) );
		pIndexPriceField_reserve1 = NULL;
	}

	//TThostFtdcPriceType double
	self->data.ClosePrice = pIndexPriceField_ClosePrice;
	//TThostFtdcInstrumentIDType char[81]
	if(pIndexPriceField_InstrumentID != NULL) {
		if(pIndexPriceField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pIndexPriceField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pIndexPriceField_InstrumentID, sizeof(self->data.InstrumentID) );
		pIndexPriceField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcIndexPriceField_dealloc(PyCThostFtdcIndexPriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcIndexPriceField_repr(PyCThostFtdcIndexPriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "reserve1", self->data.reserve1 
		, "ClosePrice", self->data.ClosePrice
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIndexPriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcIndexPriceField_get_BrokerID(PyCThostFtdcIndexPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcIndexPriceField_get_reserve1(PyCThostFtdcIndexPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcIndexPriceField_get_ClosePrice(PyCThostFtdcIndexPriceField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ClosePrice);
}

static PyObject *PyCThostFtdcIndexPriceField_get_InstrumentID(PyCThostFtdcIndexPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcIndexPriceField_set_BrokerID(PyCThostFtdcIndexPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIndexPriceField_set_reserve1(PyCThostFtdcIndexPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIndexPriceField_set_ClosePrice(PyCThostFtdcIndexPriceField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ClosePrice = buf;
    return 0;
}

static int PyCThostFtdcIndexPriceField_set_InstrumentID(PyCThostFtdcIndexPriceField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcIndexPriceField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcIndexPriceField_get_BrokerID, (setter)PyCThostFtdcIndexPriceField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcIndexPriceField_get_reserve1, (setter)PyCThostFtdcIndexPriceField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ClosePrice", (getter)PyCThostFtdcIndexPriceField_get_ClosePrice, (setter)PyCThostFtdcIndexPriceField_set_ClosePrice, (char *)"ClosePrice", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcIndexPriceField_get_InstrumentID, (setter)PyCThostFtdcIndexPriceField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcIndexPriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcIndexPriceField",	/* tp_name */
	sizeof(PyCThostFtdcIndexPriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcIndexPriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcIndexPriceField_repr,   /* tp_repr */
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
	"CThostFtdcIndexPriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcIndexPriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcIndexPriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcIndexPriceField_new,       /* tp_new */
};

int PyCThostFtdcIndexPriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcIndexPriceField  */
	if (PyType_Ready(&PyCThostFtdcIndexPriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcIndexPriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcIndexPriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcIndexPriceField", (PyObject *)&PyCThostFtdcIndexPriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIndexPriceField to module");
        Py_DECREF(&PyCThostFtdcIndexPriceFieldType);
		return -1;
    }

    return 0;
}
