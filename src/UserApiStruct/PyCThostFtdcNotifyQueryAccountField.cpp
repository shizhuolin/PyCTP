
#include "PyCThostFtdcNotifyQueryAccountField.h"



static PyObject *PyCThostFtdcNotifyQueryAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifyQueryAccountField *self = (PyCThostFtdcNotifyQueryAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcNotifyQueryAccountField_init(PyCThostFtdcNotifyQueryAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pNotifyQueryAccountField_TradeCode = NULL;
	Py_ssize_t pNotifyQueryAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pNotifyQueryAccountField_BankID = NULL;
	Py_ssize_t pNotifyQueryAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pNotifyQueryAccountField_BankBranchID = NULL;
	Py_ssize_t pNotifyQueryAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pNotifyQueryAccountField_BrokerID = NULL;
	Py_ssize_t pNotifyQueryAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pNotifyQueryAccountField_BrokerBranchID = NULL;
	Py_ssize_t pNotifyQueryAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyQueryAccountField_TradeDate = NULL;
	Py_ssize_t pNotifyQueryAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pNotifyQueryAccountField_TradeTime = NULL;
	Py_ssize_t pNotifyQueryAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pNotifyQueryAccountField_BankSerial = NULL;
	Py_ssize_t pNotifyQueryAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyQueryAccountField_TradingDay = NULL;
	Py_ssize_t pNotifyQueryAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pNotifyQueryAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pNotifyQueryAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pNotifyQueryAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pNotifyQueryAccountField_CustomerName = NULL;
	Py_ssize_t pNotifyQueryAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pNotifyQueryAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pNotifyQueryAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pNotifyQueryAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pNotifyQueryAccountField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pNotifyQueryAccountField_BankAccount = NULL;
	Py_ssize_t pNotifyQueryAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pNotifyQueryAccountField_BankPassWord = NULL;
	Py_ssize_t pNotifyQueryAccountField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pNotifyQueryAccountField_AccountID = NULL;
	Py_ssize_t pNotifyQueryAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pNotifyQueryAccountField_Password = NULL;
	Py_ssize_t pNotifyQueryAccountField_Password_len = 0;

	//TThostFtdcFutureSerialType int
	int pNotifyQueryAccountField_FutureSerial = 0;

	//TThostFtdcInstallIDType int
	int pNotifyQueryAccountField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pNotifyQueryAccountField_UserID = NULL;
	Py_ssize_t pNotifyQueryAccountField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pNotifyQueryAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pNotifyQueryAccountField_CurrencyID = NULL;
	Py_ssize_t pNotifyQueryAccountField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pNotifyQueryAccountField_Digest = NULL;
	Py_ssize_t pNotifyQueryAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pNotifyQueryAccountField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pNotifyQueryAccountField_DeviceID = NULL;
	Py_ssize_t pNotifyQueryAccountField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pNotifyQueryAccountField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pNotifyQueryAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pNotifyQueryAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pNotifyQueryAccountField_BankSecuAcc = NULL;
	Py_ssize_t pNotifyQueryAccountField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pNotifyQueryAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pNotifyQueryAccountField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pNotifyQueryAccountField_OperNo = NULL;
	Py_ssize_t pNotifyQueryAccountField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pNotifyQueryAccountField_RequestID = 0;

	//TThostFtdcTIDType int
	int pNotifyQueryAccountField_TID = 0;

	//TThostFtdcTradeAmountType double
	double pNotifyQueryAccountField_BankUseAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pNotifyQueryAccountField_BankFetchAmount = 0.0;

	//TThostFtdcErrorIDType int
	int pNotifyQueryAccountField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pNotifyQueryAccountField_ErrorMsg = NULL;
	Py_ssize_t pNotifyQueryAccountField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pNotifyQueryAccountField_LongCustomerName = NULL;
	Py_ssize_t pNotifyQueryAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iiddis#s#", (char **)kwlist
#endif

		, &pNotifyQueryAccountField_TradeCode, &pNotifyQueryAccountField_TradeCode_len
		, &pNotifyQueryAccountField_BankID, &pNotifyQueryAccountField_BankID_len
		, &pNotifyQueryAccountField_BankBranchID, &pNotifyQueryAccountField_BankBranchID_len
		, &pNotifyQueryAccountField_BrokerID, &pNotifyQueryAccountField_BrokerID_len
		, &pNotifyQueryAccountField_BrokerBranchID, &pNotifyQueryAccountField_BrokerBranchID_len
		, &pNotifyQueryAccountField_TradeDate, &pNotifyQueryAccountField_TradeDate_len
		, &pNotifyQueryAccountField_TradeTime, &pNotifyQueryAccountField_TradeTime_len
		, &pNotifyQueryAccountField_BankSerial, &pNotifyQueryAccountField_BankSerial_len
		, &pNotifyQueryAccountField_TradingDay, &pNotifyQueryAccountField_TradingDay_len
		, &pNotifyQueryAccountField_PlateSerial
		, &pNotifyQueryAccountField_LastFragment
		, &pNotifyQueryAccountField_SessionID
		, &pNotifyQueryAccountField_CustomerName, &pNotifyQueryAccountField_CustomerName_len
		, &pNotifyQueryAccountField_IdCardType
		, &pNotifyQueryAccountField_IdentifiedCardNo, &pNotifyQueryAccountField_IdentifiedCardNo_len
		, &pNotifyQueryAccountField_CustType
		, &pNotifyQueryAccountField_BankAccount, &pNotifyQueryAccountField_BankAccount_len
		, &pNotifyQueryAccountField_BankPassWord, &pNotifyQueryAccountField_BankPassWord_len
		, &pNotifyQueryAccountField_AccountID, &pNotifyQueryAccountField_AccountID_len
		, &pNotifyQueryAccountField_Password, &pNotifyQueryAccountField_Password_len
		, &pNotifyQueryAccountField_FutureSerial
		, &pNotifyQueryAccountField_InstallID
		, &pNotifyQueryAccountField_UserID, &pNotifyQueryAccountField_UserID_len
		, &pNotifyQueryAccountField_VerifyCertNoFlag
		, &pNotifyQueryAccountField_CurrencyID, &pNotifyQueryAccountField_CurrencyID_len
		, &pNotifyQueryAccountField_Digest, &pNotifyQueryAccountField_Digest_len
		, &pNotifyQueryAccountField_BankAccType
		, &pNotifyQueryAccountField_DeviceID, &pNotifyQueryAccountField_DeviceID_len
		, &pNotifyQueryAccountField_BankSecuAccType
		, &pNotifyQueryAccountField_BrokerIDByBank, &pNotifyQueryAccountField_BrokerIDByBank_len
		, &pNotifyQueryAccountField_BankSecuAcc, &pNotifyQueryAccountField_BankSecuAcc_len
		, &pNotifyQueryAccountField_BankPwdFlag
		, &pNotifyQueryAccountField_SecuPwdFlag
		, &pNotifyQueryAccountField_OperNo, &pNotifyQueryAccountField_OperNo_len
		, &pNotifyQueryAccountField_RequestID
		, &pNotifyQueryAccountField_TID
		, &pNotifyQueryAccountField_BankUseAmount
		, &pNotifyQueryAccountField_BankFetchAmount
		, &pNotifyQueryAccountField_ErrorID
		, &pNotifyQueryAccountField_ErrorMsg, &pNotifyQueryAccountField_ErrorMsg_len
		, &pNotifyQueryAccountField_LongCustomerName, &pNotifyQueryAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pNotifyQueryAccountField_TradeCode != NULL) {
		if(pNotifyQueryAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pNotifyQueryAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pNotifyQueryAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pNotifyQueryAccountField_BankID != NULL) {
		if(pNotifyQueryAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pNotifyQueryAccountField_BankID, sizeof(self->data.BankID) );
		pNotifyQueryAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pNotifyQueryAccountField_BankBranchID != NULL) {
		if(pNotifyQueryAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pNotifyQueryAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pNotifyQueryAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pNotifyQueryAccountField_BrokerID != NULL) {
		if(pNotifyQueryAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pNotifyQueryAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pNotifyQueryAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pNotifyQueryAccountField_BrokerBranchID != NULL) {
		if(pNotifyQueryAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pNotifyQueryAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pNotifyQueryAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyQueryAccountField_TradeDate != NULL) {
		if(pNotifyQueryAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pNotifyQueryAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pNotifyQueryAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pNotifyQueryAccountField_TradeTime != NULL) {
		if(pNotifyQueryAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pNotifyQueryAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pNotifyQueryAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pNotifyQueryAccountField_BankSerial != NULL) {
		if(pNotifyQueryAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pNotifyQueryAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pNotifyQueryAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyQueryAccountField_TradingDay != NULL) {
		if(pNotifyQueryAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pNotifyQueryAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pNotifyQueryAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pNotifyQueryAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pNotifyQueryAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pNotifyQueryAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pNotifyQueryAccountField_CustomerName != NULL) {
		if(pNotifyQueryAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pNotifyQueryAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pNotifyQueryAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pNotifyQueryAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pNotifyQueryAccountField_IdentifiedCardNo != NULL) {
		if(pNotifyQueryAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pNotifyQueryAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pNotifyQueryAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pNotifyQueryAccountField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pNotifyQueryAccountField_BankAccount != NULL) {
		if(pNotifyQueryAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pNotifyQueryAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pNotifyQueryAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pNotifyQueryAccountField_BankPassWord != NULL) {
		if(pNotifyQueryAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pNotifyQueryAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pNotifyQueryAccountField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pNotifyQueryAccountField_AccountID != NULL) {
		if(pNotifyQueryAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pNotifyQueryAccountField_AccountID, sizeof(self->data.AccountID) );
		pNotifyQueryAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pNotifyQueryAccountField_Password != NULL) {
		if(pNotifyQueryAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pNotifyQueryAccountField_Password, sizeof(self->data.Password) );
		pNotifyQueryAccountField_Password = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pNotifyQueryAccountField_FutureSerial;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pNotifyQueryAccountField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pNotifyQueryAccountField_UserID != NULL) {
		if(pNotifyQueryAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pNotifyQueryAccountField_UserID, sizeof(self->data.UserID) );
		pNotifyQueryAccountField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pNotifyQueryAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pNotifyQueryAccountField_CurrencyID != NULL) {
		if(pNotifyQueryAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pNotifyQueryAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pNotifyQueryAccountField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pNotifyQueryAccountField_Digest != NULL) {
		if(pNotifyQueryAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pNotifyQueryAccountField_Digest, sizeof(self->data.Digest) );
		pNotifyQueryAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pNotifyQueryAccountField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pNotifyQueryAccountField_DeviceID != NULL) {
		if(pNotifyQueryAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pNotifyQueryAccountField_DeviceID, sizeof(self->data.DeviceID) );
		pNotifyQueryAccountField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pNotifyQueryAccountField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pNotifyQueryAccountField_BrokerIDByBank != NULL) {
		if(pNotifyQueryAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pNotifyQueryAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pNotifyQueryAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pNotifyQueryAccountField_BankSecuAcc != NULL) {
		if(pNotifyQueryAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pNotifyQueryAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pNotifyQueryAccountField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pNotifyQueryAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pNotifyQueryAccountField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pNotifyQueryAccountField_OperNo != NULL) {
		if(pNotifyQueryAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pNotifyQueryAccountField_OperNo, sizeof(self->data.OperNo) );
		pNotifyQueryAccountField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pNotifyQueryAccountField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pNotifyQueryAccountField_TID;

	//TThostFtdcTradeAmountType double
	self->data.BankUseAmount = pNotifyQueryAccountField_BankUseAmount;
	//TThostFtdcTradeAmountType double
	self->data.BankFetchAmount = pNotifyQueryAccountField_BankFetchAmount;
	//TThostFtdcErrorIDType int
	self->data.ErrorID = pNotifyQueryAccountField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pNotifyQueryAccountField_ErrorMsg != NULL) {
		if(pNotifyQueryAccountField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pNotifyQueryAccountField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pNotifyQueryAccountField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pNotifyQueryAccountField_LongCustomerName != NULL) {
		if(pNotifyQueryAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pNotifyQueryAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pNotifyQueryAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pNotifyQueryAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcNotifyQueryAccountField_dealloc(PyCThostFtdcNotifyQueryAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_repr(PyCThostFtdcNotifyQueryAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:d,s:d,s:i,s:s,s:s}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyQueryAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_TradeCode(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankBranchID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BrokerID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BrokerBranchID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_TradeDate(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_TradeTime(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankSerial(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_TradingDay(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_PlateSerial(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_LastFragment(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_SessionID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_CustomerName(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_IdCardType(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_IdentifiedCardNo(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_CustType(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankAccount(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankPassWord(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_AccountID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_Password(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_FutureSerial(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_InstallID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_UserID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_VerifyCertNoFlag(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_CurrencyID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_Digest(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankAccType(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_DeviceID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankSecuAccType(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BrokerIDByBank(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankSecuAcc(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankPwdFlag(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_SecuPwdFlag(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_OperNo(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_RequestID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_TID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankUseAmount(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankUseAmount);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_BankFetchAmount(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankFetchAmount);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_ErrorID(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_ErrorMsg(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcNotifyQueryAccountField_get_LongCustomerName(PyCThostFtdcNotifyQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcNotifyQueryAccountField_set_TradeCode(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankBranchID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BrokerID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BrokerBranchID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_TradeDate(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_TradeTime(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankSerial(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_TradingDay(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_PlateSerial(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_LastFragment(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_SessionID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_CustomerName(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_IdCardType(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_IdentifiedCardNo(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_CustType(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankAccount(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankPassWord(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_AccountID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_Password(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_FutureSerial(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_InstallID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_UserID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_VerifyCertNoFlag(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_CurrencyID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_Digest(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankAccType(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_DeviceID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankSecuAccType(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BrokerIDByBank(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankSecuAcc(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankPwdFlag(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_SecuPwdFlag(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_OperNo(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_RequestID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_TID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankUseAmount(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_BankFetchAmount(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_ErrorID(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_ErrorMsg(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyQueryAccountField_set_LongCustomerName(PyCThostFtdcNotifyQueryAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcNotifyQueryAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcNotifyQueryAccountField_get_TradeCode, (setter)PyCThostFtdcNotifyQueryAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankID, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankBranchID, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcNotifyQueryAccountField_get_BrokerID, (setter)PyCThostFtdcNotifyQueryAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifyQueryAccountField_get_BrokerBranchID, (setter)PyCThostFtdcNotifyQueryAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcNotifyQueryAccountField_get_TradeDate, (setter)PyCThostFtdcNotifyQueryAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcNotifyQueryAccountField_get_TradeTime, (setter)PyCThostFtdcNotifyQueryAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankSerial, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcNotifyQueryAccountField_get_TradingDay, (setter)PyCThostFtdcNotifyQueryAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcNotifyQueryAccountField_get_PlateSerial, (setter)PyCThostFtdcNotifyQueryAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcNotifyQueryAccountField_get_LastFragment, (setter)PyCThostFtdcNotifyQueryAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcNotifyQueryAccountField_get_SessionID, (setter)PyCThostFtdcNotifyQueryAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcNotifyQueryAccountField_get_CustomerName, (setter)PyCThostFtdcNotifyQueryAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcNotifyQueryAccountField_get_IdCardType, (setter)PyCThostFtdcNotifyQueryAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcNotifyQueryAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcNotifyQueryAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcNotifyQueryAccountField_get_CustType, (setter)PyCThostFtdcNotifyQueryAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankAccount, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankPassWord, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcNotifyQueryAccountField_get_AccountID, (setter)PyCThostFtdcNotifyQueryAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcNotifyQueryAccountField_get_Password, (setter)PyCThostFtdcNotifyQueryAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcNotifyQueryAccountField_get_FutureSerial, (setter)PyCThostFtdcNotifyQueryAccountField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcNotifyQueryAccountField_get_InstallID, (setter)PyCThostFtdcNotifyQueryAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcNotifyQueryAccountField_get_UserID, (setter)PyCThostFtdcNotifyQueryAccountField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcNotifyQueryAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcNotifyQueryAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcNotifyQueryAccountField_get_CurrencyID, (setter)PyCThostFtdcNotifyQueryAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcNotifyQueryAccountField_get_Digest, (setter)PyCThostFtdcNotifyQueryAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankAccType, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcNotifyQueryAccountField_get_DeviceID, (setter)PyCThostFtdcNotifyQueryAccountField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankSecuAccType, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifyQueryAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifyQueryAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankSecuAcc, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankPwdFlag, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcNotifyQueryAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcNotifyQueryAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcNotifyQueryAccountField_get_OperNo, (setter)PyCThostFtdcNotifyQueryAccountField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcNotifyQueryAccountField_get_RequestID, (setter)PyCThostFtdcNotifyQueryAccountField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcNotifyQueryAccountField_get_TID, (setter)PyCThostFtdcNotifyQueryAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"BankUseAmount", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankUseAmount, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankUseAmount, (char *)"BankUseAmount", NULL},
	 {(char *)"BankFetchAmount", (getter)PyCThostFtdcNotifyQueryAccountField_get_BankFetchAmount, (setter)PyCThostFtdcNotifyQueryAccountField_set_BankFetchAmount, (char *)"BankFetchAmount", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcNotifyQueryAccountField_get_ErrorID, (setter)PyCThostFtdcNotifyQueryAccountField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifyQueryAccountField_get_ErrorMsg, (setter)PyCThostFtdcNotifyQueryAccountField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcNotifyQueryAccountField_get_LongCustomerName, (setter)PyCThostFtdcNotifyQueryAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifyQueryAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifyQueryAccountField",	/* tp_name */
	sizeof(PyCThostFtdcNotifyQueryAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifyQueryAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifyQueryAccountField_repr,   /* tp_repr */
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
	"CThostFtdcNotifyQueryAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifyQueryAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifyQueryAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifyQueryAccountField_new,       /* tp_new */
};

int PyCThostFtdcNotifyQueryAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifyQueryAccountField  */
	if (PyType_Ready(&PyCThostFtdcNotifyQueryAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifyQueryAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifyQueryAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifyQueryAccountField", (PyObject *)&PyCThostFtdcNotifyQueryAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyQueryAccountField to module");
        Py_DECREF(&PyCThostFtdcNotifyQueryAccountFieldType);
		return -1;
    }

    return 0;
}
