
#include "PyCThostFtdcTradingNoticeField.h"



static PyObject *PyCThostFtdcTradingNoticeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingNoticeField *self = (PyCThostFtdcTradingNoticeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingNoticeField_init(PyCThostFtdcTradingNoticeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorRange", "InvestorID", "SequenceSeries", "UserID", "SendTime", "SequenceNo", "FieldContent", "InvestUnitID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingNoticeField_BrokerID = NULL;
	Py_ssize_t pTradingNoticeField_BrokerID_len = 0;

	//TThostFtdcInvestorRangeType char
	char pTradingNoticeField_InvestorRange = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pTradingNoticeField_InvestorID = NULL;
	Py_ssize_t pTradingNoticeField_InvestorID_len = 0;

	//TThostFtdcSequenceSeriesType short
	short pTradingNoticeField_SequenceSeries = 0;

	//TThostFtdcUserIDType char[16]
	const char *pTradingNoticeField_UserID = NULL;
	Py_ssize_t pTradingNoticeField_UserID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pTradingNoticeField_SendTime = NULL;
	Py_ssize_t pTradingNoticeField_SendTime_len = 0;

	//TThostFtdcSequenceNoType int
	int pTradingNoticeField_SequenceNo = 0;

	//TThostFtdcContentType char[501]
	const char *pTradingNoticeField_FieldContent = NULL;
	Py_ssize_t pTradingNoticeField_FieldContent_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pTradingNoticeField_InvestUnitID = NULL;
	Py_ssize_t pTradingNoticeField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#hy#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#hs#s#is#s#", (char **)kwlist
#endif

		, &pTradingNoticeField_BrokerID, &pTradingNoticeField_BrokerID_len
		, &pTradingNoticeField_InvestorRange
		, &pTradingNoticeField_InvestorID, &pTradingNoticeField_InvestorID_len
		, &pTradingNoticeField_SequenceSeries
		, &pTradingNoticeField_UserID, &pTradingNoticeField_UserID_len
		, &pTradingNoticeField_SendTime, &pTradingNoticeField_SendTime_len
		, &pTradingNoticeField_SequenceNo
		, &pTradingNoticeField_FieldContent, &pTradingNoticeField_FieldContent_len
		, &pTradingNoticeField_InvestUnitID, &pTradingNoticeField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingNoticeField_BrokerID != NULL) {
		if(pTradingNoticeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingNoticeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingNoticeField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingNoticeField_BrokerID = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pTradingNoticeField_InvestorRange;

	//TThostFtdcInvestorIDType char[13]
	if(pTradingNoticeField_InvestorID != NULL) {
		if(pTradingNoticeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pTradingNoticeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pTradingNoticeField_InvestorID, sizeof(self->data.InvestorID) );
		pTradingNoticeField_InvestorID = NULL;
	}

	//TThostFtdcSequenceSeriesType short
	self->data.SequenceSeries = pTradingNoticeField_SequenceSeries;

	//TThostFtdcUserIDType char[16]
	if(pTradingNoticeField_UserID != NULL) {
		if(pTradingNoticeField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pTradingNoticeField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pTradingNoticeField_UserID, sizeof(self->data.UserID) );
		pTradingNoticeField_UserID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pTradingNoticeField_SendTime != NULL) {
		if(pTradingNoticeField_SendTime_len > (Py_ssize_t)sizeof(self->data.SendTime)) {
			PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is %zd)", pTradingNoticeField_SendTime_len, (Py_ssize_t)sizeof(self->data.SendTime));
			return -1;
		}
		strncpy(self->data.SendTime, pTradingNoticeField_SendTime, sizeof(self->data.SendTime) );
		pTradingNoticeField_SendTime = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pTradingNoticeField_SequenceNo;

	//TThostFtdcContentType char[501]
	if(pTradingNoticeField_FieldContent != NULL) {
		if(pTradingNoticeField_FieldContent_len > (Py_ssize_t)sizeof(self->data.FieldContent)) {
			PyErr_Format(PyExc_ValueError, "FieldContent too long: length=%zd (max allowed is %zd)", pTradingNoticeField_FieldContent_len, (Py_ssize_t)sizeof(self->data.FieldContent));
			return -1;
		}
		strncpy(self->data.FieldContent, pTradingNoticeField_FieldContent, sizeof(self->data.FieldContent) );
		pTradingNoticeField_FieldContent = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pTradingNoticeField_InvestUnitID != NULL) {
		if(pTradingNoticeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pTradingNoticeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pTradingNoticeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pTradingNoticeField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradingNoticeField_dealloc(PyCThostFtdcTradingNoticeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingNoticeField_repr(PyCThostFtdcTradingNoticeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:h,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:h,s:s,s:s,s:i,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorRange", self->data.InvestorRange
		, "InvestorID", self->data.InvestorID 
		, "SequenceSeries", self->data.SequenceSeries
		, "UserID", self->data.UserID 
		, "SendTime", self->data.SendTime 
		, "SequenceNo", self->data.SequenceNo
		, "FieldContent", self->data.FieldContent 
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingNoticeField_get_BrokerID(PyCThostFtdcTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingNoticeField_get_InvestorRange(PyCThostFtdcTradingNoticeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcTradingNoticeField_get_InvestorID(PyCThostFtdcTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcTradingNoticeField_get_SequenceSeries(PyCThostFtdcTradingNoticeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceSeries);
#else 
	return PyInt_FromLong(self->data.SequenceSeries);
#endif 
}

static PyObject *PyCThostFtdcTradingNoticeField_get_UserID(PyCThostFtdcTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcTradingNoticeField_get_SendTime(PyCThostFtdcTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.SendTime);
}

static PyObject *PyCThostFtdcTradingNoticeField_get_SequenceNo(PyCThostFtdcTradingNoticeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcTradingNoticeField_get_FieldContent(PyCThostFtdcTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.FieldContent);
}

static PyObject *PyCThostFtdcTradingNoticeField_get_InvestUnitID(PyCThostFtdcTradingNoticeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcTradingNoticeField_set_BrokerID(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeField_set_InvestorRange(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeField_set_InvestorID(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeField_set_SequenceSeries(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceSeries Expected short");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceSeries Expected short"); 
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
    if (buf < SHRT_MIN || buf > SHRT_MAX) { 
        PyErr_SetString(PyExc_OverflowError, "the value out of range for C short"); 
        return -1; 
    } 
    self->data.SequenceSeries = (short)buf; 
    return 0; 
}

static int PyCThostFtdcTradingNoticeField_set_UserID(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeField_set_SendTime(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SendTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SendTime)) {
		PyErr_SetString(PyExc_ValueError, "SendTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.SendTime, buf, sizeof(self->data.SendTime));
	return 0;
}

static int PyCThostFtdcTradingNoticeField_set_SequenceNo(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTradingNoticeField_set_FieldContent(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FieldContent Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FieldContent)) {
		PyErr_SetString(PyExc_ValueError, "FieldContent must be less than 501 bytes");
		return -1;
	}
	strncpy(self->data.FieldContent, buf, sizeof(self->data.FieldContent));
	return 0;
}

static int PyCThostFtdcTradingNoticeField_set_InvestUnitID(PyCThostFtdcTradingNoticeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTradingNoticeField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingNoticeField_get_BrokerID, (setter)PyCThostFtdcTradingNoticeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcTradingNoticeField_get_InvestorRange, (setter)PyCThostFtdcTradingNoticeField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcTradingNoticeField_get_InvestorID, (setter)PyCThostFtdcTradingNoticeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"SequenceSeries", (getter)PyCThostFtdcTradingNoticeField_get_SequenceSeries, (setter)PyCThostFtdcTradingNoticeField_set_SequenceSeries, (char *)"SequenceSeries", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcTradingNoticeField_get_UserID, (setter)PyCThostFtdcTradingNoticeField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"SendTime", (getter)PyCThostFtdcTradingNoticeField_get_SendTime, (setter)PyCThostFtdcTradingNoticeField_set_SendTime, (char *)"SendTime", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcTradingNoticeField_get_SequenceNo, (setter)PyCThostFtdcTradingNoticeField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"FieldContent", (getter)PyCThostFtdcTradingNoticeField_get_FieldContent, (setter)PyCThostFtdcTradingNoticeField_set_FieldContent, (char *)"FieldContent", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcTradingNoticeField_get_InvestUnitID, (setter)PyCThostFtdcTradingNoticeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingNoticeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingNoticeField",	/* tp_name */
	sizeof(PyCThostFtdcTradingNoticeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingNoticeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingNoticeField_repr,   /* tp_repr */
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
	"CThostFtdcTradingNoticeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingNoticeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingNoticeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingNoticeField_new,       /* tp_new */
};

int PyCThostFtdcTradingNoticeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingNoticeField  */
	if (PyType_Ready(&PyCThostFtdcTradingNoticeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingNoticeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingNoticeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingNoticeField", (PyObject *)&PyCThostFtdcTradingNoticeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingNoticeField to module");
        Py_DECREF(&PyCThostFtdcTradingNoticeFieldType);
		return -1;
    }

    return 0;
}
