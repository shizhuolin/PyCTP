
#include "PyCThostFtdcQrySPBMFutureParameterField.h"



static PyObject *PyCThostFtdcQrySPBMFutureParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPBMFutureParameterField *self = (PyCThostFtdcQrySPBMFutureParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPBMFutureParameterField_init(PyCThostFtdcQrySPBMFutureParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "ProdFamilyCode",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQrySPBMFutureParameterField_ExchangeID = NULL;
	Py_ssize_t pQrySPBMFutureParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQrySPBMFutureParameterField_InstrumentID = NULL;
	Py_ssize_t pQrySPBMFutureParameterField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQrySPBMFutureParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pQrySPBMFutureParameterField_ProdFamilyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQrySPBMFutureParameterField_ExchangeID, &pQrySPBMFutureParameterField_ExchangeID_len
		, &pQrySPBMFutureParameterField_InstrumentID, &pQrySPBMFutureParameterField_InstrumentID_len
		, &pQrySPBMFutureParameterField_ProdFamilyCode, &pQrySPBMFutureParameterField_ProdFamilyCode_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQrySPBMFutureParameterField_ExchangeID != NULL) {
		if(pQrySPBMFutureParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQrySPBMFutureParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQrySPBMFutureParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQrySPBMFutureParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQrySPBMFutureParameterField_InstrumentID != NULL) {
		if(pQrySPBMFutureParameterField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQrySPBMFutureParameterField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQrySPBMFutureParameterField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQrySPBMFutureParameterField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQrySPBMFutureParameterField_ProdFamilyCode != NULL) {
		if(pQrySPBMFutureParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pQrySPBMFutureParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pQrySPBMFutureParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pQrySPBMFutureParameterField_ProdFamilyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySPBMFutureParameterField_dealloc(PyCThostFtdcQrySPBMFutureParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPBMFutureParameterField_repr(PyCThostFtdcQrySPBMFutureParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMFutureParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySPBMFutureParameterField_get_ExchangeID(PyCThostFtdcQrySPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQrySPBMFutureParameterField_get_InstrumentID(PyCThostFtdcQrySPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcQrySPBMFutureParameterField_get_ProdFamilyCode(PyCThostFtdcQrySPBMFutureParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMFutureParameterField_set_ExchangeID(PyCThostFtdcQrySPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySPBMFutureParameterField_set_InstrumentID(PyCThostFtdcQrySPBMFutureParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySPBMFutureParameterField_set_ProdFamilyCode(PyCThostFtdcQrySPBMFutureParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
	return 0;
}



static PyGetSetDef PyCThostFtdcQrySPBMFutureParameterField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQrySPBMFutureParameterField_get_ExchangeID, (setter)PyCThostFtdcQrySPBMFutureParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQrySPBMFutureParameterField_get_InstrumentID, (setter)PyCThostFtdcQrySPBMFutureParameterField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQrySPBMFutureParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcQrySPBMFutureParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPBMFutureParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPBMFutureParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPBMFutureParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPBMFutureParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPBMFutureParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPBMFutureParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPBMFutureParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPBMFutureParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPBMFutureParameterField_new,       /* tp_new */
};

int PyCThostFtdcQrySPBMFutureParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPBMFutureParameterField  */
	if (PyType_Ready(&PyCThostFtdcQrySPBMFutureParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPBMFutureParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPBMFutureParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPBMFutureParameterField", (PyObject *)&PyCThostFtdcQrySPBMFutureParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMFutureParameterField to module");
        Py_DECREF(&PyCThostFtdcQrySPBMFutureParameterFieldType);
		return -1;
    }

    return 0;
}
