
#include "PyCThostFtdcTradeParamField.h"



static PyObject *PyCThostFtdcTradeParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradeParamField *self = (PyCThostFtdcTradeParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradeParamField_init(PyCThostFtdcTradeParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "TradeParamID", "TradeParamValue", "Memo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradeParamField_BrokerID = NULL;
	Py_ssize_t pTradeParamField_BrokerID_len = 0;

	//TThostFtdcTradeParamIDType char
	char pTradeParamField_TradeParamID = 0;

	//TThostFtdcSettlementParamValueType char[256]
	const char *pTradeParamField_TradeParamValue = NULL;
	Py_ssize_t pTradeParamField_TradeParamValue_len = 0;

	//TThostFtdcMemoType char[161]
	const char *pTradeParamField_Memo = NULL;
	Py_ssize_t pTradeParamField_Memo_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#", (char **)kwlist
#endif

		, &pTradeParamField_BrokerID, &pTradeParamField_BrokerID_len
		, &pTradeParamField_TradeParamID
		, &pTradeParamField_TradeParamValue, &pTradeParamField_TradeParamValue_len
		, &pTradeParamField_Memo, &pTradeParamField_Memo_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradeParamField_BrokerID != NULL) {
		if(pTradeParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradeParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradeParamField_BrokerID, sizeof(self->data.BrokerID) );
		pTradeParamField_BrokerID = NULL;
	}

	//TThostFtdcTradeParamIDType char
	self->data.TradeParamID = pTradeParamField_TradeParamID;

	//TThostFtdcSettlementParamValueType char[256]
	if(pTradeParamField_TradeParamValue != NULL) {
		if(pTradeParamField_TradeParamValue_len > (Py_ssize_t)sizeof(self->data.TradeParamValue)) {
			PyErr_Format(PyExc_ValueError, "TradeParamValue too long: length=%zd (max allowed is %zd)", pTradeParamField_TradeParamValue_len, (Py_ssize_t)sizeof(self->data.TradeParamValue));
			return -1;
		}
		strncpy(self->data.TradeParamValue, pTradeParamField_TradeParamValue, sizeof(self->data.TradeParamValue) );
		pTradeParamField_TradeParamValue = NULL;
	}

	//TThostFtdcMemoType char[161]
	if(pTradeParamField_Memo != NULL) {
		if(pTradeParamField_Memo_len > (Py_ssize_t)sizeof(self->data.Memo)) {
			PyErr_Format(PyExc_ValueError, "Memo too long: length=%zd (max allowed is %zd)", pTradeParamField_Memo_len, (Py_ssize_t)sizeof(self->data.Memo));
			return -1;
		}
		strncpy(self->data.Memo, pTradeParamField_Memo, sizeof(self->data.Memo) );
		pTradeParamField_Memo = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradeParamField_dealloc(PyCThostFtdcTradeParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradeParamField_repr(PyCThostFtdcTradeParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "TradeParamID", self->data.TradeParamID
		, "TradeParamValue", self->data.TradeParamValue 
		, "Memo", self->data.Memo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradeParamField_get_BrokerID(PyCThostFtdcTradeParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradeParamField_get_TradeParamID(PyCThostFtdcTradeParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradeParamID), 1);
}

static PyObject *PyCThostFtdcTradeParamField_get_TradeParamValue(PyCThostFtdcTradeParamField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeParamValue);
}

static PyObject *PyCThostFtdcTradeParamField_get_Memo(PyCThostFtdcTradeParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Memo);
}

static int PyCThostFtdcTradeParamField_set_BrokerID(PyCThostFtdcTradeParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeParamField_set_TradeParamID(PyCThostFtdcTradeParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeParamID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeParamID)) {
		PyErr_SetString(PyExc_ValueError, "TradeParamID must be less than 1 bytes");
		return -1;
	}
	self->data.TradeParamID = *buf;
	return 0;
}

static int PyCThostFtdcTradeParamField_set_TradeParamValue(PyCThostFtdcTradeParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeParamValue Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeParamValue)) {
		PyErr_SetString(PyExc_ValueError, "TradeParamValue must be less than 256 bytes");
		return -1;
	}
	strncpy(self->data.TradeParamValue, buf, sizeof(self->data.TradeParamValue));
	return 0;
}

static int PyCThostFtdcTradeParamField_set_Memo(PyCThostFtdcTradeParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Memo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Memo)) {
		PyErr_SetString(PyExc_ValueError, "Memo must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.Memo, buf, sizeof(self->data.Memo));
	return 0;
}



static PyGetSetDef PyCThostFtdcTradeParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradeParamField_get_BrokerID, (setter)PyCThostFtdcTradeParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"TradeParamID", (getter)PyCThostFtdcTradeParamField_get_TradeParamID, (setter)PyCThostFtdcTradeParamField_set_TradeParamID, (char *)"TradeParamID", NULL},
	 {(char *)"TradeParamValue", (getter)PyCThostFtdcTradeParamField_get_TradeParamValue, (setter)PyCThostFtdcTradeParamField_set_TradeParamValue, (char *)"TradeParamValue", NULL},
	 {(char *)"Memo", (getter)PyCThostFtdcTradeParamField_get_Memo, (setter)PyCThostFtdcTradeParamField_set_Memo, (char *)"Memo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradeParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradeParamField",	/* tp_name */
	sizeof(PyCThostFtdcTradeParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradeParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradeParamField_repr,   /* tp_repr */
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
	"CThostFtdcTradeParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradeParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradeParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradeParamField_new,       /* tp_new */
};

int PyCThostFtdcTradeParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradeParamField  */
	if (PyType_Ready(&PyCThostFtdcTradeParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradeParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradeParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradeParamField", (PyObject *)&PyCThostFtdcTradeParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradeParamField to module");
        Py_DECREF(&PyCThostFtdcTradeParamFieldType);
		return -1;
    }

    return 0;
}
