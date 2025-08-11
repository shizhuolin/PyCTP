
#include "PyCThostFtdcQryCFMMCTradingAccountKeyField.h"



static PyObject *PyCThostFtdcQryCFMMCTradingAccountKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCFMMCTradingAccountKeyField *self = (PyCThostFtdcQryCFMMCTradingAccountKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryCFMMCTradingAccountKeyField_init(PyCThostFtdcQryCFMMCTradingAccountKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryCFMMCTradingAccountKeyField_BrokerID = NULL;
	Py_ssize_t pQryCFMMCTradingAccountKeyField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryCFMMCTradingAccountKeyField_InvestorID = NULL;
	Py_ssize_t pQryCFMMCTradingAccountKeyField_InvestorID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryCFMMCTradingAccountKeyField_BrokerID, &pQryCFMMCTradingAccountKeyField_BrokerID_len
		, &pQryCFMMCTradingAccountKeyField_InvestorID, &pQryCFMMCTradingAccountKeyField_InvestorID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryCFMMCTradingAccountKeyField_BrokerID != NULL) {
		if(pQryCFMMCTradingAccountKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryCFMMCTradingAccountKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryCFMMCTradingAccountKeyField_BrokerID, sizeof(self->data.BrokerID) );
		pQryCFMMCTradingAccountKeyField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryCFMMCTradingAccountKeyField_InvestorID != NULL) {
		if(pQryCFMMCTradingAccountKeyField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryCFMMCTradingAccountKeyField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryCFMMCTradingAccountKeyField_InvestorID, sizeof(self->data.InvestorID) );
		pQryCFMMCTradingAccountKeyField_InvestorID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryCFMMCTradingAccountKeyField_dealloc(PyCThostFtdcQryCFMMCTradingAccountKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCFMMCTradingAccountKeyField_repr(PyCThostFtdcQryCFMMCTradingAccountKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCFMMCTradingAccountKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryCFMMCTradingAccountKeyField_get_BrokerID(PyCThostFtdcQryCFMMCTradingAccountKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryCFMMCTradingAccountKeyField_get_InvestorID(PyCThostFtdcQryCFMMCTradingAccountKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static int PyCThostFtdcQryCFMMCTradingAccountKeyField_set_BrokerID(PyCThostFtdcQryCFMMCTradingAccountKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryCFMMCTradingAccountKeyField_set_InvestorID(PyCThostFtdcQryCFMMCTradingAccountKeyField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryCFMMCTradingAccountKeyField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryCFMMCTradingAccountKeyField_get_BrokerID, (setter)PyCThostFtdcQryCFMMCTradingAccountKeyField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryCFMMCTradingAccountKeyField_get_InvestorID, (setter)PyCThostFtdcQryCFMMCTradingAccountKeyField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCFMMCTradingAccountKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCFMMCTradingAccountKeyField",	/* tp_name */
	sizeof(PyCThostFtdcQryCFMMCTradingAccountKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCFMMCTradingAccountKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCFMMCTradingAccountKeyField_repr,   /* tp_repr */
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
	"CThostFtdcQryCFMMCTradingAccountKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCFMMCTradingAccountKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCFMMCTradingAccountKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCFMMCTradingAccountKeyField_new,       /* tp_new */
};

int PyCThostFtdcQryCFMMCTradingAccountKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCFMMCTradingAccountKeyField  */
	if (PyType_Ready(&PyCThostFtdcQryCFMMCTradingAccountKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCFMMCTradingAccountKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCFMMCTradingAccountKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCFMMCTradingAccountKeyField", (PyObject *)&PyCThostFtdcQryCFMMCTradingAccountKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCFMMCTradingAccountKeyField to module");
        Py_DECREF(&PyCThostFtdcQryCFMMCTradingAccountKeyFieldType);
		return -1;
    }

    return 0;
}
