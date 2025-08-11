
#include "PyCThostFtdcSyncDeltaInitInvstMarginField.h"



static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInitInvstMarginField *self = (PyCThostFtdcSyncDeltaInitInvstMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_init(PyCThostFtdcSyncDeltaInitInvstMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "LastRiskTotalInvstMargin", "LastRiskTotalExchMargin", "ThisSyncInvstMargin", "ThisSyncExchMargin", "RemainRiskInvstMargin", "RemainRiskExchMargin", "LastRiskSpecTotalInvstMargin", "LastRiskSpecTotalExchMargin", "ThisSyncSpecInvstMargin", "ThisSyncSpecExchMargin", "RemainRiskSpecInvstMargin", "RemainRiskSpecExchMargin", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaInitInvstMarginField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaInitInvstMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaInitInvstMarginField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaInitInvstMarginField_InvestorID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_LastRiskTotalInvstMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_LastRiskTotalExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_ThisSyncInvstMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_ThisSyncExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_RemainRiskInvstMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_RemainRiskExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_LastRiskSpecTotalInvstMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_LastRiskSpecTotalExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_ThisSyncSpecInvstMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_ThisSyncSpecExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_RemainRiskSpecInvstMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInitInvstMarginField_RemainRiskSpecExchMargin = 0.0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaInitInvstMarginField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ddddddddddddi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddddddi", (char **)kwlist
#endif

		, &pSyncDeltaInitInvstMarginField_BrokerID, &pSyncDeltaInitInvstMarginField_BrokerID_len
		, &pSyncDeltaInitInvstMarginField_InvestorID, &pSyncDeltaInitInvstMarginField_InvestorID_len
		, &pSyncDeltaInitInvstMarginField_LastRiskTotalInvstMargin
		, &pSyncDeltaInitInvstMarginField_LastRiskTotalExchMargin
		, &pSyncDeltaInitInvstMarginField_ThisSyncInvstMargin
		, &pSyncDeltaInitInvstMarginField_ThisSyncExchMargin
		, &pSyncDeltaInitInvstMarginField_RemainRiskInvstMargin
		, &pSyncDeltaInitInvstMarginField_RemainRiskExchMargin
		, &pSyncDeltaInitInvstMarginField_LastRiskSpecTotalInvstMargin
		, &pSyncDeltaInitInvstMarginField_LastRiskSpecTotalExchMargin
		, &pSyncDeltaInitInvstMarginField_ThisSyncSpecInvstMargin
		, &pSyncDeltaInitInvstMarginField_ThisSyncSpecExchMargin
		, &pSyncDeltaInitInvstMarginField_RemainRiskSpecInvstMargin
		, &pSyncDeltaInitInvstMarginField_RemainRiskSpecExchMargin
		, &pSyncDeltaInitInvstMarginField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaInitInvstMarginField_BrokerID != NULL) {
		if(pSyncDeltaInitInvstMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaInitInvstMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaInitInvstMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaInitInvstMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaInitInvstMarginField_InvestorID != NULL) {
		if(pSyncDeltaInitInvstMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaInitInvstMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaInitInvstMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaInitInvstMarginField_InvestorID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.LastRiskTotalInvstMargin = pSyncDeltaInitInvstMarginField_LastRiskTotalInvstMargin;
	//TThostFtdcMoneyType double
	self->data.LastRiskTotalExchMargin = pSyncDeltaInitInvstMarginField_LastRiskTotalExchMargin;
	//TThostFtdcMoneyType double
	self->data.ThisSyncInvstMargin = pSyncDeltaInitInvstMarginField_ThisSyncInvstMargin;
	//TThostFtdcMoneyType double
	self->data.ThisSyncExchMargin = pSyncDeltaInitInvstMarginField_ThisSyncExchMargin;
	//TThostFtdcMoneyType double
	self->data.RemainRiskInvstMargin = pSyncDeltaInitInvstMarginField_RemainRiskInvstMargin;
	//TThostFtdcMoneyType double
	self->data.RemainRiskExchMargin = pSyncDeltaInitInvstMarginField_RemainRiskExchMargin;
	//TThostFtdcMoneyType double
	self->data.LastRiskSpecTotalInvstMargin = pSyncDeltaInitInvstMarginField_LastRiskSpecTotalInvstMargin;
	//TThostFtdcMoneyType double
	self->data.LastRiskSpecTotalExchMargin = pSyncDeltaInitInvstMarginField_LastRiskSpecTotalExchMargin;
	//TThostFtdcMoneyType double
	self->data.ThisSyncSpecInvstMargin = pSyncDeltaInitInvstMarginField_ThisSyncSpecInvstMargin;
	//TThostFtdcMoneyType double
	self->data.ThisSyncSpecExchMargin = pSyncDeltaInitInvstMarginField_ThisSyncSpecExchMargin;
	//TThostFtdcMoneyType double
	self->data.RemainRiskSpecInvstMargin = pSyncDeltaInitInvstMarginField_RemainRiskSpecInvstMargin;
	//TThostFtdcMoneyType double
	self->data.RemainRiskSpecExchMargin = pSyncDeltaInitInvstMarginField_RemainRiskSpecExchMargin;
	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaInitInvstMarginField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaInitInvstMarginField_dealloc(PyCThostFtdcSyncDeltaInitInvstMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_repr(PyCThostFtdcSyncDeltaInitInvstMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "LastRiskTotalInvstMargin", self->data.LastRiskTotalInvstMargin
		, "LastRiskTotalExchMargin", self->data.LastRiskTotalExchMargin
		, "ThisSyncInvstMargin", self->data.ThisSyncInvstMargin
		, "ThisSyncExchMargin", self->data.ThisSyncExchMargin
		, "RemainRiskInvstMargin", self->data.RemainRiskInvstMargin
		, "RemainRiskExchMargin", self->data.RemainRiskExchMargin
		, "LastRiskSpecTotalInvstMargin", self->data.LastRiskSpecTotalInvstMargin
		, "LastRiskSpecTotalExchMargin", self->data.LastRiskSpecTotalExchMargin
		, "ThisSyncSpecInvstMargin", self->data.ThisSyncSpecInvstMargin
		, "ThisSyncSpecExchMargin", self->data.ThisSyncSpecExchMargin
		, "RemainRiskSpecInvstMargin", self->data.RemainRiskSpecInvstMargin
		, "RemainRiskSpecExchMargin", self->data.RemainRiskSpecExchMargin
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInitInvstMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_BrokerID(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_InvestorID(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskTotalInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastRiskTotalInvstMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskTotalExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastRiskTotalExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ThisSyncInvstMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ThisSyncExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RemainRiskInvstMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RemainRiskExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskSpecTotalInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastRiskSpecTotalInvstMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskSpecTotalExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastRiskSpecTotalExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncSpecInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ThisSyncSpecInvstMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncSpecExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ThisSyncSpecExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskSpecInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RemainRiskSpecInvstMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskSpecExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RemainRiskSpecExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInitInvstMarginField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInitInvstMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_BrokerID(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_InvestorID(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskTotalInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastRiskTotalInvstMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastRiskTotalInvstMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskTotalExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastRiskTotalExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastRiskTotalExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ThisSyncInvstMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ThisSyncInvstMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ThisSyncExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ThisSyncExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RemainRiskInvstMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RemainRiskInvstMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RemainRiskExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RemainRiskExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskSpecTotalInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastRiskSpecTotalInvstMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastRiskSpecTotalInvstMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskSpecTotalExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastRiskSpecTotalExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastRiskSpecTotalExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncSpecInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ThisSyncSpecInvstMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ThisSyncSpecInvstMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncSpecExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ThisSyncSpecExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ThisSyncSpecExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskSpecInvstMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RemainRiskSpecInvstMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RemainRiskSpecInvstMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskSpecExchMargin(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RemainRiskSpecExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RemainRiskSpecExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInitInvstMarginField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInitInvstMarginField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int"); 
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
    self->data.SyncDeltaSequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDeltaInitInvstMarginField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"LastRiskTotalInvstMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskTotalInvstMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskTotalInvstMargin, (char *)"LastRiskTotalInvstMargin", NULL},
	 {(char *)"LastRiskTotalExchMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskTotalExchMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskTotalExchMargin, (char *)"LastRiskTotalExchMargin", NULL},
	 {(char *)"ThisSyncInvstMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncInvstMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncInvstMargin, (char *)"ThisSyncInvstMargin", NULL},
	 {(char *)"ThisSyncExchMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncExchMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncExchMargin, (char *)"ThisSyncExchMargin", NULL},
	 {(char *)"RemainRiskInvstMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskInvstMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskInvstMargin, (char *)"RemainRiskInvstMargin", NULL},
	 {(char *)"RemainRiskExchMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskExchMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskExchMargin, (char *)"RemainRiskExchMargin", NULL},
	 {(char *)"LastRiskSpecTotalInvstMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskSpecTotalInvstMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskSpecTotalInvstMargin, (char *)"LastRiskSpecTotalInvstMargin", NULL},
	 {(char *)"LastRiskSpecTotalExchMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_LastRiskSpecTotalExchMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_LastRiskSpecTotalExchMargin, (char *)"LastRiskSpecTotalExchMargin", NULL},
	 {(char *)"ThisSyncSpecInvstMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncSpecInvstMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncSpecInvstMargin, (char *)"ThisSyncSpecInvstMargin", NULL},
	 {(char *)"ThisSyncSpecExchMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_ThisSyncSpecExchMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_ThisSyncSpecExchMargin, (char *)"ThisSyncSpecExchMargin", NULL},
	 {(char *)"RemainRiskSpecInvstMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskSpecInvstMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskSpecInvstMargin, (char *)"RemainRiskSpecInvstMargin", NULL},
	 {(char *)"RemainRiskSpecExchMargin", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_RemainRiskSpecExchMargin, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_RemainRiskSpecExchMargin, (char *)"RemainRiskSpecExchMargin", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInitInvstMarginField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInitInvstMarginField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInitInvstMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInitInvstMarginField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInitInvstMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInitInvstMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInitInvstMarginField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInitInvstMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInitInvstMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInitInvstMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInitInvstMarginField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInitInvstMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInitInvstMarginField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInitInvstMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInitInvstMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInitInvstMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInitInvstMarginField", (PyObject *)&PyCThostFtdcSyncDeltaInitInvstMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInitInvstMarginField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInitInvstMarginFieldType);
		return -1;
    }

    return 0;
}
