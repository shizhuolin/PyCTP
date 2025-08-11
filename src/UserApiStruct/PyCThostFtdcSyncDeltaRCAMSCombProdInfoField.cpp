
#include "PyCThostFtdcSyncDeltaRCAMSCombProdInfoField.h"



static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self = (PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_init(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "ExchangeID", "ProductID", "CombProductID", "ProductGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaRCAMSCombProdInfoField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombProdInfoField_TradingDay_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaRCAMSCombProdInfoField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombProdInfoField_ExchangeID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSCombProdInfoField_ProductID = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombProdInfoField_ProductID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSCombProdInfoField_CombProductID = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombProdInfoField_CombProductID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pSyncDeltaRCAMSCombProdInfoField_ProductGroupID = NULL;
	Py_ssize_t pSyncDeltaRCAMSCombProdInfoField_ProductGroupID_len = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaRCAMSCombProdInfoField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ci", (char **)kwlist
#endif

		, &pSyncDeltaRCAMSCombProdInfoField_TradingDay, &pSyncDeltaRCAMSCombProdInfoField_TradingDay_len
		, &pSyncDeltaRCAMSCombProdInfoField_ExchangeID, &pSyncDeltaRCAMSCombProdInfoField_ExchangeID_len
		, &pSyncDeltaRCAMSCombProdInfoField_ProductID, &pSyncDeltaRCAMSCombProdInfoField_ProductID_len
		, &pSyncDeltaRCAMSCombProdInfoField_CombProductID, &pSyncDeltaRCAMSCombProdInfoField_CombProductID_len
		, &pSyncDeltaRCAMSCombProdInfoField_ProductGroupID, &pSyncDeltaRCAMSCombProdInfoField_ProductGroupID_len
		, &pSyncDeltaRCAMSCombProdInfoField_ActionDirection
		, &pSyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaRCAMSCombProdInfoField_TradingDay != NULL) {
		if(pSyncDeltaRCAMSCombProdInfoField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombProdInfoField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaRCAMSCombProdInfoField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaRCAMSCombProdInfoField_TradingDay = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaRCAMSCombProdInfoField_ExchangeID != NULL) {
		if(pSyncDeltaRCAMSCombProdInfoField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombProdInfoField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaRCAMSCombProdInfoField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaRCAMSCombProdInfoField_ExchangeID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSCombProdInfoField_ProductID != NULL) {
		if(pSyncDeltaRCAMSCombProdInfoField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombProdInfoField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pSyncDeltaRCAMSCombProdInfoField_ProductID, sizeof(self->data.ProductID) );
		pSyncDeltaRCAMSCombProdInfoField_ProductID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSCombProdInfoField_CombProductID != NULL) {
		if(pSyncDeltaRCAMSCombProdInfoField_CombProductID_len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
			PyErr_Format(PyExc_ValueError, "CombProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombProdInfoField_CombProductID_len, (Py_ssize_t)sizeof(self->data.CombProductID));
			return -1;
		}
		strncpy(self->data.CombProductID, pSyncDeltaRCAMSCombProdInfoField_CombProductID, sizeof(self->data.CombProductID) );
		pSyncDeltaRCAMSCombProdInfoField_CombProductID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pSyncDeltaRCAMSCombProdInfoField_ProductGroupID != NULL) {
		if(pSyncDeltaRCAMSCombProdInfoField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pSyncDeltaRCAMSCombProdInfoField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pSyncDeltaRCAMSCombProdInfoField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pSyncDeltaRCAMSCombProdInfoField_ProductGroupID = NULL;
	}

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaRCAMSCombProdInfoField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaRCAMSCombProdInfoField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_dealloc(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_repr(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 
		, "CombProductID", self->data.CombProductID 
		, "ProductGroupID", self->data.ProductGroupID 
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaRCAMSCombProdInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_CombProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CombProductID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_TradingDay(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ExchangeID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_CombProductID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombProductID)) {
		PyErr_SetString(PyExc_ValueError, "CombProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CombProductID, buf, sizeof(self->data.CombProductID));
	return 0;
}

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductGroupID(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ActionDirection(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"CombProductID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_CombProductID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_CombProductID, (char *)"CombProductID", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ProductGroupID, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ProductGroupID, (char *)"ProductGroupID", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaRCAMSCombProdInfoField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaRCAMSCombProdInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaRCAMSCombProdInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaRCAMSCombProdInfoField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaRCAMSCombProdInfoField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaRCAMSCombProdInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaRCAMSCombProdInfoField", (PyObject *)&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaRCAMSCombProdInfoField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaRCAMSCombProdInfoFieldType);
		return -1;
    }

    return 0;
}
