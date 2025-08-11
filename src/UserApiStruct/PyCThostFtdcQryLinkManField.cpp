
#include "PyCThostFtdcQryLinkManField.h"



static PyObject *PyCThostFtdcQryLinkManField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryLinkManField *self = (PyCThostFtdcQryLinkManField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryLinkManField_init(PyCThostFtdcQryLinkManField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryLinkManField_BrokerID = NULL;
	Py_ssize_t pQryLinkManField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryLinkManField_InvestorID = NULL;
	Py_ssize_t pQryLinkManField_InvestorID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQryLinkManField_BrokerID, &pQryLinkManField_BrokerID_len
		, &pQryLinkManField_InvestorID, &pQryLinkManField_InvestorID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryLinkManField_BrokerID != NULL) {
		if(pQryLinkManField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryLinkManField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryLinkManField_BrokerID, sizeof(self->data.BrokerID) );
		pQryLinkManField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryLinkManField_InvestorID != NULL) {
		if(pQryLinkManField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryLinkManField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryLinkManField_InvestorID, sizeof(self->data.InvestorID) );
		pQryLinkManField_InvestorID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryLinkManField_dealloc(PyCThostFtdcQryLinkManField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryLinkManField_repr(PyCThostFtdcQryLinkManField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryLinkManField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryLinkManField_get_BrokerID(PyCThostFtdcQryLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryLinkManField_get_InvestorID(PyCThostFtdcQryLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static int PyCThostFtdcQryLinkManField_set_BrokerID(PyCThostFtdcQryLinkManField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryLinkManField_set_InvestorID(PyCThostFtdcQryLinkManField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryLinkManField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryLinkManField_get_BrokerID, (setter)PyCThostFtdcQryLinkManField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryLinkManField_get_InvestorID, (setter)PyCThostFtdcQryLinkManField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryLinkManFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryLinkManField",	/* tp_name */
	sizeof(PyCThostFtdcQryLinkManField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryLinkManField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryLinkManField_repr,   /* tp_repr */
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
	"CThostFtdcQryLinkManField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryLinkManField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryLinkManField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryLinkManField_new,       /* tp_new */
};

int PyCThostFtdcQryLinkManFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryLinkManField  */
	if (PyType_Ready(&PyCThostFtdcQryLinkManFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryLinkManField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryLinkManFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryLinkManField", (PyObject *)&PyCThostFtdcQryLinkManFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryLinkManField to module");
        Py_DECREF(&PyCThostFtdcQryLinkManFieldType);
		return -1;
    }

    return 0;
}
