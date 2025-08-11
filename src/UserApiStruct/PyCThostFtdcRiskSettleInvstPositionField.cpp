
#include "PyCThostFtdcRiskSettleInvstPositionField.h"



static PyObject *PyCThostFtdcRiskSettleInvstPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRiskSettleInvstPositionField *self = (PyCThostFtdcRiskSettleInvstPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRiskSettleInvstPositionField_init(PyCThostFtdcRiskSettleInvstPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost",  NULL};

	//TThostFtdcInstrumentIDType char[81]
	const char *pRiskSettleInvstPositionField_InstrumentID = NULL;
	Py_ssize_t pRiskSettleInvstPositionField_InstrumentID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRiskSettleInvstPositionField_BrokerID = NULL;
	Py_ssize_t pRiskSettleInvstPositionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pRiskSettleInvstPositionField_InvestorID = NULL;
	Py_ssize_t pRiskSettleInvstPositionField_InvestorID_len = 0;

	//TThostFtdcPosiDirectionType char
	char pRiskSettleInvstPositionField_PosiDirection = 0;

	//TThostFtdcHedgeFlagType char
	char pRiskSettleInvstPositionField_HedgeFlag = 0;

	//TThostFtdcPositionDateType char
	char pRiskSettleInvstPositionField_PositionDate = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_YdPosition = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_Position = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_LongFrozen = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_ShortFrozen = 0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_LongFrozenAmount = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_ShortFrozenAmount = 0.0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_OpenVolume = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_CloseVolume = 0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_OpenAmount = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_CloseAmount = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_PositionCost = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_PreMargin = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_UseMargin = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_FrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_PositionProfit = 0.0;

	//TThostFtdcPriceType double
	double pRiskSettleInvstPositionField_PreSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pRiskSettleInvstPositionField_SettlementPrice = 0.0;

	//TThostFtdcDateType char[9]
	const char *pRiskSettleInvstPositionField_TradingDay = NULL;
	Py_ssize_t pRiskSettleInvstPositionField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pRiskSettleInvstPositionField_SettlementID = 0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_OpenCost = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_ExchangeMargin = 0.0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_CombPosition = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_CombLongFrozen = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_CombShortFrozen = 0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_CloseProfitByDate = 0.0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_CloseProfitByTrade = 0.0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_TodayPosition = 0;

	//TThostFtdcRatioType double
	double pRiskSettleInvstPositionField_MarginRateByMoney = 0.0;

	//TThostFtdcRatioType double
	double pRiskSettleInvstPositionField_MarginRateByVolume = 0.0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_StrikeFrozen = 0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_StrikeFrozenAmount = 0.0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_AbandonFrozen = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pRiskSettleInvstPositionField_ExchangeID = NULL;
	Py_ssize_t pRiskSettleInvstPositionField_ExchangeID_len = 0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_YdStrikeFrozen = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pRiskSettleInvstPositionField_InvestUnitID = NULL;
	Py_ssize_t pRiskSettleInvstPositionField_InvestUnitID_len = 0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_PositionCostOffset = 0.0;

	//TThostFtdcVolumeType int
	int pRiskSettleInvstPositionField_TasPosition = 0;

	//TThostFtdcMoneyType double
	double pRiskSettleInvstPositionField_TasPositionCost = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#did", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccciiiiddiidddddddddddddds#iddiiiddiddidis#is#did", (char **)kwlist
#endif

		, &pRiskSettleInvstPositionField_InstrumentID, &pRiskSettleInvstPositionField_InstrumentID_len
		, &pRiskSettleInvstPositionField_BrokerID, &pRiskSettleInvstPositionField_BrokerID_len
		, &pRiskSettleInvstPositionField_InvestorID, &pRiskSettleInvstPositionField_InvestorID_len
		, &pRiskSettleInvstPositionField_PosiDirection
		, &pRiskSettleInvstPositionField_HedgeFlag
		, &pRiskSettleInvstPositionField_PositionDate
		, &pRiskSettleInvstPositionField_YdPosition
		, &pRiskSettleInvstPositionField_Position
		, &pRiskSettleInvstPositionField_LongFrozen
		, &pRiskSettleInvstPositionField_ShortFrozen
		, &pRiskSettleInvstPositionField_LongFrozenAmount
		, &pRiskSettleInvstPositionField_ShortFrozenAmount
		, &pRiskSettleInvstPositionField_OpenVolume
		, &pRiskSettleInvstPositionField_CloseVolume
		, &pRiskSettleInvstPositionField_OpenAmount
		, &pRiskSettleInvstPositionField_CloseAmount
		, &pRiskSettleInvstPositionField_PositionCost
		, &pRiskSettleInvstPositionField_PreMargin
		, &pRiskSettleInvstPositionField_UseMargin
		, &pRiskSettleInvstPositionField_FrozenMargin
		, &pRiskSettleInvstPositionField_FrozenCash
		, &pRiskSettleInvstPositionField_FrozenCommission
		, &pRiskSettleInvstPositionField_CashIn
		, &pRiskSettleInvstPositionField_Commission
		, &pRiskSettleInvstPositionField_CloseProfit
		, &pRiskSettleInvstPositionField_PositionProfit
		, &pRiskSettleInvstPositionField_PreSettlementPrice
		, &pRiskSettleInvstPositionField_SettlementPrice
		, &pRiskSettleInvstPositionField_TradingDay, &pRiskSettleInvstPositionField_TradingDay_len
		, &pRiskSettleInvstPositionField_SettlementID
		, &pRiskSettleInvstPositionField_OpenCost
		, &pRiskSettleInvstPositionField_ExchangeMargin
		, &pRiskSettleInvstPositionField_CombPosition
		, &pRiskSettleInvstPositionField_CombLongFrozen
		, &pRiskSettleInvstPositionField_CombShortFrozen
		, &pRiskSettleInvstPositionField_CloseProfitByDate
		, &pRiskSettleInvstPositionField_CloseProfitByTrade
		, &pRiskSettleInvstPositionField_TodayPosition
		, &pRiskSettleInvstPositionField_MarginRateByMoney
		, &pRiskSettleInvstPositionField_MarginRateByVolume
		, &pRiskSettleInvstPositionField_StrikeFrozen
		, &pRiskSettleInvstPositionField_StrikeFrozenAmount
		, &pRiskSettleInvstPositionField_AbandonFrozen
		, &pRiskSettleInvstPositionField_ExchangeID, &pRiskSettleInvstPositionField_ExchangeID_len
		, &pRiskSettleInvstPositionField_YdStrikeFrozen
		, &pRiskSettleInvstPositionField_InvestUnitID, &pRiskSettleInvstPositionField_InvestUnitID_len
		, &pRiskSettleInvstPositionField_PositionCostOffset
		, &pRiskSettleInvstPositionField_TasPosition
		, &pRiskSettleInvstPositionField_TasPositionCost


    )) {
        return -1;
    }

	//TThostFtdcInstrumentIDType char[81]
	if(pRiskSettleInvstPositionField_InstrumentID != NULL) {
		if(pRiskSettleInvstPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pRiskSettleInvstPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pRiskSettleInvstPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pRiskSettleInvstPositionField_InstrumentID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRiskSettleInvstPositionField_BrokerID != NULL) {
		if(pRiskSettleInvstPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRiskSettleInvstPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRiskSettleInvstPositionField_BrokerID, sizeof(self->data.BrokerID) );
		pRiskSettleInvstPositionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pRiskSettleInvstPositionField_InvestorID != NULL) {
		if(pRiskSettleInvstPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pRiskSettleInvstPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pRiskSettleInvstPositionField_InvestorID, sizeof(self->data.InvestorID) );
		pRiskSettleInvstPositionField_InvestorID = NULL;
	}

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pRiskSettleInvstPositionField_PosiDirection;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pRiskSettleInvstPositionField_HedgeFlag;

	//TThostFtdcPositionDateType char
	self->data.PositionDate = pRiskSettleInvstPositionField_PositionDate;

	//TThostFtdcVolumeType int
	self->data.YdPosition = pRiskSettleInvstPositionField_YdPosition;

	//TThostFtdcVolumeType int
	self->data.Position = pRiskSettleInvstPositionField_Position;

	//TThostFtdcVolumeType int
	self->data.LongFrozen = pRiskSettleInvstPositionField_LongFrozen;

	//TThostFtdcVolumeType int
	self->data.ShortFrozen = pRiskSettleInvstPositionField_ShortFrozen;

	//TThostFtdcMoneyType double
	self->data.LongFrozenAmount = pRiskSettleInvstPositionField_LongFrozenAmount;
	//TThostFtdcMoneyType double
	self->data.ShortFrozenAmount = pRiskSettleInvstPositionField_ShortFrozenAmount;
	//TThostFtdcVolumeType int
	self->data.OpenVolume = pRiskSettleInvstPositionField_OpenVolume;

	//TThostFtdcVolumeType int
	self->data.CloseVolume = pRiskSettleInvstPositionField_CloseVolume;

	//TThostFtdcMoneyType double
	self->data.OpenAmount = pRiskSettleInvstPositionField_OpenAmount;
	//TThostFtdcMoneyType double
	self->data.CloseAmount = pRiskSettleInvstPositionField_CloseAmount;
	//TThostFtdcMoneyType double
	self->data.PositionCost = pRiskSettleInvstPositionField_PositionCost;
	//TThostFtdcMoneyType double
	self->data.PreMargin = pRiskSettleInvstPositionField_PreMargin;
	//TThostFtdcMoneyType double
	self->data.UseMargin = pRiskSettleInvstPositionField_UseMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pRiskSettleInvstPositionField_FrozenMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pRiskSettleInvstPositionField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pRiskSettleInvstPositionField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.CashIn = pRiskSettleInvstPositionField_CashIn;
	//TThostFtdcMoneyType double
	self->data.Commission = pRiskSettleInvstPositionField_Commission;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pRiskSettleInvstPositionField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.PositionProfit = pRiskSettleInvstPositionField_PositionProfit;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pRiskSettleInvstPositionField_PreSettlementPrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pRiskSettleInvstPositionField_SettlementPrice;
	//TThostFtdcDateType char[9]
	if(pRiskSettleInvstPositionField_TradingDay != NULL) {
		if(pRiskSettleInvstPositionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRiskSettleInvstPositionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRiskSettleInvstPositionField_TradingDay, sizeof(self->data.TradingDay) );
		pRiskSettleInvstPositionField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pRiskSettleInvstPositionField_SettlementID;

	//TThostFtdcMoneyType double
	self->data.OpenCost = pRiskSettleInvstPositionField_OpenCost;
	//TThostFtdcMoneyType double
	self->data.ExchangeMargin = pRiskSettleInvstPositionField_ExchangeMargin;
	//TThostFtdcVolumeType int
	self->data.CombPosition = pRiskSettleInvstPositionField_CombPosition;

	//TThostFtdcVolumeType int
	self->data.CombLongFrozen = pRiskSettleInvstPositionField_CombLongFrozen;

	//TThostFtdcVolumeType int
	self->data.CombShortFrozen = pRiskSettleInvstPositionField_CombShortFrozen;

	//TThostFtdcMoneyType double
	self->data.CloseProfitByDate = pRiskSettleInvstPositionField_CloseProfitByDate;
	//TThostFtdcMoneyType double
	self->data.CloseProfitByTrade = pRiskSettleInvstPositionField_CloseProfitByTrade;
	//TThostFtdcVolumeType int
	self->data.TodayPosition = pRiskSettleInvstPositionField_TodayPosition;

	//TThostFtdcRatioType double
	self->data.MarginRateByMoney = pRiskSettleInvstPositionField_MarginRateByMoney;
	//TThostFtdcRatioType double
	self->data.MarginRateByVolume = pRiskSettleInvstPositionField_MarginRateByVolume;
	//TThostFtdcVolumeType int
	self->data.StrikeFrozen = pRiskSettleInvstPositionField_StrikeFrozen;

	//TThostFtdcMoneyType double
	self->data.StrikeFrozenAmount = pRiskSettleInvstPositionField_StrikeFrozenAmount;
	//TThostFtdcVolumeType int
	self->data.AbandonFrozen = pRiskSettleInvstPositionField_AbandonFrozen;

	//TThostFtdcExchangeIDType char[9]
	if(pRiskSettleInvstPositionField_ExchangeID != NULL) {
		if(pRiskSettleInvstPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pRiskSettleInvstPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pRiskSettleInvstPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pRiskSettleInvstPositionField_ExchangeID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.YdStrikeFrozen = pRiskSettleInvstPositionField_YdStrikeFrozen;

	//TThostFtdcInvestUnitIDType char[17]
	if(pRiskSettleInvstPositionField_InvestUnitID != NULL) {
		if(pRiskSettleInvstPositionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pRiskSettleInvstPositionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pRiskSettleInvstPositionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pRiskSettleInvstPositionField_InvestUnitID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PositionCostOffset = pRiskSettleInvstPositionField_PositionCostOffset;
	//TThostFtdcVolumeType int
	self->data.TasPosition = pRiskSettleInvstPositionField_TasPosition;

	//TThostFtdcMoneyType double
	self->data.TasPositionCost = pRiskSettleInvstPositionField_TasPositionCost;


    return 0;
}

static void PyCThostFtdcRiskSettleInvstPositionField_dealloc(PyCThostFtdcRiskSettleInvstPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_repr(PyCThostFtdcRiskSettleInvstPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:s,s:i,s:s,s:d,s:i,s:d}"
#endif

		, "InstrumentID", self->data.InstrumentID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "PosiDirection", self->data.PosiDirection
		, "HedgeFlag", self->data.HedgeFlag
		, "PositionDate", self->data.PositionDate
		, "YdPosition", self->data.YdPosition
		, "Position", self->data.Position
		, "LongFrozen", self->data.LongFrozen
		, "ShortFrozen", self->data.ShortFrozen
		, "LongFrozenAmount", self->data.LongFrozenAmount
		, "ShortFrozenAmount", self->data.ShortFrozenAmount
		, "OpenVolume", self->data.OpenVolume
		, "CloseVolume", self->data.CloseVolume
		, "OpenAmount", self->data.OpenAmount
		, "CloseAmount", self->data.CloseAmount
		, "PositionCost", self->data.PositionCost
		, "PreMargin", self->data.PreMargin
		, "UseMargin", self->data.UseMargin
		, "FrozenMargin", self->data.FrozenMargin
		, "FrozenCash", self->data.FrozenCash
		, "FrozenCommission", self->data.FrozenCommission
		, "CashIn", self->data.CashIn
		, "Commission", self->data.Commission
		, "CloseProfit", self->data.CloseProfit
		, "PositionProfit", self->data.PositionProfit
		, "PreSettlementPrice", self->data.PreSettlementPrice
		, "SettlementPrice", self->data.SettlementPrice
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "OpenCost", self->data.OpenCost
		, "ExchangeMargin", self->data.ExchangeMargin
		, "CombPosition", self->data.CombPosition
		, "CombLongFrozen", self->data.CombLongFrozen
		, "CombShortFrozen", self->data.CombShortFrozen
		, "CloseProfitByDate", self->data.CloseProfitByDate
		, "CloseProfitByTrade", self->data.CloseProfitByTrade
		, "TodayPosition", self->data.TodayPosition
		, "MarginRateByMoney", self->data.MarginRateByMoney
		, "MarginRateByVolume", self->data.MarginRateByVolume
		, "StrikeFrozen", self->data.StrikeFrozen
		, "StrikeFrozenAmount", self->data.StrikeFrozenAmount
		, "AbandonFrozen", self->data.AbandonFrozen
		, "ExchangeID", self->data.ExchangeID 
		, "YdStrikeFrozen", self->data.YdStrikeFrozen
		, "InvestUnitID", self->data.InvestUnitID 
		, "PositionCostOffset", self->data.PositionCostOffset
		, "TasPosition", self->data.TasPosition
		, "TasPositionCost", self->data.TasPositionCost


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRiskSettleInvstPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_InstrumentID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_BrokerID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_InvestorID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PosiDirection(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_HedgeFlag(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionDate(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PositionDate), 1);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_YdPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.YdPosition);
#else 
	return PyInt_FromLong(self->data.YdPosition);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_Position(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Position);
#else 
	return PyInt_FromLong(self->data.Position);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LongFrozen);
#else 
	return PyInt_FromLong(self->data.LongFrozen);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ShortFrozen);
#else 
	return PyInt_FromLong(self->data.ShortFrozen);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongFrozenAmount);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortFrozenAmount);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_OpenVolume(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OpenVolume);
#else 
	return PyInt_FromLong(self->data.OpenVolume);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseVolume(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CloseVolume);
#else 
	return PyInt_FromLong(self->data.CloseVolume);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_OpenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenAmount);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseAmount);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionCost(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionCost);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PreMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMargin);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_UseMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UseMargin);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_FrozenMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCash(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCommission(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CashIn(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_Commission(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfit(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionProfit(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfit);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PreSettlementPrice(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_SettlementPrice(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TradingDay(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_SettlementID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_OpenCost(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenCost);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeMargin(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeMargin);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CombPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombPosition);
#else 
	return PyInt_FromLong(self->data.CombPosition);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CombLongFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombLongFrozen);
#else 
	return PyInt_FromLong(self->data.CombLongFrozen);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CombShortFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombShortFrozen);
#else 
	return PyInt_FromLong(self->data.CombShortFrozen);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByDate(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByTrade(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TodayPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TodayPosition);
#else 
	return PyInt_FromLong(self->data.TodayPosition);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByMoney(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByVolume(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.StrikeFrozen);
#else 
	return PyInt_FromLong(self->data.StrikeFrozen);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeFrozenAmount);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_AbandonFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AbandonFrozen);
#else 
	return PyInt_FromLong(self->data.AbandonFrozen);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_YdStrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.YdStrikeFrozen);
#else 
	return PyInt_FromLong(self->data.YdStrikeFrozen);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_InvestUnitID(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_PositionCostOffset(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionCostOffset);
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TasPosition(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TasPosition);
#else 
	return PyInt_FromLong(self->data.TasPosition);
#endif 
}

static PyObject *PyCThostFtdcRiskSettleInvstPositionField_get_TasPositionCost(PyCThostFtdcRiskSettleInvstPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TasPositionCost);
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_InstrumentID(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_BrokerID(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_InvestorID(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_PosiDirection(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_HedgeFlag(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionDate(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PositionDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PositionDate)) {
		PyErr_SetString(PyExc_ValueError, "PositionDate must be less than 1 bytes");
		return -1;
	}
	self->data.PositionDate = *buf;
	return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_YdPosition(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "YdPosition Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "YdPosition Expected int"); 
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
    self->data.YdPosition = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_Position(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Position Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Position Expected int"); 
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
    self->data.Position = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozen(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongFrozen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LongFrozen Expected int"); 
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
    self->data.LongFrozen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozen(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortFrozen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ShortFrozen Expected int"); 
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
    self->data.ShortFrozen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongFrozenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongFrozenAmount = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortFrozenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortFrozenAmount = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_OpenVolume(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OpenVolume Expected int"); 
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
    self->data.OpenVolume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseVolume(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_OpenAmount(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenAmount = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseAmount(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionCost(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionCost Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionCost = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_PreMargin(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreMargin = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_UseMargin(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UseMargin = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_FrozenMargin(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCash(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCash Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCash = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCommission(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenCommission = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CashIn(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CashIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CashIn = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_Commission(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Commission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Commission = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfit(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CloseProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CloseProfit = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionProfit(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionProfit = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_PreSettlementPrice(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreSettlementPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreSettlementPrice = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_SettlementPrice(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_TradingDay(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_SettlementID(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_OpenCost(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenCost Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenCost = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeMargin(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchangeMargin = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CombPosition(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombPosition Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CombPosition Expected int"); 
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
    self->data.CombPosition = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CombLongFrozen(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombLongFrozen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CombLongFrozen Expected int"); 
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
    self->data.CombLongFrozen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CombShortFrozen(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombShortFrozen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "CombShortFrozen Expected int"); 
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
    self->data.CombShortFrozen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByDate(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByTrade(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_TodayPosition(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TodayPosition Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TodayPosition Expected int"); 
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
    self->data.TodayPosition = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByMoney(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByVolume(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeFrozen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "StrikeFrozen Expected int"); 
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
    self->data.StrikeFrozen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozenAmount(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "StrikeFrozenAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.StrikeFrozenAmount = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_AbandonFrozen(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AbandonFrozen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AbandonFrozen Expected int"); 
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
    self->data.AbandonFrozen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeID(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_YdStrikeFrozen(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "YdStrikeFrozen Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "YdStrikeFrozen Expected int"); 
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
    self->data.YdStrikeFrozen = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_InvestUnitID(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRiskSettleInvstPositionField_set_PositionCostOffset(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PositionCostOffset Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PositionCostOffset = buf;
    return 0;
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_TasPosition(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TasPosition Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TasPosition Expected int"); 
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
    self->data.TasPosition = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRiskSettleInvstPositionField_set_TasPositionCost(PyCThostFtdcRiskSettleInvstPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TasPositionCost Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TasPositionCost = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcRiskSettleInvstPositionField_getset[] = {
	 {(char *)"InstrumentID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_InstrumentID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_BrokerID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_InvestorID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PosiDirection, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_HedgeFlag, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"PositionDate", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionDate, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionDate, (char *)"PositionDate", NULL},
	 {(char *)"YdPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_YdPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_YdPosition, (char *)"YdPosition", NULL},
	 {(char *)"Position", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_Position, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_Position, (char *)"Position", NULL},
	 {(char *)"LongFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozen, (char *)"LongFrozen", NULL},
	 {(char *)"ShortFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozen, (char *)"ShortFrozen", NULL},
	 {(char *)"LongFrozenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_LongFrozenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_LongFrozenAmount, (char *)"LongFrozenAmount", NULL},
	 {(char *)"ShortFrozenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ShortFrozenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ShortFrozenAmount, (char *)"ShortFrozenAmount", NULL},
	 {(char *)"OpenVolume", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_OpenVolume, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_OpenVolume, (char *)"OpenVolume", NULL},
	 {(char *)"CloseVolume", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseVolume, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseVolume, (char *)"CloseVolume", NULL},
	 {(char *)"OpenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_OpenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_OpenAmount, (char *)"OpenAmount", NULL},
	 {(char *)"CloseAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseAmount, (char *)"CloseAmount", NULL},
	 {(char *)"PositionCost", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionCost, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionCost, (char *)"PositionCost", NULL},
	 {(char *)"PreMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PreMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PreMargin, (char *)"PreMargin", NULL},
	 {(char *)"UseMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_UseMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_UseMargin, (char *)"UseMargin", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_FrozenMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCash, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_FrozenCommission, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CashIn, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_Commission, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfit, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"PositionProfit", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionProfit, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionProfit, (char *)"PositionProfit", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PreSettlementPrice, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_SettlementPrice, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TradingDay, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_SettlementID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OpenCost", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_OpenCost, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_OpenCost, (char *)"OpenCost", NULL},
	 {(char *)"ExchangeMargin", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeMargin, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
	 {(char *)"CombPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CombPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CombPosition, (char *)"CombPosition", NULL},
	 {(char *)"CombLongFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CombLongFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CombLongFrozen, (char *)"CombLongFrozen", NULL},
	 {(char *)"CombShortFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CombShortFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CombShortFrozen, (char *)"CombShortFrozen", NULL},
	 {(char *)"CloseProfitByDate", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByDate, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
	 {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_CloseProfitByTrade, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
	 {(char *)"TodayPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TodayPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TodayPosition, (char *)"TodayPosition", NULL},
	 {(char *)"MarginRateByMoney", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByMoney, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
	 {(char *)"MarginRateByVolume", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_MarginRateByVolume, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
	 {(char *)"StrikeFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozen, (char *)"StrikeFrozen", NULL},
	 {(char *)"StrikeFrozenAmount", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_StrikeFrozenAmount, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_StrikeFrozenAmount, (char *)"StrikeFrozenAmount", NULL},
	 {(char *)"AbandonFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_AbandonFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_AbandonFrozen, (char *)"AbandonFrozen", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_ExchangeID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"YdStrikeFrozen", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_YdStrikeFrozen, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_YdStrikeFrozen, (char *)"YdStrikeFrozen", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_InvestUnitID, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"PositionCostOffset", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_PositionCostOffset, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_PositionCostOffset, (char *)"PositionCostOffset", NULL},
	 {(char *)"TasPosition", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TasPosition, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TasPosition, (char *)"TasPosition", NULL},
	 {(char *)"TasPositionCost", (getter)PyCThostFtdcRiskSettleInvstPositionField_get_TasPositionCost, (setter)PyCThostFtdcRiskSettleInvstPositionField_set_TasPositionCost, (char *)"TasPositionCost", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRiskSettleInvstPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRiskSettleInvstPositionField",	/* tp_name */
	sizeof(PyCThostFtdcRiskSettleInvstPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRiskSettleInvstPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRiskSettleInvstPositionField_repr,   /* tp_repr */
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
	"CThostFtdcRiskSettleInvstPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRiskSettleInvstPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRiskSettleInvstPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRiskSettleInvstPositionField_new,       /* tp_new */
};

int PyCThostFtdcRiskSettleInvstPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRiskSettleInvstPositionField  */
	if (PyType_Ready(&PyCThostFtdcRiskSettleInvstPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRiskSettleInvstPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRiskSettleInvstPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRiskSettleInvstPositionField", (PyObject *)&PyCThostFtdcRiskSettleInvstPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRiskSettleInvstPositionField to module");
        Py_DECREF(&PyCThostFtdcRiskSettleInvstPositionFieldType);
		return -1;
    }

    return 0;
}
