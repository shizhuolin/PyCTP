
#include "PyCThostFtdcReqQueryBankAccountBySecField.h"



static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqQueryBankAccountBySecField *self = (PyCThostFtdcReqQueryBankAccountBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqQueryBankAccountBySecField_init(PyCThostFtdcReqQueryBankAccountBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqQueryBankAccountBySecField_TradeCode = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqQueryBankAccountBySecField_BankID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqQueryBankAccountBySecField_BankBranchID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqQueryBankAccountBySecField_BrokerID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqQueryBankAccountBySecField_BrokerBranchID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqQueryBankAccountBySecField_TradeDate = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqQueryBankAccountBySecField_TradeTime = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqQueryBankAccountBySecField_BankSerial = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqQueryBankAccountBySecField_TradingDay = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqQueryBankAccountBySecField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqQueryBankAccountBySecField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqQueryBankAccountBySecField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqQueryBankAccountBySecField_CustomerName = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqQueryBankAccountBySecField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqQueryBankAccountBySecField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pReqQueryBankAccountBySecField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqQueryBankAccountBySecField_BankAccount = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqQueryBankAccountBySecField_BankPassWord = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqQueryBankAccountBySecField_AccountID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqQueryBankAccountBySecField_Password = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_Password_len = 0;

	//TThostFtdcFutureSerialType int
	int pReqQueryBankAccountBySecField_FutureSerial = 0;

	//TThostFtdcInstallIDType int
	int pReqQueryBankAccountBySecField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqQueryBankAccountBySecField_UserID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqQueryBankAccountBySecField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqQueryBankAccountBySecField_CurrencyID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqQueryBankAccountBySecField_Digest = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqQueryBankAccountBySecField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqQueryBankAccountBySecField_DeviceID = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqQueryBankAccountBySecField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqQueryBankAccountBySecField_BrokerIDByBank = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqQueryBankAccountBySecField_BankSecuAcc = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqQueryBankAccountBySecField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqQueryBankAccountBySecField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqQueryBankAccountBySecField_OperNo = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pReqQueryBankAccountBySecField_RequestID = 0;

	//TThostFtdcTIDType int
	int pReqQueryBankAccountBySecField_TID = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqQueryBankAccountBySecField_LongCustomerName = NULL;
	Py_ssize_t pReqQueryBankAccountBySecField_LongCustomerName_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pReqQueryBankAccountBySecField_DRIdentityID = 0;

	//TThostFtdcFutureSerialType int
	int pReqQueryBankAccountBySecField_SecFutureSerial = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiy#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iis#ii", (char **)kwlist
#endif

		, &pReqQueryBankAccountBySecField_TradeCode, &pReqQueryBankAccountBySecField_TradeCode_len
		, &pReqQueryBankAccountBySecField_BankID, &pReqQueryBankAccountBySecField_BankID_len
		, &pReqQueryBankAccountBySecField_BankBranchID, &pReqQueryBankAccountBySecField_BankBranchID_len
		, &pReqQueryBankAccountBySecField_BrokerID, &pReqQueryBankAccountBySecField_BrokerID_len
		, &pReqQueryBankAccountBySecField_BrokerBranchID, &pReqQueryBankAccountBySecField_BrokerBranchID_len
		, &pReqQueryBankAccountBySecField_TradeDate, &pReqQueryBankAccountBySecField_TradeDate_len
		, &pReqQueryBankAccountBySecField_TradeTime, &pReqQueryBankAccountBySecField_TradeTime_len
		, &pReqQueryBankAccountBySecField_BankSerial, &pReqQueryBankAccountBySecField_BankSerial_len
		, &pReqQueryBankAccountBySecField_TradingDay, &pReqQueryBankAccountBySecField_TradingDay_len
		, &pReqQueryBankAccountBySecField_PlateSerial
		, &pReqQueryBankAccountBySecField_LastFragment
		, &pReqQueryBankAccountBySecField_SessionID
		, &pReqQueryBankAccountBySecField_CustomerName, &pReqQueryBankAccountBySecField_CustomerName_len
		, &pReqQueryBankAccountBySecField_IdCardType
		, &pReqQueryBankAccountBySecField_IdentifiedCardNo, &pReqQueryBankAccountBySecField_IdentifiedCardNo_len
		, &pReqQueryBankAccountBySecField_CustType
		, &pReqQueryBankAccountBySecField_BankAccount, &pReqQueryBankAccountBySecField_BankAccount_len
		, &pReqQueryBankAccountBySecField_BankPassWord, &pReqQueryBankAccountBySecField_BankPassWord_len
		, &pReqQueryBankAccountBySecField_AccountID, &pReqQueryBankAccountBySecField_AccountID_len
		, &pReqQueryBankAccountBySecField_Password, &pReqQueryBankAccountBySecField_Password_len
		, &pReqQueryBankAccountBySecField_FutureSerial
		, &pReqQueryBankAccountBySecField_InstallID
		, &pReqQueryBankAccountBySecField_UserID, &pReqQueryBankAccountBySecField_UserID_len
		, &pReqQueryBankAccountBySecField_VerifyCertNoFlag
		, &pReqQueryBankAccountBySecField_CurrencyID, &pReqQueryBankAccountBySecField_CurrencyID_len
		, &pReqQueryBankAccountBySecField_Digest, &pReqQueryBankAccountBySecField_Digest_len
		, &pReqQueryBankAccountBySecField_BankAccType
		, &pReqQueryBankAccountBySecField_DeviceID, &pReqQueryBankAccountBySecField_DeviceID_len
		, &pReqQueryBankAccountBySecField_BankSecuAccType
		, &pReqQueryBankAccountBySecField_BrokerIDByBank, &pReqQueryBankAccountBySecField_BrokerIDByBank_len
		, &pReqQueryBankAccountBySecField_BankSecuAcc, &pReqQueryBankAccountBySecField_BankSecuAcc_len
		, &pReqQueryBankAccountBySecField_BankPwdFlag
		, &pReqQueryBankAccountBySecField_SecuPwdFlag
		, &pReqQueryBankAccountBySecField_OperNo, &pReqQueryBankAccountBySecField_OperNo_len
		, &pReqQueryBankAccountBySecField_RequestID
		, &pReqQueryBankAccountBySecField_TID
		, &pReqQueryBankAccountBySecField_LongCustomerName, &pReqQueryBankAccountBySecField_LongCustomerName_len
		, &pReqQueryBankAccountBySecField_DRIdentityID
		, &pReqQueryBankAccountBySecField_SecFutureSerial


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqQueryBankAccountBySecField_TradeCode != NULL) {
		if(pReqQueryBankAccountBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqQueryBankAccountBySecField_TradeCode, sizeof(self->data.TradeCode) );
		pReqQueryBankAccountBySecField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqQueryBankAccountBySecField_BankID != NULL) {
		if(pReqQueryBankAccountBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqQueryBankAccountBySecField_BankID, sizeof(self->data.BankID) );
		pReqQueryBankAccountBySecField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqQueryBankAccountBySecField_BankBranchID != NULL) {
		if(pReqQueryBankAccountBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqQueryBankAccountBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqQueryBankAccountBySecField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqQueryBankAccountBySecField_BrokerID != NULL) {
		if(pReqQueryBankAccountBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqQueryBankAccountBySecField_BrokerID, sizeof(self->data.BrokerID) );
		pReqQueryBankAccountBySecField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqQueryBankAccountBySecField_BrokerBranchID != NULL) {
		if(pReqQueryBankAccountBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqQueryBankAccountBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqQueryBankAccountBySecField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqQueryBankAccountBySecField_TradeDate != NULL) {
		if(pReqQueryBankAccountBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqQueryBankAccountBySecField_TradeDate, sizeof(self->data.TradeDate) );
		pReqQueryBankAccountBySecField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqQueryBankAccountBySecField_TradeTime != NULL) {
		if(pReqQueryBankAccountBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqQueryBankAccountBySecField_TradeTime, sizeof(self->data.TradeTime) );
		pReqQueryBankAccountBySecField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqQueryBankAccountBySecField_BankSerial != NULL) {
		if(pReqQueryBankAccountBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqQueryBankAccountBySecField_BankSerial, sizeof(self->data.BankSerial) );
		pReqQueryBankAccountBySecField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqQueryBankAccountBySecField_TradingDay != NULL) {
		if(pReqQueryBankAccountBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqQueryBankAccountBySecField_TradingDay, sizeof(self->data.TradingDay) );
		pReqQueryBankAccountBySecField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqQueryBankAccountBySecField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqQueryBankAccountBySecField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqQueryBankAccountBySecField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqQueryBankAccountBySecField_CustomerName != NULL) {
		if(pReqQueryBankAccountBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqQueryBankAccountBySecField_CustomerName, sizeof(self->data.CustomerName) );
		pReqQueryBankAccountBySecField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqQueryBankAccountBySecField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqQueryBankAccountBySecField_IdentifiedCardNo != NULL) {
		if(pReqQueryBankAccountBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqQueryBankAccountBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqQueryBankAccountBySecField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqQueryBankAccountBySecField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pReqQueryBankAccountBySecField_BankAccount != NULL) {
		if(pReqQueryBankAccountBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqQueryBankAccountBySecField_BankAccount, sizeof(self->data.BankAccount) );
		pReqQueryBankAccountBySecField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqQueryBankAccountBySecField_BankPassWord != NULL) {
		if(pReqQueryBankAccountBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqQueryBankAccountBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqQueryBankAccountBySecField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqQueryBankAccountBySecField_AccountID != NULL) {
		if(pReqQueryBankAccountBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqQueryBankAccountBySecField_AccountID, sizeof(self->data.AccountID) );
		pReqQueryBankAccountBySecField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqQueryBankAccountBySecField_Password != NULL) {
		if(pReqQueryBankAccountBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqQueryBankAccountBySecField_Password, sizeof(self->data.Password) );
		pReqQueryBankAccountBySecField_Password = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pReqQueryBankAccountBySecField_FutureSerial;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqQueryBankAccountBySecField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pReqQueryBankAccountBySecField_UserID != NULL) {
		if(pReqQueryBankAccountBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqQueryBankAccountBySecField_UserID, sizeof(self->data.UserID) );
		pReqQueryBankAccountBySecField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqQueryBankAccountBySecField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqQueryBankAccountBySecField_CurrencyID != NULL) {
		if(pReqQueryBankAccountBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqQueryBankAccountBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqQueryBankAccountBySecField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReqQueryBankAccountBySecField_Digest != NULL) {
		if(pReqQueryBankAccountBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqQueryBankAccountBySecField_Digest, sizeof(self->data.Digest) );
		pReqQueryBankAccountBySecField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqQueryBankAccountBySecField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pReqQueryBankAccountBySecField_DeviceID != NULL) {
		if(pReqQueryBankAccountBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqQueryBankAccountBySecField_DeviceID, sizeof(self->data.DeviceID) );
		pReqQueryBankAccountBySecField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pReqQueryBankAccountBySecField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqQueryBankAccountBySecField_BrokerIDByBank != NULL) {
		if(pReqQueryBankAccountBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqQueryBankAccountBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqQueryBankAccountBySecField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqQueryBankAccountBySecField_BankSecuAcc != NULL) {
		if(pReqQueryBankAccountBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pReqQueryBankAccountBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pReqQueryBankAccountBySecField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqQueryBankAccountBySecField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqQueryBankAccountBySecField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pReqQueryBankAccountBySecField_OperNo != NULL) {
		if(pReqQueryBankAccountBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqQueryBankAccountBySecField_OperNo, sizeof(self->data.OperNo) );
		pReqQueryBankAccountBySecField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pReqQueryBankAccountBySecField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pReqQueryBankAccountBySecField_TID;

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqQueryBankAccountBySecField_LongCustomerName != NULL) {
		if(pReqQueryBankAccountBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqQueryBankAccountBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqQueryBankAccountBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqQueryBankAccountBySecField_LongCustomerName = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pReqQueryBankAccountBySecField_DRIdentityID;

	//TThostFtdcFutureSerialType int
	self->data.SecFutureSerial = pReqQueryBankAccountBySecField_SecFutureSerial;



    return 0;
}

static void PyCThostFtdcReqQueryBankAccountBySecField_dealloc(PyCThostFtdcReqQueryBankAccountBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_repr(PyCThostFtdcReqQueryBankAccountBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:s,s:i,s:i}"
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
		, "LongCustomerName", self->data.LongCustomerName 
		, "DRIdentityID", self->data.DRIdentityID
		, "SecFutureSerial", self->data.SecFutureSerial


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryBankAccountBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradeCode(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankBranchID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerBranchID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradeDate(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradeTime(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TradingDay(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_PlateSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_LastFragment(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_SessionID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_CustomerName(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_IdCardType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_IdentifiedCardNo(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_CustType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccount(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankPassWord(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_AccountID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_Password(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_FutureSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_InstallID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_UserID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_VerifyCertNoFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_CurrencyID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_Digest(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_DeviceID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAccType(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerIDByBank(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAcc(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_BankPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_SecuPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_OperNo(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_RequestID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_TID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_LongCustomerName(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_DRIdentityID(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryBankAccountBySecField_get_SecFutureSerial(PyCThostFtdcReqQueryBankAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SecFutureSerial);
#else 
	return PyInt_FromLong(self->data.SecFutureSerial);
#endif 
}

static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradeCode(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankBranchID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerBranchID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradeDate(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradeTime(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankSerial(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_TradingDay(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_PlateSerial(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_LastFragment(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_SessionID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_CustomerName(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_IdCardType(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_IdentifiedCardNo(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_CustType(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccount(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankPassWord(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_AccountID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_Password(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_FutureSerial(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_InstallID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_UserID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_VerifyCertNoFlag(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_CurrencyID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_Digest(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccType(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_DeviceID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAccType(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerIDByBank(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAcc(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_BankPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_SecuPwdFlag(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_OperNo(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_RequestID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_TID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_LongCustomerName(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_DRIdentityID(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryBankAccountBySecField_set_SecFutureSerial(PyCThostFtdcReqQueryBankAccountBySecField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqQueryBankAccountBySecField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradeCode, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankBranchID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerBranchID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradeDate, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradeTime, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TradingDay, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_PlateSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_LastFragment, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_SessionID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_CustomerName, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_IdCardType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_CustType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccount, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankPassWord, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_AccountID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_Password, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_Password, (char *)"Password", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_FutureSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_InstallID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_UserID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_CurrencyID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_Digest, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankAccType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_DeviceID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAccType, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankSecuAcc, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_BankPwdFlag, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_OperNo, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_RequestID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_TID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_TID, (char *)"TID", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_LongCustomerName, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_DRIdentityID, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"SecFutureSerial", (getter)PyCThostFtdcReqQueryBankAccountBySecField_get_SecFutureSerial, (setter)PyCThostFtdcReqQueryBankAccountBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqQueryBankAccountBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqQueryBankAccountBySecField",	/* tp_name */
	sizeof(PyCThostFtdcReqQueryBankAccountBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqQueryBankAccountBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqQueryBankAccountBySecField_repr,   /* tp_repr */
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
	"CThostFtdcReqQueryBankAccountBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqQueryBankAccountBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqQueryBankAccountBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqQueryBankAccountBySecField_new,       /* tp_new */
};

int PyCThostFtdcReqQueryBankAccountBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqQueryBankAccountBySecField  */
	if (PyType_Ready(&PyCThostFtdcReqQueryBankAccountBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqQueryBankAccountBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqQueryBankAccountBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqQueryBankAccountBySecField", (PyObject *)&PyCThostFtdcReqQueryBankAccountBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryBankAccountBySecField to module");
        Py_DECREF(&PyCThostFtdcReqQueryBankAccountBySecFieldType);
		return -1;
    }

    return 0;
}
