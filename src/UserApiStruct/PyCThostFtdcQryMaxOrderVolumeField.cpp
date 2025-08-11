
#include "PyCThostFtdcQryMaxOrderVolumeField.h"



static PyObject *PyCThostFtdcQryMaxOrderVolumeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMaxOrderVolumeField *self = (PyCThostFtdcQryMaxOrderVolumeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryMaxOrderVolumeField_init(PyCThostFtdcQryMaxOrderVolumeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "Direction", "OffsetFlag", "HedgeFlag", "MaxVolume", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryMaxOrderVolumeField_BrokerID = NULL;
	Py_ssize_t pQryMaxOrderVolumeField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryMaxOrderVolumeField_InvestorID = NULL;
	Py_ssize_t pQryMaxOrderVolumeField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryMaxOrderVolumeField_reserve1 = NULL;
	Py_ssize_t pQryMaxOrderVolumeField_reserve1_len = 0;

	//TThostFtdcDirectionType char
	char pQryMaxOrderVolumeField_Direction = 0;

	//TThostFtdcOffsetFlagType char
	char pQryMaxOrderVolumeField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pQryMaxOrderVolumeField_HedgeFlag = 0;

	//TThostFtdcVolumeType int
	int pQryMaxOrderVolumeField_MaxVolume = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryMaxOrderVolumeField_ExchangeID = NULL;
	Py_ssize_t pQryMaxOrderVolumeField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryMaxOrderVolumeField_InvestUnitID = NULL;
	Py_ssize_t pQryMaxOrderVolumeField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryMaxOrderVolumeField_InstrumentID = NULL;
	Py_ssize_t pQryMaxOrderVolumeField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cccis#s#s#", (char **)kwlist
#endif

		, &pQryMaxOrderVolumeField_BrokerID, &pQryMaxOrderVolumeField_BrokerID_len
		, &pQryMaxOrderVolumeField_InvestorID, &pQryMaxOrderVolumeField_InvestorID_len
		, &pQryMaxOrderVolumeField_reserve1, &pQryMaxOrderVolumeField_reserve1_len
		, &pQryMaxOrderVolumeField_Direction
		, &pQryMaxOrderVolumeField_OffsetFlag
		, &pQryMaxOrderVolumeField_HedgeFlag
		, &pQryMaxOrderVolumeField_MaxVolume
		, &pQryMaxOrderVolumeField_ExchangeID, &pQryMaxOrderVolumeField_ExchangeID_len
		, &pQryMaxOrderVolumeField_InvestUnitID, &pQryMaxOrderVolumeField_InvestUnitID_len
		, &pQryMaxOrderVolumeField_InstrumentID, &pQryMaxOrderVolumeField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryMaxOrderVolumeField_BrokerID != NULL) {
		if(pQryMaxOrderVolumeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryMaxOrderVolumeField_BrokerID, sizeof(self->data.BrokerID) );
		pQryMaxOrderVolumeField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryMaxOrderVolumeField_InvestorID != NULL) {
		if(pQryMaxOrderVolumeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryMaxOrderVolumeField_InvestorID, sizeof(self->data.InvestorID) );
		pQryMaxOrderVolumeField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryMaxOrderVolumeField_reserve1 != NULL) {
		if(pQryMaxOrderVolumeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryMaxOrderVolumeField_reserve1, sizeof(self->data.reserve1) );
		pQryMaxOrderVolumeField_reserve1 = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pQryMaxOrderVolumeField_Direction;

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pQryMaxOrderVolumeField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pQryMaxOrderVolumeField_HedgeFlag;

	//TThostFtdcVolumeType int
	self->data.MaxVolume = pQryMaxOrderVolumeField_MaxVolume;

	//TThostFtdcExchangeIDType char[9]
	if(pQryMaxOrderVolumeField_ExchangeID != NULL) {
		if(pQryMaxOrderVolumeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryMaxOrderVolumeField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryMaxOrderVolumeField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryMaxOrderVolumeField_InvestUnitID != NULL) {
		if(pQryMaxOrderVolumeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryMaxOrderVolumeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryMaxOrderVolumeField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryMaxOrderVolumeField_InstrumentID != NULL) {
		if(pQryMaxOrderVolumeField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryMaxOrderVolumeField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryMaxOrderVolumeField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryMaxOrderVolumeField_dealloc(PyCThostFtdcQryMaxOrderVolumeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_repr(PyCThostFtdcQryMaxOrderVolumeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "Direction", self->data.Direction
		, "OffsetFlag", self->data.OffsetFlag
		, "HedgeFlag", self->data.HedgeFlag
		, "MaxVolume", self->data.MaxVolume
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMaxOrderVolumeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_BrokerID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_InvestorID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_reserve1(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_Direction(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_MaxVolume(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MaxVolume);
#else 
	return PyInt_FromLong(self->data.MaxVolume);
#endif 
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_ExchangeID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeField_get_InstrumentID(PyCThostFtdcQryMaxOrderVolumeField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryMaxOrderVolumeField_set_BrokerID(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeField_set_InvestorID(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeField_set_reserve1(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcQryMaxOrderVolumeField_set_Direction(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
		PyErr_SetString(PyExc_ValueError, "Direction must be less than 1 bytes");
		return -1;
	}
	self->data.Direction = *buf;
	return 0;
}

static int PyCThostFtdcQryMaxOrderVolumeField_set_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "OffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcQryMaxOrderVolumeField_set_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeField_set_MaxVolume(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "MaxVolume Expected int"); 
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
    self->data.MaxVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcQryMaxOrderVolumeField_set_ExchangeID(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeField_set_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}

static int PyCThostFtdcQryMaxOrderVolumeField_set_InstrumentID(PyCThostFtdcQryMaxOrderVolumeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}



static PyGetSetDef PyCThostFtdcQryMaxOrderVolumeField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_BrokerID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_InvestorID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_reserve1, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_Direction, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_OffsetFlag, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_HedgeFlag, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"MaxVolume", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_MaxVolume, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_MaxVolume, (char *)"MaxVolume", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_ExchangeID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_InvestUnitID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryMaxOrderVolumeField_get_InstrumentID, (setter)PyCThostFtdcQryMaxOrderVolumeField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMaxOrderVolumeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMaxOrderVolumeField",	/* tp_name */
	sizeof(PyCThostFtdcQryMaxOrderVolumeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMaxOrderVolumeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMaxOrderVolumeField_repr,   /* tp_repr */
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
	"CThostFtdcQryMaxOrderVolumeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMaxOrderVolumeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMaxOrderVolumeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMaxOrderVolumeField_new,       /* tp_new */
};

int PyCThostFtdcQryMaxOrderVolumeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMaxOrderVolumeField  */
	if (PyType_Ready(&PyCThostFtdcQryMaxOrderVolumeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMaxOrderVolumeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMaxOrderVolumeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMaxOrderVolumeField", (PyObject *)&PyCThostFtdcQryMaxOrderVolumeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMaxOrderVolumeField to module");
        Py_DECREF(&PyCThostFtdcQryMaxOrderVolumeFieldType);
		return -1;
    }

    return 0;
}
