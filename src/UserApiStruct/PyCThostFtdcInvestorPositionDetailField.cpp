
#include "PyCThostFtdcInvestorPositionDetailField.h"



static PyObject *PyCThostFtdcInvestorPositionDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPositionDetailField *self = (PyCThostFtdcInvestorPositionDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPositionDetailField_init(PyCThostFtdcInvestorPositionDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "HedgeFlag", "Direction", "OpenDate", "TradeID", "Volume", "OpenPrice", "TradingDay", "SettlementID", "TradeType", "reserve2", "ExchangeID", "CloseProfitByDate", "CloseProfitByTrade", "PositionProfitByDate", "PositionProfitByTrade", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LastSettlementPrice", "SettlementPrice", "CloseVolume", "CloseAmount", "TimeFirstVolume", "InvestUnitID", "SpecPosiType", "InstrumentID", "CombInstrumentID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInvestorPositionDetailField_reserve1 = NULL;
	Py_ssize_t pInvestorPositionDetailField_reserve1_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorPositionDetailField_BrokerID = NULL;
	Py_ssize_t pInvestorPositionDetailField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorPositionDetailField_InvestorID = NULL;
	Py_ssize_t pInvestorPositionDetailField_InvestorID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInvestorPositionDetailField_HedgeFlag = 0;

	//TThostFtdcDirectionType char
	char pInvestorPositionDetailField_Direction = 0;

	//TThostFtdcDateType char[9]
	const char *pInvestorPositionDetailField_OpenDate = NULL;
	Py_ssize_t pInvestorPositionDetailField_OpenDate_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pInvestorPositionDetailField_TradeID = NULL;
	Py_ssize_t pInvestorPositionDetailField_TradeID_len = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionDetailField_Volume = 0;

	//TThostFtdcPriceType double
	double pInvestorPositionDetailField_OpenPrice = 0.0;

	//TThostFtdcDateType char[9]
	const char *pInvestorPositionDetailField_TradingDay = NULL;
	Py_ssize_t pInvestorPositionDetailField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pInvestorPositionDetailField_SettlementID = 0;

	//TThostFtdcTradeTypeType char
	char pInvestorPositionDetailField_TradeType = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInvestorPositionDetailField_reserve2 = NULL;
	Py_ssize_t pInvestorPositionDetailField_reserve2_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorPositionDetailField_ExchangeID = NULL;
	Py_ssize_t pInvestorPositionDetailField_ExchangeID_len = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionDetailField_CloseProfitByDate = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionDetailField_CloseProfitByTrade = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionDetailField_PositionProfitByDate = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionDetailField_PositionProfitByTrade = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionDetailField_Margin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionDetailField_ExchMargin = 0.0;

	//TThostFtdcRatioType double
	double pInvestorPositionDetailField_MarginRateByMoney = 0.0;

	//TThostFtdcRatioType double
	double pInvestorPositionDetailField_MarginRateByVolume = 0.0;

	//TThostFtdcPriceType double
	double pInvestorPositionDetailField_LastSettlementPrice = 0.0;

	//TThostFtdcPriceType double
	double pInvestorPositionDetailField_SettlementPrice = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionDetailField_CloseVolume = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionDetailField_CloseAmount = 0.0;

	//TThostFtdcVolumeType int
	int pInvestorPositionDetailField_TimeFirstVolume = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInvestorPositionDetailField_InvestUnitID = NULL;
	Py_ssize_t pInvestorPositionDetailField_InvestUnitID_len = 0;

	//TThostFtdcSpecPosiTypeType char
	char pInvestorPositionDetailField_SpecPosiType = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorPositionDetailField_InstrumentID = NULL;
	Py_ssize_t pInvestorPositionDetailField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorPositionDetailField_CombInstrumentID = NULL;
	Py_ssize_t pInvestorPositionDetailField_CombInstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ccy#y#idy#icy#y#ddddddddddidiy#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ccs#s#ids#ics#s#ddddddddddidis#cs#s#", (char **)kwlist
#endif

		, &pInvestorPositionDetailField_reserve1, &pInvestorPositionDetailField_reserve1_len
		, &pInvestorPositionDetailField_BrokerID, &pInvestorPositionDetailField_BrokerID_len
		, &pInvestorPositionDetailField_InvestorID, &pInvestorPositionDetailField_InvestorID_len
		, &pInvestorPositionDetailField_HedgeFlag
		, &pInvestorPositionDetailField_Direction
		, &pInvestorPositionDetailField_OpenDate, &pInvestorPositionDetailField_OpenDate_len
		, &pInvestorPositionDetailField_TradeID, &pInvestorPositionDetailField_TradeID_len
		, &pInvestorPositionDetailField_Volume
		, &pInvestorPositionDetailField_OpenPrice
		, &pInvestorPositionDetailField_TradingDay, &pInvestorPositionDetailField_TradingDay_len
		, &pInvestorPositionDetailField_SettlementID
		, &pInvestorPositionDetailField_TradeType
		, &pInvestorPositionDetailField_reserve2, &pInvestorPositionDetailField_reserve2_len
		, &pInvestorPositionDetailField_ExchangeID, &pInvestorPositionDetailField_ExchangeID_len
		, &pInvestorPositionDetailField_CloseProfitByDate
		, &pInvestorPositionDetailField_CloseProfitByTrade
		, &pInvestorPositionDetailField_PositionProfitByDate
		, &pInvestorPositionDetailField_PositionProfitByTrade
		, &pInvestorPositionDetailField_Margin
		, &pInvestorPositionDetailField_ExchMargin
		, &pInvestorPositionDetailField_MarginRateByMoney
		, &pInvestorPositionDetailField_MarginRateByVolume
		, &pInvestorPositionDetailField_LastSettlementPrice
		, &pInvestorPositionDetailField_SettlementPrice
		, &pInvestorPositionDetailField_CloseVolume
		, &pInvestorPositionDetailField_CloseAmount
		, &pInvestorPositionDetailField_TimeFirstVolume
		, &pInvestorPositionDetailField_InvestUnitID, &pInvestorPositionDetailField_InvestUnitID_len
		, &pInvestorPositionDetailField_SpecPosiType
		, &pInvestorPositionDetailField_InstrumentID, &pInvestorPositionDetailField_InstrumentID_len
		, &pInvestorPositionDetailField_CombInstrumentID, &pInvestorPositionDetailField_CombInstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInvestorPositionDetailField_reserve1 != NULL) {
		if(pInvestorPositionDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInvestorPositionDetailField_reserve1, sizeof(self->data.reserve1) );
		pInvestorPositionDetailField_reserve1 = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorPositionDetailField_BrokerID != NULL) {
		if(pInvestorPositionDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorPositionDetailField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorPositionDetailField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorPositionDetailField_InvestorID != NULL) {
		if(pInvestorPositionDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorPositionDetailField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorPositionDetailField_InvestorID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInvestorPositionDetailField_HedgeFlag;

	//TThostFtdcDirectionType char
	self->data.Direction = pInvestorPositionDetailField_Direction;

	//TThostFtdcDateType char[9]
	if(pInvestorPositionDetailField_OpenDate != NULL) {
		if(pInvestorPositionDetailField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pInvestorPositionDetailField_OpenDate, sizeof(self->data.OpenDate) );
		pInvestorPositionDetailField_OpenDate = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pInvestorPositionDetailField_TradeID != NULL) {
		if(pInvestorPositionDetailField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
			PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
			return -1;
		}
		strncpy(self->data.TradeID, pInvestorPositionDetailField_TradeID, sizeof(self->data.TradeID) );
		pInvestorPositionDetailField_TradeID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pInvestorPositionDetailField_Volume;

	//TThostFtdcPriceType double
	self->data.OpenPrice = pInvestorPositionDetailField_OpenPrice;
	//TThostFtdcDateType char[9]
	if(pInvestorPositionDetailField_TradingDay != NULL) {
		if(pInvestorPositionDetailField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pInvestorPositionDetailField_TradingDay, sizeof(self->data.TradingDay) );
		pInvestorPositionDetailField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pInvestorPositionDetailField_SettlementID;

	//TThostFtdcTradeTypeType char
	self->data.TradeType = pInvestorPositionDetailField_TradeType;

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInvestorPositionDetailField_reserve2 != NULL) {
		if(pInvestorPositionDetailField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInvestorPositionDetailField_reserve2, sizeof(self->data.reserve2) );
		pInvestorPositionDetailField_reserve2 = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorPositionDetailField_ExchangeID != NULL) {
		if(pInvestorPositionDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorPositionDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorPositionDetailField_ExchangeID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.CloseProfitByDate = pInvestorPositionDetailField_CloseProfitByDate;
	//TThostFtdcMoneyType double
	self->data.CloseProfitByTrade = pInvestorPositionDetailField_CloseProfitByTrade;
	//TThostFtdcMoneyType double
	self->data.PositionProfitByDate = pInvestorPositionDetailField_PositionProfitByDate;
	//TThostFtdcMoneyType double
	self->data.PositionProfitByTrade = pInvestorPositionDetailField_PositionProfitByTrade;
	//TThostFtdcMoneyType double
	self->data.Margin = pInvestorPositionDetailField_Margin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pInvestorPositionDetailField_ExchMargin;
	//TThostFtdcRatioType double
	self->data.MarginRateByMoney = pInvestorPositionDetailField_MarginRateByMoney;
	//TThostFtdcRatioType double
	self->data.MarginRateByVolume = pInvestorPositionDetailField_MarginRateByVolume;
	//TThostFtdcPriceType double
	self->data.LastSettlementPrice = pInvestorPositionDetailField_LastSettlementPrice;
	//TThostFtdcPriceType double
	self->data.SettlementPrice = pInvestorPositionDetailField_SettlementPrice;
	//TThostFtdcVolumeType int
	self->data.CloseVolume = pInvestorPositionDetailField_CloseVolume;

	//TThostFtdcMoneyType double
	self->data.CloseAmount = pInvestorPositionDetailField_CloseAmount;
	//TThostFtdcVolumeType int
	self->data.TimeFirstVolume = pInvestorPositionDetailField_TimeFirstVolume;

	//TThostFtdcInvestUnitIDType char[17]
	if(pInvestorPositionDetailField_InvestUnitID != NULL) {
		if(pInvestorPositionDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInvestorPositionDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInvestorPositionDetailField_InvestUnitID = NULL;
	}

	//TThostFtdcSpecPosiTypeType char
	self->data.SpecPosiType = pInvestorPositionDetailField_SpecPosiType;

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorPositionDetailField_InstrumentID != NULL) {
		if(pInvestorPositionDetailField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInvestorPositionDetailField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInvestorPositionDetailField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorPositionDetailField_CombInstrumentID != NULL) {
		if(pInvestorPositionDetailField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pInvestorPositionDetailField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pInvestorPositionDetailField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pInvestorPositionDetailField_CombInstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestorPositionDetailField_dealloc(PyCThostFtdcInvestorPositionDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_repr(PyCThostFtdcInvestorPositionDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:y,s:y,s:i,s:d,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:s,s:s,s:i,s:d,s:s,s:i,s:c,s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i,s:d,s:i,s:s,s:c,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
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
		, "reserve2", self->data.reserve2 
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
		, "InvestUnitID", self->data.InvestUnitID 
		, "SpecPosiType", self->data.SpecPosiType
		, "InstrumentID", self->data.InstrumentID 
		, "CombInstrumentID", self->data.CombInstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_reserve1(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_BrokerID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_InvestorID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_HedgeFlag(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_Direction(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_OpenDate(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TradeID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeID);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_Volume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_OpenPrice(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OpenPrice);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TradingDay(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_SettlementID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TradeType(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TradeType), 1);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_reserve2(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_ExchangeID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByDate(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByDate);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByTrade(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfitByTrade);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByDate(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfitByDate);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByTrade(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfitByTrade);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_Margin(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_ExchMargin(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_MarginRateByMoney(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_MarginRateByVolume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_LastSettlementPrice(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LastSettlementPrice);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_SettlementPrice(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SettlementPrice);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseVolume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.CloseVolume);
#else 
	return PyInt_FromLong(self->data.CloseVolume);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CloseAmount(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseAmount);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_TimeFirstVolume(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TimeFirstVolume);
#else 
	return PyInt_FromLong(self->data.TimeFirstVolume);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_InvestUnitID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_SpecPosiType(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SpecPosiType), 1);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_InstrumentID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInvestorPositionDetailField_get_CombInstrumentID(PyCThostFtdcInvestorPositionDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static int PyCThostFtdcInvestorPositionDetailField_set_reserve1(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_BrokerID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_InvestorID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_HedgeFlag(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_Direction(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_OpenDate(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_TradeID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_Volume(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_OpenPrice(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_TradingDay(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_SettlementID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_TradeType(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_reserve2(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_ExchangeID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByDate(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByTrade(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByDate(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByTrade(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_Margin(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_ExchMargin(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_MarginRateByMoney(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_MarginRateByVolume(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_LastSettlementPrice(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_SettlementPrice(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_CloseVolume(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_CloseAmount(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_TimeFirstVolume(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_InvestUnitID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_SpecPosiType(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_InstrumentID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionDetailField_set_CombInstrumentID(PyCThostFtdcInvestorPositionDetailField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorPositionDetailField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInvestorPositionDetailField_get_reserve1, (setter)PyCThostFtdcInvestorPositionDetailField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPositionDetailField_get_BrokerID, (setter)PyCThostFtdcInvestorPositionDetailField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPositionDetailField_get_InvestorID, (setter)PyCThostFtdcInvestorPositionDetailField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPositionDetailField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPositionDetailField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcInvestorPositionDetailField_get_Direction, (setter)PyCThostFtdcInvestorPositionDetailField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcInvestorPositionDetailField_get_OpenDate, (setter)PyCThostFtdcInvestorPositionDetailField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"TradeID", (getter)PyCThostFtdcInvestorPositionDetailField_get_TradeID, (setter)PyCThostFtdcInvestorPositionDetailField_set_TradeID, (char *)"TradeID", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcInvestorPositionDetailField_get_Volume, (setter)PyCThostFtdcInvestorPositionDetailField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"OpenPrice", (getter)PyCThostFtdcInvestorPositionDetailField_get_OpenPrice, (setter)PyCThostFtdcInvestorPositionDetailField_set_OpenPrice, (char *)"OpenPrice", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcInvestorPositionDetailField_get_TradingDay, (setter)PyCThostFtdcInvestorPositionDetailField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcInvestorPositionDetailField_get_SettlementID, (setter)PyCThostFtdcInvestorPositionDetailField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"TradeType", (getter)PyCThostFtdcInvestorPositionDetailField_get_TradeType, (setter)PyCThostFtdcInvestorPositionDetailField_set_TradeType, (char *)"TradeType", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInvestorPositionDetailField_get_reserve2, (setter)PyCThostFtdcInvestorPositionDetailField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPositionDetailField_get_ExchangeID, (setter)PyCThostFtdcInvestorPositionDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"CloseProfitByDate", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByDate, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByDate, (char *)"CloseProfitByDate", NULL},
	 {(char *)"CloseProfitByTrade", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseProfitByTrade, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseProfitByTrade, (char *)"CloseProfitByTrade", NULL},
	 {(char *)"PositionProfitByDate", (getter)PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByDate, (setter)PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByDate, (char *)"PositionProfitByDate", NULL},
	 {(char *)"PositionProfitByTrade", (getter)PyCThostFtdcInvestorPositionDetailField_get_PositionProfitByTrade, (setter)PyCThostFtdcInvestorPositionDetailField_set_PositionProfitByTrade, (char *)"PositionProfitByTrade", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcInvestorPositionDetailField_get_Margin, (setter)PyCThostFtdcInvestorPositionDetailField_set_Margin, (char *)"Margin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorPositionDetailField_get_ExchMargin, (setter)PyCThostFtdcInvestorPositionDetailField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"MarginRateByMoney", (getter)PyCThostFtdcInvestorPositionDetailField_get_MarginRateByMoney, (setter)PyCThostFtdcInvestorPositionDetailField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
	 {(char *)"MarginRateByVolume", (getter)PyCThostFtdcInvestorPositionDetailField_get_MarginRateByVolume, (setter)PyCThostFtdcInvestorPositionDetailField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
	 {(char *)"LastSettlementPrice", (getter)PyCThostFtdcInvestorPositionDetailField_get_LastSettlementPrice, (setter)PyCThostFtdcInvestorPositionDetailField_set_LastSettlementPrice, (char *)"LastSettlementPrice", NULL},
	 {(char *)"SettlementPrice", (getter)PyCThostFtdcInvestorPositionDetailField_get_SettlementPrice, (setter)PyCThostFtdcInvestorPositionDetailField_set_SettlementPrice, (char *)"SettlementPrice", NULL},
	 {(char *)"CloseVolume", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseVolume, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseVolume, (char *)"CloseVolume", NULL},
	 {(char *)"CloseAmount", (getter)PyCThostFtdcInvestorPositionDetailField_get_CloseAmount, (setter)PyCThostFtdcInvestorPositionDetailField_set_CloseAmount, (char *)"CloseAmount", NULL},
	 {(char *)"TimeFirstVolume", (getter)PyCThostFtdcInvestorPositionDetailField_get_TimeFirstVolume, (setter)PyCThostFtdcInvestorPositionDetailField_set_TimeFirstVolume, (char *)"TimeFirstVolume", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorPositionDetailField_get_InvestUnitID, (setter)PyCThostFtdcInvestorPositionDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"SpecPosiType", (getter)PyCThostFtdcInvestorPositionDetailField_get_SpecPosiType, (setter)PyCThostFtdcInvestorPositionDetailField_set_SpecPosiType, (char *)"SpecPosiType", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorPositionDetailField_get_InstrumentID, (setter)PyCThostFtdcInvestorPositionDetailField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcInvestorPositionDetailField_get_CombInstrumentID, (setter)PyCThostFtdcInvestorPositionDetailField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPositionDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPositionDetailField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPositionDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPositionDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPositionDetailField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPositionDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPositionDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPositionDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPositionDetailField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPositionDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPositionDetailField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPositionDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPositionDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPositionDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionDetailField", (PyObject *)&PyCThostFtdcInvestorPositionDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionDetailField to module");
        Py_DECREF(&PyCThostFtdcInvestorPositionDetailFieldType);
		return -1;
    }

    return 0;
}
