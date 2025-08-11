
#include "PyCThostFtdcQryMaxOrderVolumeWithPriceField.h"



static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryMaxOrderVolumeWithPriceField *self = (PyCThostFtdcQryMaxOrderVolumeWithPriceField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_init(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "Direction", "OffsetFlag", "HedgeFlag", "MaxVolume", "Price", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pQryMaxOrderVolumeWithPriceField_BrokerID = NULL;
	Py_ssize_t pQryMaxOrderVolumeWithPriceField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pQryMaxOrderVolumeWithPriceField_InvestorID = NULL;
	Py_ssize_t pQryMaxOrderVolumeWithPriceField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pQryMaxOrderVolumeWithPriceField_reserve1 = NULL;
	Py_ssize_t pQryMaxOrderVolumeWithPriceField_reserve1_len = 0;

	//TThostFtdcDirectionType char
	char pQryMaxOrderVolumeWithPriceField_Direction = 0;

	//TThostFtdcOffsetFlagType char
	char pQryMaxOrderVolumeWithPriceField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pQryMaxOrderVolumeWithPriceField_HedgeFlag = 0;

	//TThostFtdcVolumeType int
	int pQryMaxOrderVolumeWithPriceField_MaxVolume = 0;

	//TThostFtdcPriceType double
	double pQryMaxOrderVolumeWithPriceField_Price = 0.0;

	//TThostFtdcExchangeIDType char[9]
	const char *pQryMaxOrderVolumeWithPriceField_ExchangeID = NULL;
	Py_ssize_t pQryMaxOrderVolumeWithPriceField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pQryMaxOrderVolumeWithPriceField_InvestUnitID = NULL;
	Py_ssize_t pQryMaxOrderVolumeWithPriceField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pQryMaxOrderVolumeWithPriceField_InstrumentID = NULL;
	Py_ssize_t pQryMaxOrderVolumeWithPriceField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cccidy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cccids#s#s#", (char **)kwlist
#endif

		, &pQryMaxOrderVolumeWithPriceField_BrokerID, &pQryMaxOrderVolumeWithPriceField_BrokerID_len
		, &pQryMaxOrderVolumeWithPriceField_InvestorID, &pQryMaxOrderVolumeWithPriceField_InvestorID_len
		, &pQryMaxOrderVolumeWithPriceField_reserve1, &pQryMaxOrderVolumeWithPriceField_reserve1_len
		, &pQryMaxOrderVolumeWithPriceField_Direction
		, &pQryMaxOrderVolumeWithPriceField_OffsetFlag
		, &pQryMaxOrderVolumeWithPriceField_HedgeFlag
		, &pQryMaxOrderVolumeWithPriceField_MaxVolume
		, &pQryMaxOrderVolumeWithPriceField_Price
		, &pQryMaxOrderVolumeWithPriceField_ExchangeID, &pQryMaxOrderVolumeWithPriceField_ExchangeID_len
		, &pQryMaxOrderVolumeWithPriceField_InvestUnitID, &pQryMaxOrderVolumeWithPriceField_InvestUnitID_len
		, &pQryMaxOrderVolumeWithPriceField_InstrumentID, &pQryMaxOrderVolumeWithPriceField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pQryMaxOrderVolumeWithPriceField_BrokerID != NULL) {
		if(pQryMaxOrderVolumeWithPriceField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeWithPriceField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pQryMaxOrderVolumeWithPriceField_BrokerID, sizeof(self->data.BrokerID) );
		pQryMaxOrderVolumeWithPriceField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pQryMaxOrderVolumeWithPriceField_InvestorID != NULL) {
		if(pQryMaxOrderVolumeWithPriceField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeWithPriceField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pQryMaxOrderVolumeWithPriceField_InvestorID, sizeof(self->data.InvestorID) );
		pQryMaxOrderVolumeWithPriceField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pQryMaxOrderVolumeWithPriceField_reserve1 != NULL) {
		if(pQryMaxOrderVolumeWithPriceField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeWithPriceField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pQryMaxOrderVolumeWithPriceField_reserve1, sizeof(self->data.reserve1) );
		pQryMaxOrderVolumeWithPriceField_reserve1 = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pQryMaxOrderVolumeWithPriceField_Direction;

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pQryMaxOrderVolumeWithPriceField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pQryMaxOrderVolumeWithPriceField_HedgeFlag;

	//TThostFtdcVolumeType int
	self->data.MaxVolume = pQryMaxOrderVolumeWithPriceField_MaxVolume;

	//TThostFtdcPriceType double
	self->data.Price = pQryMaxOrderVolumeWithPriceField_Price;
	//TThostFtdcExchangeIDType char[9]
	if(pQryMaxOrderVolumeWithPriceField_ExchangeID != NULL) {
		if(pQryMaxOrderVolumeWithPriceField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeWithPriceField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pQryMaxOrderVolumeWithPriceField_ExchangeID, sizeof(self->data.ExchangeID) );
		pQryMaxOrderVolumeWithPriceField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pQryMaxOrderVolumeWithPriceField_InvestUnitID != NULL) {
		if(pQryMaxOrderVolumeWithPriceField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeWithPriceField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pQryMaxOrderVolumeWithPriceField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pQryMaxOrderVolumeWithPriceField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pQryMaxOrderVolumeWithPriceField_InstrumentID != NULL) {
		if(pQryMaxOrderVolumeWithPriceField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pQryMaxOrderVolumeWithPriceField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pQryMaxOrderVolumeWithPriceField_InstrumentID, sizeof(self->data.InstrumentID) );
		pQryMaxOrderVolumeWithPriceField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcQryMaxOrderVolumeWithPriceField_dealloc(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_repr(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:d,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:d,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "Direction", self->data.Direction
		, "OffsetFlag", self->data.OffsetFlag
		, "HedgeFlag", self->data.HedgeFlag
		, "MaxVolume", self->data.MaxVolume
		, "Price", self->data.Price
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryMaxOrderVolumeWithPriceField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_BrokerID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestorID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_reserve1(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Direction(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_MaxVolume(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MaxVolume);
#else 
	return PyInt_FromLong(self->data.MaxVolume);
#endif 
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Price(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Price);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_ExchangeID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InstrumentID(PyCThostFtdcQryMaxOrderVolumeWithPriceField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_BrokerID(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestorID(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_reserve1(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Direction(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_OffsetFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_HedgeFlag(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_MaxVolume(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Price(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Price Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Price = buf;
    return 0;
}

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_ExchangeID(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestUnitID(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InstrumentID(PyCThostFtdcQryMaxOrderVolumeWithPriceField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcQryMaxOrderVolumeWithPriceField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_BrokerID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestorID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_reserve1, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Direction, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_OffsetFlag, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_HedgeFlag, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"MaxVolume", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_MaxVolume, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_MaxVolume, (char *)"MaxVolume", NULL},
	 {(char *)"Price", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_Price, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_Price, (char *)"Price", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_ExchangeID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InvestUnitID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_get_InstrumentID, (setter)PyCThostFtdcQryMaxOrderVolumeWithPriceField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryMaxOrderVolumeWithPriceField",	/* tp_name */
	sizeof(PyCThostFtdcQryMaxOrderVolumeWithPriceField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryMaxOrderVolumeWithPriceField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryMaxOrderVolumeWithPriceField_repr,   /* tp_repr */
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
	"CThostFtdcQryMaxOrderVolumeWithPriceField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryMaxOrderVolumeWithPriceField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryMaxOrderVolumeWithPriceField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryMaxOrderVolumeWithPriceField_new,       /* tp_new */
};

int PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryMaxOrderVolumeWithPriceField  */
	if (PyType_Ready(&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryMaxOrderVolumeWithPriceField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryMaxOrderVolumeWithPriceField", (PyObject *)&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryMaxOrderVolumeWithPriceField to module");
        Py_DECREF(&PyCThostFtdcQryMaxOrderVolumeWithPriceFieldType);
		return -1;
    }

    return 0;
}
