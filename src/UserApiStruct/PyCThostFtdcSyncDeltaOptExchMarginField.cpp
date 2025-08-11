
#include "PyCThostFtdcSyncDeltaOptExchMarginField.h"



static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaOptExchMarginField *self = (PyCThostFtdcSyncDeltaOptExchMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_init(PyCThostFtdcSyncDeltaOptExchMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InstrumentID", "SShortMarginRatioByMoney", "SShortMarginRatioByVolume", "HShortMarginRatioByMoney", "HShortMarginRatioByVolume", "AShortMarginRatioByMoney", "AShortMarginRatioByVolume", "MShortMarginRatioByMoney", "MShortMarginRatioByVolume", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaOptExchMarginField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaOptExchMarginField_BrokerID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaOptExchMarginField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaOptExchMarginField_InstrumentID_len = 0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptExchMarginField_SShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptExchMarginField_SShortMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptExchMarginField_HShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptExchMarginField_HShortMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptExchMarginField_AShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptExchMarginField_AShortMarginRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaOptExchMarginField_MShortMarginRatioByMoney = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaOptExchMarginField_MShortMarginRatioByVolume = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaOptExchMarginField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaOptExchMarginField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ddddddddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddci", (char **)kwlist
#endif

		, &pSyncDeltaOptExchMarginField_BrokerID, &pSyncDeltaOptExchMarginField_BrokerID_len
		, &pSyncDeltaOptExchMarginField_InstrumentID, &pSyncDeltaOptExchMarginField_InstrumentID_len
		, &pSyncDeltaOptExchMarginField_SShortMarginRatioByMoney
		, &pSyncDeltaOptExchMarginField_SShortMarginRatioByVolume
		, &pSyncDeltaOptExchMarginField_HShortMarginRatioByMoney
		, &pSyncDeltaOptExchMarginField_HShortMarginRatioByVolume
		, &pSyncDeltaOptExchMarginField_AShortMarginRatioByMoney
		, &pSyncDeltaOptExchMarginField_AShortMarginRatioByVolume
		, &pSyncDeltaOptExchMarginField_MShortMarginRatioByMoney
		, &pSyncDeltaOptExchMarginField_MShortMarginRatioByVolume
		, &pSyncDeltaOptExchMarginField_ActionDirection
		, &pSyncDeltaOptExchMarginField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaOptExchMarginField_BrokerID != NULL) {
		if(pSyncDeltaOptExchMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptExchMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaOptExchMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaOptExchMarginField_BrokerID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaOptExchMarginField_InstrumentID != NULL) {
		if(pSyncDeltaOptExchMarginField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaOptExchMarginField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaOptExchMarginField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaOptExchMarginField_InstrumentID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.SShortMarginRatioByMoney = pSyncDeltaOptExchMarginField_SShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.SShortMarginRatioByVolume = pSyncDeltaOptExchMarginField_SShortMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.HShortMarginRatioByMoney = pSyncDeltaOptExchMarginField_HShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.HShortMarginRatioByVolume = pSyncDeltaOptExchMarginField_HShortMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.AShortMarginRatioByMoney = pSyncDeltaOptExchMarginField_AShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.AShortMarginRatioByVolume = pSyncDeltaOptExchMarginField_AShortMarginRatioByVolume;
	//TThostFtdcRatioType double
	self->data.MShortMarginRatioByMoney = pSyncDeltaOptExchMarginField_MShortMarginRatioByMoney;
	//TThostFtdcMoneyType double
	self->data.MShortMarginRatioByVolume = pSyncDeltaOptExchMarginField_MShortMarginRatioByVolume;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaOptExchMarginField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaOptExchMarginField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaOptExchMarginField_dealloc(PyCThostFtdcSyncDeltaOptExchMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_repr(PyCThostFtdcSyncDeltaOptExchMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InstrumentID", self->data.InstrumentID 
		, "SShortMarginRatioByMoney", self->data.SShortMarginRatioByMoney
		, "SShortMarginRatioByVolume", self->data.SShortMarginRatioByVolume
		, "HShortMarginRatioByMoney", self->data.HShortMarginRatioByMoney
		, "HShortMarginRatioByVolume", self->data.HShortMarginRatioByVolume
		, "AShortMarginRatioByMoney", self->data.AShortMarginRatioByMoney
		, "AShortMarginRatioByVolume", self->data.AShortMarginRatioByVolume
		, "MShortMarginRatioByMoney", self->data.MShortMarginRatioByMoney
		, "MShortMarginRatioByVolume", self->data.MShortMarginRatioByVolume
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaOptExchMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_BrokerID(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_InstrumentID(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MShortMarginRatioByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MShortMarginRatioByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_ActionDirection(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaOptExchMarginField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptExchMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_BrokerID(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_InstrumentID(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByMoney(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MShortMarginRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MShortMarginRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByVolume(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MShortMarginRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MShortMarginRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_ActionDirection(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
		PyErr_SetString(PyExc_ValueError, "ActionDirection must be less than 1 bytes");
		return -1;
	}
	self->data.ActionDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaOptExchMarginField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaOptExchMarginField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaOptExchMarginField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"SShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByMoney, (char *)"SShortMarginRatioByMoney", NULL},
	 {(char *)"SShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_SShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_SShortMarginRatioByVolume, (char *)"SShortMarginRatioByVolume", NULL},
	 {(char *)"HShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByMoney, (char *)"HShortMarginRatioByMoney", NULL},
	 {(char *)"HShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_HShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_HShortMarginRatioByVolume, (char *)"HShortMarginRatioByVolume", NULL},
	 {(char *)"AShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByMoney, (char *)"AShortMarginRatioByMoney", NULL},
	 {(char *)"AShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_AShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_AShortMarginRatioByVolume, (char *)"AShortMarginRatioByVolume", NULL},
	 {(char *)"MShortMarginRatioByMoney", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByMoney, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByMoney, (char *)"MShortMarginRatioByMoney", NULL},
	 {(char *)"MShortMarginRatioByVolume", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_MShortMarginRatioByVolume, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_MShortMarginRatioByVolume, (char *)"MShortMarginRatioByVolume", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaOptExchMarginField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaOptExchMarginField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaOptExchMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaOptExchMarginField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaOptExchMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaOptExchMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaOptExchMarginField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaOptExchMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaOptExchMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaOptExchMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaOptExchMarginField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaOptExchMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaOptExchMarginField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaOptExchMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaOptExchMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaOptExchMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaOptExchMarginField", (PyObject *)&PyCThostFtdcSyncDeltaOptExchMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaOptExchMarginField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaOptExchMarginFieldType);
		return -1;
    }

    return 0;
}
