
#include "PyCThostFtdcQueryCFMMCTradingAccountTokenField.h"



static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQueryCFMMCTradingAccountTokenField *self = (PyCThostFtdcQueryCFMMCTradingAccountTokenField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_init(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InvestUnitID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQueryCFMMCTradingAccountTokenField_BrokerID = NULL;
	Py_ssize_t pQueryCFMMCTradingAccountTokenField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQueryCFMMCTradingAccountTokenField_InvestorID = NULL;
	Py_ssize_t pQueryCFMMCTradingAccountTokenField_InvestorID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQueryCFMMCTradingAccountTokenField_InvestUnitID = NULL;
	Py_ssize_t pQueryCFMMCTradingAccountTokenField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQueryCFMMCTradingAccountTokenField_BrokerID, &pQueryCFMMCTradingAccountTokenField_BrokerID_len
		, &pQueryCFMMCTradingAccountTokenField_InvestorID, &pQueryCFMMCTradingAccountTokenField_InvestorID_len
		, &pQueryCFMMCTradingAccountTokenField_InvestUnitID, &pQueryCFMMCTradingAccountTokenField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQueryCFMMCTradingAccountTokenField_BrokerID != NULL) {
		if(pQueryCFMMCTradingAccountTokenField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQueryCFMMCTradingAccountTokenField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQueryCFMMCTradingAccountTokenField_BrokerID, sizeof(self->data.BrokerID) );
		pQueryCFMMCTradingAccountTokenField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQueryCFMMCTradingAccountTokenField_InvestorID != NULL) {
		if(pQueryCFMMCTradingAccountTokenField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQueryCFMMCTradingAccountTokenField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQueryCFMMCTradingAccountTokenField_InvestorID, sizeof(self->data.InvestorID) );
		pQueryCFMMCTradingAccountTokenField_InvestorID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQueryCFMMCTradingAccountTokenField_InvestUnitID != NULL) {
		if(pQueryCFMMCTradingAccountTokenField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQueryCFMMCTradingAccountTokenField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQueryCFMMCTradingAccountTokenField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQueryCFMMCTradingAccountTokenField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQueryCFMMCTradingAccountTokenField_dealloc(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_repr(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQueryCFMMCTradingAccountTokenField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_BrokerID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestorID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestUnitID(PyCThostFtdcQueryCFMMCTradingAccountTokenField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_BrokerID(PyCThostFtdcQueryCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestorID(PyCThostFtdcQueryCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestUnitID(PyCThostFtdcQueryCFMMCTradingAccountTokenField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQueryCFMMCTradingAccountTokenField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_BrokerID, (setter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestorID, (setter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_get_InvestUnitID, (setter)PyCThostFtdcQueryCFMMCTradingAccountTokenField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQueryCFMMCTradingAccountTokenField",	/* tp_name */
	sizeof(PyCThostFtdcQueryCFMMCTradingAccountTokenField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQueryCFMMCTradingAccountTokenField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQueryCFMMCTradingAccountTokenField_repr,   /* tp_repr */
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
	"CThostFtdcQueryCFMMCTradingAccountTokenField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQueryCFMMCTradingAccountTokenField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQueryCFMMCTradingAccountTokenField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQueryCFMMCTradingAccountTokenField_new,       /* tp_new */
};

int PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQueryCFMMCTradingAccountTokenField  */
	if (PyType_Ready(&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQueryCFMMCTradingAccountTokenField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQueryCFMMCTradingAccountTokenField", (PyObject *)&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQueryCFMMCTradingAccountTokenField to module");
        Py_DECREF(&PyCThostFtdcQueryCFMMCTradingAccountTokenFieldType);
		return -1;
    }

    return 0;
}
