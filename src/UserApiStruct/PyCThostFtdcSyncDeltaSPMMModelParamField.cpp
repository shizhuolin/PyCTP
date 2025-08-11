
#include "PyCThostFtdcSyncDeltaSPMMModelParamField.h"



static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPMMModelParamField *self = (PyCThostFtdcSyncDeltaSPMMModelParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_init(PyCThostFtdcSyncDeltaSPMMModelParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "SPMMModelID", "CommodityGroupID", "IntraCommodityRate", "InterCommodityRate", "OptionDiscountRate", "MiniMarginRatio", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPMMModelParamField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPMMModelParamField_ExchangeID_len = 0;

	//TThostFtdcSPMMModelIDType char[33]
	const char *pSyncDeltaSPMMModelParamField_SPMMModelID = NULL;
	Py_ssize_t pSyncDeltaSPMMModelParamField_SPMMModelID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSyncDeltaSPMMModelParamField_CommodityGroupID = NULL;
	Py_ssize_t pSyncDeltaSPMMModelParamField_CommodityGroupID_len = 0;

	//TThostFtdcSPMMDiscountRatioType double
	double pSyncDeltaSPMMModelParamField_IntraCommodityRate = 0.0;

	//TThostFtdcSPMMDiscountRatioType double
	double pSyncDeltaSPMMModelParamField_InterCommodityRate = 0.0;

	//TThostFtdcSPMMDiscountRatioType double
	double pSyncDeltaSPMMModelParamField_OptionDiscountRate = 0.0;

	//TThostFtdcSPMMDiscountRatioType double
	double pSyncDeltaSPMMModelParamField_MiniMarginRatio = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPMMModelParamField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPMMModelParamField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ddddci", (char **)kwlist
#endif

		, &pSyncDeltaSPMMModelParamField_ExchangeID, &pSyncDeltaSPMMModelParamField_ExchangeID_len
		, &pSyncDeltaSPMMModelParamField_SPMMModelID, &pSyncDeltaSPMMModelParamField_SPMMModelID_len
		, &pSyncDeltaSPMMModelParamField_CommodityGroupID, &pSyncDeltaSPMMModelParamField_CommodityGroupID_len
		, &pSyncDeltaSPMMModelParamField_IntraCommodityRate
		, &pSyncDeltaSPMMModelParamField_InterCommodityRate
		, &pSyncDeltaSPMMModelParamField_OptionDiscountRate
		, &pSyncDeltaSPMMModelParamField_MiniMarginRatio
		, &pSyncDeltaSPMMModelParamField_ActionDirection
		, &pSyncDeltaSPMMModelParamField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPMMModelParamField_ExchangeID != NULL) {
		if(pSyncDeltaSPMMModelParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMModelParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPMMModelParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPMMModelParamField_ExchangeID = NULL;
	}

	//TThostFtdcSPMMModelIDType char[33]
	if(pSyncDeltaSPMMModelParamField_SPMMModelID != NULL) {
		if(pSyncDeltaSPMMModelParamField_SPMMModelID_len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
			PyErr_Format(PyExc_ValueError, "SPMMModelID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMModelParamField_SPMMModelID_len, (Py_ssize_t)sizeof(self->data.SPMMModelID));
			return -1;
		}
		strncpy(self->data.SPMMModelID, pSyncDeltaSPMMModelParamField_SPMMModelID, sizeof(self->data.SPMMModelID) );
		pSyncDeltaSPMMModelParamField_SPMMModelID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSyncDeltaSPMMModelParamField_CommodityGroupID != NULL) {
		if(pSyncDeltaSPMMModelParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMModelParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
			return -1;
		}
		strncpy(self->data.CommodityGroupID, pSyncDeltaSPMMModelParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
		pSyncDeltaSPMMModelParamField_CommodityGroupID = NULL;
	}

	//TThostFtdcSPMMDiscountRatioType double
	self->data.IntraCommodityRate = pSyncDeltaSPMMModelParamField_IntraCommodityRate;
	//TThostFtdcSPMMDiscountRatioType double
	self->data.InterCommodityRate = pSyncDeltaSPMMModelParamField_InterCommodityRate;
	//TThostFtdcSPMMDiscountRatioType double
	self->data.OptionDiscountRate = pSyncDeltaSPMMModelParamField_OptionDiscountRate;
	//TThostFtdcSPMMDiscountRatioType double
	self->data.MiniMarginRatio = pSyncDeltaSPMMModelParamField_MiniMarginRatio;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPMMModelParamField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPMMModelParamField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPMMModelParamField_dealloc(PyCThostFtdcSyncDeltaSPMMModelParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_repr(PyCThostFtdcSyncDeltaSPMMModelParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "SPMMModelID", self->data.SPMMModelID 
		, "CommodityGroupID", self->data.CommodityGroupID 
		, "IntraCommodityRate", self->data.IntraCommodityRate
		, "InterCommodityRate", self->data.InterCommodityRate
		, "OptionDiscountRate", self->data.OptionDiscountRate
		, "MiniMarginRatio", self->data.MiniMarginRatio
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMModelParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_ExchangeID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_SPMMModelID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyBytes_FromString(self->data.SPMMModelID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_IntraCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.IntraCommodityRate);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_InterCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterCommodityRate);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_OptionDiscountRate(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionDiscountRate);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_MiniMarginRatio(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MiniMarginRatio);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_ActionDirection(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMModelParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMModelParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_ExchangeID(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_SPMMModelID(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SPMMModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SPMMModelID)) {
		PyErr_SetString(PyExc_ValueError, "SPMMModelID must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.SPMMModelID, buf, sizeof(self->data.SPMMModelID));
	return 0;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
		PyErr_SetString(PyExc_ValueError, "CommodityGroupID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CommodityGroupID, buf, sizeof(self->data.CommodityGroupID));
	return 0;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_IntraCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IntraCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.IntraCommodityRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_InterCommodityRate(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterCommodityRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterCommodityRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_OptionDiscountRate(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionDiscountRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionDiscountRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_MiniMarginRatio(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MiniMarginRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MiniMarginRatio = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_ActionDirection(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
		PyErr_SetString(PyExc_ValueError, "ActionDirection must be less than 1 bytes");
		return -1;
	}
	self->data.ActionDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaSPMMModelParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMModelParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int"); 
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
    self->data.SyncDeltaSequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDeltaSPMMModelParamField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SPMMModelID", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_SPMMModelID, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_SPMMModelID, (char *)"SPMMModelID", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
	 {(char *)"IntraCommodityRate", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_IntraCommodityRate, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_IntraCommodityRate, (char *)"IntraCommodityRate", NULL},
	 {(char *)"InterCommodityRate", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_InterCommodityRate, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_InterCommodityRate, (char *)"InterCommodityRate", NULL},
	 {(char *)"OptionDiscountRate", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_OptionDiscountRate, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_OptionDiscountRate, (char *)"OptionDiscountRate", NULL},
	 {(char *)"MiniMarginRatio", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_MiniMarginRatio, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_MiniMarginRatio, (char *)"MiniMarginRatio", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPMMModelParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPMMModelParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPMMModelParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPMMModelParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPMMModelParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPMMModelParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPMMModelParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPMMModelParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPMMModelParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPMMModelParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPMMModelParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPMMModelParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPMMModelParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPMMModelParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPMMModelParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPMMModelParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMModelParamField", (PyObject *)&PyCThostFtdcSyncDeltaSPMMModelParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMModelParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPMMModelParamFieldType);
		return -1;
    }

    return 0;
}
