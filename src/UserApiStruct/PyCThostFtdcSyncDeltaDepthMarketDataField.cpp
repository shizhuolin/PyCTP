
#include "PyCThostFtdcSyncDeltaDepthMarketDataField.h"



static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaDepthMarketDataField *self = (PyCThostFtdcSyncDeltaDepthMarketDataField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_init(PyCThostFtdcSyncDeltaDepthMarketDataField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "InstrumentID", "ExchangeID", "ExchangeInstID", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1", "BidPrice2", "BidVolume2", "AskPrice2", "AskVolume2", "BidPrice3", "BidVolume3", "AskPrice3", "AskVolume3", "BidPrice4", "BidVolume4", "AskPrice4", "AskVolume4", "BidPrice5", "BidVolume5", "AskPrice5", "AskVolume5", "AveragePrice", "ActionDay", "BandingUpperPrice", "BandingLowerPrice", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaDepthMarketDataField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaDepthMarketDataField_TradingDay_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaDepthMarketDataField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaDepthMarketDataField_InstrumentID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaDepthMarketDataField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaDepthMarketDataField_ExchangeID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pSyncDeltaDepthMarketDataField_ExchangeInstID = NULL;
	Py_ssize_t pSyncDeltaDepthMarketDataField_ExchangeInstID_len = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_LastPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_PreSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_PreClosePrice = 0.0;

	//TThostFtdcLargeVolumeType double
	double pSyncDeltaDepthMarketDataField_PreOpenInterest = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_OpenPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_HighestPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_LowestPrice = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_Volume = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaDepthMarketDataField_Turnover = 0.0;

	//TThostFtdcLargeVolumeType double
	double pSyncDeltaDepthMarketDataField_OpenInterest = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_ClosePrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_SettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_UpperLimitPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_LowerLimitPrice = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaDepthMarketDataField_PreDelta = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaDepthMarketDataField_CurrDelta = 0.0;

	//TThostFtdcTimeType char[9]
	const char *pSyncDeltaDepthMarketDataField_UpdateTime = NULL;
	Py_ssize_t pSyncDeltaDepthMarketDataField_UpdateTime_len = 0;

	//TThostFtdcMillisecType int
	int pSyncDeltaDepthMarketDataField_UpdateMillisec = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_BidPrice1 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_BidVolume1 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_AskPrice1 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_AskVolume1 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_BidPrice2 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_BidVolume2 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_AskPrice2 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_AskVolume2 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_BidPrice3 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_BidVolume3 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_AskPrice3 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_AskVolume3 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_BidPrice4 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_BidVolume4 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_AskPrice4 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_AskVolume4 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_BidPrice5 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_BidVolume5 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_AskPrice5 = 0.0;

	//TThostFtdcVolumeType int
	int pSyncDeltaDepthMarketDataField_AskVolume5 = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_AveragePrice = 0.0;

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaDepthMarketDataField_ActionDay = NULL;
	Py_ssize_t pSyncDeltaDepthMarketDataField_ActionDay_len = 0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_BandingUpperPrice = 0.0;

	//TThostFtdcPriceType double
	double pSyncDeltaDepthMarketDataField_BandingLowerPrice = 0.0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaDepthMarketDataField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaDepthMarketDataField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#idididididididididididy#ddci", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddddddidddddddds#ididididididididididids#ddci", (char **)kwlist
#endif

		, &pSyncDeltaDepthMarketDataField_TradingDay, &pSyncDeltaDepthMarketDataField_TradingDay_len
		, &pSyncDeltaDepthMarketDataField_InstrumentID, &pSyncDeltaDepthMarketDataField_InstrumentID_len
		, &pSyncDeltaDepthMarketDataField_ExchangeID, &pSyncDeltaDepthMarketDataField_ExchangeID_len
		, &pSyncDeltaDepthMarketDataField_ExchangeInstID, &pSyncDeltaDepthMarketDataField_ExchangeInstID_len
		, &pSyncDeltaDepthMarketDataField_LastPrice
		, &pSyncDeltaDepthMarketDataField_PreSettlementPrice
		, &pSyncDeltaDepthMarketDataField_PreClosePrice
		, &pSyncDeltaDepthMarketDataField_PreOpenInterest
		, &pSyncDeltaDepthMarketDataField_OpenPrice
		, &pSyncDeltaDepthMarketDataField_HighestPrice
		, &pSyncDeltaDepthMarketDataField_LowestPrice
		, &pSyncDeltaDepthMarketDataField_Volume
		, &pSyncDeltaDepthMarketDataField_Turnover
		, &pSyncDeltaDepthMarketDataField_OpenInterest
		, &pSyncDeltaDepthMarketDataField_ClosePrice
		, &pSyncDeltaDepthMarketDataField_SettlementPrice
		, &pSyncDeltaDepthMarketDataField_UpperLimitPrice
		, &pSyncDeltaDepthMarketDataField_LowerLimitPrice
		, &pSyncDeltaDepthMarketDataField_PreDelta
		, &pSyncDeltaDepthMarketDataField_CurrDelta
		, &pSyncDeltaDepthMarketDataField_UpdateTime, &pSyncDeltaDepthMarketDataField_UpdateTime_len
		, &pSyncDeltaDepthMarketDataField_UpdateMillisec
		, &pSyncDeltaDepthMarketDataField_BidPrice1
		, &pSyncDeltaDepthMarketDataField_BidVolume1
		, &pSyncDeltaDepthMarketDataField_AskPrice1
		, &pSyncDeltaDepthMarketDataField_AskVolume1
		, &pSyncDeltaDepthMarketDataField_BidPrice2
		, &pSyncDeltaDepthMarketDataField_BidVolume2
		, &pSyncDeltaDepthMarketDataField_AskPrice2
		, &pSyncDeltaDepthMarketDataField_AskVolume2
		, &pSyncDeltaDepthMarketDataField_BidPrice3
		, &pSyncDeltaDepthMarketDataField_BidVolume3
		, &pSyncDeltaDepthMarketDataField_AskPrice3
		, &pSyncDeltaDepthMarketDataField_AskVolume3
		, &pSyncDeltaDepthMarketDataField_BidPrice4
		, &pSyncDeltaDepthMarketDataField_BidVolume4
		, &pSyncDeltaDepthMarketDataField_AskPrice4
		, &pSyncDeltaDepthMarketDataField_AskVolume4
		, &pSyncDeltaDepthMarketDataField_BidPrice5
		, &pSyncDeltaDepthMarketDataField_BidVolume5
		, &pSyncDeltaDepthMarketDataField_AskPrice5
		, &pSyncDeltaDepthMarketDataField_AskVolume5
		, &pSyncDeltaDepthMarketDataField_AveragePrice
		, &pSyncDeltaDepthMarketDataField_ActionDay, &pSyncDeltaDepthMarketDataField_ActionDay_len
		, &pSyncDeltaDepthMarketDataField_BandingUpperPrice
		, &pSyncDeltaDepthMarketDataField_BandingLowerPrice
		, &pSyncDeltaDepthMarketDataField_ActionDirection
		, &pSyncDeltaDepthMarketDataField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaDepthMarketDataField_TradingDay != NULL) {
		if(pSyncDeltaDepthMarketDataField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaDepthMarketDataField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaDepthMarketDataField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaDepthMarketDataField_TradingDay = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaDepthMarketDataField_InstrumentID != NULL) {
		if(pSyncDeltaDepthMarketDataField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaDepthMarketDataField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaDepthMarketDataField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaDepthMarketDataField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaDepthMarketDataField_ExchangeID != NULL) {
		if(pSyncDeltaDepthMarketDataField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaDepthMarketDataField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaDepthMarketDataField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaDepthMarketDataField_ExchangeID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pSyncDeltaDepthMarketDataField_ExchangeInstID != NULL) {
		if(pSyncDeltaDepthMarketDataField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pSyncDeltaDepthMarketDataField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pSyncDeltaDepthMarketDataField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pSyncDeltaDepthMarketDataField_ExchangeInstID = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LastPrice = pSyncDeltaDepthMarketDataField_LastPrice;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pSyncDeltaDepthMarketDataField_PreSettlementPrice;
	//TThostFtdcPriceType double
	self->data.PreClosePrice = pSyncDeltaDepthMarketDataField_PreClosePrice;
	//TThostFtdcLargeVolumeType double
	self->data.PreOpenInterest = pSyncDeltaDepthMarketDataField_PreOpenInterest;
	//TThostFtdcPriceType double
	self->data.OpenPrice = pSyncDeltaDepthMarketDataField_OpenPrice;
	//TThostFtdcPriceType double
	self->data.HighestPrice = pSyncDeltaDepthMarketDataField_HighestPrice;
	//TThostFtdcPriceType double
	self->data.LowestPrice = pSyncDeltaDepthMarketDataField_LowestPrice;
	//TThostFtdcVolumeType int
	self->data.Volume = pSyncDeltaDepthMarketDataField_Volume;

	//TThostFtdcMoneyType double
	self->data.Turnover = pSyncDeltaDepthMarketDataField_Turnover;
	//TThostFtdcLargeVolumeType double
	self->data.OpenInterest = pSyncDeltaDepthMarketDataField_OpenInterest;
	//TThostFtdcPriceType double
	self->data.ClosePrice = pSyncDeltaDepthMarketDataField_ClosePrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pSyncDeltaDepthMarketDataField_SettlementPrice;
	//TThostFtdcPriceType double
	self->data.UpperLimitPrice = pSyncDeltaDepthMarketDataField_UpperLimitPrice;
	//TThostFtdcPriceType double
	self->data.LowerLimitPrice = pSyncDeltaDepthMarketDataField_LowerLimitPrice;
	//TThostFtdcRatioType double
	self->data.PreDelta = pSyncDeltaDepthMarketDataField_PreDelta;
	//TThostFtdcRatioType double
	self->data.CurrDelta = pSyncDeltaDepthMarketDataField_CurrDelta;
	//TThostFtdcTimeType char[9]
	if(pSyncDeltaDepthMarketDataField_UpdateTime != NULL) {
		if(pSyncDeltaDepthMarketDataField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
			PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", pSyncDeltaDepthMarketDataField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
			return -1;
		}
		strncpy(self->data.UpdateTime, pSyncDeltaDepthMarketDataField_UpdateTime, sizeof(self->data.UpdateTime) );
		pSyncDeltaDepthMarketDataField_UpdateTime = NULL;
	}

	//TThostFtdcMillisecType int
	self->data.UpdateMillisec = pSyncDeltaDepthMarketDataField_UpdateMillisec;

	//TThostFtdcPriceType double
	self->data.BidPrice1 = pSyncDeltaDepthMarketDataField_BidPrice1;
	//TThostFtdcVolumeType int
	self->data.BidVolume1 = pSyncDeltaDepthMarketDataField_BidVolume1;

	//TThostFtdcPriceType double
	self->data.AskPrice1 = pSyncDeltaDepthMarketDataField_AskPrice1;
	//TThostFtdcVolumeType int
	self->data.AskVolume1 = pSyncDeltaDepthMarketDataField_AskVolume1;

	//TThostFtdcPriceType double
	self->data.BidPrice2 = pSyncDeltaDepthMarketDataField_BidPrice2;
	//TThostFtdcVolumeType int
	self->data.BidVolume2 = pSyncDeltaDepthMarketDataField_BidVolume2;

	//TThostFtdcPriceType double
	self->data.AskPrice2 = pSyncDeltaDepthMarketDataField_AskPrice2;
	//TThostFtdcVolumeType int
	self->data.AskVolume2 = pSyncDeltaDepthMarketDataField_AskVolume2;

	//TThostFtdcPriceType double
	self->data.BidPrice3 = pSyncDeltaDepthMarketDataField_BidPrice3;
	//TThostFtdcVolumeType int
	self->data.BidVolume3 = pSyncDeltaDepthMarketDataField_BidVolume3;

	//TThostFtdcPriceType double
	self->data.AskPrice3 = pSyncDeltaDepthMarketDataField_AskPrice3;
	//TThostFtdcVolumeType int
	self->data.AskVolume3 = pSyncDeltaDepthMarketDataField_AskVolume3;

	//TThostFtdcPriceType double
	self->data.BidPrice4 = pSyncDeltaDepthMarketDataField_BidPrice4;
	//TThostFtdcVolumeType int
	self->data.BidVolume4 = pSyncDeltaDepthMarketDataField_BidVolume4;

	//TThostFtdcPriceType double
	self->data.AskPrice4 = pSyncDeltaDepthMarketDataField_AskPrice4;
	//TThostFtdcVolumeType int
	self->data.AskVolume4 = pSyncDeltaDepthMarketDataField_AskVolume4;

	//TThostFtdcPriceType double
	self->data.BidPrice5 = pSyncDeltaDepthMarketDataField_BidPrice5;
	//TThostFtdcVolumeType int
	self->data.BidVolume5 = pSyncDeltaDepthMarketDataField_BidVolume5;

	//TThostFtdcPriceType double
	self->data.AskPrice5 = pSyncDeltaDepthMarketDataField_AskPrice5;
	//TThostFtdcVolumeType int
	self->data.AskVolume5 = pSyncDeltaDepthMarketDataField_AskVolume5;

	//TThostFtdcPriceType double
	self->data.AveragePrice = pSyncDeltaDepthMarketDataField_AveragePrice;
	//TThostFtdcDateType char[9]
	if(pSyncDeltaDepthMarketDataField_ActionDay != NULL) {
		if(pSyncDeltaDepthMarketDataField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
			PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", pSyncDeltaDepthMarketDataField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
			return -1;
		}
		strncpy(self->data.ActionDay, pSyncDeltaDepthMarketDataField_ActionDay, sizeof(self->data.ActionDay) );
		pSyncDeltaDepthMarketDataField_ActionDay = NULL;
	}

	//TThostFtdcPriceType double
	self->data.BandingUpperPrice = pSyncDeltaDepthMarketDataField_BandingUpperPrice;
	//TThostFtdcPriceType double
	self->data.BandingLowerPrice = pSyncDeltaDepthMarketDataField_BandingLowerPrice;
	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaDepthMarketDataField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaDepthMarketDataField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaDepthMarketDataField_dealloc(PyCThostFtdcSyncDeltaDepthMarketDataField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_repr(PyCThostFtdcSyncDeltaDepthMarketDataField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:y,s:d,s:d,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:s,s:d,s:d,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeID", self->data.ExchangeID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "LastPrice", self->data.LastPrice
		, "PreSettlementPrice", self->data.PreSettlementPrice
		, "PreClosePrice", self->data.PreClosePrice
		, "PreOpenInterest", self->data.PreOpenInterest
		, "OpenPrice", self->data.OpenPrice
		, "HighestPrice", self->data.HighestPrice
		, "LowestPrice", self->data.LowestPrice
		, "Volume", self->data.Volume
		, "Turnover", self->data.Turnover
		, "OpenInterest", self->data.OpenInterest
		, "ClosePrice", self->data.ClosePrice
		, "SettlementPrice", self->data.SettlementPrice
		, "UpperLimitPrice", self->data.UpperLimitPrice
		, "LowerLimitPrice", self->data.LowerLimitPrice
		, "PreDelta", self->data.PreDelta
		, "CurrDelta", self->data.CurrDelta
		, "UpdateTime", self->data.UpdateTime 
		, "UpdateMillisec", self->data.UpdateMillisec
		, "BidPrice1", self->data.BidPrice1
		, "BidVolume1", self->data.BidVolume1
		, "AskPrice1", self->data.AskPrice1
		, "AskVolume1", self->data.AskVolume1
		, "BidPrice2", self->data.BidPrice2
		, "BidVolume2", self->data.BidVolume2
		, "AskPrice2", self->data.AskPrice2
		, "AskVolume2", self->data.AskVolume2
		, "BidPrice3", self->data.BidPrice3
		, "BidVolume3", self->data.BidVolume3
		, "AskPrice3", self->data.AskPrice3
		, "AskVolume3", self->data.AskVolume3
		, "BidPrice4", self->data.BidPrice4
		, "BidVolume4", self->data.BidVolume4
		, "AskPrice4", self->data.AskPrice4
		, "AskVolume4", self->data.AskVolume4
		, "BidPrice5", self->data.BidPrice5
		, "BidVolume5", self->data.BidVolume5
		, "AskPrice5", self->data.AskPrice5
		, "AskVolume5", self->data.AskVolume5
		, "AveragePrice", self->data.AveragePrice
		, "ActionDay", self->data.ActionDay 
		, "BandingUpperPrice", self->data.BandingUpperPrice
		, "BandingLowerPrice", self->data.BandingLowerPrice
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaDepthMarketDataField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_TradingDay(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_InstrumentID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeInstID(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_LastPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreSettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreClosePrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreOpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreOpenInterest);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_HighestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HighestPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LowestPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_Volume(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_Turnover(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Turnover);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenInterest);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ClosePrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_SettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpperLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UpperLimitPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowerLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LowerLimitPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreDelta(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreDelta);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_CurrDelta(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CurrDelta);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateTime(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.UpdateTime);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateMillisec(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UpdateMillisec);
#else 
	return PyInt_FromLong(self->data.UpdateMillisec);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice1);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume1);
#else 
	return PyInt_FromLong(self->data.BidVolume1);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice1);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume1);
#else 
	return PyInt_FromLong(self->data.AskVolume1);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice2);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume2);
#else 
	return PyInt_FromLong(self->data.BidVolume2);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice2);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume2);
#else 
	return PyInt_FromLong(self->data.AskVolume2);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice3);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume3);
#else 
	return PyInt_FromLong(self->data.BidVolume3);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice3);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume3);
#else 
	return PyInt_FromLong(self->data.AskVolume3);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice4);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume4);
#else 
	return PyInt_FromLong(self->data.BidVolume4);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice4);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume4);
#else 
	return PyInt_FromLong(self->data.AskVolume4);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice5);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume5);
#else 
	return PyInt_FromLong(self->data.BidVolume5);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice5);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume5);
#else 
	return PyInt_FromLong(self->data.AskVolume5);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_AveragePrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AveragePrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDay(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDay);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingUpperPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BandingUpperPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingLowerPrice(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BandingLowerPrice);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDirection(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaDepthMarketDataField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_TradingDay(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_InstrumentID(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeID(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeInstID(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_LastPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LastPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreSettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreClosePrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreOpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreOpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreOpenInterest = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_HighestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HighestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.HighestPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowestPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowestPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowestPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_Volume(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_Turnover(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Turnover Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Turnover = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenInterest(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OpenInterest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OpenInterest = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ClosePrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClosePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ClosePrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_SettlementPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpperLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpperLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.UpperLimitPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowerLimitPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LowerLimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LowerLimitPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreDelta(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreDelta = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_CurrDelta(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrDelta Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrDelta = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateTime(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UpdateTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
		PyErr_SetString(PyExc_ValueError, "UpdateTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.UpdateTime, buf, sizeof(self->data.UpdateTime));
	return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateMillisec(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "UpdateMillisec Expected int"); 
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
    self->data.UpdateMillisec = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice1 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice1 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume1 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BidVolume1 Expected int"); 
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
    self->data.BidVolume1 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice1(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice1 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice1 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume1(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume1 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AskVolume1 Expected int"); 
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
    self->data.AskVolume1 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice2 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume2 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BidVolume2 Expected int"); 
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
    self->data.BidVolume2 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice2(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice2 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice2 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume2(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume2 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AskVolume2 Expected int"); 
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
    self->data.AskVolume2 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice3 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice3 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume3 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BidVolume3 Expected int"); 
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
    self->data.BidVolume3 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice3(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice3 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice3 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume3(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume3 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AskVolume3 Expected int"); 
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
    self->data.AskVolume3 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice4 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice4 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume4 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BidVolume4 Expected int"); 
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
    self->data.BidVolume4 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice4(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice4 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice4 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume4(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume4 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AskVolume4 Expected int"); 
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
    self->data.AskVolume4 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidPrice5 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BidPrice5 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BidVolume5 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BidVolume5 Expected int"); 
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
    self->data.BidVolume5 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice5(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskPrice5 Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AskPrice5 = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume5(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AskVolume5 Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AskVolume5 Expected int"); 
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
    self->data.AskVolume5 = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_AveragePrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AveragePrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.AveragePrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDay(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
		PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionDay, buf, sizeof(self->data.ActionDay));
	return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingUpperPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BandingUpperPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BandingUpperPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingLowerPrice(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BandingLowerPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BandingLowerPrice = buf;
    return 0;
}

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDirection(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaDepthMarketDataField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaDepthMarketDataField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaDepthMarketDataField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ExchangeInstID, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"LastPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_LastPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_LastPrice, (char *)"LastPrice", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreSettlementPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"PreClosePrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreClosePrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
	 {(char *)"PreOpenInterest", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreOpenInterest, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
	 {(char *)"OpenPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenPrice, (char *)"OpenPrice", NULL},
	 {(char *)"HighestPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_HighestPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_HighestPrice, (char *)"HighestPrice", NULL},
	 {(char *)"LowestPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowestPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowestPrice, (char *)"LowestPrice", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_Volume, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"Turnover", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_Turnover, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_Turnover, (char *)"Turnover", NULL},
	 {(char *)"OpenInterest", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_OpenInterest, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_OpenInterest, (char *)"OpenInterest", NULL},
	 {(char *)"ClosePrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ClosePrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ClosePrice, (char *)"ClosePrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_SettlementPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"UpperLimitPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpperLimitPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpperLimitPrice, (char *)"UpperLimitPrice", NULL},
	 {(char *)"LowerLimitPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_LowerLimitPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_LowerLimitPrice, (char *)"LowerLimitPrice", NULL},
	 {(char *)"PreDelta", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_PreDelta, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_PreDelta, (char *)"PreDelta", NULL},
	 {(char *)"CurrDelta", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_CurrDelta, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_CurrDelta, (char *)"CurrDelta", NULL},
	 {(char *)"UpdateTime", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateTime, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateTime, (char *)"UpdateTime", NULL},
	 {(char *)"UpdateMillisec", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_UpdateMillisec, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_UpdateMillisec, (char *)"UpdateMillisec", NULL},
	 {(char *)"BidPrice1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice1, (char *)"BidPrice1", NULL},
	 {(char *)"BidVolume1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume1, (char *)"BidVolume1", NULL},
	 {(char *)"AskPrice1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice1, (char *)"AskPrice1", NULL},
	 {(char *)"AskVolume1", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume1, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume1, (char *)"AskVolume1", NULL},
	 {(char *)"BidPrice2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice2, (char *)"BidPrice2", NULL},
	 {(char *)"BidVolume2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume2, (char *)"BidVolume2", NULL},
	 {(char *)"AskPrice2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice2, (char *)"AskPrice2", NULL},
	 {(char *)"AskVolume2", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume2, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume2, (char *)"AskVolume2", NULL},
	 {(char *)"BidPrice3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice3, (char *)"BidPrice3", NULL},
	 {(char *)"BidVolume3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume3, (char *)"BidVolume3", NULL},
	 {(char *)"AskPrice3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice3, (char *)"AskPrice3", NULL},
	 {(char *)"AskVolume3", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume3, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume3, (char *)"AskVolume3", NULL},
	 {(char *)"BidPrice4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice4, (char *)"BidPrice4", NULL},
	 {(char *)"BidVolume4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume4, (char *)"BidVolume4", NULL},
	 {(char *)"AskPrice4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice4, (char *)"AskPrice4", NULL},
	 {(char *)"AskVolume4", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume4, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume4, (char *)"AskVolume4", NULL},
	 {(char *)"BidPrice5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidPrice5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidPrice5, (char *)"BidPrice5", NULL},
	 {(char *)"BidVolume5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BidVolume5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BidVolume5, (char *)"BidVolume5", NULL},
	 {(char *)"AskPrice5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskPrice5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskPrice5, (char *)"AskPrice5", NULL},
	 {(char *)"AskVolume5", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AskVolume5, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AskVolume5, (char *)"AskVolume5", NULL},
	 {(char *)"AveragePrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_AveragePrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_AveragePrice, (char *)"AveragePrice", NULL},
	 {(char *)"ActionDay", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDay, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDay, (char *)"ActionDay", NULL},
	 {(char *)"BandingUpperPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingUpperPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingUpperPrice, (char *)"BandingUpperPrice", NULL},
	 {(char *)"BandingLowerPrice", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_BandingLowerPrice, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_BandingLowerPrice, (char *)"BandingLowerPrice", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaDepthMarketDataField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaDepthMarketDataField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaDepthMarketDataFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaDepthMarketDataField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaDepthMarketDataField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaDepthMarketDataField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaDepthMarketDataField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaDepthMarketDataField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaDepthMarketDataField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaDepthMarketDataField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaDepthMarketDataField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaDepthMarketDataFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaDepthMarketDataField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaDepthMarketDataFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaDepthMarketDataField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaDepthMarketDataFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaDepthMarketDataField", (PyObject *)&PyCThostFtdcSyncDeltaDepthMarketDataFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaDepthMarketDataField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaDepthMarketDataFieldType);
		return -1;
    }

    return 0;
}
