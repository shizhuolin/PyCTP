
#include "PyCThostFtdcInputQuoteField.h"



static PyObject *PyCThostFtdcInputQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputQuoteField *self = (PyCThostFtdcInputQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputQuoteField_init(PyCThostFtdcInputQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "QuoteRef", "UserID", "AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "AskOrderRef", "BidOrderRef", "ForQuoteSysID", "ExchangeID", "InvestUnitID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "ReplaceSysID", "TimeCondition", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputQuoteField_BrokerID = NULL;
	Py_ssize_t pInputQuoteField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputQuoteField_InvestorID = NULL;
	Py_ssize_t pInputQuoteField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputQuoteField_reserve1 = NULL;
	Py_ssize_t pInputQuoteField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputQuoteField_QuoteRef = NULL;
	Py_ssize_t pInputQuoteField_QuoteRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputQuoteField_UserID = NULL;
	Py_ssize_t pInputQuoteField_UserID_len = 0;

	//TThostFtdcPriceType double
	double pInputQuoteField_AskPrice = 0.0;

	//TThostFtdcPriceType double
	double pInputQuoteField_BidPrice = 0.0;

	//TThostFtdcVolumeType int
	int pInputQuoteField_AskVolume = 0;

	//TThostFtdcVolumeType int
	int pInputQuoteField_BidVolume = 0;

	//TThostFtdcRequestIDType int
	int pInputQuoteField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pInputQuoteField_BusinessUnit = NULL;
	Py_ssize_t pInputQuoteField_BusinessUnit_len = 0;

	//TThostFtdcOffsetFlagType char
	char pInputQuoteField_AskOffsetFlag = 0;

	//TThostFtdcOffsetFlagType char
	char pInputQuoteField_BidOffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pInputQuoteField_AskHedgeFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pInputQuoteField_BidHedgeFlag = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputQuoteField_AskOrderRef = NULL;
	Py_ssize_t pInputQuoteField_AskOrderRef_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputQuoteField_BidOrderRef = NULL;
	Py_ssize_t pInputQuoteField_BidOrderRef_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pInputQuoteField_ForQuoteSysID = NULL;
	Py_ssize_t pInputQuoteField_ForQuoteSysID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputQuoteField_ExchangeID = NULL;
	Py_ssize_t pInputQuoteField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputQuoteField_InvestUnitID = NULL;
	Py_ssize_t pInputQuoteField_InvestUnitID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pInputQuoteField_ClientID = NULL;
	Py_ssize_t pInputQuoteField_ClientID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputQuoteField_reserve2 = NULL;
	Py_ssize_t pInputQuoteField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputQuoteField_MacAddress = NULL;
	Py_ssize_t pInputQuoteField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputQuoteField_InstrumentID = NULL;
	Py_ssize_t pInputQuoteField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputQuoteField_IPAddress = NULL;
	Py_ssize_t pInputQuoteField_IPAddress_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pInputQuoteField_ReplaceSysID = NULL;
	Py_ssize_t pInputQuoteField_ReplaceSysID_len = 0;

	//TThostFtdcTimeConditionType char
	char pInputQuoteField_TimeCondition = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pInputQuoteField_OrderMemo = NULL;
	Py_ssize_t pInputQuoteField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pInputQuoteField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ddiiiy#ccccy#y#y#y#y#y#y#y#y#y#y#cy#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ddiiis#ccccs#s#s#s#s#s#s#s#s#s#s#cs#i", (char **)kwlist
#endif

		, &pInputQuoteField_BrokerID, &pInputQuoteField_BrokerID_len
		, &pInputQuoteField_InvestorID, &pInputQuoteField_InvestorID_len
		, &pInputQuoteField_reserve1, &pInputQuoteField_reserve1_len
		, &pInputQuoteField_QuoteRef, &pInputQuoteField_QuoteRef_len
		, &pInputQuoteField_UserID, &pInputQuoteField_UserID_len
		, &pInputQuoteField_AskPrice
		, &pInputQuoteField_BidPrice
		, &pInputQuoteField_AskVolume
		, &pInputQuoteField_BidVolume
		, &pInputQuoteField_RequestID
		, &pInputQuoteField_BusinessUnit, &pInputQuoteField_BusinessUnit_len
		, &pInputQuoteField_AskOffsetFlag
		, &pInputQuoteField_BidOffsetFlag
		, &pInputQuoteField_AskHedgeFlag
		, &pInputQuoteField_BidHedgeFlag
		, &pInputQuoteField_AskOrderRef, &pInputQuoteField_AskOrderRef_len
		, &pInputQuoteField_BidOrderRef, &pInputQuoteField_BidOrderRef_len
		, &pInputQuoteField_ForQuoteSysID, &pInputQuoteField_ForQuoteSysID_len
		, &pInputQuoteField_ExchangeID, &pInputQuoteField_ExchangeID_len
		, &pInputQuoteField_InvestUnitID, &pInputQuoteField_InvestUnitID_len
		, &pInputQuoteField_ClientID, &pInputQuoteField_ClientID_len
		, &pInputQuoteField_reserve2, &pInputQuoteField_reserve2_len
		, &pInputQuoteField_MacAddress, &pInputQuoteField_MacAddress_len
		, &pInputQuoteField_InstrumentID, &pInputQuoteField_InstrumentID_len
		, &pInputQuoteField_IPAddress, &pInputQuoteField_IPAddress_len
		, &pInputQuoteField_ReplaceSysID, &pInputQuoteField_ReplaceSysID_len
		, &pInputQuoteField_TimeCondition
		, &pInputQuoteField_OrderMemo, &pInputQuoteField_OrderMemo_len
		, &pInputQuoteField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputQuoteField_BrokerID != NULL) {
		if(pInputQuoteField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputQuoteField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputQuoteField_BrokerID, sizeof(self->data.BrokerID) );
		pInputQuoteField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputQuoteField_InvestorID != NULL) {
		if(pInputQuoteField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputQuoteField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputQuoteField_InvestorID, sizeof(self->data.InvestorID) );
		pInputQuoteField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputQuoteField_reserve1 != NULL) {
		if(pInputQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputQuoteField_reserve1, sizeof(self->data.reserve1) );
		pInputQuoteField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pInputQuoteField_QuoteRef != NULL) {
		if(pInputQuoteField_QuoteRef_len > (Py_ssize_t)sizeof(self->data.QuoteRef)) {
			PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is %zd)", pInputQuoteField_QuoteRef_len, (Py_ssize_t)sizeof(self->data.QuoteRef));
			return -1;
		}
		strncpy(self->data.QuoteRef, pInputQuoteField_QuoteRef, sizeof(self->data.QuoteRef) );
		pInputQuoteField_QuoteRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pInputQuoteField_UserID != NULL) {
		if(pInputQuoteField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputQuoteField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputQuoteField_UserID, sizeof(self->data.UserID) );
		pInputQuoteField_UserID = NULL;
	}

	//TThostFtdcPriceType double
	self->data.AskPrice = pInputQuoteField_AskPrice;
	//TThostFtdcPriceType double
	self->data.BidPrice = pInputQuoteField_BidPrice;
	//TThostFtdcVolumeType int
	self->data.AskVolume = pInputQuoteField_AskVolume;

	//TThostFtdcVolumeType int
	self->data.BidVolume = pInputQuoteField_BidVolume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputQuoteField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pInputQuoteField_BusinessUnit != NULL) {
		if(pInputQuoteField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pInputQuoteField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pInputQuoteField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pInputQuoteField_BusinessUnit = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.AskOffsetFlag = pInputQuoteField_AskOffsetFlag;

	//TThostFtdcOffsetFlagType char
	self->data.BidOffsetFlag = pInputQuoteField_BidOffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.AskHedgeFlag = pInputQuoteField_AskHedgeFlag;

	//TThostFtdcHedgeFlagType char
	self->data.BidHedgeFlag = pInputQuoteField_BidHedgeFlag;

	//TThostFtdcOrderRefType char[13]
	if(pInputQuoteField_AskOrderRef != NULL) {
		if(pInputQuoteField_AskOrderRef_len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
			PyErr_Format(PyExc_ValueError, "AskOrderRef too long: length=%zd (max allowed is %zd)", pInputQuoteField_AskOrderRef_len, (Py_ssize_t)sizeof(self->data.AskOrderRef));
			return -1;
		}
		strncpy(self->data.AskOrderRef, pInputQuoteField_AskOrderRef, sizeof(self->data.AskOrderRef) );
		pInputQuoteField_AskOrderRef = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pInputQuoteField_BidOrderRef != NULL) {
		if(pInputQuoteField_BidOrderRef_len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
			PyErr_Format(PyExc_ValueError, "BidOrderRef too long: length=%zd (max allowed is %zd)", pInputQuoteField_BidOrderRef_len, (Py_ssize_t)sizeof(self->data.BidOrderRef));
			return -1;
		}
		strncpy(self->data.BidOrderRef, pInputQuoteField_BidOrderRef, sizeof(self->data.BidOrderRef) );
		pInputQuoteField_BidOrderRef = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pInputQuoteField_ForQuoteSysID != NULL) {
		if(pInputQuoteField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", pInputQuoteField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
			return -1;
		}
		strncpy(self->data.ForQuoteSysID, pInputQuoteField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
		pInputQuoteField_ForQuoteSysID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pInputQuoteField_ExchangeID != NULL) {
		if(pInputQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputQuoteField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputQuoteField_InvestUnitID != NULL) {
		if(pInputQuoteField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputQuoteField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputQuoteField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputQuoteField_InvestUnitID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pInputQuoteField_ClientID != NULL) {
		if(pInputQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pInputQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pInputQuoteField_ClientID, sizeof(self->data.ClientID) );
		pInputQuoteField_ClientID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputQuoteField_reserve2 != NULL) {
		if(pInputQuoteField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputQuoteField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputQuoteField_reserve2, sizeof(self->data.reserve2) );
		pInputQuoteField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputQuoteField_MacAddress != NULL) {
		if(pInputQuoteField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputQuoteField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputQuoteField_MacAddress, sizeof(self->data.MacAddress) );
		pInputQuoteField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputQuoteField_InstrumentID != NULL) {
		if(pInputQuoteField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputQuoteField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputQuoteField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputQuoteField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputQuoteField_IPAddress != NULL) {
		if(pInputQuoteField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputQuoteField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputQuoteField_IPAddress, sizeof(self->data.IPAddress) );
		pInputQuoteField_IPAddress = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pInputQuoteField_ReplaceSysID != NULL) {
		if(pInputQuoteField_ReplaceSysID_len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
			PyErr_Format(PyExc_ValueError, "ReplaceSysID too long: length=%zd (max allowed is %zd)", pInputQuoteField_ReplaceSysID_len, (Py_ssize_t)sizeof(self->data.ReplaceSysID));
			return -1;
		}
		strncpy(self->data.ReplaceSysID, pInputQuoteField_ReplaceSysID, sizeof(self->data.ReplaceSysID) );
		pInputQuoteField_ReplaceSysID = NULL;
	}

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pInputQuoteField_TimeCondition;

	//TThostFtdcOrderMemoType char[13]
	if(pInputQuoteField_OrderMemo != NULL) {
		if(pInputQuoteField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pInputQuoteField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pInputQuoteField_OrderMemo, sizeof(self->data.OrderMemo) );
		pInputQuoteField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pInputQuoteField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcInputQuoteField_dealloc(PyCThostFtdcInputQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputQuoteField_repr(PyCThostFtdcInputQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:d,s:d,s:i,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "QuoteRef", self->data.QuoteRef 
		, "UserID", self->data.UserID 
		, "AskPrice", self->data.AskPrice
		, "BidPrice", self->data.BidPrice
		, "AskVolume", self->data.AskVolume
		, "BidVolume", self->data.BidVolume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "AskOffsetFlag", self->data.AskOffsetFlag
		, "BidOffsetFlag", self->data.BidOffsetFlag
		, "AskHedgeFlag", self->data.AskHedgeFlag
		, "BidHedgeFlag", self->data.BidHedgeFlag
		, "AskOrderRef", self->data.AskOrderRef 
		, "BidOrderRef", self->data.BidOrderRef 
		, "ForQuoteSysID", self->data.ForQuoteSysID 
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 
		, "ReplaceSysID", self->data.ReplaceSysID 
		, "TimeCondition", self->data.TimeCondition
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputQuoteField_get_BrokerID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_InvestorID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_reserve1(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputQuoteField_get_QuoteRef(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteRef);
}

static PyObject *PyCThostFtdcInputQuoteField_get_UserID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_AskPrice(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice);
}

static PyObject *PyCThostFtdcInputQuoteField_get_BidPrice(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice);
}

static PyObject *PyCThostFtdcInputQuoteField_get_AskVolume(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume);
#else 
	return PyInt_FromLong(self->data.AskVolume);
#endif 
}

static PyObject *PyCThostFtdcInputQuoteField_get_BidVolume(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume);
#else 
	return PyInt_FromLong(self->data.BidVolume);
#endif 
}

static PyObject *PyCThostFtdcInputQuoteField_get_RequestID(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputQuoteField_get_BusinessUnit(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcInputQuoteField_get_AskOffsetFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AskOffsetFlag), 1);
}

static PyObject *PyCThostFtdcInputQuoteField_get_BidOffsetFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BidOffsetFlag), 1);
}

static PyObject *PyCThostFtdcInputQuoteField_get_AskHedgeFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AskHedgeFlag), 1);
}

static PyObject *PyCThostFtdcInputQuoteField_get_BidHedgeFlag(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BidHedgeFlag), 1);
}

static PyObject *PyCThostFtdcInputQuoteField_get_AskOrderRef(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.AskOrderRef);
}

static PyObject *PyCThostFtdcInputQuoteField_get_BidOrderRef(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.BidOrderRef);
}

static PyObject *PyCThostFtdcInputQuoteField_get_ForQuoteSysID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ForQuoteSysID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_ExchangeID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_InvestUnitID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_ClientID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_reserve2(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputQuoteField_get_MacAddress(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputQuoteField_get_InstrumentID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_IPAddress(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcInputQuoteField_get_ReplaceSysID(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.ReplaceSysID);
}

static PyObject *PyCThostFtdcInputQuoteField_get_TimeCondition(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcInputQuoteField_get_OrderMemo(PyCThostFtdcInputQuoteField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcInputQuoteField_get_SessionReqSeq(PyCThostFtdcInputQuoteField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcInputQuoteField_set_BrokerID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_InvestorID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_reserve1(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_QuoteRef(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_UserID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_AskPrice(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice = buf;
    return 0;
}

static int PyCThostFtdcInputQuoteField_set_BidPrice(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice = buf;
    return 0;
}

static int PyCThostFtdcInputQuoteField_set_AskVolume(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AskVolume Expected int"); 
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
    self->data.AskVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputQuoteField_set_BidVolume(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BidVolume Expected int"); 
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
    self->data.BidVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputQuoteField_set_RequestID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_BusinessUnit(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
		PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_AskOffsetFlag(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AskOffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AskOffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "AskOffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.AskOffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_BidOffsetFlag(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BidOffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BidOffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "BidOffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.BidOffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_AskHedgeFlag(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AskHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AskHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "AskHedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.AskHedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_BidHedgeFlag(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BidHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BidHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "BidHedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.BidHedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_AskOrderRef(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AskOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AskOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "AskOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AskOrderRef, buf, sizeof(self->data.AskOrderRef));
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_BidOrderRef(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BidOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BidOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "BidOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.BidOrderRef, buf, sizeof(self->data.BidOrderRef));
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_ForQuoteSysID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
		PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ForQuoteSysID, buf, sizeof(self->data.ForQuoteSysID));
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_ExchangeID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_InvestUnitID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_ClientID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_reserve2(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_MacAddress(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_InstrumentID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_IPAddress(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_ReplaceSysID(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ReplaceSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ReplaceSysID)) {
		PyErr_SetString(PyExc_ValueError, "ReplaceSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ReplaceSysID, buf, sizeof(self->data.ReplaceSysID));
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_TimeCondition(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TimeCondition)) {
		PyErr_SetString(PyExc_ValueError, "TimeCondition must be less than 1 bytes");
		return -1;
	}
	self->data.TimeCondition = *buf;
	return 0;
}

static int PyCThostFtdcInputQuoteField_set_OrderMemo(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputQuoteField_set_SessionReqSeq(PyCThostFtdcInputQuoteField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInputQuoteField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputQuoteField_get_BrokerID, (setter)PyCThostFtdcInputQuoteField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputQuoteField_get_InvestorID, (setter)PyCThostFtdcInputQuoteField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputQuoteField_get_reserve1, (setter)PyCThostFtdcInputQuoteField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"QuoteRef", (getter)PyCThostFtdcInputQuoteField_get_QuoteRef, (setter)PyCThostFtdcInputQuoteField_set_QuoteRef, (char *)"QuoteRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputQuoteField_get_UserID, (setter)PyCThostFtdcInputQuoteField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"AskPrice", (getter)PyCThostFtdcInputQuoteField_get_AskPrice, (setter)PyCThostFtdcInputQuoteField_set_AskPrice, (char *)"AskPrice", NULL},
	 {(char *)"BidPrice", (getter)PyCThostFtdcInputQuoteField_get_BidPrice, (setter)PyCThostFtdcInputQuoteField_set_BidPrice, (char *)"BidPrice", NULL},
	 {(char *)"AskVolume", (getter)PyCThostFtdcInputQuoteField_get_AskVolume, (setter)PyCThostFtdcInputQuoteField_set_AskVolume, (char *)"AskVolume", NULL},
	 {(char *)"BidVolume", (getter)PyCThostFtdcInputQuoteField_get_BidVolume, (setter)PyCThostFtdcInputQuoteField_set_BidVolume, (char *)"BidVolume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputQuoteField_get_RequestID, (setter)PyCThostFtdcInputQuoteField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcInputQuoteField_get_BusinessUnit, (setter)PyCThostFtdcInputQuoteField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"AskOffsetFlag", (getter)PyCThostFtdcInputQuoteField_get_AskOffsetFlag, (setter)PyCThostFtdcInputQuoteField_set_AskOffsetFlag, (char *)"AskOffsetFlag", NULL},
	 {(char *)"BidOffsetFlag", (getter)PyCThostFtdcInputQuoteField_get_BidOffsetFlag, (setter)PyCThostFtdcInputQuoteField_set_BidOffsetFlag, (char *)"BidOffsetFlag", NULL},
	 {(char *)"AskHedgeFlag", (getter)PyCThostFtdcInputQuoteField_get_AskHedgeFlag, (setter)PyCThostFtdcInputQuoteField_set_AskHedgeFlag, (char *)"AskHedgeFlag", NULL},
	 {(char *)"BidHedgeFlag", (getter)PyCThostFtdcInputQuoteField_get_BidHedgeFlag, (setter)PyCThostFtdcInputQuoteField_set_BidHedgeFlag, (char *)"BidHedgeFlag", NULL},
	 {(char *)"AskOrderRef", (getter)PyCThostFtdcInputQuoteField_get_AskOrderRef, (setter)PyCThostFtdcInputQuoteField_set_AskOrderRef, (char *)"AskOrderRef", NULL},
	 {(char *)"BidOrderRef", (getter)PyCThostFtdcInputQuoteField_get_BidOrderRef, (setter)PyCThostFtdcInputQuoteField_set_BidOrderRef, (char *)"BidOrderRef", NULL},
	 {(char *)"ForQuoteSysID", (getter)PyCThostFtdcInputQuoteField_get_ForQuoteSysID, (setter)PyCThostFtdcInputQuoteField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputQuoteField_get_ExchangeID, (setter)PyCThostFtdcInputQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputQuoteField_get_InvestUnitID, (setter)PyCThostFtdcInputQuoteField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcInputQuoteField_get_ClientID, (setter)PyCThostFtdcInputQuoteField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputQuoteField_get_reserve2, (setter)PyCThostFtdcInputQuoteField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputQuoteField_get_MacAddress, (setter)PyCThostFtdcInputQuoteField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputQuoteField_get_InstrumentID, (setter)PyCThostFtdcInputQuoteField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputQuoteField_get_IPAddress, (setter)PyCThostFtdcInputQuoteField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"ReplaceSysID", (getter)PyCThostFtdcInputQuoteField_get_ReplaceSysID, (setter)PyCThostFtdcInputQuoteField_set_ReplaceSysID, (char *)"ReplaceSysID", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcInputQuoteField_get_TimeCondition, (setter)PyCThostFtdcInputQuoteField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcInputQuoteField_get_OrderMemo, (setter)PyCThostFtdcInputQuoteField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcInputQuoteField_get_SessionReqSeq, (setter)PyCThostFtdcInputQuoteField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcInputQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcInputQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputQuoteField_new,       /* tp_new */
};

int PyCThostFtdcInputQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputQuoteField  */
	if (PyType_Ready(&PyCThostFtdcInputQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputQuoteField", (PyObject *)&PyCThostFtdcInputQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputQuoteField to module");
        Py_DECREF(&PyCThostFtdcInputQuoteFieldType);
		return -1;
    }

    return 0;
}
