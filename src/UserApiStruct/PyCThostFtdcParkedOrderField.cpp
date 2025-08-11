
#include "PyCThostFtdcParkedOrderField.h"



static PyObject *PyCThostFtdcParkedOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcParkedOrderField *self = (PyCThostFtdcParkedOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcParkedOrderField_init(PyCThostFtdcParkedOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "OrderPriceType", "Direction", "CombOffsetFlag", "CombHedgeFlag", "LimitPrice", "VolumeTotalOriginal", "TimeCondition", "GTDDate", "VolumeCondition", "MinVolume", "ContingentCondition", "StopPrice", "ForceCloseReason", "IsAutoSuspend", "BusinessUnit", "RequestID", "UserForceClose", "ExchangeID", "ParkedOrderID", "UserType", "Status", "ErrorID", "ErrorMsg", "IsSwapOrder", "AccountID", "CurrencyID", "ClientID", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pParkedOrderField_BrokerID = NULL;
	Py_ssize_t pParkedOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pParkedOrderField_InvestorID = NULL;
	Py_ssize_t pParkedOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pParkedOrderField_reserve1 = NULL;
	Py_ssize_t pParkedOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pParkedOrderField_OrderRef = NULL;
	Py_ssize_t pParkedOrderField_OrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pParkedOrderField_UserID = NULL;
	Py_ssize_t pParkedOrderField_UserID_len = 0;

	//TThostFtdcOrderPriceTypeType char
	char pParkedOrderField_OrderPriceType = 0;

	//TThostFtdcDirectionType char
	char pParkedOrderField_Direction = 0;

	//TThostFtdcCombOffsetFlagType char[5]
	const char *pParkedOrderField_CombOffsetFlag = NULL;
	Py_ssize_t pParkedOrderField_CombOffsetFlag_len = 0;

	//TThostFtdcCombHedgeFlagType char[5]
	const char *pParkedOrderField_CombHedgeFlag = NULL;
	Py_ssize_t pParkedOrderField_CombHedgeFlag_len = 0;

	//TThostFtdcPriceType double
	double pParkedOrderField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pParkedOrderField_VolumeTotalOriginal = 0;

	//TThostFtdcTimeConditionType char
	char pParkedOrderField_TimeCondition = 0;

	//TThostFtdcDateType char[9]
	const char *pParkedOrderField_GTDDate = NULL;
	Py_ssize_t pParkedOrderField_GTDDate_len = 0;

	//TThostFtdcVolumeConditionType char
	char pParkedOrderField_VolumeCondition = 0;

	//TThostFtdcVolumeType int
	int pParkedOrderField_MinVolume = 0;

	//TThostFtdcContingentConditionType char
	char pParkedOrderField_ContingentCondition = 0;

	//TThostFtdcPriceType double
	double pParkedOrderField_StopPrice = 0.0;

	//TThostFtdcForceCloseReasonType char
	char pParkedOrderField_ForceCloseReason = 0;

	//TThostFtdcBoolType int
	int pParkedOrderField_IsAutoSuspend = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pParkedOrderField_BusinessUnit = NULL;
	Py_ssize_t pParkedOrderField_BusinessUnit_len = 0;

	//TThostFtdcRequestIDType int
	int pParkedOrderField_RequestID = 0;

	//TThostFtdcBoolType int
	int pParkedOrderField_UserForceClose = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pParkedOrderField_ExchangeID = NULL;
	Py_ssize_t pParkedOrderField_ExchangeID_len = 0;

	//TThostFtdcParkedOrderIDType char[13]
	const char *pParkedOrderField_ParkedOrderID = NULL;
	Py_ssize_t pParkedOrderField_ParkedOrderID_len = 0;

	//TThostFtdcUserTypeType char
	char pParkedOrderField_UserType = 0;

	//TThostFtdcParkedOrderStatusType char
	char pParkedOrderField_Status = 0;

	//TThostFtdcErrorIDType int
	int pParkedOrderField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pParkedOrderField_ErrorMsg = NULL;
	Py_ssize_t pParkedOrderField_ErrorMsg_len = 0;

	//TThostFtdcBoolType int
	int pParkedOrderField_IsSwapOrder = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pParkedOrderField_AccountID = NULL;
	Py_ssize_t pParkedOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pParkedOrderField_CurrencyID = NULL;
	Py_ssize_t pParkedOrderField_CurrencyID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pParkedOrderField_ClientID = NULL;
	Py_ssize_t pParkedOrderField_ClientID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pParkedOrderField_InvestUnitID = NULL;
	Py_ssize_t pParkedOrderField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pParkedOrderField_reserve2 = NULL;
	Py_ssize_t pParkedOrderField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pParkedOrderField_MacAddress = NULL;
	Py_ssize_t pParkedOrderField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pParkedOrderField_InstrumentID = NULL;
	Py_ssize_t pParkedOrderField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pParkedOrderField_IPAddress = NULL;
	Py_ssize_t pParkedOrderField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ccy#y#dicy#cicdciy#iiy#y#cciy#iy#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ccs#s#dics#cicdcis#iis#s#ccis#is#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pParkedOrderField_BrokerID, &pParkedOrderField_BrokerID_len
		, &pParkedOrderField_InvestorID, &pParkedOrderField_InvestorID_len
		, &pParkedOrderField_reserve1, &pParkedOrderField_reserve1_len
		, &pParkedOrderField_OrderRef, &pParkedOrderField_OrderRef_len
		, &pParkedOrderField_UserID, &pParkedOrderField_UserID_len
		, &pParkedOrderField_OrderPriceType
		, &pParkedOrderField_Direction
		, &pParkedOrderField_CombOffsetFlag, &pParkedOrderField_CombOffsetFlag_len
		, &pParkedOrderField_CombHedgeFlag, &pParkedOrderField_CombHedgeFlag_len
		, &pParkedOrderField_LimitPrice
		, &pParkedOrderField_VolumeTotalOriginal
		, &pParkedOrderField_TimeCondition
		, &pParkedOrderField_GTDDate, &pParkedOrderField_GTDDate_len
		, &pParkedOrderField_VolumeCondition
		, &pParkedOrderField_MinVolume
		, &pParkedOrderField_ContingentCondition
		, &pParkedOrderField_StopPrice
		, &pParkedOrderField_ForceCloseReason
		, &pParkedOrderField_IsAutoSuspend
		, &pParkedOrderField_BusinessUnit, &pParkedOrderField_BusinessUnit_len
		, &pParkedOrderField_RequestID
		, &pParkedOrderField_UserForceClose
		, &pParkedOrderField_ExchangeID, &pParkedOrderField_ExchangeID_len
		, &pParkedOrderField_ParkedOrderID, &pParkedOrderField_ParkedOrderID_len
		, &pParkedOrderField_UserType
		, &pParkedOrderField_Status
		, &pParkedOrderField_ErrorID
		, &pParkedOrderField_ErrorMsg, &pParkedOrderField_ErrorMsg_len
		, &pParkedOrderField_IsSwapOrder
		, &pParkedOrderField_AccountID, &pParkedOrderField_AccountID_len
		, &pParkedOrderField_CurrencyID, &pParkedOrderField_CurrencyID_len
		, &pParkedOrderField_ClientID, &pParkedOrderField_ClientID_len
		, &pParkedOrderField_InvestUnitID, &pParkedOrderField_InvestUnitID_len
		, &pParkedOrderField_reserve2, &pParkedOrderField_reserve2_len
		, &pParkedOrderField_MacAddress, &pParkedOrderField_MacAddress_len
		, &pParkedOrderField_InstrumentID, &pParkedOrderField_InstrumentID_len
		, &pParkedOrderField_IPAddress, &pParkedOrderField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pParkedOrderField_BrokerID != NULL) {
		if(pParkedOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pParkedOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pParkedOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pParkedOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pParkedOrderField_InvestorID != NULL) {
		if(pParkedOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pParkedOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pParkedOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pParkedOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pParkedOrderField_reserve1 != NULL) {
		if(pParkedOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pParkedOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pParkedOrderField_reserve1, sizeof(self->data.reserve1) );
		pParkedOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pParkedOrderField_OrderRef != NULL) {
		if(pParkedOrderField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pParkedOrderField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pParkedOrderField_OrderRef, sizeof(self->data.OrderRef) );
		pParkedOrderField_OrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pParkedOrderField_UserID != NULL) {
		if(pParkedOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pParkedOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pParkedOrderField_UserID, sizeof(self->data.UserID) );
		pParkedOrderField_UserID = NULL;
	}

	//TThostFtdcOrderPriceTypeType char
	self->data.OrderPriceType = pParkedOrderField_OrderPriceType;

	//TThostFtdcDirectionType char
	self->data.Direction = pParkedOrderField_Direction;

	//TThostFtdcCombOffsetFlagType char[5]
	if(pParkedOrderField_CombOffsetFlag != NULL) {
		if(pParkedOrderField_CombOffsetFlag_len > (Py_ssize_t)sizeof(self->data.CombOffsetFlag)) {
			PyErr_Format(PyExc_ValueError, "CombOffsetFlag too long: length=%zd (max allowed is %zd)", pParkedOrderField_CombOffsetFlag_len, (Py_ssize_t)sizeof(self->data.CombOffsetFlag));
			return -1;
		}
		strncpy(self->data.CombOffsetFlag, pParkedOrderField_CombOffsetFlag, sizeof(self->data.CombOffsetFlag) );
		pParkedOrderField_CombOffsetFlag = NULL;
	}

	//TThostFtdcCombHedgeFlagType char[5]
	if(pParkedOrderField_CombHedgeFlag != NULL) {
		if(pParkedOrderField_CombHedgeFlag_len > (Py_ssize_t)sizeof(self->data.CombHedgeFlag)) {
			PyErr_Format(PyExc_ValueError, "CombHedgeFlag too long: length=%zd (max allowed is %zd)", pParkedOrderField_CombHedgeFlag_len, (Py_ssize_t)sizeof(self->data.CombHedgeFlag));
			return -1;
		}
		strncpy(self->data.CombHedgeFlag, pParkedOrderField_CombHedgeFlag, sizeof(self->data.CombHedgeFlag) );
		pParkedOrderField_CombHedgeFlag = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LimitPrice = pParkedOrderField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeTotalOriginal = pParkedOrderField_VolumeTotalOriginal;

	//TThostFtdcTimeConditionType char
	self->data.TimeCondition = pParkedOrderField_TimeCondition;

	//TThostFtdcDateType char[9]
	if(pParkedOrderField_GTDDate != NULL) {
		if(pParkedOrderField_GTDDate_len > (Py_ssize_t)sizeof(self->data.GTDDate)) {
			PyErr_Format(PyExc_ValueError, "GTDDate too long: length=%zd (max allowed is %zd)", pParkedOrderField_GTDDate_len, (Py_ssize_t)sizeof(self->data.GTDDate));
			return -1;
		}
		strncpy(self->data.GTDDate, pParkedOrderField_GTDDate, sizeof(self->data.GTDDate) );
		pParkedOrderField_GTDDate = NULL;
	}

	//TThostFtdcVolumeConditionType char
	self->data.VolumeCondition = pParkedOrderField_VolumeCondition;

	//TThostFtdcVolumeType int
	self->data.MinVolume = pParkedOrderField_MinVolume;

	//TThostFtdcContingentConditionType char
	self->data.ContingentCondition = pParkedOrderField_ContingentCondition;

	//TThostFtdcPriceType double
	self->data.StopPrice = pParkedOrderField_StopPrice;
	//TThostFtdcForceCloseReasonType char
	self->data.ForceCloseReason = pParkedOrderField_ForceCloseReason;

	//TThostFtdcBoolType int
	self->data.IsAutoSuspend = pParkedOrderField_IsAutoSuspend;

	//TThostFtdcBusinessUnitType char[21]
	if(pParkedOrderField_BusinessUnit != NULL) {
		if(pParkedOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pParkedOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pParkedOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pParkedOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pParkedOrderField_RequestID;

	//TThostFtdcBoolType int
	self->data.UserForceClose = pParkedOrderField_UserForceClose;

	//TThostFtdcExchangeIDType char[9]
	if(pParkedOrderField_ExchangeID != NULL) {
		if(pParkedOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pParkedOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pParkedOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pParkedOrderField_ExchangeID = NULL;
	}

	//TThostFtdcParkedOrderIDType char[13]
	if(pParkedOrderField_ParkedOrderID != NULL) {
		if(pParkedOrderField_ParkedOrderID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
			PyErr_Format(PyExc_ValueError, "ParkedOrderID too long: length=%zd (max allowed is %zd)", pParkedOrderField_ParkedOrderID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderID));
			return -1;
		}
		strncpy(self->data.ParkedOrderID, pParkedOrderField_ParkedOrderID, sizeof(self->data.ParkedOrderID) );
		pParkedOrderField_ParkedOrderID = NULL;
	}

	//TThostFtdcUserTypeType char
	self->data.UserType = pParkedOrderField_UserType;

	//TThostFtdcParkedOrderStatusType char
	self->data.Status = pParkedOrderField_Status;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pParkedOrderField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pParkedOrderField_ErrorMsg != NULL) {
		if(pParkedOrderField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pParkedOrderField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pParkedOrderField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pParkedOrderField_ErrorMsg = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSwapOrder = pParkedOrderField_IsSwapOrder;

	//TThostFtdcAccountIDType char[13]
	if(pParkedOrderField_AccountID != NULL) {
		if(pParkedOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pParkedOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pParkedOrderField_AccountID, sizeof(self->data.AccountID) );
		pParkedOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pParkedOrderField_CurrencyID != NULL) {
		if(pParkedOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pParkedOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pParkedOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pParkedOrderField_CurrencyID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pParkedOrderField_ClientID != NULL) {
		if(pParkedOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pParkedOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pParkedOrderField_ClientID, sizeof(self->data.ClientID) );
		pParkedOrderField_ClientID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pParkedOrderField_InvestUnitID != NULL) {
		if(pParkedOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pParkedOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pParkedOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pParkedOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pParkedOrderField_reserve2 != NULL) {
		if(pParkedOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pParkedOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pParkedOrderField_reserve2, sizeof(self->data.reserve2) );
		pParkedOrderField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pParkedOrderField_MacAddress != NULL) {
		if(pParkedOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pParkedOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pParkedOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pParkedOrderField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pParkedOrderField_InstrumentID != NULL) {
		if(pParkedOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pParkedOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pParkedOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pParkedOrderField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pParkedOrderField_IPAddress != NULL) {
		if(pParkedOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pParkedOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pParkedOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pParkedOrderField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcParkedOrderField_dealloc(PyCThostFtdcParkedOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcParkedOrderField_repr(PyCThostFtdcParkedOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:d,s:i,s:c,s:y,s:c,s:i,s:c,s:d,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:d,s:i,s:c,s:s,s:c,s:i,s:c,s:d,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:c,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
		, "ExchangeID", self->data.ExchangeID 
		, "ParkedOrderID", self->data.ParkedOrderID 
		, "UserType", self->data.UserType
		, "Status", self->data.Status
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "IsSwapOrder", self->data.IsSwapOrder
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 
		, "ClientID", self->data.ClientID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcParkedOrderField_get_BrokerID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_InvestorID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_reserve1(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_OrderRef(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcParkedOrderField_get_UserID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_OrderPriceType(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderPriceType), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_Direction(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_CombOffsetFlag(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombOffsetFlag);
}

static PyObject *PyCThostFtdcParkedOrderField_get_CombHedgeFlag(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CombHedgeFlag);
}

static PyObject *PyCThostFtdcParkedOrderField_get_LimitPrice(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcParkedOrderField_get_VolumeTotalOriginal(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeTotalOriginal);
#else 
	return PyInt_FromLong(self->data.VolumeTotalOriginal);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderField_get_TimeCondition(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TimeCondition), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_GTDDate(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.GTDDate);
}

static PyObject *PyCThostFtdcParkedOrderField_get_VolumeCondition(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VolumeCondition), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_MinVolume(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.MinVolume);
#else 
	return PyInt_FromLong(self->data.MinVolume);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderField_get_ContingentCondition(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ContingentCondition), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_StopPrice(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StopPrice);
}

static PyObject *PyCThostFtdcParkedOrderField_get_ForceCloseReason(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ForceCloseReason), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_IsAutoSuspend(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsAutoSuspend);
#else 
	return PyInt_FromLong(self->data.IsAutoSuspend);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderField_get_BusinessUnit(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcParkedOrderField_get_RequestID(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderField_get_UserForceClose(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UserForceClose);
#else 
	return PyInt_FromLong(self->data.UserForceClose);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderField_get_ExchangeID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_ParkedOrderID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParkedOrderID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_UserType(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.UserType), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_Status(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Status), 1);
}

static PyObject *PyCThostFtdcParkedOrderField_get_ErrorID(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderField_get_ErrorMsg(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcParkedOrderField_get_IsSwapOrder(PyCThostFtdcParkedOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSwapOrder);
#else 
	return PyInt_FromLong(self->data.IsSwapOrder);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderField_get_AccountID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_CurrencyID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_ClientID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_InvestUnitID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_reserve2(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcParkedOrderField_get_MacAddress(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcParkedOrderField_get_InstrumentID(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcParkedOrderField_get_IPAddress(PyCThostFtdcParkedOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcParkedOrderField_set_BrokerID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_InvestorID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_reserve1(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_OrderRef(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_UserID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_OrderPriceType(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_Direction(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_CombOffsetFlag(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_CombHedgeFlag(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_LimitPrice(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_VolumeTotalOriginal(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_TimeCondition(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_GTDDate(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_VolumeCondition(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_MinVolume(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_ContingentCondition(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_StopPrice(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_ForceCloseReason(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_IsAutoSuspend(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_BusinessUnit(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_RequestID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_UserForceClose(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_ExchangeID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_ParkedOrderID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParkedOrderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderID)) {
		PyErr_SetString(PyExc_ValueError, "ParkedOrderID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ParkedOrderID, buf, sizeof(self->data.ParkedOrderID));
	return 0;
}

static int PyCThostFtdcParkedOrderField_set_UserType(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserType)) {
		PyErr_SetString(PyExc_ValueError, "UserType must be less than 1 bytes");
		return -1;
	}
	self->data.UserType = *buf;
	return 0;
}

static int PyCThostFtdcParkedOrderField_set_Status(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Status Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Status)) {
		PyErr_SetString(PyExc_ValueError, "Status must be less than 1 bytes");
		return -1;
	}
	self->data.Status = *buf;
	return 0;
}

static int PyCThostFtdcParkedOrderField_set_ErrorID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_ErrorMsg(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_IsSwapOrder(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_AccountID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_CurrencyID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_ClientID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_InvestUnitID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_reserve2(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_MacAddress(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_InstrumentID(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderField_set_IPAddress(PyCThostFtdcParkedOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcParkedOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcParkedOrderField_get_BrokerID, (setter)PyCThostFtdcParkedOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcParkedOrderField_get_InvestorID, (setter)PyCThostFtdcParkedOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcParkedOrderField_get_reserve1, (setter)PyCThostFtdcParkedOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcParkedOrderField_get_OrderRef, (setter)PyCThostFtdcParkedOrderField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcParkedOrderField_get_UserID, (setter)PyCThostFtdcParkedOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"OrderPriceType", (getter)PyCThostFtdcParkedOrderField_get_OrderPriceType, (setter)PyCThostFtdcParkedOrderField_set_OrderPriceType, (char *)"OrderPriceType", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcParkedOrderField_get_Direction, (setter)PyCThostFtdcParkedOrderField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"CombOffsetFlag", (getter)PyCThostFtdcParkedOrderField_get_CombOffsetFlag, (setter)PyCThostFtdcParkedOrderField_set_CombOffsetFlag, (char *)"CombOffsetFlag", NULL},
	 {(char *)"CombHedgeFlag", (getter)PyCThostFtdcParkedOrderField_get_CombHedgeFlag, (setter)PyCThostFtdcParkedOrderField_set_CombHedgeFlag, (char *)"CombHedgeFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcParkedOrderField_get_LimitPrice, (setter)PyCThostFtdcParkedOrderField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeTotalOriginal", (getter)PyCThostFtdcParkedOrderField_get_VolumeTotalOriginal, (setter)PyCThostFtdcParkedOrderField_set_VolumeTotalOriginal, (char *)"VolumeTotalOriginal", NULL},
	 {(char *)"TimeCondition", (getter)PyCThostFtdcParkedOrderField_get_TimeCondition, (setter)PyCThostFtdcParkedOrderField_set_TimeCondition, (char *)"TimeCondition", NULL},
	 {(char *)"GTDDate", (getter)PyCThostFtdcParkedOrderField_get_GTDDate, (setter)PyCThostFtdcParkedOrderField_set_GTDDate, (char *)"GTDDate", NULL},
	 {(char *)"VolumeCondition", (getter)PyCThostFtdcParkedOrderField_get_VolumeCondition, (setter)PyCThostFtdcParkedOrderField_set_VolumeCondition, (char *)"VolumeCondition", NULL},
	 {(char *)"MinVolume", (getter)PyCThostFtdcParkedOrderField_get_MinVolume, (setter)PyCThostFtdcParkedOrderField_set_MinVolume, (char *)"MinVolume", NULL},
	 {(char *)"ContingentCondition", (getter)PyCThostFtdcParkedOrderField_get_ContingentCondition, (setter)PyCThostFtdcParkedOrderField_set_ContingentCondition, (char *)"ContingentCondition", NULL},
	 {(char *)"StopPrice", (getter)PyCThostFtdcParkedOrderField_get_StopPrice, (setter)PyCThostFtdcParkedOrderField_set_StopPrice, (char *)"StopPrice", NULL},
	 {(char *)"ForceCloseReason", (getter)PyCThostFtdcParkedOrderField_get_ForceCloseReason, (setter)PyCThostFtdcParkedOrderField_set_ForceCloseReason, (char *)"ForceCloseReason", NULL},
	 {(char *)"IsAutoSuspend", (getter)PyCThostFtdcParkedOrderField_get_IsAutoSuspend, (setter)PyCThostFtdcParkedOrderField_set_IsAutoSuspend, (char *)"IsAutoSuspend", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcParkedOrderField_get_BusinessUnit, (setter)PyCThostFtdcParkedOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcParkedOrderField_get_RequestID, (setter)PyCThostFtdcParkedOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"UserForceClose", (getter)PyCThostFtdcParkedOrderField_get_UserForceClose, (setter)PyCThostFtdcParkedOrderField_set_UserForceClose, (char *)"UserForceClose", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcParkedOrderField_get_ExchangeID, (setter)PyCThostFtdcParkedOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParkedOrderID", (getter)PyCThostFtdcParkedOrderField_get_ParkedOrderID, (setter)PyCThostFtdcParkedOrderField_set_ParkedOrderID, (char *)"ParkedOrderID", NULL},
	 {(char *)"UserType", (getter)PyCThostFtdcParkedOrderField_get_UserType, (setter)PyCThostFtdcParkedOrderField_set_UserType, (char *)"UserType", NULL},
	 {(char *)"Status", (getter)PyCThostFtdcParkedOrderField_get_Status, (setter)PyCThostFtdcParkedOrderField_set_Status, (char *)"Status", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcParkedOrderField_get_ErrorID, (setter)PyCThostFtdcParkedOrderField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcParkedOrderField_get_ErrorMsg, (setter)PyCThostFtdcParkedOrderField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"IsSwapOrder", (getter)PyCThostFtdcParkedOrderField_get_IsSwapOrder, (setter)PyCThostFtdcParkedOrderField_set_IsSwapOrder, (char *)"IsSwapOrder", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcParkedOrderField_get_AccountID, (setter)PyCThostFtdcParkedOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcParkedOrderField_get_CurrencyID, (setter)PyCThostFtdcParkedOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcParkedOrderField_get_ClientID, (setter)PyCThostFtdcParkedOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcParkedOrderField_get_InvestUnitID, (setter)PyCThostFtdcParkedOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcParkedOrderField_get_reserve2, (setter)PyCThostFtdcParkedOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcParkedOrderField_get_MacAddress, (setter)PyCThostFtdcParkedOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcParkedOrderField_get_InstrumentID, (setter)PyCThostFtdcParkedOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcParkedOrderField_get_IPAddress, (setter)PyCThostFtdcParkedOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcParkedOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcParkedOrderField",	/* tp_name */
	sizeof(PyCThostFtdcParkedOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcParkedOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcParkedOrderField_repr,   /* tp_repr */
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
	"CThostFtdcParkedOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcParkedOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcParkedOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcParkedOrderField_new,       /* tp_new */
};

int PyCThostFtdcParkedOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcParkedOrderField  */
	if (PyType_Ready(&PyCThostFtdcParkedOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcParkedOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcParkedOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcParkedOrderField", (PyObject *)&PyCThostFtdcParkedOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcParkedOrderField to module");
        Py_DECREF(&PyCThostFtdcParkedOrderFieldType);
		return -1;
    }

    return 0;
}
