
#include "PyCThostFtdcRiskForbiddenRightField.h"



static PyObject *PyCThostFtdcRiskForbiddenRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRiskForbiddenRightField *self = (PyCThostFtdcRiskForbiddenRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRiskForbiddenRightField_init(PyCThostFtdcRiskForbiddenRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UserID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pRiskForbiddenRightField_BrokerID = NULL;
	Py_ssize_t pRiskForbiddenRightField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pRiskForbiddenRightField_InvestorID = NULL;
	Py_ssize_t pRiskForbiddenRightField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pRiskForbiddenRightField_InstrumentID = NULL;
	Py_ssize_t pRiskForbiddenRightField_InstrumentID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRiskForbiddenRightField_UserID = NULL;
	Py_ssize_t pRiskForbiddenRightField_UserID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pRiskForbiddenRightField_BrokerID, &pRiskForbiddenRightField_BrokerID_len
		, &pRiskForbiddenRightField_InvestorID, &pRiskForbiddenRightField_InvestorID_len
		, &pRiskForbiddenRightField_InstrumentID, &pRiskForbiddenRightField_InstrumentID_len
		, &pRiskForbiddenRightField_UserID, &pRiskForbiddenRightField_UserID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pRiskForbiddenRightField_BrokerID != NULL) {
		if(pRiskForbiddenRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRiskForbiddenRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRiskForbiddenRightField_BrokerID, sizeof(self->data.BrokerID) );
		pRiskForbiddenRightField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pRiskForbiddenRightField_InvestorID != NULL) {
		if(pRiskForbiddenRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pRiskForbiddenRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pRiskForbiddenRightField_InvestorID, sizeof(self->data.InvestorID) );
		pRiskForbiddenRightField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pRiskForbiddenRightField_InstrumentID != NULL) {
		if(pRiskForbiddenRightField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pRiskForbiddenRightField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pRiskForbiddenRightField_InstrumentID, sizeof(self->data.InstrumentID) );
		pRiskForbiddenRightField_InstrumentID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pRiskForbiddenRightField_UserID != NULL) {
		if(pRiskForbiddenRightField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRiskForbiddenRightField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRiskForbiddenRightField_UserID, sizeof(self->data.UserID) );
		pRiskForbiddenRightField_UserID = NULL;
	}



    return 0;
}

static void PyCThostFtdcRiskForbiddenRightField_dealloc(PyCThostFtdcRiskForbiddenRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRiskForbiddenRightField_repr(PyCThostFtdcRiskForbiddenRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InstrumentID", self->data.InstrumentID 
		, "UserID", self->data.UserID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskForbiddenRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRiskForbiddenRightField_get_BrokerID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRiskForbiddenRightField_get_InvestorID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcRiskForbiddenRightField_get_InstrumentID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcRiskForbiddenRightField_get_UserID(PyCThostFtdcRiskForbiddenRightField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static int PyCThostFtdcRiskForbiddenRightField_set_BrokerID(PyCThostFtdcRiskForbiddenRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskForbiddenRightField_set_InvestorID(PyCThostFtdcRiskForbiddenRightField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskForbiddenRightField_set_InstrumentID(PyCThostFtdcRiskForbiddenRightField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}

static int PyCThostFtdcRiskForbiddenRightField_set_UserID(PyCThostFtdcRiskForbiddenRightField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
		PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}



static PyGetSetDef PyCThostFtdcRiskForbiddenRightField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcRiskForbiddenRightField_get_BrokerID, (setter)PyCThostFtdcRiskForbiddenRightField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcRiskForbiddenRightField_get_InvestorID, (setter)PyCThostFtdcRiskForbiddenRightField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcRiskForbiddenRightField_get_InstrumentID, (setter)PyCThostFtdcRiskForbiddenRightField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRiskForbiddenRightField_get_UserID, (setter)PyCThostFtdcRiskForbiddenRightField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRiskForbiddenRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRiskForbiddenRightField",	/* tp_name */
	sizeof(PyCThostFtdcRiskForbiddenRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRiskForbiddenRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRiskForbiddenRightField_repr,   /* tp_repr */
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
	"CThostFtdcRiskForbiddenRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRiskForbiddenRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRiskForbiddenRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRiskForbiddenRightField_new,       /* tp_new */
};

int PyCThostFtdcRiskForbiddenRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRiskForbiddenRightField  */
	if (PyType_Ready(&PyCThostFtdcRiskForbiddenRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRiskForbiddenRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRiskForbiddenRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRiskForbiddenRightField", (PyObject *)&PyCThostFtdcRiskForbiddenRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskForbiddenRightField to module");
        Py_DECREF(&PyCThostFtdcRiskForbiddenRightFieldType);
		return -1;
    }

    return 0;
}
