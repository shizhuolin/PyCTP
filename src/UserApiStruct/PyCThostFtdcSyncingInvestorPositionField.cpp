
#include "PyCThostFtdcSyncingInvestorPositionField.h"



static PyObject *PyCThostFtdcSyncingInvestorPositionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInvestorPositionField *self = (PyCThostFtdcSyncingInvestorPositionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInvestorPositionField_init(PyCThostFtdcSyncingInvestorPositionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "PosiDirection", "HedgeFlag", "PositionDate", "YdPosition", "Position", "LongFrozen", "ShortFrozen", "LongFrozenAmount", "ShortFrozenAmount", "OpenVolume", "CloseVolume", "OpenAmount", "CloseAmount", "PositionCost", "PreMargin", "UseMargin", "FrozenMargin", "FrozenCash", "FrozenCommission", "CashIn", "Commission", "CloseProfit", "PositionProfit", "PreSettlementPrice", "SettlementPrice", "TradingDay", "SettlementID", "OpenCost", "ExchangeMargin", "CombPosition", "CombLongFrozen", "CombShortFrozen", "CloseProfitByDate", "CloseProfitByTrade", "TodayPosition", "MarginRateByMoney", "MarginRateByVolume", "StrikeFrozen", "StrikeFrozenAmount", "AbandonFrozen", "ExchangeID", "YdStrikeFrozen", "InvestUnitID", "PositionCostOffset", "TasPosition", "TasPositionCost", "InstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pSyncingInvestorPositionField_reserve1 = NULL;
	Py_ssize_t pSyncingInvestorPositionField_reserve1_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingInvestorPositionField_BrokerID = NULL;
	Py_ssize_t pSyncingInvestorPositionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInvestorPositionField_InvestorID = NULL;
	Py_ssize_t pSyncingInvestorPositionField_InvestorID_len = 0;

	//TThostFtdcPosiDirectionType char
	char pSyncingInvestorPositionField_PosiDirection = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncingInvestorPositionField_HedgeFlag = 0;

	//TThostFtdcPositionDateType char
	char pSyncingInvestorPositionField_PositionDate = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_YdPosition = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_Position = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_LongFrozen = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_ShortFrozen = 0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_LongFrozenAmount = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_ShortFrozenAmount = 0.0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_OpenVolume = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_CloseVolume = 0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_OpenAmount = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_CloseAmount = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_PositionCost = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_PreMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_UseMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_FrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_PositionProfit = 0.0;

	//TThostFtdcPriceType double
	double pSyncingInvestorPositionField_PreSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncingInvestorPositionField_SettlementPrice = 0.0;

	//TThostFtdcDateType char[9]
	const char *pSyncingInvestorPositionField_TradingDay = NULL;
	Py_ssize_t pSyncingInvestorPositionField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pSyncingInvestorPositionField_SettlementID = 0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_OpenCost = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_ExchangeMargin = 0.0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_CombPosition = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_CombLongFrozen = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_CombShortFrozen = 0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_CloseProfitByDate = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_CloseProfitByTrade = 0.0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_TodayPosition = 0;

	//TThostFtdcRatioType double
	double pSyncingInvestorPositionField_MarginRateByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncingInvestorPositionField_MarginRateByVolume = 0.0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_StrikeFrozen = 0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_StrikeFrozenAmount = 0.0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_AbandonFrozen = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncingInvestorPositionField_ExchangeID = NULL;
	Py_ssize_t pSyncingInvestorPositionField_ExchangeID_len = 0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_YdStrikeFrozen = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pSyncingInvestorPositionField_InvestUnitID = NULL;
	Py_ssize_t pSyncingInvestorPositionField_InvestUnitID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_PositionCostOffset = 0.0;

	//TThostFtdcVolumeType int
	int pSyncingInvestorPositionField_TasPosition = 0;

	//TThostFtdcMoneyType double
	double pSyncingInvestorPositionField_TasPositionCost = 0.0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncingInvestorPositionField_InstrumentID = NULL;
	Py_ssize_t pSyncingInvestorPositionField_InstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccciiiiddiiddddddddddddddy#iddiiiddiddidiy#iy#didy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccciiiiddiidddddddddddddds#iddiiiddiddidis#is#dids#", (char **)kwlist
#endif

		, &pSyncingInvestorPositionField_reserve1, &pSyncingInvestorPositionField_reserve1_len
		, &pSyncingInvestorPositionField_BrokerID, &pSyncingInvestorPositionField_BrokerID_len
		, &pSyncingInvestorPositionField_InvestorID, &pSyncingInvestorPositionField_InvestorID_len
		, &pSyncingInvestorPositionField_PosiDirection
		, &pSyncingInvestorPositionField_HedgeFlag
		, &pSyncingInvestorPositionField_PositionDate
		, &pSyncingInvestorPositionField_YdPosition
		, &pSyncingInvestorPositionField_Position
		, &pSyncingInvestorPositionField_LongFrozen
		, &pSyncingInvestorPositionField_ShortFrozen
		, &pSyncingInvestorPositionField_LongFrozenAmount
		, &pSyncingInvestorPositionField_ShortFrozenAmount
		, &pSyncingInvestorPositionField_OpenVolume
		, &pSyncingInvestorPositionField_CloseVolume
		, &pSyncingInvestorPositionField_OpenAmount
		, &pSyncingInvestorPositionField_CloseAmount
		, &pSyncingInvestorPositionField_PositionCost
		, &pSyncingInvestorPositionField_PreMargin
		, &pSyncingInvestorPositionField_UseMargin
		, &pSyncingInvestorPositionField_FrozenMargin
		, &pSyncingInvestorPositionField_FrozenCash
		, &pSyncingInvestorPositionField_FrozenCommission
		, &pSyncingInvestorPositionField_CashIn
		, &pSyncingInvestorPositionField_Commission
		, &pSyncingInvestorPositionField_CloseProfit
		, &pSyncingInvestorPositionField_PositionProfit
		, &pSyncingInvestorPositionField_PreSettlementPrice
		, &pSyncingInvestorPositionField_SettlementPrice
		, &pSyncingInvestorPositionField_TradingDay, &pSyncingInvestorPositionField_TradingDay_len
		, &pSyncingInvestorPositionField_SettlementID
		, &pSyncingInvestorPositionField_OpenCost
		, &pSyncingInvestorPositionField_ExchangeMargin
		, &pSyncingInvestorPositionField_CombPosition
		, &pSyncingInvestorPositionField_CombLongFrozen
		, &pSyncingInvestorPositionField_CombShortFrozen
		, &pSyncingInvestorPositionField_CloseProfitByDate
		, &pSyncingInvestorPositionField_CloseProfitByTrade
		, &pSyncingInvestorPositionField_TodayPosition
		, &pSyncingInvestorPositionField_MarginRateByMoney
		, &pSyncingInvestorPositionField_MarginRateByVolume
		, &pSyncingInvestorPositionField_StrikeFrozen
		, &pSyncingInvestorPositionField_StrikeFrozenAmount
		, &pSyncingInvestorPositionField_AbandonFrozen
		, &pSyncingInvestorPositionField_ExchangeID, &pSyncingInvestorPositionField_ExchangeID_len
		, &pSyncingInvestorPositionField_YdStrikeFrozen
		, &pSyncingInvestorPositionField_InvestUnitID, &pSyncingInvestorPositionField_InvestUnitID_len
		, &pSyncingInvestorPositionField_PositionCostOffset
		, &pSyncingInvestorPositionField_TasPosition
		, &pSyncingInvestorPositionField_TasPositionCost
		, &pSyncingInvestorPositionField_InstrumentID, &pSyncingInvestorPositionField_InstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pSyncingInvestorPositionField_reserve1 != NULL) {
		if(pSyncingInvestorPositionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pSyncingInvestorPositionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pSyncingInvestorPositionField_reserve1, sizeof(self->data.reserve1) );
		pSyncingInvestorPositionField_reserve1 = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingInvestorPositionField_BrokerID != NULL) {
		if(pSyncingInvestorPositionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingInvestorPositionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingInvestorPositionField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingInvestorPositionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInvestorPositionField_InvestorID != NULL) {
		if(pSyncingInvestorPositionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncingInvestorPositionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncingInvestorPositionField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncingInvestorPositionField_InvestorID = NULL;
	}

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pSyncingInvestorPositionField_PosiDirection;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncingInvestorPositionField_HedgeFlag;

	//TThostFtdcPositionDateType char
	self->data.PositionDate = pSyncingInvestorPositionField_PositionDate;

	//TThostFtdcVolumeType int
	self->data.YdPosition = pSyncingInvestorPositionField_YdPosition;

	//TThostFtdcVolumeType int
	self->data.Position = pSyncingInvestorPositionField_Position;

	//TThostFtdcVolumeType int
	self->data.LongFrozen = pSyncingInvestorPositionField_LongFrozen;

	//TThostFtdcVolumeType int
	self->data.ShortFrozen = pSyncingInvestorPositionField_ShortFrozen;

	//TThostFtdcMoneyType double
	self->data.LongFrozenAmount = pSyncingInvestorPositionField_LongFrozenAmount;
	//TThostFtdcMoneyType double
	self->data.ShortFrozenAmount = pSyncingInvestorPositionField_ShortFrozenAmount;
	//TThostFtdcVolumeType int
	self->data.OpenVolume = pSyncingInvestorPositionField_OpenVolume;

	//TThostFtdcVolumeType int
	self->data.CloseVolume = pSyncingInvestorPositionField_CloseVolume;

	//TThostFtdcMoneyType double
	self->data.OpenAmount = pSyncingInvestorPositionField_OpenAmount;
	//TThostFtdcMoneyType double
	self->data.CloseAmount = pSyncingInvestorPositionField_CloseAmount;
	//TThostFtdcMoneyType double
	self->data.PositionCost = pSyncingInvestorPositionField_PositionCost;
	//TThostFtdcMoneyType double
	self->data.PreMargin = pSyncingInvestorPositionField_PreMargin;
	//TThostFtdcMoneyType double
	self->data.UseMargin = pSyncingInvestorPositionField_UseMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pSyncingInvestorPositionField_FrozenMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pSyncingInvestorPositionField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pSyncingInvestorPositionField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.CashIn = pSyncingInvestorPositionField_CashIn;
	//TThostFtdcMoneyType double
	self->data.Commission = pSyncingInvestorPositionField_Commission;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pSyncingInvestorPositionField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.PositionProfit = pSyncingInvestorPositionField_PositionProfit;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pSyncingInvestorPositionField_PreSettlementPrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pSyncingInvestorPositionField_SettlementPrice;
	//TThostFtdcDateType char[9]
	if(pSyncingInvestorPositionField_TradingDay != NULL) {
		if(pSyncingInvestorPositionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncingInvestorPositionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncingInvestorPositionField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncingInvestorPositionField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pSyncingInvestorPositionField_SettlementID;

	//TThostFtdcMoneyType double
	self->data.OpenCost = pSyncingInvestorPositionField_OpenCost;
	//TThostFtdcMoneyType double
	self->data.ExchangeMargin = pSyncingInvestorPositionField_ExchangeMargin;
	//TThostFtdcVolumeType int
	self->data.CombPosition = pSyncingInvestorPositionField_CombPosition;

	//TThostFtdcVolumeType int
	self->data.CombLongFrozen = pSyncingInvestorPositionField_CombLongFrozen;

	//TThostFtdcVolumeType int
	self->data.CombShortFrozen = pSyncingInvestorPositionField_CombShortFrozen;

	//TThostFtdcMoneyType double
	self->data.CloseProfitByDate = pSyncingInvestorPositionField_CloseProfitByDate;
	//TThostFtdcMoneyType double
	self->data.CloseProfitByTrade = pSyncingInvestorPositionField_CloseProfitByTrade;
	//TThostFtdcVolumeType int
	self->data.TodayPosition = pSyncingInvestorPositionField_TodayPosition;

	//TThostFtdcRatioType double
	self->data.MarginRateByMoney = pSyncingInvestorPositionField_MarginRateByMoney;
	//TThostFtdcRatioType double
	self->data.MarginRateByVolume = pSyncingInvestorPositionField_MarginRateByVolume;
	//TThostFtdcVolumeType int
	self->data.StrikeFrozen = pSyncingInvestorPositionField_StrikeFrozen;

	//TThostFtdcMoneyType double
	self->data.StrikeFrozenAmount = pSyncingInvestorPositionField_StrikeFrozenAmount;
	//TThostFtdcVolumeType int
	self->data.AbandonFrozen = pSyncingInvestorPositionField_AbandonFrozen;

	//TThostFtdcExchangeIDType char[9]
	if(pSyncingInvestorPositionField_ExchangeID != NULL) {
		if(pSyncingInvestorPositionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncingInvestorPositionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncingInvestorPositionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncingInvestorPositionField_ExchangeID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.YdStrikeFrozen = pSyncingInvestorPositionField_YdStrikeFrozen;

	//TThostFtdcInvestUnitIDType char[17]
	if(pSyncingInvestorPositionField_InvestUnitID != NULL) {
		if(pSyncingInvestorPositionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pSyncingInvestorPositionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pSyncingInvestorPositionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pSyncingInvestorPositionField_InvestUnitID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PositionCostOffset = pSyncingInvestorPositionField_PositionCostOffset;
	//TThostFtdcVolumeType int
	self->data.TasPosition = pSyncingInvestorPositionField_TasPosition;

	//TThostFtdcMoneyType double
	self->data.TasPositionCost = pSyncingInvestorPositionField_TasPositionCost;
	//TThostFtdcInstrumentIDType char[81]
	if(pSyncingInvestorPositionField_InstrumentID != NULL) {
		if(pSyncingInvestorPositionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncingInvestorPositionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncingInvestorPositionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncingInvestorPositionField_InstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcSyncingInvestorPositionField_dealloc(PyCThostFtdcSyncingInvestorPositionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_repr(PyCThostFtdcSyncingInvestorPositionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:y,s:i,s:y,s:d,s:i,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:i,s:i,s:i,s:i,s:d,s:d,s:i,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:i,s:i,s:i,s:d,s:d,s:i,s:d,s:d,s:i,s:d,s:i,s:s,s:i,s:s,s:d,s:i,s:d,s:s}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorPositionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_reserve1(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_BrokerID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_InvestorID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PosiDirection(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_HedgeFlag(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionDate(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PositionDate), 1);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_YdPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.YdPosition);
#else 
	return PyInt_FromLong(self->data.YdPosition);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_Position(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Position);
#else 
	return PyInt_FromLong(self->data.Position);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_LongFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LongFrozen);
#else 
	return PyInt_FromLong(self->data.LongFrozen);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ShortFrozen);
#else 
	return PyInt_FromLong(self->data.ShortFrozen);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_LongFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongFrozenAmount);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortFrozenAmount);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_OpenVolume(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OpenVolume);
#else 
	return PyInt_FromLong(self->data.OpenVolume);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseVolume(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CloseVolume);
#else 
	return PyInt_FromLong(self->data.CloseVolume);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_OpenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenAmount);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseAmount);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionCost(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionCost);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PreMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMargin);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_UseMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UseMargin);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_FrozenMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_FrozenCash(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_FrozenCommission(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CashIn(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_Commission(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseProfit(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionProfit(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfit);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PreSettlementPrice(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_SettlementPrice(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TradingDay(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_SettlementID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_OpenCost(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenCost);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ExchangeMargin(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeMargin);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CombPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombPosition);
#else 
	return PyInt_FromLong(self->data.CombPosition);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CombLongFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombLongFrozen);
#else 
	return PyInt_FromLong(self->data.CombLongFrozen);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CombShortFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CombShortFrozen);
#else 
	return PyInt_FromLong(self->data.CombShortFrozen);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByDate(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByTrade(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TodayPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TodayPosition);
#else 
	return PyInt_FromLong(self->data.TodayPosition);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByMoney(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByVolume(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.StrikeFrozen);
#else 
	return PyInt_FromLong(self->data.StrikeFrozen);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozenAmount(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.StrikeFrozenAmount);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_AbandonFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AbandonFrozen);
#else 
	return PyInt_FromLong(self->data.AbandonFrozen);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_ExchangeID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_YdStrikeFrozen(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.YdStrikeFrozen);
#else 
	return PyInt_FromLong(self->data.YdStrikeFrozen);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_InvestUnitID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_PositionCostOffset(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionCostOffset);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TasPosition(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TasPosition);
#else 
	return PyInt_FromLong(self->data.TasPosition);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_TasPositionCost(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TasPositionCost);
}

static PyObject *PyCThostFtdcSyncingInvestorPositionField_get_InstrumentID(PyCThostFtdcSyncingInvestorPositionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static int PyCThostFtdcSyncingInvestorPositionField_set_reserve1(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_BrokerID(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_InvestorID(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_PosiDirection(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_HedgeFlag(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_PositionDate(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_YdPosition(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_Position(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_LongFrozen(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozen(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_LongFrozenAmount(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozenAmount(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_OpenVolume(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CloseVolume(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_OpenAmount(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CloseAmount(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_PositionCost(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_PreMargin(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_UseMargin(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_FrozenMargin(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_FrozenCash(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_FrozenCommission(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CashIn(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_Commission(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CloseProfit(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_PositionProfit(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_PreSettlementPrice(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_SettlementPrice(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_TradingDay(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_SettlementID(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_OpenCost(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_ExchangeMargin(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CombPosition(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CombLongFrozen(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CombShortFrozen(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByDate(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByTrade(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_TodayPosition(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByMoney(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByVolume(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozen(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozenAmount(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_AbandonFrozen(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_ExchangeID(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_YdStrikeFrozen(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_InvestUnitID(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_PositionCostOffset(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_TasPosition(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_TasPositionCost(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorPositionField_set_InstrumentID(PyCThostFtdcSyncingInvestorPositionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncingInvestorPositionField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcSyncingInvestorPositionField_get_reserve1, (setter)PyCThostFtdcSyncingInvestorPositionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_BrokerID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_InvestorID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PosiDirection, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncingInvestorPositionField_get_HedgeFlag, (setter)PyCThostFtdcSyncingInvestorPositionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"PositionDate", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionDate, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionDate, (char *)"PositionDate", NULL},
	 {(char *)"YdPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_YdPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_YdPosition, (char *)"YdPosition", NULL},
	 {(char *)"Position", (getter)PyCThostFtdcSyncingInvestorPositionField_get_Position, (setter)PyCThostFtdcSyncingInvestorPositionField_set_Position, (char *)"Position", NULL},
	 {(char *)"LongFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_LongFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_LongFrozen, (char *)"LongFrozen", NULL},
	 {(char *)"ShortFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozen, (char *)"ShortFrozen", NULL},
	 {(char *)"LongFrozenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_LongFrozenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_LongFrozenAmount, (char *)"LongFrozenAmount", NULL},
	 {(char *)"ShortFrozenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ShortFrozenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ShortFrozenAmount, (char *)"ShortFrozenAmount", NULL},
	 {(char *)"OpenVolume", (getter)PyCThostFtdcSyncingInvestorPositionField_get_OpenVolume, (setter)PyCThostFtdcSyncingInvestorPositionField_set_OpenVolume, (char *)"OpenVolume", NULL},
	 {(char *)"CloseVolume", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseVolume, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseVolume, (char *)"CloseVolume", NULL},
	 {(char *)"OpenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_OpenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_OpenAmount, (char *)"OpenAmount", NULL},
	 {(char *)"CloseAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseAmount, (char *)"CloseAmount", NULL},
	 {(char *)"PositionCost", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionCost, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionCost, (char *)"PositionCost", NULL},
	 {(char *)"PreMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PreMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PreMargin, (char *)"PreMargin", NULL},
	 {(char *)"UseMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_UseMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_UseMargin, (char *)"UseMargin", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_FrozenMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcSyncingInvestorPositionField_get_FrozenCash, (setter)PyCThostFtdcSyncingInvestorPositionField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcSyncingInvestorPositionField_get_FrozenCommission, (setter)PyCThostFtdcSyncingInvestorPositionField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CashIn, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcSyncingInvestorPositionField_get_Commission, (setter)PyCThostFtdcSyncingInvestorPositionField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseProfit, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"PositionProfit", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionProfit, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionProfit, (char *)"PositionProfit", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PreSettlementPrice, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcSyncingInvestorPositionField_get_SettlementPrice, (setter)PyCThostFtdcSyncingInvestorPositionField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TradingDay, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_SettlementID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"OpenCost", (getter)PyCThostFtdcSyncingInvestorPositionField_get_OpenCost, (setter)PyCThostFtdcSyncingInvestorPositionField_set_OpenCost, (char *)"OpenCost", NULL},
	 {(char *)"ExchangeMargin", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ExchangeMargin, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
	 {(char *)"CombPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CombPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CombPosition, (char *)"CombPosition", NULL},
	 {(char *)"CombLongFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CombLongFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CombLongFrozen, (char *)"CombLongFrozen", NULL},
	 {(char *)"CombShortFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CombShortFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CombShortFrozen, (char *)"CombShortFrozen", NULL},
	 {(char *)"CloseProfitByDate", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByDate, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
	 {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcSyncingInvestorPositionField_get_CloseProfitByTrade, (setter)PyCThostFtdcSyncingInvestorPositionField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
	 {(char *)"TodayPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TodayPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TodayPosition, (char *)"TodayPosition", NULL},
	 {(char *)"MarginRateByMoney", (getter)PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByMoney, (setter)PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
	 {(char *)"MarginRateByVolume", (getter)PyCThostFtdcSyncingInvestorPositionField_get_MarginRateByVolume, (setter)PyCThostFtdcSyncingInvestorPositionField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
	 {(char *)"StrikeFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozen, (char *)"StrikeFrozen", NULL},
	 {(char *)"StrikeFrozenAmount", (getter)PyCThostFtdcSyncingInvestorPositionField_get_StrikeFrozenAmount, (setter)PyCThostFtdcSyncingInvestorPositionField_set_StrikeFrozenAmount, (char *)"StrikeFrozenAmount", NULL},
	 {(char *)"AbandonFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_AbandonFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_AbandonFrozen, (char *)"AbandonFrozen", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_ExchangeID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"YdStrikeFrozen", (getter)PyCThostFtdcSyncingInvestorPositionField_get_YdStrikeFrozen, (setter)PyCThostFtdcSyncingInvestorPositionField_set_YdStrikeFrozen, (char *)"YdStrikeFrozen", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_InvestUnitID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"PositionCostOffset", (getter)PyCThostFtdcSyncingInvestorPositionField_get_PositionCostOffset, (setter)PyCThostFtdcSyncingInvestorPositionField_set_PositionCostOffset, (char *)"PositionCostOffset", NULL},
	 {(char *)"TasPosition", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TasPosition, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TasPosition, (char *)"TasPosition", NULL},
	 {(char *)"TasPositionCost", (getter)PyCThostFtdcSyncingInvestorPositionField_get_TasPositionCost, (setter)PyCThostFtdcSyncingInvestorPositionField_set_TasPositionCost, (char *)"TasPositionCost", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncingInvestorPositionField_get_InstrumentID, (setter)PyCThostFtdcSyncingInvestorPositionField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInvestorPositionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInvestorPositionField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInvestorPositionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInvestorPositionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInvestorPositionField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInvestorPositionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInvestorPositionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInvestorPositionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInvestorPositionField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInvestorPositionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInvestorPositionField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInvestorPositionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInvestorPositionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInvestorPositionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorPositionField", (PyObject *)&PyCThostFtdcSyncingInvestorPositionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorPositionField to module");
        Py_DECREF(&PyCThostFtdcSyncingInvestorPositionFieldType);
		return -1;
    }

    return 0;
}
