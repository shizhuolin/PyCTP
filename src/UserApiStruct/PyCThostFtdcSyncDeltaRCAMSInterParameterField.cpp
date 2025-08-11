
#include "PyCThostFtdcSyncDeltaRCAMSInterParameterField.h"



static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSInterParameterField *self = (PyCThostFtdcSyncDeltaRCAMSInterParameterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_init(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductGroupID", "Priority", "CreditRate", "CombProduct1", "CombProduct2", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRCAMSInterParameterField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRCAMSInterParameterField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRCAMSInterParameterField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInterParameterField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSInterParameterField_ProductGroupID = NULL;
	Py_ssize_t pSyncDeltaRCAMSInterParameterField_ProductGroupID_len = 0;

	//TThostFtdcRCAMSPriorityType int
	int pSyncDeltaRCAMSInterParameterField_Priority = 0;

	//TThostFtdcHedgeRateType double
	double pSyncDeltaRCAMSInterParameterField_CreditRate = 0.0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSInterParameterField_CombProduct1 = NULL;
	Py_ssize_t pSyncDeltaRCAMSInterParameterField_CombProduct1_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSInterParameterField_CombProduct2 = NULL;
	Py_ssize_t pSyncDeltaRCAMSInterParameterField_CombProduct2_len = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRCAMSInterParameterField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#idy#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ids#s#ci", (char **)kwlist
#endif

		, &pSyncDeltaRCAMSInterParameterField_TradingDay, &pSyncDeltaRCAMSInterParameterField_TradingDay_len
		, &pSyncDeltaRCAMSInterParameterField_ExchangeID, &pSyncDeltaRCAMSInterParameterField_ExchangeID_len
		, &pSyncDeltaRCAMSInterParameterField_ProductGroupID, &pSyncDeltaRCAMSInterParameterField_ProductGroupID_len
		, &pSyncDeltaRCAMSInterParameterField_Priority
		, &pSyncDeltaRCAMSInterParameterField_CreditRate
		, &pSyncDeltaRCAMSInterParameterField_CombProduct1, &pSyncDeltaRCAMSInterParameterField_CombProduct1_len
		, &pSyncDeltaRCAMSInterParameterField_CombProduct2, &pSyncDeltaRCAMSInterParameterField_CombProduct2_len
		, &pSyncDeltaRCAMSInterParameterField_ActionDirection
		, &pSyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRCAMSInterParameterField_TradingDay != NULL) {
		if(pSyncDeltaRCAMSInterParameterField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInterParameterField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRCAMSInterParameterField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRCAMSInterParameterField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRCAMSInterParameterField_ExchangeID != NULL) {
		if(pSyncDeltaRCAMSInterParameterField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInterParameterField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRCAMSInterParameterField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRCAMSInterParameterField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSInterParameterField_ProductGroupID != NULL) {
		if(pSyncDeltaRCAMSInterParameterField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInterParameterField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pSyncDeltaRCAMSInterParameterField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pSyncDeltaRCAMSInterParameterField_ProductGroupID = NULL;
	}

	//TThostFtdcRCAMSPriorityType int
	self->data.Priority = pSyncDeltaRCAMSInterParameterField_Priority;

	//TThostFtdcHedgeRateType double
	self->data.CreditRate = pSyncDeltaRCAMSInterParameterField_CreditRate;
	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSInterParameterField_CombProduct1 != NULL) {
		if(pSyncDeltaRCAMSInterParameterField_CombProduct1_len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
			PyErr_Format(PyExc_ValueError, "CombProduct1 too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInterParameterField_CombProduct1_len, (Py_ssize_t)sizeof(self->data.CombProduct1));
			return -1;
		}
		strncpy(self->data.CombProduct1, pSyncDeltaRCAMSInterParameterField_CombProduct1, sizeof(self->data.CombProduct1) );
		pSyncDeltaRCAMSInterParameterField_CombProduct1 = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSInterParameterField_CombProduct2 != NULL) {
		if(pSyncDeltaRCAMSInterParameterField_CombProduct2_len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
			PyErr_Format(PyExc_ValueError, "CombProduct2 too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSInterParameterField_CombProduct2_len, (Py_ssize_t)sizeof(self->data.CombProduct2));
			return -1;
		}
		strncpy(self->data.CombProduct2, pSyncDeltaRCAMSInterParameterField_CombProduct2, sizeof(self->data.CombProduct2) );
		pSyncDeltaRCAMSInterParameterField_CombProduct2 = NULL;
	}

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRCAMSInterParameterField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRCAMSInterParameterField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSInterParameterField_dealloc(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_repr(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:d,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:d,s:s,s:s,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductGroupID", self->data.ProductGroupID 
		, "Priority", self->data.Priority
		, "CreditRate", self->data.CreditRate
		, "CombProduct1", self->data.CombProduct1 
		, "CombProduct2", self->data.CombProduct2 
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSInterParameterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_Priority(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Priority);
#else 
	return PyInt_FromLong(self->data.Priority);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CreditRate(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CreditRate);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct1(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProduct1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct2(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProduct2);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInterParameterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
		PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
		PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_Priority(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Priority Expected int"); 
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
    self->data.Priority = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CreditRate(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CreditRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CreditRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct1(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProduct1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProduct1)) {
		PyErr_SetString(PyExc_ValueError, "CombProduct1 must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProduct1, buf, sizeof(self->data.CombProduct1));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct2(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProduct2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProduct2)) {
		PyErr_SetString(PyExc_ValueError, "CombProduct2 must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProduct2, buf, sizeof(self->data.CombProduct2));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSInterParameterField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSInterParameterField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ProductGroupID, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
	 {(char *)"Priority", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_Priority, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_Priority, (char *)"Priority", NULL},
	 {(char *)"CreditRate", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CreditRate, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CreditRate, (char *)"CreditRate", NULL},
	 {(char *)"CombProduct1", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct1, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct1, (char *)"CombProduct1", NULL},
	 {(char *)"CombProduct2", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_CombProduct2, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_CombProduct2, (char *)"CombProduct2", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSInterParameterField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSInterParameterField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSInterParameterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSInterParameterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSInterParameterField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSInterParameterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSInterParameterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSInterParameterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSInterParameterField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSInterParameterField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSInterParameterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSInterParameterField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSInterParameterField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSInterParameterFieldType);
		return -1;
    }

    return 0;
}
