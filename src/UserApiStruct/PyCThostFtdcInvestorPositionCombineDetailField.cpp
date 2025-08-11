
#include "PyCThostFtdcInvestorPositionCombineDetailField.h"



static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorPositionCombineDetailField *self = (PyCThostFtdcInvestorPositionCombineDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorPositionCombineDetailField_init(PyCThostFtdcInvestorPositionCombineDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "OpenDate", "ExchangeID", "SettlementID", "BrokerID", "InvestorID", "ComTradeID", "TradeID", "reserve1", "HedgeFlag", "Direction", "TotalAmt", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LegID", "LegMultiple", "reserve2", "TradeGroupID", "InvestUnitID", "InstrumentID", "CombInstrumentID",  NULL};

	//TThostFtdcDateType char[9]
	const char *pInvestorPositionCombineDetailField_TradingDay = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_TradingDay_len = 0;

	//TThostFtdcDateType char[9]
	const char *pInvestorPositionCombineDetailField_OpenDate = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_OpenDate_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorPositionCombineDetailField_ExchangeID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_ExchangeID_len = 0;

	//TThostFtdcSettlementIDType int
	int pInvestorPositionCombineDetailField_SettlementID = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorPositionCombineDetailField_BrokerID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorPositionCombineDetailField_InvestorID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_InvestorID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pInvestorPositionCombineDetailField_ComTradeID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_ComTradeID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pInvestorPositionCombineDetailField_TradeID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_TradeID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInvestorPositionCombineDetailField_reserve1 = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_reserve1_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInvestorPositionCombineDetailField_HedgeFlag = 0;

	//TThostFtdcDirectionType char
	char pInvestorPositionCombineDetailField_Direction = 0;

	//TThostFtdcVolumeType int
	int pInvestorPositionCombineDetailField_TotalAmt = 0;

	//TThostFtdcMoneyType double
	double pInvestorPositionCombineDetailField_Margin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorPositionCombineDetailField_ExchMargin = 0.0;

	//TThostFtdcRatioType double
	double pInvestorPositionCombineDetailField_MarginRateByMoney = 0.0;

	//TThostFtdcRatioType double
	double pInvestorPositionCombineDetailField_MarginRateByVolume = 0.0;

	//TThostFtdcLegIDType int
	int pInvestorPositionCombineDetailField_LegID = 0;

	//TThostFtdcLegMultipleType int
	int pInvestorPositionCombineDetailField_LegMultiple = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInvestorPositionCombineDetailField_reserve2 = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_reserve2_len = 0;

	//TThostFtdcTradeGroupIDType int
	int pInvestorPositionCombineDetailField_TradeGroupID = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInvestorPositionCombineDetailField_InvestUnitID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorPositionCombineDetailField_InstrumentID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorPositionCombineDetailField_CombInstrumentID = NULL;
	Py_ssize_t pInvestorPositionCombineDetailField_CombInstrumentID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#y#y#y#cciddddiiy#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#s#s#s#s#cciddddiis#is#s#s#", (char **)kwlist
#endif

		, &pInvestorPositionCombineDetailField_TradingDay, &pInvestorPositionCombineDetailField_TradingDay_len
		, &pInvestorPositionCombineDetailField_OpenDate, &pInvestorPositionCombineDetailField_OpenDate_len
		, &pInvestorPositionCombineDetailField_ExchangeID, &pInvestorPositionCombineDetailField_ExchangeID_len
		, &pInvestorPositionCombineDetailField_SettlementID
		, &pInvestorPositionCombineDetailField_BrokerID, &pInvestorPositionCombineDetailField_BrokerID_len
		, &pInvestorPositionCombineDetailField_InvestorID, &pInvestorPositionCombineDetailField_InvestorID_len
		, &pInvestorPositionCombineDetailField_ComTradeID, &pInvestorPositionCombineDetailField_ComTradeID_len
		, &pInvestorPositionCombineDetailField_TradeID, &pInvestorPositionCombineDetailField_TradeID_len
		, &pInvestorPositionCombineDetailField_reserve1, &pInvestorPositionCombineDetailField_reserve1_len
		, &pInvestorPositionCombineDetailField_HedgeFlag
		, &pInvestorPositionCombineDetailField_Direction
		, &pInvestorPositionCombineDetailField_TotalAmt
		, &pInvestorPositionCombineDetailField_Margin
		, &pInvestorPositionCombineDetailField_ExchMargin
		, &pInvestorPositionCombineDetailField_MarginRateByMoney
		, &pInvestorPositionCombineDetailField_MarginRateByVolume
		, &pInvestorPositionCombineDetailField_LegID
		, &pInvestorPositionCombineDetailField_LegMultiple
		, &pInvestorPositionCombineDetailField_reserve2, &pInvestorPositionCombineDetailField_reserve2_len
		, &pInvestorPositionCombineDetailField_TradeGroupID
		, &pInvestorPositionCombineDetailField_InvestUnitID, &pInvestorPositionCombineDetailField_InvestUnitID_len
		, &pInvestorPositionCombineDetailField_InstrumentID, &pInvestorPositionCombineDetailField_InstrumentID_len
		, &pInvestorPositionCombineDetailField_CombInstrumentID, &pInvestorPositionCombineDetailField_CombInstrumentID_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pInvestorPositionCombineDetailField_TradingDay != NULL) {
		if(pInvestorPositionCombineDetailField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pInvestorPositionCombineDetailField_TradingDay, sizeof(self->data.TradingDay) );
		pInvestorPositionCombineDetailField_TradingDay = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pInvestorPositionCombineDetailField_OpenDate != NULL) {
		if(pInvestorPositionCombineDetailField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pInvestorPositionCombineDetailField_OpenDate, sizeof(self->data.OpenDate) );
		pInvestorPositionCombineDetailField_OpenDate = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorPositionCombineDetailField_ExchangeID != NULL) {
		if(pInvestorPositionCombineDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorPositionCombineDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorPositionCombineDetailField_ExchangeID = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pInvestorPositionCombineDetailField_SettlementID;

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorPositionCombineDetailField_BrokerID != NULL) {
		if(pInvestorPositionCombineDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorPositionCombineDetailField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorPositionCombineDetailField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorPositionCombineDetailField_InvestorID != NULL) {
		if(pInvestorPositionCombineDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorPositionCombineDetailField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorPositionCombineDetailField_InvestorID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pInvestorPositionCombineDetailField_ComTradeID != NULL) {
		if(pInvestorPositionCombineDetailField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
			PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
			return -1;
		}
		strncpy(self->data.ComTradeID, pInvestorPositionCombineDetailField_ComTradeID, sizeof(self->data.ComTradeID) );
		pInvestorPositionCombineDetailField_ComTradeID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pInvestorPositionCombineDetailField_TradeID != NULL) {
		if(pInvestorPositionCombineDetailField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
			PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
			return -1;
		}
		strncpy(self->data.TradeID, pInvestorPositionCombineDetailField_TradeID, sizeof(self->data.TradeID) );
		pInvestorPositionCombineDetailField_TradeID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInvestorPositionCombineDetailField_reserve1 != NULL) {
		if(pInvestorPositionCombineDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInvestorPositionCombineDetailField_reserve1, sizeof(self->data.reserve1) );
		pInvestorPositionCombineDetailField_reserve1 = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInvestorPositionCombineDetailField_HedgeFlag;

	//TThostFtdcDirectionType char
	self->data.Direction = pInvestorPositionCombineDetailField_Direction;

	//TThostFtdcVolumeType int
	self->data.TotalAmt = pInvestorPositionCombineDetailField_TotalAmt;

	//TThostFtdcMoneyType double
	self->data.Margin = pInvestorPositionCombineDetailField_Margin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pInvestorPositionCombineDetailField_ExchMargin;
	//TThostFtdcRatioType double
	self->data.MarginRateByMoney = pInvestorPositionCombineDetailField_MarginRateByMoney;
	//TThostFtdcRatioType double
	self->data.MarginRateByVolume = pInvestorPositionCombineDetailField_MarginRateByVolume;
	//TThostFtdcLegIDType int
	self->data.LegID = pInvestorPositionCombineDetailField_LegID;

	//TThostFtdcLegMultipleType int
	self->data.LegMultiple = pInvestorPositionCombineDetailField_LegMultiple;

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInvestorPositionCombineDetailField_reserve2 != NULL) {
		if(pInvestorPositionCombineDetailField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInvestorPositionCombineDetailField_reserve2, sizeof(self->data.reserve2) );
		pInvestorPositionCombineDetailField_reserve2 = NULL;
	}

	//TThostFtdcTradeGroupIDType int
	self->data.TradeGroupID = pInvestorPositionCombineDetailField_TradeGroupID;

	//TThostFtdcInvestUnitIDType char[17]
	if(pInvestorPositionCombineDetailField_InvestUnitID != NULL) {
		if(pInvestorPositionCombineDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInvestorPositionCombineDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInvestorPositionCombineDetailField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorPositionCombineDetailField_InstrumentID != NULL) {
		if(pInvestorPositionCombineDetailField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInvestorPositionCombineDetailField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInvestorPositionCombineDetailField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorPositionCombineDetailField_CombInstrumentID != NULL) {
		if(pInvestorPositionCombineDetailField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
			PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", pInvestorPositionCombineDetailField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
			return -1;
		}
		strncpy(self->data.CombInstrumentID, pInvestorPositionCombineDetailField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
		pInvestorPositionCombineDetailField_CombInstrumentID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestorPositionCombineDetailField_dealloc(PyCThostFtdcInvestorPositionCombineDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_repr(PyCThostFtdcInvestorPositionCombineDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:s,s:i,s:s,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "OpenDate", self->data.OpenDate 
		, "ExchangeID", self->data.ExchangeID 
		, "SettlementID", self->data.SettlementID
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ComTradeID", self->data.ComTradeID 
		, "TradeID", self->data.TradeID 
		, "reserve1", self->data.reserve1 
		, "HedgeFlag", self->data.HedgeFlag
		, "Direction", self->data.Direction
		, "TotalAmt", self->data.TotalAmt
		, "Margin", self->data.Margin
		, "ExchMargin", self->data.ExchMargin
		, "MarginRateByMoney", self->data.MarginRateByMoney
		, "MarginRateByVolume", self->data.MarginRateByVolume
		, "LegID", self->data.LegID
		, "LegMultiple", self->data.LegMultiple
		, "reserve2", self->data.reserve2 
		, "TradeGroupID", self->data.TradeGroupID
		, "InvestUnitID", self->data.InvestUnitID 
		, "InstrumentID", self->data.InstrumentID 
		, "CombInstrumentID", self->data.CombInstrumentID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorPositionCombineDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TradingDay(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_OpenDate(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_ExchangeID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_SettlementID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_BrokerID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_InvestorID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_ComTradeID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.ComTradeID);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TradeID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeID);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_reserve1(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_HedgeFlag(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_Direction(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TotalAmt(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TotalAmt);
#else 
	return PyInt_FromLong(self->data.TotalAmt);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_Margin(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_ExchMargin(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByMoney(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByVolume(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_LegID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegID);
#else 
	return PyInt_FromLong(self->data.LegID);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_LegMultiple(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegMultiple);
#else 
	return PyInt_FromLong(self->data.LegMultiple);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_reserve2(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_TradeGroupID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TradeGroupID);
#else 
	return PyInt_FromLong(self->data.TradeGroupID);
#endif 
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_InvestUnitID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_InstrumentID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInvestorPositionCombineDetailField_get_CombInstrumentID(PyCThostFtdcInvestorPositionCombineDetailField *self, void *closure) {
	return PyBytes_FromString(self->data.CombInstrumentID);
}

static int PyCThostFtdcInvestorPositionCombineDetailField_set_TradingDay(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_OpenDate(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_ExchangeID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_SettlementID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_BrokerID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_InvestorID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_ComTradeID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
		PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ComTradeID, buf, sizeof(self->data.ComTradeID));
	return 0;
}

static int PyCThostFtdcInvestorPositionCombineDetailField_set_TradeID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_reserve1(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_HedgeFlag(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_Direction(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_TotalAmt(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TotalAmt Expected int"); 
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
    self->data.TotalAmt = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorPositionCombineDetailField_set_Margin(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_ExchMargin(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByMoney(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByVolume(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_LegID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LegID Expected int"); 
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
    self->data.LegID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorPositionCombineDetailField_set_LegMultiple(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LegMultiple Expected int"); 
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
    self->data.LegMultiple = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorPositionCombineDetailField_set_reserve2(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_TradeGroupID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TradeGroupID Expected int"); 
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
    self->data.TradeGroupID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInvestorPositionCombineDetailField_set_InvestUnitID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_InstrumentID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorPositionCombineDetailField_set_CombInstrumentID(PyCThostFtdcInvestorPositionCombineDetailField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorPositionCombineDetailField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TradingDay, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_OpenDate, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_ExchangeID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_SettlementID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_BrokerID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_InvestorID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ComTradeID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_ComTradeID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_ComTradeID, (char *)"ComTradeID", NULL},
	 {(char *)"TradeID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TradeID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TradeID, (char *)"TradeID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_reserve1, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_HedgeFlag, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_Direction, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"TotalAmt", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TotalAmt, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TotalAmt, (char *)"TotalAmt", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_Margin, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_Margin, (char *)"Margin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_ExchMargin, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"MarginRateByMoney", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByMoney, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
	 {(char *)"MarginRateByVolume", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_MarginRateByVolume, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
	 {(char *)"LegID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_LegID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_LegID, (char *)"LegID", NULL},
	 {(char *)"LegMultiple", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_LegMultiple, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_LegMultiple, (char *)"LegMultiple", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_reserve2, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"TradeGroupID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_TradeGroupID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_TradeGroupID, (char *)"TradeGroupID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_InvestUnitID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_InstrumentID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"CombInstrumentID", (getter)PyCThostFtdcInvestorPositionCombineDetailField_get_CombInstrumentID, (setter)PyCThostFtdcInvestorPositionCombineDetailField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorPositionCombineDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorPositionCombineDetailField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorPositionCombineDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorPositionCombineDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorPositionCombineDetailField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorPositionCombineDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorPositionCombineDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorPositionCombineDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorPositionCombineDetailField_new,       /* tp_new */
};

int PyCThostFtdcInvestorPositionCombineDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorPositionCombineDetailField  */
	if (PyType_Ready(&PyCThostFtdcInvestorPositionCombineDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorPositionCombineDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorPositionCombineDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorPositionCombineDetailField", (PyObject *)&PyCThostFtdcInvestorPositionCombineDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorPositionCombineDetailField to module");
        Py_DECREF(&PyCThostFtdcInvestorPositionCombineDetailFieldType);
		return -1;
    }

    return 0;
}
