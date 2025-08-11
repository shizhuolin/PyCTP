
#include "PyCThostFtdcVerifyInvestorPasswordField.h"



static PyObject *PyCThostFtdcVerifyInvestorPasswordField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcVerifyInvestorPasswordField *self = (PyCThostFtdcVerifyInvestorPasswordField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcVerifyInvestorPasswordField_init(PyCThostFtdcVerifyInvestorPasswordField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "Password",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pVerifyInvestorPasswordField_BrokerID = NULL;
	Py_ssize_t pVerifyInvestorPasswordField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pVerifyInvestorPasswordField_InvestorID = NULL;
	Py_ssize_t pVerifyInvestorPasswordField_InvestorID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pVerifyInvestorPasswordField_Password = NULL;
	Py_ssize_t pVerifyInvestorPasswordField_Password_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pVerifyInvestorPasswordField_BrokerID, &pVerifyInvestorPasswordField_BrokerID_len
		, &pVerifyInvestorPasswordField_InvestorID, &pVerifyInvestorPasswordField_InvestorID_len
		, &pVerifyInvestorPasswordField_Password, &pVerifyInvestorPasswordField_Password_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pVerifyInvestorPasswordField_BrokerID != NULL) {
		if(pVerifyInvestorPasswordField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pVerifyInvestorPasswordField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pVerifyInvestorPasswordField_BrokerID, sizeof(self->data.BrokerID) );
		pVerifyInvestorPasswordField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pVerifyInvestorPasswordField_InvestorID != NULL) {
		if(pVerifyInvestorPasswordField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pVerifyInvestorPasswordField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pVerifyInvestorPasswordField_InvestorID, sizeof(self->data.InvestorID) );
		pVerifyInvestorPasswordField_InvestorID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pVerifyInvestorPasswordField_Password != NULL) {
		if(pVerifyInvestorPasswordField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pVerifyInvestorPasswordField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pVerifyInvestorPasswordField_Password, sizeof(self->data.Password) );
		pVerifyInvestorPasswordField_Password = NULL;
	}



    return 0;
}

static void PyCThostFtdcVerifyInvestorPasswordField_dealloc(PyCThostFtdcVerifyInvestorPasswordField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcVerifyInvestorPasswordField_repr(PyCThostFtdcVerifyInvestorPasswordField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "Password", self->data.Password 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyInvestorPasswordField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcVerifyInvestorPasswordField_get_BrokerID(PyCThostFtdcVerifyInvestorPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcVerifyInvestorPasswordField_get_InvestorID(PyCThostFtdcVerifyInvestorPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcVerifyInvestorPasswordField_get_Password(PyCThostFtdcVerifyInvestorPasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static int PyCThostFtdcVerifyInvestorPasswordField_set_BrokerID(PyCThostFtdcVerifyInvestorPasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyInvestorPasswordField_set_InvestorID(PyCThostFtdcVerifyInvestorPasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyInvestorPasswordField_set_Password(PyCThostFtdcVerifyInvestorPasswordField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Password)) {
		PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Password, buf, sizeof(self->data.Password));
	return 0;
}



static PyGetSetDef PyCThostFtdcVerifyInvestorPasswordField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcVerifyInvestorPasswordField_get_BrokerID, (setter)PyCThostFtdcVerifyInvestorPasswordField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcVerifyInvestorPasswordField_get_InvestorID, (setter)PyCThostFtdcVerifyInvestorPasswordField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcVerifyInvestorPasswordField_get_Password, (setter)PyCThostFtdcVerifyInvestorPasswordField_set_Password, (char *)"Password", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcVerifyInvestorPasswordFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcVerifyInvestorPasswordField",	/* tp_name */
	sizeof(PyCThostFtdcVerifyInvestorPasswordField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcVerifyInvestorPasswordField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcVerifyInvestorPasswordField_repr,   /* tp_repr */
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
	"CThostFtdcVerifyInvestorPasswordField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcVerifyInvestorPasswordField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcVerifyInvestorPasswordField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcVerifyInvestorPasswordField_new,       /* tp_new */
};

int PyCThostFtdcVerifyInvestorPasswordFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcVerifyInvestorPasswordField  */
	if (PyType_Ready(&PyCThostFtdcVerifyInvestorPasswordFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcVerifyInvestorPasswordField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcVerifyInvestorPasswordFieldType);
    if( PyModule_AddObject(module, "CThostFtdcVerifyInvestorPasswordField", (PyObject *)&PyCThostFtdcVerifyInvestorPasswordFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyInvestorPasswordField to module");
        Py_DECREF(&PyCThostFtdcVerifyInvestorPasswordFieldType);
		return -1;
    }

    return 0;
}
