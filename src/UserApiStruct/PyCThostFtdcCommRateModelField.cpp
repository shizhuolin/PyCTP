
#include "PyCThostFtdcCommRateModelField.h"



static PyObject *PyCThostFtdcCommRateModelField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCommRateModelField *self = (PyCThostFtdcCommRateModelField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCommRateModelField_init(PyCThostFtdcCommRateModelField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "CommModelID", "CommModelName",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pCommRateModelField_BrokerID = NULL;
	Py_ssize_t pCommRateModelField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pCommRateModelField_CommModelID = NULL;
	Py_ssize_t pCommRateModelField_CommModelID_len = 0;

	//TThostFtdcCommModelNameType char[161]
	const char *pCommRateModelField_CommModelName = NULL;
	Py_ssize_t pCommRateModelField_CommModelName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pCommRateModelField_BrokerID, &pCommRateModelField_BrokerID_len
		, &pCommRateModelField_CommModelID, &pCommRateModelField_CommModelID_len
		, &pCommRateModelField_CommModelName, &pCommRateModelField_CommModelName_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pCommRateModelField_BrokerID != NULL) {
		if(pCommRateModelField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pCommRateModelField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pCommRateModelField_BrokerID, sizeof(self->data.BrokerID) );
		pCommRateModelField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pCommRateModelField_CommModelID != NULL) {
		if(pCommRateModelField_CommModelID_len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
			PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is %zd)", pCommRateModelField_CommModelID_len, (Py_ssize_t)sizeof(self->data.CommModelID));
			return -1;
		}
		strncpy(self->data.CommModelID, pCommRateModelField_CommModelID, sizeof(self->data.CommModelID) );
		pCommRateModelField_CommModelID = NULL;
	}

	//TThostFtdcCommModelNameType char[161]
	if(pCommRateModelField_CommModelName != NULL) {
		if(pCommRateModelField_CommModelName_len > (Py_ssize_t)sizeof(self->data.CommModelName)) {
			PyErr_Format(PyExc_ValueError, "CommModelName too long: length=%zd (max allowed is %zd)", pCommRateModelField_CommModelName_len, (Py_ssize_t)sizeof(self->data.CommModelName));
			return -1;
		}
		strncpy(self->data.CommModelName, pCommRateModelField_CommModelName, sizeof(self->data.CommModelName) );
		pCommRateModelField_CommModelName = NULL;
	}



    return 0;
}

static void PyCThostFtdcCommRateModelField_dealloc(PyCThostFtdcCommRateModelField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCommRateModelField_repr(PyCThostFtdcCommRateModelField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "CommModelID", self->data.CommModelID 
		, "CommModelName", self->data.CommModelName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCommRateModelField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCommRateModelField_get_BrokerID(PyCThostFtdcCommRateModelField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcCommRateModelField_get_CommModelID(PyCThostFtdcCommRateModelField *self, void *closure) {
	return PyBytes_FromString(self->data.CommModelID);
}

static PyObject *PyCThostFtdcCommRateModelField_get_CommModelName(PyCThostFtdcCommRateModelField *self, void *closure) {
	return PyBytes_FromString(self->data.CommModelName);
}

static int PyCThostFtdcCommRateModelField_set_BrokerID(PyCThostFtdcCommRateModelField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCommRateModelField_set_CommModelID(PyCThostFtdcCommRateModelField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
		PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.CommModelID, buf, sizeof(self->data.CommModelID));
	return 0;
}

static int PyCThostFtdcCommRateModelField_set_CommModelName(PyCThostFtdcCommRateModelField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommModelName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommModelName)) {
		PyErr_SetString(PyExc_ValueError, "CommModelName must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.CommModelName, buf, sizeof(self->data.CommModelName));
	return 0;
}



static PyGetSetDef PyCThostFtdcCommRateModelField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcCommRateModelField_get_BrokerID, (setter)PyCThostFtdcCommRateModelField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"CommModelID", (getter)PyCThostFtdcCommRateModelField_get_CommModelID, (setter)PyCThostFtdcCommRateModelField_set_CommModelID, (char *)"CommModelID", NULL},
	 {(char *)"CommModelName", (getter)PyCThostFtdcCommRateModelField_get_CommModelName, (setter)PyCThostFtdcCommRateModelField_set_CommModelName, (char *)"CommModelName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCommRateModelFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCommRateModelField",	/* tp_name */
	sizeof(PyCThostFtdcCommRateModelField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCommRateModelField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCommRateModelField_repr,   /* tp_repr */
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
	"CThostFtdcCommRateModelField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCommRateModelField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCommRateModelField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCommRateModelField_new,       /* tp_new */
};

int PyCThostFtdcCommRateModelFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCommRateModelField  */
	if (PyType_Ready(&PyCThostFtdcCommRateModelFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCommRateModelField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCommRateModelFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCommRateModelField", (PyObject *)&PyCThostFtdcCommRateModelFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCommRateModelField to module");
        Py_DECREF(&PyCThostFtdcCommRateModelFieldType);
		return -1;
    }

    return 0;
}
