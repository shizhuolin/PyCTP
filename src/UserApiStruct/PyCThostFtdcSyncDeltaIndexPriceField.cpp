
#include "PyCThostFtdcSyncDeltaIndexPriceField.h"



static PyObject *PyCThostFtdcSyncDeltaIndexPriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaIndexPriceField *self = (PyCThostFtdcSyncDeltaIndexPriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaIndexPriceField_init(PyCThostFtdcSyncDeltaIndexPriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InstrumentID", "ClosePrice", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaIndexPriceField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaIndexPriceField_BrokerID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaIndexPriceField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaIndexPriceField_InstrumentID_len = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaIndexPriceField_ClosePrice = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaIndexPriceField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaIndexPriceField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#dci", (char **)kwlist
#endif

		, &pSyncDeltaIndexPriceField_BrokerID, &pSyncDeltaIndexPriceField_BrokerID_len
		, &pSyncDeltaIndexPriceField_InstrumentID, &pSyncDeltaIndexPriceField_InstrumentID_len
		, &pSyncDeltaIndexPriceField_ClosePrice
		, &pSyncDeltaIndexPriceField_ActionDirection
		, &pSyncDeltaIndexPriceField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaIndexPriceField_BrokerID != NULL) {
		if(pSyncDeltaIndexPriceField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaIndexPriceField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaIndexPriceField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaIndexPriceField_BrokerID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaIndexPriceField_InstrumentID != NULL) {
		if(pSyncDeltaIndexPriceField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaIndexPriceField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaIndexPriceField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaIndexPriceField_InstrumentID = NULL;
	}

	//TThostFtdcPriceType double
	self->data.ClosePrice = pSyncDeltaIndexPriceField_ClosePrice;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaIndexPriceField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaIndexPriceField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaIndexPriceField_dealloc(PyCThostFtdcSyncDeltaIndexPriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaIndexPriceField_repr(PyCThostFtdcSyncDeltaIndexPriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:c,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InstrumentID", self->data.InstrumentID 
		, "ClosePrice", self->data.ClosePrice
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaIndexPriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaIndexPriceField_get_BrokerID(PyCThostFtdcSyncDeltaIndexPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaIndexPriceField_get_InstrumentID(PyCThostFtdcSyncDeltaIndexPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaIndexPriceField_get_ClosePrice(PyCThostFtdcSyncDeltaIndexPriceField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ClosePrice);
}

static PyObject *PyCThostFtdcSyncDeltaIndexPriceField_get_ActionDirection(PyCThostFtdcSyncDeltaIndexPriceField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaIndexPriceField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaIndexPriceField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaIndexPriceField_set_BrokerID(PyCThostFtdcSyncDeltaIndexPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaIndexPriceField_set_InstrumentID(PyCThostFtdcSyncDeltaIndexPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaIndexPriceField_set_ClosePrice(PyCThostFtdcSyncDeltaIndexPriceField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ClosePrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaIndexPriceField_set_ActionDirection(PyCThostFtdcSyncDeltaIndexPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaIndexPriceField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaIndexPriceField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaIndexPriceField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaIndexPriceField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaIndexPriceField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaIndexPriceField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaIndexPriceField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ClosePrice", (getter)PyCThostFtdcSyncDeltaIndexPriceField_get_ClosePrice, (setter)PyCThostFtdcSyncDeltaIndexPriceField_set_ClosePrice, (char *)"ClosePrice", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaIndexPriceField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaIndexPriceField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaIndexPriceField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaIndexPriceField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaIndexPriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaIndexPriceField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaIndexPriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaIndexPriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaIndexPriceField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaIndexPriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaIndexPriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaIndexPriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaIndexPriceField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaIndexPriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaIndexPriceField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaIndexPriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaIndexPriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaIndexPriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaIndexPriceField", (PyObject *)&PyCThostFtdcSyncDeltaIndexPriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaIndexPriceField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaIndexPriceFieldType);
		return -1;
    }

    return 0;
}
