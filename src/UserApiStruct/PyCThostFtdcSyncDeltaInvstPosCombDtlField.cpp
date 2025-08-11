
#include "PyCThostFtdcSyncDeltaInvstPosCombDtlField.h"



static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaInvstPosCombDtlField *self = (PyCThostFtdcSyncDeltaInvstPosCombDtlField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_init(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "OpenDate", "ExchangeID", "SettlementID", "BrokerID", "InvestorID", "ComTradeID", "TradeID", "InstrumentID", "HedgeFlag", "Direction", "TotalAmt", "Margin", "ExchMargin", "MarginRateByMoney", "MarginRateByVolume", "LegID", "LegMultiple", "TradeGroupID", "ActionDirection", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaInvstPosCombDtlField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_TradingDay_len = 0;

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaInvstPosCombDtlField_OpenDate = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_OpenDate_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pSyncDeltaInvstPosCombDtlField_ExchangeID = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_ExchangeID_len = 0;

	//TThostFtdcSettlementIDType int
	int pSyncDeltaInvstPosCombDtlField_SettlementID = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaInvstPosCombDtlField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncDeltaInvstPosCombDtlField_InvestorID = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_InvestorID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pSyncDeltaInvstPosCombDtlField_ComTradeID = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_ComTradeID_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pSyncDeltaInvstPosCombDtlField_TradeID = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_TradeID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pSyncDeltaInvstPosCombDtlField_InstrumentID = NULL;
	Py_ssize_t pSyncDeltaInvstPosCombDtlField_InstrumentID_len = 0;

	//TThostFtdcHedgeFlagType char
	char pSyncDeltaInvstPosCombDtlField_HedgeFlag = 0;

	//TThostFtdcDirectionType char
	char pSyncDeltaInvstPosCombDtlField_Direction = 0;

	//TThostFtdcVolumeType int
	int pSyncDeltaInvstPosCombDtlField_TotalAmt = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosCombDtlField_Margin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaInvstPosCombDtlField_ExchMargin = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstPosCombDtlField_MarginRateByMoney = 0.0;

	//TThostFtdcRatioType double
	double pSyncDeltaInvstPosCombDtlField_MarginRateByVolume = 0.0;

	//TThostFtdcLegIDType int
	int pSyncDeltaInvstPosCombDtlField_LegID = 0;

	//TThostFtdcLegMultipleType int
	int pSyncDeltaInvstPosCombDtlField_LegMultiple = 0;

	//TThostFtdcTradeGroupIDType int
	int pSyncDeltaInvstPosCombDtlField_TradeGroupID = 0;

	//TThostFtdcActionDirectionType char
	char pSyncDeltaInvstPosCombDtlField_ActionDirection = 0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#y#y#y#cciddddiiici", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#s#s#s#s#cciddddiiici", (char **)kwlist
#endif

		, &pSyncDeltaInvstPosCombDtlField_TradingDay, &pSyncDeltaInvstPosCombDtlField_TradingDay_len
		, &pSyncDeltaInvstPosCombDtlField_OpenDate, &pSyncDeltaInvstPosCombDtlField_OpenDate_len
		, &pSyncDeltaInvstPosCombDtlField_ExchangeID, &pSyncDeltaInvstPosCombDtlField_ExchangeID_len
		, &pSyncDeltaInvstPosCombDtlField_SettlementID
		, &pSyncDeltaInvstPosCombDtlField_BrokerID, &pSyncDeltaInvstPosCombDtlField_BrokerID_len
		, &pSyncDeltaInvstPosCombDtlField_InvestorID, &pSyncDeltaInvstPosCombDtlField_InvestorID_len
		, &pSyncDeltaInvstPosCombDtlField_ComTradeID, &pSyncDeltaInvstPosCombDtlField_ComTradeID_len
		, &pSyncDeltaInvstPosCombDtlField_TradeID, &pSyncDeltaInvstPosCombDtlField_TradeID_len
		, &pSyncDeltaInvstPosCombDtlField_InstrumentID, &pSyncDeltaInvstPosCombDtlField_InstrumentID_len
		, &pSyncDeltaInvstPosCombDtlField_HedgeFlag
		, &pSyncDeltaInvstPosCombDtlField_Direction
		, &pSyncDeltaInvstPosCombDtlField_TotalAmt
		, &pSyncDeltaInvstPosCombDtlField_Margin
		, &pSyncDeltaInvstPosCombDtlField_ExchMargin
		, &pSyncDeltaInvstPosCombDtlField_MarginRateByMoney
		, &pSyncDeltaInvstPosCombDtlField_MarginRateByVolume
		, &pSyncDeltaInvstPosCombDtlField_LegID
		, &pSyncDeltaInvstPosCombDtlField_LegMultiple
		, &pSyncDeltaInvstPosCombDtlField_TradeGroupID
		, &pSyncDeltaInvstPosCombDtlField_ActionDirection
		, &pSyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pSyncDeltaInvstPosCombDtlField_TradingDay != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaInvstPosCombDtlField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaInvstPosCombDtlField_TradingDay = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pSyncDeltaInvstPosCombDtlField_OpenDate != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pSyncDeltaInvstPosCombDtlField_OpenDate, sizeof(self->data.OpenDate) );
		pSyncDeltaInvstPosCombDtlField_OpenDate = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pSyncDeltaInvstPosCombDtlField_ExchangeID != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pSyncDeltaInvstPosCombDtlField_ExchangeID, sizeof(self->data.ExchangeID) );
		pSyncDeltaInvstPosCombDtlField_ExchangeID = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pSyncDeltaInvstPosCombDtlField_SettlementID;

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaInvstPosCombDtlField_BrokerID != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaInvstPosCombDtlField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaInvstPosCombDtlField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncDeltaInvstPosCombDtlField_InvestorID != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncDeltaInvstPosCombDtlField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncDeltaInvstPosCombDtlField_InvestorID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pSyncDeltaInvstPosCombDtlField_ComTradeID != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
			PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
			return -1;
		}
		strncpy(self->data.ComTradeID, pSyncDeltaInvstPosCombDtlField_ComTradeID, sizeof(self->data.ComTradeID) );
		pSyncDeltaInvstPosCombDtlField_ComTradeID = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pSyncDeltaInvstPosCombDtlField_TradeID != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_TradeID_len > (Py_ssize_t)sizeof(self->data.TradeID)) {
			PyErr_Format(PyExc_ValueError, "TradeID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_TradeID_len, (Py_ssize_t)sizeof(self->data.TradeID));
			return -1;
		}
		strncpy(self->data.TradeID, pSyncDeltaInvstPosCombDtlField_TradeID, sizeof(self->data.TradeID) );
		pSyncDeltaInvstPosCombDtlField_TradeID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pSyncDeltaInvstPosCombDtlField_InstrumentID != NULL) {
		if(pSyncDeltaInvstPosCombDtlField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pSyncDeltaInvstPosCombDtlField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pSyncDeltaInvstPosCombDtlField_InstrumentID, sizeof(self->data.InstrumentID) );
		pSyncDeltaInvstPosCombDtlField_InstrumentID = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pSyncDeltaInvstPosCombDtlField_HedgeFlag;

	//TThostFtdcDirectionType char
	self->data.Direction = pSyncDeltaInvstPosCombDtlField_Direction;

	//TThostFtdcVolumeType int
	self->data.TotalAmt = pSyncDeltaInvstPosCombDtlField_TotalAmt;

	//TThostFtdcMoneyType double
	self->data.Margin = pSyncDeltaInvstPosCombDtlField_Margin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pSyncDeltaInvstPosCombDtlField_ExchMargin;
	//TThostFtdcRatioType double
	self->data.MarginRateByMoney = pSyncDeltaInvstPosCombDtlField_MarginRateByMoney;
	//TThostFtdcRatioType double
	self->data.MarginRateByVolume = pSyncDeltaInvstPosCombDtlField_MarginRateByVolume;
	//TThostFtdcLegIDType int
	self->data.LegID = pSyncDeltaInvstPosCombDtlField_LegID;

	//TThostFtdcLegMultipleType int
	self->data.LegMultiple = pSyncDeltaInvstPosCombDtlField_LegMultiple;

	//TThostFtdcTradeGroupIDType int
	self->data.TradeGroupID = pSyncDeltaInvstPosCombDtlField_TradeGroupID;

	//TThostFtdcActionDirectionType char
	self->data.ActionDirection = pSyncDeltaInvstPosCombDtlField_ActionDirection;

	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaInvstPosCombDtlField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaInvstPosCombDtlField_dealloc(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_repr(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:i,s:c,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:c,s:i,s:d,s:d,s:d,s:d,s:i,s:i,s:i,s:c,s:i}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "OpenDate", self->data.OpenDate 
		, "ExchangeID", self->data.ExchangeID 
		, "SettlementID", self->data.SettlementID
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "ComTradeID", self->data.ComTradeID 
		, "TradeID", self->data.TradeID 
		, "InstrumentID", self->data.InstrumentID 
		, "HedgeFlag", self->data.HedgeFlag
		, "Direction", self->data.Direction
		, "TotalAmt", self->data.TotalAmt
		, "Margin", self->data.Margin
		, "ExchMargin", self->data.ExchMargin
		, "MarginRateByMoney", self->data.MarginRateByMoney
		, "MarginRateByVolume", self->data.MarginRateByVolume
		, "LegID", self->data.LegID
		, "LegMultiple", self->data.LegMultiple
		, "TradeGroupID", self->data.TradeGroupID
		, "ActionDirection", self->data.ActionDirection
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaInvstPosCombDtlField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradingDay(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_OpenDate(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchangeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SettlementID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_BrokerID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InvestorID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ComTradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.ComTradeID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InstrumentID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Direction(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TotalAmt(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TotalAmt);
#else 
	return PyInt_FromLong(self->data.TotalAmt);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Margin(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Margin);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchMargin(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByMoney);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MarginRateByVolume);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegID);
#else 
	return PyInt_FromLong(self->data.LegID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegMultiple(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LegMultiple);
#else 
	return PyInt_FromLong(self->data.LegMultiple);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeGroupID(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TradeGroupID);
#else 
	return PyInt_FromLong(self->data.TradeGroupID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ActionDirection(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionDirection), 1);
}

static PyObject *PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosCombDtlField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradingDay(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_OpenDate(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchangeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SettlementID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_BrokerID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InvestorID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ComTradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InstrumentID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_HedgeFlag(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Direction(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TotalAmt(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Margin(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchMargin(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByMoney(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByVolume(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegMultiple(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeGroupID(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ActionDirection(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaInvstPosCombDtlField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaInvstPosCombDtlField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_OpenDate, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchangeID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SettlementID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InvestorID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"ComTradeID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ComTradeID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ComTradeID, (char *)"ComTradeID", NULL},
	 {(char *)"TradeID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeID, (char *)"TradeID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_InstrumentID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_HedgeFlag, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"Direction", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Direction, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"TotalAmt", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TotalAmt, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TotalAmt, (char *)"TotalAmt", NULL},
	 {(char *)"Margin", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_Margin, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_Margin, (char *)"Margin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ExchMargin, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"MarginRateByMoney", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByMoney, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByMoney, (char *)"MarginRateByMoney", NULL},
	 {(char *)"MarginRateByVolume", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_MarginRateByVolume, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_MarginRateByVolume, (char *)"MarginRateByVolume", NULL},
	 {(char *)"LegID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegID, (char *)"LegID", NULL},
	 {(char *)"LegMultiple", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_LegMultiple, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_LegMultiple, (char *)"LegMultiple", NULL},
	 {(char *)"TradeGroupID", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_TradeGroupID, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_TradeGroupID, (char *)"TradeGroupID", NULL},
	 {(char *)"ActionDirection", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_ActionDirection, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_ActionDirection, (char *)"ActionDirection", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaInvstPosCombDtlField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaInvstPosCombDtlField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaInvstPosCombDtlField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaInvstPosCombDtlField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaInvstPosCombDtlField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaInvstPosCombDtlField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaInvstPosCombDtlField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaInvstPosCombDtlField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaInvstPosCombDtlField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaInvstPosCombDtlField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaInvstPosCombDtlField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaInvstPosCombDtlField", (PyObject *)&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaInvstPosCombDtlField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaInvstPosCombDtlFieldType);
		return -1;
    }

    return 0;
}
