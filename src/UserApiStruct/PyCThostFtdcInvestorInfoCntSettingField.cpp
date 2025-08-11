
#include "PyCThostFtdcInvestorInfoCntSettingField.h"



static PyObject *PyCThostFtdcInvestorInfoCntSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorInfoCntSettingField *self = (PyCThostFtdcInvestorInfoCntSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorInfoCntSettingField_init(PyCThostFtdcInvestorInfoCntSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "ProductID", "IsCalInfoComm", "IsLimitInfoMax", "InfoMaxLimit",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorInfoCntSettingField_ExchangeID = NULL;
	Py_ssize_t pInvestorInfoCntSettingField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorInfoCntSettingField_BrokerID = NULL;
	Py_ssize_t pInvestorInfoCntSettingField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorInfoCntSettingField_InvestorID = NULL;
	Py_ssize_t pInvestorInfoCntSettingField_InvestorID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pInvestorInfoCntSettingField_ProductID = NULL;
	Py_ssize_t pInvestorInfoCntSettingField_ProductID_len = 0;

	//TThostFtdcBoolType int
	int pInvestorInfoCntSettingField_IsCalInfoComm = 0;

	//TThostFtdcBoolType int
	int pInvestorInfoCntSettingField_IsLimitInfoMax = 0;

	//TThostFtdcVolumeType int
	int pInvestorInfoCntSettingField_InfoMaxLimit = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#iii", (char **)kwlist
#endif

		, &pInvestorInfoCntSettingField_ExchangeID, &pInvestorInfoCntSettingField_ExchangeID_len
		, &pInvestorInfoCntSettingField_BrokerID, &pInvestorInfoCntSettingField_BrokerID_len
		, &pInvestorInfoCntSettingField_InvestorID, &pInvestorInfoCntSettingField_InvestorID_len
		, &pInvestorInfoCntSettingField_ProductID, &pInvestorInfoCntSettingField_ProductID_len
		, &pInvestorInfoCntSettingField_IsCalInfoComm
		, &pInvestorInfoCntSettingField_IsLimitInfoMax
		, &pInvestorInfoCntSettingField_InfoMaxLimit


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorInfoCntSettingField_ExchangeID != NULL) {
		if(pInvestorInfoCntSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorInfoCntSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorInfoCntSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorInfoCntSettingField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorInfoCntSettingField_BrokerID != NULL) {
		if(pInvestorInfoCntSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorInfoCntSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorInfoCntSettingField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorInfoCntSettingField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorInfoCntSettingField_InvestorID != NULL) {
		if(pInvestorInfoCntSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorInfoCntSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorInfoCntSettingField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorInfoCntSettingField_InvestorID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pInvestorInfoCntSettingField_ProductID != NULL) {
		if(pInvestorInfoCntSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pInvestorInfoCntSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pInvestorInfoCntSettingField_ProductID, sizeof(self->data.ProductID) );
		pInvestorInfoCntSettingField_ProductID = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsCalInfoComm = pInvestorInfoCntSettingField_IsCalInfoComm;

	//TThostFtdcBoolType int
	self->data.IsLimitInfoMax = pInvestorInfoCntSettingField_IsLimitInfoMax;

	//TThostFtdcVolumeType int
	self->data.InfoMaxLimit = pInvestorInfoCntSettingField_InfoMaxLimit;



    return 0;
}

static void PyCThostFtdcInvestorInfoCntSettingField_dealloc(PyCThostFtdcInvestorInfoCntSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_repr(PyCThostFtdcInvestorInfoCntSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:i,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ProductID", self->data.ProductID 
		, "IsCalInfoComm", self->data.IsCalInfoComm
		, "IsLimitInfoMax", self->data.IsLimitInfoMax
		, "InfoMaxLimit", self->data.InfoMaxLimit


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCntSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_ExchangeID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_BrokerID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_InvestorID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_ProductID(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_IsCalInfoComm(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsCalInfoComm);
#else 
	return PyInt_FromLong(self->data.IsCalInfoComm);
#endif 
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_IsLimitInfoMax(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsLimitInfoMax);
#else 
	return PyInt_FromLong(self->data.IsLimitInfoMax);
#endif 
}

static PyObject *PyCThostFtdcInvestorInfoCntSettingField_get_InfoMaxLimit(PyCThostFtdcInvestorInfoCntSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InfoMaxLimit);
#else 
	return PyInt_FromLong(self->data.InfoMaxLimit);
#endif 
}

static int PyCThostFtdcInvestorInfoCntSettingField_set_ExchangeID(PyCThostFtdcInvestorInfoCntSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCntSettingField_set_BrokerID(PyCThostFtdcInvestorInfoCntSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCntSettingField_set_InvestorID(PyCThostFtdcInvestorInfoCntSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCntSettingField_set_ProductID(PyCThostFtdcInvestorInfoCntSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcInvestorInfoCntSettingField_set_IsCalInfoComm(PyCThostFtdcInvestorInfoCntSettingField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsCalInfoComm Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsCalInfoComm Expected int"); 
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
    self->data.IsCalInfoComm = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorInfoCntSettingField_set_IsLimitInfoMax(PyCThostFtdcInvestorInfoCntSettingField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsLimitInfoMax Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsLimitInfoMax Expected int"); 
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
    self->data.IsLimitInfoMax = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorInfoCntSettingField_set_InfoMaxLimit(PyCThostFtdcInvestorInfoCntSettingField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoMaxLimit Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InfoMaxLimit Expected int"); 
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
    self->data.InfoMaxLimit = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcInvestorInfoCntSettingField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_ExchangeID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_BrokerID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_InvestorID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_ProductID, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"IsCalInfoComm", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_IsCalInfoComm, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_IsCalInfoComm, (char *)"IsCalInfoComm", NULL},
	 {(char *)"IsLimitInfoMax", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_IsLimitInfoMax, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_IsLimitInfoMax, (char *)"IsLimitInfoMax", NULL},
	 {(char *)"InfoMaxLimit", (getter)PyCThostFtdcInvestorInfoCntSettingField_get_InfoMaxLimit, (setter)PyCThostFtdcInvestorInfoCntSettingField_set_InfoMaxLimit, (char *)"InfoMaxLimit", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorInfoCntSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorInfoCntSettingField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorInfoCntSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorInfoCntSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorInfoCntSettingField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorInfoCntSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorInfoCntSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorInfoCntSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorInfoCntSettingField_new,       /* tp_new */
};

int PyCThostFtdcInvestorInfoCntSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorInfoCntSettingField  */
	if (PyType_Ready(&PyCThostFtdcInvestorInfoCntSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorInfoCntSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorInfoCntSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorInfoCntSettingField", (PyObject *)&PyCThostFtdcInvestorInfoCntSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorInfoCntSettingField to module");
        Py_DECREF(&PyCThostFtdcInvestorInfoCntSettingFieldType);
		return -1;
    }

    return 0;
}
