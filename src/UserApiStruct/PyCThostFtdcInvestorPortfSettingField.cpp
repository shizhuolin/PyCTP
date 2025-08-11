
#include "PyCThostFtdcInvestorPortfSettingField.h"



static PyObject *PyCThostFtdcInvestorPortfSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPortfSettingField *self = (PyCThostFtdcInvestorPortfSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPortfSettingField_init(PyCThostFtdcInvestorPortfSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "HedgeFlag", "UsePortf",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorPortfSettingField_ExchangeID = NULL;
	Py_ssize_t pInvestorPortfSettingField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorPortfSettingField_BrokerID = NULL;
	Py_ssize_t pInvestorPortfSettingField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorPortfSettingField_InvestorID = NULL;
	Py_ssize_t pInvestorPortfSettingField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInvestorPortfSettingField_HedgeFlag = 0;

	//TThostFtdcBoolType int
	int pInvestorPortfSettingField_UsePortf = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ci", (char **)kwlist
#endif

		, &pInvestorPortfSettingField_ExchangeID, &pInvestorPortfSettingField_ExchangeID_len
		, &pInvestorPortfSettingField_BrokerID, &pInvestorPortfSettingField_BrokerID_len
		, &pInvestorPortfSettingField_InvestorID, &pInvestorPortfSettingField_InvestorID_len
		, &pInvestorPortfSettingField_HedgeFlag
		, &pInvestorPortfSettingField_UsePortf


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorPortfSettingField_ExchangeID != NULL) {
		if(pInvestorPortfSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorPortfSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorPortfSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorPortfSettingField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorPortfSettingField_BrokerID != NULL) {
		if(pInvestorPortfSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorPortfSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorPortfSettingField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorPortfSettingField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorPortfSettingField_InvestorID != NULL) {
		if(pInvestorPortfSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorPortfSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorPortfSettingField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorPortfSettingField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInvestorPortfSettingField_HedgeFlag;

	//TThostFtdcBoolType int
	self->data.UsePortf = pInvestorPortfSettingField_UsePortf;



    return 0;
}

static void PyCThostFtdcInvestorPortfSettingField_dealloc(PyCThostFtdcInvestorPortfSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPortfSettingField_repr(PyCThostFtdcInvestorPortfSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "HedgeFlag", self->data.HedgeFlag
		, "UsePortf", self->data.UsePortf


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPortfSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorPortfSettingField_get_ExchangeID(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorPortfSettingField_get_BrokerID(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorPortfSettingField_get_InvestorID(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorPortfSettingField_get_HedgeFlag(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInvestorPortfSettingField_get_UsePortf(PyCThostFtdcInvestorPortfSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UsePortf);
#else 
	return PyInt_FromLong(self->data.UsePortf);
#endif 
}

static int PyCThostFtdcInvestorPortfSettingField_set_ExchangeID(PyCThostFtdcInvestorPortfSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfSettingField_set_BrokerID(PyCThostFtdcInvestorPortfSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfSettingField_set_InvestorID(PyCThostFtdcInvestorPortfSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPortfSettingField_set_HedgeFlag(PyCThostFtdcInvestorPortfSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "HedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.HedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcInvestorPortfSettingField_set_UsePortf(PyCThostFtdcInvestorPortfSettingField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UsePortf Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "UsePortf Expected int"); 
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
    self->data.UsePortf = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcInvestorPortfSettingField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPortfSettingField_get_ExchangeID, (setter)PyCThostFtdcInvestorPortfSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPortfSettingField_get_BrokerID, (setter)PyCThostFtdcInvestorPortfSettingField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPortfSettingField_get_InvestorID, (setter)PyCThostFtdcInvestorPortfSettingField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPortfSettingField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPortfSettingField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"UsePortf", (getter)PyCThostFtdcInvestorPortfSettingField_get_UsePortf, (setter)PyCThostFtdcInvestorPortfSettingField_set_UsePortf, (char *)"UsePortf", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPortfSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPortfSettingField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPortfSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPortfSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPortfSettingField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPortfSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPortfSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPortfSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPortfSettingField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPortfSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPortfSettingField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPortfSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPortfSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPortfSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPortfSettingField", (PyObject *)&PyCThostFtdcInvestorPortfSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPortfSettingField to module");
        Py_DECREF(&PyCThostFtdcInvestorPortfSettingFieldType);
		return -1;
    }

    return 0;
}
