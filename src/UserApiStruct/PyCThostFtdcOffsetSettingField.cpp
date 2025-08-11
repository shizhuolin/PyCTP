
#include "PyCThostFtdcOffsetSettingField.h"



static PyObject *PyCThostFtdcOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOffsetSettingField *self = (PyCThostFtdcOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOffsetSettingField_init(PyCThostFtdcOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress", "ExchangeInstID", "ExchangeSerialNo", "ExchangeProductID", "ParticipantID", "ClientID", "TraderID", "InstallID", "OrderSubmitStatus", "TradingDay", "SettlementID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "SequenceNo", "FrontID", "SessionID", "StatusMsg", "ActiveUserID", "BrokerOffsetSettingSeq", "ApplySrc",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pOffsetSettingField_BrokerID = NULL;
	Py_ssize_t pOffsetSettingField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pOffsetSettingField_InvestorID = NULL;
	Py_ssize_t pOffsetSettingField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOffsetSettingField_InstrumentID = NULL;
	Py_ssize_t pOffsetSettingField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pOffsetSettingField_UnderlyingInstrID = NULL;
	Py_ssize_t pOffsetSettingField_UnderlyingInstrID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pOffsetSettingField_ProductID = NULL;
	Py_ssize_t pOffsetSettingField_ProductID_len = 0;

	//TThostFtdcOffsetTypeType char
	char pOffsetSettingField_OffsetType = 0;

	//TThostFtdcVolumeType int
	int pOffsetSettingField_Volume = 0;

	//TThostFtdcBoolType int
	int pOffsetSettingField_IsOffset = 0;

	//TThostFtdcRequestIDType int
	int pOffsetSettingField_RequestID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOffsetSettingField_UserID = NULL;
	Py_ssize_t pOffsetSettingField_UserID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pOffsetSettingField_ExchangeID = NULL;
	Py_ssize_t pOffsetSettingField_ExchangeID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pOffsetSettingField_IPAddress = NULL;
	Py_ssize_t pOffsetSettingField_IPAddress_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pOffsetSettingField_MacAddress = NULL;
	Py_ssize_t pOffsetSettingField_MacAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pOffsetSettingField_ExchangeInstID = NULL;
	Py_ssize_t pOffsetSettingField_ExchangeInstID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pOffsetSettingField_ExchangeSerialNo = NULL;
	Py_ssize_t pOffsetSettingField_ExchangeSerialNo_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pOffsetSettingField_ExchangeProductID = NULL;
	Py_ssize_t pOffsetSettingField_ExchangeProductID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pOffsetSettingField_ParticipantID = NULL;
	Py_ssize_t pOffsetSettingField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pOffsetSettingField_ClientID = NULL;
	Py_ssize_t pOffsetSettingField_ClientID_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pOffsetSettingField_TraderID = NULL;
	Py_ssize_t pOffsetSettingField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pOffsetSettingField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pOffsetSettingField_OrderSubmitStatus = 0;

	//TThostFtdcDateType char[9]
	const char *pOffsetSettingField_TradingDay = NULL;
	Py_ssize_t pOffsetSettingField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pOffsetSettingField_SettlementID = 0;

	//TThostFtdcDateType char[9]
	const char *pOffsetSettingField_InsertDate = NULL;
	Py_ssize_t pOffsetSettingField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOffsetSettingField_InsertTime = NULL;
	Py_ssize_t pOffsetSettingField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pOffsetSettingField_CancelTime = NULL;
	Py_ssize_t pOffsetSettingField_CancelTime_len = 0;

	//TThostFtdcExecResultType char
	char pOffsetSettingField_ExecResult = 0;

	//TThostFtdcSequenceNoType int
	int pOffsetSettingField_SequenceNo = 0;

	//TThostFtdcFrontIDType int
	int pOffsetSettingField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pOffsetSettingField_SessionID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pOffsetSettingField_StatusMsg = NULL;
	Py_ssize_t pOffsetSettingField_StatusMsg_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOffsetSettingField_ActiveUserID = NULL;
	Py_ssize_t pOffsetSettingField_ActiveUserID_len = 0;

	//TThostFtdcSequenceNoType int
	int pOffsetSettingField_BrokerOffsetSettingSeq = 0;

	//TThostFtdcApplySrcType char
	char pOffsetSettingField_ApplySrc = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#y#y#y#y#y#y#icy#iy#y#y#ciiiy#y#ic", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiis#s#s#s#s#s#s#s#s#s#ics#is#s#s#ciiis#s#ic", (char **)kwlist
#endif

		, &pOffsetSettingField_BrokerID, &pOffsetSettingField_BrokerID_len
		, &pOffsetSettingField_InvestorID, &pOffsetSettingField_InvestorID_len
		, &pOffsetSettingField_InstrumentID, &pOffsetSettingField_InstrumentID_len
		, &pOffsetSettingField_UnderlyingInstrID, &pOffsetSettingField_UnderlyingInstrID_len
		, &pOffsetSettingField_ProductID, &pOffsetSettingField_ProductID_len
		, &pOffsetSettingField_OffsetType
		, &pOffsetSettingField_Volume
		, &pOffsetSettingField_IsOffset
		, &pOffsetSettingField_RequestID
		, &pOffsetSettingField_UserID, &pOffsetSettingField_UserID_len
		, &pOffsetSettingField_ExchangeID, &pOffsetSettingField_ExchangeID_len
		, &pOffsetSettingField_IPAddress, &pOffsetSettingField_IPAddress_len
		, &pOffsetSettingField_MacAddress, &pOffsetSettingField_MacAddress_len
		, &pOffsetSettingField_ExchangeInstID, &pOffsetSettingField_ExchangeInstID_len
		, &pOffsetSettingField_ExchangeSerialNo, &pOffsetSettingField_ExchangeSerialNo_len
		, &pOffsetSettingField_ExchangeProductID, &pOffsetSettingField_ExchangeProductID_len
		, &pOffsetSettingField_ParticipantID, &pOffsetSettingField_ParticipantID_len
		, &pOffsetSettingField_ClientID, &pOffsetSettingField_ClientID_len
		, &pOffsetSettingField_TraderID, &pOffsetSettingField_TraderID_len
		, &pOffsetSettingField_InstallID
		, &pOffsetSettingField_OrderSubmitStatus
		, &pOffsetSettingField_TradingDay, &pOffsetSettingField_TradingDay_len
		, &pOffsetSettingField_SettlementID
		, &pOffsetSettingField_InsertDate, &pOffsetSettingField_InsertDate_len
		, &pOffsetSettingField_InsertTime, &pOffsetSettingField_InsertTime_len
		, &pOffsetSettingField_CancelTime, &pOffsetSettingField_CancelTime_len
		, &pOffsetSettingField_ExecResult
		, &pOffsetSettingField_SequenceNo
		, &pOffsetSettingField_FrontID
		, &pOffsetSettingField_SessionID
		, &pOffsetSettingField_StatusMsg, &pOffsetSettingField_StatusMsg_len
		, &pOffsetSettingField_ActiveUserID, &pOffsetSettingField_ActiveUserID_len
		, &pOffsetSettingField_BrokerOffsetSettingSeq
		, &pOffsetSettingField_ApplySrc


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pOffsetSettingField_BrokerID != NULL) {
		if(pOffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
		pOffsetSettingField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pOffsetSettingField_InvestorID != NULL) {
		if(pOffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pOffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
		pOffsetSettingField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOffsetSettingField_InstrumentID != NULL) {
		if(pOffsetSettingField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pOffsetSettingField_InstrumentID, sizeof(self->data.InstrumentID) );
		pOffsetSettingField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pOffsetSettingField_UnderlyingInstrID != NULL) {
		if(pOffsetSettingField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
			PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
			return -1;
		}
		strncpy(self->data.UnderlyingInstrID, pOffsetSettingField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
		pOffsetSettingField_UnderlyingInstrID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pOffsetSettingField_ProductID != NULL) {
		if(pOffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pOffsetSettingField_ProductID, sizeof(self->data.ProductID) );
		pOffsetSettingField_ProductID = NULL;
	}

	//TThostFtdcOffsetTypeType char
	self->data.OffsetType = pOffsetSettingField_OffsetType;

	//TThostFtdcVolumeType int
	self->data.Volume = pOffsetSettingField_Volume;

	//TThostFtdcBoolType int
	self->data.IsOffset = pOffsetSettingField_IsOffset;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pOffsetSettingField_RequestID;

	//TThostFtdcUserIDType char[16]
	if(pOffsetSettingField_UserID != NULL) {
		if(pOffsetSettingField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pOffsetSettingField_UserID, sizeof(self->data.UserID) );
		pOffsetSettingField_UserID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pOffsetSettingField_ExchangeID != NULL) {
		if(pOffsetSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pOffsetSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
		pOffsetSettingField_ExchangeID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pOffsetSettingField_IPAddress != NULL) {
		if(pOffsetSettingField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pOffsetSettingField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pOffsetSettingField_IPAddress, sizeof(self->data.IPAddress) );
		pOffsetSettingField_IPAddress = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pOffsetSettingField_MacAddress != NULL) {
		if(pOffsetSettingField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pOffsetSettingField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pOffsetSettingField_MacAddress, sizeof(self->data.MacAddress) );
		pOffsetSettingField_MacAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pOffsetSettingField_ExchangeInstID != NULL) {
		if(pOffsetSettingField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pOffsetSettingField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pOffsetSettingField_ExchangeInstID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pOffsetSettingField_ExchangeSerialNo != NULL) {
		if(pOffsetSettingField_ExchangeSerialNo_len > (Py_ssize_t)sizeof(self->data.ExchangeSerialNo)) {
			PyErr_Format(PyExc_ValueError, "ExchangeSerialNo too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ExchangeSerialNo_len, (Py_ssize_t)sizeof(self->data.ExchangeSerialNo));
			return -1;
		}
		strncpy(self->data.ExchangeSerialNo, pOffsetSettingField_ExchangeSerialNo, sizeof(self->data.ExchangeSerialNo) );
		pOffsetSettingField_ExchangeSerialNo = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pOffsetSettingField_ExchangeProductID != NULL) {
		if(pOffsetSettingField_ExchangeProductID_len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeProductID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ExchangeProductID_len, (Py_ssize_t)sizeof(self->data.ExchangeProductID));
			return -1;
		}
		strncpy(self->data.ExchangeProductID, pOffsetSettingField_ExchangeProductID, sizeof(self->data.ExchangeProductID) );
		pOffsetSettingField_ExchangeProductID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pOffsetSettingField_ParticipantID != NULL) {
		if(pOffsetSettingField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pOffsetSettingField_ParticipantID, sizeof(self->data.ParticipantID) );
		pOffsetSettingField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pOffsetSettingField_ClientID != NULL) {
		if(pOffsetSettingField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pOffsetSettingField_ClientID, sizeof(self->data.ClientID) );
		pOffsetSettingField_ClientID = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pOffsetSettingField_TraderID != NULL) {
		if(pOffsetSettingField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pOffsetSettingField_TraderID, sizeof(self->data.TraderID) );
		pOffsetSettingField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pOffsetSettingField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pOffsetSettingField_OrderSubmitStatus;

	//TThostFtdcDateType char[9]
	if(pOffsetSettingField_TradingDay != NULL) {
		if(pOffsetSettingField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pOffsetSettingField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pOffsetSettingField_TradingDay, sizeof(self->data.TradingDay) );
		pOffsetSettingField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pOffsetSettingField_SettlementID;

	//TThostFtdcDateType char[9]
	if(pOffsetSettingField_InsertDate != NULL) {
		if(pOffsetSettingField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pOffsetSettingField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pOffsetSettingField_InsertDate, sizeof(self->data.InsertDate) );
		pOffsetSettingField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOffsetSettingField_InsertTime != NULL) {
		if(pOffsetSettingField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pOffsetSettingField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pOffsetSettingField_InsertTime, sizeof(self->data.InsertTime) );
		pOffsetSettingField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pOffsetSettingField_CancelTime != NULL) {
		if(pOffsetSettingField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pOffsetSettingField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pOffsetSettingField_CancelTime, sizeof(self->data.CancelTime) );
		pOffsetSettingField_CancelTime = NULL;
	}

	//TThostFtdcExecResultType char
	self->data.ExecResult = pOffsetSettingField_ExecResult;

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pOffsetSettingField_SequenceNo;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pOffsetSettingField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pOffsetSettingField_SessionID;

	//TThostFtdcErrorMsgType char[81]
	if(pOffsetSettingField_StatusMsg != NULL) {
		if(pOffsetSettingField_StatusMsg_len > (Py_ssize_t)sizeof(self->data.StatusMsg)) {
			PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is %zd)", pOffsetSettingField_StatusMsg_len, (Py_ssize_t)sizeof(self->data.StatusMsg));
			return -1;
		}
		strncpy(self->data.StatusMsg, pOffsetSettingField_StatusMsg, sizeof(self->data.StatusMsg) );
		pOffsetSettingField_StatusMsg = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pOffsetSettingField_ActiveUserID != NULL) {
		if(pOffsetSettingField_ActiveUserID_len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
			PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is %zd)", pOffsetSettingField_ActiveUserID_len, (Py_ssize_t)sizeof(self->data.ActiveUserID));
			return -1;
		}
		strncpy(self->data.ActiveUserID, pOffsetSettingField_ActiveUserID, sizeof(self->data.ActiveUserID) );
		pOffsetSettingField_ActiveUserID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.BrokerOffsetSettingSeq = pOffsetSettingField_BrokerOffsetSettingSeq;

	//TThostFtdcApplySrcType char
	self->data.ApplySrc = pOffsetSettingField_ApplySrc;



    return 0;
}

static void PyCThostFtdcOffsetSettingField_dealloc(PyCThostFtdcOffsetSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOffsetSettingField_repr(PyCThostFtdcOffsetSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:i,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:i,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:s,s:s,s:i,s:c}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InstrumentID", self->data.InstrumentID 
		, "UnderlyingInstrID", self->data.UnderlyingInstrID 
		, "ProductID", self->data.ProductID 
		, "OffsetType", self->data.OffsetType
		, "Volume", self->data.Volume
		, "IsOffset", self->data.IsOffset
		, "RequestID", self->data.RequestID
		, "UserID", self->data.UserID 
		, "ExchangeID", self->data.ExchangeID 
		, "IPAddress", self->data.IPAddress 
		, "MacAddress", self->data.MacAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "ExchangeSerialNo", self->data.ExchangeSerialNo 
		, "ExchangeProductID", self->data.ExchangeProductID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OrderSubmitStatus", self->data.OrderSubmitStatus
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "InsertDate", self->data.InsertDate 
		, "InsertTime", self->data.InsertTime 
		, "CancelTime", self->data.CancelTime 
		, "ExecResult", self->data.ExecResult
		, "SequenceNo", self->data.SequenceNo
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "StatusMsg", self->data.StatusMsg 
		, "ActiveUserID", self->data.ActiveUserID 
		, "BrokerOffsetSettingSeq", self->data.BrokerOffsetSettingSeq
		, "ApplySrc", self->data.ApplySrc


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_BrokerID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_InvestorID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_InstrumentID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_UnderlyingInstrID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.UnderlyingInstrID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ProductID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_OffsetType(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_Volume(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_IsOffset(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsOffset);
#else 
	return PyInt_FromLong(self->data.IsOffset);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_RequestID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_UserID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_IPAddress(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_MacAddress(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeInstID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeSerialNo(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeSerialNo);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ExchangeProductID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeProductID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ParticipantID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ClientID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_TraderID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_InstallID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_OrderSubmitStatus(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_TradingDay(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_SettlementID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_InsertDate(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_InsertTime(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_CancelTime(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ExecResult(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_SequenceNo(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_FrontID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_SessionID(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_StatusMsg(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.StatusMsg);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ActiveUserID(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ActiveUserID);
}

static PyObject *PyCThostFtdcOffsetSettingField_get_BrokerOffsetSettingSeq(PyCThostFtdcOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerOffsetSettingSeq);
#else 
	return PyInt_FromLong(self->data.BrokerOffsetSettingSeq);
#endif 
}

static PyObject *PyCThostFtdcOffsetSettingField_get_ApplySrc(PyCThostFtdcOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ApplySrc), 1);
}

static int PyCThostFtdcOffsetSettingField_set_BrokerID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_InvestorID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_InstrumentID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_UnderlyingInstrID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
		PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_ProductID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_OffsetType(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
		PyErr_SetString(PyExc_ValueError, "OffsetType must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetType = *buf;
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_Volume(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_IsOffset(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected int"); 
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
    self->data.IsOffset = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOffsetSettingField_set_RequestID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_UserID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_ExchangeID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_IPAddress(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_MacAddress(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_ExchangeInstID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_ExchangeSerialNo(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeSerialNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeSerialNo)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeSerialNo must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeSerialNo, buf, sizeof(self->data.ExchangeSerialNo));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_ExchangeProductID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeProductID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeProductID, buf, sizeof(self->data.ExchangeProductID));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_ParticipantID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_ClientID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_TraderID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_InstallID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_OrderSubmitStatus(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSubmitStatus)) {
		PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be less than 1 bytes");
		return -1;
	}
	self->data.OrderSubmitStatus = *buf;
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_TradingDay(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_SettlementID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_InsertDate(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
		PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertDate, buf, sizeof(self->data.InsertDate));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_InsertTime(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
		PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.InsertTime, buf, sizeof(self->data.InsertTime));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_CancelTime(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
		PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CancelTime, buf, sizeof(self->data.CancelTime));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_ExecResult(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecResult)) {
		PyErr_SetString(PyExc_ValueError, "ExecResult must be less than 1 bytes");
		return -1;
	}
	self->data.ExecResult = *buf;
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_SequenceNo(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_FrontID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_SessionID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_StatusMsg(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOffsetSettingField_set_ActiveUserID(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActiveUserID)) {
		PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.ActiveUserID, buf, sizeof(self->data.ActiveUserID));
	return 0;
}

static int PyCThostFtdcOffsetSettingField_set_BrokerOffsetSettingSeq(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOffsetSettingSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BrokerOffsetSettingSeq Expected int"); 
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
    self->data.BrokerOffsetSettingSeq = (int)buf; 
    return 0; 
}

static int PyCThostFtdcOffsetSettingField_set_ApplySrc(PyCThostFtdcOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ApplySrc Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ApplySrc)) {
		PyErr_SetString(PyExc_ValueError, "ApplySrc must be less than 1 bytes");
		return -1;
	}
	self->data.ApplySrc = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcOffsetSettingField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcOffsetSettingField_get_InstrumentID, (setter)PyCThostFtdcOffsetSettingField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcOffsetSettingField_get_UnderlyingInstrID, (setter)PyCThostFtdcOffsetSettingField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcOffsetSettingField_get_ProductID, (setter)PyCThostFtdcOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"OffsetType", (getter)PyCThostFtdcOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcOffsetSettingField_get_Volume, (setter)PyCThostFtdcOffsetSettingField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"IsOffset", (getter)PyCThostFtdcOffsetSettingField_get_IsOffset, (setter)PyCThostFtdcOffsetSettingField_set_IsOffset, (char *)"IsOffset", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcOffsetSettingField_get_RequestID, (setter)PyCThostFtdcOffsetSettingField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcOffsetSettingField_get_UserID, (setter)PyCThostFtdcOffsetSettingField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeID, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcOffsetSettingField_get_IPAddress, (setter)PyCThostFtdcOffsetSettingField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcOffsetSettingField_get_MacAddress, (setter)PyCThostFtdcOffsetSettingField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeInstID, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"ExchangeSerialNo", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeSerialNo, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeSerialNo, (char *)"ExchangeSerialNo", NULL},
	 {(char *)"ExchangeProductID", (getter)PyCThostFtdcOffsetSettingField_get_ExchangeProductID, (setter)PyCThostFtdcOffsetSettingField_set_ExchangeProductID, (char *)"ExchangeProductID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcOffsetSettingField_get_ParticipantID, (setter)PyCThostFtdcOffsetSettingField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcOffsetSettingField_get_ClientID, (setter)PyCThostFtdcOffsetSettingField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcOffsetSettingField_get_TraderID, (setter)PyCThostFtdcOffsetSettingField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcOffsetSettingField_get_InstallID, (setter)PyCThostFtdcOffsetSettingField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcOffsetSettingField_get_OrderSubmitStatus, (setter)PyCThostFtdcOffsetSettingField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcOffsetSettingField_get_TradingDay, (setter)PyCThostFtdcOffsetSettingField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcOffsetSettingField_get_SettlementID, (setter)PyCThostFtdcOffsetSettingField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcOffsetSettingField_get_InsertDate, (setter)PyCThostFtdcOffsetSettingField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcOffsetSettingField_get_InsertTime, (setter)PyCThostFtdcOffsetSettingField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcOffsetSettingField_get_CancelTime, (setter)PyCThostFtdcOffsetSettingField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ExecResult", (getter)PyCThostFtdcOffsetSettingField_get_ExecResult, (setter)PyCThostFtdcOffsetSettingField_set_ExecResult, (char *)"ExecResult", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcOffsetSettingField_get_SequenceNo, (setter)PyCThostFtdcOffsetSettingField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcOffsetSettingField_get_FrontID, (setter)PyCThostFtdcOffsetSettingField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcOffsetSettingField_get_SessionID, (setter)PyCThostFtdcOffsetSettingField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"StatusMsg", (getter)PyCThostFtdcOffsetSettingField_get_StatusMsg, (setter)PyCThostFtdcOffsetSettingField_set_StatusMsg, (char *)"StatusMsg", NULL},
	 {(char *)"ActiveUserID", (getter)PyCThostFtdcOffsetSettingField_get_ActiveUserID, (setter)PyCThostFtdcOffsetSettingField_set_ActiveUserID, (char *)"ActiveUserID", NULL},
	 {(char *)"BrokerOffsetSettingSeq", (getter)PyCThostFtdcOffsetSettingField_get_BrokerOffsetSettingSeq, (setter)PyCThostFtdcOffsetSettingField_set_BrokerOffsetSettingSeq, (char *)"BrokerOffsetSettingSeq", NULL},
	 {(char *)"ApplySrc", (getter)PyCThostFtdcOffsetSettingField_get_ApplySrc, (setter)PyCThostFtdcOffsetSettingField_set_ApplySrc, (char *)"ApplySrc", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOffsetSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOffsetSettingField",	/* tp_name */
	sizeof(PyCThostFtdcOffsetSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOffsetSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOffsetSettingField_repr,   /* tp_repr */
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
	"CThostFtdcOffsetSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOffsetSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOffsetSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOffsetSettingField_new,       /* tp_new */
};

int PyCThostFtdcOffsetSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOffsetSettingField  */
	if (PyType_Ready(&PyCThostFtdcOffsetSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOffsetSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOffsetSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOffsetSettingField", (PyObject *)&PyCThostFtdcOffsetSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOffsetSettingField to module");
        Py_DECREF(&PyCThostFtdcOffsetSettingFieldType);
		return -1;
    }

    return 0;
}
