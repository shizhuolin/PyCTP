
#include "PyCThostFtdcInputCombActionField.h"



static PyObject *PyCThostFtdcInputCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputCombActionField *self = (PyCThostFtdcInputCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputCombActionField_init(PyCThostFtdcInputCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "CombActionRef", "UserID", "Direction", "Volume", "CombDirection", "HedgeFlag", "ExchangeID", "reserve2", "MacAddress", "InvestUnitID", "FrontID", "SessionID", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputCombActionField_BrokerID = NULL;
	Py_ssize_t pInputCombActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputCombActionField_InvestorID = NULL;
	Py_ssize_t pInputCombActionField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputCombActionField_reserve1 = NULL;
	Py_ssize_t pInputCombActionField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputCombActionField_CombActionRef = NULL;
	Py_ssize_t pInputCombActionField_CombActionRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputCombActionField_UserID = NULL;
	Py_ssize_t pInputCombActionField_UserID_len = 0;

	//TThostFtdcDirectionType char
	char pInputCombActionField_Direction = 0;

	//TThostFtdcVolumeType int
	int pInputCombActionField_Volume = 0;

	//TThostFtdcCombDirectionType char
	char pInputCombActionField_CombDirection = 0;

	//TThostFtdcHedgeFlagType char
	char pInputCombActionField_HedgeFlag = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputCombActionField_ExchangeID = NULL;
	Py_ssize_t pInputCombActionField_ExchangeID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputCombActionField_reserve2 = NULL;
	Py_ssize_t pInputCombActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputCombActionField_MacAddress = NULL;
	Py_ssize_t pInputCombActionField_MacAddress_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputCombActionField_InvestUnitID = NULL;
	Py_ssize_t pInputCombActionField_InvestUnitID_len = 0;

	//TThostFtdcFrontIDType int
	int pInputCombActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pInputCombActionField_SessionID = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputCombActionField_InstrumentID = NULL;
	Py_ssize_t pInputCombActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputCombActionField_IPAddress = NULL;
	Py_ssize_t pInputCombActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciccy#y#y#y#iiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciccs#s#s#s#iis#s#", (char **)kwlist
#endif

		, &pInputCombActionField_BrokerID, &pInputCombActionField_BrokerID_len
		, &pInputCombActionField_InvestorID, &pInputCombActionField_InvestorID_len
		, &pInputCombActionField_reserve1, &pInputCombActionField_reserve1_len
		, &pInputCombActionField_CombActionRef, &pInputCombActionField_CombActionRef_len
		, &pInputCombActionField_UserID, &pInputCombActionField_UserID_len
		, &pInputCombActionField_Direction
		, &pInputCombActionField_Volume
		, &pInputCombActionField_CombDirection
		, &pInputCombActionField_HedgeFlag
		, &pInputCombActionField_ExchangeID, &pInputCombActionField_ExchangeID_len
		, &pInputCombActionField_reserve2, &pInputCombActionField_reserve2_len
		, &pInputCombActionField_MacAddress, &pInputCombActionField_MacAddress_len
		, &pInputCombActionField_InvestUnitID, &pInputCombActionField_InvestUnitID_len
		, &pInputCombActionField_FrontID
		, &pInputCombActionField_SessionID
		, &pInputCombActionField_InstrumentID, &pInputCombActionField_InstrumentID_len
		, &pInputCombActionField_IPAddress, &pInputCombActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputCombActionField_BrokerID != NULL) {
		if(pInputCombActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputCombActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputCombActionField_BrokerID, sizeof(self->data.BrokerID) );
		pInputCombActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputCombActionField_InvestorID != NULL) {
		if(pInputCombActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputCombActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputCombActionField_InvestorID, sizeof(self->data.InvestorID) );
		pInputCombActionField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputCombActionField_reserve1 != NULL) {
		if(pInputCombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputCombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputCombActionField_reserve1, sizeof(self->data.reserve1) );
		pInputCombActionField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pInputCombActionField_CombActionRef != NULL) {
		if(pInputCombActionField_CombActionRef_len > (Py_ssize_t)sizeof(self->data.CombActionRef)) {
			PyErr_Format(PyExc_ValueError, "CombActionRef too long: length=%zd (max allowed is %zd)", pInputCombActionField_CombActionRef_len, (Py_ssize_t)sizeof(self->data.CombActionRef));
			return -1;
		}
		strncpy(self->data.CombActionRef, pInputCombActionField_CombActionRef, sizeof(self->data.CombActionRef) );
		pInputCombActionField_CombActionRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pInputCombActionField_UserID != NULL) {
		if(pInputCombActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputCombActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputCombActionField_UserID, sizeof(self->data.UserID) );
		pInputCombActionField_UserID = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pInputCombActionField_Direction;

	//TThostFtdcVolumeType int
	self->data.Volume = pInputCombActionField_Volume;

	//TThostFtdcCombDirectionType char
	self->data.CombDirection = pInputCombActionField_CombDirection;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInputCombActionField_HedgeFlag;

	//TThostFtdcExchangeIDType char[9]
	if(pInputCombActionField_ExchangeID != NULL) {
		if(pInputCombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputCombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputCombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputCombActionField_ExchangeID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputCombActionField_reserve2 != NULL) {
		if(pInputCombActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputCombActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputCombActionField_reserve2, sizeof(self->data.reserve2) );
		pInputCombActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputCombActionField_MacAddress != NULL) {
		if(pInputCombActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputCombActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputCombActionField_MacAddress, sizeof(self->data.MacAddress) );
		pInputCombActionField_MacAddress = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputCombActionField_InvestUnitID != NULL) {
		if(pInputCombActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputCombActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputCombActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputCombActionField_InvestUnitID = NULL;
	}

	//TThostFtdcFrontIDType int
	self->data.FrontID = pInputCombActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pInputCombActionField_SessionID;

	//TThostFtdcInstrumentIDType char[81]
	if(pInputCombActionField_InstrumentID != NULL) {
		if(pInputCombActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputCombActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputCombActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputCombActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputCombActionField_IPAddress != NULL) {
		if(pInputCombActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputCombActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputCombActionField_IPAddress, sizeof(self->data.IPAddress) );
		pInputCombActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputCombActionField_dealloc(PyCThostFtdcInputCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputCombActionField_repr(PyCThostFtdcInputCombActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "CombActionRef", self->data.CombActionRef 
		, "UserID", self->data.UserID 
		, "Direction", self->data.Direction
		, "Volume", self->data.Volume
		, "CombDirection", self->data.CombDirection
		, "HedgeFlag", self->data.HedgeFlag
		, "ExchangeID", self->data.ExchangeID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InvestUnitID", self->data.InvestUnitID 
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputCombActionField_get_BrokerID(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputCombActionField_get_InvestorID(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputCombActionField_get_reserve1(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputCombActionField_get_CombActionRef(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.CombActionRef);
}

static PyObject *PyCThostFtdcInputCombActionField_get_UserID(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputCombActionField_get_Direction(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcInputCombActionField_get_Volume(PyCThostFtdcInputCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcInputCombActionField_get_CombDirection(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CombDirection), 1);
}

static PyObject *PyCThostFtdcInputCombActionField_get_HedgeFlag(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInputCombActionField_get_ExchangeID(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputCombActionField_get_reserve2(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputCombActionField_get_MacAddress(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputCombActionField_get_InvestUnitID(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputCombActionField_get_FrontID(PyCThostFtdcInputCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcInputCombActionField_get_SessionID(PyCThostFtdcInputCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcInputCombActionField_get_InstrumentID(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputCombActionField_get_IPAddress(PyCThostFtdcInputCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcInputCombActionField_set_BrokerID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_InvestorID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_reserve1(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_CombActionRef(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombActionRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombActionRef)) {
		PyErr_SetString(PyExc_ValueError, "CombActionRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.CombActionRef, buf, sizeof(self->data.CombActionRef));
	return 0;
}

static int PyCThostFtdcInputCombActionField_set_UserID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_Direction(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_Volume(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Volume Expected int"); 
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
    self->data.Volume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputCombActionField_set_CombDirection(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombDirection)) {
		PyErr_SetString(PyExc_ValueError, "CombDirection must be less than 1 bytes");
		return -1;
	}
	self->data.CombDirection = *buf;
	return 0;
}

static int PyCThostFtdcInputCombActionField_set_HedgeFlag(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_ExchangeID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_reserve2(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcInputCombActionField_set_MacAddress(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
		PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
	return 0;
}

static int PyCThostFtdcInputCombActionField_set_InvestUnitID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_FrontID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int"); 
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
    self->data.FrontID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputCombActionField_set_SessionID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int"); 
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
    self->data.SessionID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputCombActionField_set_InstrumentID(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputCombActionField_set_IPAddress(PyCThostFtdcInputCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
		PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcInputCombActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputCombActionField_get_BrokerID, (setter)PyCThostFtdcInputCombActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputCombActionField_get_InvestorID, (setter)PyCThostFtdcInputCombActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputCombActionField_get_reserve1, (setter)PyCThostFtdcInputCombActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"CombActionRef", (getter)PyCThostFtdcInputCombActionField_get_CombActionRef, (setter)PyCThostFtdcInputCombActionField_set_CombActionRef, (char *)"CombActionRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputCombActionField_get_UserID, (setter)PyCThostFtdcInputCombActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcInputCombActionField_get_Direction, (setter)PyCThostFtdcInputCombActionField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcInputCombActionField_get_Volume, (setter)PyCThostFtdcInputCombActionField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"CombDirection", (getter)PyCThostFtdcInputCombActionField_get_CombDirection, (setter)PyCThostFtdcInputCombActionField_set_CombDirection, (char *)"CombDirection", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInputCombActionField_get_HedgeFlag, (setter)PyCThostFtdcInputCombActionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputCombActionField_get_ExchangeID, (setter)PyCThostFtdcInputCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputCombActionField_get_reserve2, (setter)PyCThostFtdcInputCombActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputCombActionField_get_MacAddress, (setter)PyCThostFtdcInputCombActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputCombActionField_get_InvestUnitID, (setter)PyCThostFtdcInputCombActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcInputCombActionField_get_FrontID, (setter)PyCThostFtdcInputCombActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcInputCombActionField_get_SessionID, (setter)PyCThostFtdcInputCombActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputCombActionField_get_InstrumentID, (setter)PyCThostFtdcInputCombActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputCombActionField_get_IPAddress, (setter)PyCThostFtdcInputCombActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputCombActionField_new,       /* tp_new */
};

int PyCThostFtdcInputCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputCombActionField  */
	if (PyType_Ready(&PyCThostFtdcInputCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputCombActionField", (PyObject *)&PyCThostFtdcInputCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputCombActionField to module");
        Py_DECREF(&PyCThostFtdcInputCombActionFieldType);
		return -1;
    }

    return 0;
}
