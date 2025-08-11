
#include "PyCThostFtdcQryExchangeRateField.h"



static PyObject *PyCThostFtdcQryExchangeRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeRateField *self = (PyCThostFtdcQryExchangeRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeRateField_init(PyCThostFtdcQryExchangeRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "FromCurrencyID", "ToCurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryExchangeRateField_BrokerID = NULL;
	Py_ssize_t pQryExchangeRateField_BrokerID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQryExchangeRateField_FromCurrencyID = NULL;
	Py_ssize_t pQryExchangeRateField_FromCurrencyID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pQryExchangeRateField_ToCurrencyID = NULL;
	Py_ssize_t pQryExchangeRateField_ToCurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryExchangeRateField_BrokerID, &pQryExchangeRateField_BrokerID_len
		, &pQryExchangeRateField_FromCurrencyID, &pQryExchangeRateField_FromCurrencyID_len
		, &pQryExchangeRateField_ToCurrencyID, &pQryExchangeRateField_ToCurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryExchangeRateField_BrokerID != NULL) {
		if(pQryExchangeRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryExchangeRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryExchangeRateField_BrokerID, sizeof(self->data.BrokerID) );
		pQryExchangeRateField_BrokerID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQryExchangeRateField_FromCurrencyID != NULL) {
		if(pQryExchangeRateField_FromCurrencyID_len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "FromCurrencyID too long: length=%zd (max allowed is %zd)", pQryExchangeRateField_FromCurrencyID_len, (Py_ssize_t)sizeof(self->data.FromCurrencyID));
			return -1;
		}
		strncpy(self->data.FromCurrencyID, pQryExchangeRateField_FromCurrencyID, sizeof(self->data.FromCurrencyID) );
		pQryExchangeRateField_FromCurrencyID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pQryExchangeRateField_ToCurrencyID != NULL) {
		if(pQryExchangeRateField_ToCurrencyID_len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "ToCurrencyID too long: length=%zd (max allowed is %zd)", pQryExchangeRateField_ToCurrencyID_len, (Py_ssize_t)sizeof(self->data.ToCurrencyID));
			return -1;
		}
		strncpy(self->data.ToCurrencyID, pQryExchangeRateField_ToCurrencyID, sizeof(self->data.ToCurrencyID) );
		pQryExchangeRateField_ToCurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryExchangeRateField_dealloc(PyCThostFtdcQryExchangeRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeRateField_repr(PyCThostFtdcQryExchangeRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "FromCurrencyID", self->data.FromCurrencyID 
		, "ToCurrencyID", self->data.ToCurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryExchangeRateField_get_BrokerID(PyCThostFtdcQryExchangeRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryExchangeRateField_get_FromCurrencyID(PyCThostFtdcQryExchangeRateField *self, void *closure) {
	return PyBytes_FromString(self->data.FromCurrencyID);
}

static PyObject *PyCThostFtdcQryExchangeRateField_get_ToCurrencyID(PyCThostFtdcQryExchangeRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ToCurrencyID);
}

static int PyCThostFtdcQryExchangeRateField_set_BrokerID(PyCThostFtdcQryExchangeRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryExchangeRateField_set_FromCurrencyID(PyCThostFtdcQryExchangeRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FromCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FromCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "FromCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.FromCurrencyID, buf, sizeof(self->data.FromCurrencyID));
	return 0;
}

static int PyCThostFtdcQryExchangeRateField_set_ToCurrencyID(PyCThostFtdcQryExchangeRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ToCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ToCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "ToCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.ToCurrencyID, buf, sizeof(self->data.ToCurrencyID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryExchangeRateField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryExchangeRateField_get_BrokerID, (setter)PyCThostFtdcQryExchangeRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"FromCurrencyID", (getter)PyCThostFtdcQryExchangeRateField_get_FromCurrencyID, (setter)PyCThostFtdcQryExchangeRateField_set_FromCurrencyID, (char *)"FromCurrencyID", NULL},
	 {(char *)"ToCurrencyID", (getter)PyCThostFtdcQryExchangeRateField_get_ToCurrencyID, (setter)PyCThostFtdcQryExchangeRateField_set_ToCurrencyID, (char *)"ToCurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeRateField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeRateField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeRateField", (PyObject *)&PyCThostFtdcQryExchangeRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeRateField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeRateFieldType);
		return -1;
    }

    return 0;
}
