
#include "PyCThostFtdcSyncDeltaSPMMInstParamField.h"



static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaSPMMInstParamField *self = (PyCThostFtdcSyncDeltaSPMMInstParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaSPMMInstParamField_init(PyCThostFtdcSyncDeltaSPMMInstParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "InstrumentID", "InstMarginCalID", "CommodityID", "CommodityGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaSPMMInstParamField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaSPMMInstParamField_ExchangeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaSPMMInstParamField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaSPMMInstParamField_InstrumentID_len = 0;

	//TThostFtdcInstMarginCalIDType char
	char pSyncDeltaSPMMInstParamField_InstMarginCalID = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSyncDeltaSPMMInstParamField_CommodityID = NULL;
	Py_ssize_t pSyncDeltaSPMMInstParamField_CommodityID_len = 0;

	//TThostFtdcSPMMProductIDType char[41]
	const char *pSyncDeltaSPMMInstParamField_CommodityGroupID = NULL;
	Py_ssize_t pSyncDeltaSPMMInstParamField_CommodityGroupID_len = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaSPMMInstParamField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaSPMMInstParamField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#ci", (char **)kwlist
#endif

		, &pSyncDeltaSPMMInstParamField_ExchangeID, &pSyncDeltaSPMMInstParamField_ExchangeID_len
		, &pSyncDeltaSPMMInstParamField_InstrumentID, &pSyncDeltaSPMMInstParamField_InstrumentID_len
		, &pSyncDeltaSPMMInstParamField_InstMarginCalID
		, &pSyncDeltaSPMMInstParamField_CommodityID, &pSyncDeltaSPMMInstParamField_CommodityID_len
		, &pSyncDeltaSPMMInstParamField_CommodityGroupID, &pSyncDeltaSPMMInstParamField_CommodityGroupID_len
		, &pSyncDeltaSPMMInstParamField_ActionDirection
		, &pSyncDeltaSPMMInstParamField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaSPMMInstParamField_ExchangeID != NULL) {
		if(pSyncDeltaSPMMInstParamField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMInstParamField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaSPMMInstParamField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaSPMMInstParamField_ExchangeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaSPMMInstParamField_InstrumentID != NULL) {
		if(pSyncDeltaSPMMInstParamField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMInstParamField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaSPMMInstParamField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaSPMMInstParamField_InstrumentID = NULL;
	}

	//TThostFtdcInstMarginCalIDType char
	self->data.InstMarginCalID = pSyncDeltaSPMMInstParamField_InstMarginCalID;

	//TThostFtdcSPMMProductIDType char[41]
	if(pSyncDeltaSPMMInstParamField_CommodityID != NULL) {
		if(pSyncDeltaSPMMInstParamField_CommodityID_len > (Py_ssize_t)sizeof(self->data.CommodityID)) {
			PyErr_Format(PyExc_ValueError, "CommodityID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMInstParamField_CommodityID_len, (Py_ssize_t)sizeof(self->data.CommodityID));
			return -1;
		}
		strncpy(self->data.CommodityID, pSyncDeltaSPMMInstParamField_CommodityID, sizeof(self->data.CommodityID) );
		pSyncDeltaSPMMInstParamField_CommodityID = NULL;
	}

	//TThostFtdcSPMMProductIDType char[41]
	if(pSyncDeltaSPMMInstParamField_CommodityGroupID != NULL) {
		if(pSyncDeltaSPMMInstParamField_CommodityGroupID_len > (Py_ssize_t)sizeof(self->data.CommodityGroupID)) {
			PyErr_Format(PyExc_ValueError, "CommodityGroupID too long: length=%zd (max allowed is %zd)", pSyncDeltaSPMMInstParamField_CommodityGroupID_len, (Py_ssize_t)sizeof(self->data.CommodityGroupID));
			return -1;
		}
		strncpy(self->data.CommodityGroupID, pSyncDeltaSPMMInstParamField_CommodityGroupID, sizeof(self->data.CommodityGroupID) );
		pSyncDeltaSPMMInstParamField_CommodityGroupID = NULL;
	}

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaSPMMInstParamField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaSPMMInstParamField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaSPMMInstParamField_dealloc(PyCThostFtdcSyncDeltaSPMMInstParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_repr(PyCThostFtdcSyncDeltaSPMMInstParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:c,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "InstrumentID", self->data.InstrumentID 
		, "InstMarginCalID", self->data.InstMarginCalID
		, "CommodityID", self->data.CommodityID 
		, "CommodityGroupID", self->data.CommodityGroupID 
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaSPMMInstParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_ExchangeID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstrumentID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstMarginCalID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InstMarginCalID), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
	return PyBytes_FromString(self->data.CommodityGroupID);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_ActionDirection(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaSPMMInstParamField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMInstParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_ExchangeID(PyCThostFtdcSyncDeltaSPMMInstParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstrumentID(PyCThostFtdcSyncDeltaSPMMInstParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstMarginCalID(PyCThostFtdcSyncDeltaSPMMInstParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstMarginCalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstMarginCalID)) {
		PyErr_SetString(PyExc_ValueError, "InstMarginCalID must be less than 1 bytes");
		return -1;
	}
	self->data.InstMarginCalID = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityID(PyCThostFtdcSyncDeltaSPMMInstParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityGroupID(PyCThostFtdcSyncDeltaSPMMInstParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_ActionDirection(PyCThostFtdcSyncDeltaSPMMInstParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaSPMMInstParamField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaSPMMInstParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaSPMMInstParamField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"InstMarginCalID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_InstMarginCalID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_InstMarginCalID, (char *)"InstMarginCalID", NULL},
	 {(char *)"CommodityID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityID, (char *)"CommodityID", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_CommodityGroupID, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaSPMMInstParamField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaSPMMInstParamField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaSPMMInstParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaSPMMInstParamField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaSPMMInstParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaSPMMInstParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaSPMMInstParamField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaSPMMInstParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaSPMMInstParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaSPMMInstParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaSPMMInstParamField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaSPMMInstParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaSPMMInstParamField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaSPMMInstParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaSPMMInstParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaSPMMInstParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaSPMMInstParamField", (PyObject *)&PyCThostFtdcSyncDeltaSPMMInstParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaSPMMInstParamField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaSPMMInstParamFieldType);
		return -1;
    }

    return 0;
}
