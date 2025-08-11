
#include "PyCThostFtdcQryErrOrderField.h"



static PyObject *PyCThostFtdcQryErrOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryErrOrderField *self = (PyCThostFtdcQryErrOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryErrOrderField_init(PyCThostFtdcQryErrOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryErrOrderField_BrokerID = NULL;
	Py_ssize_t pQryErrOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryErrOrderField_InvestorID = NULL;
	Py_ssize_t pQryErrOrderField_InvestorID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryErrOrderField_BrokerID, &pQryErrOrderField_BrokerID_len
		, &pQryErrOrderField_InvestorID, &pQryErrOrderField_InvestorID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryErrOrderField_BrokerID != NULL) {
		if(pQryErrOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryErrOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryErrOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pQryErrOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryErrOrderField_InvestorID != NULL) {
		if(pQryErrOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryErrOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryErrOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pQryErrOrderField_InvestorID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryErrOrderField_dealloc(PyCThostFtdcQryErrOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryErrOrderField_repr(PyCThostFtdcQryErrOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryErrOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryErrOrderField_get_BrokerID(PyCThostFtdcQryErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryErrOrderField_get_InvestorID(PyCThostFtdcQryErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static int PyCThostFtdcQryErrOrderField_set_BrokerID(PyCThostFtdcQryErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryErrOrderField_set_InvestorID(PyCThostFtdcQryErrOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryErrOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryErrOrderField_get_BrokerID, (setter)PyCThostFtdcQryErrOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryErrOrderField_get_InvestorID, (setter)PyCThostFtdcQryErrOrderField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryErrOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryErrOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryErrOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryErrOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryErrOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryErrOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryErrOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryErrOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryErrOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryErrOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryErrOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryErrOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryErrOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryErrOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryErrOrderField", (PyObject *)&PyCThostFtdcQryErrOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryErrOrderField to module");
        Py_DECREF(&PyCThostFtdcQryErrOrderFieldType);
		return -1;
    }

    return 0;
}
