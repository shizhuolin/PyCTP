
#include "PyCThostFtdcMortgageParamField.h"



static PyObject *PyCThostFtdcMortgageParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMortgageParamField *self = (PyCThostFtdcMortgageParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMortgageParamField_init(PyCThostFtdcMortgageParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "MortgageBalance", "CheckMortgageRatio",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pMortgageParamField_BrokerID = NULL;
	Py_ssize_t pMortgageParamField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pMortgageParamField_AccountID = NULL;
	Py_ssize_t pMortgageParamField_AccountID_len = 0;

	//TThostFtdcRatioType double
	double pMortgageParamField_MortgageBalance = 0.0;

	//TThostFtdcBoolType int
	int pMortgageParamField_CheckMortgageRatio = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#di", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#di", (char **)kwlist
#endif

		, &pMortgageParamField_BrokerID, &pMortgageParamField_BrokerID_len
		, &pMortgageParamField_AccountID, &pMortgageParamField_AccountID_len
		, &pMortgageParamField_MortgageBalance
		, &pMortgageParamField_CheckMortgageRatio


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pMortgageParamField_BrokerID != NULL) {
		if(pMortgageParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pMortgageParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pMortgageParamField_BrokerID, sizeof(self->data.BrokerID) );
		pMortgageParamField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pMortgageParamField_AccountID != NULL) {
		if(pMortgageParamField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pMortgageParamField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pMortgageParamField_AccountID, sizeof(self->data.AccountID) );
		pMortgageParamField_AccountID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.MortgageBalance = pMortgageParamField_MortgageBalance;
	//TThostFtdcBoolType int
	self->data.CheckMortgageRatio = pMortgageParamField_CheckMortgageRatio;



    return 0;
}

static void PyCThostFtdcMortgageParamField_dealloc(PyCThostFtdcMortgageParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMortgageParamField_repr(PyCThostFtdcMortgageParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "MortgageBalance", self->data.MortgageBalance
		, "CheckMortgageRatio", self->data.CheckMortgageRatio


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMortgageParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMortgageParamField_get_BrokerID(PyCThostFtdcMortgageParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcMortgageParamField_get_AccountID(PyCThostFtdcMortgageParamField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcMortgageParamField_get_MortgageBalance(PyCThostFtdcMortgageParamField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MortgageBalance);
}

static PyObject *PyCThostFtdcMortgageParamField_get_CheckMortgageRatio(PyCThostFtdcMortgageParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CheckMortgageRatio);
#else 
	return PyInt_FromLong(self->data.CheckMortgageRatio);
#endif 
}

static int PyCThostFtdcMortgageParamField_set_BrokerID(PyCThostFtdcMortgageParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMortgageParamField_set_AccountID(PyCThostFtdcMortgageParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMortgageParamField_set_MortgageBalance(PyCThostFtdcMortgageParamField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageBalance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MortgageBalance = buf;
    return 0;
}

static int PyCThostFtdcMortgageParamField_set_CheckMortgageRatio(PyCThostFtdcMortgageParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CheckMortgageRatio Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CheckMortgageRatio Expected int"); 
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
    self->data.CheckMortgageRatio = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcMortgageParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcMortgageParamField_get_BrokerID, (setter)PyCThostFtdcMortgageParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcMortgageParamField_get_AccountID, (setter)PyCThostFtdcMortgageParamField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"MortgageBalance", (getter)PyCThostFtdcMortgageParamField_get_MortgageBalance, (setter)PyCThostFtdcMortgageParamField_set_MortgageBalance, (char *)"MortgageBalance", NULL},
	 {(char *)"CheckMortgageRatio", (getter)PyCThostFtdcMortgageParamField_get_CheckMortgageRatio, (setter)PyCThostFtdcMortgageParamField_set_CheckMortgageRatio, (char *)"CheckMortgageRatio", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMortgageParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMortgageParamField",	/* tp_name */
	sizeof(PyCThostFtdcMortgageParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMortgageParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMortgageParamField_repr,   /* tp_repr */
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
	"CThostFtdcMortgageParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMortgageParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMortgageParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMortgageParamField_new,       /* tp_new */
};

int PyCThostFtdcMortgageParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMortgageParamField  */
	if (PyType_Ready(&PyCThostFtdcMortgageParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMortgageParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMortgageParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMortgageParamField", (PyObject *)&PyCThostFtdcMortgageParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMortgageParamField to module");
        Py_DECREF(&PyCThostFtdcMortgageParamFieldType);
		return -1;
    }

    return 0;
}
