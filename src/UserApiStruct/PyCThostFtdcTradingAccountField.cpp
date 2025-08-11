
#include "PyCThostFtdcTradingAccountField.h"



static PyObject *PyCThostFtdcTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountField *self = (PyCThostFtdcTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountField_init(PyCThostFtdcTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "BizType", "FrozenSwap", "RemainSwap", "OptionValue",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingAccountField_BrokerID = NULL;
	Py_ssize_t pTradingAccountField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTradingAccountField_AccountID = NULL;
	Py_ssize_t pTradingAccountField_AccountID_len = 0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PreMortgage = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PreCredit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PreDeposit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PreBalance = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PreMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_InterestBase = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Interest = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Deposit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Withdraw = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_FrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_CurrMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PositionProfit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Balance = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Available = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_WithdrawQuota = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Reserve = 0.0;

	//TThostFtdcDateType char[9]
	const char *pTradingAccountField_TradingDay = NULL;
	Py_ssize_t pTradingAccountField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pTradingAccountField_SettlementID = 0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Credit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_Mortgage = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_ExchangeMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_DeliveryMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_ExchangeDeliveryMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_ReserveBalance = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pTradingAccountField_CurrencyID = NULL;
	Py_ssize_t pTradingAccountField_CurrencyID_len = 0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PreFundMortgageIn = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_PreFundMortgageOut = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_FundMortgageIn = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_FundMortgageOut = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_FundMortgageAvailable = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_MortgageableFund = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductCommission = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductFrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductPositionProfit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductCloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductPositionProfitByAlg = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_SpecProductExchangeMargin = 0.0;

	//TThostFtdcBizTypeType char
	char pTradingAccountField_BizType = 0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_FrozenSwap = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_RemainSwap = 0.0;

	//TThostFtdcMoneyType double
	double pTradingAccountField_OptionValue = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#ddddddddddddddcddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddddddddddddddds#idddddds#ddddddddddddddcddd", (char **)kwlist
#endif

		, &pTradingAccountField_BrokerID, &pTradingAccountField_BrokerID_len
		, &pTradingAccountField_AccountID, &pTradingAccountField_AccountID_len
		, &pTradingAccountField_PreMortgage
		, &pTradingAccountField_PreCredit
		, &pTradingAccountField_PreDeposit
		, &pTradingAccountField_PreBalance
		, &pTradingAccountField_PreMargin
		, &pTradingAccountField_InterestBase
		, &pTradingAccountField_Interest
		, &pTradingAccountField_Deposit
		, &pTradingAccountField_Withdraw
		, &pTradingAccountField_FrozenMargin
		, &pTradingAccountField_FrozenCash
		, &pTradingAccountField_FrozenCommission
		, &pTradingAccountField_CurrMargin
		, &pTradingAccountField_CashIn
		, &pTradingAccountField_Commission
		, &pTradingAccountField_CloseProfit
		, &pTradingAccountField_PositionProfit
		, &pTradingAccountField_Balance
		, &pTradingAccountField_Available
		, &pTradingAccountField_WithdrawQuota
		, &pTradingAccountField_Reserve
		, &pTradingAccountField_TradingDay, &pTradingAccountField_TradingDay_len
		, &pTradingAccountField_SettlementID
		, &pTradingAccountField_Credit
		, &pTradingAccountField_Mortgage
		, &pTradingAccountField_ExchangeMargin
		, &pTradingAccountField_DeliveryMargin
		, &pTradingAccountField_ExchangeDeliveryMargin
		, &pTradingAccountField_ReserveBalance
		, &pTradingAccountField_CurrencyID, &pTradingAccountField_CurrencyID_len
		, &pTradingAccountField_PreFundMortgageIn
		, &pTradingAccountField_PreFundMortgageOut
		, &pTradingAccountField_FundMortgageIn
		, &pTradingAccountField_FundMortgageOut
		, &pTradingAccountField_FundMortgageAvailable
		, &pTradingAccountField_MortgageableFund
		, &pTradingAccountField_SpecProductMargin
		, &pTradingAccountField_SpecProductFrozenMargin
		, &pTradingAccountField_SpecProductCommission
		, &pTradingAccountField_SpecProductFrozenCommission
		, &pTradingAccountField_SpecProductPositionProfit
		, &pTradingAccountField_SpecProductCloseProfit
		, &pTradingAccountField_SpecProductPositionProfitByAlg
		, &pTradingAccountField_SpecProductExchangeMargin
		, &pTradingAccountField_BizType
		, &pTradingAccountField_FrozenSwap
		, &pTradingAccountField_RemainSwap
		, &pTradingAccountField_OptionValue


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingAccountField_BrokerID != NULL) {
		if(pTradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingAccountField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTradingAccountField_AccountID != NULL) {
		if(pTradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pTradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pTradingAccountField_AccountID, sizeof(self->data.AccountID) );
		pTradingAccountField_AccountID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PreMortgage = pTradingAccountField_PreMortgage;
	//TThostFtdcMoneyType double
	self->data.PreCredit = pTradingAccountField_PreCredit;
	//TThostFtdcMoneyType double
	self->data.PreDeposit = pTradingAccountField_PreDeposit;
	//TThostFtdcMoneyType double
	self->data.PreBalance = pTradingAccountField_PreBalance;
	//TThostFtdcMoneyType double
	self->data.PreMargin = pTradingAccountField_PreMargin;
	//TThostFtdcMoneyType double
	self->data.InterestBase = pTradingAccountField_InterestBase;
	//TThostFtdcMoneyType double
	self->data.Interest = pTradingAccountField_Interest;
	//TThostFtdcMoneyType double
	self->data.Deposit = pTradingAccountField_Deposit;
	//TThostFtdcMoneyType double
	self->data.Withdraw = pTradingAccountField_Withdraw;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pTradingAccountField_FrozenMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pTradingAccountField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pTradingAccountField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.CurrMargin = pTradingAccountField_CurrMargin;
	//TThostFtdcMoneyType double
	self->data.CashIn = pTradingAccountField_CashIn;
	//TThostFtdcMoneyType double
	self->data.Commission = pTradingAccountField_Commission;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pTradingAccountField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.PositionProfit = pTradingAccountField_PositionProfit;
	//TThostFtdcMoneyType double
	self->data.Balance = pTradingAccountField_Balance;
	//TThostFtdcMoneyType double
	self->data.Available = pTradingAccountField_Available;
	//TThostFtdcMoneyType double
	self->data.WithdrawQuota = pTradingAccountField_WithdrawQuota;
	//TThostFtdcMoneyType double
	self->data.Reserve = pTradingAccountField_Reserve;
	//TThostFtdcDateType char[9]
	if(pTradingAccountField_TradingDay != NULL) {
		if(pTradingAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pTradingAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pTradingAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pTradingAccountField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pTradingAccountField_SettlementID;

	//TThostFtdcMoneyType double
	self->data.Credit = pTradingAccountField_Credit;
	//TThostFtdcMoneyType double
	self->data.Mortgage = pTradingAccountField_Mortgage;
	//TThostFtdcMoneyType double
	self->data.ExchangeMargin = pTradingAccountField_ExchangeMargin;
	//TThostFtdcMoneyType double
	self->data.DeliveryMargin = pTradingAccountField_DeliveryMargin;
	//TThostFtdcMoneyType double
	self->data.ExchangeDeliveryMargin = pTradingAccountField_ExchangeDeliveryMargin;
	//TThostFtdcMoneyType double
	self->data.ReserveBalance = pTradingAccountField_ReserveBalance;
	//TThostFtdcCurrencyIDType char[4]
	if(pTradingAccountField_CurrencyID != NULL) {
		if(pTradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pTradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pTradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pTradingAccountField_CurrencyID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PreFundMortgageIn = pTradingAccountField_PreFundMortgageIn;
	//TThostFtdcMoneyType double
	self->data.PreFundMortgageOut = pTradingAccountField_PreFundMortgageOut;
	//TThostFtdcMoneyType double
	self->data.FundMortgageIn = pTradingAccountField_FundMortgageIn;
	//TThostFtdcMoneyType double
	self->data.FundMortgageOut = pTradingAccountField_FundMortgageOut;
	//TThostFtdcMoneyType double
	self->data.FundMortgageAvailable = pTradingAccountField_FundMortgageAvailable;
	//TThostFtdcMoneyType double
	self->data.MortgageableFund = pTradingAccountField_MortgageableFund;
	//TThostFtdcMoneyType double
	self->data.SpecProductMargin = pTradingAccountField_SpecProductMargin;
	//TThostFtdcMoneyType double
	self->data.SpecProductFrozenMargin = pTradingAccountField_SpecProductFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.SpecProductCommission = pTradingAccountField_SpecProductCommission;
	//TThostFtdcMoneyType double
	self->data.SpecProductFrozenCommission = pTradingAccountField_SpecProductFrozenCommission;
	//TThostFtdcMoneyType double
	self->data.SpecProductPositionProfit = pTradingAccountField_SpecProductPositionProfit;
	//TThostFtdcMoneyType double
	self->data.SpecProductCloseProfit = pTradingAccountField_SpecProductCloseProfit;
	//TThostFtdcMoneyType double
	self->data.SpecProductPositionProfitByAlg = pTradingAccountField_SpecProductPositionProfitByAlg;
	//TThostFtdcMoneyType double
	self->data.SpecProductExchangeMargin = pTradingAccountField_SpecProductExchangeMargin;
	//TThostFtdcBizTypeType char
	self->data.BizType = pTradingAccountField_BizType;

	//TThostFtdcMoneyType double
	self->data.FrozenSwap = pTradingAccountField_FrozenSwap;
	//TThostFtdcMoneyType double
	self->data.RemainSwap = pTradingAccountField_RemainSwap;
	//TThostFtdcMoneyType double
	self->data.OptionValue = pTradingAccountField_OptionValue;


    return 0;
}

static void PyCThostFtdcTradingAccountField_dealloc(PyCThostFtdcTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountField_repr(PyCThostFtdcTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:c,s:d,s:d,s:d}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "PreMortgage", self->data.PreMortgage
		, "PreCredit", self->data.PreCredit
		, "PreDeposit", self->data.PreDeposit
		, "PreBalance", self->data.PreBalance
		, "PreMargin", self->data.PreMargin
		, "InterestBase", self->data.InterestBase
		, "Interest", self->data.Interest
		, "Deposit", self->data.Deposit
		, "Withdraw", self->data.Withdraw
		, "FrozenMargin", self->data.FrozenMargin
		, "FrozenCash", self->data.FrozenCash
		, "FrozenCommission", self->data.FrozenCommission
		, "CurrMargin", self->data.CurrMargin
		, "CashIn", self->data.CashIn
		, "Commission", self->data.Commission
		, "CloseProfit", self->data.CloseProfit
		, "PositionProfit", self->data.PositionProfit
		, "Balance", self->data.Balance
		, "Available", self->data.Available
		, "WithdrawQuota", self->data.WithdrawQuota
		, "Reserve", self->data.Reserve
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "Credit", self->data.Credit
		, "Mortgage", self->data.Mortgage
		, "ExchangeMargin", self->data.ExchangeMargin
		, "DeliveryMargin", self->data.DeliveryMargin
		, "ExchangeDeliveryMargin", self->data.ExchangeDeliveryMargin
		, "ReserveBalance", self->data.ReserveBalance
		, "CurrencyID", self->data.CurrencyID 
		, "PreFundMortgageIn", self->data.PreFundMortgageIn
		, "PreFundMortgageOut", self->data.PreFundMortgageOut
		, "FundMortgageIn", self->data.FundMortgageIn
		, "FundMortgageOut", self->data.FundMortgageOut
		, "FundMortgageAvailable", self->data.FundMortgageAvailable
		, "MortgageableFund", self->data.MortgageableFund
		, "SpecProductMargin", self->data.SpecProductMargin
		, "SpecProductFrozenMargin", self->data.SpecProductFrozenMargin
		, "SpecProductCommission", self->data.SpecProductCommission
		, "SpecProductFrozenCommission", self->data.SpecProductFrozenCommission
		, "SpecProductPositionProfit", self->data.SpecProductPositionProfit
		, "SpecProductCloseProfit", self->data.SpecProductCloseProfit
		, "SpecProductPositionProfitByAlg", self->data.SpecProductPositionProfitByAlg
		, "SpecProductExchangeMargin", self->data.SpecProductExchangeMargin
		, "BizType", self->data.BizType
		, "FrozenSwap", self->data.FrozenSwap
		, "RemainSwap", self->data.RemainSwap
		, "OptionValue", self->data.OptionValue


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingAccountField_get_BrokerID(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingAccountField_get_AccountID(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PreMortgage(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMortgage);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PreCredit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreCredit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PreDeposit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreDeposit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PreBalance(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreBalance);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PreMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_InterestBase(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterestBase);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Interest(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Interest);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Deposit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Deposit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Withdraw(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Withdraw);
}

static PyObject *PyCThostFtdcTradingAccountField_get_FrozenMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_FrozenCash(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcTradingAccountField_get_FrozenCommission(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcTradingAccountField_get_CurrMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CurrMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_CashIn(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Commission(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcTradingAccountField_get_CloseProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PositionProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Balance(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Balance);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Available(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Available);
}

static PyObject *PyCThostFtdcTradingAccountField_get_WithdrawQuota(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.WithdrawQuota);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Reserve(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Reserve);
}

static PyObject *PyCThostFtdcTradingAccountField_get_TradingDay(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SettlementID(PyCThostFtdcTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcTradingAccountField_get_Credit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Credit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_Mortgage(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Mortgage);
}

static PyObject *PyCThostFtdcTradingAccountField_get_ExchangeMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_DeliveryMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_ExchangeDeliveryMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeDeliveryMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_ReserveBalance(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ReserveBalance);
}

static PyObject *PyCThostFtdcTradingAccountField_get_CurrencyID(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PreFundMortgageIn(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreFundMortgageIn);
}

static PyObject *PyCThostFtdcTradingAccountField_get_PreFundMortgageOut(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreFundMortgageOut);
}

static PyObject *PyCThostFtdcTradingAccountField_get_FundMortgageIn(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageIn);
}

static PyObject *PyCThostFtdcTradingAccountField_get_FundMortgageOut(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageOut);
}

static PyObject *PyCThostFtdcTradingAccountField_get_FundMortgageAvailable(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageAvailable);
}

static PyObject *PyCThostFtdcTradingAccountField_get_MortgageableFund(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MortgageableFund);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductFrozenMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductFrozenMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductCommission(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductCommission);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductFrozenCommission(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductFrozenCommission);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductPositionProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductPositionProfit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductCloseProfit(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductCloseProfit);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductPositionProfitByAlg(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductPositionProfitByAlg);
}

static PyObject *PyCThostFtdcTradingAccountField_get_SpecProductExchangeMargin(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductExchangeMargin);
}

static PyObject *PyCThostFtdcTradingAccountField_get_BizType(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

static PyObject *PyCThostFtdcTradingAccountField_get_FrozenSwap(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenSwap);
}

static PyObject *PyCThostFtdcTradingAccountField_get_RemainSwap(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RemainSwap);
}

static PyObject *PyCThostFtdcTradingAccountField_get_OptionValue(PyCThostFtdcTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionValue);
}

static int PyCThostFtdcTradingAccountField_set_BrokerID(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_AccountID(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcTradingAccountField_set_PreMortgage(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreMortgage Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreMortgage = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_PreCredit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreCredit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreCredit = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_PreDeposit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreDeposit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreDeposit = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_PreBalance(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreBalance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreBalance = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_PreMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_InterestBase(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterestBase Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.InterestBase = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_Interest(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Interest Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Interest = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_Deposit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Deposit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Deposit = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_Withdraw(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Withdraw Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Withdraw = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_FrozenMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_FrozenCash(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_FrozenCommission(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_CurrMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CurrMargin = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_CashIn(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_Commission(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_CloseProfit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_PositionProfit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_Balance(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Balance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Balance = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_Available(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Available Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Available = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_WithdrawQuota(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WithdrawQuota Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.WithdrawQuota = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_Reserve(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reserve Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Reserve = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_TradingDay(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_SettlementID(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_Credit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Credit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Credit = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_Mortgage(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Mortgage Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.Mortgage = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_ExchangeMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountField_set_DeliveryMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DeliveryMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.DeliveryMargin = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_ExchangeDeliveryMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeDeliveryMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ExchangeDeliveryMargin = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_ReserveBalance(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ReserveBalance Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.ReserveBalance = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_CurrencyID(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
	return 0;
}

static int PyCThostFtdcTradingAccountField_set_PreFundMortgageIn(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreFundMortgageIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreFundMortgageIn = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_PreFundMortgageOut(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreFundMortgageOut Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.PreFundMortgageOut = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_FundMortgageIn(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageIn Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageIn = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_FundMortgageOut(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageOut Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageOut = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_FundMortgageAvailable(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FundMortgageAvailable Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FundMortgageAvailable = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_MortgageableFund(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MortgageableFund Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MortgageableFund = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductMargin = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductFrozenMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductFrozenMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductFrozenMargin = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductCommission(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductCommission = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductFrozenCommission(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductFrozenCommission Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductFrozenCommission = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductPositionProfit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductPositionProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductPositionProfit = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductCloseProfit(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductCloseProfit Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductCloseProfit = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductPositionProfitByAlg(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductPositionProfitByAlg Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductPositionProfitByAlg = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_SpecProductExchangeMargin(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SpecProductExchangeMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.SpecProductExchangeMargin = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_BizType(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BizType)) {
		PyErr_SetString(PyExc_ValueError, "BizType must be less than 1 bytes");
		return -1;
	}
	self->data.BizType = *buf;
	return 0;
}

static int PyCThostFtdcTradingAccountField_set_FrozenSwap(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrozenSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FrozenSwap = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_RemainSwap(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RemainSwap Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.RemainSwap = buf;
    return 0;
}

static int PyCThostFtdcTradingAccountField_set_OptionValue(PyCThostFtdcTradingAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTradingAccountField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountField_get_BrokerID, (setter)PyCThostFtdcTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountField_get_AccountID, (setter)PyCThostFtdcTradingAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"PreMortgage", (getter)PyCThostFtdcTradingAccountField_get_PreMortgage, (setter)PyCThostFtdcTradingAccountField_set_PreMortgage, (char *)"PreMortgage", NULL},
	 {(char *)"PreCredit", (getter)PyCThostFtdcTradingAccountField_get_PreCredit, (setter)PyCThostFtdcTradingAccountField_set_PreCredit, (char *)"PreCredit", NULL},
	 {(char *)"PreDeposit", (getter)PyCThostFtdcTradingAccountField_get_PreDeposit, (setter)PyCThostFtdcTradingAccountField_set_PreDeposit, (char *)"PreDeposit", NULL},
	 {(char *)"PreBalance", (getter)PyCThostFtdcTradingAccountField_get_PreBalance, (setter)PyCThostFtdcTradingAccountField_set_PreBalance, (char *)"PreBalance", NULL},
	 {(char *)"PreMargin", (getter)PyCThostFtdcTradingAccountField_get_PreMargin, (setter)PyCThostFtdcTradingAccountField_set_PreMargin, (char *)"PreMargin", NULL},
	 {(char *)"InterestBase", (getter)PyCThostFtdcTradingAccountField_get_InterestBase, (setter)PyCThostFtdcTradingAccountField_set_InterestBase, (char *)"InterestBase", NULL},
	 {(char *)"Interest", (getter)PyCThostFtdcTradingAccountField_get_Interest, (setter)PyCThostFtdcTradingAccountField_set_Interest, (char *)"Interest", NULL},
	 {(char *)"Deposit", (getter)PyCThostFtdcTradingAccountField_get_Deposit, (setter)PyCThostFtdcTradingAccountField_set_Deposit, (char *)"Deposit", NULL},
	 {(char *)"Withdraw", (getter)PyCThostFtdcTradingAccountField_get_Withdraw, (setter)PyCThostFtdcTradingAccountField_set_Withdraw, (char *)"Withdraw", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcTradingAccountField_get_FrozenMargin, (setter)PyCThostFtdcTradingAccountField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcTradingAccountField_get_FrozenCash, (setter)PyCThostFtdcTradingAccountField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcTradingAccountField_get_FrozenCommission, (setter)PyCThostFtdcTradingAccountField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"CurrMargin", (getter)PyCThostFtdcTradingAccountField_get_CurrMargin, (setter)PyCThostFtdcTradingAccountField_set_CurrMargin, (char *)"CurrMargin", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcTradingAccountField_get_CashIn, (setter)PyCThostFtdcTradingAccountField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcTradingAccountField_get_Commission, (setter)PyCThostFtdcTradingAccountField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcTradingAccountField_get_CloseProfit, (setter)PyCThostFtdcTradingAccountField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"PositionProfit", (getter)PyCThostFtdcTradingAccountField_get_PositionProfit, (setter)PyCThostFtdcTradingAccountField_set_PositionProfit, (char *)"PositionProfit", NULL},
	 {(char *)"Balance", (getter)PyCThostFtdcTradingAccountField_get_Balance, (setter)PyCThostFtdcTradingAccountField_set_Balance, (char *)"Balance", NULL},
	 {(char *)"Available", (getter)PyCThostFtdcTradingAccountField_get_Available, (setter)PyCThostFtdcTradingAccountField_set_Available, (char *)"Available", NULL},
	 {(char *)"WithdrawQuota", (getter)PyCThostFtdcTradingAccountField_get_WithdrawQuota, (setter)PyCThostFtdcTradingAccountField_set_WithdrawQuota, (char *)"WithdrawQuota", NULL},
	 {(char *)"Reserve", (getter)PyCThostFtdcTradingAccountField_get_Reserve, (setter)PyCThostFtdcTradingAccountField_set_Reserve, (char *)"Reserve", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcTradingAccountField_get_TradingDay, (setter)PyCThostFtdcTradingAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcTradingAccountField_get_SettlementID, (setter)PyCThostFtdcTradingAccountField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"Credit", (getter)PyCThostFtdcTradingAccountField_get_Credit, (setter)PyCThostFtdcTradingAccountField_set_Credit, (char *)"Credit", NULL},
	 {(char *)"Mortgage", (getter)PyCThostFtdcTradingAccountField_get_Mortgage, (setter)PyCThostFtdcTradingAccountField_set_Mortgage, (char *)"Mortgage", NULL},
	 {(char *)"ExchangeMargin", (getter)PyCThostFtdcTradingAccountField_get_ExchangeMargin, (setter)PyCThostFtdcTradingAccountField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
	 {(char *)"DeliveryMargin", (getter)PyCThostFtdcTradingAccountField_get_DeliveryMargin, (setter)PyCThostFtdcTradingAccountField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
	 {(char *)"ExchangeDeliveryMargin", (getter)PyCThostFtdcTradingAccountField_get_ExchangeDeliveryMargin, (setter)PyCThostFtdcTradingAccountField_set_ExchangeDeliveryMargin, (char *)"ExchangeDeliveryMargin", NULL},
	 {(char *)"ReserveBalance", (getter)PyCThostFtdcTradingAccountField_get_ReserveBalance, (setter)PyCThostFtdcTradingAccountField_set_ReserveBalance, (char *)"ReserveBalance", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"PreFundMortgageIn", (getter)PyCThostFtdcTradingAccountField_get_PreFundMortgageIn, (setter)PyCThostFtdcTradingAccountField_set_PreFundMortgageIn, (char *)"PreFundMortgageIn", NULL},
	 {(char *)"PreFundMortgageOut", (getter)PyCThostFtdcTradingAccountField_get_PreFundMortgageOut, (setter)PyCThostFtdcTradingAccountField_set_PreFundMortgageOut, (char *)"PreFundMortgageOut", NULL},
	 {(char *)"FundMortgageIn", (getter)PyCThostFtdcTradingAccountField_get_FundMortgageIn, (setter)PyCThostFtdcTradingAccountField_set_FundMortgageIn, (char *)"FundMortgageIn", NULL},
	 {(char *)"FundMortgageOut", (getter)PyCThostFtdcTradingAccountField_get_FundMortgageOut, (setter)PyCThostFtdcTradingAccountField_set_FundMortgageOut, (char *)"FundMortgageOut", NULL},
	 {(char *)"FundMortgageAvailable", (getter)PyCThostFtdcTradingAccountField_get_FundMortgageAvailable, (setter)PyCThostFtdcTradingAccountField_set_FundMortgageAvailable, (char *)"FundMortgageAvailable", NULL},
	 {(char *)"MortgageableFund", (getter)PyCThostFtdcTradingAccountField_get_MortgageableFund, (setter)PyCThostFtdcTradingAccountField_set_MortgageableFund, (char *)"MortgageableFund", NULL},
	 {(char *)"SpecProductMargin", (getter)PyCThostFtdcTradingAccountField_get_SpecProductMargin, (setter)PyCThostFtdcTradingAccountField_set_SpecProductMargin, (char *)"SpecProductMargin", NULL},
	 {(char *)"SpecProductFrozenMargin", (getter)PyCThostFtdcTradingAccountField_get_SpecProductFrozenMargin, (setter)PyCThostFtdcTradingAccountField_set_SpecProductFrozenMargin, (char *)"SpecProductFrozenMargin", NULL},
	 {(char *)"SpecProductCommission", (getter)PyCThostFtdcTradingAccountField_get_SpecProductCommission, (setter)PyCThostFtdcTradingAccountField_set_SpecProductCommission, (char *)"SpecProductCommission", NULL},
	 {(char *)"SpecProductFrozenCommission", (getter)PyCThostFtdcTradingAccountField_get_SpecProductFrozenCommission, (setter)PyCThostFtdcTradingAccountField_set_SpecProductFrozenCommission, (char *)"SpecProductFrozenCommission", NULL},
	 {(char *)"SpecProductPositionProfit", (getter)PyCThostFtdcTradingAccountField_get_SpecProductPositionProfit, (setter)PyCThostFtdcTradingAccountField_set_SpecProductPositionProfit, (char *)"SpecProductPositionProfit", NULL},
	 {(char *)"SpecProductCloseProfit", (getter)PyCThostFtdcTradingAccountField_get_SpecProductCloseProfit, (setter)PyCThostFtdcTradingAccountField_set_SpecProductCloseProfit, (char *)"SpecProductCloseProfit", NULL},
	 {(char *)"SpecProductPositionProfitByAlg", (getter)PyCThostFtdcTradingAccountField_get_SpecProductPositionProfitByAlg, (setter)PyCThostFtdcTradingAccountField_set_SpecProductPositionProfitByAlg, (char *)"SpecProductPositionProfitByAlg", NULL},
	 {(char *)"SpecProductExchangeMargin", (getter)PyCThostFtdcTradingAccountField_get_SpecProductExchangeMargin, (setter)PyCThostFtdcTradingAccountField_set_SpecProductExchangeMargin, (char *)"SpecProductExchangeMargin", NULL},
	 {(char *)"BizType", (getter)PyCThostFtdcTradingAccountField_get_BizType, (setter)PyCThostFtdcTradingAccountField_set_BizType, (char *)"BizType", NULL},
	 {(char *)"FrozenSwap", (getter)PyCThostFtdcTradingAccountField_get_FrozenSwap, (setter)PyCThostFtdcTradingAccountField_set_FrozenSwap, (char *)"FrozenSwap", NULL},
	 {(char *)"RemainSwap", (getter)PyCThostFtdcTradingAccountField_get_RemainSwap, (setter)PyCThostFtdcTradingAccountField_set_RemainSwap, (char *)"RemainSwap", NULL},
	 {(char *)"OptionValue", (getter)PyCThostFtdcTradingAccountField_get_OptionValue, (setter)PyCThostFtdcTradingAccountField_set_OptionValue, (char *)"OptionValue", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountField", (PyObject *)&PyCThostFtdcTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountFieldType);
		return -1;
    }

    return 0;
}
