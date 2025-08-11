
#include "PyCThostFtdcQryErrExecOrderField.h"



static PyObject *PyCThostFtdcQryErrExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryErrExecOrderField *self = (PyCThostFtdcQryErrExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryErrExecOrderField_init(PyCThostFtdcQryErrExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryErrExecOrderField_BrokerID = NULL;
	Py_ssize_t pQryErrExecOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryErrExecOrderField_InvestorID = NULL;
	Py_ssize_t pQryErrExecOrderField_InvestorID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryErrExecOrderField_BrokerID, &pQryErrExecOrderField_BrokerID_len
		, &pQryErrExecOrderField_InvestorID, &pQryErrExecOrderField_InvestorID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryErrExecOrderField_BrokerID != NULL) {
		if(pQryErrExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryErrExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryErrExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pQryErrExecOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryErrExecOrderField_InvestorID != NULL) {
		if(pQryErrExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryErrExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryErrExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pQryErrExecOrderField_InvestorID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryErrExecOrderField_dealloc(PyCThostFtdcQryErrExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryErrExecOrderField_repr(PyCThostFtdcQryErrExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryErrExecOrderField_get_BrokerID(PyCThostFtdcQryErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryErrExecOrderField_get_InvestorID(PyCThostFtdcQryErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static int PyCThostFtdcQryErrExecOrderField_set_BrokerID(PyCThostFtdcQryErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryErrExecOrderField_set_InvestorID(PyCThostFtdcQryErrExecOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryErrExecOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryErrExecOrderField_get_BrokerID, (setter)PyCThostFtdcQryErrExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryErrExecOrderField_get_InvestorID, (setter)PyCThostFtdcQryErrExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryErrExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryErrExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryErrExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryErrExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryErrExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryErrExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryErrExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryErrExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryErrExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryErrExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryErrExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryErrExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryErrExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryErrExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryErrExecOrderField", (PyObject *)&PyCThostFtdcQryErrExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryErrExecOrderField to module");
        Py_DECREF(&PyCThostFtdcQryErrExecOrderFieldType);
		return -1;
    }

    return 0;
}
