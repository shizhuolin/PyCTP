
#include "PyCThostFtdcQryContractBankField.h"



static PyObject *PyCThostFtdcQryContractBankField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryContractBankField *self = (PyCThostFtdcQryContractBankField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryContractBankField_init(PyCThostFtdcQryContractBankField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "BankID", "BankBrchID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryContractBankField_BrokerID = NULL;
	Py_ssize_t pQryContractBankField_BrokerID_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pQryContractBankField_BankID = NULL;
	Py_ssize_t pQryContractBankField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pQryContractBankField_BankBrchID = NULL;
	Py_ssize_t pQryContractBankField_BankBrchID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryContractBankField_BrokerID, &pQryContractBankField_BrokerID_len
		, &pQryContractBankField_BankID, &pQryContractBankField_BankID_len
		, &pQryContractBankField_BankBrchID, &pQryContractBankField_BankBrchID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryContractBankField_BrokerID != NULL) {
		if(pQryContractBankField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryContractBankField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryContractBankField_BrokerID, sizeof(self->data.BrokerID) );
		pQryContractBankField_BrokerID = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pQryContractBankField_BankID != NULL) {
		if(pQryContractBankField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pQryContractBankField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pQryContractBankField_BankID, sizeof(self->data.BankID) );
		pQryContractBankField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pQryContractBankField_BankBrchID != NULL) {
		if(pQryContractBankField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
			PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", pQryContractBankField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
			return -1;
		}
		strncpy(self->data.BankBrchID, pQryContractBankField_BankBrchID, sizeof(self->data.BankBrchID) );
		pQryContractBankField_BankBrchID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryContractBankField_dealloc(PyCThostFtdcQryContractBankField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryContractBankField_repr(PyCThostFtdcQryContractBankField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "BankID", self->data.BankID 
		, "BankBrchID", self->data.BankBrchID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryContractBankField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryContractBankField_get_BrokerID(PyCThostFtdcQryContractBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryContractBankField_get_BankID(PyCThostFtdcQryContractBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcQryContractBankField_get_BankBrchID(PyCThostFtdcQryContractBankField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBrchID);
}

static int PyCThostFtdcQryContractBankField_set_BrokerID(PyCThostFtdcQryContractBankField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryContractBankField_set_BankID(PyCThostFtdcQryContractBankField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryContractBankField_set_BankBrchID(PyCThostFtdcQryContractBankField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryContractBankField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryContractBankField_get_BrokerID, (setter)PyCThostFtdcQryContractBankField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcQryContractBankField_get_BankID, (setter)PyCThostFtdcQryContractBankField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBrchID", (getter)PyCThostFtdcQryContractBankField_get_BankBrchID, (setter)PyCThostFtdcQryContractBankField_set_BankBrchID, (char *)"BankBrchID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryContractBankFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryContractBankField",	/* tp_name */
	sizeof(PyCThostFtdcQryContractBankField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryContractBankField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryContractBankField_repr,   /* tp_repr */
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
	"CThostFtdcQryContractBankField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryContractBankField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryContractBankField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryContractBankField_new,       /* tp_new */
};

int PyCThostFtdcQryContractBankFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryContractBankField  */
	if (PyType_Ready(&PyCThostFtdcQryContractBankFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryContractBankField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryContractBankFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryContractBankField", (PyObject *)&PyCThostFtdcQryContractBankFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryContractBankField to module");
        Py_DECREF(&PyCThostFtdcQryContractBankFieldType);
		return -1;
    }

    return 0;
}
