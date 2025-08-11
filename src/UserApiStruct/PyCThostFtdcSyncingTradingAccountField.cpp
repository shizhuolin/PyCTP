
#include "PyCThostFtdcSyncingTradingAccountField.h"



static PyObject *PyCThostFtdcSyncingTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingTradingAccountField *self = (PyCThostFtdcSyncingTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingTradingAccountField_init(PyCThostFtdcSyncingTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "FrozenSwap", "RemainSwap", "OptionValue",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingTradingAccountField_BrokerID = NULL;
	Py_ssize_t pSyncingTradingAccountField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pSyncingTradingAccountField_AccountID = NULL;
	Py_ssize_t pSyncingTradingAccountField_AccountID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PreMortgage = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PreCredit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PreDeposit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PreBalance = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PreMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_InterestBase = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Interest = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Deposit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Withdraw = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_FrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_CurrMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PositionProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Balance = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Available = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_WithdrawQuota = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Reserve = 0.0;

	//TThostFtdcDateType char[9]
	const char *pSyncingTradingAccountField_TradingDay = NULL;
	Py_ssize_t pSyncingTradingAccountField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pSyncingTradingAccountField_SettlementID = 0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Credit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_Mortgage = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_ExchangeMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_DeliveryMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_ExchangeDeliveryMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_ReserveBalance = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncingTradingAccountField_CurrencyID = NULL;
	Py_ssize_t pSyncingTradingAccountField_CurrencyID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PreFundMortgageIn = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_PreFundMortgageOut = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_FundMortgageIn = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_FundMortgageOut = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_FundMortgageAvailable = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_MortgageableFund = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductCommission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductFrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductPositionProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductCloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductPositionProfitByAlg = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_SpecProductExchangeMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_FrozenSwap = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_RemainSwap = 0.0;

	//TThostFtdcMoneyType double
	double pSyncingTradingAccountField_OptionValue = 0.0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#ddddddddddddddddd", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddddddddddddddds#idddddds#ddddddddddddddddd", (char **)kwlist
#endif

		, &pSyncingTradingAccountField_BrokerID, &pSyncingTradingAccountField_BrokerID_len
		, &pSyncingTradingAccountField_AccountID, &pSyncingTradingAccountField_AccountID_len
		, &pSyncingTradingAccountField_PreMortgage
		, &pSyncingTradingAccountField_PreCredit
		, &pSyncingTradingAccountField_PreDeposit
		, &pSyncingTradingAccountField_PreBalance
		, &pSyncingTradingAccountField_PreMargin
		, &pSyncingTradingAccountField_InterestBase
		, &pSyncingTradingAccountField_Interest
		, &pSyncingTradingAccountField_Deposit
		, &pSyncingTradingAccountField_Withdraw
		, &pSyncingTradingAccountField_FrozenMargin
		, &pSyncingTradingAccountField_FrozenCash
		, &pSyncingTradingAccountField_FrozenCommission
		, &pSyncingTradingAccountField_CurrMargin
		, &pSyncingTradingAccountField_CashIn
		, &pSyncingTradingAccountField_Commission
		, &pSyncingTradingAccountField_CloseProfit
		, &pSyncingTradingAccountField_PositionProfit
		, &pSyncingTradingAccountField_Balance
		, &pSyncingTradingAccountField_Available
		, &pSyncingTradingAccountField_WithdrawQuota
		, &pSyncingTradingAccountField_Reserve
		, &pSyncingTradingAccountField_TradingDay, &pSyncingTradingAccountField_TradingDay_len
		, &pSyncingTradingAccountField_SettlementID
		, &pSyncingTradingAccountField_Credit
		, &pSyncingTradingAccountField_Mortgage
		, &pSyncingTradingAccountField_ExchangeMargin
		, &pSyncingTradingAccountField_DeliveryMargin
		, &pSyncingTradingAccountField_ExchangeDeliveryMargin
		, &pSyncingTradingAccountField_ReserveBalance
		, &pSyncingTradingAccountField_CurrencyID, &pSyncingTradingAccountField_CurrencyID_len
		, &pSyncingTradingAccountField_PreFundMortgageIn
		, &pSyncingTradingAccountField_PreFundMortgageOut
		, &pSyncingTradingAccountField_FundMortgageIn
		, &pSyncingTradingAccountField_FundMortgageOut
		, &pSyncingTradingAccountField_FundMortgageAvailable
		, &pSyncingTradingAccountField_MortgageableFund
		, &pSyncingTradingAccountField_SpecProductMargin
		, &pSyncingTradingAccountField_SpecProductFrozenMargin
		, &pSyncingTradingAccountField_SpecProductCommission
		, &pSyncingTradingAccountField_SpecProductFrozenCommission
		, &pSyncingTradingAccountField_SpecProductPositionProfit
		, &pSyncingTradingAccountField_SpecProductCloseProfit
		, &pSyncingTradingAccountField_SpecProductPositionProfitByAlg
		, &pSyncingTradingAccountField_SpecProductExchangeMargin
		, &pSyncingTradingAccountField_FrozenSwap
		, &pSyncingTradingAccountField_RemainSwap
		, &pSyncingTradingAccountField_OptionValue


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingTradingAccountField_BrokerID != NULL) {
		if(pSyncingTradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingTradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingTradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingTradingAccountField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pSyncingTradingAccountField_AccountID != NULL) {
		if(pSyncingTradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pSyncingTradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pSyncingTradingAccountField_AccountID, sizeof(self->data.AccountID) );
		pSyncingTradingAccountField_AccountID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PreMortgage = pSyncingTradingAccountField_PreMortgage;
	//TThostFtdcMoneyType double
	self->data.PreCredit = pSyncingTradingAccountField_PreCredit;
	//TThostFtdcMoneyType double
	self->data.PreDeposit = pSyncingTradingAccountField_PreDeposit;
	//TThostFtdcMoneyType double
	self->data.PreBalance = pSyncingTradingAccountField_PreBalance;
	//TThostFtdcMoneyType double
	self->data.PreMargin = pSyncingTradingAccountField_PreMargin;
	//TThostFtdcMoneyType double
	self->data.InterestBase = pSyncingTradingAccountField_InterestBase;
	//TThostFtdcMoneyType double
	self->data.Interest = pSyncingTradingAccountField_Interest;
	//TThostFtdcMoneyType double
	self->data.Deposit = pSyncingTradingAccountField_Deposit;
	//TThostFtdcMoneyType double
	self->data.Withdraw = pSyncingTradingAccountField_Withdraw;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pSyncingTradingAccountField_FrozenMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pSyncingTradingAccountField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pSyncingTradingAccountField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.CurrMargin = pSyncingTradingAccountField_CurrMargin;
	//TThostFtdcMoneyType double
	self->data.CashIn = pSyncingTradingAccountField_CashIn;
	//TThostFtdcMoneyType double
	self->data.Commission = pSyncingTradingAccountField_Commission;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pSyncingTradingAccountField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.PositionProfit = pSyncingTradingAccountField_PositionProfit;
	//TThostFtdcMoneyType double
	self->data.Balance = pSyncingTradingAccountField_Balance;
	//TThostFtdcMoneyType double
	self->data.Available = pSyncingTradingAccountField_Available;
	//TThostFtdcMoneyType double
	self->data.WithdrawQuota = pSyncingTradingAccountField_WithdrawQuota;
	//TThostFtdcMoneyType double
	self->data.Reserve = pSyncingTradingAccountField_Reserve;
	//TThostFtdcDateType char[9]
	if(pSyncingTradingAccountField_TradingDay != NULL) {
		if(pSyncingTradingAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncingTradingAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncingTradingAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncingTradingAccountField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pSyncingTradingAccountField_SettlementID;

	//TThostFtdcMoneyType double
	self->data.Credit = pSyncingTradingAccountField_Credit;
	//TThostFtdcMoneyType double
	self->data.Mortgage = pSyncingTradingAccountField_Mortgage;
	//TThostFtdcMoneyType double
	self->data.ExchangeMargin = pSyncingTradingAccountField_ExchangeMargin;
	//TThostFtdcMoneyType double
	self->data.DeliveryMargin = pSyncingTradingAccountField_DeliveryMargin;
	//TThostFtdcMoneyType double
	self->data.ExchangeDeliveryMargin = pSyncingTradingAccountField_ExchangeDeliveryMargin;
	//TThostFtdcMoneyType double
	self->data.ReserveBalance = pSyncingTradingAccountField_ReserveBalance;
	//TThostFtdcCurrencyIDType char[4]
	if(pSyncingTradingAccountField_CurrencyID != NULL) {
		if(pSyncingTradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pSyncingTradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pSyncingTradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pSyncingTradingAccountField_CurrencyID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PreFundMortgageIn = pSyncingTradingAccountField_PreFundMortgageIn;
	//TThostFtdcMoneyType double
	self->data.PreFundMortgageOut = pSyncingTradingAccountField_PreFundMortgageOut;
	//TThostFtdcMoneyType double
	self->data.FundMortgageIn = pSyncingTradingAccountField_FundMortgageIn;
	//TThostFtdcMoneyType double
	self->data.FundMortgageOut = pSyncingTradingAccountField_FundMortgageOut;
	//TThostFtdcMoneyType double
	self->data.FundMortgageAvailable = pSyncingTradingAccountField_FundMortgageAvailable;
	//TThostFtdcMoneyType double
	self->data.MortgageableFund = pSyncingTradingAccountField_MortgageableFund;
	//TThostFtdcMoneyType double
	self->data.SpecProductMargin = pSyncingTradingAccountField_SpecProductMargin;
	//TThostFtdcMoneyType double
	self->data.SpecProductFrozenMargin = pSyncingTradingAccountField_SpecProductFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.SpecProductCommission = pSyncingTradingAccountField_SpecProductCommission;
	//TThostFtdcMoneyType double
	self->data.SpecProductFrozenCommission = pSyncingTradingAccountField_SpecProductFrozenCommission;
	//TThostFtdcMoneyType double
	self->data.SpecProductPositionProfit = pSyncingTradingAccountField_SpecProductPositionProfit;
	//TThostFtdcMoneyType double
	self->data.SpecProductCloseProfit = pSyncingTradingAccountField_SpecProductCloseProfit;
	//TThostFtdcMoneyType double
	self->data.SpecProductPositionProfitByAlg = pSyncingTradingAccountField_SpecProductPositionProfitByAlg;
	//TThostFtdcMoneyType double
	self->data.SpecProductExchangeMargin = pSyncingTradingAccountField_SpecProductExchangeMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenSwap = pSyncingTradingAccountField_FrozenSwap;
	//TThostFtdcMoneyType double
	self->data.RemainSwap = pSyncingTradingAccountField_RemainSwap;
	//TThostFtdcMoneyType double
	self->data.OptionValue = pSyncingTradingAccountField_OptionValue;


    return 0;
}

static void PyCThostFtdcSyncingTradingAccountField_dealloc(PyCThostFtdcSyncingTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_repr(PyCThostFtdcSyncingTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d}"
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
		, "FrozenSwap", self->data.FrozenSwap
		, "RemainSwap", self->data.RemainSwap
		, "OptionValue", self->data.OptionValue


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_BrokerID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_AccountID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreMortgage(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMortgage);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreCredit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreCredit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreDeposit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreDeposit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreBalance(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreBalance);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_InterestBase(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterestBase);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Interest(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Interest);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Deposit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Deposit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Withdraw(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Withdraw);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenCash(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenCommission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CurrMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CurrMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CashIn(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Commission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CloseProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PositionProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Balance(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Balance);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Available(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Available);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_WithdrawQuota(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.WithdrawQuota);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Reserve(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Reserve);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_TradingDay(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SettlementID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Credit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Credit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_Mortgage(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Mortgage);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_ExchangeMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_DeliveryMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_ExchangeDeliveryMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeDeliveryMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_ReserveBalance(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ReserveBalance);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_CurrencyID(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageIn(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreFundMortgageIn);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageOut(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreFundMortgageOut);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FundMortgageIn(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageIn);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FundMortgageOut(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageOut);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FundMortgageAvailable(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageAvailable);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_MortgageableFund(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MortgageableFund);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductFrozenMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductCommission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductCommission);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenCommission(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductFrozenCommission);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductPositionProfit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductCloseProfit(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductCloseProfit);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfitByAlg(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductPositionProfitByAlg);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_SpecProductExchangeMargin(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductExchangeMargin);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_FrozenSwap(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenSwap);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_RemainSwap(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RemainSwap);
}

static PyObject *PyCThostFtdcSyncingTradingAccountField_get_OptionValue(PyCThostFtdcSyncingTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionValue);
}

static int PyCThostFtdcSyncingTradingAccountField_set_BrokerID(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_AccountID(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PreMortgage(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PreCredit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PreDeposit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PreBalance(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PreMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_InterestBase(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Interest(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Deposit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Withdraw(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_FrozenMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_FrozenCash(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_FrozenCommission(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_CurrMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_CashIn(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Commission(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_CloseProfit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PositionProfit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Balance(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Available(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_WithdrawQuota(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Reserve(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_TradingDay(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SettlementID(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Credit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_Mortgage(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_ExchangeMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_DeliveryMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_ExchangeDeliveryMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_ReserveBalance(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_CurrencyID(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageIn(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageOut(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_FundMortgageIn(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_FundMortgageOut(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_FundMortgageAvailable(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_MortgageableFund(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductCommission(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenCommission(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductCloseProfit(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfitByAlg(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_SpecProductExchangeMargin(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_FrozenSwap(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_RemainSwap(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingTradingAccountField_set_OptionValue(PyCThostFtdcSyncingTradingAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncingTradingAccountField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingTradingAccountField_get_BrokerID, (setter)PyCThostFtdcSyncingTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcSyncingTradingAccountField_get_AccountID, (setter)PyCThostFtdcSyncingTradingAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"PreMortgage", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreMortgage, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreMortgage, (char *)"PreMortgage", NULL},
	 {(char *)"PreCredit", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreCredit, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreCredit, (char *)"PreCredit", NULL},
	 {(char *)"PreDeposit", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreDeposit, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreDeposit, (char *)"PreDeposit", NULL},
	 {(char *)"PreBalance", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreBalance, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreBalance, (char *)"PreBalance", NULL},
	 {(char *)"PreMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreMargin, (char *)"PreMargin", NULL},
	 {(char *)"InterestBase", (getter)PyCThostFtdcSyncingTradingAccountField_get_InterestBase, (setter)PyCThostFtdcSyncingTradingAccountField_set_InterestBase, (char *)"InterestBase", NULL},
	 {(char *)"Interest", (getter)PyCThostFtdcSyncingTradingAccountField_get_Interest, (setter)PyCThostFtdcSyncingTradingAccountField_set_Interest, (char *)"Interest", NULL},
	 {(char *)"Deposit", (getter)PyCThostFtdcSyncingTradingAccountField_get_Deposit, (setter)PyCThostFtdcSyncingTradingAccountField_set_Deposit, (char *)"Deposit", NULL},
	 {(char *)"Withdraw", (getter)PyCThostFtdcSyncingTradingAccountField_get_Withdraw, (setter)PyCThostFtdcSyncingTradingAccountField_set_Withdraw, (char *)"Withdraw", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenCash, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenCommission, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"CurrMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_CurrMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_CurrMargin, (char *)"CurrMargin", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcSyncingTradingAccountField_get_CashIn, (setter)PyCThostFtdcSyncingTradingAccountField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcSyncingTradingAccountField_get_Commission, (setter)PyCThostFtdcSyncingTradingAccountField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_CloseProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"PositionProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_PositionProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_PositionProfit, (char *)"PositionProfit", NULL},
	 {(char *)"Balance", (getter)PyCThostFtdcSyncingTradingAccountField_get_Balance, (setter)PyCThostFtdcSyncingTradingAccountField_set_Balance, (char *)"Balance", NULL},
	 {(char *)"Available", (getter)PyCThostFtdcSyncingTradingAccountField_get_Available, (setter)PyCThostFtdcSyncingTradingAccountField_set_Available, (char *)"Available", NULL},
	 {(char *)"WithdrawQuota", (getter)PyCThostFtdcSyncingTradingAccountField_get_WithdrawQuota, (setter)PyCThostFtdcSyncingTradingAccountField_set_WithdrawQuota, (char *)"WithdrawQuota", NULL},
	 {(char *)"Reserve", (getter)PyCThostFtdcSyncingTradingAccountField_get_Reserve, (setter)PyCThostFtdcSyncingTradingAccountField_set_Reserve, (char *)"Reserve", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncingTradingAccountField_get_TradingDay, (setter)PyCThostFtdcSyncingTradingAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcSyncingTradingAccountField_get_SettlementID, (setter)PyCThostFtdcSyncingTradingAccountField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"Credit", (getter)PyCThostFtdcSyncingTradingAccountField_get_Credit, (setter)PyCThostFtdcSyncingTradingAccountField_set_Credit, (char *)"Credit", NULL},
	 {(char *)"Mortgage", (getter)PyCThostFtdcSyncingTradingAccountField_get_Mortgage, (setter)PyCThostFtdcSyncingTradingAccountField_set_Mortgage, (char *)"Mortgage", NULL},
	 {(char *)"ExchangeMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_ExchangeMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
	 {(char *)"DeliveryMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_DeliveryMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
	 {(char *)"ExchangeDeliveryMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_ExchangeDeliveryMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_ExchangeDeliveryMargin, (char *)"ExchangeDeliveryMargin", NULL},
	 {(char *)"ReserveBalance", (getter)PyCThostFtdcSyncingTradingAccountField_get_ReserveBalance, (setter)PyCThostFtdcSyncingTradingAccountField_set_ReserveBalance, (char *)"ReserveBalance", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcSyncingTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcSyncingTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"PreFundMortgageIn", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageIn, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageIn, (char *)"PreFundMortgageIn", NULL},
	 {(char *)"PreFundMortgageOut", (getter)PyCThostFtdcSyncingTradingAccountField_get_PreFundMortgageOut, (setter)PyCThostFtdcSyncingTradingAccountField_set_PreFundMortgageOut, (char *)"PreFundMortgageOut", NULL},
	 {(char *)"FundMortgageIn", (getter)PyCThostFtdcSyncingTradingAccountField_get_FundMortgageIn, (setter)PyCThostFtdcSyncingTradingAccountField_set_FundMortgageIn, (char *)"FundMortgageIn", NULL},
	 {(char *)"FundMortgageOut", (getter)PyCThostFtdcSyncingTradingAccountField_get_FundMortgageOut, (setter)PyCThostFtdcSyncingTradingAccountField_set_FundMortgageOut, (char *)"FundMortgageOut", NULL},
	 {(char *)"FundMortgageAvailable", (getter)PyCThostFtdcSyncingTradingAccountField_get_FundMortgageAvailable, (setter)PyCThostFtdcSyncingTradingAccountField_set_FundMortgageAvailable, (char *)"FundMortgageAvailable", NULL},
	 {(char *)"MortgageableFund", (getter)PyCThostFtdcSyncingTradingAccountField_get_MortgageableFund, (setter)PyCThostFtdcSyncingTradingAccountField_set_MortgageableFund, (char *)"MortgageableFund", NULL},
	 {(char *)"SpecProductMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductMargin, (char *)"SpecProductMargin", NULL},
	 {(char *)"SpecProductFrozenMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenMargin, (char *)"SpecProductFrozenMargin", NULL},
	 {(char *)"SpecProductCommission", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductCommission, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductCommission, (char *)"SpecProductCommission", NULL},
	 {(char *)"SpecProductFrozenCommission", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductFrozenCommission, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductFrozenCommission, (char *)"SpecProductFrozenCommission", NULL},
	 {(char *)"SpecProductPositionProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfit, (char *)"SpecProductPositionProfit", NULL},
	 {(char *)"SpecProductCloseProfit", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductCloseProfit, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductCloseProfit, (char *)"SpecProductCloseProfit", NULL},
	 {(char *)"SpecProductPositionProfitByAlg", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductPositionProfitByAlg, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductPositionProfitByAlg, (char *)"SpecProductPositionProfitByAlg", NULL},
	 {(char *)"SpecProductExchangeMargin", (getter)PyCThostFtdcSyncingTradingAccountField_get_SpecProductExchangeMargin, (setter)PyCThostFtdcSyncingTradingAccountField_set_SpecProductExchangeMargin, (char *)"SpecProductExchangeMargin", NULL},
	 {(char *)"FrozenSwap", (getter)PyCThostFtdcSyncingTradingAccountField_get_FrozenSwap, (setter)PyCThostFtdcSyncingTradingAccountField_set_FrozenSwap, (char *)"FrozenSwap", NULL},
	 {(char *)"RemainSwap", (getter)PyCThostFtdcSyncingTradingAccountField_get_RemainSwap, (setter)PyCThostFtdcSyncingTradingAccountField_set_RemainSwap, (char *)"RemainSwap", NULL},
	 {(char *)"OptionValue", (getter)PyCThostFtdcSyncingTradingAccountField_get_OptionValue, (setter)PyCThostFtdcSyncingTradingAccountField_set_OptionValue, (char *)"OptionValue", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcSyncingTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcSyncingTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingTradingAccountField", (PyObject *)&PyCThostFtdcSyncingTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcSyncingTradingAccountFieldType);
		return -1;
    }

    return 0;
}
