
#include "PyCThostFtdcRspQueryBankAccountBySecField.h"



static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspQueryBankAccountBySecField *self = (PyCThostFtdcRspQueryBankAccountBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_init(PyCThostFtdcRspQueryBankAccountBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspQueryBankAccountBySecField_TradeCode = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspQueryBankAccountBySecField_BankID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspQueryBankAccountBySecField_BankBranchID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspQueryBankAccountBySecField_BrokerID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspQueryBankAccountBySecField_BrokerBranchID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspQueryBankAccountBySecField_TradeDate = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspQueryBankAccountBySecField_TradeTime = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspQueryBankAccountBySecField_BankSerial = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspQueryBankAccountBySecField_TradingDay = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspQueryBankAccountBySecField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspQueryBankAccountBySecField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspQueryBankAccountBySecField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pRspQueryBankAccountBySecField_CustomerName = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pRspQueryBankAccountBySecField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pRspQueryBankAccountBySecField_IdentifiedCardNo = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pRspQueryBankAccountBySecField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspQueryBankAccountBySecField_BankAccount = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspQueryBankAccountBySecField_BankPassWord = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pRspQueryBankAccountBySecField_AccountID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspQueryBankAccountBySecField_Password = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_Password_len = 0;

	//TThostFtdcFutureSerialType int
	int pRspQueryBankAccountBySecField_FutureSerial = 0;

	//TThostFtdcInstallIDType int
	int pRspQueryBankAccountBySecField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspQueryBankAccountBySecField_UserID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pRspQueryBankAccountBySecField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspQueryBankAccountBySecField_CurrencyID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pRspQueryBankAccountBySecField_Digest = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspQueryBankAccountBySecField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspQueryBankAccountBySecField_DeviceID = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspQueryBankAccountBySecField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspQueryBankAccountBySecField_BrokerIDByBank = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspQueryBankAccountBySecField_BankSecuAcc = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pRspQueryBankAccountBySecField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pRspQueryBankAccountBySecField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspQueryBankAccountBySecField_OperNo = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspQueryBankAccountBySecField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspQueryBankAccountBySecField_TID = 0;

	//TThostFtdcTradeAmountType double
	double pRspQueryBankAccountBySecField_BankUseAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pRspQueryBankAccountBySecField_BankFetchAmount = 0.0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pRspQueryBankAccountBySecField_LongCustomerName = NULL;
	Py_ssize_t pRspQueryBankAccountBySecField_LongCustomerName_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pRspQueryBankAccountBySecField_DRIdentityID = 0;

	//TThostFtdcFutureSerialType int
	int pRspQueryBankAccountBySecField_SecFutureSerial = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddy#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iidds#ii", (char **)kwlist
#endif

		, &pRspQueryBankAccountBySecField_TradeCode, &pRspQueryBankAccountBySecField_TradeCode_len
		, &pRspQueryBankAccountBySecField_BankID, &pRspQueryBankAccountBySecField_BankID_len
		, &pRspQueryBankAccountBySecField_BankBranchID, &pRspQueryBankAccountBySecField_BankBranchID_len
		, &pRspQueryBankAccountBySecField_BrokerID, &pRspQueryBankAccountBySecField_BrokerID_len
		, &pRspQueryBankAccountBySecField_BrokerBranchID, &pRspQueryBankAccountBySecField_BrokerBranchID_len
		, &pRspQueryBankAccountBySecField_TradeDate, &pRspQueryBankAccountBySecField_TradeDate_len
		, &pRspQueryBankAccountBySecField_TradeTime, &pRspQueryBankAccountBySecField_TradeTime_len
		, &pRspQueryBankAccountBySecField_BankSerial, &pRspQueryBankAccountBySecField_BankSerial_len
		, &pRspQueryBankAccountBySecField_TradingDay, &pRspQueryBankAccountBySecField_TradingDay_len
		, &pRspQueryBankAccountBySecField_PlateSerial
		, &pRspQueryBankAccountBySecField_LastFragment
		, &pRspQueryBankAccountBySecField_SessionID
		, &pRspQueryBankAccountBySecField_CustomerName, &pRspQueryBankAccountBySecField_CustomerName_len
		, &pRspQueryBankAccountBySecField_IdCardType
		, &pRspQueryBankAccountBySecField_IdentifiedCardNo, &pRspQueryBankAccountBySecField_IdentifiedCardNo_len
		, &pRspQueryBankAccountBySecField_CustType
		, &pRspQueryBankAccountBySecField_BankAccount, &pRspQueryBankAccountBySecField_BankAccount_len
		, &pRspQueryBankAccountBySecField_BankPassWord, &pRspQueryBankAccountBySecField_BankPassWord_len
		, &pRspQueryBankAccountBySecField_AccountID, &pRspQueryBankAccountBySecField_AccountID_len
		, &pRspQueryBankAccountBySecField_Password, &pRspQueryBankAccountBySecField_Password_len
		, &pRspQueryBankAccountBySecField_FutureSerial
		, &pRspQueryBankAccountBySecField_InstallID
		, &pRspQueryBankAccountBySecField_UserID, &pRspQueryBankAccountBySecField_UserID_len
		, &pRspQueryBankAccountBySecField_VerifyCertNoFlag
		, &pRspQueryBankAccountBySecField_CurrencyID, &pRspQueryBankAccountBySecField_CurrencyID_len
		, &pRspQueryBankAccountBySecField_Digest, &pRspQueryBankAccountBySecField_Digest_len
		, &pRspQueryBankAccountBySecField_BankAccType
		, &pRspQueryBankAccountBySecField_DeviceID, &pRspQueryBankAccountBySecField_DeviceID_len
		, &pRspQueryBankAccountBySecField_BankSecuAccType
		, &pRspQueryBankAccountBySecField_BrokerIDByBank, &pRspQueryBankAccountBySecField_BrokerIDByBank_len
		, &pRspQueryBankAccountBySecField_BankSecuAcc, &pRspQueryBankAccountBySecField_BankSecuAcc_len
		, &pRspQueryBankAccountBySecField_BankPwdFlag
		, &pRspQueryBankAccountBySecField_SecuPwdFlag
		, &pRspQueryBankAccountBySecField_OperNo, &pRspQueryBankAccountBySecField_OperNo_len
		, &pRspQueryBankAccountBySecField_RequestID
		, &pRspQueryBankAccountBySecField_TID
		, &pRspQueryBankAccountBySecField_BankUseAmount
		, &pRspQueryBankAccountBySecField_BankFetchAmount
		, &pRspQueryBankAccountBySecField_LongCustomerName, &pRspQueryBankAccountBySecField_LongCustomerName_len
		, &pRspQueryBankAccountBySecField_DRIdentityID
		, &pRspQueryBankAccountBySecField_SecFutureSerial


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspQueryBankAccountBySecField_TradeCode != NULL) {
		if(pRspQueryBankAccountBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspQueryBankAccountBySecField_TradeCode, sizeof(self->data.TradeCode) );
		pRspQueryBankAccountBySecField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspQueryBankAccountBySecField_BankID != NULL) {
		if(pRspQueryBankAccountBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspQueryBankAccountBySecField_BankID, sizeof(self->data.BankID) );
		pRspQueryBankAccountBySecField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspQueryBankAccountBySecField_BankBranchID != NULL) {
		if(pRspQueryBankAccountBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspQueryBankAccountBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspQueryBankAccountBySecField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspQueryBankAccountBySecField_BrokerID != NULL) {
		if(pRspQueryBankAccountBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspQueryBankAccountBySecField_BrokerID, sizeof(self->data.BrokerID) );
		pRspQueryBankAccountBySecField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspQueryBankAccountBySecField_BrokerBranchID != NULL) {
		if(pRspQueryBankAccountBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspQueryBankAccountBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspQueryBankAccountBySecField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspQueryBankAccountBySecField_TradeDate != NULL) {
		if(pRspQueryBankAccountBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspQueryBankAccountBySecField_TradeDate, sizeof(self->data.TradeDate) );
		pRspQueryBankAccountBySecField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspQueryBankAccountBySecField_TradeTime != NULL) {
		if(pRspQueryBankAccountBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspQueryBankAccountBySecField_TradeTime, sizeof(self->data.TradeTime) );
		pRspQueryBankAccountBySecField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspQueryBankAccountBySecField_BankSerial != NULL) {
		if(pRspQueryBankAccountBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspQueryBankAccountBySecField_BankSerial, sizeof(self->data.BankSerial) );
		pRspQueryBankAccountBySecField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspQueryBankAccountBySecField_TradingDay != NULL) {
		if(pRspQueryBankAccountBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspQueryBankAccountBySecField_TradingDay, sizeof(self->data.TradingDay) );
		pRspQueryBankAccountBySecField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspQueryBankAccountBySecField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspQueryBankAccountBySecField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspQueryBankAccountBySecField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pRspQueryBankAccountBySecField_CustomerName != NULL) {
		if(pRspQueryBankAccountBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pRspQueryBankAccountBySecField_CustomerName, sizeof(self->data.CustomerName) );
		pRspQueryBankAccountBySecField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pRspQueryBankAccountBySecField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pRspQueryBankAccountBySecField_IdentifiedCardNo != NULL) {
		if(pRspQueryBankAccountBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pRspQueryBankAccountBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pRspQueryBankAccountBySecField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pRspQueryBankAccountBySecField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pRspQueryBankAccountBySecField_BankAccount != NULL) {
		if(pRspQueryBankAccountBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pRspQueryBankAccountBySecField_BankAccount, sizeof(self->data.BankAccount) );
		pRspQueryBankAccountBySecField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspQueryBankAccountBySecField_BankPassWord != NULL) {
		if(pRspQueryBankAccountBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pRspQueryBankAccountBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
		pRspQueryBankAccountBySecField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pRspQueryBankAccountBySecField_AccountID != NULL) {
		if(pRspQueryBankAccountBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pRspQueryBankAccountBySecField_AccountID, sizeof(self->data.AccountID) );
		pRspQueryBankAccountBySecField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspQueryBankAccountBySecField_Password != NULL) {
		if(pRspQueryBankAccountBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pRspQueryBankAccountBySecField_Password, sizeof(self->data.Password) );
		pRspQueryBankAccountBySecField_Password = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pRspQueryBankAccountBySecField_FutureSerial;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspQueryBankAccountBySecField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pRspQueryBankAccountBySecField_UserID != NULL) {
		if(pRspQueryBankAccountBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspQueryBankAccountBySecField_UserID, sizeof(self->data.UserID) );
		pRspQueryBankAccountBySecField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pRspQueryBankAccountBySecField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pRspQueryBankAccountBySecField_CurrencyID != NULL) {
		if(pRspQueryBankAccountBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspQueryBankAccountBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspQueryBankAccountBySecField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pRspQueryBankAccountBySecField_Digest != NULL) {
		if(pRspQueryBankAccountBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspQueryBankAccountBySecField_Digest, sizeof(self->data.Digest) );
		pRspQueryBankAccountBySecField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pRspQueryBankAccountBySecField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pRspQueryBankAccountBySecField_DeviceID != NULL) {
		if(pRspQueryBankAccountBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspQueryBankAccountBySecField_DeviceID, sizeof(self->data.DeviceID) );
		pRspQueryBankAccountBySecField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pRspQueryBankAccountBySecField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspQueryBankAccountBySecField_BrokerIDByBank != NULL) {
		if(pRspQueryBankAccountBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspQueryBankAccountBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspQueryBankAccountBySecField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pRspQueryBankAccountBySecField_BankSecuAcc != NULL) {
		if(pRspQueryBankAccountBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pRspQueryBankAccountBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pRspQueryBankAccountBySecField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pRspQueryBankAccountBySecField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pRspQueryBankAccountBySecField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pRspQueryBankAccountBySecField_OperNo != NULL) {
		if(pRspQueryBankAccountBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspQueryBankAccountBySecField_OperNo, sizeof(self->data.OperNo) );
		pRspQueryBankAccountBySecField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspQueryBankAccountBySecField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspQueryBankAccountBySecField_TID;

	//TThostFtdcTradeAmountType double
	self->data.BankUseAmount = pRspQueryBankAccountBySecField_BankUseAmount;
	//TThostFtdcTradeAmountType double
	self->data.BankFetchAmount = pRspQueryBankAccountBySecField_BankFetchAmount;
	//TThostFtdcLongIndividualNameType char[161]
	if(pRspQueryBankAccountBySecField_LongCustomerName != NULL) {
		if(pRspQueryBankAccountBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pRspQueryBankAccountBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pRspQueryBankAccountBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pRspQueryBankAccountBySecField_LongCustomerName = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pRspQueryBankAccountBySecField_DRIdentityID;

	//TThostFtdcFutureSerialType int
	self->data.SecFutureSerial = pRspQueryBankAccountBySecField_SecFutureSerial;



    return 0;
}

static void PyCThostFtdcRspQueryBankAccountBySecField_dealloc(PyCThostFtdcRspQueryBankAccountBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_repr(PyCThostFtdcRspQueryBankAccountBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:d,s:d,s:s,s:i,s:i}"
#endif

		, "TradeCode", self->data.TradeCode 
		, "BankID", self->data.BankID 
		, "BankBranchID", self->data.BankBranchID 
		, "BrokerID", self->data.BrokerID 
		, "BrokerBranchID", self->data.BrokerBranchID 
		, "TradeDate", self->data.TradeDate 
		, "TradeTime", self->data.TradeTime 
		, "BankSerial", self->data.BankSerial 
		, "TradingDay", self->data.TradingDay 
		, "PlateSerial", self->data.PlateSerial
		, "LastFragment", self->data.LastFragment
		, "SessionID", self->data.SessionID
		, "CustomerName", self->data.CustomerName 
		, "IdCardType", self->data.IdCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "CustType", self->data.CustType
		, "BankAccount", self->data.BankAccount 
		, "BankPassWord", self->data.BankPassWord 
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "FutureSerial", self->data.FutureSerial
		, "InstallID", self->data.InstallID
		, "UserID", self->data.UserID 
		, "VerifyCertNoFlag", self->data.VerifyCertNoFlag
		, "CurrencyID", self->data.CurrencyID 
		, "Digest", self->data.Digest 
		, "BankAccType", self->data.BankAccType
		, "DeviceID", self->data.DeviceID 
		, "BankSecuAccType", self->data.BankSecuAccType
		, "BrokerIDByBank", self->data.BrokerIDByBank 
		, "BankSecuAcc", self->data.BankSecuAcc 
		, "BankPwdFlag", self->data.BankPwdFlag
		, "SecuPwdFlag", self->data.SecuPwdFlag
		, "OperNo", self->data.OperNo 
		, "RequestID", self->data.RequestID
		, "TID", self->data.TID
		, "BankUseAmount", self->data.BankUseAmount
		, "BankFetchAmount", self->data.BankFetchAmount
		, "LongCustomerName", self->data.LongCustomerName 
		, "DRIdentityID", self->data.DRIdentityID
		, "SecFutureSerial", self->data.SecFutureSerial


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryBankAccountBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_TradeCode(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankBranchID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BrokerID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BrokerBranchID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_TradeDate(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_TradeTime(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankSerial(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_TradingDay(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_PlateSerial(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_LastFragment(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_SessionID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_CustomerName(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_IdCardType(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_IdentifiedCardNo(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_CustType(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankAccount(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankPassWord(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_AccountID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_Password(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_FutureSerial(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_InstallID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_UserID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_VerifyCertNoFlag(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_CurrencyID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_Digest(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankAccType(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_DeviceID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankSecuAccType(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BrokerIDByBank(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankSecuAcc(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankPwdFlag(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_SecuPwdFlag(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_OperNo(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_RequestID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_TID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankUseAmount(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankUseAmount);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_BankFetchAmount(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankFetchAmount);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_LongCustomerName(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_DRIdentityID(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryBankAccountBySecField_get_SecFutureSerial(PyCThostFtdcRspQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SecFutureSerial);
#else 
	return PyInt_FromLong(self->data.SecFutureSerial);
#endif 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_TradeCode(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
		PyErr_SetString(PyExc_ValueError, "TradeCode must be less than 7 bytes");
		return -1;
	}
	strncpy(self->data.TradeCode, buf, sizeof(self->data.TradeCode));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
		PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankBranchID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankBranchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
		PyErr_SetString(PyExc_ValueError, "BankBranchID must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.BankBranchID, buf, sizeof(self->data.BankBranchID));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BrokerID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BrokerBranchID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerBranchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
		PyErr_SetString(PyExc_ValueError, "BrokerBranchID must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.BrokerBranchID, buf, sizeof(self->data.BrokerBranchID));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_TradeDate(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
		PyErr_SetString(PyExc_ValueError, "TradeDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeDate, buf, sizeof(self->data.TradeDate));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_TradeTime(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
		PyErr_SetString(PyExc_ValueError, "TradeTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeTime, buf, sizeof(self->data.TradeTime));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankSerial(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankSerial Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
		PyErr_SetString(PyExc_ValueError, "BankSerial must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.BankSerial, buf, sizeof(self->data.BankSerial));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_TradingDay(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryBankAccountBySecField_set_PlateSerial(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "PlateSerial Expected int"); 
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
    self->data.PlateSerial = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_LastFragment(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastFragment Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastFragment)) {
		PyErr_SetString(PyExc_ValueError, "LastFragment must be less than 1 bytes");
		return -1;
	}
	self->data.LastFragment = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_SessionID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int"); 
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
    self->data.SessionID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_CustomerName(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
		PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.CustomerName, buf, sizeof(self->data.CustomerName));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_IdCardType(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IdCardType)) {
		PyErr_SetString(PyExc_ValueError, "IdCardType must be less than 1 bytes");
		return -1;
	}
	self->data.IdCardType = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_IdentifiedCardNo(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
		PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.IdentifiedCardNo, buf, sizeof(self->data.IdentifiedCardNo));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_CustType(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CustType)) {
		PyErr_SetString(PyExc_ValueError, "CustType must be less than 1 bytes");
		return -1;
	}
	self->data.CustType = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankAccount(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
		PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.BankAccount, buf, sizeof(self->data.BankAccount));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankPassWord(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankPassWord Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
		PyErr_SetString(PyExc_ValueError, "BankPassWord must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.BankPassWord, buf, sizeof(self->data.BankPassWord));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_AccountID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryBankAccountBySecField_set_Password(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Password)) {
		PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Password, buf, sizeof(self->data.Password));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_FutureSerial(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected int"); 
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
    self->data.FutureSerial = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_InstallID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstallID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "InstallID Expected int"); 
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
    self->data.InstallID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_UserID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
		PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_VerifyCertNoFlag(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "VerifyCertNoFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.VerifyCertNoFlag)) {
		PyErr_SetString(PyExc_ValueError, "VerifyCertNoFlag must be less than 1 bytes");
		return -1;
	}
	self->data.VerifyCertNoFlag = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_CurrencyID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryBankAccountBySecField_set_Digest(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Digest Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Digest)) {
		PyErr_SetString(PyExc_ValueError, "Digest must be less than 36 bytes");
		return -1;
	}
	strncpy(self->data.Digest, buf, sizeof(self->data.Digest));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankAccType(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankAccType)) {
		PyErr_SetString(PyExc_ValueError, "BankAccType must be less than 1 bytes");
		return -1;
	}
	self->data.BankAccType = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_DeviceID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "DeviceID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
		PyErr_SetString(PyExc_ValueError, "DeviceID must be less than 3 bytes");
		return -1;
	}
	strncpy(self->data.DeviceID, buf, sizeof(self->data.DeviceID));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankSecuAccType(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankSecuAccType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankSecuAccType)) {
		PyErr_SetString(PyExc_ValueError, "BankSecuAccType must be less than 1 bytes");
		return -1;
	}
	self->data.BankSecuAccType = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BrokerIDByBank(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerIDByBank Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
		PyErr_SetString(PyExc_ValueError, "BrokerIDByBank must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.BrokerIDByBank, buf, sizeof(self->data.BrokerIDByBank));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankSecuAcc(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankSecuAcc Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
		PyErr_SetString(PyExc_ValueError, "BankSecuAcc must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.BankSecuAcc, buf, sizeof(self->data.BankSecuAcc));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankPwdFlag(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankPwdFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankPwdFlag)) {
		PyErr_SetString(PyExc_ValueError, "BankPwdFlag must be less than 1 bytes");
		return -1;
	}
	self->data.BankPwdFlag = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_SecuPwdFlag(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SecuPwdFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SecuPwdFlag)) {
		PyErr_SetString(PyExc_ValueError, "SecuPwdFlag must be less than 1 bytes");
		return -1;
	}
	self->data.SecuPwdFlag = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_OperNo(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OperNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OperNo)) {
		PyErr_SetString(PyExc_ValueError, "OperNo must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.OperNo, buf, sizeof(self->data.OperNo));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_RequestID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RequestID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "RequestID Expected int"); 
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
    self->data.RequestID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_TID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "TID Expected int"); 
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
    self->data.TID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankUseAmount(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankUseAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BankUseAmount = buf;
    return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_BankFetchAmount(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankFetchAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BankFetchAmount = buf;
    return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_LongCustomerName(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
		PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.LongCustomerName, buf, sizeof(self->data.LongCustomerName));
	return 0;
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_DRIdentityID(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int"); 
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
    self->data.DRIdentityID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryBankAccountBySecField_set_SecFutureSerial(PyCThostFtdcRspQueryBankAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecFutureSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SecFutureSerial Expected int"); 
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
    self->data.SecFutureSerial = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcRspQueryBankAccountBySecField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_TradeCode, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankBranchID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BrokerID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BrokerBranchID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_TradeDate, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_TradeTime, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankSerial, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_TradingDay, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_PlateSerial, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_LastFragment, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_SessionID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_CustomerName, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_IdCardType, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_CustType, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankAccount, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankPassWord, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_AccountID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_Password, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_Password, (char *)"Password", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_FutureSerial, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_InstallID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_UserID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_CurrencyID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_Digest, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankAccType, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_DeviceID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankSecuAccType, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankSecuAcc, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankPwdFlag, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_OperNo, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_RequestID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_TID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_TID, (char *)"TID", NULL},
	 {(char *)"BankUseAmount", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankUseAmount, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankUseAmount, (char *)"BankUseAmount", NULL},
	 {(char *)"BankFetchAmount", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_BankFetchAmount, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_BankFetchAmount, (char *)"BankFetchAmount", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_LongCustomerName, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_DRIdentityID, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"SecFutureSerial", (getter)PyCThostFtdcRspQueryBankAccountBySecField_get_SecFutureSerial, (setter)PyCThostFtdcRspQueryBankAccountBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspQueryBankAccountBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspQueryBankAccountBySecField",	/* tp_name */
	sizeof(PyCThostFtdcRspQueryBankAccountBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspQueryBankAccountBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspQueryBankAccountBySecField_repr,   /* tp_repr */
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
	"CThostFtdcRspQueryBankAccountBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspQueryBankAccountBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspQueryBankAccountBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspQueryBankAccountBySecField_new,       /* tp_new */
};

int PyCThostFtdcRspQueryBankAccountBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspQueryBankAccountBySecField  */
	if (PyType_Ready(&PyCThostFtdcRspQueryBankAccountBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspQueryBankAccountBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspQueryBankAccountBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspQueryBankAccountBySecField", (PyObject *)&PyCThostFtdcRspQueryBankAccountBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryBankAccountBySecField to module");
        Py_DECREF(&PyCThostFtdcRspQueryBankAccountBySecFieldType);
		return -1;
    }

    return 0;
}
