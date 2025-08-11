
#include "PyCThostFtdcQryInvestorPortfSettingField.h"



static PyObject *PyCThostFtdcQryInvestorPortfSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorPortfSettingField *self = (PyCThostFtdcQryInvestorPortfSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorPortfSettingField_init(PyCThostFtdcQryInvestorPortfSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInvestorPortfSettingField_ExchangeID = NULL;
	Py_ssize_t pQryInvestorPortfSettingField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorPortfSettingField_BrokerID = NULL;
	Py_ssize_t pQryInvestorPortfSettingField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorPortfSettingField_InvestorID = NULL;
	Py_ssize_t pQryInvestorPortfSettingField_InvestorID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

		, &pQryInvestorPortfSettingField_ExchangeID, &pQryInvestorPortfSettingField_ExchangeID_len
		, &pQryInvestorPortfSettingField_BrokerID, &pQryInvestorPortfSettingField_BrokerID_len
		, &pQryInvestorPortfSettingField_InvestorID, &pQryInvestorPortfSettingField_InvestorID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryInvestorPortfSettingField_ExchangeID != NULL) {
		if(pQryInvestorPortfSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInvestorPortfSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInvestorPortfSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInvestorPortfSettingField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorPortfSettingField_BrokerID != NULL) {
		if(pQryInvestorPortfSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorPortfSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorPortfSettingField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorPortfSettingField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorPortfSettingField_InvestorID != NULL) {
		if(pQryInvestorPortfSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorPortfSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorPortfSettingField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorPortfSettingField_InvestorID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInvestorPortfSettingField_dealloc(PyCThostFtdcQryInvestorPortfSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorPortfSettingField_repr(PyCThostFtdcQryInvestorPortfSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPortfSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorPortfSettingField_get_ExchangeID(PyCThostFtdcQryInvestorPortfSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInvestorPortfSettingField_get_BrokerID(PyCThostFtdcQryInvestorPortfSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorPortfSettingField_get_InvestorID(PyCThostFtdcQryInvestorPortfSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static int PyCThostFtdcQryInvestorPortfSettingField_set_ExchangeID(PyCThostFtdcQryInvestorPortfSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPortfSettingField_set_BrokerID(PyCThostFtdcQryInvestorPortfSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorPortfSettingField_set_InvestorID(PyCThostFtdcQryInvestorPortfSettingField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryInvestorPortfSettingField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorPortfSettingField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorPortfSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorPortfSettingField_get_BrokerID, (setter)PyCThostFtdcQryInvestorPortfSettingField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorPortfSettingField_get_InvestorID, (setter)PyCThostFtdcQryInvestorPortfSettingField_set_InvestorID, (char *)"InvestorID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorPortfSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorPortfSettingField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorPortfSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorPortfSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorPortfSettingField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorPortfSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorPortfSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorPortfSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorPortfSettingField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorPortfSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorPortfSettingField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorPortfSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorPortfSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorPortfSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPortfSettingField", (PyObject *)&PyCThostFtdcQryInvestorPortfSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPortfSettingField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorPortfSettingFieldType);
		return -1;
    }

    return 0;
}
