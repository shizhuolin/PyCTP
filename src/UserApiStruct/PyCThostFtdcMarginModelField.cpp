
#include "PyCThostFtdcMarginModelField.h"



static PyObject *PyCThostFtdcMarginModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMarginModelField *self = (PyCThostFtdcMarginModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMarginModelField_init(PyCThostFtdcMarginModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "MarginModelID", "MarginModelName",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pMarginModelField_BrokerID = NULL;
	Py_ssize_t pMarginModelField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pMarginModelField_MarginModelID = NULL;
	Py_ssize_t pMarginModelField_MarginModelID_len = 0;

	//TThostFtdcCommModelNameType char[161]
	const char *pMarginModelField_MarginModelName = NULL;
	Py_ssize_t pMarginModelField_MarginModelName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pMarginModelField_BrokerID, &pMarginModelField_BrokerID_len
		, &pMarginModelField_MarginModelID, &pMarginModelField_MarginModelID_len
		, &pMarginModelField_MarginModelName, &pMarginModelField_MarginModelName_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pMarginModelField_BrokerID != NULL) {
		if(pMarginModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pMarginModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pMarginModelField_BrokerID, sizeof(self->data.BrokerID) );
		pMarginModelField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pMarginModelField_MarginModelID != NULL) {
		if(pMarginModelField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
			PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", pMarginModelField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
			return -1;
		}
		strncpy(self->data.MarginModelID, pMarginModelField_MarginModelID, sizeof(self->data.MarginModelID) );
		pMarginModelField_MarginModelID = NULL;
	}

	//TThostFtdcCommModelNameType char[161]
	if(pMarginModelField_MarginModelName != NULL) {
		if(pMarginModelField_MarginModelName_len > (Py_ssize_t)sizeof(self->data.MarginModelName)) {
			PyErr_Format(PyExc_ValueError, "MarginModelName too long: length=%zd (max allowed is %zd)", pMarginModelField_MarginModelName_len, (Py_ssize_t)sizeof(self->data.MarginModelName));
			return -1;
		}
		strncpy(self->data.MarginModelName, pMarginModelField_MarginModelName, sizeof(self->data.MarginModelName) );
		pMarginModelField_MarginModelName = NULL;
	}



    return 0;
}

static void PyCThostFtdcMarginModelField_dealloc(PyCThostFtdcMarginModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMarginModelField_repr(PyCThostFtdcMarginModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "MarginModelID", self->data.MarginModelID 
		, "MarginModelName", self->data.MarginModelName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMarginModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMarginModelField_get_BrokerID(PyCThostFtdcMarginModelField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcMarginModelField_get_MarginModelID(PyCThostFtdcMarginModelField *self, void *closure) {
	return PyBytes_FromString(self->data.MarginModelID);
}

static PyObject *PyCThostFtdcMarginModelField_get_MarginModelName(PyCThostFtdcMarginModelField *self, void *closure) {
	return PyBytes_FromString(self->data.MarginModelName);
}

static int PyCThostFtdcMarginModelField_set_BrokerID(PyCThostFtdcMarginModelField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarginModelField_set_MarginModelID(PyCThostFtdcMarginModelField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMarginModelField_set_MarginModelName(PyCThostFtdcMarginModelField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MarginModelName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MarginModelName)) {
		PyErr_SetString(PyExc_ValueError, "MarginModelName must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.MarginModelName, buf, sizeof(self->data.MarginModelName));
	return 0;
}



static PyGetSetDef PyCThostFtdcMarginModelField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcMarginModelField_get_BrokerID, (setter)PyCThostFtdcMarginModelField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"MarginModelID", (getter)PyCThostFtdcMarginModelField_get_MarginModelID, (setter)PyCThostFtdcMarginModelField_set_MarginModelID, (char *)"MarginModelID", NULL},
	 {(char *)"MarginModelName", (getter)PyCThostFtdcMarginModelField_get_MarginModelName, (setter)PyCThostFtdcMarginModelField_set_MarginModelName, (char *)"MarginModelName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMarginModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMarginModelField",	/* tp_name */
	sizeof(PyCThostFtdcMarginModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMarginModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMarginModelField_repr,   /* tp_repr */
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
	"CThostFtdcMarginModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMarginModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMarginModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMarginModelField_new,       /* tp_new */
};

int PyCThostFtdcMarginModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMarginModelField  */
	if (PyType_Ready(&PyCThostFtdcMarginModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMarginModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMarginModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMarginModelField", (PyObject *)&PyCThostFtdcMarginModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMarginModelField to module");
        Py_DECREF(&PyCThostFtdcMarginModelFieldType);
		return -1;
    }

    return 0;
}
