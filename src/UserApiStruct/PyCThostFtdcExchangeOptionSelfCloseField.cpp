
#include "PyCThostFtdcExchangeOptionSelfCloseField.h"



static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOptionSelfCloseField *self = (PyCThostFtdcExchangeOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOptionSelfCloseField_init(PyCThostFtdcExchangeOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "OptionSelfCloseLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OptionSelfCloseSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcVolumeType int
	int pExchangeOptionSelfCloseField_Volume = 0;

	//TThostFtdcRequestIDType int
	int pExchangeOptionSelfCloseField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeOptionSelfCloseField_BusinessUnit = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_BusinessUnit_len = 0;

	//TThostFtdcHedgeFlagType char
	char pExchangeOptionSelfCloseField_HedgeFlag = 0;

	//TThostFtdcOptSelfCloseFlagType char
	char pExchangeOptionSelfCloseField_OptSelfCloseFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeOptionSelfCloseField_ExchangeID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeOptionSelfCloseField_ParticipantID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeOptionSelfCloseField_ClientID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeOptionSelfCloseField_reserve1 = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_reserve1_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeOptionSelfCloseField_TraderID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeOptionSelfCloseField_InstallID = 0;

	//TThostFtdcOrderSubmitStatusType char
	char pExchangeOptionSelfCloseField_OrderSubmitStatus = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeOptionSelfCloseField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeOptionSelfCloseField_TradingDay = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pExchangeOptionSelfCloseField_SettlementID = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeOptionSelfCloseField_OptionSelfCloseSysID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_OptionSelfCloseSysID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeOptionSelfCloseField_InsertDate = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_InsertDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOptionSelfCloseField_InsertTime = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_InsertTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOptionSelfCloseField_CancelTime = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_CancelTime_len = 0;

	//TThostFtdcExecResultType char
	char pExchangeOptionSelfCloseField_ExecResult = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeOptionSelfCloseField_ClearingPartID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_ClearingPartID_len = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeOptionSelfCloseField_SequenceNo = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeOptionSelfCloseField_BranchID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_BranchID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeOptionSelfCloseField_reserve2 = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeOptionSelfCloseField_MacAddress = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_MacAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeOptionSelfCloseField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeOptionSelfCloseField_IPAddress = NULL;
	Py_ssize_t pExchangeOptionSelfCloseField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#ccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#ccs#s#s#s#s#s#icis#is#s#s#s#cs#is#s#s#s#s#", (char **)kwlist
#endif

		, &pExchangeOptionSelfCloseField_Volume
		, &pExchangeOptionSelfCloseField_RequestID
		, &pExchangeOptionSelfCloseField_BusinessUnit, &pExchangeOptionSelfCloseField_BusinessUnit_len
		, &pExchangeOptionSelfCloseField_HedgeFlag
		, &pExchangeOptionSelfCloseField_OptSelfCloseFlag
		, &pExchangeOptionSelfCloseField_OptionSelfCloseLocalID, &pExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len
		, &pExchangeOptionSelfCloseField_ExchangeID, &pExchangeOptionSelfCloseField_ExchangeID_len
		, &pExchangeOptionSelfCloseField_ParticipantID, &pExchangeOptionSelfCloseField_ParticipantID_len
		, &pExchangeOptionSelfCloseField_ClientID, &pExchangeOptionSelfCloseField_ClientID_len
		, &pExchangeOptionSelfCloseField_reserve1, &pExchangeOptionSelfCloseField_reserve1_len
		, &pExchangeOptionSelfCloseField_TraderID, &pExchangeOptionSelfCloseField_TraderID_len
		, &pExchangeOptionSelfCloseField_InstallID
		, &pExchangeOptionSelfCloseField_OrderSubmitStatus
		, &pExchangeOptionSelfCloseField_NotifySequence
		, &pExchangeOptionSelfCloseField_TradingDay, &pExchangeOptionSelfCloseField_TradingDay_len
		, &pExchangeOptionSelfCloseField_SettlementID
		, &pExchangeOptionSelfCloseField_OptionSelfCloseSysID, &pExchangeOptionSelfCloseField_OptionSelfCloseSysID_len
		, &pExchangeOptionSelfCloseField_InsertDate, &pExchangeOptionSelfCloseField_InsertDate_len
		, &pExchangeOptionSelfCloseField_InsertTime, &pExchangeOptionSelfCloseField_InsertTime_len
		, &pExchangeOptionSelfCloseField_CancelTime, &pExchangeOptionSelfCloseField_CancelTime_len
		, &pExchangeOptionSelfCloseField_ExecResult
		, &pExchangeOptionSelfCloseField_ClearingPartID, &pExchangeOptionSelfCloseField_ClearingPartID_len
		, &pExchangeOptionSelfCloseField_SequenceNo
		, &pExchangeOptionSelfCloseField_BranchID, &pExchangeOptionSelfCloseField_BranchID_len
		, &pExchangeOptionSelfCloseField_reserve2, &pExchangeOptionSelfCloseField_reserve2_len
		, &pExchangeOptionSelfCloseField_MacAddress, &pExchangeOptionSelfCloseField_MacAddress_len
		, &pExchangeOptionSelfCloseField_ExchangeInstID, &pExchangeOptionSelfCloseField_ExchangeInstID_len
		, &pExchangeOptionSelfCloseField_IPAddress, &pExchangeOptionSelfCloseField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcVolumeType int
	self->data.Volume = pExchangeOptionSelfCloseField_Volume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pExchangeOptionSelfCloseField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeOptionSelfCloseField_BusinessUnit != NULL) {
		if(pExchangeOptionSelfCloseField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeOptionSelfCloseField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeOptionSelfCloseField_BusinessUnit = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pExchangeOptionSelfCloseField_HedgeFlag;

	//TThostFtdcOptSelfCloseFlagType char
	self->data.OptSelfCloseFlag = pExchangeOptionSelfCloseField_OptSelfCloseFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOptionSelfCloseField_OptionSelfCloseLocalID != NULL) {
		if(pExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseLocalID, pExchangeOptionSelfCloseField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
		pExchangeOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeOptionSelfCloseField_ExchangeID != NULL) {
		if(pExchangeOptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeOptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeOptionSelfCloseField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeOptionSelfCloseField_ParticipantID != NULL) {
		if(pExchangeOptionSelfCloseField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeOptionSelfCloseField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeOptionSelfCloseField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeOptionSelfCloseField_ClientID != NULL) {
		if(pExchangeOptionSelfCloseField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeOptionSelfCloseField_ClientID, sizeof(self->data.ClientID) );
		pExchangeOptionSelfCloseField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeOptionSelfCloseField_reserve1 != NULL) {
		if(pExchangeOptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeOptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
		pExchangeOptionSelfCloseField_reserve1 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeOptionSelfCloseField_TraderID != NULL) {
		if(pExchangeOptionSelfCloseField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeOptionSelfCloseField_TraderID, sizeof(self->data.TraderID) );
		pExchangeOptionSelfCloseField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeOptionSelfCloseField_InstallID;

	//TThostFtdcOrderSubmitStatusType char
	self->data.OrderSubmitStatus = pExchangeOptionSelfCloseField_OrderSubmitStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pExchangeOptionSelfCloseField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pExchangeOptionSelfCloseField_TradingDay != NULL) {
		if(pExchangeOptionSelfCloseField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pExchangeOptionSelfCloseField_TradingDay, sizeof(self->data.TradingDay) );
		pExchangeOptionSelfCloseField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pExchangeOptionSelfCloseField_SettlementID;

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeOptionSelfCloseField_OptionSelfCloseSysID != NULL) {
		if(pExchangeOptionSelfCloseField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseSysID, pExchangeOptionSelfCloseField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
		pExchangeOptionSelfCloseField_OptionSelfCloseSysID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pExchangeOptionSelfCloseField_InsertDate != NULL) {
		if(pExchangeOptionSelfCloseField_InsertDate_len > (Py_ssize_t)sizeof(self->data.InsertDate)) {
			PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_InsertDate_len, (Py_ssize_t)sizeof(self->data.InsertDate));
			return -1;
		}
		strncpy(self->data.InsertDate, pExchangeOptionSelfCloseField_InsertDate, sizeof(self->data.InsertDate) );
		pExchangeOptionSelfCloseField_InsertDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOptionSelfCloseField_InsertTime != NULL) {
		if(pExchangeOptionSelfCloseField_InsertTime_len > (Py_ssize_t)sizeof(self->data.InsertTime)) {
			PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_InsertTime_len, (Py_ssize_t)sizeof(self->data.InsertTime));
			return -1;
		}
		strncpy(self->data.InsertTime, pExchangeOptionSelfCloseField_InsertTime, sizeof(self->data.InsertTime) );
		pExchangeOptionSelfCloseField_InsertTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOptionSelfCloseField_CancelTime != NULL) {
		if(pExchangeOptionSelfCloseField_CancelTime_len > (Py_ssize_t)sizeof(self->data.CancelTime)) {
			PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_CancelTime_len, (Py_ssize_t)sizeof(self->data.CancelTime));
			return -1;
		}
		strncpy(self->data.CancelTime, pExchangeOptionSelfCloseField_CancelTime, sizeof(self->data.CancelTime) );
		pExchangeOptionSelfCloseField_CancelTime = NULL;
	}

	//TThostFtdcExecResultType char
	self->data.ExecResult = pExchangeOptionSelfCloseField_ExecResult;

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeOptionSelfCloseField_ClearingPartID != NULL) {
		if(pExchangeOptionSelfCloseField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pExchangeOptionSelfCloseField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pExchangeOptionSelfCloseField_ClearingPartID = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExchangeOptionSelfCloseField_SequenceNo;

	//TThostFtdcBranchIDType char[9]
	if(pExchangeOptionSelfCloseField_BranchID != NULL) {
		if(pExchangeOptionSelfCloseField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeOptionSelfCloseField_BranchID, sizeof(self->data.BranchID) );
		pExchangeOptionSelfCloseField_BranchID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeOptionSelfCloseField_reserve2 != NULL) {
		if(pExchangeOptionSelfCloseField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeOptionSelfCloseField_reserve2, sizeof(self->data.reserve2) );
		pExchangeOptionSelfCloseField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeOptionSelfCloseField_MacAddress != NULL) {
		if(pExchangeOptionSelfCloseField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeOptionSelfCloseField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeOptionSelfCloseField_MacAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeOptionSelfCloseField_ExchangeInstID != NULL) {
		if(pExchangeOptionSelfCloseField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeOptionSelfCloseField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeOptionSelfCloseField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeOptionSelfCloseField_IPAddress != NULL) {
		if(pExchangeOptionSelfCloseField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeOptionSelfCloseField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeOptionSelfCloseField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeOptionSelfCloseField_dealloc(PyCThostFtdcExchangeOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_repr(PyCThostFtdcExchangeOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "Volume", self->data.Volume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "HedgeFlag", self->data.HedgeFlag
		, "OptSelfCloseFlag", self->data.OptSelfCloseFlag
		, "OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID 
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
		, "OptionSelfCloseSysID", self->data.OptionSelfCloseSysID 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_Volume(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_RequestID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_HedgeFlag(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ClientID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_reserve1(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_TraderID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_InstallID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OrderSubmitStatus(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderSubmitStatus), 1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_NotifySequence(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_TradingDay(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_SettlementID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_InsertDate(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertDate);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_InsertTime(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InsertTime);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_CancelTime(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelTime);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ExecResult(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ExecResult), 1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ClearingPartID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_SequenceNo(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_BranchID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_reserve2(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_MacAddress(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseField_get_IPAddress(PyCThostFtdcExchangeOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeOptionSelfCloseField_set_Volume(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_RequestID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_HedgeFlag(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptSelfCloseFlag)) {
		PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OptSelfCloseFlag = *buf;
	return 0;
}

static int PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseLocalID, buf, sizeof(self->data.OptionSelfCloseLocalID));
	return 0;
}

static int PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_ClientID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_reserve1(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_TraderID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_InstallID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_OrderSubmitStatus(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_NotifySequence(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_TradingDay(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_SettlementID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
	return 0;
}

static int PyCThostFtdcExchangeOptionSelfCloseField_set_InsertDate(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_InsertTime(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_CancelTime(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_ExecResult(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_ClearingPartID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_SequenceNo(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_BranchID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_reserve2(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_MacAddress(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseField_set_IPAddress(PyCThostFtdcExchangeOptionSelfCloseField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeOptionSelfCloseField_getset[] = {
	 {(char *)"Volume", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_Volume, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_RequestID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_HedgeFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OptSelfCloseFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
	 {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ParticipantID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ClientID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_TraderID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_InstallID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderSubmitStatus", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OrderSubmitStatus, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OrderSubmitStatus, (char *)"OrderSubmitStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_NotifySequence, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_TradingDay, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_SettlementID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
	 {(char *)"InsertDate", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_InsertDate, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_InsertDate, (char *)"InsertDate", NULL},
	 {(char *)"InsertTime", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_InsertTime, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_InsertTime, (char *)"InsertTime", NULL},
	 {(char *)"CancelTime", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_CancelTime, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_CancelTime, (char *)"CancelTime", NULL},
	 {(char *)"ExecResult", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ExecResult, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ExecResult, (char *)"ExecResult", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ClearingPartID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_SequenceNo, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_BranchID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_reserve2, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_MacAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseField_get_IPAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOptionSelfCloseField", (PyObject *)&PyCThostFtdcExchangeOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcExchangeOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
