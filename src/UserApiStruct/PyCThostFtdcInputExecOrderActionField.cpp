
#include "PyCThostFtdcInputExecOrderActionField.h"



static PyObject *PyCThostFtdcInputExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputExecOrderActionField *self = (PyCThostFtdcInputExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputExecOrderActionField_init(PyCThostFtdcInputExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExecOrderActionRef", "ExecOrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "ExecOrderSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputExecOrderActionField_BrokerID = NULL;
	Py_ssize_t pInputExecOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputExecOrderActionField_InvestorID = NULL;
	Py_ssize_t pInputExecOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pInputExecOrderActionField_ExecOrderActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputExecOrderActionField_ExecOrderRef = NULL;
	Py_ssize_t pInputExecOrderActionField_ExecOrderRef_len = 0;

	//TThostFtdcRequestIDType int
	int pInputExecOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pInputExecOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pInputExecOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputExecOrderActionField_ExchangeID = NULL;
	Py_ssize_t pInputExecOrderActionField_ExchangeID_len = 0;

	//TThostFtdcExecOrderSysIDType char[21]
	const char *pInputExecOrderActionField_ExecOrderSysID = NULL;
	Py_ssize_t pInputExecOrderActionField_ExecOrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pInputExecOrderActionField_ActionFlag = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputExecOrderActionField_UserID = NULL;
	Py_ssize_t pInputExecOrderActionField_UserID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputExecOrderActionField_reserve1 = NULL;
	Py_ssize_t pInputExecOrderActionField_reserve1_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputExecOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pInputExecOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputExecOrderActionField_reserve2 = NULL;
	Py_ssize_t pInputExecOrderActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputExecOrderActionField_MacAddress = NULL;
	Py_ssize_t pInputExecOrderActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputExecOrderActionField_InstrumentID = NULL;
	Py_ssize_t pInputExecOrderActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputExecOrderActionField_IPAddress = NULL;
	Py_ssize_t pInputExecOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pInputExecOrderActionField_BrokerID, &pInputExecOrderActionField_BrokerID_len
		, &pInputExecOrderActionField_InvestorID, &pInputExecOrderActionField_InvestorID_len
		, &pInputExecOrderActionField_ExecOrderActionRef
		, &pInputExecOrderActionField_ExecOrderRef, &pInputExecOrderActionField_ExecOrderRef_len
		, &pInputExecOrderActionField_RequestID
		, &pInputExecOrderActionField_FrontID
		, &pInputExecOrderActionField_SessionID
		, &pInputExecOrderActionField_ExchangeID, &pInputExecOrderActionField_ExchangeID_len
		, &pInputExecOrderActionField_ExecOrderSysID, &pInputExecOrderActionField_ExecOrderSysID_len
		, &pInputExecOrderActionField_ActionFlag
		, &pInputExecOrderActionField_UserID, &pInputExecOrderActionField_UserID_len
		, &pInputExecOrderActionField_reserve1, &pInputExecOrderActionField_reserve1_len
		, &pInputExecOrderActionField_InvestUnitID, &pInputExecOrderActionField_InvestUnitID_len
		, &pInputExecOrderActionField_reserve2, &pInputExecOrderActionField_reserve2_len
		, &pInputExecOrderActionField_MacAddress, &pInputExecOrderActionField_MacAddress_len
		, &pInputExecOrderActionField_InstrumentID, &pInputExecOrderActionField_InstrumentID_len
		, &pInputExecOrderActionField_IPAddress, &pInputExecOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputExecOrderActionField_BrokerID != NULL) {
		if(pInputExecOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputExecOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pInputExecOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputExecOrderActionField_InvestorID != NULL) {
		if(pInputExecOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputExecOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pInputExecOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.ExecOrderActionRef = pInputExecOrderActionField_ExecOrderActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pInputExecOrderActionField_ExecOrderRef != NULL) {
		if(pInputExecOrderActionField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
			return -1;
		}
		strncpy(self->data.ExecOrderRef, pInputExecOrderActionField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
		pInputExecOrderActionField_ExecOrderRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputExecOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pInputExecOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pInputExecOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pInputExecOrderActionField_ExchangeID != NULL) {
		if(pInputExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputExecOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcExecOrderSysIDType char[21]
	if(pInputExecOrderActionField_ExecOrderSysID != NULL) {
		if(pInputExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
			return -1;
		}
		strncpy(self->data.ExecOrderSysID, pInputExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
		pInputExecOrderActionField_ExecOrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pInputExecOrderActionField_ActionFlag;

	//TThostFtdcUserIDType char[16]
	if(pInputExecOrderActionField_UserID != NULL) {
		if(pInputExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputExecOrderActionField_UserID, sizeof(self->data.UserID) );
		pInputExecOrderActionField_UserID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputExecOrderActionField_reserve1 != NULL) {
		if(pInputExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pInputExecOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputExecOrderActionField_InvestUnitID != NULL) {
		if(pInputExecOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputExecOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputExecOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputExecOrderActionField_reserve2 != NULL) {
		if(pInputExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pInputExecOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputExecOrderActionField_MacAddress != NULL) {
		if(pInputExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pInputExecOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputExecOrderActionField_InstrumentID != NULL) {
		if(pInputExecOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputExecOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputExecOrderActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputExecOrderActionField_IPAddress != NULL) {
		if(pInputExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pInputExecOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputExecOrderActionField_dealloc(PyCThostFtdcInputExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_repr(PyCThostFtdcInputExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_BrokerID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_InvestorID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExecOrderActionRef(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ExecOrderActionRef);
#else 
	return PyInt_FromLong(self->data.ExecOrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExecOrderRef(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderRef);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_RequestID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_FrontID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_SessionID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExchangeID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderSysID);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_ActionFlag(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_UserID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_reserve1(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_InvestUnitID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_reserve2(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_MacAddress(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_InstrumentID(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputExecOrderActionField_get_IPAddress(PyCThostFtdcInputExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcInputExecOrderActionField_set_BrokerID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_InvestorID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_ExecOrderActionRef(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_ExecOrderRef(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_RequestID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_FrontID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_SessionID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_ExchangeID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_ActionFlag(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_UserID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_reserve1(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_InvestUnitID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_reserve2(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_MacAddress(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_InstrumentID(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderActionField_set_IPAddress(PyCThostFtdcInputExecOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInputExecOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputExecOrderActionField_get_BrokerID, (setter)PyCThostFtdcInputExecOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputExecOrderActionField_get_InvestorID, (setter)PyCThostFtdcInputExecOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ExecOrderActionRef", (getter)PyCThostFtdcInputExecOrderActionField_get_ExecOrderActionRef, (setter)PyCThostFtdcInputExecOrderActionField_set_ExecOrderActionRef, (char *)"ExecOrderActionRef", NULL},
	 {(char *)"ExecOrderRef", (getter)PyCThostFtdcInputExecOrderActionField_get_ExecOrderRef, (setter)PyCThostFtdcInputExecOrderActionField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputExecOrderActionField_get_RequestID, (setter)PyCThostFtdcInputExecOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcInputExecOrderActionField_get_FrontID, (setter)PyCThostFtdcInputExecOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcInputExecOrderActionField_get_SessionID, (setter)PyCThostFtdcInputExecOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcInputExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExecOrderSysID", (getter)PyCThostFtdcInputExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcInputExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcInputExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcInputExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputExecOrderActionField_get_UserID, (setter)PyCThostFtdcInputExecOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputExecOrderActionField_get_reserve1, (setter)PyCThostFtdcInputExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputExecOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcInputExecOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputExecOrderActionField_get_reserve2, (setter)PyCThostFtdcInputExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcInputExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputExecOrderActionField_get_InstrumentID, (setter)PyCThostFtdcInputExecOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcInputExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcInputExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcInputExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputExecOrderActionField", (PyObject *)&PyCThostFtdcInputExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcInputExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
