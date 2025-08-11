
#include "PyCThostFtdcExchangeSequenceField.h"



static PyObject *PyCThostFtdcExchangeSequenceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeSequenceField *self = (PyCThostFtdcExchangeSequenceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeSequenceField_init(PyCThostFtdcExchangeSequenceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "SequenceNo", "MarketStatus",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeSequenceField_ExchangeID = NULL;
	Py_ssize_t pExchangeSequenceField_ExchangeID_len = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeSequenceField_SequenceNo = 0;

	//TThostFtdcInstrumentStatusType char
	char pExchangeSequenceField_MarketStatus = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#ic", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#ic", (char **)kwlist
#endif

		, &pExchangeSequenceField_ExchangeID, &pExchangeSequenceField_ExchangeID_len
		, &pExchangeSequenceField_SequenceNo
		, &pExchangeSequenceField_MarketStatus


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeSequenceField_ExchangeID != NULL) {
		if(pExchangeSequenceField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeSequenceField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeSequenceField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeSequenceField_ExchangeID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExchangeSequenceField_SequenceNo;

	//TThostFtdcInstrumentStatusType char
	self->data.MarketStatus = pExchangeSequenceField_MarketStatus;



    return 0;
}

static void PyCThostFtdcExchangeSequenceField_dealloc(PyCThostFtdcExchangeSequenceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeSequenceField_repr(PyCThostFtdcExchangeSequenceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:i,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:i,s:c}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "SequenceNo", self->data.SequenceNo
		, "MarketStatus", self->data.MarketStatus


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeSequenceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeSequenceField_get_ExchangeID(PyCThostFtdcExchangeSequenceField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeSequenceField_get_SequenceNo(PyCThostFtdcExchangeSequenceField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExchangeSequenceField_get_MarketStatus(PyCThostFtdcExchangeSequenceField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MarketStatus), 1);
}

static int PyCThostFtdcExchangeSequenceField_set_ExchangeID(PyCThostFtdcExchangeSequenceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeSequenceField_set_SequenceNo(PyCThostFtdcExchangeSequenceField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeSequenceField_set_MarketStatus(PyCThostFtdcExchangeSequenceField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MarketStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MarketStatus)) {
		PyErr_SetString(PyExc_ValueError, "MarketStatus must be less than 1 bytes");
		return -1;
	}
	self->data.MarketStatus = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcExchangeSequenceField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeSequenceField_get_ExchangeID, (setter)PyCThostFtdcExchangeSequenceField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeSequenceField_get_SequenceNo, (setter)PyCThostFtdcExchangeSequenceField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"MarketStatus", (getter)PyCThostFtdcExchangeSequenceField_get_MarketStatus, (setter)PyCThostFtdcExchangeSequenceField_set_MarketStatus, (char *)"MarketStatus", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeSequenceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeSequenceField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeSequenceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeSequenceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeSequenceField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeSequenceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeSequenceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeSequenceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeSequenceField_new,       /* tp_new */
};

int PyCThostFtdcExchangeSequenceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeSequenceField  */
	if (PyType_Ready(&PyCThostFtdcExchangeSequenceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeSequenceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeSequenceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeSequenceField", (PyObject *)&PyCThostFtdcExchangeSequenceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeSequenceField to module");
        Py_DECREF(&PyCThostFtdcExchangeSequenceFieldType);
		return -1;
    }

    return 0;
}
