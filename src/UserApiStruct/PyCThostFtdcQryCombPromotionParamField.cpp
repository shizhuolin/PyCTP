
#include "PyCThostFtdcQryCombPromotionParamField.h"



static PyObject *PyCThostFtdcQryCombPromotionParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCombPromotionParamField *self = (PyCThostFtdcQryCombPromotionParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryCombPromotionParamField_init(PyCThostFtdcQryCombPromotionParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryCombPromotionParamField_ExchangeID = NULL;
	Py_ssize_t pQryCombPromotionParamField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryCombPromotionParamField_InstrumentID = NULL;
	Py_ssize_t pQryCombPromotionParamField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryCombPromotionParamField_ExchangeID, &pQryCombPromotionParamField_ExchangeID_len
		, &pQryCombPromotionParamField_InstrumentID, &pQryCombPromotionParamField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryCombPromotionParamField_ExchangeID != NULL) {
		if(pQryCombPromotionParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryCombPromotionParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryCombPromotionParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryCombPromotionParamField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryCombPromotionParamField_InstrumentID != NULL) {
		if(pQryCombPromotionParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryCombPromotionParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryCombPromotionParamField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryCombPromotionParamField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryCombPromotionParamField_dealloc(PyCThostFtdcQryCombPromotionParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCombPromotionParamField_repr(PyCThostFtdcQryCombPromotionParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombPromotionParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryCombPromotionParamField_get_ExchangeID(PyCThostFtdcQryCombPromotionParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryCombPromotionParamField_get_InstrumentID(PyCThostFtdcQryCombPromotionParamField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryCombPromotionParamField_set_ExchangeID(PyCThostFtdcQryCombPromotionParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryCombPromotionParamField_set_InstrumentID(PyCThostFtdcQryCombPromotionParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryCombPromotionParamField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryCombPromotionParamField_get_ExchangeID, (setter)PyCThostFtdcQryCombPromotionParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryCombPromotionParamField_get_InstrumentID, (setter)PyCThostFtdcQryCombPromotionParamField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCombPromotionParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCombPromotionParamField",	/* tp_name */
	sizeof(PyCThostFtdcQryCombPromotionParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCombPromotionParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCombPromotionParamField_repr,   /* tp_repr */
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
	"CThostFtdcQryCombPromotionParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCombPromotionParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCombPromotionParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCombPromotionParamField_new,       /* tp_new */
};

int PyCThostFtdcQryCombPromotionParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCombPromotionParamField  */
	if (PyType_Ready(&PyCThostFtdcQryCombPromotionParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCombPromotionParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCombPromotionParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCombPromotionParamField", (PyObject *)&PyCThostFtdcQryCombPromotionParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombPromotionParamField to module");
        Py_DECREF(&PyCThostFtdcQryCombPromotionParamFieldType);
		return -1;
    }

    return 0;
}
