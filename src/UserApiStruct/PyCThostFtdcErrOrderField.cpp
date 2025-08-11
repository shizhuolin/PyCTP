
#include "PyCThostFtdcErrOrderField.h"



static PyObject *PyCThostFtdcErrOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrOrderField *self = (PyCThostFtdcErrOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcErrOrderField_init(PyCThostFtdcErrOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "UserForceClose", "ErrorID", "ErrorMsg", "IsSwapOrder", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pErrOrderField_BrokerID = NULL;
	Py_ssize_t pErrOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pErrOrderField_InvestorID = NULL;
	Py_ssize_t pErrOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pErrOrderField_reserve1 = NULL;
	Py_ssize_t pErrOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pErrOrderField_OrderRef = NULL;
	Py_ssize_t pErrOrderField_OrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pErrOrderField_UserID = NULL;
	Py_ssize_t pErrOrderField_UserID_len = 0;

	//TThostFtdcOrderPriceTypeType char
	char pErrOrderField_OrderPriceType = 0;

	//TThostFtdcDirectionType char
	char pErrOrderField_Direction = 0;

	//TThostFtdcCombOffsetFlagType char[5]
	const char *pErrOrderField_CombOffsetFlag = NULL;
	Py_ssize_t pErrOrderField_CombOffsetFlag_len = 0;

	//TThostFtdcCombHedgeFlagType char[5]
	const char *pErrOrderField_CombHedgeFlag = NULL;
	Py_ssize_t pErrOrderField_CombHedgeFlag_len = 0;

	//TThostFtdcPriceType double
	double pErrOrderField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pErrOrderField_VolumeTotalOriginal = 0;

	//TThostFtdcTimeConditionType char
	char pErrOrderField_TimeCondition = 0;

	//TThostFtdcDateType char[9]
	const char *pErrOrderField_GTDDate = NULL;
	Py_ssize_t pErrOrderField_GTDDate_len = 0;

	//TThostFtdcVolumeConditionType char
	char pErrOrderField_VolumeCondition = 0;

	//TThostFtdcVolumeType int
	int pErrOrderField_MinVolume = 0;

	//TThostFtdcContingentConditionType char
	char pErrOrderField_ContingentCondition = 0;

	//TThostFtdcPriceType double
	double pErrOrderField_StopPrice = 0.0;

	//TThostFtdcForceCloseReasonType char
	char pErrOrderField_ForceCloseReason = 0;

	//TThostFtdcBoolType int
	int pErrOrderField_IsAutoSuspend = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pErrOrderField_BusinessUnit = NULL;
	Py_ssize_t pErrOrderField_BusinessUnit_len = 0;

	//TThostFtdcRequestIDType int
	int pErrOrderField_RequestID = 0;

	//TThostFtdcBoolType int
	int pErrOrderField_UserForceClose = 0;

	//TThostFtdcErrorIDType int
	int pErrOrderField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pErrOrderField_ErrorMsg = NULL;
	Py_ssize_t pErrOrderField_ErrorMsg_len = 0;

	//TThostFtdcBoolType int
	int pErrOrderField_IsSwapOrder = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pErrOrderField_ExchangeID = NULL;
	Py_ssize_t pErrOrderField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pErrOrderField_InvestUnitID = NULL;
	Py_ssize_t pErrOrderField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pErrOrderField_AccountID = NULL;
	Py_ssize_t pErrOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pErrOrderField_CurrencyID = NULL;
	Py_ssize_t pErrOrderField_CurrencyID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pErrOrderField_ClientID = NULL;
	Py_ssize_t pErrOrderField_ClientID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pErrOrderField_reserve2 = NULL;
	Py_ssize_t pErrOrderField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pErrOrderField_MacAddress = NULL;
	Py_ssize_t pErrOrderField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pErrOrderField_InstrumentID = NULL;
	Py_ssize_t pErrOrderField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pErrOrderField_IPAddress = NULL;
	Py_ssize_t pErrOrderField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pErrOrderField_OrderMemo = NULL;
	Py_ssize_t pErrOrderField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pErrOrderField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iiiy#iy#y#y#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#iiis#is#s#s#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

		, &pErrOrderField_BrokerID, &pErrOrderField_BrokerID_len
		, &pErrOrderField_InvestorID, &pErrOrderField_InvestorID_len
		, &pErrOrderField_reserve1, &pErrOrderField_reserve1_len
		, &pErrOrderField_OrderRef, &pErrOrderField_OrderRef_len
		, &pErrOrderField_UserID, &pErrOrderField_UserID_len
		, &pErrOrderField_OrderPriceType
		, &pErrOrderField_Direction
		, &pErrOrderField_CombOffsetFlag, &pErrOrderField_CombOffsetFlag_len
		, &pErrOrderField_CombHedgeFlag, &pErrOrderField_CombHedgeFlag_len
		, &pErrOrderField_LimitPrice
		, &pErrOrderField_VolumeTotalOriginal
		, &pErrOrderField_TimeCondition
		, &pErrOrderField_GTDDate, &pErrOrderField_GTDDate_len
		, &pErrOrderField_VolumeCondition
		, &pErrOrderField_MinVolume
		, &pErrOrderField_ContingentCondition
		, &pErrOrderField_StopPrice
		, &pErrOrderField_ForceCloseReason
		, &pErrOrderField_IsAutoSuspend
		, &pErrOrderField_BusinessUnit, &pErrOrderField_BusinessUnit_len
		, &pErrOrderField_RequestID
		, &pErrOrderField_UserForceClose
		, &pErrOrderField_ErrorID
		, &pErrOrderField_ErrorMsg, &pErrOrderField_ErrorMsg_len
		, &pErrOrderField_IsSwapOrder
		, &pErrOrderField_ExchangeID, &pErrOrderField_ExchangeID_len
		, &pErrOrderField_InvestUnitID, &pErrOrderField_InvestUnitID_len
		, &pErrOrderField_AccountID, &pErrOrderField_AccountID_len
		, &pErrOrderField_CurrencyID, &pErrOrderField_CurrencyID_len
		, &pErrOrderField_ClientID, &pErrOrderField_ClientID_len
		, &pErrOrderField_reserve2, &pErrOrderField_reserve2_len
		, &pErrOrderField_MacAddress, &pErrOrderField_MacAddress_len
		, &pErrOrderField_InstrumentID, &pErrOrderField_InstrumentID_len
		, &pErrOrderField_IPAddress, &pErrOrderField_IPAddress_len
		, &pErrOrderField_OrderMemo, &pErrOrderField_OrderMemo_len
		, &pErrOrderField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pErrOrderField_BrokerID != NULL) {
		if(pErrOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pErrOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pErrOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pErrOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pErrOrderField_InvestorID != NULL) {
		if(pErrOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pErrOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pErrOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pErrOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pErrOrderField_reserve1 != NULL) {
		if(pErrOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pErrOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pErrOrderField_reserve1, sizeof(self->data.reserve1) );
		pErrOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pErrOrderField_OrderRef != NULL) {
		if(pErrOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pErrOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pErrOrderField_OrderRef, sizeof(self->data.OrderRef) );
		pErrOrderField_OrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pErrOrderField_UserID != NULL) {
		if(pErrOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pErrOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pErrOrderField_UserID, sizeof(self->data.UserID) );
		pErrOrderField_UserID = NULL;
	}

	//TThostFtdcOrderPriceTypeType char
	self->data.OrderPriceType = pErrOrderField_OrderPriceType;

	//TThostFtdcDirectionType char
	self->data.Direction = pErrOrderField_Direction;

	//TThostFtdcCombOffsetFlagType char[5]
	if(pErrOrderField_CombOffsetFlag != NULL) {
		if(pErrOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
			PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", pErrOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
			return -1;
		}
		strncpy(self->data.CombOffsetFlag, pErrOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
		pErrOrderField_CombOffsetFlag = NULL;
	}

	//TThostFtdcCombHedgeFlagType char[5]
	if(pErrOrderField_CombHedgeFlag != NULL) {
		if(pErrOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
			PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", pErrOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
			return -1;
		}
		strncpy(self->data.CombHedgeFlag, pErrOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
		pErrOrderField_CombHedgeFlag = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LimitPrice = pErrOrderField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeTotalOriginal = pErrOrderField_VolumeTotalOriginal;

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pErrOrderField_TimeCondition;

	//TThostFtdcDateType char[9]
	if(pErrOrderField_GTDDate != NULL) {
		if(pErrOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
			PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", pErrOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
			return -1;
		}
		strncpy(self->data.GTDDate, pErrOrderField_GTDDate, sizeof(self->data.GTDDate) );
		pErrOrderField_GTDDate = NULL;
	}

	//TThostFtdcVolumeConditionType char
	self->data.VolumeCondition = pErrOrderField_VolumeCondition;

	//TThostFtdcVolumeType int
	self->data.MinVolume = pErrOrderField_MinVolume;

	//TThostFtdcContingentConditionType char
	self->data.ContingentCondition = pErrOrderField_ContingentCondition;

	//TThostFtdcPriceType double
	self->data.StopPrice = pErrOrderField_StopPrice;
	//TThostFtdcForceCloseReasonType char
	self->data.ForceCloseReason = pErrOrderField_ForceCloseReason;

	//TThostFtdcBoolType int
	self->data.IsAutoSuspend = pErrOrderField_IsAutoSuspend;

	//TThostFtdcBusinessUnitType char[21]
	if(pErrOrderField_BusinessUnit != NULL) {
		if(pErrOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pErrOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pErrOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pErrOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pErrOrderField_RequestID;

	//TThostFtdcBoolType int
	self->data.UserForceClose = pErrOrderField_UserForceClose;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pErrOrderField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pErrOrderField_ErrorMsg != NULL) {
		if(pErrOrderField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pErrOrderField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pErrOrderField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pErrOrderField_ErrorMsg = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSwapOrder = pErrOrderField_IsSwapOrder;

	//TThostFtdcExchangeIDType char[9]
	if(pErrOrderField_ExchangeID != NULL) {
		if(pErrOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pErrOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pErrOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pErrOrderField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pErrOrderField_InvestUnitID != NULL) {
		if(pErrOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pErrOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pErrOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pErrOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pErrOrderField_AccountID != NULL) {
		if(pErrOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pErrOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pErrOrderField_AccountID, sizeof(self->data.AccountID) );
		pErrOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pErrOrderField_CurrencyID != NULL) {
		if(pErrOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pErrOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pErrOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pErrOrderField_CurrencyID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pErrOrderField_ClientID != NULL) {
		if(pErrOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pErrOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pErrOrderField_ClientID, sizeof(self->data.ClientID) );
		pErrOrderField_ClientID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pErrOrderField_reserve2 != NULL) {
		if(pErrOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pErrOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pErrOrderField_reserve2, sizeof(self->data.reserve2) );
		pErrOrderField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pErrOrderField_MacAddress != NULL) {
		if(pErrOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pErrOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pErrOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pErrOrderField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pErrOrderField_InstrumentID != NULL) {
		if(pErrOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pErrOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pErrOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pErrOrderField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pErrOrderField_IPAddress != NULL) {
		if(pErrOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pErrOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pErrOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pErrOrderField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pErrOrderField_OrderMemo != NULL) {
		if(pErrOrderField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pErrOrderField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pErrOrderField_OrderMemo, sizeof(self->data.OrderMemo) );
		pErrOrderField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pErrOrderField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcErrOrderField_dealloc(PyCThostFtdcErrOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcErrOrderField_repr(PyCThostFtdcErrOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:i,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:i,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcErrOrderField_get_BrokerID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcErrOrderField_get_InvestorID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcErrOrderField_get_reserve1(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcErrOrderField_get_OrderRef(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcErrOrderField_get_UserID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcErrOrderField_get_OrderPriceType(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

static PyObject *PyCThostFtdcErrOrderField_get_Direction(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcErrOrderField_get_CombOffsetFlag(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombOffsetFlag);
}

static PyObject *PyCThostFtdcErrOrderField_get_CombHedgeFlag(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombHedgeFlag);
}

static PyObject *PyCThostFtdcErrOrderField_get_LimitPrice(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcErrOrderField_get_VolumeTotalOriginal(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else 
	return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif 
}

static PyObject *PyCThostFtdcErrOrderField_get_TimeCondition(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcErrOrderField_get_GTDDate(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.GTDDate);
}

static PyObject *PyCThostFtdcErrOrderField_get_VolumeCondition(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

static PyObject *PyCThostFtdcErrOrderField_get_MinVolume(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinVolume);
#else 
	return PyInt_FromLong(self->data.MinVolume);
#endif 
}

static PyObject *PyCThostFtdcErrOrderField_get_ContingentCondition(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

static PyObject *PyCThostFtdcErrOrderField_get_StopPrice(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StopPrice);
}

static PyObject *PyCThostFtdcErrOrderField_get_ForceCloseReason(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

static PyObject *PyCThostFtdcErrOrderField_get_IsAutoSuspend(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsAutoSuspend);
#else 
	return PyInt_FromLong(self->data.IsAutoSuspend);
#endif 
}

static PyObject *PyCThostFtdcErrOrderField_get_BusinessUnit(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcErrOrderField_get_RequestID(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcErrOrderField_get_UserForceClose(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UserForceClose);
#else 
	return PyInt_FromLong(self->data.UserForceClose);
#endif 
}

static PyObject *PyCThostFtdcErrOrderField_get_ErrorID(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcErrOrderField_get_ErrorMsg(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcErrOrderField_get_IsSwapOrder(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSwapOrder);
#else 
	return PyInt_FromLong(self->data.IsSwapOrder);
#endif 
}

static PyObject *PyCThostFtdcErrOrderField_get_ExchangeID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcErrOrderField_get_InvestUnitID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcErrOrderField_get_AccountID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcErrOrderField_get_CurrencyID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcErrOrderField_get_ClientID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcErrOrderField_get_reserve2(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcErrOrderField_get_MacAddress(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcErrOrderField_get_InstrumentID(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcErrOrderField_get_IPAddress(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcErrOrderField_get_OrderMemo(PyCThostFtdcErrOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcErrOrderField_get_SessionReqSeq(PyCThostFtdcErrOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcErrOrderField_set_BrokerID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_InvestorID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_reserve1(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_OrderRef(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_UserID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_OrderPriceType(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_Direction(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_CombOffsetFlag(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_CombHedgeFlag(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_LimitPrice(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_VolumeTotalOriginal(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_TimeCondition(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_GTDDate(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_VolumeCondition(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_MinVolume(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_ContingentCondition(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_StopPrice(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_ForceCloseReason(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_IsAutoSuspend(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_BusinessUnit(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_RequestID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_UserForceClose(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_ErrorID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_ErrorMsg(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_IsSwapOrder(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_ExchangeID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_InvestUnitID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_AccountID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_CurrencyID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_ClientID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_reserve2(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_MacAddress(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_InstrumentID(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_IPAddress(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_OrderMemo(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrOrderField_set_SessionReqSeq(PyCThostFtdcErrOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcErrOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcErrOrderField_get_BrokerID, (setter)PyCThostFtdcErrOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcErrOrderField_get_InvestorID, (setter)PyCThostFtdcErrOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcErrOrderField_get_reserve1, (setter)PyCThostFtdcErrOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcErrOrderField_get_OrderRef, (setter)PyCThostFtdcErrOrderField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcErrOrderField_get_UserID, (setter)PyCThostFtdcErrOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OrderPriceType", (getter)PyCThostFtdcErrOrderField_get_OrderPriceType, (setter)PyCThostFtdcErrOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcErrOrderField_get_Direction, (setter)PyCThostFtdcErrOrderField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"CombOffsetFlag", (getter)PyCThostFtdcErrOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcErrOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcErrOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcErrOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcErrOrderField_get_LimitPrice, (setter)PyCThostFtdcErrOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcErrOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcErrOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcErrOrderField_get_TimeCondition, (setter)PyCThostFtdcErrOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"GTDDate", (getter)PyCThostFtdcErrOrderField_get_GTDDate, (setter)PyCThostFtdcErrOrderField_set_GTDDate, (char *)"GTDDate", NULL},
	 {(char *)"VolumeCondition", (getter)PyCThostFtdcErrOrderField_get_VolumeCondition, (setter)PyCThostFtdcErrOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
	 {(char *)"MinVolume", (getter)PyCThostFtdcErrOrderField_get_MinVolume, (setter)PyCThostFtdcErrOrderField_set_MinVolume, (char *)"MinVolume", NULL},
	 {(char *)"ContingentCondition", (getter)PyCThostFtdcErrOrderField_get_ContingentCondition, (setter)PyCThostFtdcErrOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
	 {(char *)"StopPrice", (getter)PyCThostFtdcErrOrderField_get_StopPrice, (setter)PyCThostFtdcErrOrderField_set_StopPrice, (char *)"StopPrice", NULL},
	 {(char *)"ForceCloseReason", (getter)PyCThostFtdcErrOrderField_get_ForceCloseReason, (setter)PyCThostFtdcErrOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
	 {(char *)"IsAutoSuspend", (getter)PyCThostFtdcErrOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcErrOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcErrOrderField_get_BusinessUnit, (setter)PyCThostFtdcErrOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcErrOrderField_get_RequestID, (setter)PyCThostFtdcErrOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"UserForceClose", (getter)PyCThostFtdcErrOrderField_get_UserForceClose, (setter)PyCThostFtdcErrOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcErrOrderField_get_ErrorID, (setter)PyCThostFtdcErrOrderField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcErrOrderField_get_ErrorMsg, (setter)PyCThostFtdcErrOrderField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"IsSwapOrder", (getter)PyCThostFtdcErrOrderField_get_IsSwapOrder, (setter)PyCThostFtdcErrOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcErrOrderField_get_ExchangeID, (setter)PyCThostFtdcErrOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcErrOrderField_get_InvestUnitID, (setter)PyCThostFtdcErrOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcErrOrderField_get_AccountID, (setter)PyCThostFtdcErrOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcErrOrderField_get_CurrencyID, (setter)PyCThostFtdcErrOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcErrOrderField_get_ClientID, (setter)PyCThostFtdcErrOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcErrOrderField_get_reserve2, (setter)PyCThostFtdcErrOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcErrOrderField_get_MacAddress, (setter)PyCThostFtdcErrOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcErrOrderField_get_InstrumentID, (setter)PyCThostFtdcErrOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcErrOrderField_get_IPAddress, (setter)PyCThostFtdcErrOrderField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcErrOrderField_get_OrderMemo, (setter)PyCThostFtdcErrOrderField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcErrOrderField_get_SessionReqSeq, (setter)PyCThostFtdcErrOrderField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcErrOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcErrOrderField",	/* tp_name */
	sizeof(PyCThostFtdcErrOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcErrOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcErrOrderField_repr,   /* tp_repr */
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
	"CThostFtdcErrOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcErrOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcErrOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcErrOrderField_new,       /* tp_new */
};

int PyCThostFtdcErrOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcErrOrderField  */
	if (PyType_Ready(&PyCThostFtdcErrOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcErrOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcErrOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcErrOrderField", (PyObject *)&PyCThostFtdcErrOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrOrderField to module");
        Py_DECREF(&PyCThostFtdcErrOrderFieldType);
		return -1;
    }

    return 0;
}
