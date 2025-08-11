
#include "PyCThostFtdcInvestorPortfMarginModelField.h"



static PyObject *PyCThostFtdcInvestorPortfMarginModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPortfMarginModelField *self = (PyCThostFtdcInvestorPortfMarginModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPortfMarginModelField_init(PyCThostFtdcInvestorPortfMarginModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "MarginModelID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorPortfMarginModelField_BrokerID = NULL;
	Py_ssize_t pInvestorPortfMarginModelField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorPortfMarginModelField_InvestorID = NULL;
	Py_ssize_t pInvestorPortfMarginModelField_InvestorID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorPortfMarginModelField_MarginModelID = NULL;
	Py_ssize_t pInvestorPortfMarginModelField_MarginModelID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pInvestorPortfMarginModelField_BrokerID, &pInvestorPortfMarginModelField_BrokerID_len
		, &pInvestorPortfMarginModelField_InvestorID, &pInvestorPortfMarginModelField_InvestorID_len
		, &pInvestorPortfMarginModelField_MarginModelID, &pInvestorPortfMarginModelField_MarginModelID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorPortfMarginModelField_BrokerID != NULL) {
		if(pInvestorPortfMarginModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorPortfMarginModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorPortfMarginModelField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorPortfMarginModelField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorPortfMarginModelField_InvestorID != NULL) {
		if(pInvestorPortfMarginModelField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorPortfMarginModelField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorPortfMarginModelField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorPortfMarginModelField_InvestorID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorPortfMarginModelField_MarginModelID != NULL) {
		if(pInvestorPortfMarginModelField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
			PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", pInvestorPortfMarginModelField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
			return -1;
		}
		strncpy(self->data.MarginModelID, pInvestorPortfMarginModelField_MarginModelID, sizeof(self->data.MarginModelID) );
		pInvestorPortfMarginModelField_MarginModelID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestorPortfMarginModelField_dealloc(PyCThostFtdcInvestorPortfMarginModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPortfMarginModelField_repr(PyCThostFtdcInvestorPortfMarginModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "MarginModelID", self->data.MarginModelID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfMarginModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorPortfMarginModelField_get_BrokerID(PyCThostFtdcInvestorPortfMarginModelField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorPortfMarginModelField_get_InvestorID(PyCThostFtdcInvestorPortfMarginModelField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorPortfMarginModelField_get_MarginModelID(PyCThostFtdcInvestorPortfMarginModelField *self, void *closure) {
	return PyBytes_FromString(self->data.MarginModelID);
}

static int PyCThostFtdcInvestorPortfMarginModelField_set_BrokerID(PyCThostFtdcInvestorPortfMarginModelField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfMarginModelField_set_InvestorID(PyCThostFtdcInvestorPortfMarginModelField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfMarginModelField_set_MarginModelID(PyCThostFtdcInvestorPortfMarginModelField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
		PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.MarginModelID, buf, sizeof(self->data.MarginModelID));
	return 0;
}



static PyGetSetDef PyCThostFtdcInvestorPortfMarginModelField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPortfMarginModelField_get_BrokerID, (setter)PyCThostFtdcInvestorPortfMarginModelField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPortfMarginModelField_get_InvestorID, (setter)PyCThostFtdcInvestorPortfMarginModelField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"MarginModelID", (getter)PyCThostFtdcInvestorPortfMarginModelField_get_MarginModelID, (setter)PyCThostFtdcInvestorPortfMarginModelField_set_MarginModelID, (char *)"MarginModelID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPortfMarginModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPortfMarginModelField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPortfMarginModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPortfMarginModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPortfMarginModelField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPortfMarginModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPortfMarginModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPortfMarginModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPortfMarginModelField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPortfMarginModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPortfMarginModelField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPortfMarginModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPortfMarginModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPortfMarginModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfMarginModelField", (PyObject *)&PyCThostFtdcInvestorPortfMarginModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfMarginModelField to module");
        Py_DECREF(&PyCThostFtdcInvestorPortfMarginModelFieldType);
		return -1;
    }

    return 0;
}
