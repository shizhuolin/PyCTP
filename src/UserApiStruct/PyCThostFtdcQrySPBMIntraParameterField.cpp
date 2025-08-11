
#include "PyCThostFtdcQrySPBMIntraParameterField.h"



static PyObject *PyCThostFtdcQrySPBMIntraParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySPBMIntraParameterField *self = (PyCThostFtdcQrySPBMIntraParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySPBMIntraParameterField_init(PyCThostFtdcQrySPBMIntraParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ProdFamilyCode",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQrySPBMIntraParameterField_ExchangeID = NULL;
	Py_ssize_t pQrySPBMIntraParameterField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQrySPBMIntraParameterField_ProdFamilyCode = NULL;
	Py_ssize_t pQrySPBMIntraParameterField_ProdFamilyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQrySPBMIntraParameterField_ExchangeID, &pQrySPBMIntraParameterField_ExchangeID_len
		, &pQrySPBMIntraParameterField_ProdFamilyCode, &pQrySPBMIntraParameterField_ProdFamilyCode_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQrySPBMIntraParameterField_ExchangeID != NULL) {
		if(pQrySPBMIntraParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQrySPBMIntraParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQrySPBMIntraParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQrySPBMIntraParameterField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQrySPBMIntraParameterField_ProdFamilyCode != NULL) {
		if(pQrySPBMIntraParameterField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pQrySPBMIntraParameterField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pQrySPBMIntraParameterField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pQrySPBMIntraParameterField_ProdFamilyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySPBMIntraParameterField_dealloc(PyCThostFtdcQrySPBMIntraParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySPBMIntraParameterField_repr(PyCThostFtdcQrySPBMIntraParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySPBMIntraParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySPBMIntraParameterField_get_ExchangeID(PyCThostFtdcQrySPBMIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQrySPBMIntraParameterField_get_ProdFamilyCode(PyCThostFtdcQrySPBMIntraParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static int PyCThostFtdcQrySPBMIntraParameterField_set_ExchangeID(PyCThostFtdcQrySPBMIntraParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySPBMIntraParameterField_set_ProdFamilyCode(PyCThostFtdcQrySPBMIntraParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQrySPBMIntraParameterField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQrySPBMIntraParameterField_get_ExchangeID, (setter)PyCThostFtdcQrySPBMIntraParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQrySPBMIntraParameterField_get_ProdFamilyCode, (setter)PyCThostFtdcQrySPBMIntraParameterField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySPBMIntraParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySPBMIntraParameterField",	/* tp_name */
	sizeof(PyCThostFtdcQrySPBMIntraParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySPBMIntraParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySPBMIntraParameterField_repr,   /* tp_repr */
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
	"CThostFtdcQrySPBMIntraParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySPBMIntraParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySPBMIntraParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySPBMIntraParameterField_new,       /* tp_new */
};

int PyCThostFtdcQrySPBMIntraParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySPBMIntraParameterField  */
	if (PyType_Ready(&PyCThostFtdcQrySPBMIntraParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySPBMIntraParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySPBMIntraParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySPBMIntraParameterField", (PyObject *)&PyCThostFtdcQrySPBMIntraParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySPBMIntraParameterField to module");
        Py_DECREF(&PyCThostFtdcQrySPBMIntraParameterFieldType);
		return -1;
    }

    return 0;
}
