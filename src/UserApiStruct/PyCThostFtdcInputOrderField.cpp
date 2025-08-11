
#include "PyCThostFtdcInputOrderField.h"



static PyObject *PyCThostFtdcInputOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOrderField *self = (PyCThostFtdcInputOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputOrderField_init(PyCThostFtdcInputOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "UserForceClose", "IsSwapOrder", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputOrderField_BrokerID = NULL;
	Py_ssize_t pInputOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputOrderField_InvestorID = NULL;
	Py_ssize_t pInputOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputOrderField_reserve1 = NULL;
	Py_ssize_t pInputOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputOrderField_OrderRef = NULL;
	Py_ssize_t pInputOrderField_OrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputOrderField_UserID = NULL;
	Py_ssize_t pInputOrderField_UserID_len = 0;

	//TThostFtdcOrderPriceTypeType char
	char pInputOrderField_OrderPriceType = 0;

	//TThostFtdcDirectionType char
	char pInputOrderField_Direction = 0;

	//TThostFtdcCombOffsetFlagType char[5]
	const char *pInputOrderField_CombOffsetFlag = NULL;
	Py_ssize_t pInputOrderField_CombOffsetFlag_len = 0;

	//TThostFtdcCombHedgeFlagType char[5]
	const char *pInputOrderField_CombHedgeFlag = NULL;
	Py_ssize_t pInputOrderField_CombHedgeFlag_len = 0;

	//TThostFtdcPriceType double
	double pInputOrderField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pInputOrderField_VolumeTotalOriginal = 0;

	//TThostFtdcTimeConditionType char
	char pInputOrderField_TimeCondition = 0;

	//TThostFtdcDateType char[9]
	const char *pInputOrderField_GTDDate = NULL;
	Py_ssize_t pInputOrderField_GTDDate_len = 0;

	//TThostFtdcVolumeConditionType char
	char pInputOrderField_VolumeCondition = 0;

	//TThostFtdcVolumeType int
	int pInputOrderField_MinVolume = 0;

	//TThostFtdcContingentConditionType char
	char pInputOrderField_ContingentCondition = 0;

	//TThostFtdcPriceType double
	double pInputOrderField_StopPrice = 0.0;

	//TThostFtdcForceCloseReasonType char
	char pInputOrderField_ForceCloseReason = 0;

	//TThostFtdcBoolType int
	int pInputOrderField_IsAutoSuspend = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pInputOrderField_BusinessUnit = NULL;
	Py_ssize_t pInputOrderField_BusinessUnit_len = 0;

	//TThostFtdcRequestIDType int
	int pInputOrderField_RequestID = 0;

	//TThostFtdcBoolType int
	int pInputOrderField_UserForceClose = 0;

	//TThostFtdcBoolType int
	int pInputOrderField_IsSwapOrder = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputOrderField_ExchangeID = NULL;
	Py_ssize_t pInputOrderField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputOrderField_InvestUnitID = NULL;
	Py_ssize_t pInputOrderField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pInputOrderField_AccountID = NULL;
	Py_ssize_t pInputOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pInputOrderField_CurrencyID = NULL;
	Py_ssize_t pInputOrderField_CurrencyID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pInputOrderField_ClientID = NULL;
	Py_ssize_t pInputOrderField_ClientID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputOrderField_reserve2 = NULL;
	Py_ssize_t pInputOrderField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputOrderField_MacAddress = NULL;
	Py_ssize_t pInputOrderField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputOrderField_InstrumentID = NULL;
	Py_ssize_t pInputOrderField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputOrderField_IPAddress = NULL;
	Py_ssize_t pInputOrderField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pInputOrderField_OrderMemo = NULL;
	Py_ssize_t pInputOrderField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pInputOrderField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iiiy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#iiis#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

		, &pInputOrderField_BrokerID, &pInputOrderField_BrokerID_len
		, &pInputOrderField_InvestorID, &pInputOrderField_InvestorID_len
		, &pInputOrderField_reserve1, &pInputOrderField_reserve1_len
		, &pInputOrderField_OrderRef, &pInputOrderField_OrderRef_len
		, &pInputOrderField_UserID, &pInputOrderField_UserID_len
		, &pInputOrderField_OrderPriceType
		, &pInputOrderField_Direction
		, &pInputOrderField_CombOffsetFlag, &pInputOrderField_CombOffsetFlag_len
		, &pInputOrderField_CombHedgeFlag, &pInputOrderField_CombHedgeFlag_len
		, &pInputOrderField_LimitPrice
		, &pInputOrderField_VolumeTotalOriginal
		, &pInputOrderField_TimeCondition
		, &pInputOrderField_GTDDate, &pInputOrderField_GTDDate_len
		, &pInputOrderField_VolumeCondition
		, &pInputOrderField_MinVolume
		, &pInputOrderField_ContingentCondition
		, &pInputOrderField_StopPrice
		, &pInputOrderField_ForceCloseReason
		, &pInputOrderField_IsAutoSuspend
		, &pInputOrderField_BusinessUnit, &pInputOrderField_BusinessUnit_len
		, &pInputOrderField_RequestID
		, &pInputOrderField_UserForceClose
		, &pInputOrderField_IsSwapOrder
		, &pInputOrderField_ExchangeID, &pInputOrderField_ExchangeID_len
		, &pInputOrderField_InvestUnitID, &pInputOrderField_InvestUnitID_len
		, &pInputOrderField_AccountID, &pInputOrderField_AccountID_len
		, &pInputOrderField_CurrencyID, &pInputOrderField_CurrencyID_len
		, &pInputOrderField_ClientID, &pInputOrderField_ClientID_len
		, &pInputOrderField_reserve2, &pInputOrderField_reserve2_len
		, &pInputOrderField_MacAddress, &pInputOrderField_MacAddress_len
		, &pInputOrderField_InstrumentID, &pInputOrderField_InstrumentID_len
		, &pInputOrderField_IPAddress, &pInputOrderField_IPAddress_len
		, &pInputOrderField_OrderMemo, &pInputOrderField_OrderMemo_len
		, &pInputOrderField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputOrderField_BrokerID != NULL) {
		if(pInputOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pInputOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputOrderField_InvestorID != NULL) {
		if(pInputOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pInputOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputOrderField_reserve1 != NULL) {
		if(pInputOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputOrderField_reserve1, sizeof(self->data.reserve1) );
		pInputOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pInputOrderField_OrderRef != NULL) {
		if(pInputOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pInputOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pInputOrderField_OrderRef, sizeof(self->data.OrderRef) );
		pInputOrderField_OrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pInputOrderField_UserID != NULL) {
		if(pInputOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputOrderField_UserID, sizeof(self->data.UserID) );
		pInputOrderField_UserID = NULL;
	}

	//TThostFtdcOrderPriceTypeType char
	self->data.OrderPriceType = pInputOrderField_OrderPriceType;

	//TThostFtdcDirectionType char
	self->data.Direction = pInputOrderField_Direction;

	//TThostFtdcCombOffsetFlagType char[5]
	if(pInputOrderField_CombOffsetFlag != NULL) {
		if(pInputOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
			PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", pInputOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
			return -1;
		}
		strncpy(self->data.CombOffsetFlag, pInputOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
		pInputOrderField_CombOffsetFlag = NULL;
	}

	//TThostFtdcCombHedgeFlagType char[5]
	if(pInputOrderField_CombHedgeFlag != NULL) {
		if(pInputOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
			PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", pInputOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
			return -1;
		}
		strncpy(self->data.CombHedgeFlag, pInputOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
		pInputOrderField_CombHedgeFlag = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LimitPrice = pInputOrderField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeTotalOriginal = pInputOrderField_VolumeTotalOriginal;

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pInputOrderField_TimeCondition;

	//TThostFtdcDateType char[9]
	if(pInputOrderField_GTDDate != NULL) {
		if(pInputOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
			PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", pInputOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
			return -1;
		}
		strncpy(self->data.GTDDate, pInputOrderField_GTDDate, sizeof(self->data.GTDDate) );
		pInputOrderField_GTDDate = NULL;
	}

	//TThostFtdcVolumeConditionType char
	self->data.VolumeCondition = pInputOrderField_VolumeCondition;

	//TThostFtdcVolumeType int
	self->data.MinVolume = pInputOrderField_MinVolume;

	//TThostFtdcContingentConditionType char
	self->data.ContingentCondition = pInputOrderField_ContingentCondition;

	//TThostFtdcPriceType double
	self->data.StopPrice = pInputOrderField_StopPrice;
	//TThostFtdcForceCloseReasonType char
	self->data.ForceCloseReason = pInputOrderField_ForceCloseReason;

	//TThostFtdcBoolType int
	self->data.IsAutoSuspend = pInputOrderField_IsAutoSuspend;

	//TThostFtdcBusinessUnitType char[21]
	if(pInputOrderField_BusinessUnit != NULL) {
		if(pInputOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pInputOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pInputOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pInputOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputOrderField_RequestID;

	//TThostFtdcBoolType int
	self->data.UserForceClose = pInputOrderField_UserForceClose;

	//TThostFtdcBoolType int
	self->data.IsSwapOrder = pInputOrderField_IsSwapOrder;

	//TThostFtdcExchangeIDType char[9]
	if(pInputOrderField_ExchangeID != NULL) {
		if(pInputOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputOrderField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputOrderField_InvestUnitID != NULL) {
		if(pInputOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pInputOrderField_AccountID != NULL) {
		if(pInputOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pInputOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pInputOrderField_AccountID, sizeof(self->data.AccountID) );
		pInputOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pInputOrderField_CurrencyID != NULL) {
		if(pInputOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pInputOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pInputOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pInputOrderField_CurrencyID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pInputOrderField_ClientID != NULL) {
		if(pInputOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pInputOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pInputOrderField_ClientID, sizeof(self->data.ClientID) );
		pInputOrderField_ClientID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputOrderField_reserve2 != NULL) {
		if(pInputOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputOrderField_reserve2, sizeof(self->data.reserve2) );
		pInputOrderField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputOrderField_MacAddress != NULL) {
		if(pInputOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pInputOrderField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputOrderField_InstrumentID != NULL) {
		if(pInputOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputOrderField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputOrderField_IPAddress != NULL) {
		if(pInputOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pInputOrderField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pInputOrderField_OrderMemo != NULL) {
		if(pInputOrderField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pInputOrderField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pInputOrderField_OrderMemo, sizeof(self->data.OrderMemo) );
		pInputOrderField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pInputOrderField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcInputOrderField_dealloc(PyCThostFtdcInputOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOrderField_repr(PyCThostFtdcInputOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "OrderRef", self->data.OrderRef 
		, "UserID", self->data.UserID 
		, "OrderPriceType", self->data.OrderPriceType
		, "Direction", self->data.Direction
		, "CombOffsetFlag", self->data.CombOffsetFlag 
		, "CombHedgeFlag", self->data.CombHedgeFlag 
		, "LimitPrice", self->data.LimitPrice
		, "VolumeTotalOriginal", self->data.VolumeTotalOriginal
		, "TimeCondition", self->data.TimeCondition
		, "GTDDate", self->data.GTDDate 
		, "VolumeCondition", self->data.VolumeCondition
		, "MinVolume", self->data.MinVolume
		, "ContingentCondition", self->data.ContingentCondition
		, "StopPrice", self->data.StopPrice
		, "ForceCloseReason", self->data.ForceCloseReason
		, "IsAutoSuspend", self->data.IsAutoSuspend
		, "BusinessUnit", self->data.BusinessUnit 
		, "RequestID", self->data.RequestID
		, "UserForceClose", self->data.UserForceClose
		, "IsSwapOrder", self->data.IsSwapOrder
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputOrderField_get_BrokerID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputOrderField_get_InvestorID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputOrderField_get_reserve1(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputOrderField_get_OrderRef(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcInputOrderField_get_UserID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputOrderField_get_OrderPriceType(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

static PyObject *PyCThostFtdcInputOrderField_get_Direction(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcInputOrderField_get_CombOffsetFlag(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombOffsetFlag);
}

static PyObject *PyCThostFtdcInputOrderField_get_CombHedgeFlag(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombHedgeFlag);
}

static PyObject *PyCThostFtdcInputOrderField_get_LimitPrice(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcInputOrderField_get_VolumeTotalOriginal(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else 
	return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif 
}

static PyObject *PyCThostFtdcInputOrderField_get_TimeCondition(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcInputOrderField_get_GTDDate(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.GTDDate);
}

static PyObject *PyCThostFtdcInputOrderField_get_VolumeCondition(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

static PyObject *PyCThostFtdcInputOrderField_get_MinVolume(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinVolume);
#else 
	return PyInt_FromLong(self->data.MinVolume);
#endif 
}

static PyObject *PyCThostFtdcInputOrderField_get_ContingentCondition(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

static PyObject *PyCThostFtdcInputOrderField_get_StopPrice(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StopPrice);
}

static PyObject *PyCThostFtdcInputOrderField_get_ForceCloseReason(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

static PyObject *PyCThostFtdcInputOrderField_get_IsAutoSuspend(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsAutoSuspend);
#else 
	return PyInt_FromLong(self->data.IsAutoSuspend);
#endif 
}

static PyObject *PyCThostFtdcInputOrderField_get_BusinessUnit(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcInputOrderField_get_RequestID(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputOrderField_get_UserForceClose(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UserForceClose);
#else 
	return PyInt_FromLong(self->data.UserForceClose);
#endif 
}

static PyObject *PyCThostFtdcInputOrderField_get_IsSwapOrder(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSwapOrder);
#else 
	return PyInt_FromLong(self->data.IsSwapOrder);
#endif 
}

static PyObject *PyCThostFtdcInputOrderField_get_ExchangeID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputOrderField_get_InvestUnitID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputOrderField_get_AccountID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcInputOrderField_get_CurrencyID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcInputOrderField_get_ClientID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcInputOrderField_get_reserve2(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputOrderField_get_MacAddress(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputOrderField_get_InstrumentID(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputOrderField_get_IPAddress(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcInputOrderField_get_OrderMemo(PyCThostFtdcInputOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcInputOrderField_get_SessionReqSeq(PyCThostFtdcInputOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcInputOrderField_set_BrokerID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_InvestorID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_reserve1(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_OrderRef(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
		PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
	return 0;
}

static int PyCThostFtdcInputOrderField_set_UserID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_OrderPriceType(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderPriceType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderPriceType)) {
		PyErr_SetString(PyExc_ValueError, "OrderPriceType must be less than 1 bytes");
		return -1;
	}
	self->data.OrderPriceType = *buf;
	return 0;
}

static int PyCThostFtdcInputOrderField_set_Direction(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_CombOffsetFlag(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombOffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "CombOffsetFlag must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.CombOffsetFlag, buf, sizeof(self->data.CombOffsetFlag));
	return 0;
}

static int PyCThostFtdcInputOrderField_set_CombHedgeFlag(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombHedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "CombHedgeFlag must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.CombHedgeFlag, buf, sizeof(self->data.CombHedgeFlag));
	return 0;
}

static int PyCThostFtdcInputOrderField_set_LimitPrice(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LimitPrice = buf;
    return 0;
}

static int PyCThostFtdcInputOrderField_set_VolumeTotalOriginal(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeTotalOriginal Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeTotalOriginal Expected int"); 
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
    self->data.VolumeTotalOriginal = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOrderField_set_TimeCondition(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_GTDDate(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "GTDDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
		PyErr_SetString(PyExc_ValueError, "GTDDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.GTDDate, buf, sizeof(self->data.GTDDate));
	return 0;
}

static int PyCThostFtdcInputOrderField_set_VolumeCondition(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "VolumeCondition Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.VolumeCondition)) {
		PyErr_SetString(PyExc_ValueError, "VolumeCondition must be less than 1 bytes");
		return -1;
	}
	self->data.VolumeCondition = *buf;
	return 0;
}

static int PyCThostFtdcInputOrderField_set_MinVolume(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "MinVolume Expected int"); 
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
    self->data.MinVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOrderField_set_ContingentCondition(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ContingentCondition Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ContingentCondition)) {
		PyErr_SetString(PyExc_ValueError, "ContingentCondition must be less than 1 bytes");
		return -1;
	}
	self->data.ContingentCondition = *buf;
	return 0;
}

static int PyCThostFtdcInputOrderField_set_StopPrice(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StopPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StopPrice = buf;
    return 0;
}

static int PyCThostFtdcInputOrderField_set_ForceCloseReason(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ForceCloseReason Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ForceCloseReason)) {
		PyErr_SetString(PyExc_ValueError, "ForceCloseReason must be less than 1 bytes");
		return -1;
	}
	self->data.ForceCloseReason = *buf;
	return 0;
}

static int PyCThostFtdcInputOrderField_set_IsAutoSuspend(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAutoSuspend Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsAutoSuspend Expected int"); 
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
    self->data.IsAutoSuspend = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOrderField_set_BusinessUnit(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_RequestID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_UserForceClose(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserForceClose Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "UserForceClose Expected int"); 
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
    self->data.UserForceClose = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOrderField_set_IsSwapOrder(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSwapOrder Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsSwapOrder Expected int"); 
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
    self->data.IsSwapOrder = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOrderField_set_ExchangeID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_InvestUnitID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_AccountID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcInputOrderField_set_CurrencyID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
	return 0;
}

static int PyCThostFtdcInputOrderField_set_ClientID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_reserve2(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_MacAddress(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_InstrumentID(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_IPAddress(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_OrderMemo(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderField_set_SessionReqSeq(PyCThostFtdcInputOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInputOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputOrderField_get_BrokerID, (setter)PyCThostFtdcInputOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputOrderField_get_InvestorID, (setter)PyCThostFtdcInputOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputOrderField_get_reserve1, (setter)PyCThostFtdcInputOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcInputOrderField_get_OrderRef, (setter)PyCThostFtdcInputOrderField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputOrderField_get_UserID, (setter)PyCThostFtdcInputOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OrderPriceType", (getter)PyCThostFtdcInputOrderField_get_OrderPriceType, (setter)PyCThostFtdcInputOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcInputOrderField_get_Direction, (setter)PyCThostFtdcInputOrderField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"CombOffsetFlag", (getter)PyCThostFtdcInputOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcInputOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcInputOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcInputOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcInputOrderField_get_LimitPrice, (setter)PyCThostFtdcInputOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcInputOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcInputOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcInputOrderField_get_TimeCondition, (setter)PyCThostFtdcInputOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"GTDDate", (getter)PyCThostFtdcInputOrderField_get_GTDDate, (setter)PyCThostFtdcInputOrderField_set_GTDDate, (char *)"GTDDate", NULL},
	 {(char *)"VolumeCondition", (getter)PyCThostFtdcInputOrderField_get_VolumeCondition, (setter)PyCThostFtdcInputOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
	 {(char *)"MinVolume", (getter)PyCThostFtdcInputOrderField_get_MinVolume, (setter)PyCThostFtdcInputOrderField_set_MinVolume, (char *)"MinVolume", NULL},
	 {(char *)"ContingentCondition", (getter)PyCThostFtdcInputOrderField_get_ContingentCondition, (setter)PyCThostFtdcInputOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
	 {(char *)"StopPrice", (getter)PyCThostFtdcInputOrderField_get_StopPrice, (setter)PyCThostFtdcInputOrderField_set_StopPrice, (char *)"StopPrice", NULL},
	 {(char *)"ForceCloseReason", (getter)PyCThostFtdcInputOrderField_get_ForceCloseReason, (setter)PyCThostFtdcInputOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
	 {(char *)"IsAutoSuspend", (getter)PyCThostFtdcInputOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcInputOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcInputOrderField_get_BusinessUnit, (setter)PyCThostFtdcInputOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputOrderField_get_RequestID, (setter)PyCThostFtdcInputOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"UserForceClose", (getter)PyCThostFtdcInputOrderField_get_UserForceClose, (setter)PyCThostFtdcInputOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
	 {(char *)"IsSwapOrder", (getter)PyCThostFtdcInputOrderField_get_IsSwapOrder, (setter)PyCThostFtdcInputOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputOrderField_get_ExchangeID, (setter)PyCThostFtdcInputOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputOrderField_get_InvestUnitID, (setter)PyCThostFtdcInputOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcInputOrderField_get_AccountID, (setter)PyCThostFtdcInputOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcInputOrderField_get_CurrencyID, (setter)PyCThostFtdcInputOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcInputOrderField_get_ClientID, (setter)PyCThostFtdcInputOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputOrderField_get_reserve2, (setter)PyCThostFtdcInputOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputOrderField_get_MacAddress, (setter)PyCThostFtdcInputOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputOrderField_get_InstrumentID, (setter)PyCThostFtdcInputOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputOrderField_get_IPAddress, (setter)PyCThostFtdcInputOrderField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcInputOrderField_get_OrderMemo, (setter)PyCThostFtdcInputOrderField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcInputOrderField_get_SessionReqSeq, (setter)PyCThostFtdcInputOrderField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOrderField",	/* tp_name */
	sizeof(PyCThostFtdcInputOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOrderField_repr,   /* tp_repr */
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
	"CThostFtdcInputOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOrderField_new,       /* tp_new */
};

int PyCThostFtdcInputOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOrderField  */
	if (PyType_Ready(&PyCThostFtdcInputOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOrderField", (PyObject *)&PyCThostFtdcInputOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOrderField to module");
        Py_DECREF(&PyCThostFtdcInputOrderFieldType);
		return -1;
    }

    return 0;
}
