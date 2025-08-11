
#include "PyCThostFtdcExchangeExecOrderField.h"



static PyObject *PyCThostFtdcExchangeExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeExecOrderField *self = (PyCThostFtdcExchangeExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeExecOrderField_init(PyCThostFtdcExchangeExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExecOrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "ExecOrderSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcVolumeType int
	int pExchangeExecOrderField_Volume = 0;

	//TThostFtdcRequestIDType int
	int pExchangeExecOrderField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeExecOrderField_BusinessUnit = NULL;
	Py_ssize_t pExchangeExecOrderField_BusinessUnit_len = 0;

	//TThostFtdcOffsetFlagType char
	char pExchangeExecOrderField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pExchangeExecOrderField_HedgeFlag = 0;

	//TThostFtdcActionTypeType char
	char pExchangeExecOrderField_ActionType = 0;

	//TThostFtdcPosiDirectionType char
	char pExchangeExecOrderField_PosiDirection = 0;

	//TThostFtdcExecOrderPositionFlagType char
	char pExchangeExecOrderField_ReservePositionFlag = 0;

	//TThostFtdcExecOrderCloseFlagType char
	char pExchangeExecOrderField_CloseFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeExecOrderField_ExecOrderLocalID = NULL;
	Py_ssize_t pExchangeExecOrderField_ExecOrderLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeExecOrderField_ExchangeID = NULL;
	Py_ssize_t pExchangeExecOrderField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeExecOrderField_ParticipantID = NULL;
	Py_ssize_t pExchangeExecOrderField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeExecOrderField_ClientID = NULL;
	Py_ssize_t pExchangeExecOrderField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeExecOrderField_reserve1 = NULL;
	Py_ssize_t pExchangeExecOrderField_reserve1_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeExecOrderField_TraderID = NULL;
	Py_ssize_t pExchangeExecOrderField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeExecOrderField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pExchangeExecOrderField_OrderSubmitStatus = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeExecOrderField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeExecOrderField_TradingDay = NULL;
	Py_ssize_t pExchangeExecOrderField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pExchangeExecOrderField_SettlementID = 0;

	//TThostFtdcExecOrderSysIDType char[21]
	const char *pExchangeExecOrderField_ExecOrderSysID = NULL;
	Py_ssize_t pExchangeExecOrderField_ExecOrderSysID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeExecOrderField_InsertDate = NULL;
	Py_ssize_t pExchangeExecOrderField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeExecOrderField_InsertTime = NULL;
	Py_ssize_t pExchangeExecOrderField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeExecOrderField_CancelTime = NULL;
	Py_ssize_t pExchangeExecOrderField_CancelTime_len = 0;

	//TThostFtdcExecResultType char
	char pExchangeExecOrderField_ExecResult = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeExecOrderField_ClearingPartID = NULL;
	Py_ssize_t pExchangeExecOrderField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeExecOrderField_SequenceNo = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeExecOrderField_BranchID = NULL;
	Py_ssize_t pExchangeExecOrderField_BranchID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeExecOrderField_reserve2 = NULL;
	Py_ssize_t pExchangeExecOrderField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeExecOrderField_MacAddress = NULL;
	Py_ssize_t pExchangeExecOrderField_MacAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeExecOrderField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeExecOrderField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeExecOrderField_IPAddress = NULL;
	Py_ssize_t pExchangeExecOrderField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#ccccccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#ccccccs#s#s#s#s#s#icis#is#s#s#s#cs#is#s#s#s#s#", (char **)kwlist
#endif

		, &pExchangeExecOrderField_Volume
		, &pExchangeExecOrderField_RequestID
		, &pExchangeExecOrderField_BusinessUnit, &pExchangeExecOrderField_BusinessUnit_len
		, &pExchangeExecOrderField_OffsetFlag
		, &pExchangeExecOrderField_HedgeFlag
		, &pExchangeExecOrderField_ActionType
		, &pExchangeExecOrderField_PosiDirection
		, &pExchangeExecOrderField_ReservePositionFlag
		, &pExchangeExecOrderField_CloseFlag
		, &pExchangeExecOrderField_ExecOrderLocalID, &pExchangeExecOrderField_ExecOrderLocalID_len
		, &pExchangeExecOrderField_ExchangeID, &pExchangeExecOrderField_ExchangeID_len
		, &pExchangeExecOrderField_ParticipantID, &pExchangeExecOrderField_ParticipantID_len
		, &pExchangeExecOrderField_ClientID, &pExchangeExecOrderField_ClientID_len
		, &pExchangeExecOrderField_reserve1, &pExchangeExecOrderField_reserve1_len
		, &pExchangeExecOrderField_TraderID, &pExchangeExecOrderField_TraderID_len
		, &pExchangeExecOrderField_InstallID
		, &pExchangeExecOrderField_OrderSubmitStatus
		, &pExchangeExecOrderField_NotifySequence
		, &pExchangeExecOrderField_TradingDay, &pExchangeExecOrderField_TradingDay_len
		, &pExchangeExecOrderField_SettlementID
		, &pExchangeExecOrderField_ExecOrderSysID, &pExchangeExecOrderField_ExecOrderSysID_len
		, &pExchangeExecOrderField_InsertDate, &pExchangeExecOrderField_InsertDate_len
		, &pExchangeExecOrderField_InsertTime, &pExchangeExecOrderField_InsertTime_len
		, &pExchangeExecOrderField_CancelTime, &pExchangeExecOrderField_CancelTime_len
		, &pExchangeExecOrderField_ExecResult
		, &pExchangeExecOrderField_ClearingPartID, &pExchangeExecOrderField_ClearingPartID_len
		, &pExchangeExecOrderField_SequenceNo
		, &pExchangeExecOrderField_BranchID, &pExchangeExecOrderField_BranchID_len
		, &pExchangeExecOrderField_reserve2, &pExchangeExecOrderField_reserve2_len
		, &pExchangeExecOrderField_MacAddress, &pExchangeExecOrderField_MacAddress_len
		, &pExchangeExecOrderField_ExchangeInstID, &pExchangeExecOrderField_ExchangeInstID_len
		, &pExchangeExecOrderField_IPAddress, &pExchangeExecOrderField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcVolumeType int
	self->data.Volume = pExchangeExecOrderField_Volume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pExchangeExecOrderField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeExecOrderField_BusinessUnit != NULL) {
		if(pExchangeExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeExecOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pExchangeExecOrderField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pExchangeExecOrderField_HedgeFlag;

	//TThostFtdcActionTypeType char
	self->data.ActionType = pExchangeExecOrderField_ActionType;

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pExchangeExecOrderField_PosiDirection;

	//TThostFtdcExecOrderPositionFlagType char
	self->data.ReservePositionFlag = pExchangeExecOrderField_ReservePositionFlag;

	//TThostFtdcExecOrderCloseFlagType char
	self->data.CloseFlag = pExchangeExecOrderField_CloseFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeExecOrderField_ExecOrderLocalID != NULL) {
		if(pExchangeExecOrderField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
			return -1;
		}
		strncpy(self->data.ExecOrderLocalID, pExchangeExecOrderField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
		pExchangeExecOrderField_ExecOrderLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeExecOrderField_ExchangeID != NULL) {
		if(pExchangeExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeExecOrderField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeExecOrderField_ParticipantID != NULL) {
		if(pExchangeExecOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeExecOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeExecOrderField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeExecOrderField_ClientID != NULL) {
		if(pExchangeExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeExecOrderField_ClientID, sizeof(self->data.ClientID) );
		pExchangeExecOrderField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeExecOrderField_reserve1 != NULL) {
		if(pExchangeExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeExecOrderField_reserve1, sizeof(self->data.reserve1) );
		pExchangeExecOrderField_reserve1 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeExecOrderField_TraderID != NULL) {
		if(pExchangeExecOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeExecOrderField_TraderID, sizeof(self->data.TraderID) );
		pExchangeExecOrderField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeExecOrderField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pExchangeExecOrderField_OrderSubmitStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pExchangeExecOrderField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pExchangeExecOrderField_TradingDay != NULL) {
		if(pExchangeExecOrderField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pExchangeExecOrderField_TradingDay, sizeof(self->data.TradingDay) );
		pExchangeExecOrderField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pExchangeExecOrderField_SettlementID;

	//TThostFtdcExecOrderSysIDType char[21]
	if(pExchangeExecOrderField_ExecOrderSysID != NULL) {
		if(pExchangeExecOrderField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
			return -1;
		}
		strncpy(self->data.ExecOrderSysID, pExchangeExecOrderField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
		pExchangeExecOrderField_ExecOrderSysID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pExchangeExecOrderField_InsertDate != NULL) {
		if(pExchangeExecOrderField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pExchangeExecOrderField_InsertDate, sizeof(self->data.InsertDate) );
		pExchangeExecOrderField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeExecOrderField_InsertTime != NULL) {
		if(pExchangeExecOrderField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pExchangeExecOrderField_InsertTime, sizeof(self->data.InsertTime) );
		pExchangeExecOrderField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeExecOrderField_CancelTime != NULL) {
		if(pExchangeExecOrderField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pExchangeExecOrderField_CancelTime, sizeof(self->data.CancelTime) );
		pExchangeExecOrderField_CancelTime = NULL;
	}

	//TThostFtdcExecResultType char
	self->data.ExecResult = pExchangeExecOrderField_ExecResult;

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeExecOrderField_ClearingPartID != NULL) {
		if(pExchangeExecOrderField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pExchangeExecOrderField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pExchangeExecOrderField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExchangeExecOrderField_SequenceNo;

	//TThostFtdcBranchIDType char[9]
	if(pExchangeExecOrderField_BranchID != NULL) {
		if(pExchangeExecOrderField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeExecOrderField_BranchID, sizeof(self->data.BranchID) );
		pExchangeExecOrderField_BranchID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeExecOrderField_reserve2 != NULL) {
		if(pExchangeExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeExecOrderField_reserve2, sizeof(self->data.reserve2) );
		pExchangeExecOrderField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeExecOrderField_MacAddress != NULL) {
		if(pExchangeExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeExecOrderField_MacAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeExecOrderField_ExchangeInstID != NULL) {
		if(pExchangeExecOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeExecOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeExecOrderField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeExecOrderField_IPAddress != NULL) {
		if(pExchangeExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeExecOrderField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeExecOrderField_dealloc(PyCThostFtdcExchangeExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_repr(PyCThostFtdcExchangeExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "Volume", self->data.Volume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "OffsetFlag", self->data.OffsetFlag
		, "HedgeFlag", self->data.HedgeFlag
		, "ActionType", self->data.ActionType
		, "PosiDirection", self->data.PosiDirection
		, "ReservePositionFlag", self->data.ReservePositionFlag
		, "CloseFlag", self->data.CloseFlag
		, "ExecOrderLocalID", self->data.ExecOrderLocalID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve1", self->data.reserve1 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OrderSubmitStatus", self->data.OrderSubmitStatus
		, "NotifySequence", self->data.NotifySequence
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "ExecOrderSysID", self->data.ExecOrderSysID 
		, "InsertDate", self->data.InsertDate 
		, "InsertTime", self->data.InsertTime 
		, "CancelTime", self->data.CancelTime 
		, "ExecResult", self->data.ExecResult
		, "ClearingPartID", self->data.ClearingPartID 
		, "SequenceNo", self->data.SequenceNo
		, "BranchID", self->data.BranchID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_Volume(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_RequestID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_BusinessUnit(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_OffsetFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_HedgeFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ActionType(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_PosiDirection(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ReservePositionFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_CloseFlag(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderLocalID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExchangeID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ParticipantID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ClientID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_reserve1(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_TraderID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_InstallID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_OrderSubmitStatus(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_NotifySequence(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_TradingDay(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_SettlementID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExecOrderSysID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderSysID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_InsertDate(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_InsertTime(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_CancelTime(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExecResult(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ClearingPartID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_SequenceNo(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_BranchID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_reserve2(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_MacAddress(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_ExchangeInstID(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcExchangeExecOrderField_get_IPAddress(PyCThostFtdcExchangeExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeExecOrderField_set_Volume(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_RequestID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_BusinessUnit(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_OffsetFlag(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "OffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcExchangeExecOrderField_set_HedgeFlag(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_ActionType(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionType)) {
		PyErr_SetString(PyExc_ValueError, "ActionType must be less than 1 bytes");
		return -1;
	}
	self->data.ActionType = *buf;
	return 0;
}

static int PyCThostFtdcExchangeExecOrderField_set_PosiDirection(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
		PyErr_SetString(PyExc_ValueError, "PosiDirection must be less than 1 bytes");
		return -1;
	}
	self->data.PosiDirection = *buf;
	return 0;
}

static int PyCThostFtdcExchangeExecOrderField_set_ReservePositionFlag(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ReservePositionFlag)) {
		PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be less than 1 bytes");
		return -1;
	}
	self->data.ReservePositionFlag = *buf;
	return 0;
}

static int PyCThostFtdcExchangeExecOrderField_set_CloseFlag(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CloseFlag)) {
		PyErr_SetString(PyExc_ValueError, "CloseFlag must be less than 1 bytes");
		return -1;
	}
	self->data.CloseFlag = *buf;
	return 0;
}

static int PyCThostFtdcExchangeExecOrderField_set_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderLocalID, buf, sizeof(self->data.ExecOrderLocalID));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderField_set_ExchangeID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_ParticipantID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_ClientID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_reserve1(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_TraderID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_InstallID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_OrderSubmitStatus(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_NotifySequence(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_TradingDay(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_SettlementID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_ExecOrderSysID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_InsertDate(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_InsertTime(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_CancelTime(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_ExecResult(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_ClearingPartID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
		PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClearingPartID, buf, sizeof(self->data.ClearingPartID));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderField_set_SequenceNo(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_BranchID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_reserve2(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_MacAddress(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_ExchangeInstID(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderField_set_IPAddress(PyCThostFtdcExchangeExecOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeExecOrderField_getset[] = {
	 {(char *)"Volume", (getter)PyCThostFtdcExchangeExecOrderField_get_Volume, (setter)PyCThostFtdcExchangeExecOrderField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcExchangeExecOrderField_get_RequestID, (setter)PyCThostFtdcExchangeExecOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcExchangeExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ActionType", (getter)PyCThostFtdcExchangeExecOrderField_get_ActionType, (setter)PyCThostFtdcExchangeExecOrderField_set_ActionType, (char *)"ActionType", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcExchangeExecOrderField_get_PosiDirection, (setter)PyCThostFtdcExchangeExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"ReservePositionFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
	 {(char *)"CloseFlag", (getter)PyCThostFtdcExchangeExecOrderField_get_CloseFlag, (setter)PyCThostFtdcExchangeExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
	 {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExecOrderLocalID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExchangeID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeExecOrderField_get_ParticipantID, (setter)PyCThostFtdcExchangeExecOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeExecOrderField_get_ClientID, (setter)PyCThostFtdcExchangeExecOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeExecOrderField_get_reserve1, (setter)PyCThostFtdcExchangeExecOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeExecOrderField_get_TraderID, (setter)PyCThostFtdcExchangeExecOrderField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeExecOrderField_get_InstallID, (setter)PyCThostFtdcExchangeExecOrderField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeExecOrderField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeExecOrderField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeExecOrderField_get_NotifySequence, (setter)PyCThostFtdcExchangeExecOrderField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcExchangeExecOrderField_get_TradingDay, (setter)PyCThostFtdcExchangeExecOrderField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcExchangeExecOrderField_get_SettlementID, (setter)PyCThostFtdcExchangeExecOrderField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExecOrderSysID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcExchangeExecOrderField_get_InsertDate, (setter)PyCThostFtdcExchangeExecOrderField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcExchangeExecOrderField_get_InsertTime, (setter)PyCThostFtdcExchangeExecOrderField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcExchangeExecOrderField_get_CancelTime, (setter)PyCThostFtdcExchangeExecOrderField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ExecResult", (getter)PyCThostFtdcExchangeExecOrderField_get_ExecResult, (setter)PyCThostFtdcExchangeExecOrderField_set_ExecResult, (char *)"ExecResult", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeExecOrderField_get_ClearingPartID, (setter)PyCThostFtdcExchangeExecOrderField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeExecOrderField_get_SequenceNo, (setter)PyCThostFtdcExchangeExecOrderField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeExecOrderField_get_BranchID, (setter)PyCThostFtdcExchangeExecOrderField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeExecOrderField_get_reserve2, (setter)PyCThostFtdcExchangeExecOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeExecOrderField_get_MacAddress, (setter)PyCThostFtdcExchangeExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeExecOrderField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeExecOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeExecOrderField_get_IPAddress, (setter)PyCThostFtdcExchangeExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcExchangeExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcExchangeExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeExecOrderField", (PyObject *)&PyCThostFtdcExchangeExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeExecOrderField to module");
        Py_DECREF(&PyCThostFtdcExchangeExecOrderFieldType);
		return -1;
    }

    return 0;
}
