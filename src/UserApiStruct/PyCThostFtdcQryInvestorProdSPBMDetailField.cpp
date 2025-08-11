
#include "PyCThostFtdcQryInvestorProdSPBMDetailField.h"



static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorProdSPBMDetailField *self = (PyCThostFtdcQryInvestorProdSPBMDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorProdSPBMDetailField_init(PyCThostFtdcQryInvestorProdSPBMDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInvestorProdSPBMDetailField_ExchangeID = NULL;
	Py_ssize_t pQryInvestorProdSPBMDetailField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorProdSPBMDetailField_BrokerID = NULL;
	Py_ssize_t pQryInvestorProdSPBMDetailField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorProdSPBMDetailField_InvestorID = NULL;
	Py_ssize_t pQryInvestorProdSPBMDetailField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
	Py_ssize_t pQryInvestorProdSPBMDetailField_ProdFamilyCode_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

		, &pQryInvestorProdSPBMDetailField_ExchangeID, &pQryInvestorProdSPBMDetailField_ExchangeID_len
		, &pQryInvestorProdSPBMDetailField_BrokerID, &pQryInvestorProdSPBMDetailField_BrokerID_len
		, &pQryInvestorProdSPBMDetailField_InvestorID, &pQryInvestorProdSPBMDetailField_InvestorID_len
		, &pQryInvestorProdSPBMDetailField_ProdFamilyCode, &pQryInvestorProdSPBMDetailField_ProdFamilyCode_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryInvestorProdSPBMDetailField_ExchangeID != NULL) {
		if(pQryInvestorProdSPBMDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInvestorProdSPBMDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInvestorProdSPBMDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInvestorProdSPBMDetailField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorProdSPBMDetailField_BrokerID != NULL) {
		if(pQryInvestorProdSPBMDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorProdSPBMDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorProdSPBMDetailField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorProdSPBMDetailField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorProdSPBMDetailField_InvestorID != NULL) {
		if(pQryInvestorProdSPBMDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorProdSPBMDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorProdSPBMDetailField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorProdSPBMDetailField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInvestorProdSPBMDetailField_ProdFamilyCode != NULL) {
		if(pQryInvestorProdSPBMDetailField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pQryInvestorProdSPBMDetailField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pQryInvestorProdSPBMDetailField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pQryInvestorProdSPBMDetailField_ProdFamilyCode = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryInvestorProdSPBMDetailField_dealloc(PyCThostFtdcQryInvestorProdSPBMDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_repr(PyCThostFtdcQryInvestorProdSPBMDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdSPBMDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_ExchangeID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_BrokerID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_InvestorID(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInvestorProdSPBMDetailField_get_ProdFamilyCode(PyCThostFtdcQryInvestorProdSPBMDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_ExchangeID(PyCThostFtdcQryInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_BrokerID(PyCThostFtdcQryInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_InvestorID(PyCThostFtdcQryInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorProdSPBMDetailField_set_ProdFamilyCode(PyCThostFtdcQryInvestorProdSPBMDetailField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProdFamilyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
		PyErr_SetString(PyExc_ValueError, "ProdFamilyCode must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProdFamilyCode, buf, sizeof(self->data.ProdFamilyCode));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryInvestorProdSPBMDetailField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_BrokerID, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_InvestorID, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQryInvestorProdSPBMDetailField_get_ProdFamilyCode, (setter)PyCThostFtdcQryInvestorProdSPBMDetailField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorProdSPBMDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorProdSPBMDetailField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorProdSPBMDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorProdSPBMDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorProdSPBMDetailField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorProdSPBMDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorProdSPBMDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorProdSPBMDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorProdSPBMDetailField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorProdSPBMDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorProdSPBMDetailField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorProdSPBMDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorProdSPBMDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorProdSPBMDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdSPBMDetailField", (PyObject *)&PyCThostFtdcQryInvestorProdSPBMDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdSPBMDetailField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorProdSPBMDetailFieldType);
		return -1;
    }

    return 0;
}
