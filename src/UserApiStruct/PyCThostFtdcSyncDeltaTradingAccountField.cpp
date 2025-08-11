
#include "PyCThostFtdcSyncDeltaTradingAccountField.h"



static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncDeltaTradingAccountField *self = (PyCThostFtdcSyncDeltaTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncDeltaTradingAccountField_init(PyCThostFtdcSyncDeltaTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "PreMortgage", "PreCredit", "PreDeposit", "PreBalance", "PreMargin", "InterestBase", "Interest", "Deposit", "Withdraw", "FrozenMargin", "FrozenCash", "FrozenCommission", "CurrMargin", "CashIn", "Commission", "CloseProfit", "PositionProfit", "Balance", "Available", "WithdrawQuota", "Reserve", "TradingDay", "SettlementID", "Credit", "Mortgage", "ExchangeMargin", "DeliveryMargin", "ExchangeDeliveryMargin", "ReserveBalance", "CurrencyID", "PreFundMortgageIn", "PreFundMortgageOut", "FundMortgageIn", "FundMortgageOut", "FundMortgageAvailable", "MortgageableFund", "SpecProductMargin", "SpecProductFrozenMargin", "SpecProductCommission", "SpecProductFrozenCommission", "SpecProductPositionProfit", "SpecProductCloseProfit", "SpecProductPositionProfitByAlg", "SpecProductExchangeMargin", "FrozenSwap", "RemainSwap", "OptionValue", "SyncDeltaSequenceNo",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncDeltaTradingAccountField_BrokerID = NULL;
	Py_ssize_t pSyncDeltaTradingAccountField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pSyncDeltaTradingAccountField_AccountID = NULL;
	Py_ssize_t pSyncDeltaTradingAccountField_AccountID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PreMortgage = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PreCredit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PreDeposit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PreBalance = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PreMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_InterestBase = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Interest = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Deposit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Withdraw = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_FrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_FrozenCash = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_FrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_CurrMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_CashIn = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Commission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_CloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PositionProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Balance = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Available = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_WithdrawQuota = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Reserve = 0.0;

	//TThostFtdcDateType char[9]
	const char *pSyncDeltaTradingAccountField_TradingDay = NULL;
	Py_ssize_t pSyncDeltaTradingAccountField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pSyncDeltaTradingAccountField_SettlementID = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Credit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_Mortgage = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_ExchangeMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_DeliveryMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_ExchangeDeliveryMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_ReserveBalance = 0.0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pSyncDeltaTradingAccountField_CurrencyID = NULL;
	Py_ssize_t pSyncDeltaTradingAccountField_CurrencyID_len = 0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PreFundMortgageIn = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_PreFundMortgageOut = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_FundMortgageIn = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_FundMortgageOut = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_FundMortgageAvailable = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_MortgageableFund = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductFrozenMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductCommission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductFrozenCommission = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductPositionProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductCloseProfit = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductPositionProfitByAlg = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_SpecProductExchangeMargin = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_FrozenSwap = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_RemainSwap = 0.0;

	//TThostFtdcMoneyType double
	double pSyncDeltaTradingAccountField_OptionValue = 0.0;

	//TThostFtdcSequenceNoType int
	int pSyncDeltaTradingAccountField_SyncDeltaSequenceNo = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dddddddddddddddddddddy#iddddddy#dddddddddddddddddi", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ddddddddddddddddddddds#idddddds#dddddddddddddddddi", (char **)kwlist
#endif

		, &pSyncDeltaTradingAccountField_BrokerID, &pSyncDeltaTradingAccountField_BrokerID_len
		, &pSyncDeltaTradingAccountField_AccountID, &pSyncDeltaTradingAccountField_AccountID_len
		, &pSyncDeltaTradingAccountField_PreMortgage
		, &pSyncDeltaTradingAccountField_PreCredit
		, &pSyncDeltaTradingAccountField_PreDeposit
		, &pSyncDeltaTradingAccountField_PreBalance
		, &pSyncDeltaTradingAccountField_PreMargin
		, &pSyncDeltaTradingAccountField_InterestBase
		, &pSyncDeltaTradingAccountField_Interest
		, &pSyncDeltaTradingAccountField_Deposit
		, &pSyncDeltaTradingAccountField_Withdraw
		, &pSyncDeltaTradingAccountField_FrozenMargin
		, &pSyncDeltaTradingAccountField_FrozenCash
		, &pSyncDeltaTradingAccountField_FrozenCommission
		, &pSyncDeltaTradingAccountField_CurrMargin
		, &pSyncDeltaTradingAccountField_CashIn
		, &pSyncDeltaTradingAccountField_Commission
		, &pSyncDeltaTradingAccountField_CloseProfit
		, &pSyncDeltaTradingAccountField_PositionProfit
		, &pSyncDeltaTradingAccountField_Balance
		, &pSyncDeltaTradingAccountField_Available
		, &pSyncDeltaTradingAccountField_WithdrawQuota
		, &pSyncDeltaTradingAccountField_Reserve
		, &pSyncDeltaTradingAccountField_TradingDay, &pSyncDeltaTradingAccountField_TradingDay_len
		, &pSyncDeltaTradingAccountField_SettlementID
		, &pSyncDeltaTradingAccountField_Credit
		, &pSyncDeltaTradingAccountField_Mortgage
		, &pSyncDeltaTradingAccountField_ExchangeMargin
		, &pSyncDeltaTradingAccountField_DeliveryMargin
		, &pSyncDeltaTradingAccountField_ExchangeDeliveryMargin
		, &pSyncDeltaTradingAccountField_ReserveBalance
		, &pSyncDeltaTradingAccountField_CurrencyID, &pSyncDeltaTradingAccountField_CurrencyID_len
		, &pSyncDeltaTradingAccountField_PreFundMortgageIn
		, &pSyncDeltaTradingAccountField_PreFundMortgageOut
		, &pSyncDeltaTradingAccountField_FundMortgageIn
		, &pSyncDeltaTradingAccountField_FundMortgageOut
		, &pSyncDeltaTradingAccountField_FundMortgageAvailable
		, &pSyncDeltaTradingAccountField_MortgageableFund
		, &pSyncDeltaTradingAccountField_SpecProductMargin
		, &pSyncDeltaTradingAccountField_SpecProductFrozenMargin
		, &pSyncDeltaTradingAccountField_SpecProductCommission
		, &pSyncDeltaTradingAccountField_SpecProductFrozenCommission
		, &pSyncDeltaTradingAccountField_SpecProductPositionProfit
		, &pSyncDeltaTradingAccountField_SpecProductCloseProfit
		, &pSyncDeltaTradingAccountField_SpecProductPositionProfitByAlg
		, &pSyncDeltaTradingAccountField_SpecProductExchangeMargin
		, &pSyncDeltaTradingAccountField_FrozenSwap
		, &pSyncDeltaTradingAccountField_RemainSwap
		, &pSyncDeltaTradingAccountField_OptionValue
		, &pSyncDeltaTradingAccountField_SyncDeltaSequenceNo


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pSyncDeltaTradingAccountField_BrokerID != NULL) {
		if(pSyncDeltaTradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncDeltaTradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncDeltaTradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncDeltaTradingAccountField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pSyncDeltaTradingAccountField_AccountID != NULL) {
		if(pSyncDeltaTradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pSyncDeltaTradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pSyncDeltaTradingAccountField_AccountID, sizeof(self->data.AccountID) );
		pSyncDeltaTradingAccountField_AccountID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PreMortgage = pSyncDeltaTradingAccountField_PreMortgage;
	//TThostFtdcMoneyType double
	self->data.PreCredit = pSyncDeltaTradingAccountField_PreCredit;
	//TThostFtdcMoneyType double
	self->data.PreDeposit = pSyncDeltaTradingAccountField_PreDeposit;
	//TThostFtdcMoneyType double
	self->data.PreBalance = pSyncDeltaTradingAccountField_PreBalance;
	//TThostFtdcMoneyType double
	self->data.PreMargin = pSyncDeltaTradingAccountField_PreMargin;
	//TThostFtdcMoneyType double
	self->data.InterestBase = pSyncDeltaTradingAccountField_InterestBase;
	//TThostFtdcMoneyType double
	self->data.Interest = pSyncDeltaTradingAccountField_Interest;
	//TThostFtdcMoneyType double
	self->data.Deposit = pSyncDeltaTradingAccountField_Deposit;
	//TThostFtdcMoneyType double
	self->data.Withdraw = pSyncDeltaTradingAccountField_Withdraw;
	//TThostFtdcMoneyType double
	self->data.FrozenMargin = pSyncDeltaTradingAccountField_FrozenMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenCash = pSyncDeltaTradingAccountField_FrozenCash;
	//TThostFtdcMoneyType double
	self->data.FrozenCommission = pSyncDeltaTradingAccountField_FrozenCommission;
	//TThostFtdcMoneyType double
	self->data.CurrMargin = pSyncDeltaTradingAccountField_CurrMargin;
	//TThostFtdcMoneyType double
	self->data.CashIn = pSyncDeltaTradingAccountField_CashIn;
	//TThostFtdcMoneyType double
	self->data.Commission = pSyncDeltaTradingAccountField_Commission;
	//TThostFtdcMoneyType double
	self->data.CloseProfit = pSyncDeltaTradingAccountField_CloseProfit;
	//TThostFtdcMoneyType double
	self->data.PositionProfit = pSyncDeltaTradingAccountField_PositionProfit;
	//TThostFtdcMoneyType double
	self->data.Balance = pSyncDeltaTradingAccountField_Balance;
	//TThostFtdcMoneyType double
	self->data.Available = pSyncDeltaTradingAccountField_Available;
	//TThostFtdcMoneyType double
	self->data.WithdrawQuota = pSyncDeltaTradingAccountField_WithdrawQuota;
	//TThostFtdcMoneyType double
	self->data.Reserve = pSyncDeltaTradingAccountField_Reserve;
	//TThostFtdcDateType char[9]
	if(pSyncDeltaTradingAccountField_TradingDay != NULL) {
		if(pSyncDeltaTradingAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pSyncDeltaTradingAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pSyncDeltaTradingAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pSyncDeltaTradingAccountField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pSyncDeltaTradingAccountField_SettlementID;

	//TThostFtdcMoneyType double
	self->data.Credit = pSyncDeltaTradingAccountField_Credit;
	//TThostFtdcMoneyType double
	self->data.Mortgage = pSyncDeltaTradingAccountField_Mortgage;
	//TThostFtdcMoneyType double
	self->data.ExchangeMargin = pSyncDeltaTradingAccountField_ExchangeMargin;
	//TThostFtdcMoneyType double
	self->data.DeliveryMargin = pSyncDeltaTradingAccountField_DeliveryMargin;
	//TThostFtdcMoneyType double
	self->data.ExchangeDeliveryMargin = pSyncDeltaTradingAccountField_ExchangeDeliveryMargin;
	//TThostFtdcMoneyType double
	self->data.ReserveBalance = pSyncDeltaTradingAccountField_ReserveBalance;
	//TThostFtdcCurrencyIDType char[4]
	if(pSyncDeltaTradingAccountField_CurrencyID != NULL) {
		if(pSyncDeltaTradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pSyncDeltaTradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pSyncDeltaTradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pSyncDeltaTradingAccountField_CurrencyID = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.PreFundMortgageIn = pSyncDeltaTradingAccountField_PreFundMortgageIn;
	//TThostFtdcMoneyType double
	self->data.PreFundMortgageOut = pSyncDeltaTradingAccountField_PreFundMortgageOut;
	//TThostFtdcMoneyType double
	self->data.FundMortgageIn = pSyncDeltaTradingAccountField_FundMortgageIn;
	//TThostFtdcMoneyType double
	self->data.FundMortgageOut = pSyncDeltaTradingAccountField_FundMortgageOut;
	//TThostFtdcMoneyType double
	self->data.FundMortgageAvailable = pSyncDeltaTradingAccountField_FundMortgageAvailable;
	//TThostFtdcMoneyType double
	self->data.MortgageableFund = pSyncDeltaTradingAccountField_MortgageableFund;
	//TThostFtdcMoneyType double
	self->data.SpecProductMargin = pSyncDeltaTradingAccountField_SpecProductMargin;
	//TThostFtdcMoneyType double
	self->data.SpecProductFrozenMargin = pSyncDeltaTradingAccountField_SpecProductFrozenMargin;
	//TThostFtdcMoneyType double
	self->data.SpecProductCommission = pSyncDeltaTradingAccountField_SpecProductCommission;
	//TThostFtdcMoneyType double
	self->data.SpecProductFrozenCommission = pSyncDeltaTradingAccountField_SpecProductFrozenCommission;
	//TThostFtdcMoneyType double
	self->data.SpecProductPositionProfit = pSyncDeltaTradingAccountField_SpecProductPositionProfit;
	//TThostFtdcMoneyType double
	self->data.SpecProductCloseProfit = pSyncDeltaTradingAccountField_SpecProductCloseProfit;
	//TThostFtdcMoneyType double
	self->data.SpecProductPositionProfitByAlg = pSyncDeltaTradingAccountField_SpecProductPositionProfitByAlg;
	//TThostFtdcMoneyType double
	self->data.SpecProductExchangeMargin = pSyncDeltaTradingAccountField_SpecProductExchangeMargin;
	//TThostFtdcMoneyType double
	self->data.FrozenSwap = pSyncDeltaTradingAccountField_FrozenSwap;
	//TThostFtdcMoneyType double
	self->data.RemainSwap = pSyncDeltaTradingAccountField_RemainSwap;
	//TThostFtdcMoneyType double
	self->data.OptionValue = pSyncDeltaTradingAccountField_OptionValue;
	//TThostFtdcSequenceNoType int
	self->data.SyncDeltaSequenceNo = pSyncDeltaTradingAccountField_SyncDeltaSequenceNo;



    return 0;
}

static void PyCThostFtdcSyncDeltaTradingAccountField_dealloc(PyCThostFtdcSyncDeltaTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_repr(PyCThostFtdcSyncDeltaTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:y,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:i,s:d,s:d,s:d,s:d,s:d,s:d,s:s,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:d,s:i}"
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
		, "SyncDeltaSequenceNo", self->data.SyncDeltaSequenceNo


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncDeltaTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_BrokerID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_AccountID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreMortgage(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMortgage);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreCredit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreCredit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreDeposit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreDeposit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreBalance(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreBalance);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_InterestBase(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.InterestBase);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Interest(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Interest);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Deposit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Deposit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Withdraw(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Withdraw);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCash(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCash);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenCommission);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CurrMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CurrMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CashIn(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CashIn);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Commission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Commission);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CloseProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CloseProfit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PositionProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PositionProfit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Balance(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Balance);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Available(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Available);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_WithdrawQuota(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.WithdrawQuota);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Reserve(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Reserve);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_TradingDay(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SettlementID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Credit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Credit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_Mortgage(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.Mortgage);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_DeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.DeliveryMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeDeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ExchangeDeliveryMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_ReserveBalance(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.ReserveBalance);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_CurrencyID(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreFundMortgageIn);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.PreFundMortgageOut);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageIn);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageOut);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageAvailable(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FundMortgageAvailable);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_MortgageableFund(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.MortgageableFund);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductFrozenMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductCommission);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductFrozenCommission);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductPositionProfit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCloseProfit(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductCloseProfit);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfitByAlg(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductPositionProfitByAlg);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.SpecProductExchangeMargin);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenSwap(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FrozenSwap);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_RemainSwap(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.RemainSwap);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_OptionValue(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.OptionValue);
}

static PyObject *PyCThostFtdcSyncDeltaTradingAccountField_get_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaTradingAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SyncDeltaSequenceNo);
#else 
	return PyInt_FromLong(self->data.SyncDeltaSequenceNo);
#endif 
}

static int PyCThostFtdcSyncDeltaTradingAccountField_set_BrokerID(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_AccountID(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreMortgage(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreCredit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreDeposit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreBalance(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_InterestBase(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Interest(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Deposit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Withdraw(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCash(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_CurrMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_CashIn(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Commission(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_CloseProfit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PositionProfit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Balance(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Available(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_WithdrawQuota(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Reserve(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_TradingDay(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SettlementID(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Credit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_Mortgage(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_DeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeDeliveryMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_ReserveBalance(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_CurrencyID(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageIn(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageOut(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageAvailable(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_MortgageableFund(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCommission(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenCommission(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCloseProfit(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfitByAlg(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductExchangeMargin(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenSwap(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_RemainSwap(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_OptionValue(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncDeltaTradingAccountField_set_SyncDeltaSequenceNo(PyCThostFtdcSyncDeltaTradingAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcSyncDeltaTradingAccountField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_BrokerID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_AccountID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"PreMortgage", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreMortgage, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreMortgage, (char *)"PreMortgage", NULL},
	 {(char *)"PreCredit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreCredit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreCredit, (char *)"PreCredit", NULL},
	 {(char *)"PreDeposit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreDeposit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreDeposit, (char *)"PreDeposit", NULL},
	 {(char *)"PreBalance", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreBalance, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreBalance, (char *)"PreBalance", NULL},
	 {(char *)"PreMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreMargin, (char *)"PreMargin", NULL},
	 {(char *)"InterestBase", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_InterestBase, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_InterestBase, (char *)"InterestBase", NULL},
	 {(char *)"Interest", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Interest, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Interest, (char *)"Interest", NULL},
	 {(char *)"Deposit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Deposit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Deposit, (char *)"Deposit", NULL},
	 {(char *)"Withdraw", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Withdraw, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Withdraw, (char *)"Withdraw", NULL},
	 {(char *)"FrozenMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenMargin, (char *)"FrozenMargin", NULL},
	 {(char *)"FrozenCash", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCash, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCash, (char *)"FrozenCash", NULL},
	 {(char *)"FrozenCommission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenCommission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenCommission, (char *)"FrozenCommission", NULL},
	 {(char *)"CurrMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CurrMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CurrMargin, (char *)"CurrMargin", NULL},
	 {(char *)"CashIn", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CashIn, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CashIn, (char *)"CashIn", NULL},
	 {(char *)"Commission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Commission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Commission, (char *)"Commission", NULL},
	 {(char *)"CloseProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CloseProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CloseProfit, (char *)"CloseProfit", NULL},
	 {(char *)"PositionProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PositionProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PositionProfit, (char *)"PositionProfit", NULL},
	 {(char *)"Balance", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Balance, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Balance, (char *)"Balance", NULL},
	 {(char *)"Available", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Available, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Available, (char *)"Available", NULL},
	 {(char *)"WithdrawQuota", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_WithdrawQuota, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_WithdrawQuota, (char *)"WithdrawQuota", NULL},
	 {(char *)"Reserve", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Reserve, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Reserve, (char *)"Reserve", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_TradingDay, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SettlementID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"Credit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Credit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Credit, (char *)"Credit", NULL},
	 {(char *)"Mortgage", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_Mortgage, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_Mortgage, (char *)"Mortgage", NULL},
	 {(char *)"ExchangeMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeMargin, (char *)"ExchangeMargin", NULL},
	 {(char *)"DeliveryMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_DeliveryMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_DeliveryMargin, (char *)"DeliveryMargin", NULL},
	 {(char *)"ExchangeDeliveryMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_ExchangeDeliveryMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_ExchangeDeliveryMargin, (char *)"ExchangeDeliveryMargin", NULL},
	 {(char *)"ReserveBalance", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_ReserveBalance, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_ReserveBalance, (char *)"ReserveBalance", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"PreFundMortgageIn", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageIn, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageIn, (char *)"PreFundMortgageIn", NULL},
	 {(char *)"PreFundMortgageOut", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_PreFundMortgageOut, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_PreFundMortgageOut, (char *)"PreFundMortgageOut", NULL},
	 {(char *)"FundMortgageIn", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageIn, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageIn, (char *)"FundMortgageIn", NULL},
	 {(char *)"FundMortgageOut", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageOut, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageOut, (char *)"FundMortgageOut", NULL},
	 {(char *)"FundMortgageAvailable", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FundMortgageAvailable, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FundMortgageAvailable, (char *)"FundMortgageAvailable", NULL},
	 {(char *)"MortgageableFund", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_MortgageableFund, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_MortgageableFund, (char *)"MortgageableFund", NULL},
	 {(char *)"SpecProductMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductMargin, (char *)"SpecProductMargin", NULL},
	 {(char *)"SpecProductFrozenMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenMargin, (char *)"SpecProductFrozenMargin", NULL},
	 {(char *)"SpecProductCommission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCommission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCommission, (char *)"SpecProductCommission", NULL},
	 {(char *)"SpecProductFrozenCommission", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductFrozenCommission, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductFrozenCommission, (char *)"SpecProductFrozenCommission", NULL},
	 {(char *)"SpecProductPositionProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfit, (char *)"SpecProductPositionProfit", NULL},
	 {(char *)"SpecProductCloseProfit", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductCloseProfit, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductCloseProfit, (char *)"SpecProductCloseProfit", NULL},
	 {(char *)"SpecProductPositionProfitByAlg", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductPositionProfitByAlg, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductPositionProfitByAlg, (char *)"SpecProductPositionProfitByAlg", NULL},
	 {(char *)"SpecProductExchangeMargin", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SpecProductExchangeMargin, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SpecProductExchangeMargin, (char *)"SpecProductExchangeMargin", NULL},
	 {(char *)"FrozenSwap", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_FrozenSwap, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_FrozenSwap, (char *)"FrozenSwap", NULL},
	 {(char *)"RemainSwap", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_RemainSwap, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_RemainSwap, (char *)"RemainSwap", NULL},
	 {(char *)"OptionValue", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_OptionValue, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_OptionValue, (char *)"OptionValue", NULL},
	 {(char *)"SyncDeltaSequenceNo", (getter)PyCThostFtdcSyncDeltaTradingAccountField_get_SyncDeltaSequenceNo, (setter)PyCThostFtdcSyncDeltaTradingAccountField_set_SyncDeltaSequenceNo, (char *)"SyncDeltaSequenceNo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncDeltaTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncDeltaTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcSyncDeltaTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncDeltaTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncDeltaTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcSyncDeltaTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncDeltaTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncDeltaTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncDeltaTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcSyncDeltaTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncDeltaTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcSyncDeltaTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncDeltaTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncDeltaTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncDeltaTradingAccountField", (PyObject *)&PyCThostFtdcSyncDeltaTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncDeltaTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcSyncDeltaTradingAccountFieldType);
		return -1;
    }

    return 0;
}
