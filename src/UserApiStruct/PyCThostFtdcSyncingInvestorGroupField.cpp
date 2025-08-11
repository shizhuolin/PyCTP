
#include "PyCThostFtdcSyncingInvestorGroupField.h"



static PyObject *PyCThostFtdcSyncingInvestorGroupField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInvestorGroupField *self = (PyCThostFtdcSyncingInvestorGroupField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInvestorGroupField_init(PyCThostFtdcSyncingInvestorGroupField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorGroupID", "InvestorGroupName",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingInvestorGroupField_BrokerID = NULL;
	Py_ssize_t pSyncingInvestorGroupField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInvestorGroupField_InvestorGroupID = NULL;
	Py_ssize_t pSyncingInvestorGroupField_InvestorGroupID_len = 0;

	//TThostFtdcInvestorGroupNameType char[41]
	const char *pSyncingInvestorGroupField_InvestorGroupName = NULL;
	Py_ssize_t pSyncingInvestorGroupField_InvestorGroupName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pSyncingInvestorGroupField_BrokerID, &pSyncingInvestorGroupField_BrokerID_len
		, &pSyncingInvestorGroupField_InvestorGroupID, &pSyncingInvestorGroupField_InvestorGroupID_len
		, &pSyncingInvestorGroupField_InvestorGroupName, &pSyncingInvestorGroupField_InvestorGroupName_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingInvestorGroupField_BrokerID != NULL) {
		if(pSyncingInvestorGroupField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingInvestorGroupField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingInvestorGroupField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingInvestorGroupField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInvestorGroupField_InvestorGroupID != NULL) {
		if(pSyncingInvestorGroupField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
			PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", pSyncingInvestorGroupField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
			return -1;
		}
		strncpy(self->data.InvestorGroupID, pSyncingInvestorGroupField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
		pSyncingInvestorGroupField_InvestorGroupID = NULL;
	}

	//TThostFtdcInvestorGroupNameType char[41]
	if(pSyncingInvestorGroupField_InvestorGroupName != NULL) {
		if(pSyncingInvestorGroupField_InvestorGroupName_len > (Py_ssize_t)sizeof(self->data.InvestorGroupName)) {
			PyErr_Format(PyExc_ValueError, "InvestorGroupName too long: length=%zd (max allowed is %zd)", pSyncingInvestorGroupField_InvestorGroupName_len, (Py_ssize_t)sizeof(self->data.InvestorGroupName));
			return -1;
		}
		strncpy(self->data.InvestorGroupName, pSyncingInvestorGroupField_InvestorGroupName, sizeof(self->data.InvestorGroupName) );
		pSyncingInvestorGroupField_InvestorGroupName = NULL;
	}



    return 0;
}

static void PyCThostFtdcSyncingInvestorGroupField_dealloc(PyCThostFtdcSyncingInvestorGroupField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInvestorGroupField_repr(PyCThostFtdcSyncingInvestorGroupField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorGroupField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingInvestorGroupField_get_BrokerID(PyCThostFtdcSyncingInvestorGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupID(PyCThostFtdcSyncingInvestorGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorGroupID);
}

static PyObject *PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupName(PyCThostFtdcSyncingInvestorGroupField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorGroupName);
}

static int PyCThostFtdcSyncingInvestorGroupField_set_BrokerID(PyCThostFtdcSyncingInvestorGroupField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupID(PyCThostFtdcSyncingInvestorGroupField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupName(PyCThostFtdcSyncingInvestorGroupField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncingInvestorGroupField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInvestorGroupField_get_BrokerID, (setter)PyCThostFtdcSyncingInvestorGroupField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorGroupID", (getter)PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupID, (setter)PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
	 {(char *)"InvestorGroupName", (getter)PyCThostFtdcSyncingInvestorGroupField_get_InvestorGroupName, (setter)PyCThostFtdcSyncingInvestorGroupField_set_InvestorGroupName, (char *)"InvestorGroupName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInvestorGroupFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInvestorGroupField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInvestorGroupField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInvestorGroupField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInvestorGroupField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInvestorGroupField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInvestorGroupField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInvestorGroupField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInvestorGroupField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInvestorGroupFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInvestorGroupField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInvestorGroupFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInvestorGroupField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInvestorGroupFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorGroupField", (PyObject *)&PyCThostFtdcSyncingInvestorGroupFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorGroupField to module");
        Py_DECREF(&PyCThostFtdcSyncingInvestorGroupFieldType);
		return -1;
    }

    return 0;
}
