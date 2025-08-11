
#include "PyCThostFtdcExchangeOrderActionErrorField.h"



static PyObject *PyCThostFtdcExchangeOrderActionErrorField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOrderActionErrorField *self = (PyCThostFtdcExchangeOrderActionErrorField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOrderActionErrorField_init(PyCThostFtdcExchangeOrderActionErrorField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "OrderSysID", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeOrderActionErrorField_ExchangeID = NULL;
	Py_ssize_t pExchangeOrderActionErrorField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeOrderActionErrorField_OrderSysID = NULL;
	Py_ssize_t pExchangeOrderActionErrorField_OrderSysID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeOrderActionErrorField_TraderID = NULL;
	Py_ssize_t pExchangeOrderActionErrorField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeOrderActionErrorField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOrderActionErrorField_OrderLocalID = NULL;
	Py_ssize_t pExchangeOrderActionErrorField_OrderLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOrderActionErrorField_ActionLocalID = NULL;
	Py_ssize_t pExchangeOrderActionErrorField_ActionLocalID_len = 0;

	//TThostFtdcErrorIDType int
	int pExchangeOrderActionErrorField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pExchangeOrderActionErrorField_ErrorMsg = NULL;
	Py_ssize_t pExchangeOrderActionErrorField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#s#is#", (char **)kwlist
#endif

		, &pExchangeOrderActionErrorField_ExchangeID, &pExchangeOrderActionErrorField_ExchangeID_len
		, &pExchangeOrderActionErrorField_OrderSysID, &pExchangeOrderActionErrorField_OrderSysID_len
		, &pExchangeOrderActionErrorField_TraderID, &pExchangeOrderActionErrorField_TraderID_len
		, &pExchangeOrderActionErrorField_InstallID
		, &pExchangeOrderActionErrorField_OrderLocalID, &pExchangeOrderActionErrorField_OrderLocalID_len
		, &pExchangeOrderActionErrorField_ActionLocalID, &pExchangeOrderActionErrorField_ActionLocalID_len
		, &pExchangeOrderActionErrorField_ErrorID
		, &pExchangeOrderActionErrorField_ErrorMsg, &pExchangeOrderActionErrorField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeOrderActionErrorField_ExchangeID != NULL) {
		if(pExchangeOrderActionErrorField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionErrorField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeOrderActionErrorField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeOrderActionErrorField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeOrderActionErrorField_OrderSysID != NULL) {
		if(pExchangeOrderActionErrorField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionErrorField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pExchangeOrderActionErrorField_OrderSysID, sizeof(self->data.OrderSysID) );
		pExchangeOrderActionErrorField_OrderSysID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeOrderActionErrorField_TraderID != NULL) {
		if(pExchangeOrderActionErrorField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionErrorField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeOrderActionErrorField_TraderID, sizeof(self->data.TraderID) );
		pExchangeOrderActionErrorField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeOrderActionErrorField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOrderActionErrorField_OrderLocalID != NULL) {
		if(pExchangeOrderActionErrorField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionErrorField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pExchangeOrderActionErrorField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pExchangeOrderActionErrorField_OrderLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOrderActionErrorField_ActionLocalID != NULL) {
		if(pExchangeOrderActionErrorField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionErrorField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExchangeOrderActionErrorField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExchangeOrderActionErrorField_ActionLocalID = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pExchangeOrderActionErrorField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pExchangeOrderActionErrorField_ErrorMsg != NULL) {
		if(pExchangeOrderActionErrorField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pExchangeOrderActionErrorField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pExchangeOrderActionErrorField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pExchangeOrderActionErrorField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeOrderActionErrorField_dealloc(PyCThostFtdcExchangeOrderActionErrorField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_repr(PyCThostFtdcExchangeOrderActionErrorField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:s,s:i,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "OrderSysID", self->data.OrderSysID 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OrderLocalID", self->data.OrderLocalID 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderActionErrorField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_ExchangeID(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_OrderSysID(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_TraderID(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_InstallID(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_OrderLocalID(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_ActionLocalID(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_ErrorID(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderActionErrorField_get_ErrorMsg(PyCThostFtdcExchangeOrderActionErrorField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_ExchangeID(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_OrderSysID(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
	return 0;
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_TraderID(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
		PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_InstallID(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.InstallID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_OrderLocalID(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
	return 0;
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_ActionLocalID(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
	return 0;
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_ErrorID(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected int"); 
#endif 
        return -1;
    }
#if PY_MAJOR_VERSION >= 3 
    const long buf = PyLong_AsLong(val); 
#else 
    const long buf = PyInt_AsLong(val); 
#endif 
    if (buf == -1 && PyErr_Occurred()) { 
        return -1; 
    } 
    if (buf < INT_MIN || buf > INT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C int"); 
        return -1; 
    } 
    self->data.ErrorID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeOrderActionErrorField_set_ErrorMsg(PyCThostFtdcExchangeOrderActionErrorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
		PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
	return 0;
}



static PyGetSetDef PyCThostFtdcExchangeOrderActionErrorField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_ExchangeID, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_OrderSysID, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_TraderID, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_InstallID, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_OrderLocalID, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_ActionLocalID, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_ErrorID, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcExchangeOrderActionErrorField_get_ErrorMsg, (setter)PyCThostFtdcExchangeOrderActionErrorField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOrderActionErrorFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOrderActionErrorField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOrderActionErrorField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOrderActionErrorField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOrderActionErrorField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOrderActionErrorField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOrderActionErrorField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOrderActionErrorField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOrderActionErrorField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOrderActionErrorFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOrderActionErrorField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOrderActionErrorFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOrderActionErrorField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOrderActionErrorFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderActionErrorField", (PyObject *)&PyCThostFtdcExchangeOrderActionErrorFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderActionErrorField to module");
        Py_DECREF(&PyCThostFtdcExchangeOrderActionErrorFieldType);
		return -1;
    }

    return 0;
}
