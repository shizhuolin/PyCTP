
#include "PyCThostFtdcTradingNoticeInfoField.h"



static PyObject *PyCThostFtdcTradingNoticeInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingNoticeInfoField *self = (PyCThostFtdcTradingNoticeInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingNoticeInfoField_init(PyCThostFtdcTradingNoticeInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "SendTime", "FieldContent", "SequenceSeries", "SequenceNo", "InvestUnitID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingNoticeInfoField_BrokerID = NULL;
	Py_ssize_t pTradingNoticeInfoField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pTradingNoticeInfoField_InvestorID = NULL;
	Py_ssize_t pTradingNoticeInfoField_InvestorID_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pTradingNoticeInfoField_SendTime = NULL;
	Py_ssize_t pTradingNoticeInfoField_SendTime_len = 0;

	//TThostFtdcContentType char[501]
	const char *pTradingNoticeInfoField_FieldContent = NULL;
	Py_ssize_t pTradingNoticeInfoField_FieldContent_len = 0;

	//TThostFtdcSequenceSeriesType short
	short pTradingNoticeInfoField_SequenceSeries = 0;

	//TThostFtdcSequenceNoType int
	int pTradingNoticeInfoField_SequenceNo = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pTradingNoticeInfoField_InvestUnitID = NULL;
	Py_ssize_t pTradingNoticeInfoField_InvestUnitID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#hiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#his#", (char **)kwlist
#endif

		, &pTradingNoticeInfoField_BrokerID, &pTradingNoticeInfoField_BrokerID_len
		, &pTradingNoticeInfoField_InvestorID, &pTradingNoticeInfoField_InvestorID_len
		, &pTradingNoticeInfoField_SendTime, &pTradingNoticeInfoField_SendTime_len
		, &pTradingNoticeInfoField_FieldContent, &pTradingNoticeInfoField_FieldContent_len
		, &pTradingNoticeInfoField_SequenceSeries
		, &pTradingNoticeInfoField_SequenceNo
		, &pTradingNoticeInfoField_InvestUnitID, &pTradingNoticeInfoField_InvestUnitID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingNoticeInfoField_BrokerID != NULL) {
		if(pTradingNoticeInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingNoticeInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingNoticeInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingNoticeInfoField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pTradingNoticeInfoField_InvestorID != NULL) {
		if(pTradingNoticeInfoField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pTradingNoticeInfoField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pTradingNoticeInfoField_InvestorID, sizeof(self->data.InvestorID) );
		pTradingNoticeInfoField_InvestorID = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pTradingNoticeInfoField_SendTime != NULL) {
		if(pTradingNoticeInfoField_SendTime_len > (Py_ssize_t)sizeof(self->data.SendTime)) {
			PyErr_Format(PyExc_ValueError, "SendTime too long: length=%zd (max allowed is %zd)", pTradingNoticeInfoField_SendTime_len, (Py_ssize_t)sizeof(self->data.SendTime));
			return -1;
		}
		strncpy(self->data.SendTime, pTradingNoticeInfoField_SendTime, sizeof(self->data.SendTime) );
		pTradingNoticeInfoField_SendTime = NULL;
	}

	//TThostFtdcContentType char[501]
	if(pTradingNoticeInfoField_FieldContent != NULL) {
		if(pTradingNoticeInfoField_FieldContent_len > (Py_ssize_t)sizeof(self->data.FieldContent)) {
			PyErr_Format(PyExc_ValueError, "FieldContent too long: length=%zd (max allowed is %zd)", pTradingNoticeInfoField_FieldContent_len, (Py_ssize_t)sizeof(self->data.FieldContent));
			return -1;
		}
		strncpy(self->data.FieldContent, pTradingNoticeInfoField_FieldContent, sizeof(self->data.FieldContent) );
		pTradingNoticeInfoField_FieldContent = NULL;
	}

	//TThostFtdcSequenceSeriesType short
	self->data.SequenceSeries = pTradingNoticeInfoField_SequenceSeries;

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pTradingNoticeInfoField_SequenceNo;

	//TThostFtdcInvestUnitIDType char[17]
	if(pTradingNoticeInfoField_InvestUnitID != NULL) {
		if(pTradingNoticeInfoField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pTradingNoticeInfoField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pTradingNoticeInfoField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pTradingNoticeInfoField_InvestUnitID = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradingNoticeInfoField_dealloc(PyCThostFtdcTradingNoticeInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_repr(PyCThostFtdcTradingNoticeInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:h,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:h,s:i,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "SendTime", self->data.SendTime 
		, "FieldContent", self->data.FieldContent 
		, "SequenceSeries", self->data.SequenceSeries
		, "SequenceNo", self->data.SequenceNo
		, "InvestUnitID", self->data.InvestUnitID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingNoticeInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_get_BrokerID(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_get_InvestorID(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_get_SendTime(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.SendTime);
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_get_FieldContent(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.FieldContent);
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_get_SequenceSeries(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceSeries);
#else 
	return PyInt_FromLong(self->data.SequenceSeries);
#endif 
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_get_SequenceNo(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcTradingNoticeInfoField_get_InvestUnitID(PyCThostFtdcTradingNoticeInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static int PyCThostFtdcTradingNoticeInfoField_set_BrokerID(PyCThostFtdcTradingNoticeInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeInfoField_set_InvestorID(PyCThostFtdcTradingNoticeInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeInfoField_set_SendTime(PyCThostFtdcTradingNoticeInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeInfoField_set_FieldContent(PyCThostFtdcTradingNoticeInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeInfoField_set_SequenceSeries(PyCThostFtdcTradingNoticeInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeInfoField_set_SequenceNo(PyCThostFtdcTradingNoticeInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingNoticeInfoField_set_InvestUnitID(PyCThostFtdcTradingNoticeInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTradingNoticeInfoField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingNoticeInfoField_get_BrokerID, (setter)PyCThostFtdcTradingNoticeInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcTradingNoticeInfoField_get_InvestorID, (setter)PyCThostFtdcTradingNoticeInfoField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"SendTime", (getter)PyCThostFtdcTradingNoticeInfoField_get_SendTime, (setter)PyCThostFtdcTradingNoticeInfoField_set_SendTime, (char *)"SendTime", NULL},
	 {(char *)"FieldContent", (getter)PyCThostFtdcTradingNoticeInfoField_get_FieldContent, (setter)PyCThostFtdcTradingNoticeInfoField_set_FieldContent, (char *)"FieldContent", NULL},
	 {(char *)"SequenceSeries", (getter)PyCThostFtdcTradingNoticeInfoField_get_SequenceSeries, (setter)PyCThostFtdcTradingNoticeInfoField_set_SequenceSeries, (char *)"SequenceSeries", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcTradingNoticeInfoField_get_SequenceNo, (setter)PyCThostFtdcTradingNoticeInfoField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcTradingNoticeInfoField_get_InvestUnitID, (setter)PyCThostFtdcTradingNoticeInfoField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingNoticeInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingNoticeInfoField",	/* tp_name */
	sizeof(PyCThostFtdcTradingNoticeInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingNoticeInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingNoticeInfoField_repr,   /* tp_repr */
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
	"CThostFtdcTradingNoticeInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingNoticeInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingNoticeInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingNoticeInfoField_new,       /* tp_new */
};

int PyCThostFtdcTradingNoticeInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingNoticeInfoField  */
	if (PyType_Ready(&PyCThostFtdcTradingNoticeInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingNoticeInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingNoticeInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingNoticeInfoField", (PyObject *)&PyCThostFtdcTradingNoticeInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingNoticeInfoField to module");
        Py_DECREF(&PyCThostFtdcTradingNoticeInfoFieldType);
		return -1;
    }

    return 0;
}
