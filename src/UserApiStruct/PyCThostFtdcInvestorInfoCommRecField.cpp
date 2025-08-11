
#include "PyCThostFtdcInvestorInfoCommRecField.h"



static PyObject *PyCThostFtdcInvestorInfoCommRecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorInfoCommRecField *self = (PyCThostFtdcInvestorInfoCommRecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorInfoCommRecField_init(PyCThostFtdcInvestorInfoCommRecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "InstrumentID", "OrderCount", "OrderActionCount", "ForQuoteCnt", "InfoComm", "IsOptSeries", "ProductID", "InfoCnt",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorInfoCommRecField_ExchangeID = NULL;
	Py_ssize_t pInvestorInfoCommRecField_ExchangeID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorInfoCommRecField_BrokerID = NULL;
	Py_ssize_t pInvestorInfoCommRecField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorInfoCommRecField_InvestorID = NULL;
	Py_ssize_t pInvestorInfoCommRecField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorInfoCommRecField_InstrumentID = NULL;
	Py_ssize_t pInvestorInfoCommRecField_InstrumentID_len = 0;

	//TThostFtdcVolumeType int
	int pInvestorInfoCommRecField_OrderCount = 0;

	//TThostFtdcVolumeType int
	int pInvestorInfoCommRecField_OrderActionCount = 0;

	//TThostFtdcVolumeType int
	int pInvestorInfoCommRecField_ForQuoteCnt = 0;

	//TThostFtdcMoneyType double
	double pInvestorInfoCommRecField_InfoComm = 0.0;

	//TThostFtdcBoolType int
	int pInvestorInfoCommRecField_IsOptSeries = 0;

	//TThostFtdcProductIDType char[41]
	const char *pInvestorInfoCommRecField_ProductID = NULL;
	Py_ssize_t pInvestorInfoCommRecField_ProductID_len = 0;

	//TThostFtdcVolumeType int
	int pInvestorInfoCommRecField_InfoCnt = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iiidiy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#iiidis#i", (char **)kwlist
#endif

		, &pInvestorInfoCommRecField_ExchangeID, &pInvestorInfoCommRecField_ExchangeID_len
		, &pInvestorInfoCommRecField_BrokerID, &pInvestorInfoCommRecField_BrokerID_len
		, &pInvestorInfoCommRecField_InvestorID, &pInvestorInfoCommRecField_InvestorID_len
		, &pInvestorInfoCommRecField_InstrumentID, &pInvestorInfoCommRecField_InstrumentID_len
		, &pInvestorInfoCommRecField_OrderCount
		, &pInvestorInfoCommRecField_OrderActionCount
		, &pInvestorInfoCommRecField_ForQuoteCnt
		, &pInvestorInfoCommRecField_InfoComm
		, &pInvestorInfoCommRecField_IsOptSeries
		, &pInvestorInfoCommRecField_ProductID, &pInvestorInfoCommRecField_ProductID_len
		, &pInvestorInfoCommRecField_InfoCnt


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorInfoCommRecField_ExchangeID != NULL) {
		if(pInvestorInfoCommRecField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorInfoCommRecField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorInfoCommRecField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorInfoCommRecField_ExchangeID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorInfoCommRecField_BrokerID != NULL) {
		if(pInvestorInfoCommRecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorInfoCommRecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorInfoCommRecField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorInfoCommRecField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorInfoCommRecField_InvestorID != NULL) {
		if(pInvestorInfoCommRecField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorInfoCommRecField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorInfoCommRecField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorInfoCommRecField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorInfoCommRecField_InstrumentID != NULL) {
		if(pInvestorInfoCommRecField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInvestorInfoCommRecField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInvestorInfoCommRecField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInvestorInfoCommRecField_InstrumentID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.OrderCount = pInvestorInfoCommRecField_OrderCount;

	//TThostFtdcVolumeType int
	self->data.OrderActionCount = pInvestorInfoCommRecField_OrderActionCount;

	//TThostFtdcVolumeType int
	self->data.ForQuoteCnt = pInvestorInfoCommRecField_ForQuoteCnt;

	//TThostFtdcMoneyType double
	self->data.InfoComm = pInvestorInfoCommRecField_InfoComm;
	//TThostFtdcBoolType int
	self->data.IsOptSeries = pInvestorInfoCommRecField_IsOptSeries;

	//TThostFtdcProductIDType char[41]
	if(pInvestorInfoCommRecField_ProductID != NULL) {
		if(pInvestorInfoCommRecField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pInvestorInfoCommRecField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pInvestorInfoCommRecField_ProductID, sizeof(self->data.ProductID) );
		pInvestorInfoCommRecField_ProductID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.InfoCnt = pInvestorInfoCommRecField_InfoCnt;



    return 0;
}

static void PyCThostFtdcInvestorInfoCommRecField_dealloc(PyCThostFtdcInvestorInfoCommRecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_repr(PyCThostFtdcInvestorInfoCommRecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:d,s:i,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:d,s:i,s:s,s:i}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InstrumentID", self->data.InstrumentID 
		, "OrderCount", self->data.OrderCount
		, "OrderActionCount", self->data.OrderActionCount
		, "ForQuoteCnt", self->data.ForQuoteCnt
		, "InfoComm", self->data.InfoComm
		, "IsOptSeries", self->data.IsOptSeries
		, "ProductID", self->data.ProductID 
		, "InfoCnt", self->data.InfoCnt


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorInfoCommRecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_ExchangeID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_BrokerID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InvestorID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InstrumentID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_OrderCount(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderCount);
#else 
	return PyInt_FromLong(self->data.OrderCount);
#endif 
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_OrderActionCount(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderActionCount);
#else 
	return PyInt_FromLong(self->data.OrderActionCount);
#endif 
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_ForQuoteCnt(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ForQuoteCnt);
#else 
	return PyInt_FromLong(self->data.ForQuoteCnt);
#endif 
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InfoComm(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InfoComm);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_IsOptSeries(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsOptSeries);
#else 
	return PyInt_FromLong(self->data.IsOptSeries);
#endif 
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_ProductID(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcInvestorInfoCommRecField_get_InfoCnt(PyCThostFtdcInvestorInfoCommRecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InfoCnt);
#else 
	return PyInt_FromLong(self->data.InfoCnt);
#endif 
}

static int PyCThostFtdcInvestorInfoCommRecField_set_ExchangeID(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCommRecField_set_BrokerID(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCommRecField_set_InvestorID(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCommRecField_set_InstrumentID(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCommRecField_set_OrderCount(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderCount Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OrderCount Expected int"); 
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
    self->data.OrderCount = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorInfoCommRecField_set_OrderActionCount(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionCount Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OrderActionCount Expected int"); 
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
    self->data.OrderActionCount = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorInfoCommRecField_set_ForQuoteCnt(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteCnt Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ForQuoteCnt Expected int"); 
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
    self->data.ForQuoteCnt = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorInfoCommRecField_set_InfoComm(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoComm Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InfoComm = buf;
    return 0;
}

static int PyCThostFtdcInvestorInfoCommRecField_set_IsOptSeries(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOptSeries Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsOptSeries Expected int"); 
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
    self->data.IsOptSeries = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorInfoCommRecField_set_ProductID(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorInfoCommRecField_set_InfoCnt(PyCThostFtdcInvestorInfoCommRecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InfoCnt Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InfoCnt Expected int"); 
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
    self->data.InfoCnt = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcInvestorInfoCommRecField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_ExchangeID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_BrokerID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InvestorID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InstrumentID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"OrderCount", (getter)PyCThostFtdcInvestorInfoCommRecField_get_OrderCount, (setter)PyCThostFtdcInvestorInfoCommRecField_set_OrderCount, (char *)"OrderCount", NULL},
	 {(char *)"OrderActionCount", (getter)PyCThostFtdcInvestorInfoCommRecField_get_OrderActionCount, (setter)PyCThostFtdcInvestorInfoCommRecField_set_OrderActionCount, (char *)"OrderActionCount", NULL},
	 {(char *)"ForQuoteCnt", (getter)PyCThostFtdcInvestorInfoCommRecField_get_ForQuoteCnt, (setter)PyCThostFtdcInvestorInfoCommRecField_set_ForQuoteCnt, (char *)"ForQuoteCnt", NULL},
	 {(char *)"InfoComm", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InfoComm, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InfoComm, (char *)"InfoComm", NULL},
	 {(char *)"IsOptSeries", (getter)PyCThostFtdcInvestorInfoCommRecField_get_IsOptSeries, (setter)PyCThostFtdcInvestorInfoCommRecField_set_IsOptSeries, (char *)"IsOptSeries", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcInvestorInfoCommRecField_get_ProductID, (setter)PyCThostFtdcInvestorInfoCommRecField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"InfoCnt", (getter)PyCThostFtdcInvestorInfoCommRecField_get_InfoCnt, (setter)PyCThostFtdcInvestorInfoCommRecField_set_InfoCnt, (char *)"InfoCnt", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorInfoCommRecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorInfoCommRecField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorInfoCommRecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorInfoCommRecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorInfoCommRecField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorInfoCommRecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorInfoCommRecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorInfoCommRecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorInfoCommRecField_new,       /* tp_new */
};

int PyCThostFtdcInvestorInfoCommRecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorInfoCommRecField  */
	if (PyType_Ready(&PyCThostFtdcInvestorInfoCommRecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorInfoCommRecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorInfoCommRecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorInfoCommRecField", (PyObject *)&PyCThostFtdcInvestorInfoCommRecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorInfoCommRecField to module");
        Py_DECREF(&PyCThostFtdcInvestorInfoCommRecFieldType);
		return -1;
    }

    return 0;
}
