
#include "PyCThostFtdcQryTradingNoticeField.h"



static PyObject *PyCThostFtdcQryTradingNoticeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTradingNoticeField *self = (PyCThostFtdcQryTradingNoticeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryTradingNoticeField_init(PyCThostFtdcQryTradingNoticeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InvestUnitID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryTradingNoticeField_BrokerID = NULL;
	Py_ssize_t pQryTradingNoticeField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryTradingNoticeField_InvestorID = NULL;
	Py_ssize_t pQryTradingNoticeField_InvestorID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryTradingNoticeField_InvestUnitID = NULL;
	Py_ssize_t pQryTradingNoticeField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryTradingNoticeField_BrokerID, &pQryTradingNoticeField_BrokerID_len
		, &pQryTradingNoticeField_InvestorID, &pQryTradingNoticeField_InvestorID_len
		, &pQryTradingNoticeField_InvestUnitID, &pQryTradingNoticeField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryTradingNoticeField_BrokerID != NULL) {
		if(pQryTradingNoticeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryTradingNoticeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryTradingNoticeField_BrokerID, sizeof(self->data.BrokerID) );
		pQryTradingNoticeField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryTradingNoticeField_InvestorID != NULL) {
		if(pQryTradingNoticeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryTradingNoticeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryTradingNoticeField_InvestorID, sizeof(self->data.InvestorID) );
		pQryTradingNoticeField_InvestorID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryTradingNoticeField_InvestUnitID != NULL) {
		if(pQryTradingNoticeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryTradingNoticeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryTradingNoticeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryTradingNoticeField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryTradingNoticeField_dealloc(PyCThostFtdcQryTradingNoticeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTradingNoticeField_repr(PyCThostFtdcQryTradingNoticeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingNoticeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryTradingNoticeField_get_BrokerID(PyCThostFtdcQryTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryTradingNoticeField_get_InvestorID(PyCThostFtdcQryTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryTradingNoticeField_get_InvestUnitID(PyCThostFtdcQryTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcQryTradingNoticeField_set_BrokerID(PyCThostFtdcQryTradingNoticeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingNoticeField_set_InvestorID(PyCThostFtdcQryTradingNoticeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryTradingNoticeField_set_InvestUnitID(PyCThostFtdcQryTradingNoticeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryTradingNoticeField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryTradingNoticeField_get_BrokerID, (setter)PyCThostFtdcQryTradingNoticeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryTradingNoticeField_get_InvestorID, (setter)PyCThostFtdcQryTradingNoticeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryTradingNoticeField_get_InvestUnitID, (setter)PyCThostFtdcQryTradingNoticeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTradingNoticeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTradingNoticeField",	/* tp_name */
	sizeof(PyCThostFtdcQryTradingNoticeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTradingNoticeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTradingNoticeField_repr,   /* tp_repr */
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
	"CThostFtdcQryTradingNoticeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTradingNoticeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTradingNoticeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTradingNoticeField_new,       /* tp_new */
};

int PyCThostFtdcQryTradingNoticeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTradingNoticeField  */
	if (PyType_Ready(&PyCThostFtdcQryTradingNoticeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTradingNoticeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTradingNoticeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTradingNoticeField", (PyObject *)&PyCThostFtdcQryTradingNoticeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingNoticeField to module");
        Py_DECREF(&PyCThostFtdcQryTradingNoticeFieldType);
		return -1;
    }

    return 0;
}
