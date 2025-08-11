
#include "PyCThostFtdcQryInvestorProdRULEMarginField.h"



static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorProdRULEMarginField *self = (PyCThostFtdcQryInvestorProdRULEMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorProdRULEMarginField_init(PyCThostFtdcQryInvestorProdRULEMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProdFamilyCode", "CommodityGroupID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pQryInvestorProdRULEMarginField_ExchangeID = NULL;
	Py_ssize_t pQryInvestorProdRULEMarginField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pQryInvestorProdRULEMarginField_BrokerID = NULL;
	Py_ssize_t pQryInvestorProdRULEMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryInvestorProdRULEMarginField_InvestorID = NULL;
	Py_ssize_t pQryInvestorProdRULEMarginField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryInvestorProdRULEMarginField_ProdFamilyCode = NULL;
	Py_ssize_t pQryInvestorProdRULEMarginField_ProdFamilyCode_len = 0;

	//TThostFtdcCommodityGroupIDType int
	int pQryInvestorProdRULEMarginField_CommodityGroupID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#i", (char **)kwlist
#endif

		, &pQryInvestorProdRULEMarginField_ExchangeID, &pQryInvestorProdRULEMarginField_ExchangeID_len
		, &pQryInvestorProdRULEMarginField_BrokerID, &pQryInvestorProdRULEMarginField_BrokerID_len
		, &pQryInvestorProdRULEMarginField_InvestorID, &pQryInvestorProdRULEMarginField_InvestorID_len
		, &pQryInvestorProdRULEMarginField_ProdFamilyCode, &pQryInvestorProdRULEMarginField_ProdFamilyCode_len
		, &pQryInvestorProdRULEMarginField_CommodityGroupID


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pQryInvestorProdRULEMarginField_ExchangeID != NULL) {
		if(pQryInvestorProdRULEMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryInvestorProdRULEMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryInvestorProdRULEMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryInvestorProdRULEMarginField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pQryInvestorProdRULEMarginField_BrokerID != NULL) {
		if(pQryInvestorProdRULEMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryInvestorProdRULEMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryInvestorProdRULEMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pQryInvestorProdRULEMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryInvestorProdRULEMarginField_InvestorID != NULL) {
		if(pQryInvestorProdRULEMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryInvestorProdRULEMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryInvestorProdRULEMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pQryInvestorProdRULEMarginField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryInvestorProdRULEMarginField_ProdFamilyCode != NULL) {
		if(pQryInvestorProdRULEMarginField_ProdFamilyCode_len > (Py_ssize_t)sizeof(self->data.ProdFamilyCode)) {
			PyErr_Format(PyExc_ValueError, "ProdFamilyCode too long: length=%zd (max allowed is %zd)", pQryInvestorProdRULEMarginField_ProdFamilyCode_len, (Py_ssize_t)sizeof(self->data.ProdFamilyCode));
			return -1;
		}
		strncpy(self->data.ProdFamilyCode, pQryInvestorProdRULEMarginField_ProdFamilyCode, sizeof(self->data.ProdFamilyCode) );
		pQryInvestorProdRULEMarginField_ProdFamilyCode = NULL;
	}

	//TThostFtdcCommodityGroupIDType int
	self->data.CommodityGroupID = pQryInvestorProdRULEMarginField_CommodityGroupID;



    return 0;
}

static void PyCThostFtdcQryInvestorProdRULEMarginField_dealloc(PyCThostFtdcQryInvestorProdRULEMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_repr(PyCThostFtdcQryInvestorProdRULEMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ProdFamilyCode", self->data.ProdFamilyCode 
		, "CommodityGroupID", self->data.CommodityGroupID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProdRULEMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_ExchangeID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_BrokerID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_InvestorID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_ProdFamilyCode(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ProdFamilyCode);
}

static PyObject *PyCThostFtdcQryInvestorProdRULEMarginField_get_CommodityGroupID(PyCThostFtdcQryInvestorProdRULEMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CommodityGroupID);
#else 
	return PyInt_FromLong(self->data.CommodityGroupID);
#endif 
}

static int PyCThostFtdcQryInvestorProdRULEMarginField_set_ExchangeID(PyCThostFtdcQryInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorProdRULEMarginField_set_BrokerID(PyCThostFtdcQryInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorProdRULEMarginField_set_InvestorID(PyCThostFtdcQryInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorProdRULEMarginField_set_ProdFamilyCode(PyCThostFtdcQryInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryInvestorProdRULEMarginField_set_CommodityGroupID(PyCThostFtdcQryInvestorProdRULEMarginField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CommodityGroupID Expected int"); 
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
    self->data.CommodityGroupID = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcQryInvestorProdRULEMarginField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_BrokerID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_InvestorID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ProdFamilyCode", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_ProdFamilyCode, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_ProdFamilyCode, (char *)"ProdFamilyCode", NULL},
	 {(char *)"CommodityGroupID", (getter)PyCThostFtdcQryInvestorProdRULEMarginField_get_CommodityGroupID, (setter)PyCThostFtdcQryInvestorProdRULEMarginField_set_CommodityGroupID, (char *)"CommodityGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorProdRULEMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorProdRULEMarginField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorProdRULEMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorProdRULEMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorProdRULEMarginField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorProdRULEMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorProdRULEMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorProdRULEMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorProdRULEMarginField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorProdRULEMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorProdRULEMarginField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorProdRULEMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorProdRULEMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorProdRULEMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProdRULEMarginField", (PyObject *)&PyCThostFtdcQryInvestorProdRULEMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProdRULEMarginField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorProdRULEMarginFieldType);
		return -1;
    }

    return 0;
}
