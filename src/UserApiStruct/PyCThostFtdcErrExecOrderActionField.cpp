
#include "PyCThostFtdcErrExecOrderActionField.h"



static PyObject *PyCThostFtdcErrExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrExecOrderActionField *self = (PyCThostFtdcErrExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcErrExecOrderActionField_init(PyCThostFtdcErrExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "ErrorID", "ErrorMsg", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pErrExecOrderActionField_BrokerID = NULL;
	Py_ssize_t pErrExecOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pErrExecOrderActionField_InvestorID = NULL;
	Py_ssize_t pErrExecOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pErrExecOrderActionField_ExecOrderActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pErrExecOrderActionField_ExecOrderRef = NULL;
	Py_ssize_t pErrExecOrderActionField_ExecOrderRef_len = 0;

	//TThostFtdcRequestIDType int
	int pErrExecOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pErrExecOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pErrExecOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pErrExecOrderActionField_ExchangeID = NULL;
	Py_ssize_t pErrExecOrderActionField_ExchangeID_len = 0;

	//TThostFtdcExecOrderSysIDType char[21]
	const char *pErrExecOrderActionField_ExecOrderSysID = NULL;
	Py_ssize_t pErrExecOrderActionField_ExecOrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pErrExecOrderActionField_ActionFlag = 0;

	//TThostFtdcUserIDType char[16]
	const char *pErrExecOrderActionField_UserID = NULL;
	Py_ssize_t pErrExecOrderActionField_UserID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pErrExecOrderActionField_reserve1 = NULL;
	Py_ssize_t pErrExecOrderActionField_reserve1_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pErrExecOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pErrExecOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pErrExecOrderActionField_reserve2 = NULL;
	Py_ssize_t pErrExecOrderActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pErrExecOrderActionField_MacAddress = NULL;
	Py_ssize_t pErrExecOrderActionField_MacAddress_len = 0;

	//TThostFtdcErrorIDType int
	int pErrExecOrderActionField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pErrExecOrderActionField_ErrorMsg = NULL;
	Py_ssize_t pErrExecOrderActionField_ErrorMsg_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pErrExecOrderActionField_InstrumentID = NULL;
	Py_ssize_t pErrExecOrderActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pErrExecOrderActionField_IPAddress = NULL;
	Py_ssize_t pErrExecOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#is#s#s#", (char **)kwlist
#endif

		, &pErrExecOrderActionField_BrokerID, &pErrExecOrderActionField_BrokerID_len
		, &pErrExecOrderActionField_InvestorID, &pErrExecOrderActionField_InvestorID_len
		, &pErrExecOrderActionField_ExecOrderActionRef
		, &pErrExecOrderActionField_ExecOrderRef, &pErrExecOrderActionField_ExecOrderRef_len
		, &pErrExecOrderActionField_RequestID
		, &pErrExecOrderActionField_FrontID
		, &pErrExecOrderActionField_SessionID
		, &pErrExecOrderActionField_ExchangeID, &pErrExecOrderActionField_ExchangeID_len
		, &pErrExecOrderActionField_ExecOrderSysID, &pErrExecOrderActionField_ExecOrderSysID_len
		, &pErrExecOrderActionField_ActionFlag
		, &pErrExecOrderActionField_UserID, &pErrExecOrderActionField_UserID_len
		, &pErrExecOrderActionField_reserve1, &pErrExecOrderActionField_reserve1_len
		, &pErrExecOrderActionField_InvestUnitID, &pErrExecOrderActionField_InvestUnitID_len
		, &pErrExecOrderActionField_reserve2, &pErrExecOrderActionField_reserve2_len
		, &pErrExecOrderActionField_MacAddress, &pErrExecOrderActionField_MacAddress_len
		, &pErrExecOrderActionField_ErrorID
		, &pErrExecOrderActionField_ErrorMsg, &pErrExecOrderActionField_ErrorMsg_len
		, &pErrExecOrderActionField_InstrumentID, &pErrExecOrderActionField_InstrumentID_len
		, &pErrExecOrderActionField_IPAddress, &pErrExecOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pErrExecOrderActionField_BrokerID != NULL) {
		if(pErrExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pErrExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pErrExecOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pErrExecOrderActionField_InvestorID != NULL) {
		if(pErrExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pErrExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pErrExecOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.ExecOrderActionRef = pErrExecOrderActionField_ExecOrderActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pErrExecOrderActionField_ExecOrderRef != NULL) {
		if(pErrExecOrderActionField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
			return -1;
		}
		strncpy(self->data.ExecOrderRef, pErrExecOrderActionField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
		pErrExecOrderActionField_ExecOrderRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pErrExecOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pErrExecOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pErrExecOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pErrExecOrderActionField_ExchangeID != NULL) {
		if(pErrExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pErrExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pErrExecOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcExecOrderSysIDType char[21]
	if(pErrExecOrderActionField_ExecOrderSysID != NULL) {
		if(pErrExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
			return -1;
		}
		strncpy(self->data.ExecOrderSysID, pErrExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
		pErrExecOrderActionField_ExecOrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pErrExecOrderActionField_ActionFlag;

	//TThostFtdcUserIDType char[16]
	if(pErrExecOrderActionField_UserID != NULL) {
		if(pErrExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pErrExecOrderActionField_UserID, sizeof(self->data.UserID) );
		pErrExecOrderActionField_UserID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pErrExecOrderActionField_reserve1 != NULL) {
		if(pErrExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pErrExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pErrExecOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pErrExecOrderActionField_InvestUnitID != NULL) {
		if(pErrExecOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pErrExecOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pErrExecOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pErrExecOrderActionField_reserve2 != NULL) {
		if(pErrExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pErrExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pErrExecOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pErrExecOrderActionField_MacAddress != NULL) {
		if(pErrExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pErrExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pErrExecOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pErrExecOrderActionField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pErrExecOrderActionField_ErrorMsg != NULL) {
		if(pErrExecOrderActionField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pErrExecOrderActionField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pErrExecOrderActionField_ErrorMsg = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pErrExecOrderActionField_InstrumentID != NULL) {
		if(pErrExecOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pErrExecOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pErrExecOrderActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pErrExecOrderActionField_IPAddress != NULL) {
		if(pErrExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pErrExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pErrExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pErrExecOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcErrExecOrderActionField_dealloc(PyCThostFtdcErrExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_repr(PyCThostFtdcErrExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ExecOrderActionRef", self->data.ExecOrderActionRef
		, "ExecOrderRef", self->data.ExecOrderRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "ExecOrderSysID", self->data.ExecOrderSysID 
		, "ActionFlag", self->data.ActionFlag
		, "UserID", self->data.UserID 
		, "reserve1", self->data.reserve1 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_BrokerID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_InvestorID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExecOrderActionRef(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ExecOrderActionRef);
#else 
	return PyInt_FromLong(self->data.ExecOrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExecOrderRef(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderRef);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_RequestID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_FrontID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_SessionID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExchangeID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderSysID);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_ActionFlag(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_UserID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_reserve1(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_InvestUnitID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_reserve2(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_MacAddress(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_ErrorID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_ErrorMsg(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_InstrumentID(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcErrExecOrderActionField_get_IPAddress(PyCThostFtdcErrExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcErrExecOrderActionField_set_BrokerID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_InvestorID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_ExecOrderActionRef(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ExecOrderActionRef Expected int"); 
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
    self->data.ExecOrderActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcErrExecOrderActionField_set_ExecOrderRef(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderRef, buf, sizeof(self->data.ExecOrderRef));
	return 0;
}

static int PyCThostFtdcErrExecOrderActionField_set_RequestID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_FrontID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_SessionID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_ExchangeID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderSysID, buf, sizeof(self->data.ExecOrderSysID));
	return 0;
}

static int PyCThostFtdcErrExecOrderActionField_set_ActionFlag(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_UserID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_reserve1(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_InvestUnitID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_reserve2(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_MacAddress(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_ErrorID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected int"); 
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
    self->data.ErrorID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcErrExecOrderActionField_set_ErrorMsg(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
		PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
	return 0;
}

static int PyCThostFtdcErrExecOrderActionField_set_InstrumentID(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderActionField_set_IPAddress(PyCThostFtdcErrExecOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcErrExecOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcErrExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcErrExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcErrExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcErrExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExecOrderActionRef", (getter)PyCThostFtdcErrExecOrderActionField_get_ExecOrderActionRef, (setter)PyCThostFtdcErrExecOrderActionField_set_ExecOrderActionRef, (char *)"ExecOrderActionRef", NULL},
	 {(char *)"ExecOrderRef", (getter)PyCThostFtdcErrExecOrderActionField_get_ExecOrderRef, (setter)PyCThostFtdcErrExecOrderActionField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcErrExecOrderActionField_get_RequestID, (setter)PyCThostFtdcErrExecOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcErrExecOrderActionField_get_FrontID, (setter)PyCThostFtdcErrExecOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcErrExecOrderActionField_get_SessionID, (setter)PyCThostFtdcErrExecOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcErrExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcErrExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExecOrderSysID", (getter)PyCThostFtdcErrExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcErrExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcErrExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcErrExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcErrExecOrderActionField_get_UserID, (setter)PyCThostFtdcErrExecOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcErrExecOrderActionField_get_reserve1, (setter)PyCThostFtdcErrExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcErrExecOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcErrExecOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcErrExecOrderActionField_get_reserve2, (setter)PyCThostFtdcErrExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcErrExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcErrExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcErrExecOrderActionField_get_ErrorID, (setter)PyCThostFtdcErrExecOrderActionField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcErrExecOrderActionField_get_ErrorMsg, (setter)PyCThostFtdcErrExecOrderActionField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcErrExecOrderActionField_get_InstrumentID, (setter)PyCThostFtdcErrExecOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcErrExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcErrExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcErrExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcErrExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcErrExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcErrExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcErrExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcErrExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcErrExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcErrExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcErrExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcErrExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcErrExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcErrExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcErrExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcErrExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcErrExecOrderActionField", (PyObject *)&PyCThostFtdcErrExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcErrExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
