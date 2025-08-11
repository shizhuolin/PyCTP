
#include "PyCThostFtdcMMOptionInstrCommRateField.h"



static PyObject *PyCThostFtdcMMOptionInstrCommRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcMMOptionInstrCommRateField *self = (PyCThostFtdcMMOptionInstrCommRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcMMOptionInstrCommRateField_init(PyCThostFtdcMMOptionInstrCommRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "OpenRatioByMoney", "OpenRatioByVolume", "CloseRatioByMoney", "CloseRatioByVolume", "CloseTodayRatioByMoney", "CloseTodayRatioByVolume", "StrikeRatioByMoney", "StrikeRatioByVolume", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pMMOptionInstrCommRateField_reserve1 = NULL;
	Py_ssize_t pMMOptionInstrCommRateField_reserve1_len = 0;

	//TThostFtdcInvestorRangeType char
	char pMMOptionInstrCommRateField_InvestorRange = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pMMOptionInstrCommRateField_BrokerID = NULL;
	Py_ssize_t pMMOptionInstrCommRateField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pMMOptionInstrCommRateField_InvestorID = NULL;
	Py_ssize_t pMMOptionInstrCommRateField_InvestorID_len = 0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_OpenRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_OpenRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_CloseRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_CloseRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_CloseTodayRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_CloseTodayRatioByVolume = 0.0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_StrikeRatioByMoney = 0.0;

	//TThostFtdcRatioType double
	double pMMOptionInstrCommRateField_StrikeRatioByVolume = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pMMOptionInstrCommRateField_InstrumentID = NULL;
	Py_ssize_t pMMOptionInstrCommRateField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ddddddddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dddddddds#", (char **)kwlist
#endif

		, &pMMOptionInstrCommRateField_reserve1, &pMMOptionInstrCommRateField_reserve1_len
		, &pMMOptionInstrCommRateField_InvestorRange
		, &pMMOptionInstrCommRateField_BrokerID, &pMMOptionInstrCommRateField_BrokerID_len
		, &pMMOptionInstrCommRateField_InvestorID, &pMMOptionInstrCommRateField_InvestorID_len
		, &pMMOptionInstrCommRateField_OpenRatioByMoney
		, &pMMOptionInstrCommRateField_OpenRatioByVolume
		, &pMMOptionInstrCommRateField_CloseRatioByMoney
		, &pMMOptionInstrCommRateField_CloseRatioByVolume
		, &pMMOptionInstrCommRateField_CloseTodayRatioByMoney
		, &pMMOptionInstrCommRateField_CloseTodayRatioByVolume
		, &pMMOptionInstrCommRateField_StrikeRatioByMoney
		, &pMMOptionInstrCommRateField_StrikeRatioByVolume
		, &pMMOptionInstrCommRateField_InstrumentID, &pMMOptionInstrCommRateField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pMMOptionInstrCommRateField_reserve1 != NULL) {
		if(pMMOptionInstrCommRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pMMOptionInstrCommRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pMMOptionInstrCommRateField_reserve1, sizeof(self->data.reserve1) );
		pMMOptionInstrCommRateField_reserve1 = NULL;
	}

	//TThostFtdcInvestorRangeType char
	self->data.InvestorRange = pMMOptionInstrCommRateField_InvestorRange;

	//TThostFtdcBrokerIDType char[11]
	if(pMMOptionInstrCommRateField_BrokerID != NULL) {
		if(pMMOptionInstrCommRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pMMOptionInstrCommRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pMMOptionInstrCommRateField_BrokerID, sizeof(self->data.BrokerID) );
		pMMOptionInstrCommRateField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pMMOptionInstrCommRateField_InvestorID != NULL) {
		if(pMMOptionInstrCommRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pMMOptionInstrCommRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pMMOptionInstrCommRateField_InvestorID, sizeof(self->data.InvestorID) );
		pMMOptionInstrCommRateField_InvestorID = NULL;
	}

	//TThostFtdcRatioType double
	self->data.OpenRatioByMoney = pMMOptionInstrCommRateField_OpenRatioByMoney;
	//TThostFtdcRatioType double
	self->data.OpenRatioByVolume = pMMOptionInstrCommRateField_OpenRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseRatioByMoney = pMMOptionInstrCommRateField_CloseRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseRatioByVolume = pMMOptionInstrCommRateField_CloseRatioByVolume;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByMoney = pMMOptionInstrCommRateField_CloseTodayRatioByMoney;
	//TThostFtdcRatioType double
	self->data.CloseTodayRatioByVolume = pMMOptionInstrCommRateField_CloseTodayRatioByVolume;
	//TThostFtdcRatioType double
	self->data.StrikeRatioByMoney = pMMOptionInstrCommRateField_StrikeRatioByMoney;
	//TThostFtdcRatioType double
	self->data.StrikeRatioByVolume = pMMOptionInstrCommRateField_StrikeRatioByVolume;
	//TThostFtdcInstrumentIDType char[81]
	if(pMMOptionInstrCommRateField_InstrumentID != NULL) {
		if(pMMOptionInstrCommRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pMMOptionInstrCommRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pMMOptionInstrCommRateField_InstrumentID, sizeof(self->data.InstrumentID) );
		pMMOptionInstrCommRateField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcMMOptionInstrCommRateField_dealloc(PyCThostFtdcMMOptionInstrCommRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_repr(PyCThostFtdcMMOptionInstrCommRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "InvestorRange", self->data.InvestorRange
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OpenRatioByMoney", self->data.OpenRatioByMoney
		, "OpenRatioByVolume", self->data.OpenRatioByVolume
		, "CloseRatioByMoney", self->data.CloseRatioByMoney
		, "CloseRatioByVolume", self->data.CloseRatioByVolume
		, "CloseTodayRatioByMoney", self->data.CloseTodayRatioByMoney
		, "CloseTodayRatioByVolume", self->data.CloseTodayRatioByVolume
		, "StrikeRatioByMoney", self->data.StrikeRatioByMoney
		, "StrikeRatioByVolume", self->data.StrikeRatioByVolume
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcMMOptionInstrCommRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_reserve1(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_InvestorRange(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_BrokerID(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_InvestorID(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByMoney);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenRatioByVolume);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByMoney);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseRatioByVolume);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByMoney);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseTodayRatioByVolume);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeRatioByMoney);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeRatioByVolume);
}

static PyObject *PyCThostFtdcMMOptionInstrCommRateField_get_InstrumentID(PyCThostFtdcMMOptionInstrCommRateField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_reserve1(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMOptionInstrCommRateField_set_InvestorRange(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMOptionInstrCommRateField_set_BrokerID(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMOptionInstrCommRateField_set_InvestorID(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseTodayRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseTodayRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByMoney(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByMoney = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByVolume(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeRatioByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeRatioByVolume = buf;
    return 0;
}

static int PyCThostFtdcMMOptionInstrCommRateField_set_InstrumentID(PyCThostFtdcMMOptionInstrCommRateField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcMMOptionInstrCommRateField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_reserve1, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestorRange", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_InvestorRange, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_InvestorRange, (char *)"InvestorRange", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_BrokerID, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_InvestorID, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OpenRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByMoney, (char *)"OpenRatioByMoney", NULL},
	 {(char *)"OpenRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_OpenRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_OpenRatioByVolume, (char *)"OpenRatioByVolume", NULL},
	 {(char *)"CloseRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByMoney, (char *)"CloseRatioByMoney", NULL},
	 {(char *)"CloseRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseRatioByVolume, (char *)"CloseRatioByVolume", NULL},
	 {(char *)"CloseTodayRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByMoney, (char *)"CloseTodayRatioByMoney", NULL},
	 {(char *)"CloseTodayRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_CloseTodayRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_CloseTodayRatioByVolume, (char *)"CloseTodayRatioByVolume", NULL},
	 {(char *)"StrikeRatioByMoney", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByMoney, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByMoney, (char *)"StrikeRatioByMoney", NULL},
	 {(char *)"StrikeRatioByVolume", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_StrikeRatioByVolume, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_StrikeRatioByVolume, (char *)"StrikeRatioByVolume", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcMMOptionInstrCommRateField_get_InstrumentID, (setter)PyCThostFtdcMMOptionInstrCommRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcMMOptionInstrCommRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcMMOptionInstrCommRateField",	/* tp_name */
	sizeof(PyCThostFtdcMMOptionInstrCommRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcMMOptionInstrCommRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcMMOptionInstrCommRateField_repr,   /* tp_repr */
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
	"CThostFtdcMMOptionInstrCommRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcMMOptionInstrCommRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcMMOptionInstrCommRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcMMOptionInstrCommRateField_new,       /* tp_new */
};

int PyCThostFtdcMMOptionInstrCommRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcMMOptionInstrCommRateField  */
	if (PyType_Ready(&PyCThostFtdcMMOptionInstrCommRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcMMOptionInstrCommRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcMMOptionInstrCommRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcMMOptionInstrCommRateField", (PyObject *)&PyCThostFtdcMMOptionInstrCommRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcMMOptionInstrCommRateField to module");
        Py_DECREF(&PyCThostFtdcMMOptionInstrCommRateFieldType);
		return -1;
    }

    return 0;
}
