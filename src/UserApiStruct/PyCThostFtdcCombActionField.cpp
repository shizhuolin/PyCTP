
#include "PyCThostFtdcCombActionField.h"



static PyObject *PyCThostFtdcCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCombActionField *self = (PyCThostFtdcCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCombActionField_init(PyCThostFtdcCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "CombActionRef", "UserID", "Direction", "Volume", "CombDirection", "HedgeFlag", "ActionLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "ActionStatus", "NotifySequence", "TradingDay", "SettlementID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "reserve3", "MacAddress", "ComTradeID", "BranchID", "InvestUnitID", "InstrumentID", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pCombActionField_BrokerID = NULL;
	Py_ssize_t pCombActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pCombActionField_InvestorID = NULL;
	Py_ssize_t pCombActionField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pCombActionField_reserve1 = NULL;
	Py_ssize_t pCombActionField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pCombActionField_CombActionRef = NULL;
	Py_ssize_t pCombActionField_CombActionRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pCombActionField_UserID = NULL;
	Py_ssize_t pCombActionField_UserID_len = 0;

	//TThostFtdcDirectionType char
	char pCombActionField_Direction = 0;

	//TThostFtdcVolumeType int
	int pCombActionField_Volume = 0;

	//TThostFtdcCombDirectionType char
	char pCombActionField_CombDirection = 0;

	//TThostFtdcHedgeFlagType char
	char pCombActionField_HedgeFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pCombActionField_ActionLocalID = NULL;
	Py_ssize_t pCombActionField_ActionLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pCombActionField_ExchangeID = NULL;
	Py_ssize_t pCombActionField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pCombActionField_ParticipantID = NULL;
	Py_ssize_t pCombActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pCombActionField_ClientID = NULL;
	Py_ssize_t pCombActionField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pCombActionField_reserve2 = NULL;
	Py_ssize_t pCombActionField_reserve2_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pCombActionField_TraderID = NULL;
	Py_ssize_t pCombActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pCombActionField_InstallID = 0;

	//TThostFtdcOrderActionStatusType char
	char pCombActionField_ActionStatus = 0;

	//TThostFtdcSequenceNoType int
	int pCombActionField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pCombActionField_TradingDay = NULL;
	Py_ssize_t pCombActionField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pCombActionField_SettlementID = 0;

	//TThostFtdcSequenceNoType int
	int pCombActionField_SequenceNo = 0;

	//TThostFtdcFrontIDType int
	int pCombActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pCombActionField_SessionID = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pCombActionField_UserProductInfo = NULL;
	Py_ssize_t pCombActionField_UserProductInfo_len = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pCombActionField_StatusMsg = NULL;
	Py_ssize_t pCombActionField_StatusMsg_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pCombActionField_reserve3 = NULL;
	Py_ssize_t pCombActionField_reserve3_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pCombActionField_MacAddress = NULL;
	Py_ssize_t pCombActionField_MacAddress_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pCombActionField_ComTradeID = NULL;
	Py_ssize_t pCombActionField_ComTradeID_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pCombActionField_BranchID = NULL;
	Py_ssize_t pCombActionField_BranchID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pCombActionField_InvestUnitID = NULL;
	Py_ssize_t pCombActionField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pCombActionField_InstrumentID = NULL;
	Py_ssize_t pCombActionField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pCombActionField_ExchangeInstID = NULL;
	Py_ssize_t pCombActionField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pCombActionField_IPAddress = NULL;
	Py_ssize_t pCombActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciccy#y#y#y#y#y#iciy#iiiiy#y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciccs#s#s#s#s#s#icis#iiiis#s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pCombActionField_BrokerID, &pCombActionField_BrokerID_len
		, &pCombActionField_InvestorID, &pCombActionField_InvestorID_len
		, &pCombActionField_reserve1, &pCombActionField_reserve1_len
		, &pCombActionField_CombActionRef, &pCombActionField_CombActionRef_len
		, &pCombActionField_UserID, &pCombActionField_UserID_len
		, &pCombActionField_Direction
		, &pCombActionField_Volume
		, &pCombActionField_CombDirection
		, &pCombActionField_HedgeFlag
		, &pCombActionField_ActionLocalID, &pCombActionField_ActionLocalID_len
		, &pCombActionField_ExchangeID, &pCombActionField_ExchangeID_len
		, &pCombActionField_ParticipantID, &pCombActionField_ParticipantID_len
		, &pCombActionField_ClientID, &pCombActionField_ClientID_len
		, &pCombActionField_reserve2, &pCombActionField_reserve2_len
		, &pCombActionField_TraderID, &pCombActionField_TraderID_len
		, &pCombActionField_InstallID
		, &pCombActionField_ActionStatus
		, &pCombActionField_NotifySequence
		, &pCombActionField_TradingDay, &pCombActionField_TradingDay_len
		, &pCombActionField_SettlementID
		, &pCombActionField_SequenceNo
		, &pCombActionField_FrontID
		, &pCombActionField_SessionID
		, &pCombActionField_UserProductInfo, &pCombActionField_UserProductInfo_len
		, &pCombActionField_StatusMsg, &pCombActionField_StatusMsg_len
		, &pCombActionField_reserve3, &pCombActionField_reserve3_len
		, &pCombActionField_MacAddress, &pCombActionField_MacAddress_len
		, &pCombActionField_ComTradeID, &pCombActionField_ComTradeID_len
		, &pCombActionField_BranchID, &pCombActionField_BranchID_len
		, &pCombActionField_InvestUnitID, &pCombActionField_InvestUnitID_len
		, &pCombActionField_InstrumentID, &pCombActionField_InstrumentID_len
		, &pCombActionField_ExchangeInstID, &pCombActionField_ExchangeInstID_len
		, &pCombActionField_IPAddress, &pCombActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pCombActionField_BrokerID != NULL) {
		if(pCombActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pCombActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pCombActionField_BrokerID, sizeof(self->data.BrokerID) );
		pCombActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pCombActionField_InvestorID != NULL) {
		if(pCombActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pCombActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pCombActionField_InvestorID, sizeof(self->data.InvestorID) );
		pCombActionField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pCombActionField_reserve1 != NULL) {
		if(pCombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pCombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pCombActionField_reserve1, sizeof(self->data.reserve1) );
		pCombActionField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pCombActionField_CombActionRef != NULL) {
		if(pCombActionField_CombActionRef_len > (Py_ssize_t)sizeof(self->data.CombActionRef)) {
			PyErr_Format(PyExc_ValueError, "CombActionRef too long: length=%zd (max allowed is %zd)", pCombActionField_CombActionRef_len, (Py_ssize_t)sizeof(self->data.CombActionRef));
			return -1;
		}
		strncpy(self->data.CombActionRef, pCombActionField_CombActionRef, sizeof(self->data.CombActionRef) );
		pCombActionField_CombActionRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pCombActionField_UserID != NULL) {
		if(pCombActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pCombActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pCombActionField_UserID, sizeof(self->data.UserID) );
		pCombActionField_UserID = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pCombActionField_Direction;

	//TThostFtdcVolumeType int
	self->data.Volume = pCombActionField_Volume;

	//TThostFtdcCombDirectionType char
	self->data.CombDirection = pCombActionField_CombDirection;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pCombActionField_HedgeFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pCombActionField_ActionLocalID != NULL) {
		if(pCombActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pCombActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pCombActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pCombActionField_ActionLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pCombActionField_ExchangeID != NULL) {
		if(pCombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pCombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pCombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pCombActionField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pCombActionField_ParticipantID != NULL) {
		if(pCombActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pCombActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pCombActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pCombActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pCombActionField_ClientID != NULL) {
		if(pCombActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pCombActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pCombActionField_ClientID, sizeof(self->data.ClientID) );
		pCombActionField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pCombActionField_reserve2 != NULL) {
		if(pCombActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pCombActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pCombActionField_reserve2, sizeof(self->data.reserve2) );
		pCombActionField_reserve2 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pCombActionField_TraderID != NULL) {
		if(pCombActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pCombActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pCombActionField_TraderID, sizeof(self->data.TraderID) );
		pCombActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pCombActionField_InstallID;

	//TThostFtdcOrderActionStatusType char
	self->data.ActionStatus = pCombActionField_ActionStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pCombActionField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pCombActionField_TradingDay != NULL) {
		if(pCombActionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pCombActionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pCombActionField_TradingDay, sizeof(self->data.TradingDay) );
		pCombActionField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pCombActionField_SettlementID;

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pCombActionField_SequenceNo;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pCombActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pCombActionField_SessionID;

	//TThostFtdcProductInfoType char[11]
	if(pCombActionField_UserProductInfo != NULL) {
		if(pCombActionField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pCombActionField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pCombActionField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pCombActionField_UserProductInfo = NULL;
	}

	//TThostFtdcErrorMsgType char[81]
	if(pCombActionField_StatusMsg != NULL) {
		if(pCombActionField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pCombActionField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pCombActionField_StatusMsg, sizeof(self->data.StatusMsg) );
		pCombActionField_StatusMsg = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pCombActionField_reserve3 != NULL) {
		if(pCombActionField_reserve3_len > (Py_ssize_t)sizeof(self->data.reserve3)) {
			PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is %zd)", pCombActionField_reserve3_len, (Py_ssize_t)sizeof(self->data.reserve3));
			return -1;
		}
		strncpy(self->data.reserve3, pCombActionField_reserve3, sizeof(self->data.reserve3) );
		pCombActionField_reserve3 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pCombActionField_MacAddress != NULL) {
		if(pCombActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pCombActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pCombActionField_MacAddress, sizeof(self->data.MacAddress) );
		pCombActionField_MacAddress = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pCombActionField_ComTradeID != NULL) {
		if(pCombActionField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
			PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", pCombActionField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
			return -1;
		}
		strncpy(self->data.ComTradeID, pCombActionField_ComTradeID, sizeof(self->data.ComTradeID) );
		pCombActionField_ComTradeID = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pCombActionField_BranchID != NULL) {
		if(pCombActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pCombActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pCombActionField_BranchID, sizeof(self->data.BranchID) );
		pCombActionField_BranchID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pCombActionField_InvestUnitID != NULL) {
		if(pCombActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pCombActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pCombActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pCombActionField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pCombActionField_InstrumentID != NULL) {
		if(pCombActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pCombActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pCombActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pCombActionField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pCombActionField_ExchangeInstID != NULL) {
		if(pCombActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pCombActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pCombActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pCombActionField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pCombActionField_IPAddress != NULL) {
		if(pCombActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pCombActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pCombActionField_IPAddress, sizeof(self->data.IPAddress) );
		pCombActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcCombActionField_dealloc(PyCThostFtdcCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCombActionField_repr(PyCThostFtdcCombActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
		, "ActionLocalID", self->data.ActionLocalID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "ActionStatus", self->data.ActionStatus
		, "NotifySequence", self->data.NotifySequence
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "SequenceNo", self->data.SequenceNo
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "UserProductInfo", self->data.UserProductInfo 
		, "StatusMsg", self->data.StatusMsg 
		, "reserve3", self->data.reserve3 
		, "MacAddress", self->data.MacAddress 
		, "ComTradeID", self->data.ComTradeID 
		, "BranchID", self->data.BranchID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCombActionField_get_BrokerID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcCombActionField_get_InvestorID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcCombActionField_get_reserve1(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcCombActionField_get_CombActionRef(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.CombActionRef);
}

static PyObject *PyCThostFtdcCombActionField_get_UserID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcCombActionField_get_Direction(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcCombActionField_get_Volume(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcCombActionField_get_CombDirection(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CombDirection), 1);
}

static PyObject *PyCThostFtdcCombActionField_get_HedgeFlag(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcCombActionField_get_ActionLocalID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcCombActionField_get_ExchangeID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcCombActionField_get_ParticipantID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcCombActionField_get_ClientID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcCombActionField_get_reserve2(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcCombActionField_get_TraderID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcCombActionField_get_InstallID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcCombActionField_get_ActionStatus(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionStatus), 1);
}

static PyObject *PyCThostFtdcCombActionField_get_NotifySequence(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcCombActionField_get_TradingDay(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcCombActionField_get_SettlementID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcCombActionField_get_SequenceNo(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcCombActionField_get_FrontID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcCombActionField_get_SessionID(PyCThostFtdcCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcCombActionField_get_UserProductInfo(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcCombActionField_get_StatusMsg(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcCombActionField_get_reserve3(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve3);
}

static PyObject *PyCThostFtdcCombActionField_get_MacAddress(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcCombActionField_get_ComTradeID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ComTradeID);
}

static PyObject *PyCThostFtdcCombActionField_get_BranchID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcCombActionField_get_InvestUnitID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcCombActionField_get_InstrumentID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcCombActionField_get_ExchangeInstID(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcCombActionField_get_IPAddress(PyCThostFtdcCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcCombActionField_set_BrokerID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_InvestorID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_reserve1(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_CombActionRef(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_UserID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_Direction(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_Volume(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_CombDirection(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_HedgeFlag(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_ActionLocalID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
	return 0;
}

static int PyCThostFtdcCombActionField_set_ExchangeID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_ParticipantID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
		PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcCombActionField_set_ClientID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_reserve2(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcCombActionField_set_TraderID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
		PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}

static int PyCThostFtdcCombActionField_set_InstallID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int"); 
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
    self->data.InstallID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCombActionField_set_ActionStatus(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionStatus)) {
		PyErr_SetString(PyExc_ValueError, "ActionStatus must be less than 1 bytes");
		return -1;
	}
	self->data.ActionStatus = *buf;
	return 0;
}

static int PyCThostFtdcCombActionField_set_NotifySequence(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected int"); 
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
    self->data.NotifySequence = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCombActionField_set_TradingDay(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
		PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
	return 0;
}

static int PyCThostFtdcCombActionField_set_SettlementID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int"); 
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
    self->data.SettlementID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCombActionField_set_SequenceNo(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcCombActionField_set_FrontID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_SessionID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_UserProductInfo(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
		PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
	return 0;
}

static int PyCThostFtdcCombActionField_set_StatusMsg(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
		PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.StatusMsg, buf, sizeof(self->data.StatusMsg));
	return 0;
}

static int PyCThostFtdcCombActionField_set_reserve3(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve3)) {
		PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve3, buf, sizeof(self->data.reserve3));
	return 0;
}

static int PyCThostFtdcCombActionField_set_MacAddress(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_ComTradeID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
		PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ComTradeID, buf, sizeof(self->data.ComTradeID));
	return 0;
}

static int PyCThostFtdcCombActionField_set_BranchID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BranchID)) {
		PyErr_SetString(PyExc_ValueError, "BranchID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
	return 0;
}

static int PyCThostFtdcCombActionField_set_InvestUnitID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_InstrumentID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCombActionField_set_ExchangeInstID(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}

static int PyCThostFtdcCombActionField_set_IPAddress(PyCThostFtdcCombActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcCombActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcCombActionField_get_BrokerID, (setter)PyCThostFtdcCombActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcCombActionField_get_InvestorID, (setter)PyCThostFtdcCombActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcCombActionField_get_reserve1, (setter)PyCThostFtdcCombActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"CombActionRef", (getter)PyCThostFtdcCombActionField_get_CombActionRef, (setter)PyCThostFtdcCombActionField_set_CombActionRef, (char *)"CombActionRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcCombActionField_get_UserID, (setter)PyCThostFtdcCombActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcCombActionField_get_Direction, (setter)PyCThostFtdcCombActionField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcCombActionField_get_Volume, (setter)PyCThostFtdcCombActionField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"CombDirection", (getter)PyCThostFtdcCombActionField_get_CombDirection, (setter)PyCThostFtdcCombActionField_set_CombDirection, (char *)"CombDirection", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcCombActionField_get_HedgeFlag, (setter)PyCThostFtdcCombActionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcCombActionField_get_ActionLocalID, (setter)PyCThostFtdcCombActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcCombActionField_get_ExchangeID, (setter)PyCThostFtdcCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcCombActionField_get_ParticipantID, (setter)PyCThostFtdcCombActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcCombActionField_get_ClientID, (setter)PyCThostFtdcCombActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcCombActionField_get_reserve2, (setter)PyCThostFtdcCombActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcCombActionField_get_TraderID, (setter)PyCThostFtdcCombActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcCombActionField_get_InstallID, (setter)PyCThostFtdcCombActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"ActionStatus", (getter)PyCThostFtdcCombActionField_get_ActionStatus, (setter)PyCThostFtdcCombActionField_set_ActionStatus, (char *)"ActionStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcCombActionField_get_NotifySequence, (setter)PyCThostFtdcCombActionField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcCombActionField_get_TradingDay, (setter)PyCThostFtdcCombActionField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcCombActionField_get_SettlementID, (setter)PyCThostFtdcCombActionField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcCombActionField_get_SequenceNo, (setter)PyCThostFtdcCombActionField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcCombActionField_get_FrontID, (setter)PyCThostFtdcCombActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcCombActionField_get_SessionID, (setter)PyCThostFtdcCombActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcCombActionField_get_UserProductInfo, (setter)PyCThostFtdcCombActionField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcCombActionField_get_StatusMsg, (setter)PyCThostFtdcCombActionField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"reserve3", (getter)PyCThostFtdcCombActionField_get_reserve3, (setter)PyCThostFtdcCombActionField_set_reserve3, (char *)"reserve3", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcCombActionField_get_MacAddress, (setter)PyCThostFtdcCombActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ComTradeID", (getter)PyCThostFtdcCombActionField_get_ComTradeID, (setter)PyCThostFtdcCombActionField_set_ComTradeID, (char *)"ComTradeID", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcCombActionField_get_BranchID, (setter)PyCThostFtdcCombActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcCombActionField_get_InvestUnitID, (setter)PyCThostFtdcCombActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcCombActionField_get_InstrumentID, (setter)PyCThostFtdcCombActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcCombActionField_get_ExchangeInstID, (setter)PyCThostFtdcCombActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcCombActionField_get_IPAddress, (setter)PyCThostFtdcCombActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCombActionField_new,       /* tp_new */
};

int PyCThostFtdcCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCombActionField  */
	if (PyType_Ready(&PyCThostFtdcCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCombActionField", (PyObject *)&PyCThostFtdcCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombActionField to module");
        Py_DECREF(&PyCThostFtdcCombActionFieldType);
		return -1;
    }

    return 0;
}
