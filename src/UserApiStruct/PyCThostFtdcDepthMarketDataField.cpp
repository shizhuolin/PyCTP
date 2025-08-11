
#include "PyCThostFtdcDepthMarketDataField.h"



static PyObject *PyCThostFtdcDepthMarketDataField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcDepthMarketDataField *self = (PyCThostFtdcDepthMarketDataField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcDepthMarketDataField_init(PyCThostFtdcDepthMarketDataField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "reserve1", "ExchangeID", "reserve2", "LastPrice", "PreSettlementPrice", "PreClosePrice", "PreOpenInterest", "OpenPrice", "HighestPrice", "LowestPrice", "Volume", "Turnover", "OpenInterest", "ClosePrice", "SettlementPrice", "UpperLimitPrice", "LowerLimitPrice", "PreDelta", "CurrDelta", "UpdateTime", "UpdateMillisec", "BidPrice1", "BidVolume1", "AskPrice1", "AskVolume1", "BidPrice2", "BidVolume2", "AskPrice2", "AskVolume2", "BidPrice3", "BidVolume3", "AskPrice3", "AskVolume3", "BidPrice4", "BidVolume4", "AskPrice4", "AskVolume4", "BidPrice5", "BidVolume5", "AskPrice5", "AskVolume5", "AveragePrice", "ActionDay", "InstrumentID", "ExchangeInstID", "BandingUpperPrice", "BandingLowerPrice",  NULL};

	//TThostFtdcDateType char[9]
	const char *pDepthMarketDataField_TradingDay = NULL;
	Py_ssize_t pDepthMarketDataField_TradingDay_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pDepthMarketDataField_reserve1 = NULL;
	Py_ssize_t pDepthMarketDataField_reserve1_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pDepthMarketDataField_ExchangeID = NULL;
	Py_ssize_t pDepthMarketDataField_ExchangeID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pDepthMarketDataField_reserve2 = NULL;
	Py_ssize_t pDepthMarketDataField_reserve2_len = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_LastPrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_PreSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_PreClosePrice = 0.0;

	//TThostFtdcLargeVolumeType double
	double pDepthMarketDataField_PreOpenInterest = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_OpenPrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_HighestPrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_LowestPrice = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_Volume = 0;

	//TThostFtdcMoneyType double
	double pDepthMarketDataField_Turnover = 0.0;

	//TThostFtdcLargeVolumeType double
	double pDepthMarketDataField_OpenInterest = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_ClosePrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_SettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_UpperLimitPrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_LowerLimitPrice = 0.0;

	//TThostFtdcRatioType double
	double pDepthMarketDataField_PreDelta = 0.0;

	//TThostFtdcRatioType double
	double pDepthMarketDataField_CurrDelta = 0.0;

	//TThostFtdcTimeType char[9]
	const char *pDepthMarketDataField_UpdateTime = NULL;
	Py_ssize_t pDepthMarketDataField_UpdateTime_len = 0;

	//TThostFtdcMillisecType int
	int pDepthMarketDataField_UpdateMillisec = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_BidPrice1 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_BidVolume1 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_AskPrice1 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_AskVolume1 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_BidPrice2 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_BidVolume2 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_AskPrice2 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_AskVolume2 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_BidPrice3 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_BidVolume3 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_AskPrice3 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_AskVolume3 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_BidPrice4 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_BidVolume4 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_AskPrice4 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_AskVolume4 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_BidPrice5 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_BidVolume5 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_AskPrice5 = 0.0;

	//TThostFtdcVolumeType int
	int pDepthMarketDataField_AskVolume5 = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_AveragePrice = 0.0;

	//TThostFtdcDateType char[9]
	const char *pDepthMarketDataField_ActionDay = NULL;
	Py_ssize_t pDepthMarketDataField_ActionDay_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pDepthMarketDataField_InstrumentID = NULL;
	Py_ssize_t pDepthMarketDataField_InstrumentID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pDepthMarketDataField_ExchangeInstID = NULL;
	Py_ssize_t pDepthMarketDataField_ExchangeInstID_len = 0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_BandingUpperPrice = 0.0;

	//TThostFtdcPriceType double
	double pDepthMarketDataField_BandingLowerPrice = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#dddddddiddddddddy#idididididididididididy#y#y#dd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#dddddddidddddddds#ididididididididididids#s#s#dd", (char **)kwlist
#endif

		, &pDepthMarketDataField_TradingDay, &pDepthMarketDataField_TradingDay_len
		, &pDepthMarketDataField_reserve1, &pDepthMarketDataField_reserve1_len
		, &pDepthMarketDataField_ExchangeID, &pDepthMarketDataField_ExchangeID_len
		, &pDepthMarketDataField_reserve2, &pDepthMarketDataField_reserve2_len
		, &pDepthMarketDataField_LastPrice
		, &pDepthMarketDataField_PreSettlementPrice
		, &pDepthMarketDataField_PreClosePrice
		, &pDepthMarketDataField_PreOpenInterest
		, &pDepthMarketDataField_OpenPrice
		, &pDepthMarketDataField_HighestPrice
		, &pDepthMarketDataField_LowestPrice
		, &pDepthMarketDataField_Volume
		, &pDepthMarketDataField_Turnover
		, &pDepthMarketDataField_OpenInterest
		, &pDepthMarketDataField_ClosePrice
		, &pDepthMarketDataField_SettlementPrice
		, &pDepthMarketDataField_UpperLimitPrice
		, &pDepthMarketDataField_LowerLimitPrice
		, &pDepthMarketDataField_PreDelta
		, &pDepthMarketDataField_CurrDelta
		, &pDepthMarketDataField_UpdateTime, &pDepthMarketDataField_UpdateTime_len
		, &pDepthMarketDataField_UpdateMillisec
		, &pDepthMarketDataField_BidPrice1
		, &pDepthMarketDataField_BidVolume1
		, &pDepthMarketDataField_AskPrice1
		, &pDepthMarketDataField_AskVolume1
		, &pDepthMarketDataField_BidPrice2
		, &pDepthMarketDataField_BidVolume2
		, &pDepthMarketDataField_AskPrice2
		, &pDepthMarketDataField_AskVolume2
		, &pDepthMarketDataField_BidPrice3
		, &pDepthMarketDataField_BidVolume3
		, &pDepthMarketDataField_AskPrice3
		, &pDepthMarketDataField_AskVolume3
		, &pDepthMarketDataField_BidPrice4
		, &pDepthMarketDataField_BidVolume4
		, &pDepthMarketDataField_AskPrice4
		, &pDepthMarketDataField_AskVolume4
		, &pDepthMarketDataField_BidPrice5
		, &pDepthMarketDataField_BidVolume5
		, &pDepthMarketDataField_AskPrice5
		, &pDepthMarketDataField_AskVolume5
		, &pDepthMarketDataField_AveragePrice
		, &pDepthMarketDataField_ActionDay, &pDepthMarketDataField_ActionDay_len
		, &pDepthMarketDataField_InstrumentID, &pDepthMarketDataField_InstrumentID_len
		, &pDepthMarketDataField_ExchangeInstID, &pDepthMarketDataField_ExchangeInstID_len
		, &pDepthMarketDataField_BandingUpperPrice
		, &pDepthMarketDataField_BandingLowerPrice


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pDepthMarketDataField_TradingDay != NULL) {
		if(pDepthMarketDataField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pDepthMarketDataField_TradingDay, sizeof(self->data.TradingDay) );
		pDepthMarketDataField_TradingDay = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pDepthMarketDataField_reserve1 != NULL) {
		if(pDepthMarketDataField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pDepthMarketDataField_reserve1, sizeof(self->data.reserve1) );
		pDepthMarketDataField_reserve1 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pDepthMarketDataField_ExchangeID != NULL) {
		if(pDepthMarketDataField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pDepthMarketDataField_ExchangeID, sizeof(self->data.ExchangeID) );
		pDepthMarketDataField_ExchangeID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pDepthMarketDataField_reserve2 != NULL) {
		if(pDepthMarketDataField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pDepthMarketDataField_reserve2, sizeof(self->data.reserve2) );
		pDepthMarketDataField_reserve2 = NULL;
	}

	//TThostFtdcPriceType double
	self->data.LastPrice = pDepthMarketDataField_LastPrice;
	//TThostFtdcPriceType double
	self->data.PreSettlementPrice = pDepthMarketDataField_PreSettlementPrice;
	//TThostFtdcPriceType double
	self->data.PreClosePrice = pDepthMarketDataField_PreClosePrice;
	//TThostFtdcLargeVolumeType double
	self->data.PreOpenInterest = pDepthMarketDataField_PreOpenInterest;
	//TThostFtdcPriceType double
	self->data.OpenPrice = pDepthMarketDataField_OpenPrice;
	//TThostFtdcPriceType double
	self->data.HighestPrice = pDepthMarketDataField_HighestPrice;
	//TThostFtdcPriceType double
	self->data.LowestPrice = pDepthMarketDataField_LowestPrice;
	//TThostFtdcVolumeType int
	self->data.Volume = pDepthMarketDataField_Volume;

	//TThostFtdcMoneyType double
	self->data.Turnover = pDepthMarketDataField_Turnover;
	//TThostFtdcLargeVolumeType double
	self->data.OpenInterest = pDepthMarketDataField_OpenInterest;
	//TThostFtdcPriceType double
	self->data.ClosePrice = pDepthMarketDataField_ClosePrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pDepthMarketDataField_SettlementPrice;
	//TThostFtdcPriceType double
	self->data.UpperLimitPrice = pDepthMarketDataField_UpperLimitPrice;
	//TThostFtdcPriceType double
	self->data.LowerLimitPrice = pDepthMarketDataField_LowerLimitPrice;
	//TThostFtdcRatioType double
	self->data.PreDelta = pDepthMarketDataField_PreDelta;
	//TThostFtdcRatioType double
	self->data.CurrDelta = pDepthMarketDataField_CurrDelta;
	//TThostFtdcTimeType char[9]
	if(pDepthMarketDataField_UpdateTime != NULL) {
		if(pDepthMarketDataField_UpdateTime_len > (Py_ssize_t)sizeof(self->data.UpdateTime)) {
			PyErr_Format(PyExc_ValueError, "UpdateTime too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_UpdateTime_len, (Py_ssize_t)sizeof(self->data.UpdateTime));
			return -1;
		}
		strncpy(self->data.UpdateTime, pDepthMarketDataField_UpdateTime, sizeof(self->data.UpdateTime) );
		pDepthMarketDataField_UpdateTime = NULL;
	}

	//TThostFtdcMillisecType int
	self->data.UpdateMillisec = pDepthMarketDataField_UpdateMillisec;

	//TThostFtdcPriceType double
	self->data.BidPrice1 = pDepthMarketDataField_BidPrice1;
	//TThostFtdcVolumeType int
	self->data.BidVolume1 = pDepthMarketDataField_BidVolume1;

	//TThostFtdcPriceType double
	self->data.AskPrice1 = pDepthMarketDataField_AskPrice1;
	//TThostFtdcVolumeType int
	self->data.AskVolume1 = pDepthMarketDataField_AskVolume1;

	//TThostFtdcPriceType double
	self->data.BidPrice2 = pDepthMarketDataField_BidPrice2;
	//TThostFtdcVolumeType int
	self->data.BidVolume2 = pDepthMarketDataField_BidVolume2;

	//TThostFtdcPriceType double
	self->data.AskPrice2 = pDepthMarketDataField_AskPrice2;
	//TThostFtdcVolumeType int
	self->data.AskVolume2 = pDepthMarketDataField_AskVolume2;

	//TThostFtdcPriceType double
	self->data.BidPrice3 = pDepthMarketDataField_BidPrice3;
	//TThostFtdcVolumeType int
	self->data.BidVolume3 = pDepthMarketDataField_BidVolume3;

	//TThostFtdcPriceType double
	self->data.AskPrice3 = pDepthMarketDataField_AskPrice3;
	//TThostFtdcVolumeType int
	self->data.AskVolume3 = pDepthMarketDataField_AskVolume3;

	//TThostFtdcPriceType double
	self->data.BidPrice4 = pDepthMarketDataField_BidPrice4;
	//TThostFtdcVolumeType int
	self->data.BidVolume4 = pDepthMarketDataField_BidVolume4;

	//TThostFtdcPriceType double
	self->data.AskPrice4 = pDepthMarketDataField_AskPrice4;
	//TThostFtdcVolumeType int
	self->data.AskVolume4 = pDepthMarketDataField_AskVolume4;

	//TThostFtdcPriceType double
	self->data.BidPrice5 = pDepthMarketDataField_BidPrice5;
	//TThostFtdcVolumeType int
	self->data.BidVolume5 = pDepthMarketDataField_BidVolume5;

	//TThostFtdcPriceType double
	self->data.AskPrice5 = pDepthMarketDataField_AskPrice5;
	//TThostFtdcVolumeType int
	self->data.AskVolume5 = pDepthMarketDataField_AskVolume5;

	//TThostFtdcPriceType double
	self->data.AveragePrice = pDepthMarketDataField_AveragePrice;
	//TThostFtdcDateType char[9]
	if(pDepthMarketDataField_ActionDay != NULL) {
		if(pDepthMarketDataField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
			PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
			return -1;
		}
		strncpy(self->data.ActionDay, pDepthMarketDataField_ActionDay, sizeof(self->data.ActionDay) );
		pDepthMarketDataField_ActionDay = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pDepthMarketDataField_InstrumentID != NULL) {
		if(pDepthMarketDataField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pDepthMarketDataField_InstrumentID, sizeof(self->data.InstrumentID) );
		pDepthMarketDataField_InstrumentID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pDepthMarketDataField_ExchangeInstID != NULL) {
		if(pDepthMarketDataField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pDepthMarketDataField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pDepthMarketDataField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pDepthMarketDataField_ExchangeInstID = NULL;
	}

	//TThostFtdcPriceType double
	self->data.BandingUpperPrice = pDepthMarketDataField_BandingUpperPrice;
	//TThostFtdcPriceType double
	self->data.BandingLowerPrice = pDepthMarketDataField_BandingLowerPrice;


    return 0;
}

static void PyCThostFtdcDepthMarketDataField_dealloc(PyCThostFtdcDepthMarketDataField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcDepthMarketDataField_repr(PyCThostFtdcDepthMarketDataField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:y,s:y,s:y,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:i,s:d,s:s,s:s,s:s,s:d,s:d}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "reserve1", self->data.reserve1 
		, "ExchangeID", self->data.ExchangeID 
		, "reserve2", self->data.reserve2 
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
		, "InstrumentID", self->data.InstrumentID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "BandingUpperPrice", self->data.BandingUpperPrice
		, "BandingLowerPrice", self->data.BandingLowerPrice


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcDepthMarketDataField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_TradingDay(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_reserve1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_ExchangeID(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_reserve2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_LastPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_PreSettlementPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreSettlementPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_PreClosePrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreClosePrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_PreOpenInterest(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreOpenInterest);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_OpenPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_HighestPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.HighestPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_LowestPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LowestPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_Volume(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_Turnover(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Turnover);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_OpenInterest(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenInterest);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_ClosePrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ClosePrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_SettlementPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_UpperLimitPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UpperLimitPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_LowerLimitPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LowerLimitPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_PreDelta(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreDelta);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_CurrDelta(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CurrDelta);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_UpdateTime(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.UpdateTime);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_UpdateMillisec(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UpdateMillisec);
#else 
	return PyInt_FromLong(self->data.UpdateMillisec);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice1);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume1);
#else 
	return PyInt_FromLong(self->data.BidVolume1);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice1);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume1(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume1);
#else 
	return PyInt_FromLong(self->data.AskVolume1);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice2);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume2);
#else 
	return PyInt_FromLong(self->data.BidVolume2);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice2);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume2(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume2);
#else 
	return PyInt_FromLong(self->data.AskVolume2);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice3);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume3);
#else 
	return PyInt_FromLong(self->data.BidVolume3);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice3);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume3(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume3);
#else 
	return PyInt_FromLong(self->data.AskVolume3);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice4);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume4);
#else 
	return PyInt_FromLong(self->data.BidVolume4);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice4);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume4(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume4);
#else 
	return PyInt_FromLong(self->data.AskVolume4);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidPrice5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BidPrice5);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BidVolume5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BidVolume5);
#else 
	return PyInt_FromLong(self->data.BidVolume5);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskPrice5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AskPrice5);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AskVolume5(PyCThostFtdcDepthMarketDataField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AskVolume5);
#else 
	return PyInt_FromLong(self->data.AskVolume5);
#endif 
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_AveragePrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.AveragePrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_ActionDay(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDay);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_InstrumentID(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_ExchangeInstID(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BandingUpperPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BandingUpperPrice);
}

static PyObject *PyCThostFtdcDepthMarketDataField_get_BandingLowerPrice(PyCThostFtdcDepthMarketDataField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BandingLowerPrice);
}

static int PyCThostFtdcDepthMarketDataField_set_TradingDay(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_reserve1(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_ExchangeID(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_reserve2(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_LastPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_PreSettlementPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_PreClosePrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_PreOpenInterest(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_OpenPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_HighestPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_LowestPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_Volume(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_Turnover(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_OpenInterest(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_ClosePrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_SettlementPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_UpperLimitPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_LowerLimitPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_PreDelta(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_CurrDelta(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_UpdateTime(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_UpdateMillisec(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidPrice1(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidVolume1(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskPrice1(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskVolume1(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidPrice2(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidVolume2(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskPrice2(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskVolume2(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidPrice3(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidVolume3(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskPrice3(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskVolume3(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidPrice4(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidVolume4(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskPrice4(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskVolume4(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidPrice5(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BidVolume5(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskPrice5(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AskVolume5(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_AveragePrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_ActionDay(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_InstrumentID(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_ExchangeInstID(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BandingUpperPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcDepthMarketDataField_set_BandingLowerPrice(PyCThostFtdcDepthMarketDataField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcDepthMarketDataField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcDepthMarketDataField_get_TradingDay, (setter)PyCThostFtdcDepthMarketDataField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcDepthMarketDataField_get_reserve1, (setter)PyCThostFtdcDepthMarketDataField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcDepthMarketDataField_get_ExchangeID, (setter)PyCThostFtdcDepthMarketDataField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcDepthMarketDataField_get_reserve2, (setter)PyCThostFtdcDepthMarketDataField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"LastPrice", (getter)PyCThostFtdcDepthMarketDataField_get_LastPrice, (setter)PyCThostFtdcDepthMarketDataField_set_LastPrice, (char *)"LastPrice", NULL},
	 {(char *)"PreSettlementPrice", (getter)PyCThostFtdcDepthMarketDataField_get_PreSettlementPrice, (setter)PyCThostFtdcDepthMarketDataField_set_PreSettlementPrice, (char *)"PreSettlementPrice", NULL},
	 {(char *)"PreClosePrice", (getter)PyCThostFtdcDepthMarketDataField_get_PreClosePrice, (setter)PyCThostFtdcDepthMarketDataField_set_PreClosePrice, (char *)"PreClosePrice", NULL},
	 {(char *)"PreOpenInterest", (getter)PyCThostFtdcDepthMarketDataField_get_PreOpenInterest, (setter)PyCThostFtdcDepthMarketDataField_set_PreOpenInterest, (char *)"PreOpenInterest", NULL},
	 {(char *)"OpenPrice", (getter)PyCThostFtdcDepthMarketDataField_get_OpenPrice, (setter)PyCThostFtdcDepthMarketDataField_set_OpenPrice, (char *)"OpenPrice", NULL},
	 {(char *)"HighestPrice", (getter)PyCThostFtdcDepthMarketDataField_get_HighestPrice, (setter)PyCThostFtdcDepthMarketDataField_set_HighestPrice, (char *)"HighestPrice", NULL},
	 {(char *)"LowestPrice", (getter)PyCThostFtdcDepthMarketDataField_get_LowestPrice, (setter)PyCThostFtdcDepthMarketDataField_set_LowestPrice, (char *)"LowestPrice", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcDepthMarketDataField_get_Volume, (setter)PyCThostFtdcDepthMarketDataField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"Turnover", (getter)PyCThostFtdcDepthMarketDataField_get_Turnover, (setter)PyCThostFtdcDepthMarketDataField_set_Turnover, (char *)"Turnover", NULL},
	 {(char *)"OpenInterest", (getter)PyCThostFtdcDepthMarketDataField_get_OpenInterest, (setter)PyCThostFtdcDepthMarketDataField_set_OpenInterest, (char *)"OpenInterest", NULL},
	 {(char *)"ClosePrice", (getter)PyCThostFtdcDepthMarketDataField_get_ClosePrice, (setter)PyCThostFtdcDepthMarketDataField_set_ClosePrice, (char *)"ClosePrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcDepthMarketDataField_get_SettlementPrice, (setter)PyCThostFtdcDepthMarketDataField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"UpperLimitPrice", (getter)PyCThostFtdcDepthMarketDataField_get_UpperLimitPrice, (setter)PyCThostFtdcDepthMarketDataField_set_UpperLimitPrice, (char *)"UpperLimitPrice", NULL},
	 {(char *)"LowerLimitPrice", (getter)PyCThostFtdcDepthMarketDataField_get_LowerLimitPrice, (setter)PyCThostFtdcDepthMarketDataField_set_LowerLimitPrice, (char *)"LowerLimitPrice", NULL},
	 {(char *)"PreDelta", (getter)PyCThostFtdcDepthMarketDataField_get_PreDelta, (setter)PyCThostFtdcDepthMarketDataField_set_PreDelta, (char *)"PreDelta", NULL},
	 {(char *)"CurrDelta", (getter)PyCThostFtdcDepthMarketDataField_get_CurrDelta, (setter)PyCThostFtdcDepthMarketDataField_set_CurrDelta, (char *)"CurrDelta", NULL},
	 {(char *)"UpdateTime", (getter)PyCThostFtdcDepthMarketDataField_get_UpdateTime, (setter)PyCThostFtdcDepthMarketDataField_set_UpdateTime, (char *)"UpdateTime", NULL},
	 {(char *)"UpdateMillisec", (getter)PyCThostFtdcDepthMarketDataField_get_UpdateMillisec, (setter)PyCThostFtdcDepthMarketDataField_set_UpdateMillisec, (char *)"UpdateMillisec", NULL},
	 {(char *)"BidPrice1", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice1, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice1, (char *)"BidPrice1", NULL},
	 {(char *)"BidVolume1", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume1, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume1, (char *)"BidVolume1", NULL},
	 {(char *)"AskPrice1", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice1, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice1, (char *)"AskPrice1", NULL},
	 {(char *)"AskVolume1", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume1, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume1, (char *)"AskVolume1", NULL},
	 {(char *)"BidPrice2", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice2, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice2, (char *)"BidPrice2", NULL},
	 {(char *)"BidVolume2", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume2, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume2, (char *)"BidVolume2", NULL},
	 {(char *)"AskPrice2", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice2, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice2, (char *)"AskPrice2", NULL},
	 {(char *)"AskVolume2", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume2, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume2, (char *)"AskVolume2", NULL},
	 {(char *)"BidPrice3", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice3, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice3, (char *)"BidPrice3", NULL},
	 {(char *)"BidVolume3", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume3, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume3, (char *)"BidVolume3", NULL},
	 {(char *)"AskPrice3", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice3, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice3, (char *)"AskPrice3", NULL},
	 {(char *)"AskVolume3", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume3, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume3, (char *)"AskVolume3", NULL},
	 {(char *)"BidPrice4", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice4, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice4, (char *)"BidPrice4", NULL},
	 {(char *)"BidVolume4", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume4, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume4, (char *)"BidVolume4", NULL},
	 {(char *)"AskPrice4", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice4, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice4, (char *)"AskPrice4", NULL},
	 {(char *)"AskVolume4", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume4, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume4, (char *)"AskVolume4", NULL},
	 {(char *)"BidPrice5", (getter)PyCThostFtdcDepthMarketDataField_get_BidPrice5, (setter)PyCThostFtdcDepthMarketDataField_set_BidPrice5, (char *)"BidPrice5", NULL},
	 {(char *)"BidVolume5", (getter)PyCThostFtdcDepthMarketDataField_get_BidVolume5, (setter)PyCThostFtdcDepthMarketDataField_set_BidVolume5, (char *)"BidVolume5", NULL},
	 {(char *)"AskPrice5", (getter)PyCThostFtdcDepthMarketDataField_get_AskPrice5, (setter)PyCThostFtdcDepthMarketDataField_set_AskPrice5, (char *)"AskPrice5", NULL},
	 {(char *)"AskVolume5", (getter)PyCThostFtdcDepthMarketDataField_get_AskVolume5, (setter)PyCThostFtdcDepthMarketDataField_set_AskVolume5, (char *)"AskVolume5", NULL},
	 {(char *)"AveragePrice", (getter)PyCThostFtdcDepthMarketDataField_get_AveragePrice, (setter)PyCThostFtdcDepthMarketDataField_set_AveragePrice, (char *)"AveragePrice", NULL},
	 {(char *)"ActionDay", (getter)PyCThostFtdcDepthMarketDataField_get_ActionDay, (setter)PyCThostFtdcDepthMarketDataField_set_ActionDay, (char *)"ActionDay", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcDepthMarketDataField_get_InstrumentID, (setter)PyCThostFtdcDepthMarketDataField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcDepthMarketDataField_get_ExchangeInstID, (setter)PyCThostFtdcDepthMarketDataField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"BandingUpperPrice", (getter)PyCThostFtdcDepthMarketDataField_get_BandingUpperPrice, (setter)PyCThostFtdcDepthMarketDataField_set_BandingUpperPrice, (char *)"BandingUpperPrice", NULL},
	 {(char *)"BandingLowerPrice", (getter)PyCThostFtdcDepthMarketDataField_get_BandingLowerPrice, (setter)PyCThostFtdcDepthMarketDataField_set_BandingLowerPrice, (char *)"BandingLowerPrice", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcDepthMarketDataFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcDepthMarketDataField",	/* tp_name */
	sizeof(PyCThostFtdcDepthMarketDataField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcDepthMarketDataField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcDepthMarketDataField_repr,   /* tp_repr */
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
	"CThostFtdcDepthMarketDataField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcDepthMarketDataField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcDepthMarketDataField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcDepthMarketDataField_new,       /* tp_new */
};

int PyCThostFtdcDepthMarketDataFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcDepthMarketDataField  */
	if (PyType_Ready(&PyCThostFtdcDepthMarketDataFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcDepthMarketDataField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcDepthMarketDataFieldType);
    if( PyModule_AddObject(module, "CThostFtdcDepthMarketDataField", (PyObject *)&PyCThostFtdcDepthMarketDataFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcDepthMarketDataField to module");
        Py_DECREF(&PyCThostFtdcDepthMarketDataFieldType);
		return -1;
    }

    return 0;
}
