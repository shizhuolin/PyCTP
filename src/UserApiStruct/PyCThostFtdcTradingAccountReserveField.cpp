
#include "PyCThostFtdcTradingAccountReserveField.h"



static PyObject *PyCThostFtdcTradingAccountReserveField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountReserveField *self = (PyCThostFtdcTradingAccountReserveField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountReserveField_init(PyCThostFtdcTradingAccountReserveField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "Reserve", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingAccountReserveField_BrokerID = NULL;
	Py_ssize_t pTradingAccountReserveField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTradingAccountReserveField_AccountID = NULL;
	Py_ssize_t pTradingAccountReserveField_AccountID_len = 0;

	//TThostFtdcMoneyType double
	double pTradingAccountReserveField_Reserve = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pTradingAccountReserveField_CurrencyID = NULL;
	Py_ssize_t pTradingAccountReserveField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#", (char **)kwlist
#endif

		, &pTradingAccountReserveField_BrokerID, &pTradingAccountReserveField_BrokerID_len
		, &pTradingAccountReserveField_AccountID, &pTradingAccountReserveField_AccountID_len
		, &pTradingAccountReserveField_Reserve
		, &pTradingAccountReserveField_CurrencyID, &pTradingAccountReserveField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingAccountReserveField_BrokerID != NULL) {
		if(pTradingAccountReserveField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingAccountReserveField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingAccountReserveField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingAccountReserveField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTradingAccountReserveField_AccountID != NULL) {
		if(pTradingAccountReserveField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pTradingAccountReserveField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pTradingAccountReserveField_AccountID, sizeof(self->data.AccountID) );
		pTradingAccountReserveField_AccountID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.Reserve = pTradingAccountReserveField_Reserve;
	//TThostFtdcCurrencyIDType char[4]
	if(pTradingAccountReserveField_CurrencyID != NULL) {
		if(pTradingAccountReserveField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pTradingAccountReserveField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pTradingAccountReserveField_CurrencyID, sizeof(self->data.CurrencyID) );
		pTradingAccountReserveField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradingAccountReserveField_dealloc(PyCThostFtdcTradingAccountReserveField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountReserveField_repr(PyCThostFtdcTradingAccountReserveField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "Reserve", self->data.Reserve
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountReserveField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingAccountReserveField_get_BrokerID(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingAccountReserveField_get_AccountID(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcTradingAccountReserveField_get_Reserve(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Reserve);
}

static PyObject *PyCThostFtdcTradingAccountReserveField_get_CurrencyID(PyCThostFtdcTradingAccountReserveField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcTradingAccountReserveField_set_BrokerID(PyCThostFtdcTradingAccountReserveField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountReserveField_set_AccountID(PyCThostFtdcTradingAccountReserveField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcTradingAccountReserveField_set_Reserve(PyCThostFtdcTradingAccountReserveField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reserve Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Reserve = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountReserveField_set_CurrencyID(PyCThostFtdcTradingAccountReserveField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
	return 0;
}



static PyGetSetDef PyCThostFtdcTradingAccountReserveField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountReserveField_get_BrokerID, (setter)PyCThostFtdcTradingAccountReserveField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountReserveField_get_AccountID, (setter)PyCThostFtdcTradingAccountReserveField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Reserve", (getter)PyCThostFtdcTradingAccountReserveField_get_Reserve, (setter)PyCThostFtdcTradingAccountReserveField_set_Reserve, (char *)"Reserve", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountReserveField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountReserveField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountReserveFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountReserveField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountReserveField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountReserveField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountReserveField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountReserveField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountReserveField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountReserveField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountReserveField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountReserveFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountReserveField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountReserveFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountReserveField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountReserveFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountReserveField", (PyObject *)&PyCThostFtdcTradingAccountReserveFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountReserveField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountReserveFieldType);
		return -1;
    }

    return 0;
}
