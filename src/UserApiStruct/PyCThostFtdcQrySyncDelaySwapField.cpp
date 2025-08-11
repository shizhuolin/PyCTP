
#include "PyCThostFtdcQrySyncDelaySwapField.h"



static PyObject *PyCThostFtdcQrySyncDelaySwapField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySyncDelaySwapField *self = (PyCThostFtdcQrySyncDelaySwapField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySyncDelaySwapField_init(PyCThostFtdcQrySyncDelaySwapField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "DelaySwapSeqNo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQrySyncDelaySwapField_BrokerID = NULL;
	Py_ssize_t pQrySyncDelaySwapField_BrokerID_len = 0;

	//TThostFtdcDepositSeqNoType char[15]
	const char *pQrySyncDelaySwapField_DelaySwapSeqNo = NULL;
	Py_ssize_t pQrySyncDelaySwapField_DelaySwapSeqNo_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#", (char **)kwlist
#endif

		, &pQrySyncDelaySwapField_BrokerID, &pQrySyncDelaySwapField_BrokerID_len
		, &pQrySyncDelaySwapField_DelaySwapSeqNo, &pQrySyncDelaySwapField_DelaySwapSeqNo_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQrySyncDelaySwapField_BrokerID != NULL) {
		if(pQrySyncDelaySwapField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQrySyncDelaySwapField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQrySyncDelaySwapField_BrokerID, sizeof(self->data.BrokerID) );
		pQrySyncDelaySwapField_BrokerID = NULL;
	}

	//TThostFtdcDepositSeqNoType char[15]
	if(pQrySyncDelaySwapField_DelaySwapSeqNo != NULL) {
		if(pQrySyncDelaySwapField_DelaySwapSeqNo_len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
			PyErr_Format(PyExc_ValueError, "DelaySwapSeqNo too long: length=%zd (max allowed is %zd)", pQrySyncDelaySwapField_DelaySwapSeqNo_len, (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo));
			return -1;
		}
		strncpy(self->data.DelaySwapSeqNo, pQrySyncDelaySwapField_DelaySwapSeqNo, sizeof(self->data.DelaySwapSeqNo) );
		pQrySyncDelaySwapField_DelaySwapSeqNo = NULL;
	}



    return 0;
}

static void PyCThostFtdcQrySyncDelaySwapField_dealloc(PyCThostFtdcQrySyncDelaySwapField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySyncDelaySwapField_repr(PyCThostFtdcQrySyncDelaySwapField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "DelaySwapSeqNo", self->data.DelaySwapSeqNo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySyncDelaySwapField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQrySyncDelaySwapField_get_BrokerID(PyCThostFtdcQrySyncDelaySwapField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQrySyncDelaySwapField_get_DelaySwapSeqNo(PyCThostFtdcQrySyncDelaySwapField *self, void *closure) {
	return PyBytes_FromString(self->data.DelaySwapSeqNo);
}

static int PyCThostFtdcQrySyncDelaySwapField_set_BrokerID(PyCThostFtdcQrySyncDelaySwapField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQrySyncDelaySwapField_set_DelaySwapSeqNo(PyCThostFtdcQrySyncDelaySwapField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "DelaySwapSeqNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.DelaySwapSeqNo)) {
		PyErr_SetString(PyExc_ValueError, "DelaySwapSeqNo must be less than 15 bytes");
		return -1;
	}
	strncpy(self->data.DelaySwapSeqNo, buf, sizeof(self->data.DelaySwapSeqNo));
	return 0;
}



static PyGetSetDef PyCThostFtdcQrySyncDelaySwapField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQrySyncDelaySwapField_get_BrokerID, (setter)PyCThostFtdcQrySyncDelaySwapField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"DelaySwapSeqNo", (getter)PyCThostFtdcQrySyncDelaySwapField_get_DelaySwapSeqNo, (setter)PyCThostFtdcQrySyncDelaySwapField_set_DelaySwapSeqNo, (char *)"DelaySwapSeqNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySyncDelaySwapFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySyncDelaySwapField",	/* tp_name */
	sizeof(PyCThostFtdcQrySyncDelaySwapField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySyncDelaySwapField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySyncDelaySwapField_repr,   /* tp_repr */
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
	"CThostFtdcQrySyncDelaySwapField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySyncDelaySwapField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySyncDelaySwapField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySyncDelaySwapField_new,       /* tp_new */
};

int PyCThostFtdcQrySyncDelaySwapFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySyncDelaySwapField  */
	if (PyType_Ready(&PyCThostFtdcQrySyncDelaySwapFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySyncDelaySwapField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySyncDelaySwapFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySyncDelaySwapField", (PyObject *)&PyCThostFtdcQrySyncDelaySwapFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySyncDelaySwapField to module");
        Py_DECREF(&PyCThostFtdcQrySyncDelaySwapFieldType);
		return -1;
    }

    return 0;
}
