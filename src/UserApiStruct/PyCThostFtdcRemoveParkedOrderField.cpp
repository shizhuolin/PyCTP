
#include "PyCThostFtdcRemoveParkedOrderField.h"



static PyObject *PyCThostFtdcRemoveParkedOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRemoveParkedOrderField *self = (PyCThostFtdcRemoveParkedOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRemoveParkedOrderField_init(PyCThostFtdcRemoveParkedOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ParkedOrderID", "InvestUnitID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pRemoveParkedOrderField_BrokerID = NULL;
	Py_ssize_t pRemoveParkedOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pRemoveParkedOrderField_InvestorID = NULL;
	Py_ssize_t pRemoveParkedOrderField_InvestorID_len = 0;

	//TThostFtdcParkedOrderIDType char[13]
	const char *pRemoveParkedOrderField_ParkedOrderID = NULL;
	Py_ssize_t pRemoveParkedOrderField_ParkedOrderID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pRemoveParkedOrderField_InvestUnitID = NULL;
	Py_ssize_t pRemoveParkedOrderField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pRemoveParkedOrderField_BrokerID, &pRemoveParkedOrderField_BrokerID_len
		, &pRemoveParkedOrderField_InvestorID, &pRemoveParkedOrderField_InvestorID_len
		, &pRemoveParkedOrderField_ParkedOrderID, &pRemoveParkedOrderField_ParkedOrderID_len
		, &pRemoveParkedOrderField_InvestUnitID, &pRemoveParkedOrderField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pRemoveParkedOrderField_BrokerID != NULL) {
		if(pRemoveParkedOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRemoveParkedOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pRemoveParkedOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pRemoveParkedOrderField_InvestorID != NULL) {
		if(pRemoveParkedOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pRemoveParkedOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pRemoveParkedOrderField_InvestorID = NULL;
	}

	//TThostFtdcParkedOrderIDType char[13]
	if(pRemoveParkedOrderField_ParkedOrderID != NULL) {
		if(pRemoveParkedOrderField_ParkedOrderID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
			PyErr_Format(PyExc_ValueError, "ParkedOrderID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderField_ParkedOrderID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderID));
			return -1;
		}
		strncpy(self->data.ParkedOrderID, pRemoveParkedOrderField_ParkedOrderID, sizeof(self->data.ParkedOrderID) );
		pRemoveParkedOrderField_ParkedOrderID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pRemoveParkedOrderField_InvestUnitID != NULL) {
		if(pRemoveParkedOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pRemoveParkedOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pRemoveParkedOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pRemoveParkedOrderField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcRemoveParkedOrderField_dealloc(PyCThostFtdcRemoveParkedOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRemoveParkedOrderField_repr(PyCThostFtdcRemoveParkedOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ParkedOrderID", self->data.ParkedOrderID 
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRemoveParkedOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRemoveParkedOrderField_get_BrokerID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRemoveParkedOrderField_get_InvestorID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcRemoveParkedOrderField_get_ParkedOrderID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParkedOrderID);
}

static PyObject *PyCThostFtdcRemoveParkedOrderField_get_InvestUnitID(PyCThostFtdcRemoveParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcRemoveParkedOrderField_set_BrokerID(PyCThostFtdcRemoveParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRemoveParkedOrderField_set_InvestorID(PyCThostFtdcRemoveParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRemoveParkedOrderField_set_ParkedOrderID(PyCThostFtdcRemoveParkedOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParkedOrderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
		PyErr_SetString(PyExc_ValueError, "ParkedOrderID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ParkedOrderID, buf, sizeof(self->data.ParkedOrderID));
	return 0;
}

static int PyCThostFtdcRemoveParkedOrderField_set_InvestUnitID(PyCThostFtdcRemoveParkedOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRemoveParkedOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcRemoveParkedOrderField_get_BrokerID, (setter)PyCThostFtdcRemoveParkedOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcRemoveParkedOrderField_get_InvestorID, (setter)PyCThostFtdcRemoveParkedOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ParkedOrderID", (getter)PyCThostFtdcRemoveParkedOrderField_get_ParkedOrderID, (setter)PyCThostFtdcRemoveParkedOrderField_set_ParkedOrderID, (char *)"ParkedOrderID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcRemoveParkedOrderField_get_InvestUnitID, (setter)PyCThostFtdcRemoveParkedOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRemoveParkedOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRemoveParkedOrderField",	/* tp_name */
	sizeof(PyCThostFtdcRemoveParkedOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRemoveParkedOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRemoveParkedOrderField_repr,   /* tp_repr */
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
	"CThostFtdcRemoveParkedOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRemoveParkedOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRemoveParkedOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRemoveParkedOrderField_new,       /* tp_new */
};

int PyCThostFtdcRemoveParkedOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRemoveParkedOrderField  */
	if (PyType_Ready(&PyCThostFtdcRemoveParkedOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRemoveParkedOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRemoveParkedOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRemoveParkedOrderField", (PyObject *)&PyCThostFtdcRemoveParkedOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRemoveParkedOrderField to module");
        Py_DECREF(&PyCThostFtdcRemoveParkedOrderFieldType);
		return -1;
    }

    return 0;
}
