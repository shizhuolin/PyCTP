
#include "PyCThostFtdcReqGenUserTextField.h"



static PyObject *PyCThostFtdcReqGenUserTextField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqGenUserTextField *self = (PyCThostFtdcReqGenUserTextField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqGenUserTextField_init(PyCThostFtdcReqGenUserTextField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pReqGenUserTextField_TradingDay = NULL;
	Py_ssize_t pReqGenUserTextField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqGenUserTextField_BrokerID = NULL;
	Py_ssize_t pReqGenUserTextField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqGenUserTextField_UserID = NULL;
	Py_ssize_t pReqGenUserTextField_UserID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pReqGenUserTextField_TradingDay, &pReqGenUserTextField_TradingDay_len
		, &pReqGenUserTextField_BrokerID, &pReqGenUserTextField_BrokerID_len
		, &pReqGenUserTextField_UserID, &pReqGenUserTextField_UserID_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pReqGenUserTextField_TradingDay != NULL) {
		if(pReqGenUserTextField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqGenUserTextField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqGenUserTextField_TradingDay, sizeof(self->data.TradingDay) );
		pReqGenUserTextField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqGenUserTextField_BrokerID != NULL) {
		if(pReqGenUserTextField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqGenUserTextField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqGenUserTextField_BrokerID, sizeof(self->data.BrokerID) );
		pReqGenUserTextField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pReqGenUserTextField_UserID != NULL) {
		if(pReqGenUserTextField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqGenUserTextField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqGenUserTextField_UserID, sizeof(self->data.UserID) );
		pReqGenUserTextField_UserID = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqGenUserTextField_dealloc(PyCThostFtdcReqGenUserTextField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqGenUserTextField_repr(PyCThostFtdcReqGenUserTextField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqGenUserTextField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqGenUserTextField_get_TradingDay(PyCThostFtdcReqGenUserTextField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqGenUserTextField_get_BrokerID(PyCThostFtdcReqGenUserTextField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqGenUserTextField_get_UserID(PyCThostFtdcReqGenUserTextField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static int PyCThostFtdcReqGenUserTextField_set_TradingDay(PyCThostFtdcReqGenUserTextField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
		PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcReqGenUserTextField_set_BrokerID(PyCThostFtdcReqGenUserTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqGenUserTextField_set_UserID(PyCThostFtdcReqGenUserTextField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqGenUserTextField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqGenUserTextField_get_TradingDay, (setter)PyCThostFtdcReqGenUserTextField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqGenUserTextField_get_BrokerID, (setter)PyCThostFtdcReqGenUserTextField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqGenUserTextField_get_UserID, (setter)PyCThostFtdcReqGenUserTextField_set_UserID, (char *)"UserID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqGenUserTextFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqGenUserTextField",	/* tp_name */
	sizeof(PyCThostFtdcReqGenUserTextField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqGenUserTextField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqGenUserTextField_repr,   /* tp_repr */
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
	"CThostFtdcReqGenUserTextField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqGenUserTextField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqGenUserTextField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqGenUserTextField_new,       /* tp_new */
};

int PyCThostFtdcReqGenUserTextFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqGenUserTextField  */
	if (PyType_Ready(&PyCThostFtdcReqGenUserTextFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqGenUserTextField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqGenUserTextFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqGenUserTextField", (PyObject *)&PyCThostFtdcReqGenUserTextFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqGenUserTextField to module");
        Py_DECREF(&PyCThostFtdcReqGenUserTextFieldType);
		return -1;
    }

    return 0;
}
