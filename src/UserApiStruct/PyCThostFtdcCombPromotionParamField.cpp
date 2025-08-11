
#include "PyCThostFtdcCombPromotionParamField.h"



static PyObject *PyCThostFtdcCombPromotionParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCombPromotionParamField *self = (PyCThostFtdcCombPromotionParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCombPromotionParamField_init(PyCThostFtdcCombPromotionParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "CombHedgeFlag", "Xparameter",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pCombPromotionParamField_ExchangeID = NULL;
	Py_ssize_t pCombPromotionParamField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pCombPromotionParamField_InstrumentID = NULL;
	Py_ssize_t pCombPromotionParamField_InstrumentID_len = 0;

	//TThostFtdcCombHedgeFlagType char[5]
	const char *pCombPromotionParamField_CombHedgeFlag = NULL;
	Py_ssize_t pCombPromotionParamField_CombHedgeFlag_len = 0;

	//TThostFtdcDiscountRatioType double
	double pCombPromotionParamField_Xparameter = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#d", (char **)kwlist
#endif

		, &pCombPromotionParamField_ExchangeID, &pCombPromotionParamField_ExchangeID_len
		, &pCombPromotionParamField_InstrumentID, &pCombPromotionParamField_InstrumentID_len
		, &pCombPromotionParamField_CombHedgeFlag, &pCombPromotionParamField_CombHedgeFlag_len
		, &pCombPromotionParamField_Xparameter


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pCombPromotionParamField_ExchangeID != NULL) {
		if(pCombPromotionParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pCombPromotionParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pCombPromotionParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pCombPromotionParamField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pCombPromotionParamField_InstrumentID != NULL) {
		if(pCombPromotionParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pCombPromotionParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pCombPromotionParamField_InstrumentID, sizeof(self->data.InstrumentID) );
		pCombPromotionParamField_InstrumentID = NULL;
	}

	//TThostFtdcCombHedgeFlagType char[5]
	if(pCombPromotionParamField_CombHedgeFlag != NULL) {
		if(pCombPromotionParamField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
			PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", pCombPromotionParamField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
			return -1;
		}
		strncpy(self->data.CombHedgeFlag, pCombPromotionParamField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
		pCombPromotionParamField_CombHedgeFlag = NULL;
	}

	//TThostFtdcDiscountRatioType double
	self->data.Xparameter = pCombPromotionParamField_Xparameter;


    return 0;
}

static void PyCThostFtdcCombPromotionParamField_dealloc(PyCThostFtdcCombPromotionParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCombPromotionParamField_repr(PyCThostFtdcCombPromotionParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "CombHedgeFlag", self->data.CombHedgeFlag 
		, "Xparameter", self->data.Xparameter


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombPromotionParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCombPromotionParamField_get_ExchangeID(PyCThostFtdcCombPromotionParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcCombPromotionParamField_get_InstrumentID(PyCThostFtdcCombPromotionParamField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcCombPromotionParamField_get_CombHedgeFlag(PyCThostFtdcCombPromotionParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CombHedgeFlag);
}

static PyObject *PyCThostFtdcCombPromotionParamField_get_Xparameter(PyCThostFtdcCombPromotionParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Xparameter);
}

static int PyCThostFtdcCombPromotionParamField_set_ExchangeID(PyCThostFtdcCombPromotionParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombPromotionParamField_set_InstrumentID(PyCThostFtdcCombPromotionParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombPromotionParamField_set_CombHedgeFlag(PyCThostFtdcCombPromotionParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.CombHedgeFlag, buf, sizeof(self->data.CombHedgeFlag));
	return 0;
}

static int PyCThostFtdcCombPromotionParamField_set_Xparameter(PyCThostFtdcCombPromotionParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Xparameter Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Xparameter = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcCombPromotionParamField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcCombPromotionParamField_get_ExchangeID, (setter)PyCThostFtdcCombPromotionParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcCombPromotionParamField_get_InstrumentID, (setter)PyCThostFtdcCombPromotionParamField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcCombPromotionParamField_get_CombHedgeFlag, (setter)PyCThostFtdcCombPromotionParamField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"Xparameter", (getter)PyCThostFtdcCombPromotionParamField_get_Xparameter, (setter)PyCThostFtdcCombPromotionParamField_set_Xparameter, (char *)"Xparameter", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCombPromotionParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCombPromotionParamField",	/* tp_name */
	sizeof(PyCThostFtdcCombPromotionParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCombPromotionParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCombPromotionParamField_repr,   /* tp_repr */
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
	"CThostFtdcCombPromotionParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCombPromotionParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCombPromotionParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCombPromotionParamField_new,       /* tp_new */
};

int PyCThostFtdcCombPromotionParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCombPromotionParamField  */
	if (PyType_Ready(&PyCThostFtdcCombPromotionParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCombPromotionParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCombPromotionParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCombPromotionParamField", (PyObject *)&PyCThostFtdcCombPromotionParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombPromotionParamField to module");
        Py_DECREF(&PyCThostFtdcCombPromotionParamFieldType);
		return -1;
    }

    return 0;
}
