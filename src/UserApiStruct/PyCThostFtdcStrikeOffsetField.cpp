
#include "PyCThostFtdcStrikeOffsetField.h"



static PyObject *PyCThostFtdcStrikeOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcStrikeOffsetField *self = (PyCThostFtdcStrikeOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcStrikeOffsetField_init(PyCThostFtdcStrikeOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "Offset", "OffsetType", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pStrikeOffsetField_reserve1 = NULL;
	Py_ssize_t pStrikeOffsetField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pStrikeOffsetField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pStrikeOffsetField_BrokerID = NULL;
	Py_ssize_t pStrikeOffsetField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pStrikeOffsetField_InvestorID = NULL;
	Py_ssize_t pStrikeOffsetField_InvestorID_len = 0;

	//TThostFtdcMoneyType double
	double pStrikeOffsetField_Offset = 0.0;

	//TThostFtdcStrikeOffsetTypeType char
	char pStrikeOffsetField_OffsetType = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pStrikeOffsetField_InstrumentID = NULL;
	Py_ssize_t pStrikeOffsetField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dcy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dcs#", (char **)kwlist
#endif

		, &pStrikeOffsetField_reserve1, &pStrikeOffsetField_reserve1_len
		, &pStrikeOffsetField_InvestorRange
		, &pStrikeOffsetField_BrokerID, &pStrikeOffsetField_BrokerID_len
		, &pStrikeOffsetField_InvestorID, &pStrikeOffsetField_InvestorID_len
		, &pStrikeOffsetField_Offset
		, &pStrikeOffsetField_OffsetType
		, &pStrikeOffsetField_InstrumentID, &pStrikeOffsetField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pStrikeOffsetField_reserve1 != NULL) {
		if(pStrikeOffsetField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pStrikeOffsetField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pStrikeOffsetField_reserve1, sizeof(self->data.reserve1) );
		pStrikeOffsetField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pStrikeOffsetField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pStrikeOffsetField_BrokerID != NULL) {
		if(pStrikeOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pStrikeOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pStrikeOffsetField_BrokerID, sizeof(self->data.BrokerID) );
		pStrikeOffsetField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pStrikeOffsetField_InvestorID != NULL) {
		if(pStrikeOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pStrikeOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pStrikeOffsetField_InvestorID, sizeof(self->data.InvestorID) );
		pStrikeOffsetField_InvestorID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.Offset = pStrikeOffsetField_Offset;
	//TThostFtdcStrikeOffsetTypeType char
	self->data.OffsetType = pStrikeOffsetField_OffsetType;

	//TThostFtdcInstrumentIDType char[81]
	if(pStrikeOffsetField_InstrumentID != NULL) {
		if(pStrikeOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pStrikeOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pStrikeOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
		pStrikeOffsetField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcStrikeOffsetField_dealloc(PyCThostFtdcStrikeOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcStrikeOffsetField_repr(PyCThostFtdcStrikeOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:c,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "Offset", self->data.Offset
		, "OffsetType", self->data.OffsetType
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcStrikeOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcStrikeOffsetField_get_reserve1(PyCThostFtdcStrikeOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcStrikeOffsetField_get_InvestorRange(PyCThostFtdcStrikeOffsetField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcStrikeOffsetField_get_BrokerID(PyCThostFtdcStrikeOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcStrikeOffsetField_get_InvestorID(PyCThostFtdcStrikeOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcStrikeOffsetField_get_Offset(PyCThostFtdcStrikeOffsetField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Offset);
}

static PyObject *PyCThostFtdcStrikeOffsetField_get_OffsetType(PyCThostFtdcStrikeOffsetField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

static PyObject *PyCThostFtdcStrikeOffsetField_get_InstrumentID(PyCThostFtdcStrikeOffsetField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcStrikeOffsetField_set_reserve1(PyCThostFtdcStrikeOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcStrikeOffsetField_set_InvestorRange(PyCThostFtdcStrikeOffsetField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
		PyErr_SetString(PyExc_ValueError, "InvestorRange must be less than 1 bytes");
		return -1;
	}
	self->data.InvestorRange = *buf;
	return 0;
}

static int PyCThostFtdcStrikeOffsetField_set_BrokerID(PyCThostFtdcStrikeOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcStrikeOffsetField_set_InvestorID(PyCThostFtdcStrikeOffsetField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcStrikeOffsetField_set_Offset(PyCThostFtdcStrikeOffsetField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Offset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Offset = buf;
    return 0;
}

static int PyCThostFtdcStrikeOffsetField_set_OffsetType(PyCThostFtdcStrikeOffsetField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
		PyErr_SetString(PyExc_ValueError, "OffsetType must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetType = *buf;
	return 0;
}

static int PyCThostFtdcStrikeOffsetField_set_InstrumentID(PyCThostFtdcStrikeOffsetField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcStrikeOffsetField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcStrikeOffsetField_get_reserve1, (setter)PyCThostFtdcStrikeOffsetField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcStrikeOffsetField_get_InvestorRange, (setter)PyCThostFtdcStrikeOffsetField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcStrikeOffsetField_get_BrokerID, (setter)PyCThostFtdcStrikeOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcStrikeOffsetField_get_InvestorID, (setter)PyCThostFtdcStrikeOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"Offset", (getter)PyCThostFtdcStrikeOffsetField_get_Offset, (setter)PyCThostFtdcStrikeOffsetField_set_Offset, (char *)"Offset", NULL},
	 {(char *)"OffsetType", (getter)PyCThostFtdcStrikeOffsetField_get_OffsetType, (setter)PyCThostFtdcStrikeOffsetField_set_OffsetType, (char *)"OffsetType", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcStrikeOffsetField_get_InstrumentID, (setter)PyCThostFtdcStrikeOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcStrikeOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcStrikeOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcStrikeOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcStrikeOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcStrikeOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcStrikeOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcStrikeOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcStrikeOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcStrikeOffsetField_new,       /* tp_new */
};

int PyCThostFtdcStrikeOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcStrikeOffsetField  */
	if (PyType_Ready(&PyCThostFtdcStrikeOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcStrikeOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcStrikeOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcStrikeOffsetField", (PyObject *)&PyCThostFtdcStrikeOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcStrikeOffsetField to module");
        Py_DECREF(&PyCThostFtdcStrikeOffsetFieldType);
		return -1;
    }

    return 0;
}
