
#include "PyCThostFtdcInvestorGroupField.h"



static PyObject *PyCThostFtdcInvestorGroupField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorGroupField *self = (PyCThostFtdcInvestorGroupField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorGroupField_init(PyCThostFtdcInvestorGroupField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorGroupID", "InvestorGroupName",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorGroupField_BrokerID = NULL;
	Py_ssize_t pInvestorGroupField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorGroupField_InvestorGroupID = NULL;
	Py_ssize_t pInvestorGroupField_InvestorGroupID_len = 0;

	//TThostFtdcInvestorGroupNameType char[41]
	const char *pInvestorGroupField_InvestorGroupName = NULL;
	Py_ssize_t pInvestorGroupField_InvestorGroupName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pInvestorGroupField_BrokerID, &pInvestorGroupField_BrokerID_len
		, &pInvestorGroupField_InvestorGroupID, &pInvestorGroupField_InvestorGroupID_len
		, &pInvestorGroupField_InvestorGroupName, &pInvestorGroupField_InvestorGroupName_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorGroupField_BrokerID != NULL) {
		if(pInvestorGroupField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorGroupField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorGroupField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorGroupField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorGroupField_InvestorGroupID != NULL) {
		if(pInvestorGroupField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
			PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", pInvestorGroupField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
			return -1;
		}
		strncpy(self->data.InvestorGroupID, pInvestorGroupField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
		pInvestorGroupField_InvestorGroupID = NULL;
	}

	//TThostFtdcInvestorGroupNameType char[41]
	if(pInvestorGroupField_InvestorGroupName != NULL) {
		if(pInvestorGroupField_InvestorGroupName_len > (Py_ssize_t)sizeof(self->data.InvestorGroupName)) {
			PyErr_Format(PyExc_ValueError, "InvestorGroupName too long: length=%zd (max allowed is %zd)", pInvestorGroupField_InvestorGroupName_len, (Py_ssize_t)sizeof(self->data.InvestorGroupName));
			return -1;
		}
		strncpy(self->data.InvestorGroupName, pInvestorGroupField_InvestorGroupName, sizeof(self->data.InvestorGroupName) );
		pInvestorGroupField_InvestorGroupName = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestorGroupField_dealloc(PyCThostFtdcInvestorGroupField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorGroupField_repr(PyCThostFtdcInvestorGroupField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorGroupID", self->data.InvestorGroupID 
		, "InvestorGroupName", self->data.InvestorGroupName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorGroupField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorGroupField_get_BrokerID(PyCThostFtdcInvestorGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorGroupField_get_InvestorGroupID(PyCThostFtdcInvestorGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorGroupID);
}

static PyObject *PyCThostFtdcInvestorGroupField_get_InvestorGroupName(PyCThostFtdcInvestorGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorGroupName);
}

static int PyCThostFtdcInvestorGroupField_set_BrokerID(PyCThostFtdcInvestorGroupField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorGroupField_set_InvestorGroupID(PyCThostFtdcInvestorGroupField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorGroupID, buf, sizeof(self->data.InvestorGroupID));
	return 0;
}

static int PyCThostFtdcInvestorGroupField_set_InvestorGroupName(PyCThostFtdcInvestorGroupField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorGroupName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorGroupName)) {
		PyErr_SetString(PyExc_ValueError, "InvestorGroupName must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.InvestorGroupName, buf, sizeof(self->data.InvestorGroupName));
	return 0;
}



static PyGetSetDef PyCThostFtdcInvestorGroupField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorGroupField_get_BrokerID, (setter)PyCThostFtdcInvestorGroupField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorGroupID", (getter)PyCThostFtdcInvestorGroupField_get_InvestorGroupID, (setter)PyCThostFtdcInvestorGroupField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
	 {(char *)"InvestorGroupName", (getter)PyCThostFtdcInvestorGroupField_get_InvestorGroupName, (setter)PyCThostFtdcInvestorGroupField_set_InvestorGroupName, (char *)"InvestorGroupName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorGroupFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorGroupField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorGroupField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorGroupField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorGroupField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorGroupField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorGroupField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorGroupField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorGroupField_new,       /* tp_new */
};

int PyCThostFtdcInvestorGroupFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorGroupField  */
	if (PyType_Ready(&PyCThostFtdcInvestorGroupFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorGroupField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorGroupFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorGroupField", (PyObject *)&PyCThostFtdcInvestorGroupFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorGroupField to module");
        Py_DECREF(&PyCThostFtdcInvestorGroupFieldType);
		return -1;
    }

    return 0;
}
