
#include "PyCThostFtdcRspQueryAccountField.h"



static PyObject *PyCThostFtdcRspQueryAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspQueryAccountField *self = (PyCThostFtdcRspQueryAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspQueryAccountField_init(PyCThostFtdcRspQueryAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "BankUseAmount", "BankFetchAmount", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspQueryAccountField_TradeCode = NULL;
	Py_ssize_t pRspQueryAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspQueryAccountField_BankID = NULL;
	Py_ssize_t pRspQueryAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspQueryAccountField_BankBranchID = NULL;
	Py_ssize_t pRspQueryAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspQueryAccountField_BrokerID = NULL;
	Py_ssize_t pRspQueryAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspQueryAccountField_BrokerBranchID = NULL;
	Py_ssize_t pRspQueryAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspQueryAccountField_TradeDate = NULL;
	Py_ssize_t pRspQueryAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspQueryAccountField_TradeTime = NULL;
	Py_ssize_t pRspQueryAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspQueryAccountField_BankSerial = NULL;
	Py_ssize_t pRspQueryAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspQueryAccountField_TradingDay = NULL;
	Py_ssize_t pRspQueryAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspQueryAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspQueryAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspQueryAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pRspQueryAccountField_CustomerName = NULL;
	Py_ssize_t pRspQueryAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pRspQueryAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pRspQueryAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pRspQueryAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pRspQueryAccountField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspQueryAccountField_BankAccount = NULL;
	Py_ssize_t pRspQueryAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspQueryAccountField_BankPassWord = NULL;
	Py_ssize_t pRspQueryAccountField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pRspQueryAccountField_AccountID = NULL;
	Py_ssize_t pRspQueryAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspQueryAccountField_Password = NULL;
	Py_ssize_t pRspQueryAccountField_Password_len = 0;

	//TThostFtdcFutureSerialType int
	int pRspQueryAccountField_FutureSerial = 0;

	//TThostFtdcInstallIDType int
	int pRspQueryAccountField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspQueryAccountField_UserID = NULL;
	Py_ssize_t pRspQueryAccountField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pRspQueryAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspQueryAccountField_CurrencyID = NULL;
	Py_ssize_t pRspQueryAccountField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pRspQueryAccountField_Digest = NULL;
	Py_ssize_t pRspQueryAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspQueryAccountField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspQueryAccountField_DeviceID = NULL;
	Py_ssize_t pRspQueryAccountField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspQueryAccountField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspQueryAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pRspQueryAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspQueryAccountField_BankSecuAcc = NULL;
	Py_ssize_t pRspQueryAccountField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pRspQueryAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pRspQueryAccountField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspQueryAccountField_OperNo = NULL;
	Py_ssize_t pRspQueryAccountField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspQueryAccountField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspQueryAccountField_TID = 0;

	//TThostFtdcTradeAmountType double
	double pRspQueryAccountField_BankUseAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pRspQueryAccountField_BankFetchAmount = 0.0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pRspQueryAccountField_LongCustomerName = NULL;
	Py_ssize_t pRspQueryAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiddy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iidds#", (char **)kwlist
#endif

		, &pRspQueryAccountField_TradeCode, &pRspQueryAccountField_TradeCode_len
		, &pRspQueryAccountField_BankID, &pRspQueryAccountField_BankID_len
		, &pRspQueryAccountField_BankBranchID, &pRspQueryAccountField_BankBranchID_len
		, &pRspQueryAccountField_BrokerID, &pRspQueryAccountField_BrokerID_len
		, &pRspQueryAccountField_BrokerBranchID, &pRspQueryAccountField_BrokerBranchID_len
		, &pRspQueryAccountField_TradeDate, &pRspQueryAccountField_TradeDate_len
		, &pRspQueryAccountField_TradeTime, &pRspQueryAccountField_TradeTime_len
		, &pRspQueryAccountField_BankSerial, &pRspQueryAccountField_BankSerial_len
		, &pRspQueryAccountField_TradingDay, &pRspQueryAccountField_TradingDay_len
		, &pRspQueryAccountField_PlateSerial
		, &pRspQueryAccountField_LastFragment
		, &pRspQueryAccountField_SessionID
		, &pRspQueryAccountField_CustomerName, &pRspQueryAccountField_CustomerName_len
		, &pRspQueryAccountField_IdCardType
		, &pRspQueryAccountField_IdentifiedCardNo, &pRspQueryAccountField_IdentifiedCardNo_len
		, &pRspQueryAccountField_CustType
		, &pRspQueryAccountField_BankAccount, &pRspQueryAccountField_BankAccount_len
		, &pRspQueryAccountField_BankPassWord, &pRspQueryAccountField_BankPassWord_len
		, &pRspQueryAccountField_AccountID, &pRspQueryAccountField_AccountID_len
		, &pRspQueryAccountField_Password, &pRspQueryAccountField_Password_len
		, &pRspQueryAccountField_FutureSerial
		, &pRspQueryAccountField_InstallID
		, &pRspQueryAccountField_UserID, &pRspQueryAccountField_UserID_len
		, &pRspQueryAccountField_VerifyCertNoFlag
		, &pRspQueryAccountField_CurrencyID, &pRspQueryAccountField_CurrencyID_len
		, &pRspQueryAccountField_Digest, &pRspQueryAccountField_Digest_len
		, &pRspQueryAccountField_BankAccType
		, &pRspQueryAccountField_DeviceID, &pRspQueryAccountField_DeviceID_len
		, &pRspQueryAccountField_BankSecuAccType
		, &pRspQueryAccountField_BrokerIDByBank, &pRspQueryAccountField_BrokerIDByBank_len
		, &pRspQueryAccountField_BankSecuAcc, &pRspQueryAccountField_BankSecuAcc_len
		, &pRspQueryAccountField_BankPwdFlag
		, &pRspQueryAccountField_SecuPwdFlag
		, &pRspQueryAccountField_OperNo, &pRspQueryAccountField_OperNo_len
		, &pRspQueryAccountField_RequestID
		, &pRspQueryAccountField_TID
		, &pRspQueryAccountField_BankUseAmount
		, &pRspQueryAccountField_BankFetchAmount
		, &pRspQueryAccountField_LongCustomerName, &pRspQueryAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspQueryAccountField_TradeCode != NULL) {
		if(pRspQueryAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspQueryAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pRspQueryAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspQueryAccountField_BankID != NULL) {
		if(pRspQueryAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspQueryAccountField_BankID, sizeof(self->data.BankID) );
		pRspQueryAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspQueryAccountField_BankBranchID != NULL) {
		if(pRspQueryAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspQueryAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspQueryAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspQueryAccountField_BrokerID != NULL) {
		if(pRspQueryAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspQueryAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pRspQueryAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspQueryAccountField_BrokerBranchID != NULL) {
		if(pRspQueryAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspQueryAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspQueryAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspQueryAccountField_TradeDate != NULL) {
		if(pRspQueryAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspQueryAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pRspQueryAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspQueryAccountField_TradeTime != NULL) {
		if(pRspQueryAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspQueryAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pRspQueryAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspQueryAccountField_BankSerial != NULL) {
		if(pRspQueryAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspQueryAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pRspQueryAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspQueryAccountField_TradingDay != NULL) {
		if(pRspQueryAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspQueryAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pRspQueryAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspQueryAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspQueryAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspQueryAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pRspQueryAccountField_CustomerName != NULL) {
		if(pRspQueryAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pRspQueryAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pRspQueryAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pRspQueryAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pRspQueryAccountField_IdentifiedCardNo != NULL) {
		if(pRspQueryAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pRspQueryAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pRspQueryAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pRspQueryAccountField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pRspQueryAccountField_BankAccount != NULL) {
		if(pRspQueryAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pRspQueryAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pRspQueryAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspQueryAccountField_BankPassWord != NULL) {
		if(pRspQueryAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pRspQueryAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pRspQueryAccountField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pRspQueryAccountField_AccountID != NULL) {
		if(pRspQueryAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pRspQueryAccountField_AccountID, sizeof(self->data.AccountID) );
		pRspQueryAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspQueryAccountField_Password != NULL) {
		if(pRspQueryAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pRspQueryAccountField_Password, sizeof(self->data.Password) );
		pRspQueryAccountField_Password = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pRspQueryAccountField_FutureSerial;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspQueryAccountField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pRspQueryAccountField_UserID != NULL) {
		if(pRspQueryAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspQueryAccountField_UserID, sizeof(self->data.UserID) );
		pRspQueryAccountField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pRspQueryAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pRspQueryAccountField_CurrencyID != NULL) {
		if(pRspQueryAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspQueryAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspQueryAccountField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pRspQueryAccountField_Digest != NULL) {
		if(pRspQueryAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspQueryAccountField_Digest, sizeof(self->data.Digest) );
		pRspQueryAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pRspQueryAccountField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pRspQueryAccountField_DeviceID != NULL) {
		if(pRspQueryAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspQueryAccountField_DeviceID, sizeof(self->data.DeviceID) );
		pRspQueryAccountField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pRspQueryAccountField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspQueryAccountField_BrokerIDByBank != NULL) {
		if(pRspQueryAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspQueryAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspQueryAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pRspQueryAccountField_BankSecuAcc != NULL) {
		if(pRspQueryAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pRspQueryAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pRspQueryAccountField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pRspQueryAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pRspQueryAccountField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pRspQueryAccountField_OperNo != NULL) {
		if(pRspQueryAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspQueryAccountField_OperNo, sizeof(self->data.OperNo) );
		pRspQueryAccountField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspQueryAccountField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspQueryAccountField_TID;

	//TThostFtdcTradeAmountType double
	self->data.BankUseAmount = pRspQueryAccountField_BankUseAmount;
	//TThostFtdcTradeAmountType double
	self->data.BankFetchAmount = pRspQueryAccountField_BankFetchAmount;
	//TThostFtdcLongIndividualNameType char[161]
	if(pRspQueryAccountField_LongCustomerName != NULL) {
		if(pRspQueryAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pRspQueryAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pRspQueryAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pRspQueryAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspQueryAccountField_dealloc(PyCThostFtdcRspQueryAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspQueryAccountField_repr(PyCThostFtdcRspQueryAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:d,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:d,s:d,s:s}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_TradeCode(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankBranchID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BrokerID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BrokerBranchID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_TradeDate(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_TradeTime(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankSerial(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_TradingDay(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_PlateSerial(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_LastFragment(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_SessionID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_CustomerName(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_IdCardType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_IdentifiedCardNo(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_CustType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankAccount(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankPassWord(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_AccountID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_Password(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_FutureSerial(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_InstallID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_UserID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_VerifyCertNoFlag(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_CurrencyID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_Digest(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankAccType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_DeviceID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankSecuAccType(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BrokerIDByBank(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankSecuAcc(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankPwdFlag(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_SecuPwdFlag(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_OperNo(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_RequestID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_TID(PyCThostFtdcRspQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankUseAmount(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankUseAmount);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_BankFetchAmount(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BankFetchAmount);
}

static PyObject *PyCThostFtdcRspQueryAccountField_get_LongCustomerName(PyCThostFtdcRspQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcRspQueryAccountField_set_TradeCode(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankBranchID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BrokerID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BrokerBranchID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_TradeDate(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_TradeTime(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankSerial(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_TradingDay(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_PlateSerial(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_LastFragment(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_SessionID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_CustomerName(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_IdCardType(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_IdentifiedCardNo(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_CustType(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankAccount(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankPassWord(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_AccountID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_Password(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_FutureSerial(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_InstallID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_UserID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_VerifyCertNoFlag(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_CurrencyID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_Digest(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankAccType(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_DeviceID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankSecuAccType(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BrokerIDByBank(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankSecuAcc(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankPwdFlag(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_SecuPwdFlag(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_OperNo(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_RequestID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_TID(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankUseAmount(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_BankFetchAmount(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryAccountField_set_LongCustomerName(PyCThostFtdcRspQueryAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspQueryAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspQueryAccountField_get_TradeCode, (setter)PyCThostFtdcRspQueryAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspQueryAccountField_get_BankID, (setter)PyCThostFtdcRspQueryAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspQueryAccountField_get_BankBranchID, (setter)PyCThostFtdcRspQueryAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspQueryAccountField_get_BrokerID, (setter)PyCThostFtdcRspQueryAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspQueryAccountField_get_BrokerBranchID, (setter)PyCThostFtdcRspQueryAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspQueryAccountField_get_TradeDate, (setter)PyCThostFtdcRspQueryAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspQueryAccountField_get_TradeTime, (setter)PyCThostFtdcRspQueryAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspQueryAccountField_get_BankSerial, (setter)PyCThostFtdcRspQueryAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspQueryAccountField_get_TradingDay, (setter)PyCThostFtdcRspQueryAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspQueryAccountField_get_PlateSerial, (setter)PyCThostFtdcRspQueryAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspQueryAccountField_get_LastFragment, (setter)PyCThostFtdcRspQueryAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspQueryAccountField_get_SessionID, (setter)PyCThostFtdcRspQueryAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcRspQueryAccountField_get_CustomerName, (setter)PyCThostFtdcRspQueryAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcRspQueryAccountField_get_IdCardType, (setter)PyCThostFtdcRspQueryAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspQueryAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspQueryAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcRspQueryAccountField_get_CustType, (setter)PyCThostFtdcRspQueryAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcRspQueryAccountField_get_BankAccount, (setter)PyCThostFtdcRspQueryAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcRspQueryAccountField_get_BankPassWord, (setter)PyCThostFtdcRspQueryAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcRspQueryAccountField_get_AccountID, (setter)PyCThostFtdcRspQueryAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcRspQueryAccountField_get_Password, (setter)PyCThostFtdcRspQueryAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcRspQueryAccountField_get_FutureSerial, (setter)PyCThostFtdcRspQueryAccountField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspQueryAccountField_get_InstallID, (setter)PyCThostFtdcRspQueryAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspQueryAccountField_get_UserID, (setter)PyCThostFtdcRspQueryAccountField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspQueryAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspQueryAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspQueryAccountField_get_CurrencyID, (setter)PyCThostFtdcRspQueryAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspQueryAccountField_get_Digest, (setter)PyCThostFtdcRspQueryAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcRspQueryAccountField_get_BankAccType, (setter)PyCThostFtdcRspQueryAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspQueryAccountField_get_DeviceID, (setter)PyCThostFtdcRspQueryAccountField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspQueryAccountField_get_BankSecuAccType, (setter)PyCThostFtdcRspQueryAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspQueryAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcRspQueryAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspQueryAccountField_get_BankSecuAcc, (setter)PyCThostFtdcRspQueryAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspQueryAccountField_get_BankPwdFlag, (setter)PyCThostFtdcRspQueryAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspQueryAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcRspQueryAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspQueryAccountField_get_OperNo, (setter)PyCThostFtdcRspQueryAccountField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspQueryAccountField_get_RequestID, (setter)PyCThostFtdcRspQueryAccountField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspQueryAccountField_get_TID, (setter)PyCThostFtdcRspQueryAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"BankUseAmount", (getter)PyCThostFtdcRspQueryAccountField_get_BankUseAmount, (setter)PyCThostFtdcRspQueryAccountField_set_BankUseAmount, (char *)"BankUseAmount", NULL},
	 {(char *)"BankFetchAmount", (getter)PyCThostFtdcRspQueryAccountField_get_BankFetchAmount, (setter)PyCThostFtdcRspQueryAccountField_set_BankFetchAmount, (char *)"BankFetchAmount", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcRspQueryAccountField_get_LongCustomerName, (setter)PyCThostFtdcRspQueryAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspQueryAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspQueryAccountField",	/* tp_name */
	sizeof(PyCThostFtdcRspQueryAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspQueryAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspQueryAccountField_repr,   /* tp_repr */
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
	"CThostFtdcRspQueryAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspQueryAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspQueryAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspQueryAccountField_new,       /* tp_new */
};

int PyCThostFtdcRspQueryAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspQueryAccountField  */
	if (PyType_Ready(&PyCThostFtdcRspQueryAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspQueryAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspQueryAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspQueryAccountField", (PyObject *)&PyCThostFtdcRspQueryAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryAccountField to module");
        Py_DECREF(&PyCThostFtdcRspQueryAccountFieldType);
		return -1;
    }

    return 0;
}
