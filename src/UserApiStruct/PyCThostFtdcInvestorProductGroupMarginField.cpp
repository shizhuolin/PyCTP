
#include "PyCThostFtdcInvestorProductGroupMarginField.h"



static PyObject *PyCThostFtdcInvestorProductGroupMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorProductGroupMarginField *self = (PyCThostFtdcInvestorProductGroupMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorProductGroupMarginField_init(PyCThostFtdcInvestorProductGroupMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "BrokerID", "InvestorID", "TradingDay", "SettlementID", "FrozenMargin", "LongFrozenMargin", "ShortFrozenMargin", "UseMargin", "LongUseMargin", "ShortUseMargin", "ExchMargin", "LongExchMargin", "ShortExchMargin", "CloseProfit", "FrozenCommission", "Commission", "FrozenCash", "CashIn", "PositionProfit", "OffsetAmount", "LongOffsetAmount", "ShortOffsetAmount", "ExchOffsetAmount", "LongExchOffsetAmount", "ShortExchOffsetAmount", "HedgeFlag", "ExchangeID", "InvestUnitID", "ProductGroupID",  NULL};

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInvestorProductGroupMarginField_reserve1 = NULL;
	Py_ssize_t pInvestorProductGroupMarginField_reserve1_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorProductGroupMarginField_BrokerID = NULL;
	Py_ssize_t pInvestorProductGroupMarginField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorProductGroupMarginField_InvestorID = NULL;
	Py_ssize_t pInvestorProductGroupMarginField_InvestorID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pInvestorProductGroupMarginField_TradingDay = NULL;
	Py_ssize_t pInvestorProductGroupMarginField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pInvestorProductGroupMarginField_SettlementID = 0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_FrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_LongFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_ShortFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_UseMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_LongUseMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_ShortUseMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_ExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_LongExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_ShortExchMargin = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_PositionProfit = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_OffsetAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_LongOffsetAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_ShortOffsetAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_ExchOffsetAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_LongExchOffsetAmount = 0.0;

	//TThostFtdcMoneyType double
	double pInvestorProductGroupMarginField_ShortExchOffsetAmount = 0.0;

	//TThostFtdcHedgeFlagType char
	char pInvestorProductGroupMarginField_HedgeFlag = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInvestorProductGroupMarginField_ExchangeID = NULL;
	Py_ssize_t pInvestorProductGroupMarginField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInvestorProductGroupMarginField_InvestUnitID = NULL;
	Py_ssize_t pInvestorProductGroupMarginField_InvestUnitID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInvestorProductGroupMarginField_ProductGroupID = NULL;
	Py_ssize_t pInvestorProductGroupMarginField_ProductGroupID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#idddddddddddddddddddddcy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#idddddddddddddddddddddcs#s#s#", (char **)kwlist
#endif

		, &pInvestorProductGroupMarginField_reserve1, &pInvestorProductGroupMarginField_reserve1_len
		, &pInvestorProductGroupMarginField_BrokerID, &pInvestorProductGroupMarginField_BrokerID_len
		, &pInvestorProductGroupMarginField_InvestorID, &pInvestorProductGroupMarginField_InvestorID_len
		, &pInvestorProductGroupMarginField_TradingDay, &pInvestorProductGroupMarginField_TradingDay_len
		, &pInvestorProductGroupMarginField_SettlementID
		, &pInvestorProductGroupMarginField_FrozenMargin
		, &pInvestorProductGroupMarginField_LongFrozenMargin
		, &pInvestorProductGroupMarginField_ShortFrozenMargin
		, &pInvestorProductGroupMarginField_UseMargin
		, &pInvestorProductGroupMarginField_LongUseMargin
		, &pInvestorProductGroupMarginField_ShortUseMargin
		, &pInvestorProductGroupMarginField_ExchMargin
		, &pInvestorProductGroupMarginField_LongExchMargin
		, &pInvestorProductGroupMarginField_ShortExchMargin
		, &pInvestorProductGroupMarginField_CloseProfit
		, &pInvestorProductGroupMarginField_FrozenCommission
		, &pInvestorProductGroupMarginField_Commission
		, &pInvestorProductGroupMarginField_FrozenCash
		, &pInvestorProductGroupMarginField_CashIn
		, &pInvestorProductGroupMarginField_PositionProfit
		, &pInvestorProductGroupMarginField_OffsetAmount
		, &pInvestorProductGroupMarginField_LongOffsetAmount
		, &pInvestorProductGroupMarginField_ShortOffsetAmount
		, &pInvestorProductGroupMarginField_ExchOffsetAmount
		, &pInvestorProductGroupMarginField_LongExchOffsetAmount
		, &pInvestorProductGroupMarginField_ShortExchOffsetAmount
		, &pInvestorProductGroupMarginField_HedgeFlag
		, &pInvestorProductGroupMarginField_ExchangeID, &pInvestorProductGroupMarginField_ExchangeID_len
		, &pInvestorProductGroupMarginField_InvestUnitID, &pInvestorProductGroupMarginField_InvestUnitID_len
		, &pInvestorProductGroupMarginField_ProductGroupID, &pInvestorProductGroupMarginField_ProductGroupID_len


    )) {
        return -1;
    }

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInvestorProductGroupMarginField_reserve1 != NULL) {
		if(pInvestorProductGroupMarginField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInvestorProductGroupMarginField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInvestorProductGroupMarginField_reserve1, sizeof(self->data.reserve1) );
		pInvestorProductGroupMarginField_reserve1 = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorProductGroupMarginField_BrokerID != NULL) {
		if(pInvestorProductGroupMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorProductGroupMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorProductGroupMarginField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorProductGroupMarginField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorProductGroupMarginField_InvestorID != NULL) {
		if(pInvestorProductGroupMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorProductGroupMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorProductGroupMarginField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorProductGroupMarginField_InvestorID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pInvestorProductGroupMarginField_TradingDay != NULL) {
		if(pInvestorProductGroupMarginField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pInvestorProductGroupMarginField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pInvestorProductGroupMarginField_TradingDay, sizeof(self->data.TradingDay) );
		pInvestorProductGroupMarginField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pInvestorProductGroupMarginField_SettlementID;

	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pInvestorProductGroupMarginField_FrozenMargin;
	//TThostFtdcMoneyType double
	self->data.LongFrozenMargin = pInvestorProductGroupMarginField_LongFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.ShortFrozenMargin = pInvestorProductGroupMarginField_ShortFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.UseMargin = pInvestorProductGroupMarginField_UseMargin;
	//TThostFtdcMoneyType double
	self->data.LongUseMargin = pInvestorProductGroupMarginField_LongUseMargin;
	//TThostFtdcMoneyType double
	self->data.ShortUseMargin = pInvestorProductGroupMarginField_ShortUseMargin;
	//TThostFtdcMoneyType double
	self->data.ExchMargin = pInvestorProductGroupMarginField_ExchMargin;
	//TThostFtdcMoneyType double
	self->data.LongExchMargin = pInvestorProductGroupMarginField_LongExchMargin;
	//TThostFtdcMoneyType double
	self->data.ShortExchMargin = pInvestorProductGroupMarginField_ShortExchMargin;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pInvestorProductGroupMarginField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pInvestorProductGroupMarginField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.Commission = pInvestorProductGroupMarginField_Commission;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pInvestorProductGroupMarginField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.CashIn = pInvestorProductGroupMarginField_CashIn;
	//TThostFtdcMoneyType double
	self->data.PositionProfit = pInvestorProductGroupMarginField_PositionProfit;
	//TThostFtdcMoneyType double
	self->data.OffsetAmount = pInvestorProductGroupMarginField_OffsetAmount;
	//TThostFtdcMoneyType double
	self->data.LongOffsetAmount = pInvestorProductGroupMarginField_LongOffsetAmount;
	//TThostFtdcMoneyType double
	self->data.ShortOffsetAmount = pInvestorProductGroupMarginField_ShortOffsetAmount;
	//TThostFtdcMoneyType double
	self->data.ExchOffsetAmount = pInvestorProductGroupMarginField_ExchOffsetAmount;
	//TThostFtdcMoneyType double
	self->data.LongExchOffsetAmount = pInvestorProductGroupMarginField_LongExchOffsetAmount;
	//TThostFtdcMoneyType double
	self->data.ShortExchOffsetAmount = pInvestorProductGroupMarginField_ShortExchOffsetAmount;
	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInvestorProductGroupMarginField_HedgeFlag;

	//TThostFtdcExchangeIDType char[9]
	if(pInvestorProductGroupMarginField_ExchangeID != NULL) {
		if(pInvestorProductGroupMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInvestorProductGroupMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInvestorProductGroupMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInvestorProductGroupMarginField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInvestorProductGroupMarginField_InvestUnitID != NULL) {
		if(pInvestorProductGroupMarginField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInvestorProductGroupMarginField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInvestorProductGroupMarginField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInvestorProductGroupMarginField_InvestUnitID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInvestorProductGroupMarginField_ProductGroupID != NULL) {
		if(pInvestorProductGroupMarginField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
			PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", pInvestorProductGroupMarginField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
			return -1;
		}
		strncpy(self->data.ProductGroupID, pInvestorProductGroupMarginField_ProductGroupID, sizeof(self->data.ProductGroupID) );
		pInvestorProductGroupMarginField_ProductGroupID = NULL;
	}



    return 0;
}

static void PyCThostFtdcInvestorProductGroupMarginField_dealloc(PyCThostFtdcInvestorProductGroupMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_repr(PyCThostFtdcInvestorProductGroupMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:s,s:s,s:s}"
#endif

		, "reserve1", self->data.reserve1 
		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "FrozenMargin", self->data.FrozenMargin
		, "LongFrozenMargin", self->data.LongFrozenMargin
		, "ShortFrozenMargin", self->data.ShortFrozenMargin
		, "UseMargin", self->data.UseMargin
		, "LongUseMargin", self->data.LongUseMargin
		, "ShortUseMargin", self->data.ShortUseMargin
		, "ExchMargin", self->data.ExchMargin
		, "LongExchMargin", self->data.LongExchMargin
		, "ShortExchMargin", self->data.ShortExchMargin
		, "CloseProfit", self->data.CloseProfit
		, "FrozenCommission", self->data.FrozenCommission
		, "Commission", self->data.Commission
		, "FrozenCash", self->data.FrozenCash
		, "CashIn", self->data.CashIn
		, "PositionProfit", self->data.PositionProfit
		, "OffsetAmount", self->data.OffsetAmount
		, "LongOffsetAmount", self->data.LongOffsetAmount
		, "ShortOffsetAmount", self->data.ShortOffsetAmount
		, "ExchOffsetAmount", self->data.ExchOffsetAmount
		, "LongExchOffsetAmount", self->data.LongExchOffsetAmount
		, "ShortExchOffsetAmount", self->data.ShortExchOffsetAmount
		, "HedgeFlag", self->data.HedgeFlag
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "ProductGroupID", self->data.ProductGroupID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorProductGroupMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_reserve1(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_BrokerID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_InvestorID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_TradingDay(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_SettlementID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_FrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortFrozenMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_UseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.UseMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongUseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongUseMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortUseMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortUseMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongExchMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchMargin(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortExchMargin);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_CloseProfit(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCommission(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_Commission(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCash(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_CashIn(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_PositionProfit(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfit);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_OffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OffsetAmount);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongOffsetAmount);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortOffsetAmount);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchOffsetAmount);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_LongExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LongExchOffsetAmount);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ShortExchOffsetAmount);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_HedgeFlag(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ExchangeID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_InvestUnitID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInvestorProductGroupMarginField_get_ProductGroupID(PyCThostFtdcInvestorProductGroupMarginField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductGroupID);
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_reserve1(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_BrokerID(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_InvestorID(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_TradingDay(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_SettlementID(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_FrozenMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_LongFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortFrozenMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_UseMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_LongUseMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongUseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongUseMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortUseMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortUseMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortUseMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_ExchMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_LongExchMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongExchMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchMargin(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortExchMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortExchMargin = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_CloseProfit(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCommission(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_Commission(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCash(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_CashIn(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_PositionProfit(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_OffsetAmount(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.OffsetAmount = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_LongOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongOffsetAmount = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortOffsetAmount = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_ExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchOffsetAmount = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_LongExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LongExchOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LongExchOffsetAmount = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchOffsetAmount(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ShortExchOffsetAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ShortExchOffsetAmount = buf;
    return 0;
}

static int PyCThostFtdcInvestorProductGroupMarginField_set_HedgeFlag(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_ExchangeID(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_InvestUnitID(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorProductGroupMarginField_set_ProductGroupID(PyCThostFtdcInvestorProductGroupMarginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
		PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
	return 0;
}



static PyGetSetDef PyCThostFtdcInvestorProductGroupMarginField_getset[] = {
	 {(char *)"reserve1", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_reserve1, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_BrokerID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_InvestorID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_TradingDay, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_SettlementID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_FrozenMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
	 {(char *)"LongFrozenMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongFrozenMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongFrozenMargin, (char *)"LongFrozenMargin", NULL},
	 {(char *)"ShortFrozenMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortFrozenMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortFrozenMargin, (char *)"ShortFrozenMargin", NULL},
	 {(char *)"UseMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_UseMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_UseMargin, (char *)"UseMargin", NULL},
	 {(char *)"LongUseMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongUseMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongUseMargin, (char *)"LongUseMargin", NULL},
	 {(char *)"ShortUseMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortUseMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortUseMargin, (char *)"ShortUseMargin", NULL},
	 {(char *)"ExchMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ExchMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ExchMargin, (char *)"ExchMargin", NULL},
	 {(char *)"LongExchMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongExchMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongExchMargin, (char *)"LongExchMargin", NULL},
	 {(char *)"ShortExchMargin", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchMargin, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchMargin, (char *)"ShortExchMargin", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_CloseProfit, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCommission, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_Commission, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_FrozenCash, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_CashIn, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"PositionProfit", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_PositionProfit, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_PositionProfit, (char *)"PositionProfit", NULL},
	 {(char *)"OffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_OffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_OffsetAmount, (char *)"OffsetAmount", NULL},
	 {(char *)"LongOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongOffsetAmount, (char *)"LongOffsetAmount", NULL},
	 {(char *)"ShortOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortOffsetAmount, (char *)"ShortOffsetAmount", NULL},
	 {(char *)"ExchOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ExchOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ExchOffsetAmount, (char *)"ExchOffsetAmount", NULL},
	 {(char *)"LongExchOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_LongExchOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_LongExchOffsetAmount, (char *)"LongExchOffsetAmount", NULL},
	 {(char *)"ShortExchOffsetAmount", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ShortExchOffsetAmount, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ShortExchOffsetAmount, (char *)"ShortExchOffsetAmount", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_HedgeFlag, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ExchangeID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_InvestUnitID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"ProductGroupID", (getter)PyCThostFtdcInvestorProductGroupMarginField_get_ProductGroupID, (setter)PyCThostFtdcInvestorProductGroupMarginField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorProductGroupMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorProductGroupMarginField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorProductGroupMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorProductGroupMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorProductGroupMarginField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorProductGroupMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorProductGroupMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorProductGroupMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorProductGroupMarginField_new,       /* tp_new */
};

int PyCThostFtdcInvestorProductGroupMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorProductGroupMarginField  */
	if (PyType_Ready(&PyCThostFtdcInvestorProductGroupMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorProductGroupMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorProductGroupMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorProductGroupMarginField", (PyObject *)&PyCThostFtdcInvestorProductGroupMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorProductGroupMarginField to module");
        Py_DECREF(&PyCThostFtdcInvestorProductGroupMarginFieldType);
		return -1;
    }

    return 0;
}
