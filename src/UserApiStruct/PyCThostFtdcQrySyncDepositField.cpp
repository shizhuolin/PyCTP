
#include "PyCThostFtdcQrySyncDepositField.h"



static PyObject *PyCThostFtdcQrySyncDepositField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySyncDepositField *self = (PyCThostFtdcQrySyncDepositField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySyncDepositField_init(PyCThostFtdcQrySyncDepositField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "DepositSeqNo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQrySyncDepositField_BrokerID = NULL;
	Py_ssize_t pQrySyncDepositField_BrokerID_len = 0;

	//TThostFtdcDepositSeqNoType char[15]
	const char *pQrySyncDepositField_DepositSeqNo = NULL;
	Py_ssize_t pQrySyncDepositField_DepositSeqNo_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQrySyncDepositField_BrokerID, &pQrySyncDepositField_BrokerID_len
		, &pQrySyncDepositField_DepositSeqNo, &pQrySyncDepositField_DepositSeqNo_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQrySyncDepositField_BrokerID != NULL) {
		if(pQrySyncDepositField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQrySyncDepositField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQrySyncDepositField_BrokerID, sizeof(self->data.BrokerID) );
		pQrySyncDepositField_BrokerID = NULL;
	}

	//TThostFtdcDepositSeqNoType char[15]
	if(pQrySyncDepositField_DepositSeqNo != NULL) {
		if(pQrySyncDepositField_DepositSeqNo_len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
			PyErr_Format(PyExc_ValueError, "DepositSeqNo too long: length=%zd (max allowed is %zd)", pQrySyncDepositField_DepositSeqNo_len, (Py_ssize_t)sizeof(self->data.DepositSeqNo));
			return -1;
		}
		strncpy(self->data.DepositSeqNo, pQrySyncDepositField_DepositSeqNo, sizeof(self->data.DepositSeqNo) );
		pQrySyncDepositField_DepositSeqNo = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySyncDepositField_dealloc(PyCThostFtdcQrySyncDepositField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySyncDepositField_repr(PyCThostFtdcQrySyncDepositField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "DepositSeqNo", self->data.DepositSeqNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncDepositField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySyncDepositField_get_BrokerID(PyCThostFtdcQrySyncDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQrySyncDepositField_get_DepositSeqNo(PyCThostFtdcQrySyncDepositField *self, void *closure) {
	return PyBytes_FromString(self->data.DepositSeqNo);
}

static int PyCThostFtdcQrySyncDepositField_set_BrokerID(PyCThostFtdcQrySyncDepositField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySyncDepositField_set_DepositSeqNo(PyCThostFtdcQrySyncDepositField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "DepositSeqNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.DepositSeqNo)) {
		PyErr_SetString(PyExc_ValueError, "DepositSeqNo must be less than 15 bytes");
		return -1;
	}
	strncpy(self->data.DepositSeqNo, buf, sizeof(self->data.DepositSeqNo));
	return 0;
}



static PyGetSetDef PyCThostFtdcQrySyncDepositField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQrySyncDepositField_get_BrokerID, (setter)PyCThostFtdcQrySyncDepositField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"DepositSeqNo", (getter)PyCThostFtdcQrySyncDepositField_get_DepositSeqNo, (setter)PyCThostFtdcQrySyncDepositField_set_DepositSeqNo, (char *)"DepositSeqNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySyncDepositFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySyncDepositField",	/* tp_name */
	sizeof(PyCThostFtdcQrySyncDepositField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySyncDepositField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySyncDepositField_repr,   /* tp_repr */
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
	"CThostFtdcQrySyncDepositField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySyncDepositField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySyncDepositField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySyncDepositField_new,       /* tp_new */
};

int PyCThostFtdcQrySyncDepositFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySyncDepositField  */
	if (PyType_Ready(&PyCThostFtdcQrySyncDepositFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySyncDepositField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySyncDepositFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySyncDepositField", (PyObject *)&PyCThostFtdcQrySyncDepositFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncDepositField to module");
        Py_DECREF(&PyCThostFtdcQrySyncDepositFieldType);
		return -1;
    }

    return 0;
}
