
#include "PyCThostFtdcRemoveParkedOrderActionField.h"



static PyObject *PyCThostFtdcRemoveParkedOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRemoveParkedOrderActionField *self = (PyCThostFtdcRemoveParkedOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRemoveParkedOrderActionField_init(PyCThostFtdcRemoveParkedOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ParkedOrderActionID", "InvestUnitID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pRemoveParkedOrderActionField_BrokerID = NULL;
	Py_ssize_t pRemoveParkedOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pRemoveParkedOrderActionField_InvestorID = NULL;
	Py_ssize_t pRemoveParkedOrderActionField_InvestorID_len = 0;

	//TThostFtdcParkedOrderActionIDType char[13]
	const char *pRemoveParkedOrderActionField_ParkedOrderActionID = NULL;
	Py_ssize_t pRemoveParkedOrderActionField_ParkedOrderActionID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pRemoveParkedOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pRemoveParkedOrderActionField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pRemoveParkedOrderActionField_BrokerID, &pRemoveParkedOrderActionField_BrokerID_len
		, &pRemoveParkedOrderActionField_InvestorID, &pRemoveParkedOrderActionField_InvestorID_len
		, &pRemoveParkedOrderActionField_ParkedOrderActionID, &pRemoveParkedOrderActionField_ParkedOrderActionID_len
		, &pRemoveParkedOrderActionField_InvestUnitID, &pRemoveParkedOrderActionField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pRemoveParkedOrderActionField_BrokerID != NULL) {
		if(pRemoveParkedOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRemoveParkedOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pRemoveParkedOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pRemoveParkedOrderActionField_InvestorID != NULL) {
		if(pRemoveParkedOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pRemoveParkedOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pRemoveParkedOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcParkedOrderActionIDType char[13]
	if(pRemoveParkedOrderActionField_ParkedOrderActionID != NULL) {
		if(pRemoveParkedOrderActionField_ParkedOrderActionID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
			PyErr_Format(PyExc_ValueError, "ParkedOrderActionID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderActionField_ParkedOrderActionID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID));
			return -1;
		}
		strncpy(self->data.ParkedOrderActionID, pRemoveParkedOrderActionField_ParkedOrderActionID, sizeof(self->data.ParkedOrderActionID) );
		pRemoveParkedOrderActionField_ParkedOrderActionID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pRemoveParkedOrderActionField_InvestUnitID != NULL) {
		if(pRemoveParkedOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pRemoveParkedOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pRemoveParkedOrderActionField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcRemoveParkedOrderActionField_dealloc(PyCThostFtdcRemoveParkedOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRemoveParkedOrderActionField_repr(PyCThostFtdcRemoveParkedOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ParkedOrderActionID", self->data.ParkedOrderActionID 
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRemoveParkedOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_BrokerID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_InvestorID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_ParkedOrderActionID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParkedOrderActionID);
}

static PyObject *PyCThostFtdcRemoveParkedOrderActionField_get_InvestUnitID(PyCThostFtdcRemoveParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcRemoveParkedOrderActionField_set_BrokerID(PyCThostFtdcRemoveParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRemoveParkedOrderActionField_set_InvestorID(PyCThostFtdcRemoveParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRemoveParkedOrderActionField_set_ParkedOrderActionID(PyCThostFtdcRemoveParkedOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParkedOrderActionID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
		PyErr_SetString(PyExc_ValueError, "ParkedOrderActionID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ParkedOrderActionID, buf, sizeof(self->data.ParkedOrderActionID));
	return 0;
}

static int PyCThostFtdcRemoveParkedOrderActionField_set_InvestUnitID(PyCThostFtdcRemoveParkedOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRemoveParkedOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_BrokerID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_InvestorID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ParkedOrderActionID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_ParkedOrderActionID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_ParkedOrderActionID, (char *)"ParkedOrderActionID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcRemoveParkedOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcRemoveParkedOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRemoveParkedOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRemoveParkedOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcRemoveParkedOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRemoveParkedOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRemoveParkedOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcRemoveParkedOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRemoveParkedOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRemoveParkedOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRemoveParkedOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcRemoveParkedOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRemoveParkedOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcRemoveParkedOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRemoveParkedOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRemoveParkedOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRemoveParkedOrderActionField", (PyObject *)&PyCThostFtdcRemoveParkedOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRemoveParkedOrderActionField to module");
        Py_DECREF(&PyCThostFtdcRemoveParkedOrderActionFieldType);
		return -1;
    }

    return 0;
}
