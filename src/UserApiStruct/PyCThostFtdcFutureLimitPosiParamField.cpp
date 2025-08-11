
#include "PyCThostFtdcFutureLimitPosiParamField.h"



static PyObject *PyCThostFtdcFutureLimitPosiParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcFutureLimitPosiParamField *self = (PyCThostFtdcFutureLimitPosiParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcFutureLimitPosiParamField_init(PyCThostFtdcFutureLimitPosiParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorRange", "BrokerID", "InvestorID", "reserve1", "SpecOpenVolume", "ArbiOpenVolume", "OpenVolume", "ProductID",  NULL};

	//TThostFtdcInvestorRangeType char
	char pFutureLimitPosiParamField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pFutureLimitPosiParamField_BrokerID = NULL;
	Py_ssize_t pFutureLimitPosiParamField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pFutureLimitPosiParamField_InvestorID = NULL;
	Py_ssize_t pFutureLimitPosiParamField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pFutureLimitPosiParamField_reserve1 = NULL;
	Py_ssize_t pFutureLimitPosiParamField_reserve1_len = 0;

	//TThostFtdcVolumeType int
	int pFutureLimitPosiParamField_SpecOpenVolume = 0;

	//TThostFtdcVolumeType int
	int pFutureLimitPosiParamField_ArbiOpenVolume = 0;

	//TThostFtdcVolumeType int
	int pFutureLimitPosiParamField_OpenVolume = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pFutureLimitPosiParamField_ProductID = NULL;
	Py_ssize_t pFutureLimitPosiParamField_ProductID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cy#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|cs#s#s#iiis#", (char **)kwlist
#endif

		, &pFutureLimitPosiParamField_InvestorRange
		, &pFutureLimitPosiParamField_BrokerID, &pFutureLimitPosiParamField_BrokerID_len
		, &pFutureLimitPosiParamField_InvestorID, &pFutureLimitPosiParamField_InvestorID_len
		, &pFutureLimitPosiParamField_reserve1, &pFutureLimitPosiParamField_reserve1_len
		, &pFutureLimitPosiParamField_SpecOpenVolume
		, &pFutureLimitPosiParamField_ArbiOpenVolume
		, &pFutureLimitPosiParamField_OpenVolume
		, &pFutureLimitPosiParamField_ProductID, &pFutureLimitPosiParamField_ProductID_len


    )) {
        return -1;
    }

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pFutureLimitPosiParamField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pFutureLimitPosiParamField_BrokerID != NULL) {
		if(pFutureLimitPosiParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pFutureLimitPosiParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pFutureLimitPosiParamField_BrokerID, sizeof(self->data.BrokerID) );
		pFutureLimitPosiParamField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pFutureLimitPosiParamField_InvestorID != NULL) {
		if(pFutureLimitPosiParamField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pFutureLimitPosiParamField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pFutureLimitPosiParamField_InvestorID, sizeof(self->data.InvestorID) );
		pFutureLimitPosiParamField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pFutureLimitPosiParamField_reserve1 != NULL) {
		if(pFutureLimitPosiParamField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pFutureLimitPosiParamField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pFutureLimitPosiParamField_reserve1, sizeof(self->data.reserve1) );
		pFutureLimitPosiParamField_reserve1 = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.SpecOpenVolume = pFutureLimitPosiParamField_SpecOpenVolume;

	//TThostFtdcVolumeType int
	self->data.ArbiOpenVolume = pFutureLimitPosiParamField_ArbiOpenVolume;

	//TThostFtdcVolumeType int
	self->data.OpenVolume = pFutureLimitPosiParamField_OpenVolume;

	//TThostFtdcInstrumentIDType char[81]
	if(pFutureLimitPosiParamField_ProductID != NULL) {
		if(pFutureLimitPosiParamField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pFutureLimitPosiParamField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pFutureLimitPosiParamField_ProductID, sizeof(self->data.ProductID) );
		pFutureLimitPosiParamField_ProductID = NULL;
	}



    return 0;
}

static void PyCThostFtdcFutureLimitPosiParamField_dealloc(PyCThostFtdcFutureLimitPosiParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_repr(PyCThostFtdcFutureLimitPosiParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:c,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:c,s:s,s:s,s:s,s:i,s:i,s:i,s:s}"
#endif

		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "SpecOpenVolume", self->data.SpecOpenVolume
		, "ArbiOpenVolume", self->data.ArbiOpenVolume
		, "OpenVolume", self->data.OpenVolume
		, "ProductID", self->data.ProductID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFutureLimitPosiParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_InvestorRange(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_BrokerID(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_InvestorID(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_reserve1(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_SpecOpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SpecOpenVolume);
#else 
	return PyInt_FromLong(self->data.SpecOpenVolume);
#endif 
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_ArbiOpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ArbiOpenVolume);
#else 
	return PyInt_FromLong(self->data.ArbiOpenVolume);
#endif 
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_OpenVolume(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OpenVolume);
#else 
	return PyInt_FromLong(self->data.OpenVolume);
#endif 
}

static PyObject *PyCThostFtdcFutureLimitPosiParamField_get_ProductID(PyCThostFtdcFutureLimitPosiParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static int PyCThostFtdcFutureLimitPosiParamField_set_InvestorRange(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
		PyErr_SetString(PyExc_ValueError, "InvestorRange must be less than 1 bytes");
		return -1;
	}
	self->data.InvestorRange = *buf;
	return 0;
}

static int PyCThostFtdcFutureLimitPosiParamField_set_BrokerID(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureLimitPosiParamField_set_InvestorID(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcFutureLimitPosiParamField_set_reserve1(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureLimitPosiParamField_set_SpecOpenVolume(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecOpenVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SpecOpenVolume Expected int"); 
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
    self->data.SpecOpenVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcFutureLimitPosiParamField_set_ArbiOpenVolume(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ArbiOpenVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ArbiOpenVolume Expected int"); 
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
    self->data.ArbiOpenVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcFutureLimitPosiParamField_set_OpenVolume(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected int"); 
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
    self->data.OpenVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcFutureLimitPosiParamField_set_ProductID(PyCThostFtdcFutureLimitPosiParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcFutureLimitPosiParamField_getset[] = {
	 {(char *)"InvestorRange", (getter)PyCThostFtdcFutureLimitPosiParamField_get_InvestorRange, (setter)PyCThostFtdcFutureLimitPosiParamField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcFutureLimitPosiParamField_get_BrokerID, (setter)PyCThostFtdcFutureLimitPosiParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcFutureLimitPosiParamField_get_InvestorID, (setter)PyCThostFtdcFutureLimitPosiParamField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcFutureLimitPosiParamField_get_reserve1, (setter)PyCThostFtdcFutureLimitPosiParamField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"SpecOpenVolume", (getter)PyCThostFtdcFutureLimitPosiParamField_get_SpecOpenVolume, (setter)PyCThostFtdcFutureLimitPosiParamField_set_SpecOpenVolume, (char *)"SpecOpenVolume", NULL},
	 {(char *)"ArbiOpenVolume", (getter)PyCThostFtdcFutureLimitPosiParamField_get_ArbiOpenVolume, (setter)PyCThostFtdcFutureLimitPosiParamField_set_ArbiOpenVolume, (char *)"ArbiOpenVolume", NULL},
	 {(char *)"OpenVolume", (getter)PyCThostFtdcFutureLimitPosiParamField_get_OpenVolume, (setter)PyCThostFtdcFutureLimitPosiParamField_set_OpenVolume, (char *)"OpenVolume", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcFutureLimitPosiParamField_get_ProductID, (setter)PyCThostFtdcFutureLimitPosiParamField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcFutureLimitPosiParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcFutureLimitPosiParamField",	/* tp_name */
	sizeof(PyCThostFtdcFutureLimitPosiParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcFutureLimitPosiParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcFutureLimitPosiParamField_repr,   /* tp_repr */
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
	"CThostFtdcFutureLimitPosiParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcFutureLimitPosiParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcFutureLimitPosiParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcFutureLimitPosiParamField_new,       /* tp_new */
};

int PyCThostFtdcFutureLimitPosiParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcFutureLimitPosiParamField  */
	if (PyType_Ready(&PyCThostFtdcFutureLimitPosiParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcFutureLimitPosiParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcFutureLimitPosiParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcFutureLimitPosiParamField", (PyObject *)&PyCThostFtdcFutureLimitPosiParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFutureLimitPosiParamField to module");
        Py_DECREF(&PyCThostFtdcFutureLimitPosiParamFieldType);
		return -1;
    }

    return 0;
}
