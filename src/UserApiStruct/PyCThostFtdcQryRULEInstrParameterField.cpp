
#include "PyCThostFtdcQryRULEInstrParameterField.h"



static PyObject *PyCThostFtdcQryRULEInstrParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryRULEInstrParameterField *self = (PyCThostFtdcQryRULEInstrParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryRULEInstrParameterField_init(PyCThostFtdcQryRULEInstrParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryRULEInstrParameterField_ExchangeID = NULL;
	Py_ssize_t pQryRULEInstrParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryRULEInstrParameterField_InstrumentID = NULL;
	Py_ssize_t pQryRULEInstrParameterField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryRULEInstrParameterField_ExchangeID, &pQryRULEInstrParameterField_ExchangeID_len
		, &pQryRULEInstrParameterField_InstrumentID, &pQryRULEInstrParameterField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryRULEInstrParameterField_ExchangeID != NULL) {
		if(pQryRULEInstrParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryRULEInstrParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryRULEInstrParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryRULEInstrParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryRULEInstrParameterField_InstrumentID != NULL) {
		if(pQryRULEInstrParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryRULEInstrParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryRULEInstrParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryRULEInstrParameterField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryRULEInstrParameterField_dealloc(PyCThostFtdcQryRULEInstrParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryRULEInstrParameterField_repr(PyCThostFtdcQryRULEInstrParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryRULEInstrParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryRULEInstrParameterField_get_ExchangeID(PyCThostFtdcQryRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryRULEInstrParameterField_get_InstrumentID(PyCThostFtdcQryRULEInstrParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryRULEInstrParameterField_set_ExchangeID(PyCThostFtdcQryRULEInstrParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryRULEInstrParameterField_set_InstrumentID(PyCThostFtdcQryRULEInstrParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryRULEInstrParameterField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryRULEInstrParameterField_get_ExchangeID, (setter)PyCThostFtdcQryRULEInstrParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryRULEInstrParameterField_get_InstrumentID, (setter)PyCThostFtdcQryRULEInstrParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryRULEInstrParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryRULEInstrParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQryRULEInstrParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryRULEInstrParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryRULEInstrParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQryRULEInstrParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryRULEInstrParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryRULEInstrParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryRULEInstrParameterField_new,       /* tp_new */
};

int PyCThostFtdcQryRULEInstrParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryRULEInstrParameterField  */
	if (PyType_Ready(&PyCThostFtdcQryRULEInstrParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryRULEInstrParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryRULEInstrParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryRULEInstrParameterField", (PyObject *)&PyCThostFtdcQryRULEInstrParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryRULEInstrParameterField to module");
        Py_DECREF(&PyCThostFtdcQryRULEInstrParameterFieldType);
		return -1;
    }

    return 0;
}
