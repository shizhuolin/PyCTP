
#include "PyCThostFtdcSyncDeltaSPMMProductParamField.h"



static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPMMProductParamField *self = (PyCThostFtdcSyncDeltaSPMMProductParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPMMProductParamField_init(PyCThostFtdcSyncDeltaSPMMProductParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ProductID", "CommodityID", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPMMProductParamField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPMMProductParamField_ExchangeID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSyncDeltaSPMMProductParamField_ProductID = NULL;
	Py_ssize_t pSyncDeltaSPMMProductParamField_ProductID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSyncDeltaSPMMProductParamField_CommodityID = NULL;
	Py_ssize_t pSyncDeltaSPMMProductParamField_CommodityID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSyncDeltaSPMMProductParamField_CommodityGroupID = NULL;
	Py_ssize_t pSyncDeltaSPMMProductParamField_CommodityGroupID_len = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPMMProductParamField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPMMProductParamField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ci", (char **)kwlist
#endif

		, &pSyncDeltaSPMMProductParamField_ExchangeID, &pSyncDeltaSPMMProductParamField_ExchangeID_len
		, &pSyncDeltaSPMMProductParamField_ProductID, &pSyncDeltaSPMMProductParamField_ProductID_len
		, &pSyncDeltaSPMMProductParamField_CommodityID, &pSyncDeltaSPMMProductParamField_CommodityID_len
		, &pSyncDeltaSPMMProductParamField_CommodityGroupID, &pSyncDeltaSPMMProductParamField_CommodityGroupID_len
		, &pSyncDeltaSPMMProductParamField_ActionDirection
		, &pSyncDeltaSPMMProductParamField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPMMProductParamField_ExchangeID != NULL) {
		if(pSyncDeltaSPMMProductParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMProductParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPMMProductParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPMMProductParamField_ExchangeID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSyncDeltaSPMMProductParamField_ProductID != NULL) {
		if(pSyncDeltaSPMMProductParamField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMProductParamField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pSyncDeltaSPMMProductParamField_ProductID, sizeof(self->data.ProductID) );
		pSyncDeltaSPMMProductParamField_ProductID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSyncDeltaSPMMProductParamField_CommodityID != NULL) {
		if(pSyncDeltaSPMMProductParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
			PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMProductParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
			return -1;
		}
		strncpy(self->data.CommodityID, pSyncDeltaSPMMProductParamField_CommodityID, sizeof(self->data.CommodityID) );
		pSyncDeltaSPMMProductParamField_CommodityID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSyncDeltaSPMMProductParamField_CommodityGroupID != NULL) {
		if(pSyncDeltaSPMMProductParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMProductParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
			return -1;
		}
		strncpy(self->data.CommodityGroupID, pSyncDeltaSPMMProductParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
		pSyncDeltaSPMMProductParamField_CommodityGroupID = NULL;
	}

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPMMProductParamField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPMMProductParamField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPMMProductParamField_dealloc(PyCThostFtdcSyncDeltaSPMMProductParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_repr(PyCThostFtdcSyncDeltaSPMMProductParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "ProductID", self->data.ProductID 
		, "CommodityID", self->data.CommodityID 
		, "CommodityGroupID", self->data.CommodityGroupID 
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMProductParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_ExchangeID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_ProductID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_ActionDirection(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMProductParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMProductParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_ExchangeID(PyCThostFtdcSyncDeltaSPMMProductParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_ProductID(PyCThostFtdcSyncDeltaSPMMProductParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityID(PyCThostFtdcSyncDeltaSPMMProductParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommodityID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
		PyErr_SetString(PyExc_ValueError, "CommodityID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.CommodityID, buf, sizeof(self->data.CommodityID));
	return 0;
}

static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMProductParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_ActionDirection(PyCThostFtdcSyncDeltaSPMMProductParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMProductParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMProductParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaSPMMProductParamField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_ProductID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"CommodityID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityID, (char *)"CommodityID", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPMMProductParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPMMProductParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPMMProductParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPMMProductParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPMMProductParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPMMProductParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPMMProductParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPMMProductParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPMMProductParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPMMProductParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPMMProductParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPMMProductParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPMMProductParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPMMProductParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPMMProductParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPMMProductParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMProductParamField", (PyObject *)&PyCThostFtdcSyncDeltaSPMMProductParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMProductParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPMMProductParamFieldType);
		return -1;
    }

    return 0;
}
