
#include "PyCThostFtdcInvestorPositionField.h"



static PyObject *PyCThostFtdcInvestorPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPositionField *self = (PyCThostFtdcInvestorPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPositionField_init(PyCThostFtdcInvestorPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost", "InstrumentID", "OptionValue",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInvestorPositionField_reserve1 = NULL;
	Py_ssize_t pInvestorPositionField_reserve1_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorPositionField_BrokerID = NULL;
	Py_ssize_t pInvestorPositionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorPositionField_InvestorID = NULL;
	Py_ssize_t pInvestorPositionField_InvestorID_len = 0;

	//TThostFtdcPosiDirectionType char
	char pInvestorPositionField_PosiDirection = 0;

	//TThostFtdcHedgeFlagType char
	char pInvestorPositionField_HedgeFlag = 0;

	//TThostFtdcPositionDateType char
	char pInvestorPositionField_PositionDate = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_YdPosition = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_Position = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_LongFrozen = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_ShortFrozen = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_LongFrozenAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_ShortFrozenAmount = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_OpenVolume = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_CloseVolume = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_OpenAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_CloseAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_PositionCost = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_PreMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_UseMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_FrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_PositionProfit = 0.0;

	//TThostFtdcPriceType double
	double pInvestorPositionField_PreSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pInvestorPositionField_SettlementPrice = 0.0;

	//TThostFtdcDateType char[9]
	const char *pInvestorPositionField_TradingDay = NULL;
	Py_ssize_t pInvestorPositionField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pInvestorPositionField_SettlementID = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_OpenCost = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_ExchangeMargin = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_CombPosition = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_CombLongFrozen = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_CombShortFrozen = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_CloseProfitByDate = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_CloseProfitByTrade = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_TodayPosition = 0;

	//TThostFtdcRatioType double
	double pInvestorPositionField_MarginRateByMoney = 0.0;

	//TThostFtdcRatioType double
	double pInvestorPositionField_MarginRateByVolume = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_StrikeFrozen = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_StrikeFrozenAmount = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_AbandonFrozen = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorPositionField_ExchangeID = NULL;
	Py_ssize_t pInvestorPositionField_ExchangeID_len = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_YdStrikeFrozen = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInvestorPositionField_InvestUnitID = NULL;
	Py_ssize_t pInvestorPositionField_InvestUnitID_len = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_PositionCostOffset = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionField_TasPosition = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_TasPositionCost = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorPositionField_InstrumentID = NULL;
	Py_ssize_t pInvestorPositionField_InstrumentID_len = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionField_OptionValue = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#didy#d", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccciiiiddiidddddddddddddds#iddiiiddiddidis#is#dids#d", (char **)kwlist
#endif

		, &pInvestorPositionField_reserve1, &pInvestorPositionField_reserve1_len
		, &pInvestorPositionField_BrokerID, &pInvestorPositionField_BrokerID_len
		, &pInvestorPositionField_InvestorID, &pInvestorPositionField_InvestorID_len
		, &pInvestorPositionField_PosiDirection
		, &pInvestorPositionField_HedgeFlag
		, &pInvestorPositionField_PositionDate
		, &pInvestorPositionField_YdPosition
		, &pInvestorPositionField_Position
		, &pInvestorPositionField_LongFrozen
		, &pInvestorPositionField_ShortFrozen
		, &pInvestorPositionField_LongFrozenAmount
		, &pInvestorPositionField_ShortFrozenAmount
		, &pInvestorPositionField_OpenVolume
		, &pInvestorPositionField_CloseVolume
		, &pInvestorPositionField_OpenAmount
		, &pInvestorPositionField_CloseAmount
		, &pInvestorPositionField_PositionCost
		, &pInvestorPositionField_PreMargin
		, &pInvestorPositionField_UseMargin
		, &pInvestorPositionField_FrozenMargin
		, &pInvestorPositionField_FrozenCash
		, &pInvestorPositionField_FrozenCommission
		, &pInvestorPositionField_CashIn
		, &pInvestorPositionField_Commission
		, &pInvestorPositionField_CloseProfit
		, &pInvestorPositionField_PositionProfit
		, &pInvestorPositionField_PreSettlementPrice
		, &pInvestorPositionField_SettlementPrice
		, &pInvestorPositionField_TradingDay, &pInvestorPositionField_TradingDay_len
		, &pInvestorPositionField_SettlementID
		, &pInvestorPositionField_OpenCost
		, &pInvestorPositionField_ExchangeMargin
		, &pInvestorPositionField_CombPosition
		, &pInvestorPositionField_CombLongFrozen
		, &pInvestorPositionField_CombShortFrozen
		, &pInvestorPositionField_CloseProfitByDate
		, &pInvestorPositionField_CloseProfitByTrade
		, &pInvestorPositionField_TodayPosition
		, &pInvestorPositionField_MarginRateByMoney
		, &pInvestorPositionField_MarginRateByVolume
		, &pInvestorPositionField_StrikeFrozen
		, &pInvestorPositionField_StrikeFrozenAmount
		, &pInvestorPositionField_AbandonFrozen
		, &pInvestorPositionField_ExchangeID, &pInvestorPositionField_ExchangeID_len
		, &pInvestorPositionField_YdStrikeFrozen
		, &pInvestorPositionField_InvestUnitID, &pInvestorPositionField_InvestUnitID_len
		, &pInvestorPositionField_PositionCostOffset
		, &pInvestorPositionField_TasPosition
		, &pInvestorPositionField_TasPositionCost
		, &pInvestorPositionField_InstrumentID, &pInvestorPositionField_InstrumentID_len
		, &pInvestorPositionField_OptionValue


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInvestorPositionField_reserve1 != NULL) {
		if(pInvestorPositionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInvestorPositionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInvestorPositionField_reserve1, sizeof(self->data.reserve1) );
		pInvestorPositionField_reserve1 = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorPositionField_BrokerID != NULL) {
		if(pInvestorPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorPositionField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorPositionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorPositionField_InvestorID != NULL) {
		if(pInvestorPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorPositionField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorPositionField_InvestorID = NULL;
	}

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pInvestorPositionField_PosiDirection;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInvestorPositionField_HedgeFlag;

	//TThostFtdcPositionDateType char
	self->data.PositionDate = pInvestorPositionField_PositionDate;

	//TThostFtdcVolumeType int
	self->data.YdPosition = pInvestorPositionField_YdPosition;

	//TThostFtdcVolumeType int
	self->data.Position = pInvestorPositionField_Position;

	//TThostFtdcVolumeType int
	self->data.LongFrozen = pInvestorPositionField_LongFrozen;

	//TThostFtdcVolumeType int
	self->data.ShortFrozen = pInvestorPositionField_ShortFrozen;

	//TThostFtdcMoneyType double
	self->data.LongFrozenAmount = pInvestorPositionField_LongFrozenAmount;
	//TThostFtdcMoneyType double
	self->data.ShortFrozenAmount = pInvestorPositionField_ShortFrozenAmount;
	//TThostFtdcVolumeType int
	self->data.OpenVolume = pInvestorPositionField_OpenVolume;

	//TThostFtdcVolumeType int
	self->data.CloseVolume = pInvestorPositionField_CloseVolume;

	//TThostFtdcMoneyType double
	self->data.OpenAmount = pInvestorPositionField_OpenAmount;
	//TThostFtdcMoneyType double
	self->data.CloseAmount = pInvestorPositionField_CloseAmount;
	//TThostFtdcMoneyType double
	self->data.PositionCost = pInvestorPositionField_PositionCost;
	//TThostFtdcMoneyType double
	self->data.PreMargin = pInvestorPositionField_PreMargin;
	//TThostFtdcMoneyType double
	self->data.UseMargin = pInvestorPositionField_UseMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pInvestorPositionField_FrozenMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pInvestorPositionField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pInvestorPositionField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.CashIn = pInvestorPositionField_CashIn;
	//TThostFtdcMoneyType double
	self->data.Commission = pInvestorPositionField_Commission;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pInvestorPositionField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.PositionProfit = pInvestorPositionField_PositionProfit;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pInvestorPositionField_PreSettlementPrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pInvestorPositionField_SettlementPrice;
	//TThostFtdcDateType char[9]
	if(pInvestorPositionField_TradingDay != NULL) {
		if(pInvestorPositionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pInvestorPositionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pInvestorPositionField_TradingDay, sizeof(self->data.TradingDay) );
		pInvestorPositionField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pInvestorPositionField_SettlementID;

	//TThostFtdcMoneyType double
	self->data.OpenCost = pInvestorPositionField_OpenCost;
	//TThostFtdcMoneyType double
	self->data.ExchangeMargin = pInvestorPositionField_ExchangeMargin;
	//TThostFtdcVolumeType int
	self->data.CombPosition = pInvestorPositionField_CombPosition;

	//TThostFtdcVolumeType int
	self->data.CombLongFrozen = pInvestorPositionField_CombLongFrozen;

	//TThostFtdcVolumeType int
	self->data.CombShortFrozen = pInvestorPositionField_CombShortFrozen;

	//TThostFtdcMoneyType double
	self->data.CloseProfitByDate = pInvestorPositionField_CloseProfitByDate;
	//TThostFtdcMoneyType double
	self->data.CloseProfitByTrade = pInvestorPositionField_CloseProfitByTrade;
	//TThostFtdcVolumeType int
	self->data.TodayPosition = pInvestorPositionField_TodayPosition;

	//TThostFtdcRatioType double
	self->data.MarginRateByMoney = pInvestorPositionField_MarginRateByMoney;
	//TThostFtdcRatioType double
	self->data.MarginRateByVolume = pInvestorPositionField_MarginRateByVolume;
	//TThostFtdcVolumeType int
	self->data.StrikeFrozen = pInvestorPositionField_StrikeFrozen;

	//TThostFtdcMoneyType double
	self->data.StrikeFrozenAmount = pInvestorPositionField_StrikeFrozenAmount;
	//TThostFtdcVolumeType int
	self->data.AbandonFrozen = pInvestorPositionField_AbandonFrozen;

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorPositionField_ExchangeID != NULL) {
		if(pInvestorPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorPositionField_ExchangeID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.YdStrikeFrozen = pInvestorPositionField_YdStrikeFrozen;

	//TThostFtdcInvestUnitIDType char[17]
	if(pInvestorPositionField_InvestUnitID != NULL) {
		if(pInvestorPositionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInvestorPositionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInvestorPositionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInvestorPositionField_InvestUnitID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PositionCostOffset = pInvestorPositionField_PositionCostOffset;
	//TThostFtdcVolumeType int
	self->data.TasPosition = pInvestorPositionField_TasPosition;

	//TThostFtdcMoneyType double
	self->data.TasPositionCost = pInvestorPositionField_TasPositionCost;
	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorPositionField_InstrumentID != NULL) {
		if(pInvestorPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInvestorPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInvestorPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInvestorPositionField_InstrumentID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.OptionValue = pInvestorPositionField_OptionValue;


    return 0;
}

static void PyCThostFtdcInvestorPositionField_dealloc(PyCThostFtdcInvestorPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPositionField_repr(PyCThostFtdcInvestorPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d,s:y,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:s,s:i,s:s,s:d,s:i,s:d,s:s,s:d}"
#endif

		, "reserve1", self->data.reserve1 
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
		, "InstrumentID", self->data.InstrumentID 
		, "OptionValue", self->data.OptionValue


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_reserve1(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_BrokerID(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_InvestorID(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_PosiDirection(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_HedgeFlag(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_PositionDate(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PositionDate), 1);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_YdPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.YdPosition);
#else 
	return PyInt_FromLong(self->data.YdPosition);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_Position(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Position);
#else 
	return PyInt_FromLong(self->data.Position);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_LongFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LongFrozen);
#else 
	return PyInt_FromLong(self->data.LongFrozen);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_ShortFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ShortFrozen);
#else 
	return PyInt_FromLong(self->data.ShortFrozen);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_LongFrozenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongFrozenAmount);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_ShortFrozenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortFrozenAmount);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_OpenVolume(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OpenVolume);
#else 
	return PyInt_FromLong(self->data.OpenVolume);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CloseVolume(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CloseVolume);
#else 
	return PyInt_FromLong(self->data.CloseVolume);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_OpenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenAmount);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CloseAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseAmount);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_PositionCost(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionCost);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_PreMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMargin);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_UseMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UseMargin);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_FrozenMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_FrozenCash(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_FrozenCommission(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CashIn(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_Commission(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CloseProfit(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_PositionProfit(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfit);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_PreSettlementPrice(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_SettlementPrice(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_TradingDay(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_SettlementID(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_OpenCost(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenCost);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_ExchangeMargin(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeMargin);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CombPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombPosition);
#else 
	return PyInt_FromLong(self->data.CombPosition);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CombLongFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombLongFrozen);
#else 
	return PyInt_FromLong(self->data.CombLongFrozen);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CombShortFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombShortFrozen);
#else 
	return PyInt_FromLong(self->data.CombShortFrozen);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CloseProfitByDate(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_CloseProfitByTrade(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_TodayPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TodayPosition);
#else 
	return PyInt_FromLong(self->data.TodayPosition);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_MarginRateByMoney(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_MarginRateByVolume(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_StrikeFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.StrikeFrozen);
#else 
	return PyInt_FromLong(self->data.StrikeFrozen);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_StrikeFrozenAmount(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeFrozenAmount);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_AbandonFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AbandonFrozen);
#else 
	return PyInt_FromLong(self->data.AbandonFrozen);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_ExchangeID(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_YdStrikeFrozen(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.YdStrikeFrozen);
#else 
	return PyInt_FromLong(self->data.YdStrikeFrozen);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_InvestUnitID(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_PositionCostOffset(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionCostOffset);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_TasPosition(PyCThostFtdcInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TasPosition);
#else 
	return PyInt_FromLong(self->data.TasPosition);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionField_get_TasPositionCost(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TasPositionCost);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_InstrumentID(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInvestorPositionField_get_OptionValue(PyCThostFtdcInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionValue);
}

static int PyCThostFtdcInvestorPositionField_set_reserve1(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_BrokerID(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_InvestorID(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_PosiDirection(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_HedgeFlag(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_PositionDate(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_YdPosition(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_Position(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_LongFrozen(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_ShortFrozen(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_LongFrozenAmount(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_ShortFrozenAmount(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_OpenVolume(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CloseVolume(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_OpenAmount(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CloseAmount(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_PositionCost(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_PreMargin(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_UseMargin(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_FrozenMargin(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_FrozenCash(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_FrozenCommission(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CashIn(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_Commission(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CloseProfit(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_PositionProfit(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_PreSettlementPrice(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_SettlementPrice(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_TradingDay(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_SettlementID(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_OpenCost(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_ExchangeMargin(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CombPosition(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CombLongFrozen(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CombShortFrozen(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CloseProfitByDate(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_CloseProfitByTrade(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_TodayPosition(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_MarginRateByMoney(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_MarginRateByVolume(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_StrikeFrozen(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_StrikeFrozenAmount(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_AbandonFrozen(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_ExchangeID(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_YdStrikeFrozen(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_InvestUnitID(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_PositionCostOffset(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_TasPosition(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_TasPositionCost(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_InstrumentID(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionField_set_OptionValue(PyCThostFtdcInvestorPositionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OptionValue Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OptionValue = buf;
    return 0;
}



static PyGetSetDef PyCThostFtdcInvestorPositionField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInvestorPositionField_get_reserve1, (setter)PyCThostFtdcInvestorPositionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPositionField_get_BrokerID, (setter)PyCThostFtdcInvestorPositionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPositionField_get_InvestorID, (setter)PyCThostFtdcInvestorPositionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcInvestorPositionField_get_PosiDirection, (setter)PyCThostFtdcInvestorPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPositionField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"PositionDate", (getter)PyCThostFtdcInvestorPositionField_get_PositionDate, (setter)PyCThostFtdcInvestorPositionField_set_PositionDate, (char *)"PositionDate", NULL},
	 {(char *)"YdPosition", (getter)PyCThostFtdcInvestorPositionField_get_YdPosition, (setter)PyCThostFtdcInvestorPositionField_set_YdPosition, (char *)"YdPosition", NULL},
	 {(char *)"Position", (getter)PyCThostFtdcInvestorPositionField_get_Position, (setter)PyCThostFtdcInvestorPositionField_set_Position, (char *)"Position", NULL},
	 {(char *)"LongFrozen", (getter)PyCThostFtdcInvestorPositionField_get_LongFrozen, (setter)PyCThostFtdcInvestorPositionField_set_LongFrozen, (char *)"LongFrozen", NULL},
	 {(char *)"ShortFrozen", (getter)PyCThostFtdcInvestorPositionField_get_ShortFrozen, (setter)PyCThostFtdcInvestorPositionField_set_ShortFrozen, (char *)"ShortFrozen", NULL},
	 {(char *)"LongFrozenAmount", (getter)PyCThostFtdcInvestorPositionField_get_LongFrozenAmount, (setter)PyCThostFtdcInvestorPositionField_set_LongFrozenAmount, (char *)"LongFrozenAmount", NULL},
	 {(char *)"ShortFrozenAmount", (getter)PyCThostFtdcInvestorPositionField_get_ShortFrozenAmount, (setter)PyCThostFtdcInvestorPositionField_set_ShortFrozenAmount, (char *)"ShortFrozenAmount", NULL},
	 {(char *)"OpenVolume", (getter)PyCThostFtdcInvestorPositionField_get_OpenVolume, (setter)PyCThostFtdcInvestorPositionField_set_OpenVolume, (char *)"OpenVolume", NULL},
	 {(char *)"CloseVolume", (getter)PyCThostFtdcInvestorPositionField_get_CloseVolume, (setter)PyCThostFtdcInvestorPositionField_set_CloseVolume, (char *)"CloseVolume", NULL},
	 {(char *)"OpenAmount", (getter)PyCThostFtdcInvestorPositionField_get_OpenAmount, (setter)PyCThostFtdcInvestorPositionField_set_OpenAmount, (char *)"OpenAmount", NULL},
	 {(char *)"CloseAmount", (getter)PyCThostFtdcInvestorPositionField_get_CloseAmount, (setter)PyCThostFtdcInvestorPositionField_set_CloseAmount, (char *)"CloseAmount", NULL},
	 {(char *)"PositionCost", (getter)PyCThostFtdcInvestorPositionField_get_PositionCost, (setter)PyCThostFtdcInvestorPositionField_set_PositionCost, (char *)"PositionCost", NULL},
	 {(char *)"PreMargin", (getter)PyCThostFtdcInvestorPositionField_get_PreMargin, (setter)PyCThostFtdcInvestorPositionField_set_PreMargin, (char *)"PreMargin", NULL},
	 {(char *)"UseMargin", (getter)PyCThostFtdcInvestorPositionField_get_UseMargin, (setter)PyCThostFtdcInvestorPositionField_set_UseMargin, (char *)"UseMargin", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcInvestorPositionField_get_FrozenMargin, (setter)PyCThostFtdcInvestorPositionField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorPositionField_get_FrozenCash, (setter)PyCThostFtdcInvestorPositionField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorPositionField_get_FrozenCommission, (setter)PyCThostFtdcInvestorPositionField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcInvestorPositionField_get_CashIn, (setter)PyCThostFtdcInvestorPositionField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcInvestorPositionField_get_Commission, (setter)PyCThostFtdcInvestorPositionField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcInvestorPositionField_get_CloseProfit, (setter)PyCThostFtdcInvestorPositionField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"PositionProfit", (getter)PyCThostFtdcInvestorPositionField_get_PositionProfit, (setter)PyCThostFtdcInvestorPositionField_set_PositionProfit, (char *)"PositionProfit", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcInvestorPositionField_get_PreSettlementPrice, (setter)PyCThostFtdcInvestorPositionField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcInvestorPositionField_get_SettlementPrice, (setter)PyCThostFtdcInvestorPositionField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcInvestorPositionField_get_TradingDay, (setter)PyCThostFtdcInvestorPositionField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcInvestorPositionField_get_SettlementID, (setter)PyCThostFtdcInvestorPositionField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OpenCost", (getter)PyCThostFtdcInvestorPositionField_get_OpenCost, (setter)PyCThostFtdcInvestorPositionField_set_OpenCost, (char *)"OpenCost", NULL},
	 {(char *)"ExchangeMargin", (getter)PyCThostFtdcInvestorPositionField_get_ExchangeMargin, (setter)PyCThostFtdcInvestorPositionField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
	 {(char *)"CombPosition", (getter)PyCThostFtdcInvestorPositionField_get_CombPosition, (setter)PyCThostFtdcInvestorPositionField_set_CombPosition, (char *)"CombPosition", NULL},
	 {(char *)"CombLongFrozen", (getter)PyCThostFtdcInvestorPositionField_get_CombLongFrozen, (setter)PyCThostFtdcInvestorPositionField_set_CombLongFrozen, (char *)"CombLongFrozen", NULL},
	 {(char *)"CombShortFrozen", (getter)PyCThostFtdcInvestorPositionField_get_CombShortFrozen, (setter)PyCThostFtdcInvestorPositionField_set_CombShortFrozen, (char *)"CombShortFrozen", NULL},
	 {(char *)"CloseProfitByDate", (getter)PyCThostFtdcInvestorPositionField_get_CloseProfitByDate, (setter)PyCThostFtdcInvestorPositionField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
	 {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcInvestorPositionField_get_CloseProfitByTrade, (setter)PyCThostFtdcInvestorPositionField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
	 {(char *)"TodayPosition", (getter)PyCThostFtdcInvestorPositionField_get_TodayPosition, (setter)PyCThostFtdcInvestorPositionField_set_TodayPosition, (char *)"TodayPosition", NULL},
	 {(char *)"MarginRateByMoney", (getter)PyCThostFtdcInvestorPositionField_get_MarginRateByMoney, (setter)PyCThostFtdcInvestorPositionField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
	 {(char *)"MarginRateByVolume", (getter)PyCThostFtdcInvestorPositionField_get_MarginRateByVolume, (setter)PyCThostFtdcInvestorPositionField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
	 {(char *)"StrikeFrozen", (getter)PyCThostFtdcInvestorPositionField_get_StrikeFrozen, (setter)PyCThostFtdcInvestorPositionField_set_StrikeFrozen, (char *)"StrikeFrozen", NULL},
	 {(char *)"StrikeFrozenAmount", (getter)PyCThostFtdcInvestorPositionField_get_StrikeFrozenAmount, (setter)PyCThostFtdcInvestorPositionField_set_StrikeFrozenAmount, (char *)"StrikeFrozenAmount", NULL},
	 {(char *)"AbandonFrozen", (getter)PyCThostFtdcInvestorPositionField_get_AbandonFrozen, (setter)PyCThostFtdcInvestorPositionField_set_AbandonFrozen, (char *)"AbandonFrozen", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPositionField_get_ExchangeID, (setter)PyCThostFtdcInvestorPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"YdStrikeFrozen", (getter)PyCThostFtdcInvestorPositionField_get_YdStrikeFrozen, (setter)PyCThostFtdcInvestorPositionField_set_YdStrikeFrozen, (char *)"YdStrikeFrozen", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorPositionField_get_InvestUnitID, (setter)PyCThostFtdcInvestorPositionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"PositionCostOffset", (getter)PyCThostFtdcInvestorPositionField_get_PositionCostOffset, (setter)PyCThostFtdcInvestorPositionField_set_PositionCostOffset, (char *)"PositionCostOffset", NULL},
	 {(char *)"TasPosition", (getter)PyCThostFtdcInvestorPositionField_get_TasPosition, (setter)PyCThostFtdcInvestorPositionField_set_TasPosition, (char *)"TasPosition", NULL},
	 {(char *)"TasPositionCost", (getter)PyCThostFtdcInvestorPositionField_get_TasPositionCost, (setter)PyCThostFtdcInvestorPositionField_set_TasPositionCost, (char *)"TasPositionCost", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorPositionField_get_InstrumentID, (setter)PyCThostFtdcInvestorPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"OptionValue", (getter)PyCThostFtdcInvestorPositionField_get_OptionValue, (setter)PyCThostFtdcInvestorPositionField_set_OptionValue, (char *)"OptionValue", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPositionField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPositionField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPositionField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPositionField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionField", (PyObject *)&PyCThostFtdcInvestorPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionField to module");
        Py_DECREF(&PyCThostFtdcInvestorPositionFieldType);
		return -1;
    }

    return 0;
}
