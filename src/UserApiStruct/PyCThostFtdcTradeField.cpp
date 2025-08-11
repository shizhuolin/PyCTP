
#include "PyCThostFtdcTradeField.h"



static PyObject *PyCThostFtdcTradeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradeField *self = (PyCThostFtdcTradeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradeField_init(PyCThostFtdcTradeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OrderRef", "UserID", "ExchangeID", "TradeID", "Direction", "OrderSysID", "ParticipantID", "ClientID", "TradingRole", "reserve2", "OffsetFlag", "HedgeFlag", "Price", "Volume", "TradeDate", "TradeTime", "TradeType", "PriceSource", "TraderID", "OrderLocalID", "ClearingPartID", "BusinessUnit", "SequenceNo", "TradingDay", "SettlementID", "BrokerOrderSeq", "TradeSource", "InvestUnitID", "InstrumentID", "ExchangeInstID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradeField_BrokerID = NULL;
	Py_ssize_t pTradeField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pTradeField_InvestorID = NULL;
	Py_ssize_t pTradeField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pTradeField_reserve1 = NULL;
	Py_ssize_t pTradeField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pTradeField_OrderRef = NULL;
	Py_ssize_t pTradeField_OrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pTradeField_UserID = NULL;
	Py_ssize_t pTradeField_UserID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pTradeField_ExchangeID = NULL;
	Py_ssize_t pTradeField_ExchangeID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pTradeField_TradeID = NULL;
	Py_ssize_t pTradeField_TradeID_len = 0;

	//TThostFtdcDirectionType char
	char pTradeField_Direction = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pTradeField_OrderSysID = NULL;
	Py_ssize_t pTradeField_OrderSysID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pTradeField_ParticipantID = NULL;
	Py_ssize_t pTradeField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pTradeField_ClientID = NULL;
	Py_ssize_t pTradeField_ClientID_len = 0;

	//TThostFtdcTradingRoleType char
	char pTradeField_TradingRole = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pTradeField_reserve2 = NULL;
	Py_ssize_t pTradeField_reserve2_len = 0;

	//TThostFtdcOffsetFlagType char
	char pTradeField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pTradeField_HedgeFlag = 0;

	//TThostFtdcPriceType double
	double pTradeField_Price = 0.0;

	//TThostFtdcVolumeType int
	int pTradeField_Volume = 0;

	//TThostFtdcDateType char[9]
	const char *pTradeField_TradeDate = NULL;
	Py_ssize_t pTradeField_TradeDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pTradeField_TradeTime = NULL;
	Py_ssize_t pTradeField_TradeTime_len = 0;

	//TThostFtdcTradeTypeType char
	char pTradeField_TradeType = 0;

	//TThostFtdcPriceSourceType char
	char pTradeField_PriceSource = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pTradeField_TraderID = NULL;
	Py_ssize_t pTradeField_TraderID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pTradeField_OrderLocalID = NULL;
	Py_ssize_t pTradeField_OrderLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pTradeField_ClearingPartID = NULL;
	Py_ssize_t pTradeField_ClearingPartID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pTradeField_BusinessUnit = NULL;
	Py_ssize_t pTradeField_BusinessUnit_len = 0;

	//TThostFtdcSequenceNoType int
	int pTradeField_SequenceNo = 0;

	//TThostFtdcDateType char[9]
	const char *pTradeField_TradingDay = NULL;
	Py_ssize_t pTradeField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pTradeField_SettlementID = 0;

	//TThostFtdcSequenceNoType int
	int pTradeField_BrokerOrderSeq = 0;

	//TThostFtdcTradeSourceType char
	char pTradeField_TradeSource = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pTradeField_InvestUnitID = NULL;
	Py_ssize_t pTradeField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pTradeField_InstrumentID = NULL;
	Py_ssize_t pTradeField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pTradeField_ExchangeInstID = NULL;
	Py_ssize_t pTradeField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#cy#y#y#cy#ccdiy#y#ccy#y#y#y#iy#iicy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#cs#s#s#cs#ccdis#s#ccs#s#s#s#is#iics#s#s#", (char **)kwlist
#endif

		, &pTradeField_BrokerID, &pTradeField_BrokerID_len
		, &pTradeField_InvestorID, &pTradeField_InvestorID_len
		, &pTradeField_reserve1, &pTradeField_reserve1_len
		, &pTradeField_OrderRef, &pTradeField_OrderRef_len
		, &pTradeField_UserID, &pTradeField_UserID_len
		, &pTradeField_ExchangeID, &pTradeField_ExchangeID_len
		, &pTradeField_TradeID, &pTradeField_TradeID_len
		, &pTradeField_Direction
		, &pTradeField_OrderSysID, &pTradeField_OrderSysID_len
		, &pTradeField_ParticipantID, &pTradeField_ParticipantID_len
		, &pTradeField_ClientID, &pTradeField_ClientID_len
		, &pTradeField_TradingRole
		, &pTradeField_reserve2, &pTradeField_reserve2_len
		, &pTradeField_OffsetFlag
		, &pTradeField_HedgeFlag
		, &pTradeField_Price
		, &pTradeField_Volume
		, &pTradeField_TradeDate, &pTradeField_TradeDate_len
		, &pTradeField_TradeTime, &pTradeField_TradeTime_len
		, &pTradeField_TradeType
		, &pTradeField_PriceSource
		, &pTradeField_TraderID, &pTradeField_TraderID_len
		, &pTradeField_OrderLocalID, &pTradeField_OrderLocalID_len
		, &pTradeField_ClearingPartID, &pTradeField_ClearingPartID_len
		, &pTradeField_BusinessUnit, &pTradeField_BusinessUnit_len
		, &pTradeField_SequenceNo
		, &pTradeField_TradingDay, &pTradeField_TradingDay_len
		, &pTradeField_SettlementID
		, &pTradeField_BrokerOrderSeq
		, &pTradeField_TradeSource
		, &pTradeField_InvestUnitID, &pTradeField_InvestUnitID_len
		, &pTradeField_InstrumentID, &pTradeField_InstrumentID_len
		, &pTradeField_ExchangeInstID, &pTradeField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradeField_BrokerID != NULL) {
		if(pTradeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradeField_BrokerID, sizeof(self->data.BrokerID) );
		pTradeField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pTradeField_InvestorID != NULL) {
		if(pTradeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pTradeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pTradeField_InvestorID, sizeof(self->data.InvestorID) );
		pTradeField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pTradeField_reserve1 != NULL) {
		if(pTradeField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pTradeField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pTradeField_reserve1, sizeof(self->data.reserve1) );
		pTradeField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pTradeField_OrderRef != NULL) {
		if(pTradeField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pTradeField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pTradeField_OrderRef, sizeof(self->data.OrderRef) );
		pTradeField_OrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pTradeField_UserID != NULL) {
		if(pTradeField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pTradeField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pTradeField_UserID, sizeof(self->data.UserID) );
		pTradeField_UserID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pTradeField_ExchangeID != NULL) {
		if(pTradeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pTradeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pTradeField_ExchangeID, sizeof(self->data.ExchangeID) );
		pTradeField_ExchangeID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pTradeField_TradeID != NULL) {
		if(pTradeField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
			PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", pTradeField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
			return -1;
		}
		strncpy(self->data.TradeID, pTradeField_TradeID, sizeof(self->data.TradeID) );
		pTradeField_TradeID = NULL;
	}

	//TThostFtdcDirectionType char
	self->data.Direction = pTradeField_Direction;

	//TThostFtdcOrderSysIDType char[21]
	if(pTradeField_OrderSysID != NULL) {
		if(pTradeField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pTradeField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pTradeField_OrderSysID, sizeof(self->data.OrderSysID) );
		pTradeField_OrderSysID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pTradeField_ParticipantID != NULL) {
		if(pTradeField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pTradeField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pTradeField_ParticipantID, sizeof(self->data.ParticipantID) );
		pTradeField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pTradeField_ClientID != NULL) {
		if(pTradeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pTradeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pTradeField_ClientID, sizeof(self->data.ClientID) );
		pTradeField_ClientID = NULL;
	}

	//TThostFtdcTradingRoleType char
	self->data.TradingRole = pTradeField_TradingRole;

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pTradeField_reserve2 != NULL) {
		if(pTradeField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pTradeField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pTradeField_reserve2, sizeof(self->data.reserve2) );
		pTradeField_reserve2 = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pTradeField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pTradeField_HedgeFlag;

	//TThostFtdcPriceType double
	self->data.Price = pTradeField_Price;
	//TThostFtdcVolumeType int
	self->data.Volume = pTradeField_Volume;

	//TThostFtdcDateType char[9]
	if(pTradeField_TradeDate != NULL) {
		if(pTradeField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pTradeField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pTradeField_TradeDate, sizeof(self->data.TradeDate) );
		pTradeField_TradeDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pTradeField_TradeTime != NULL) {
		if(pTradeField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pTradeField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pTradeField_TradeTime, sizeof(self->data.TradeTime) );
		pTradeField_TradeTime = NULL;
	}

	//TThostFtdcTradeTypeType char
	self->data.TradeType = pTradeField_TradeType;

	//TThostFtdcPriceSourceType char
	self->data.PriceSource = pTradeField_PriceSource;

	//TThostFtdcTraderIDType char[21]
	if(pTradeField_TraderID != NULL) {
		if(pTradeField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pTradeField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pTradeField_TraderID, sizeof(self->data.TraderID) );
		pTradeField_TraderID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pTradeField_OrderLocalID != NULL) {
		if(pTradeField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pTradeField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pTradeField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pTradeField_OrderLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pTradeField_ClearingPartID != NULL) {
		if(pTradeField_ClearingPartID_len > (Py_ssize_t)sizeof(self->data.ClearingPartID)) {
			PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is %zd)", pTradeField_ClearingPartID_len, (Py_ssize_t)sizeof(self->data.ClearingPartID));
			return -1;
		}
		strncpy(self->data.ClearingPartID, pTradeField_ClearingPartID, sizeof(self->data.ClearingPartID) );
		pTradeField_ClearingPartID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pTradeField_BusinessUnit != NULL) {
		if(pTradeField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pTradeField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pTradeField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pTradeField_BusinessUnit = NULL;
	}

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pTradeField_SequenceNo;

	//TThostFtdcDateType char[9]
	if(pTradeField_TradingDay != NULL) {
		if(pTradeField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pTradeField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pTradeField_TradingDay, sizeof(self->data.TradingDay) );
		pTradeField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pTradeField_SettlementID;

	//TThostFtdcSequenceNoType int
	self->data.BrokerOrderSeq = pTradeField_BrokerOrderSeq;

	//TThostFtdcTradeSourceType char
	self->data.TradeSource = pTradeField_TradeSource;

	//TThostFtdcInvestUnitIDType char[17]
	if(pTradeField_InvestUnitID != NULL) {
		if(pTradeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pTradeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pTradeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pTradeField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pTradeField_InstrumentID != NULL) {
		if(pTradeField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pTradeField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pTradeField_InstrumentID, sizeof(self->data.InstrumentID) );
		pTradeField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pTradeField_ExchangeInstID != NULL) {
		if(pTradeField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pTradeField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pTradeField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pTradeField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcTradeField_dealloc(PyCThostFtdcTradeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradeField_repr(PyCThostFtdcTradeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:c,s:c,s:d,s:i,s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:i,s:y,s:i,s:i,s:c,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:c,s:s,s:c,s:c,s:d,s:i,s:s,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:i,s:s,s:i,s:i,s:c,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "OrderRef", self->data.OrderRef 
		, "UserID", self->data.UserID 
		, "ExchangeID", self->data.ExchangeID 
		, "TradeID", self->data.TradeID 
		, "Direction", self->data.Direction
		, "OrderSysID", self->data.OrderSysID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "TradingRole", self->data.TradingRole
		, "reserve2", self->data.reserve2 
		, "OffsetFlag", self->data.OffsetFlag
		, "HedgeFlag", self->data.HedgeFlag
		, "Price", self->data.Price
		, "Volume", self->data.Volume
		, "TradeDate", self->data.TradeDate 
		, "TradeTime", self->data.TradeTime 
		, "TradeType", self->data.TradeType
		, "PriceSource", self->data.PriceSource
		, "TraderID", self->data.TraderID 
		, "OrderLocalID", self->data.OrderLocalID 
		, "ClearingPartID", self->data.ClearingPartID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "SequenceNo", self->data.SequenceNo
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "BrokerOrderSeq", self->data.BrokerOrderSeq
		, "TradeSource", self->data.TradeSource
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradeField_get_BrokerID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradeField_get_InvestorID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcTradeField_get_reserve1(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcTradeField_get_OrderRef(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcTradeField_get_UserID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcTradeField_get_ExchangeID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcTradeField_get_TradeID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeID);
}

static PyObject *PyCThostFtdcTradeField_get_Direction(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcTradeField_get_OrderSysID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcTradeField_get_ParticipantID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcTradeField_get_ClientID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcTradeField_get_TradingRole(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradingRole), 1);
}

static PyObject *PyCThostFtdcTradeField_get_reserve2(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcTradeField_get_OffsetFlag(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcTradeField_get_HedgeFlag(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcTradeField_get_Price(PyCThostFtdcTradeField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Price);
}

static PyObject *PyCThostFtdcTradeField_get_Volume(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcTradeField_get_TradeDate(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcTradeField_get_TradeTime(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcTradeField_get_TradeType(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

static PyObject *PyCThostFtdcTradeField_get_PriceSource(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PriceSource), 1);
}

static PyObject *PyCThostFtdcTradeField_get_TraderID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcTradeField_get_OrderLocalID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcTradeField_get_ClearingPartID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ClearingPartID);
}

static PyObject *PyCThostFtdcTradeField_get_BusinessUnit(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcTradeField_get_SequenceNo(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcTradeField_get_TradingDay(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcTradeField_get_SettlementID(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcTradeField_get_BrokerOrderSeq(PyCThostFtdcTradeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BrokerOrderSeq);
#else 
	return PyInt_FromLong(self->data.BrokerOrderSeq);
#endif 
}

static PyObject *PyCThostFtdcTradeField_get_TradeSource(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradeSource), 1);
}

static PyObject *PyCThostFtdcTradeField_get_InvestUnitID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcTradeField_get_InstrumentID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcTradeField_get_ExchangeInstID(PyCThostFtdcTradeField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcTradeField_set_BrokerID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_InvestorID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_reserve1(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_OrderRef(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_UserID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_ExchangeID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_TradeID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeID)) {
		PyErr_SetString(PyExc_ValueError, "TradeID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TradeID, buf, sizeof(self->data.TradeID));
	return 0;
}

static int PyCThostFtdcTradeField_set_Direction(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_OrderSysID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
	return 0;
}

static int PyCThostFtdcTradeField_set_ParticipantID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_ClientID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_TradingRole(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradingRole Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradingRole)) {
		PyErr_SetString(PyExc_ValueError, "TradingRole must be less than 1 bytes");
		return -1;
	}
	self->data.TradingRole = *buf;
	return 0;
}

static int PyCThostFtdcTradeField_set_reserve2(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_OffsetFlag(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_HedgeFlag(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_Price(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Price Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Price = buf;
    return 0;
}

static int PyCThostFtdcTradeField_set_Volume(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_TradeDate(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
		PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeDate, buf, sizeof(self->data.TradeDate));
	return 0;
}

static int PyCThostFtdcTradeField_set_TradeTime(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
		PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeTime, buf, sizeof(self->data.TradeTime));
	return 0;
}

static int PyCThostFtdcTradeField_set_TradeType(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeType)) {
		PyErr_SetString(PyExc_ValueError, "TradeType must be less than 1 bytes");
		return -1;
	}
	self->data.TradeType = *buf;
	return 0;
}

static int PyCThostFtdcTradeField_set_PriceSource(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PriceSource Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PriceSource)) {
		PyErr_SetString(PyExc_ValueError, "PriceSource must be less than 1 bytes");
		return -1;
	}
	self->data.PriceSource = *buf;
	return 0;
}

static int PyCThostFtdcTradeField_set_TraderID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_OrderLocalID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
	return 0;
}

static int PyCThostFtdcTradeField_set_ClearingPartID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_BusinessUnit(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_SequenceNo(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_TradingDay(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_SettlementID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_BrokerOrderSeq(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerOrderSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BrokerOrderSeq Expected int"); 
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
    self->data.BrokerOrderSeq = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTradeField_set_TradeSource(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeSource Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeSource)) {
		PyErr_SetString(PyExc_ValueError, "TradeSource must be less than 1 bytes");
		return -1;
	}
	self->data.TradeSource = *buf;
	return 0;
}

static int PyCThostFtdcTradeField_set_InvestUnitID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_InstrumentID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradeField_set_ExchangeInstID(PyCThostFtdcTradeField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTradeField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradeField_get_BrokerID, (setter)PyCThostFtdcTradeField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcTradeField_get_InvestorID, (setter)PyCThostFtdcTradeField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcTradeField_get_reserve1, (setter)PyCThostFtdcTradeField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcTradeField_get_OrderRef, (setter)PyCThostFtdcTradeField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcTradeField_get_UserID, (setter)PyCThostFtdcTradeField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcTradeField_get_ExchangeID, (setter)PyCThostFtdcTradeField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"TradeID", (getter)PyCThostFtdcTradeField_get_TradeID, (setter)PyCThostFtdcTradeField_set_TradeID, (char *)"TradeID", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcTradeField_get_Direction, (setter)PyCThostFtdcTradeField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcTradeField_get_OrderSysID, (setter)PyCThostFtdcTradeField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcTradeField_get_ParticipantID, (setter)PyCThostFtdcTradeField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcTradeField_get_ClientID, (setter)PyCThostFtdcTradeField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"TradingRole", (getter)PyCThostFtdcTradeField_get_TradingRole, (setter)PyCThostFtdcTradeField_set_TradingRole, (char *)"TradingRole", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcTradeField_get_reserve2, (setter)PyCThostFtdcTradeField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcTradeField_get_OffsetFlag, (setter)PyCThostFtdcTradeField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcTradeField_get_HedgeFlag, (setter)PyCThostFtdcTradeField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Price", (getter)PyCThostFtdcTradeField_get_Price, (setter)PyCThostFtdcTradeField_set_Price, (char *)"Price", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcTradeField_get_Volume, (setter)PyCThostFtdcTradeField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcTradeField_get_TradeDate, (setter)PyCThostFtdcTradeField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcTradeField_get_TradeTime, (setter)PyCThostFtdcTradeField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"TradeType", (getter)PyCThostFtdcTradeField_get_TradeType, (setter)PyCThostFtdcTradeField_set_TradeType, (char *)"TradeType", NULL},
	 {(char *)"PriceSource", (getter)PyCThostFtdcTradeField_get_PriceSource, (setter)PyCThostFtdcTradeField_set_PriceSource, (char *)"PriceSource", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcTradeField_get_TraderID, (setter)PyCThostFtdcTradeField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcTradeField_get_OrderLocalID, (setter)PyCThostFtdcTradeField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ClearingPartID", (getter)PyCThostFtdcTradeField_get_ClearingPartID, (setter)PyCThostFtdcTradeField_set_ClearingPartID, (char *)"ClearingPartID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcTradeField_get_BusinessUnit, (setter)PyCThostFtdcTradeField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcTradeField_get_SequenceNo, (setter)PyCThostFtdcTradeField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcTradeField_get_TradingDay, (setter)PyCThostFtdcTradeField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcTradeField_get_SettlementID, (setter)PyCThostFtdcTradeField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"BrokerOrderSeq", (getter)PyCThostFtdcTradeField_get_BrokerOrderSeq, (setter)PyCThostFtdcTradeField_set_BrokerOrderSeq, (char *)"BrokerOrderSeq", NULL},
	 {(char *)"TradeSource", (getter)PyCThostFtdcTradeField_get_TradeSource, (setter)PyCThostFtdcTradeField_set_TradeSource, (char *)"TradeSource", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcTradeField_get_InvestUnitID, (setter)PyCThostFtdcTradeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcTradeField_get_InstrumentID, (setter)PyCThostFtdcTradeField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcTradeField_get_ExchangeInstID, (setter)PyCThostFtdcTradeField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradeField",	/* tp_name */
	sizeof(PyCThostFtdcTradeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradeField_repr,   /* tp_repr */
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
	"CThostFtdcTradeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradeField_new,       /* tp_new */
};

int PyCThostFtdcTradeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradeField  */
	if (PyType_Ready(&PyCThostFtdcTradeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradeField", (PyObject *)&PyCThostFtdcTradeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradeField to module");
        Py_DECREF(&PyCThostFtdcTradeFieldType);
		return -1;
    }

    return 0;
}
