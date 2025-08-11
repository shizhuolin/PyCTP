
#include "PyCThostFtdcSyncDeltaProductExchRateField.h"



static PyObject *PyCThostFtdcSyncDeltaProductExchRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaProductExchRateField *self = (PyCThostFtdcSyncDeltaProductExchRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaProductExchRateField_init(PyCThostFtdcSyncDeltaProductExchRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ProductID", "QuoteCurrencyID", "ExchangeRate", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaProductExchRateField_ProductID = NULL;
	Py_ssize_t pSyncDeltaProductExchRateField_ProductID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncDeltaProductExchRateField_QuoteCurrencyID = NULL;
	Py_ssize_t pSyncDeltaProductExchRateField_QuoteCurrencyID_len = 0;

	//TThostFtdcExchangeRateType double
	double pSyncDeltaProductExchRateField_ExchangeRate = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaProductExchRateField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaProductExchRateField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#dci", (char **)kwlist
#endif

		, &pSyncDeltaProductExchRateField_ProductID, &pSyncDeltaProductExchRateField_ProductID_len
		, &pSyncDeltaProductExchRateField_QuoteCurrencyID, &pSyncDeltaProductExchRateField_QuoteCurrencyID_len
		, &pSyncDeltaProductExchRateField_ExchangeRate
		, &pSyncDeltaProductExchRateField_ActionDirection
		, &pSyncDeltaProductExchRateField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaProductExchRateField_ProductID != NULL) {
		if(pSyncDeltaProductExchRateField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pSyncDeltaProductExchRateField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pSyncDeltaProductExchRateField_ProductID, sizeof(self->data.ProductID) );
		pSyncDeltaProductExchRateField_ProductID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pSyncDeltaProductExchRateField_QuoteCurrencyID != NULL) {
		if(pSyncDeltaProductExchRateField_QuoteCurrencyID_len > (Py_ssize_t)sizeof(self->data.QuoteCurrencyID)) {
			PyErr_Format(PyExc_ValueError, "QuoteCurrencyID too long: length=%zd (max allowed is %zd)", pSyncDeltaProductExchRateField_QuoteCurrencyID_len, (Py_ssize_t)sizeof(self->data.QuoteCurrencyID));
			return -1;
		}
		strncpy(self->data.QuoteCurrencyID, pSyncDeltaProductExchRateField_QuoteCurrencyID, sizeof(self->data.QuoteCurrencyID) );
		pSyncDeltaProductExchRateField_QuoteCurrencyID = NULL;
	}

	//TThostFtdcExchangeRateType double
	self->data.ExchangeRate = pSyncDeltaProductExchRateField_ExchangeRate;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaProductExchRateField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaProductExchRateField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaProductExchRateField_dealloc(PyCThostFtdcSyncDeltaProductExchRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaProductExchRateField_repr(PyCThostFtdcSyncDeltaProductExchRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:c,s:i}"
#endif

		, "ProductID", self->data.ProductID 
		, "QuoteCurrencyID", self->data.QuoteCurrencyID 
		, "ExchangeRate", self->data.ExchangeRate
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaProductExchRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaProductExchRateField_get_ProductID(PyCThostFtdcSyncDeltaProductExchRateField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcSyncDeltaProductExchRateField_get_QuoteCurrencyID(PyCThostFtdcSyncDeltaProductExchRateField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteCurrencyID);
}

static PyObject *PyCThostFtdcSyncDeltaProductExchRateField_get_ExchangeRate(PyCThostFtdcSyncDeltaProductExchRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeRate);
}

static PyObject *PyCThostFtdcSyncDeltaProductExchRateField_get_ActionDirection(PyCThostFtdcSyncDeltaProductExchRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaProductExchRateField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaProductExchRateField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaProductExchRateField_set_ProductID(PyCThostFtdcSyncDeltaProductExchRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaProductExchRateField_set_QuoteCurrencyID(PyCThostFtdcSyncDeltaProductExchRateField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteCurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteCurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteCurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.QuoteCurrencyID, buf, sizeof(self->data.QuoteCurrencyID));
	return 0;
}

static int PyCThostFtdcSyncDeltaProductExchRateField_set_ExchangeRate(PyCThostFtdcSyncDeltaProductExchRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeRate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchangeRate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaProductExchRateField_set_ActionDirection(PyCThostFtdcSyncDeltaProductExchRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaProductExchRateField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaProductExchRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaProductExchRateField_getset[] = {
	 {(char *)"ProductID", (getter)PyCThostFtdcSyncDeltaProductExchRateField_get_ProductID, (setter)PyCThostFtdcSyncDeltaProductExchRateField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"QuoteCurrencyID", (getter)PyCThostFtdcSyncDeltaProductExchRateField_get_QuoteCurrencyID, (setter)PyCThostFtdcSyncDeltaProductExchRateField_set_QuoteCurrencyID, (char *)"QuoteCurrencyID", NULL},
	 {(char *)"ExchangeRate", (getter)PyCThostFtdcSyncDeltaProductExchRateField_get_ExchangeRate, (setter)PyCThostFtdcSyncDeltaProductExchRateField_set_ExchangeRate, (char *)"ExchangeRate", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaProductExchRateField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaProductExchRateField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaProductExchRateField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaProductExchRateField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaProductExchRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaProductExchRateField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaProductExchRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaProductExchRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaProductExchRateField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaProductExchRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaProductExchRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaProductExchRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaProductExchRateField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaProductExchRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaProductExchRateField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaProductExchRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaProductExchRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaProductExchRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaProductExchRateField", (PyObject *)&PyCThostFtdcSyncDeltaProductExchRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaProductExchRateField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaProductExchRateFieldType);
		return -1;
    }

    return 0;
}
