
#include "PyCThostFtdcTradingAccountPasswordUpdateV1Field.h"



static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordUpdateV1Field *self = (PyCThostFtdcTradingAccountPasswordUpdateV1Field *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_init(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OldPassword", "NewPassword",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingAccountPasswordUpdateV1Field_BrokerID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateV1Field_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pTradingAccountPasswordUpdateV1Field_InvestorID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateV1Field_InvestorID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTradingAccountPasswordUpdateV1Field_OldPassword = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateV1Field_OldPassword_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTradingAccountPasswordUpdateV1Field_NewPassword = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateV1Field_NewPassword_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pTradingAccountPasswordUpdateV1Field_BrokerID, &pTradingAccountPasswordUpdateV1Field_BrokerID_len
		, &pTradingAccountPasswordUpdateV1Field_InvestorID, &pTradingAccountPasswordUpdateV1Field_InvestorID_len
		, &pTradingAccountPasswordUpdateV1Field_OldPassword, &pTradingAccountPasswordUpdateV1Field_OldPassword_len
		, &pTradingAccountPasswordUpdateV1Field_NewPassword, &pTradingAccountPasswordUpdateV1Field_NewPassword_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingAccountPasswordUpdateV1Field_BrokerID != NULL) {
		if(pTradingAccountPasswordUpdateV1Field_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateV1Field_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingAccountPasswordUpdateV1Field_BrokerID, sizeof(self->data.BrokerID) );
		pTradingAccountPasswordUpdateV1Field_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pTradingAccountPasswordUpdateV1Field_InvestorID != NULL) {
		if(pTradingAccountPasswordUpdateV1Field_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateV1Field_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pTradingAccountPasswordUpdateV1Field_InvestorID, sizeof(self->data.InvestorID) );
		pTradingAccountPasswordUpdateV1Field_InvestorID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTradingAccountPasswordUpdateV1Field_OldPassword != NULL) {
		if(pTradingAccountPasswordUpdateV1Field_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
			PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateV1Field_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
			return -1;
		}
		strncpy(self->data.OldPassword, pTradingAccountPasswordUpdateV1Field_OldPassword, sizeof(self->data.OldPassword) );
		pTradingAccountPasswordUpdateV1Field_OldPassword = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTradingAccountPasswordUpdateV1Field_NewPassword != NULL) {
		if(pTradingAccountPasswordUpdateV1Field_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
			PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateV1Field_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
			return -1;
		}
		strncpy(self->data.NewPassword, pTradingAccountPasswordUpdateV1Field_NewPassword, sizeof(self->data.NewPassword) );
		pTradingAccountPasswordUpdateV1Field_NewPassword = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradingAccountPasswordUpdateV1Field_dealloc(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_repr(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OldPassword", self->data.OldPassword 
		, "NewPassword", self->data.NewPassword 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateV1Field representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_InvestorID(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
	return PyBytes_FromString(self->data.OldPassword);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field *self, void *closure) {
	return PyBytes_FromString(self->data.NewPassword);
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateV1Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_InvestorID(PyCThostFtdcTradingAccountPasswordUpdateV1Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
		PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.OldPassword, buf, sizeof(self->data.OldPassword));
	return 0;
}

static int PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateV1Field* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
		PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.NewPassword, buf, sizeof(self->data.NewPassword));
	return 0;
}



static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateV1Field_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_InvestorID, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OldPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_OldPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_OldPassword, (char *)"OldPassword", NULL},
	 {(char *)"NewPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_get_NewPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateV1Field_set_NewPassword, (char *)"NewPassword", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateV1FieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountPasswordUpdateV1Field",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountPasswordUpdateV1Field),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountPasswordUpdateV1Field_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountPasswordUpdateV1Field_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountPasswordUpdateV1Field",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountPasswordUpdateV1Field_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountPasswordUpdateV1Field_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountPasswordUpdateV1Field_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountPasswordUpdateV1FieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountPasswordUpdateV1Field  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountPasswordUpdateV1Field");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateV1Field", (PyObject *)&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateV1Field to module");
        Py_DECREF(&PyCThostFtdcTradingAccountPasswordUpdateV1FieldType);
		return -1;
    }

    return 0;
}
