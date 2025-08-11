
#include "PyCThostFtdcSPBMInvestorPortfDefField.h"



static PyObject *PyCThostFtdcSPBMInvestorPortfDefField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSPBMInvestorPortfDefField *self = (PyCThostFtdcSPBMInvestorPortfDefField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSPBMInvestorPortfDefField_init(PyCThostFtdcSPBMInvestorPortfDefField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "PortfolioDefID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pSPBMInvestorPortfDefField_ExchangeID = NULL;
	Py_ssize_t pSPBMInvestorPortfDefField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSPBMInvestorPortfDefField_BrokerID = NULL;
	Py_ssize_t pSPBMInvestorPortfDefField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSPBMInvestorPortfDefField_InvestorID = NULL;
	Py_ssize_t pSPBMInvestorPortfDefField_InvestorID_len = 0;

	//TThostFtdcPortfolioDefIDType int
	int pSPBMInvestorPortfDefField_PortfolioDefID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#i", (char **)kwlist
#endif

		, &pSPBMInvestorPortfDefField_ExchangeID, &pSPBMInvestorPortfDefField_ExchangeID_len
		, &pSPBMInvestorPortfDefField_BrokerID, &pSPBMInvestorPortfDefField_BrokerID_len
		, &pSPBMInvestorPortfDefField_InvestorID, &pSPBMInvestorPortfDefField_InvestorID_len
		, &pSPBMInvestorPortfDefField_PortfolioDefID


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pSPBMInvestorPortfDefField_ExchangeID != NULL) {
		if(pSPBMInvestorPortfDefField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSPBMInvestorPortfDefField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSPBMInvestorPortfDefField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSPBMInvestorPortfDefField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSPBMInvestorPortfDefField_BrokerID != NULL) {
		if(pSPBMInvestorPortfDefField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSPBMInvestorPortfDefField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSPBMInvestorPortfDefField_BrokerID, sizeof(self->data.BrokerID) );
		pSPBMInvestorPortfDefField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSPBMInvestorPortfDefField_InvestorID != NULL) {
		if(pSPBMInvestorPortfDefField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSPBMInvestorPortfDefField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSPBMInvestorPortfDefField_InvestorID, sizeof(self->data.InvestorID) );
		pSPBMInvestorPortfDefField_InvestorID = NULL;
	}

	//TThostFtdcPortfolioDefIDType int
	self->data.PortfolioDefID = pSPBMInvestorPortfDefField_PortfolioDefID;



    return 0;
}

static void PyCThostFtdcSPBMInvestorPortfDefField_dealloc(PyCThostFtdcSPBMInvestorPortfDefField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSPBMInvestorPortfDefField_repr(PyCThostFtdcSPBMInvestorPortfDefField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "PortfolioDefID", self->data.PortfolioDefID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSPBMInvestorPortfDefField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSPBMInvestorPortfDefField_get_ExchangeID(PyCThostFtdcSPBMInvestorPortfDefField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSPBMInvestorPortfDefField_get_BrokerID(PyCThostFtdcSPBMInvestorPortfDefField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSPBMInvestorPortfDefField_get_InvestorID(PyCThostFtdcSPBMInvestorPortfDefField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSPBMInvestorPortfDefField_get_PortfolioDefID(PyCThostFtdcSPBMInvestorPortfDefField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PortfolioDefID);
#else 
	return PyInt_FromLong(self->data.PortfolioDefID);
#endif 
}

static int PyCThostFtdcSPBMInvestorPortfDefField_set_ExchangeID(PyCThostFtdcSPBMInvestorPortfDefField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMInvestorPortfDefField_set_BrokerID(PyCThostFtdcSPBMInvestorPortfDefField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMInvestorPortfDefField_set_InvestorID(PyCThostFtdcSPBMInvestorPortfDefField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSPBMInvestorPortfDefField_set_PortfolioDefID(PyCThostFtdcSPBMInvestorPortfDefField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "PortfolioDefID Expected int"); 
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
    self->data.PortfolioDefID = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSPBMInvestorPortfDefField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSPBMInvestorPortfDefField_get_ExchangeID, (setter)PyCThostFtdcSPBMInvestorPortfDefField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSPBMInvestorPortfDefField_get_BrokerID, (setter)PyCThostFtdcSPBMInvestorPortfDefField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSPBMInvestorPortfDefField_get_InvestorID, (setter)PyCThostFtdcSPBMInvestorPortfDefField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"PortfolioDefID", (getter)PyCThostFtdcSPBMInvestorPortfDefField_get_PortfolioDefID, (setter)PyCThostFtdcSPBMInvestorPortfDefField_set_PortfolioDefID, (char *)"PortfolioDefID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSPBMInvestorPortfDefFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSPBMInvestorPortfDefField",	/* tp_name */
	sizeof(PyCThostFtdcSPBMInvestorPortfDefField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSPBMInvestorPortfDefField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSPBMInvestorPortfDefField_repr,   /* tp_repr */
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
	"CThostFtdcSPBMInvestorPortfDefField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSPBMInvestorPortfDefField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSPBMInvestorPortfDefField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSPBMInvestorPortfDefField_new,       /* tp_new */
};

int PyCThostFtdcSPBMInvestorPortfDefFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSPBMInvestorPortfDefField  */
	if (PyType_Ready(&PyCThostFtdcSPBMInvestorPortfDefFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSPBMInvestorPortfDefField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSPBMInvestorPortfDefFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSPBMInvestorPortfDefField", (PyObject *)&PyCThostFtdcSPBMInvestorPortfDefFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSPBMInvestorPortfDefField to module");
        Py_DECREF(&PyCThostFtdcSPBMInvestorPortfDefFieldType);
		return -1;
    }

    return 0;
}
