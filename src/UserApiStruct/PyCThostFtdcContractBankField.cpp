
#include "PyCThostFtdcContractBankField.h"



static PyObject *PyCThostFtdcContractBankField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcContractBankField *self = (PyCThostFtdcContractBankField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcContractBankField_init(PyCThostFtdcContractBankField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BankID", "BankBrchID", "BankName",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pContractBankField_BrokerID = NULL;
	Py_ssize_t pContractBankField_BrokerID_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pContractBankField_BankID = NULL;
	Py_ssize_t pContractBankField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pContractBankField_BankBrchID = NULL;
	Py_ssize_t pContractBankField_BankBrchID_len = 0;

	//TThostFtdcBankNameType char[101]
	const char *pContractBankField_BankName = NULL;
	Py_ssize_t pContractBankField_BankName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pContractBankField_BrokerID, &pContractBankField_BrokerID_len
		, &pContractBankField_BankID, &pContractBankField_BankID_len
		, &pContractBankField_BankBrchID, &pContractBankField_BankBrchID_len
		, &pContractBankField_BankName, &pContractBankField_BankName_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pContractBankField_BrokerID != NULL) {
		if(pContractBankField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pContractBankField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pContractBankField_BrokerID, sizeof(self->data.BrokerID) );
		pContractBankField_BrokerID = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pContractBankField_BankID != NULL) {
		if(pContractBankField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pContractBankField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pContractBankField_BankID, sizeof(self->data.BankID) );
		pContractBankField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pContractBankField_BankBrchID != NULL) {
		if(pContractBankField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
			PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", pContractBankField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
			return -1;
		}
		strncpy(self->data.BankBrchID, pContractBankField_BankBrchID, sizeof(self->data.BankBrchID) );
		pContractBankField_BankBrchID = NULL;
	}

	//TThostFtdcBankNameType char[101]
	if(pContractBankField_BankName != NULL) {
		if(pContractBankField_BankName_len > (Py_ssize_t)sizeof(self->data.BankName)) {
			PyErr_Format(PyExc_ValueError, "BankName too long: length=%zd (max allowed is %zd)", pContractBankField_BankName_len, (Py_ssize_t)sizeof(self->data.BankName));
			return -1;
		}
		strncpy(self->data.BankName, pContractBankField_BankName, sizeof(self->data.BankName) );
		pContractBankField_BankName = NULL;
	}



    return 0;
}

static void PyCThostFtdcContractBankField_dealloc(PyCThostFtdcContractBankField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcContractBankField_repr(PyCThostFtdcContractBankField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "BankID", self->data.BankID 
		, "BankBrchID", self->data.BankBrchID 
		, "BankName", self->data.BankName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcContractBankField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcContractBankField_get_BrokerID(PyCThostFtdcContractBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcContractBankField_get_BankID(PyCThostFtdcContractBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcContractBankField_get_BankBrchID(PyCThostFtdcContractBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBrchID);
}

static PyObject *PyCThostFtdcContractBankField_get_BankName(PyCThostFtdcContractBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankName);
}

static int PyCThostFtdcContractBankField_set_BrokerID(PyCThostFtdcContractBankField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcContractBankField_set_BankID(PyCThostFtdcContractBankField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
		PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
	return 0;
}

static int PyCThostFtdcContractBankField_set_BankBrchID(PyCThostFtdcContractBankField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
		PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.BankBrchID, buf, sizeof(self->data.BankBrchID));
	return 0;
}

static int PyCThostFtdcContractBankField_set_BankName(PyCThostFtdcContractBankField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankName)) {
		PyErr_SetString(PyExc_ValueError, "BankName must be less than 101 bytes");
		return -1;
	}
	strncpy(self->data.BankName, buf, sizeof(self->data.BankName));
	return 0;
}



static PyGetSetDef PyCThostFtdcContractBankField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcContractBankField_get_BrokerID, (setter)PyCThostFtdcContractBankField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcContractBankField_get_BankID, (setter)PyCThostFtdcContractBankField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBrchID", (getter)PyCThostFtdcContractBankField_get_BankBrchID, (setter)PyCThostFtdcContractBankField_set_BankBrchID, (char *)"BankBrchID", NULL},
	 {(char *)"BankName", (getter)PyCThostFtdcContractBankField_get_BankName, (setter)PyCThostFtdcContractBankField_set_BankName, (char *)"BankName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcContractBankFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcContractBankField",	/* tp_name */
	sizeof(PyCThostFtdcContractBankField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcContractBankField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcContractBankField_repr,   /* tp_repr */
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
	"CThostFtdcContractBankField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcContractBankField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcContractBankField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcContractBankField_new,       /* tp_new */
};

int PyCThostFtdcContractBankFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcContractBankField  */
	if (PyType_Ready(&PyCThostFtdcContractBankFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcContractBankField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcContractBankFieldType);
    if( PyModule_AddObject(module, "CThostFtdcContractBankField", (PyObject *)&PyCThostFtdcContractBankFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcContractBankField to module");
        Py_DECREF(&PyCThostFtdcContractBankFieldType);
		return -1;
    }

    return 0;
}
