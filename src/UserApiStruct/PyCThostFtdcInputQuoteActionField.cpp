
#include "PyCThostFtdcInputQuoteActionField.h"



static PyObject *PyCThostFtdcInputQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputQuoteActionField *self = (PyCThostFtdcInputQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputQuoteActionField_init(PyCThostFtdcInputQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "QuoteActionRef", "QuoteRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "QuoteSysID", "ActionFlag", "UserID", "reserve1", "InvestUnitID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputQuoteActionField_BrokerID = NULL;
	Py_ssize_t pInputQuoteActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputQuoteActionField_InvestorID = NULL;
	Py_ssize_t pInputQuoteActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pInputQuoteActionField_QuoteActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputQuoteActionField_QuoteRef = NULL;
	Py_ssize_t pInputQuoteActionField_QuoteRef_len = 0;

	//TThostFtdcRequestIDType int
	int pInputQuoteActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pInputQuoteActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pInputQuoteActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputQuoteActionField_ExchangeID = NULL;
	Py_ssize_t pInputQuoteActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pInputQuoteActionField_QuoteSysID = NULL;
	Py_ssize_t pInputQuoteActionField_QuoteSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pInputQuoteActionField_ActionFlag = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputQuoteActionField_UserID = NULL;
	Py_ssize_t pInputQuoteActionField_UserID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputQuoteActionField_reserve1 = NULL;
	Py_ssize_t pInputQuoteActionField_reserve1_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputQuoteActionField_InvestUnitID = NULL;
	Py_ssize_t pInputQuoteActionField_InvestUnitID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pInputQuoteActionField_ClientID = NULL;
	Py_ssize_t pInputQuoteActionField_ClientID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputQuoteActionField_reserve2 = NULL;
	Py_ssize_t pInputQuoteActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputQuoteActionField_MacAddress = NULL;
	Py_ssize_t pInputQuoteActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputQuoteActionField_InstrumentID = NULL;
	Py_ssize_t pInputQuoteActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputQuoteActionField_IPAddress = NULL;
	Py_ssize_t pInputQuoteActionField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pInputQuoteActionField_OrderMemo = NULL;
	Py_ssize_t pInputQuoteActionField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pInputQuoteActionField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cy#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cs#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

		, &pInputQuoteActionField_BrokerID, &pInputQuoteActionField_BrokerID_len
		, &pInputQuoteActionField_InvestorID, &pInputQuoteActionField_InvestorID_len
		, &pInputQuoteActionField_QuoteActionRef
		, &pInputQuoteActionField_QuoteRef, &pInputQuoteActionField_QuoteRef_len
		, &pInputQuoteActionField_RequestID
		, &pInputQuoteActionField_FrontID
		, &pInputQuoteActionField_SessionID
		, &pInputQuoteActionField_ExchangeID, &pInputQuoteActionField_ExchangeID_len
		, &pInputQuoteActionField_QuoteSysID, &pInputQuoteActionField_QuoteSysID_len
		, &pInputQuoteActionField_ActionFlag
		, &pInputQuoteActionField_UserID, &pInputQuoteActionField_UserID_len
		, &pInputQuoteActionField_reserve1, &pInputQuoteActionField_reserve1_len
		, &pInputQuoteActionField_InvestUnitID, &pInputQuoteActionField_InvestUnitID_len
		, &pInputQuoteActionField_ClientID, &pInputQuoteActionField_ClientID_len
		, &pInputQuoteActionField_reserve2, &pInputQuoteActionField_reserve2_len
		, &pInputQuoteActionField_MacAddress, &pInputQuoteActionField_MacAddress_len
		, &pInputQuoteActionField_InstrumentID, &pInputQuoteActionField_InstrumentID_len
		, &pInputQuoteActionField_IPAddress, &pInputQuoteActionField_IPAddress_len
		, &pInputQuoteActionField_OrderMemo, &pInputQuoteActionField_OrderMemo_len
		, &pInputQuoteActionField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputQuoteActionField_BrokerID != NULL) {
		if(pInputQuoteActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputQuoteActionField_BrokerID, sizeof(self->data.BrokerID) );
		pInputQuoteActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputQuoteActionField_InvestorID != NULL) {
		if(pInputQuoteActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputQuoteActionField_InvestorID, sizeof(self->data.InvestorID) );
		pInputQuoteActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.QuoteActionRef = pInputQuoteActionField_QuoteActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pInputQuoteActionField_QuoteRef != NULL) {
		if(pInputQuoteActionField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
			PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
			return -1;
		}
		strncpy(self->data.QuoteRef, pInputQuoteActionField_QuoteRef, sizeof(self->data.QuoteRef) );
		pInputQuoteActionField_QuoteRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputQuoteActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pInputQuoteActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pInputQuoteActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pInputQuoteActionField_ExchangeID != NULL) {
		if(pInputQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputQuoteActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pInputQuoteActionField_QuoteSysID != NULL) {
		if(pInputQuoteActionField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
			return -1;
		}
		strncpy(self->data.QuoteSysID, pInputQuoteActionField_QuoteSysID, sizeof(self->data.QuoteSysID) );
		pInputQuoteActionField_QuoteSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pInputQuoteActionField_ActionFlag;

	//TThostFtdcUserIDType char[16]
	if(pInputQuoteActionField_UserID != NULL) {
		if(pInputQuoteActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputQuoteActionField_UserID, sizeof(self->data.UserID) );
		pInputQuoteActionField_UserID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputQuoteActionField_reserve1 != NULL) {
		if(pInputQuoteActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputQuoteActionField_reserve1, sizeof(self->data.reserve1) );
		pInputQuoteActionField_reserve1 = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputQuoteActionField_InvestUnitID != NULL) {
		if(pInputQuoteActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputQuoteActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputQuoteActionField_InvestUnitID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pInputQuoteActionField_ClientID != NULL) {
		if(pInputQuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pInputQuoteActionField_ClientID, sizeof(self->data.ClientID) );
		pInputQuoteActionField_ClientID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputQuoteActionField_reserve2 != NULL) {
		if(pInputQuoteActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputQuoteActionField_reserve2, sizeof(self->data.reserve2) );
		pInputQuoteActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputQuoteActionField_MacAddress != NULL) {
		if(pInputQuoteActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputQuoteActionField_MacAddress, sizeof(self->data.MacAddress) );
		pInputQuoteActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputQuoteActionField_InstrumentID != NULL) {
		if(pInputQuoteActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputQuoteActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputQuoteActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputQuoteActionField_IPAddress != NULL) {
		if(pInputQuoteActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputQuoteActionField_IPAddress, sizeof(self->data.IPAddress) );
		pInputQuoteActionField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pInputQuoteActionField_OrderMemo != NULL) {
		if(pInputQuoteActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pInputQuoteActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pInputQuoteActionField_OrderMemo, sizeof(self->data.OrderMemo) );
		pInputQuoteActionField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pInputQuoteActionField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcInputQuoteActionField_dealloc(PyCThostFtdcInputQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputQuoteActionField_repr(PyCThostFtdcInputQuoteActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "QuoteActionRef", self->data.QuoteActionRef
		, "QuoteRef", self->data.QuoteRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "QuoteSysID", self->data.QuoteSysID 
		, "ActionFlag", self->data.ActionFlag
		, "UserID", self->data.UserID 
		, "reserve1", self->data.reserve1 
		, "InvestUnitID", self->data.InvestUnitID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_BrokerID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_InvestorID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_QuoteActionRef(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.QuoteActionRef);
#else 
	return PyInt_FromLong(self->data.QuoteActionRef);
#endif 
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_QuoteRef(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteRef);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_RequestID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_FrontID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_SessionID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_ExchangeID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_QuoteSysID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteSysID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_ActionFlag(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_UserID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_reserve1(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_InvestUnitID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_ClientID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_reserve2(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_MacAddress(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_InstrumentID(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_IPAddress(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_OrderMemo(PyCThostFtdcInputQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcInputQuoteActionField_get_SessionReqSeq(PyCThostFtdcInputQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcInputQuoteActionField_set_BrokerID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_InvestorID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_QuoteActionRef(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "QuoteActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "QuoteActionRef Expected int"); 
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
    self->data.QuoteActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputQuoteActionField_set_QuoteRef(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
		PyErr_SetString(PyExc_ValueError, "QuoteRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.QuoteRef, buf, sizeof(self->data.QuoteRef));
	return 0;
}

static int PyCThostFtdcInputQuoteActionField_set_RequestID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_FrontID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_SessionID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_ExchangeID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_QuoteSysID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.QuoteSysID, buf, sizeof(self->data.QuoteSysID));
	return 0;
}

static int PyCThostFtdcInputQuoteActionField_set_ActionFlag(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_UserID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_reserve1(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_InvestUnitID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_ClientID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
		PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
	return 0;
}

static int PyCThostFtdcInputQuoteActionField_set_reserve2(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_MacAddress(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_InstrumentID(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_IPAddress(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteActionField_set_OrderMemo(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
		PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderMemo, buf, sizeof(self->data.OrderMemo));
	return 0;
}

static int PyCThostFtdcInputQuoteActionField_set_SessionReqSeq(PyCThostFtdcInputQuoteActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected int"); 
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
    self->data.SessionReqSeq = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcInputQuoteActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputQuoteActionField_get_BrokerID, (setter)PyCThostFtdcInputQuoteActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputQuoteActionField_get_InvestorID, (setter)PyCThostFtdcInputQuoteActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"QuoteActionRef", (getter)PyCThostFtdcInputQuoteActionField_get_QuoteActionRef, (setter)PyCThostFtdcInputQuoteActionField_set_QuoteActionRef, (char *)"QuoteActionRef", NULL},
	 {(char *)"QuoteRef", (getter)PyCThostFtdcInputQuoteActionField_get_QuoteRef, (setter)PyCThostFtdcInputQuoteActionField_set_QuoteRef, (char *)"QuoteRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputQuoteActionField_get_RequestID, (setter)PyCThostFtdcInputQuoteActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcInputQuoteActionField_get_FrontID, (setter)PyCThostFtdcInputQuoteActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcInputQuoteActionField_get_SessionID, (setter)PyCThostFtdcInputQuoteActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcInputQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"QuoteSysID", (getter)PyCThostFtdcInputQuoteActionField_get_QuoteSysID, (setter)PyCThostFtdcInputQuoteActionField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcInputQuoteActionField_get_ActionFlag, (setter)PyCThostFtdcInputQuoteActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputQuoteActionField_get_UserID, (setter)PyCThostFtdcInputQuoteActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputQuoteActionField_get_reserve1, (setter)PyCThostFtdcInputQuoteActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputQuoteActionField_get_InvestUnitID, (setter)PyCThostFtdcInputQuoteActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcInputQuoteActionField_get_ClientID, (setter)PyCThostFtdcInputQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputQuoteActionField_get_reserve2, (setter)PyCThostFtdcInputQuoteActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputQuoteActionField_get_MacAddress, (setter)PyCThostFtdcInputQuoteActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputQuoteActionField_get_InstrumentID, (setter)PyCThostFtdcInputQuoteActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputQuoteActionField_get_IPAddress, (setter)PyCThostFtdcInputQuoteActionField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcInputQuoteActionField_get_OrderMemo, (setter)PyCThostFtdcInputQuoteActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcInputQuoteActionField_get_SessionReqSeq, (setter)PyCThostFtdcInputQuoteActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcInputQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcInputQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputQuoteActionField", (PyObject *)&PyCThostFtdcInputQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcInputQuoteActionFieldType);
		return -1;
    }

    return 0;
}
