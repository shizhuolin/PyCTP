
#include "PyCThostFtdcNotifyQueryFutureAccountBySecField.h"



static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifyQueryFutureAccountBySecField *self = (PyCThostFtdcNotifyQueryFutureAccountBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_init(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "ErrorID", "ErrorMsg", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pNotifyQueryFutureAccountBySecField_TradeCode = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pNotifyQueryFutureAccountBySecField_BankID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pNotifyQueryFutureAccountBySecField_BankBranchID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pNotifyQueryFutureAccountBySecField_BrokerID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pNotifyQueryFutureAccountBySecField_BrokerBranchID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyQueryFutureAccountBySecField_TradeDate = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pNotifyQueryFutureAccountBySecField_TradeTime = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pNotifyQueryFutureAccountBySecField_BankSerial = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyQueryFutureAccountBySecField_TradingDay = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pNotifyQueryFutureAccountBySecField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pNotifyQueryFutureAccountBySecField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pNotifyQueryFutureAccountBySecField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pNotifyQueryFutureAccountBySecField_CustomerName = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pNotifyQueryFutureAccountBySecField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pNotifyQueryFutureAccountBySecField_IdentifiedCardNo = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pNotifyQueryFutureAccountBySecField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pNotifyQueryFutureAccountBySecField_BankAccount = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pNotifyQueryFutureAccountBySecField_BankPassWord = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pNotifyQueryFutureAccountBySecField_AccountID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pNotifyQueryFutureAccountBySecField_Password = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_Password_len = 0;

	//TThostFtdcFutureSerialType int
	int pNotifyQueryFutureAccountBySecField_FutureSerial = 0;

	//TThostFtdcInstallIDType int
	int pNotifyQueryFutureAccountBySecField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pNotifyQueryFutureAccountBySecField_UserID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pNotifyQueryFutureAccountBySecField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pNotifyQueryFutureAccountBySecField_CurrencyID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pNotifyQueryFutureAccountBySecField_Digest = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pNotifyQueryFutureAccountBySecField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pNotifyQueryFutureAccountBySecField_DeviceID = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pNotifyQueryFutureAccountBySecField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pNotifyQueryFutureAccountBySecField_BrokerIDByBank = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pNotifyQueryFutureAccountBySecField_BankSecuAcc = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pNotifyQueryFutureAccountBySecField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pNotifyQueryFutureAccountBySecField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pNotifyQueryFutureAccountBySecField_OperNo = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pNotifyQueryFutureAccountBySecField_RequestID = 0;

	//TThostFtdcTIDType int
	int pNotifyQueryFutureAccountBySecField_TID = 0;

	//TThostFtdcTradeAmountType double
	double pNotifyQueryFutureAccountBySecField_BankUseAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pNotifyQueryFutureAccountBySecField_BankFetchAmount = 0.0;

	//TThostFtdcErrorIDType int
	int pNotifyQueryFutureAccountBySecField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pNotifyQueryFutureAccountBySecField_ErrorMsg = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pNotifyQueryFutureAccountBySecField_LongCustomerName = NULL;
	Py_ssize_t pNotifyQueryFutureAccountBySecField_LongCustomerName_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pNotifyQueryFutureAccountBySecField_DRIdentityID = 0;

	//TThostFtdcFutureSerialType int
	int pNotifyQueryFutureAccountBySecField_SecFutureSerial = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddiy#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iiddis#s#ii", (char **)kwlist
#endif

		, &pNotifyQueryFutureAccountBySecField_TradeCode, &pNotifyQueryFutureAccountBySecField_TradeCode_len
		, &pNotifyQueryFutureAccountBySecField_BankID, &pNotifyQueryFutureAccountBySecField_BankID_len
		, &pNotifyQueryFutureAccountBySecField_BankBranchID, &pNotifyQueryFutureAccountBySecField_BankBranchID_len
		, &pNotifyQueryFutureAccountBySecField_BrokerID, &pNotifyQueryFutureAccountBySecField_BrokerID_len
		, &pNotifyQueryFutureAccountBySecField_BrokerBranchID, &pNotifyQueryFutureAccountBySecField_BrokerBranchID_len
		, &pNotifyQueryFutureAccountBySecField_TradeDate, &pNotifyQueryFutureAccountBySecField_TradeDate_len
		, &pNotifyQueryFutureAccountBySecField_TradeTime, &pNotifyQueryFutureAccountBySecField_TradeTime_len
		, &pNotifyQueryFutureAccountBySecField_BankSerial, &pNotifyQueryFutureAccountBySecField_BankSerial_len
		, &pNotifyQueryFutureAccountBySecField_TradingDay, &pNotifyQueryFutureAccountBySecField_TradingDay_len
		, &pNotifyQueryFutureAccountBySecField_PlateSerial
		, &pNotifyQueryFutureAccountBySecField_LastFragment
		, &pNotifyQueryFutureAccountBySecField_SessionID
		, &pNotifyQueryFutureAccountBySecField_CustomerName, &pNotifyQueryFutureAccountBySecField_CustomerName_len
		, &pNotifyQueryFutureAccountBySecField_IdCardType
		, &pNotifyQueryFutureAccountBySecField_IdentifiedCardNo, &pNotifyQueryFutureAccountBySecField_IdentifiedCardNo_len
		, &pNotifyQueryFutureAccountBySecField_CustType
		, &pNotifyQueryFutureAccountBySecField_BankAccount, &pNotifyQueryFutureAccountBySecField_BankAccount_len
		, &pNotifyQueryFutureAccountBySecField_BankPassWord, &pNotifyQueryFutureAccountBySecField_BankPassWord_len
		, &pNotifyQueryFutureAccountBySecField_AccountID, &pNotifyQueryFutureAccountBySecField_AccountID_len
		, &pNotifyQueryFutureAccountBySecField_Password, &pNotifyQueryFutureAccountBySecField_Password_len
		, &pNotifyQueryFutureAccountBySecField_FutureSerial
		, &pNotifyQueryFutureAccountBySecField_InstallID
		, &pNotifyQueryFutureAccountBySecField_UserID, &pNotifyQueryFutureAccountBySecField_UserID_len
		, &pNotifyQueryFutureAccountBySecField_VerifyCertNoFlag
		, &pNotifyQueryFutureAccountBySecField_CurrencyID, &pNotifyQueryFutureAccountBySecField_CurrencyID_len
		, &pNotifyQueryFutureAccountBySecField_Digest, &pNotifyQueryFutureAccountBySecField_Digest_len
		, &pNotifyQueryFutureAccountBySecField_BankAccType
		, &pNotifyQueryFutureAccountBySecField_DeviceID, &pNotifyQueryFutureAccountBySecField_DeviceID_len
		, &pNotifyQueryFutureAccountBySecField_BankSecuAccType
		, &pNotifyQueryFutureAccountBySecField_BrokerIDByBank, &pNotifyQueryFutureAccountBySecField_BrokerIDByBank_len
		, &pNotifyQueryFutureAccountBySecField_BankSecuAcc, &pNotifyQueryFutureAccountBySecField_BankSecuAcc_len
		, &pNotifyQueryFutureAccountBySecField_BankPwdFlag
		, &pNotifyQueryFutureAccountBySecField_SecuPwdFlag
		, &pNotifyQueryFutureAccountBySecField_OperNo, &pNotifyQueryFutureAccountBySecField_OperNo_len
		, &pNotifyQueryFutureAccountBySecField_RequestID
		, &pNotifyQueryFutureAccountBySecField_TID
		, &pNotifyQueryFutureAccountBySecField_BankUseAmount
		, &pNotifyQueryFutureAccountBySecField_BankFetchAmount
		, &pNotifyQueryFutureAccountBySecField_ErrorID
		, &pNotifyQueryFutureAccountBySecField_ErrorMsg, &pNotifyQueryFutureAccountBySecField_ErrorMsg_len
		, &pNotifyQueryFutureAccountBySecField_LongCustomerName, &pNotifyQueryFutureAccountBySecField_LongCustomerName_len
		, &pNotifyQueryFutureAccountBySecField_DRIdentityID
		, &pNotifyQueryFutureAccountBySecField_SecFutureSerial


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pNotifyQueryFutureAccountBySecField_TradeCode != NULL) {
		if(pNotifyQueryFutureAccountBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pNotifyQueryFutureAccountBySecField_TradeCode, sizeof(self->data.TradeCode) );
		pNotifyQueryFutureAccountBySecField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pNotifyQueryFutureAccountBySecField_BankID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pNotifyQueryFutureAccountBySecField_BankID, sizeof(self->data.BankID) );
		pNotifyQueryFutureAccountBySecField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pNotifyQueryFutureAccountBySecField_BankBranchID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pNotifyQueryFutureAccountBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
		pNotifyQueryFutureAccountBySecField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pNotifyQueryFutureAccountBySecField_BrokerID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pNotifyQueryFutureAccountBySecField_BrokerID, sizeof(self->data.BrokerID) );
		pNotifyQueryFutureAccountBySecField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pNotifyQueryFutureAccountBySecField_BrokerBranchID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pNotifyQueryFutureAccountBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pNotifyQueryFutureAccountBySecField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyQueryFutureAccountBySecField_TradeDate != NULL) {
		if(pNotifyQueryFutureAccountBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pNotifyQueryFutureAccountBySecField_TradeDate, sizeof(self->data.TradeDate) );
		pNotifyQueryFutureAccountBySecField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pNotifyQueryFutureAccountBySecField_TradeTime != NULL) {
		if(pNotifyQueryFutureAccountBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pNotifyQueryFutureAccountBySecField_TradeTime, sizeof(self->data.TradeTime) );
		pNotifyQueryFutureAccountBySecField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pNotifyQueryFutureAccountBySecField_BankSerial != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pNotifyQueryFutureAccountBySecField_BankSerial, sizeof(self->data.BankSerial) );
		pNotifyQueryFutureAccountBySecField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyQueryFutureAccountBySecField_TradingDay != NULL) {
		if(pNotifyQueryFutureAccountBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pNotifyQueryFutureAccountBySecField_TradingDay, sizeof(self->data.TradingDay) );
		pNotifyQueryFutureAccountBySecField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pNotifyQueryFutureAccountBySecField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pNotifyQueryFutureAccountBySecField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pNotifyQueryFutureAccountBySecField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pNotifyQueryFutureAccountBySecField_CustomerName != NULL) {
		if(pNotifyQueryFutureAccountBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pNotifyQueryFutureAccountBySecField_CustomerName, sizeof(self->data.CustomerName) );
		pNotifyQueryFutureAccountBySecField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pNotifyQueryFutureAccountBySecField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pNotifyQueryFutureAccountBySecField_IdentifiedCardNo != NULL) {
		if(pNotifyQueryFutureAccountBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pNotifyQueryFutureAccountBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pNotifyQueryFutureAccountBySecField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pNotifyQueryFutureAccountBySecField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pNotifyQueryFutureAccountBySecField_BankAccount != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pNotifyQueryFutureAccountBySecField_BankAccount, sizeof(self->data.BankAccount) );
		pNotifyQueryFutureAccountBySecField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pNotifyQueryFutureAccountBySecField_BankPassWord != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pNotifyQueryFutureAccountBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
		pNotifyQueryFutureAccountBySecField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pNotifyQueryFutureAccountBySecField_AccountID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pNotifyQueryFutureAccountBySecField_AccountID, sizeof(self->data.AccountID) );
		pNotifyQueryFutureAccountBySecField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pNotifyQueryFutureAccountBySecField_Password != NULL) {
		if(pNotifyQueryFutureAccountBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pNotifyQueryFutureAccountBySecField_Password, sizeof(self->data.Password) );
		pNotifyQueryFutureAccountBySecField_Password = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pNotifyQueryFutureAccountBySecField_FutureSerial;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pNotifyQueryFutureAccountBySecField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pNotifyQueryFutureAccountBySecField_UserID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pNotifyQueryFutureAccountBySecField_UserID, sizeof(self->data.UserID) );
		pNotifyQueryFutureAccountBySecField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pNotifyQueryFutureAccountBySecField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pNotifyQueryFutureAccountBySecField_CurrencyID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pNotifyQueryFutureAccountBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
		pNotifyQueryFutureAccountBySecField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pNotifyQueryFutureAccountBySecField_Digest != NULL) {
		if(pNotifyQueryFutureAccountBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pNotifyQueryFutureAccountBySecField_Digest, sizeof(self->data.Digest) );
		pNotifyQueryFutureAccountBySecField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pNotifyQueryFutureAccountBySecField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pNotifyQueryFutureAccountBySecField_DeviceID != NULL) {
		if(pNotifyQueryFutureAccountBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pNotifyQueryFutureAccountBySecField_DeviceID, sizeof(self->data.DeviceID) );
		pNotifyQueryFutureAccountBySecField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pNotifyQueryFutureAccountBySecField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pNotifyQueryFutureAccountBySecField_BrokerIDByBank != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pNotifyQueryFutureAccountBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pNotifyQueryFutureAccountBySecField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pNotifyQueryFutureAccountBySecField_BankSecuAcc != NULL) {
		if(pNotifyQueryFutureAccountBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pNotifyQueryFutureAccountBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pNotifyQueryFutureAccountBySecField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pNotifyQueryFutureAccountBySecField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pNotifyQueryFutureAccountBySecField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pNotifyQueryFutureAccountBySecField_OperNo != NULL) {
		if(pNotifyQueryFutureAccountBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pNotifyQueryFutureAccountBySecField_OperNo, sizeof(self->data.OperNo) );
		pNotifyQueryFutureAccountBySecField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pNotifyQueryFutureAccountBySecField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pNotifyQueryFutureAccountBySecField_TID;

	//TThostFtdcTradeAmountType double
	self->data.BankUseAmount = pNotifyQueryFutureAccountBySecField_BankUseAmount;
	//TThostFtdcTradeAmountType double
	self->data.BankFetchAmount = pNotifyQueryFutureAccountBySecField_BankFetchAmount;
	//TThostFtdcErrorIDType int
	self->data.ErrorID = pNotifyQueryFutureAccountBySecField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pNotifyQueryFutureAccountBySecField_ErrorMsg != NULL) {
		if(pNotifyQueryFutureAccountBySecField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pNotifyQueryFutureAccountBySecField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pNotifyQueryFutureAccountBySecField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pNotifyQueryFutureAccountBySecField_LongCustomerName != NULL) {
		if(pNotifyQueryFutureAccountBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pNotifyQueryFutureAccountBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pNotifyQueryFutureAccountBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pNotifyQueryFutureAccountBySecField_LongCustomerName = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pNotifyQueryFutureAccountBySecField_DRIdentityID;

	//TThostFtdcFutureSerialType int
	self->data.SecFutureSerial = pNotifyQueryFutureAccountBySecField_SecFutureSerial;



    return 0;
}

static void PyCThostFtdcNotifyQueryFutureAccountBySecField_dealloc(PyCThostFtdcNotifyQueryFutureAccountBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_repr(PyCThostFtdcNotifyQueryFutureAccountBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:i,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:d,s:d,s:i,s:s,s:s,s:i,s:i}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "LongCustomerName", self->data.LongCustomerName 
		, "DRIdentityID", self->data.DRIdentityID
		, "SecFutureSerial", self->data.SecFutureSerial


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyQueryFutureAccountBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeCode(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeDate(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeTime(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradingDay(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_PlateSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LastFragment(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SessionID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdCardType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdentifiedCardNo(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPassWord(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_AccountID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Password(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_FutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_InstallID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_UserID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_VerifyCertNoFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CurrencyID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Digest(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DeviceID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerIDByBank(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAcc(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecuPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_OperNo(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_RequestID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankUseAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankUseAmount);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankFetchAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankFetchAmount);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorMsg(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LongCustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DRIdentityID(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecFutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SecFutureSerial);
#else 
	return PyInt_FromLong(self->data.SecFutureSerial);
#endif 
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeCode(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerBranchID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeDate(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeTime(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradingDay(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_PlateSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LastFragment(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SessionID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdCardType(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdentifiedCardNo(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustType(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccount(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPassWord(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_AccountID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Password(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_FutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_InstallID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_UserID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_VerifyCertNoFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CurrencyID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Digest(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DeviceID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAccType(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerIDByBank(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAcc(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecuPwdFlag(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_OperNo(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_RequestID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankUseAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankFetchAmount(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ErrorID Expected int"); 
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
    self->data.ErrorID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorMsg(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ErrorMsg Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
		PyErr_SetString(PyExc_ValueError, "ErrorMsg must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ErrorMsg, buf, sizeof(self->data.ErrorMsg));
	return 0;
}

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LongCustomerName(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DRIdentityID(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecFutureSerial(PyCThostFtdcNotifyQueryFutureAccountBySecField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcNotifyQueryFutureAccountBySecField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeCode, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankBranchID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerBranchID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeDate, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradeTime, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TradingDay, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_PlateSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LastFragment, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SessionID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustomerName, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdCardType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CustType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccount, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPassWord, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_AccountID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Password, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Password, (char *)"Password", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_FutureSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_InstallID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_UserID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_CurrencyID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_Digest, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankAccType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DeviceID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAccType, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankSecuAcc, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankPwdFlag, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_OperNo, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_RequestID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_TID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_TID, (char *)"TID", NULL},
	 {(char *)"BankUseAmount", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankUseAmount, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankUseAmount, (char *)"BankUseAmount", NULL},
	 {(char *)"BankFetchAmount", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_BankFetchAmount, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_BankFetchAmount, (char *)"BankFetchAmount", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_ErrorMsg, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_LongCustomerName, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_DRIdentityID, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"SecFutureSerial", (getter)PyCThostFtdcNotifyQueryFutureAccountBySecField_get_SecFutureSerial, (setter)PyCThostFtdcNotifyQueryFutureAccountBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifyQueryFutureAccountBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifyQueryFutureAccountBySecField",	/* tp_name */
	sizeof(PyCThostFtdcNotifyQueryFutureAccountBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifyQueryFutureAccountBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifyQueryFutureAccountBySecField_repr,   /* tp_repr */
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
	"CThostFtdcNotifyQueryFutureAccountBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifyQueryFutureAccountBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifyQueryFutureAccountBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifyQueryFutureAccountBySecField_new,       /* tp_new */
};

int PyCThostFtdcNotifyQueryFutureAccountBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifyQueryFutureAccountBySecField  */
	if (PyType_Ready(&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifyQueryFutureAccountBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifyQueryFutureAccountBySecField", (PyObject *)&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyQueryFutureAccountBySecField to module");
        Py_DECREF(&PyCThostFtdcNotifyQueryFutureAccountBySecFieldType);
		return -1;
    }

    return 0;
}
