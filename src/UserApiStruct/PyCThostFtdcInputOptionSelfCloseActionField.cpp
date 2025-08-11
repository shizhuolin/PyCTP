
#include "PyCThostFtdcInputOptionSelfCloseActionField.h"



static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOptionSelfCloseActionField *self = (PyCThostFtdcInputOptionSelfCloseActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputOptionSelfCloseActionField_init(PyCThostFtdcInputOptionSelfCloseActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OptionSelfCloseActionRef", "OptionSelfCloseRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputOptionSelfCloseActionField_BrokerID = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputOptionSelfCloseActionField_InvestorID = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pInputOptionSelfCloseActionField_OptionSelfCloseActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_OptionSelfCloseRef_len = 0;

	//TThostFtdcRequestIDType int
	int pInputOptionSelfCloseActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pInputOptionSelfCloseActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pInputOptionSelfCloseActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputOptionSelfCloseActionField_ExchangeID = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pInputOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_OptionSelfCloseSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pInputOptionSelfCloseActionField_ActionFlag = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputOptionSelfCloseActionField_UserID = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_UserID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputOptionSelfCloseActionField_reserve1 = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_reserve1_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputOptionSelfCloseActionField_InvestUnitID = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputOptionSelfCloseActionField_reserve2 = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputOptionSelfCloseActionField_MacAddress = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputOptionSelfCloseActionField_InstrumentID = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputOptionSelfCloseActionField_IPAddress = NULL;
	Py_ssize_t pInputOptionSelfCloseActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pInputOptionSelfCloseActionField_BrokerID, &pInputOptionSelfCloseActionField_BrokerID_len
		, &pInputOptionSelfCloseActionField_InvestorID, &pInputOptionSelfCloseActionField_InvestorID_len
		, &pInputOptionSelfCloseActionField_OptionSelfCloseActionRef
		, &pInputOptionSelfCloseActionField_OptionSelfCloseRef, &pInputOptionSelfCloseActionField_OptionSelfCloseRef_len
		, &pInputOptionSelfCloseActionField_RequestID
		, &pInputOptionSelfCloseActionField_FrontID
		, &pInputOptionSelfCloseActionField_SessionID
		, &pInputOptionSelfCloseActionField_ExchangeID, &pInputOptionSelfCloseActionField_ExchangeID_len
		, &pInputOptionSelfCloseActionField_OptionSelfCloseSysID, &pInputOptionSelfCloseActionField_OptionSelfCloseSysID_len
		, &pInputOptionSelfCloseActionField_ActionFlag
		, &pInputOptionSelfCloseActionField_UserID, &pInputOptionSelfCloseActionField_UserID_len
		, &pInputOptionSelfCloseActionField_reserve1, &pInputOptionSelfCloseActionField_reserve1_len
		, &pInputOptionSelfCloseActionField_InvestUnitID, &pInputOptionSelfCloseActionField_InvestUnitID_len
		, &pInputOptionSelfCloseActionField_reserve2, &pInputOptionSelfCloseActionField_reserve2_len
		, &pInputOptionSelfCloseActionField_MacAddress, &pInputOptionSelfCloseActionField_MacAddress_len
		, &pInputOptionSelfCloseActionField_InstrumentID, &pInputOptionSelfCloseActionField_InstrumentID_len
		, &pInputOptionSelfCloseActionField_IPAddress, &pInputOptionSelfCloseActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputOptionSelfCloseActionField_BrokerID != NULL) {
		if(pInputOptionSelfCloseActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputOptionSelfCloseActionField_BrokerID, sizeof(self->data.BrokerID) );
		pInputOptionSelfCloseActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputOptionSelfCloseActionField_InvestorID != NULL) {
		if(pInputOptionSelfCloseActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputOptionSelfCloseActionField_InvestorID, sizeof(self->data.InvestorID) );
		pInputOptionSelfCloseActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OptionSelfCloseActionRef = pInputOptionSelfCloseActionField_OptionSelfCloseActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pInputOptionSelfCloseActionField_OptionSelfCloseRef != NULL) {
		if(pInputOptionSelfCloseActionField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseRef, pInputOptionSelfCloseActionField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
		pInputOptionSelfCloseActionField_OptionSelfCloseRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputOptionSelfCloseActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pInputOptionSelfCloseActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pInputOptionSelfCloseActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pInputOptionSelfCloseActionField_ExchangeID != NULL) {
		if(pInputOptionSelfCloseActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputOptionSelfCloseActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputOptionSelfCloseActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pInputOptionSelfCloseActionField_OptionSelfCloseSysID != NULL) {
		if(pInputOptionSelfCloseActionField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseSysID, pInputOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
		pInputOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pInputOptionSelfCloseActionField_ActionFlag;

	//TThostFtdcUserIDType char[16]
	if(pInputOptionSelfCloseActionField_UserID != NULL) {
		if(pInputOptionSelfCloseActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputOptionSelfCloseActionField_UserID, sizeof(self->data.UserID) );
		pInputOptionSelfCloseActionField_UserID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputOptionSelfCloseActionField_reserve1 != NULL) {
		if(pInputOptionSelfCloseActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputOptionSelfCloseActionField_reserve1, sizeof(self->data.reserve1) );
		pInputOptionSelfCloseActionField_reserve1 = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputOptionSelfCloseActionField_InvestUnitID != NULL) {
		if(pInputOptionSelfCloseActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputOptionSelfCloseActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputOptionSelfCloseActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputOptionSelfCloseActionField_reserve2 != NULL) {
		if(pInputOptionSelfCloseActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputOptionSelfCloseActionField_reserve2, sizeof(self->data.reserve2) );
		pInputOptionSelfCloseActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputOptionSelfCloseActionField_MacAddress != NULL) {
		if(pInputOptionSelfCloseActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputOptionSelfCloseActionField_MacAddress, sizeof(self->data.MacAddress) );
		pInputOptionSelfCloseActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputOptionSelfCloseActionField_InstrumentID != NULL) {
		if(pInputOptionSelfCloseActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputOptionSelfCloseActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputOptionSelfCloseActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputOptionSelfCloseActionField_IPAddress != NULL) {
		if(pInputOptionSelfCloseActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputOptionSelfCloseActionField_IPAddress, sizeof(self->data.IPAddress) );
		pInputOptionSelfCloseActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputOptionSelfCloseActionField_dealloc(PyCThostFtdcInputOptionSelfCloseActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_repr(PyCThostFtdcInputOptionSelfCloseActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OptionSelfCloseActionRef", self->data.OptionSelfCloseActionRef
		, "OptionSelfCloseRef", self->data.OptionSelfCloseRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "OptionSelfCloseSysID", self->data.OptionSelfCloseSysID 
		, "ActionFlag", self->data.ActionFlag
		, "UserID", self->data.UserID 
		, "reserve1", self->data.reserve1 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_BrokerID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_InvestorID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseActionRef(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OptionSelfCloseActionRef);
#else 
	return PyInt_FromLong(self->data.OptionSelfCloseActionRef);
#endif 
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_RequestID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_FrontID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_SessionID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_ExchangeID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseSysID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_ActionFlag(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_UserID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_reserve1(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_InvestUnitID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_reserve2(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_MacAddress(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_InstrumentID(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseActionField_get_IPAddress(PyCThostFtdcInputOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcInputOptionSelfCloseActionField_set_BrokerID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_InvestorID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseActionRef(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseActionRef Expected int"); 
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
    self->data.OptionSelfCloseActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseRef, buf, sizeof(self->data.OptionSelfCloseRef));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseActionField_set_RequestID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int"); 
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
    self->data.RequestID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOptionSelfCloseActionField_set_FrontID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_SessionID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_ExchangeID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseSysID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseActionField_set_ActionFlag(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionFlag)) {
		PyErr_SetString(PyExc_ValueError, "ActionFlag must be less than 1 bytes");
		return -1;
	}
	self->data.ActionFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseActionField_set_UserID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_reserve1(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_InvestUnitID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_reserve2(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_MacAddress(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_InstrumentID(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseActionField_set_IPAddress(PyCThostFtdcInputOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInputOptionSelfCloseActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_BrokerID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_InvestorID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OptionSelfCloseActionRef", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseActionRef, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseActionRef, (char *)"OptionSelfCloseActionRef", NULL},
	 {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseRef, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_RequestID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_FrontID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_SessionID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_ExchangeID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_ActionFlag, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_UserID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_reserve1, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_InvestUnitID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_reserve2, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_MacAddress, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_InstrumentID, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputOptionSelfCloseActionField_get_IPAddress, (setter)PyCThostFtdcInputOptionSelfCloseActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOptionSelfCloseActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOptionSelfCloseActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputOptionSelfCloseActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOptionSelfCloseActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOptionSelfCloseActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputOptionSelfCloseActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOptionSelfCloseActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOptionSelfCloseActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOptionSelfCloseActionField_new,       /* tp_new */
};

int PyCThostFtdcInputOptionSelfCloseActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOptionSelfCloseActionField  */
	if (PyType_Ready(&PyCThostFtdcInputOptionSelfCloseActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOptionSelfCloseActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOptionSelfCloseActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOptionSelfCloseActionField", (PyObject *)&PyCThostFtdcInputOptionSelfCloseActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOptionSelfCloseActionField to module");
        Py_DECREF(&PyCThostFtdcInputOptionSelfCloseActionFieldType);
		return -1;
    }

    return 0;
}
