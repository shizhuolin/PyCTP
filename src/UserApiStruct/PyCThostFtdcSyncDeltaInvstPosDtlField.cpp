
#include "PyCThostFtdcSyncDeltaInvstPosDtlField.h"



static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstPosDtlField *self = (PyCThostFtdcSyncDeltaInvstPosDtlField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_init(PyCThostFtdcSyncDeltaInvstPosDtlField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "BrokerID", "InvestorID", "HedgeFlag", "Direction", "OpenDate", "TradeID", "Volume", "OpenPrice", "TradingDay", "SettlementID", "TradeType", "CombInstrumentID", "ExchangeID", "CloseProfitByDate", "CloseProfitByTrade", "PositionProfitByDate", "PositionProfitByTrade", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LastSettlementPrice", "SettlementPrice", "CloseVolume", "CloseAmount", "TimeFirstVolume", "SpecPosiType", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaInvstPosDtlField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_InstrumentID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaInvstPosDtlField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaInvstPosDtlField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaInvstPosDtlField_HedgeFlag = 0;

	//TThostFtdcDirectionType char
	char pSyncDeltaInvstPosDtlField_Direction = 0;

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaInvstPosDtlField_OpenDate = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_OpenDate_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pSyncDeltaInvstPosDtlField_TradeID = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_TradeID_len = 0;

	//TThostFtdcVolumeType int
	int pSyncDeltaInvstPosDtlField_Volume = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaInvstPosDtlField_OpenPrice = 0.0;

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaInvstPosDtlField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pSyncDeltaInvstPosDtlField_SettlementID = 0;

	//TThostFtdcTradeTypeType char
	char pSyncDeltaInvstPosDtlField_TradeType = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaInvstPosDtlField_CombInstrumentID = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_CombInstrumentID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaInvstPosDtlField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaInvstPosDtlField_ExchangeID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosDtlField_CloseProfitByDate = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosDtlField_CloseProfitByTrade = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosDtlField_PositionProfitByDate = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosDtlField_PositionProfitByTrade = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosDtlField_Margin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosDtlField_ExchMargin = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstPosDtlField_MarginRateByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstPosDtlField_MarginRateByVolume = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaInvstPosDtlField_LastSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaInvstPosDtlField_SettlementPrice = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaInvstPosDtlField_CloseVolume = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosDtlField_CloseAmount = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaInvstPosDtlField_TimeFirstVolume = 0;

	//TThostFtdcSpecPosiTypeType char
	char pSyncDeltaInvstPosDtlField_SpecPosiType = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaInvstPosDtlField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaInvstPosDtlField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccy#y#idy#icy#y#ddddddddddidicci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccs#s#ids#ics#s#ddddddddddidicci", (char **)kwlist
#endif

		, &pSyncDeltaInvstPosDtlField_InstrumentID, &pSyncDeltaInvstPosDtlField_InstrumentID_len
		, &pSyncDeltaInvstPosDtlField_BrokerID, &pSyncDeltaInvstPosDtlField_BrokerID_len
		, &pSyncDeltaInvstPosDtlField_InvestorID, &pSyncDeltaInvstPosDtlField_InvestorID_len
		, &pSyncDeltaInvstPosDtlField_HedgeFlag
		, &pSyncDeltaInvstPosDtlField_Direction
		, &pSyncDeltaInvstPosDtlField_OpenDate, &pSyncDeltaInvstPosDtlField_OpenDate_len
		, &pSyncDeltaInvstPosDtlField_TradeID, &pSyncDeltaInvstPosDtlField_TradeID_len
		, &pSyncDeltaInvstPosDtlField_Volume
		, &pSyncDeltaInvstPosDtlField_OpenPrice
		, &pSyncDeltaInvstPosDtlField_TradingDay, &pSyncDeltaInvstPosDtlField_TradingDay_len
		, &pSyncDeltaInvstPosDtlField_SettlementID
		, &pSyncDeltaInvstPosDtlField_TradeType
		, &pSyncDeltaInvstPosDtlField_CombInstrumentID, &pSyncDeltaInvstPosDtlField_CombInstrumentID_len
		, &pSyncDeltaInvstPosDtlField_ExchangeID, &pSyncDeltaInvstPosDtlField_ExchangeID_len
		, &pSyncDeltaInvstPosDtlField_CloseProfitByDate
		, &pSyncDeltaInvstPosDtlField_CloseProfitByTrade
		, &pSyncDeltaInvstPosDtlField_PositionProfitByDate
		, &pSyncDeltaInvstPosDtlField_PositionProfitByTrade
		, &pSyncDeltaInvstPosDtlField_Margin
		, &pSyncDeltaInvstPosDtlField_ExchMargin
		, &pSyncDeltaInvstPosDtlField_MarginRateByMoney
		, &pSyncDeltaInvstPosDtlField_MarginRateByVolume
		, &pSyncDeltaInvstPosDtlField_LastSettlementPrice
		, &pSyncDeltaInvstPosDtlField_SettlementPrice
		, &pSyncDeltaInvstPosDtlField_CloseVolume
		, &pSyncDeltaInvstPosDtlField_CloseAmount
		, &pSyncDeltaInvstPosDtlField_TimeFirstVolume
		, &pSyncDeltaInvstPosDtlField_SpecPosiType
		, &pSyncDeltaInvstPosDtlField_ActionDirection
		, &pSyncDeltaInvstPosDtlField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaInvstPosDtlField_InstrumentID != NULL) {
		if(pSyncDeltaInvstPosDtlField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaInvstPosDtlField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaInvstPosDtlField_InstrumentID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaInvstPosDtlField_BrokerID != NULL) {
		if(pSyncDeltaInvstPosDtlField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaInvstPosDtlField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaInvstPosDtlField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaInvstPosDtlField_InvestorID != NULL) {
		if(pSyncDeltaInvstPosDtlField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaInvstPosDtlField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaInvstPosDtlField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaInvstPosDtlField_HedgeFlag;

	//TThostFtdcDirectionType char
	self->data.Direction = pSyncDeltaInvstPosDtlField_Direction;

	//TThostFtdcDateType char[9]
	if(pSyncDeltaInvstPosDtlField_OpenDate != NULL) {
		if(pSyncDeltaInvstPosDtlField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pSyncDeltaInvstPosDtlField_OpenDate, sizeof(self->data.OpenDate) );
		pSyncDeltaInvstPosDtlField_OpenDate = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pSyncDeltaInvstPosDtlField_TradeID != NULL) {
		if(pSyncDeltaInvstPosDtlField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
			PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
			return -1;
		}
		strncpy(self->data.TradeID, pSyncDeltaInvstPosDtlField_TradeID, sizeof(self->data.TradeID) );
		pSyncDeltaInvstPosDtlField_TradeID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pSyncDeltaInvstPosDtlField_Volume;

	//TThostFtdcPriceType double
	self->data.OpenPrice = pSyncDeltaInvstPosDtlField_OpenPrice;
	//TThostFtdcDateType char[9]
	if(pSyncDeltaInvstPosDtlField_TradingDay != NULL) {
		if(pSyncDeltaInvstPosDtlField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaInvstPosDtlField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaInvstPosDtlField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pSyncDeltaInvstPosDtlField_SettlementID;

	//TThostFtdcTradeTypeType char
	self->data.TradeType = pSyncDeltaInvstPosDtlField_TradeType;

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaInvstPosDtlField_CombInstrumentID != NULL) {
		if(pSyncDeltaInvstPosDtlField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pSyncDeltaInvstPosDtlField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pSyncDeltaInvstPosDtlField_CombInstrumentID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaInvstPosDtlField_ExchangeID != NULL) {
		if(pSyncDeltaInvstPosDtlField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosDtlField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaInvstPosDtlField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaInvstPosDtlField_ExchangeID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.CloseProfitByDate = pSyncDeltaInvstPosDtlField_CloseProfitByDate;
	//TThostFtdcMoneyType double
	self->data.CloseProfitByTrade = pSyncDeltaInvstPosDtlField_CloseProfitByTrade;
	//TThostFtdcMoneyType double
	self->data.PositionProfitByDate = pSyncDeltaInvstPosDtlField_PositionProfitByDate;
	//TThostFtdcMoneyType double
	self->data.PositionProfitByTrade = pSyncDeltaInvstPosDtlField_PositionProfitByTrade;
	//TThostFtdcMoneyType double
	self->data.Margin = pSyncDeltaInvstPosDtlField_Margin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pSyncDeltaInvstPosDtlField_ExchMargin;
	//TThostFtdcRatioType double
	self->data.MarginRateByMoney = pSyncDeltaInvstPosDtlField_MarginRateByMoney;
	//TThostFtdcRatioType double
	self->data.MarginRateByVolume = pSyncDeltaInvstPosDtlField_MarginRateByVolume;
	//TThostFtdcPriceType double
	self->data.LastSettlementPrice = pSyncDeltaInvstPosDtlField_LastSettlementPrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pSyncDeltaInvstPosDtlField_SettlementPrice;
	//TThostFtdcVolumeType int
	self->data.CloseVolume = pSyncDeltaInvstPosDtlField_CloseVolume;

	//TThostFtdcMoneyType double
	self->data.CloseAmount = pSyncDeltaInvstPosDtlField_CloseAmount;
	//TThostFtdcVolumeType int
	self->data.TimeFirstVolume = pSyncDeltaInvstPosDtlField_TimeFirstVolume;

	//TThostFtdcSpecPosiTypeType char
	self->data.SpecPosiType = pSyncDeltaInvstPosDtlField_SpecPosiType;

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaInvstPosDtlField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaInvstPosDtlField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaInvstPosDtlField_dealloc(PyCThostFtdcSyncDeltaInvstPosDtlField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_repr(PyCThostFtdcSyncDeltaInvstPosDtlField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:i,s:d,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:c,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:i,s:d,s:s,s:i,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:c,s:c,s:i}"
#endif

		, "InstrumentID", self->data.InstrumentID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "HedgeFlag", self->data.HedgeFlag
		, "Direction", self->data.Direction
		, "OpenDate", self->data.OpenDate 
		, "TradeID", self->data.TradeID 
		, "Volume", self->data.Volume
		, "OpenPrice", self->data.OpenPrice
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "TradeType", self->data.TradeType
		, "CombInstrumentID", self->data.CombInstrumentID 
		, "ExchangeID", self->data.ExchangeID 
		, "CloseProfitByDate", self->data.CloseProfitByDate
		, "CloseProfitByTrade", self->data.CloseProfitByTrade
		, "PositionProfitByDate", self->data.PositionProfitByDate
		, "PositionProfitByTrade", self->data.PositionProfitByTrade
		, "Margin", self->data.Margin
		, "ExchMargin", self->data.ExchMargin
		, "MarginRateByMoney", self->data.MarginRateByMoney
		, "MarginRateByVolume", self->data.MarginRateByVolume
		, "LastSettlementPrice", self->data.LastSettlementPrice
		, "SettlementPrice", self->data.SettlementPrice
		, "CloseVolume", self->data.CloseVolume
		, "CloseAmount", self->data.CloseAmount
		, "TimeFirstVolume", self->data.TimeFirstVolume
		, "SpecPosiType", self->data.SpecPosiType
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosDtlField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_BrokerID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_InvestorID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_Direction(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_Volume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenPrice);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradingDay(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeType(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CombInstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchangeID(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfitByDate);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfitByTrade);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_Margin(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchMargin(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_LastSettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastSettlementPrice);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CloseVolume);
#else 
	return PyInt_FromLong(self->data.CloseVolume);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseAmount(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseAmount);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_TimeFirstVolume(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TimeFirstVolume);
#else 
	return PyInt_FromLong(self->data.TimeFirstVolume);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SpecPosiType(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SpecPosiType), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosDtlField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_BrokerID(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_InvestorID(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_Direction(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenDate(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
		PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
	return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeID(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_Volume(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenPrice(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradingDay(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementID(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeType(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CombInstrumentID(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
	return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchangeID(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfitByDate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfitByDate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfitByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfitByTrade = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByDate(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionProfitByDate Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionProfitByDate = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByTrade(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionProfitByTrade Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionProfitByTrade = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_Margin(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Margin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Margin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchMargin(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchMargin = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByMoney Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByMoney = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MarginRateByVolume Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MarginRateByVolume = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_LastSettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastSettlementPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementPrice(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SettlementPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseVolume(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CloseVolume Expected int"); 
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
    self->data.CloseVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseAmount(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseAmount = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_TimeFirstVolume(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TimeFirstVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TimeFirstVolume Expected int"); 
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
    self->data.TimeFirstVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SpecPosiType(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SpecPosiType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SpecPosiType)) {
		PyErr_SetString(PyExc_ValueError, "SpecPosiType must be less than 1 bytes");
		return -1;
	}
	self->data.SpecPosiType = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDirection)) {
		PyErr_SetString(PyExc_ValueError, "ActionDirection must be less than 1 bytes");
		return -1;
	}
	self->data.ActionDirection = *buf;
	return 0;
}

static int PyCThostFtdcSyncDeltaInvstPosDtlField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosDtlField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SyncDeltaSequenceNo Expected int"); 
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
    self->data.SyncDeltaSequenceNo = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcSyncDeltaInvstPosDtlField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_Direction, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenDate, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"TradeID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeID, (char *)"TradeID", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_Volume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"OpenPrice", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_OpenPrice, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_OpenPrice, (char *)"OpenPrice", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"TradeType", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TradeType, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TradeType, (char *)"TradeType", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CombInstrumentID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"CloseProfitByDate", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByDate, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
	 {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseProfitByTrade, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
	 {(char *)"PositionProfitByDate", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByDate, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByDate, (char *)"PositionProfitByDate", NULL},
	 {(char *)"PositionProfitByTrade", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_PositionProfitByTrade, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_PositionProfitByTrade, (char *)"PositionProfitByTrade", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_Margin, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_Margin, (char *)"Margin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_ExchMargin, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"MarginRateByMoney", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByMoney, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
	 {(char *)"MarginRateByVolume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_MarginRateByVolume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
	 {(char *)"LastSettlementPrice", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_LastSettlementPrice, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_LastSettlementPrice, (char *)"LastSettlementPrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SettlementPrice, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"CloseVolume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseVolume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseVolume, (char *)"CloseVolume", NULL},
	 {(char *)"CloseAmount", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_CloseAmount, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_CloseAmount, (char *)"CloseAmount", NULL},
	 {(char *)"TimeFirstVolume", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_TimeFirstVolume, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_TimeFirstVolume, (char *)"TimeFirstVolume", NULL},
	 {(char *)"SpecPosiType", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SpecPosiType, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SpecPosiType, (char *)"SpecPosiType", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstPosDtlField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstPosDtlField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstPosDtlFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstPosDtlField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstPosDtlField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstPosDtlField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstPosDtlField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstPosDtlField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstPosDtlField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstPosDtlField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstPosDtlField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstPosDtlFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstPosDtlField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstPosDtlFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstPosDtlField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstPosDtlFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstPosDtlField", (PyObject *)&PyCThostFtdcSyncDeltaInvstPosDtlFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstPosDtlField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstPosDtlFieldType);
		return -1;
    }

    return 0;
}
