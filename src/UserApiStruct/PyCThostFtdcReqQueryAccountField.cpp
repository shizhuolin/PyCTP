
#include "PyCThostFtdcReqQueryAccountField.h"



static PyObject *PyCThostFtdcReqQueryAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqQueryAccountField *self = (PyCThostFtdcReqQueryAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqQueryAccountField_init(PyCThostFtdcReqQueryAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "FutureSerial", "InstallID", "UserID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqQueryAccountField_TradeCode = NULL;
	Py_ssize_t pReqQueryAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqQueryAccountField_BankID = NULL;
	Py_ssize_t pReqQueryAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqQueryAccountField_BankBranchID = NULL;
	Py_ssize_t pReqQueryAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqQueryAccountField_BrokerID = NULL;
	Py_ssize_t pReqQueryAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqQueryAccountField_BrokerBranchID = NULL;
	Py_ssize_t pReqQueryAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqQueryAccountField_TradeDate = NULL;
	Py_ssize_t pReqQueryAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqQueryAccountField_TradeTime = NULL;
	Py_ssize_t pReqQueryAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqQueryAccountField_BankSerial = NULL;
	Py_ssize_t pReqQueryAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqQueryAccountField_TradingDay = NULL;
	Py_ssize_t pReqQueryAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqQueryAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqQueryAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqQueryAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqQueryAccountField_CustomerName = NULL;
	Py_ssize_t pReqQueryAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqQueryAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqQueryAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqQueryAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pReqQueryAccountField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqQueryAccountField_BankAccount = NULL;
	Py_ssize_t pReqQueryAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqQueryAccountField_BankPassWord = NULL;
	Py_ssize_t pReqQueryAccountField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqQueryAccountField_AccountID = NULL;
	Py_ssize_t pReqQueryAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqQueryAccountField_Password = NULL;
	Py_ssize_t pReqQueryAccountField_Password_len = 0;

	//TThostFtdcFutureSerialType int
	int pReqQueryAccountField_FutureSerial = 0;

	//TThostFtdcInstallIDType int
	int pReqQueryAccountField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqQueryAccountField_UserID = NULL;
	Py_ssize_t pReqQueryAccountField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqQueryAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqQueryAccountField_CurrencyID = NULL;
	Py_ssize_t pReqQueryAccountField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqQueryAccountField_Digest = NULL;
	Py_ssize_t pReqQueryAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqQueryAccountField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqQueryAccountField_DeviceID = NULL;
	Py_ssize_t pReqQueryAccountField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqQueryAccountField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqQueryAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pReqQueryAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqQueryAccountField_BankSecuAcc = NULL;
	Py_ssize_t pReqQueryAccountField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqQueryAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqQueryAccountField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqQueryAccountField_OperNo = NULL;
	Py_ssize_t pReqQueryAccountField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pReqQueryAccountField_RequestID = 0;

	//TThostFtdcTIDType int
	int pReqQueryAccountField_TID = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqQueryAccountField_LongCustomerName = NULL;
	Py_ssize_t pReqQueryAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#y#cy#cy#y#ccy#iiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#s#cs#cs#s#ccs#iis#", (char **)kwlist
#endif

		, &pReqQueryAccountField_TradeCode, &pReqQueryAccountField_TradeCode_len
		, &pReqQueryAccountField_BankID, &pReqQueryAccountField_BankID_len
		, &pReqQueryAccountField_BankBranchID, &pReqQueryAccountField_BankBranchID_len
		, &pReqQueryAccountField_BrokerID, &pReqQueryAccountField_BrokerID_len
		, &pReqQueryAccountField_BrokerBranchID, &pReqQueryAccountField_BrokerBranchID_len
		, &pReqQueryAccountField_TradeDate, &pReqQueryAccountField_TradeDate_len
		, &pReqQueryAccountField_TradeTime, &pReqQueryAccountField_TradeTime_len
		, &pReqQueryAccountField_BankSerial, &pReqQueryAccountField_BankSerial_len
		, &pReqQueryAccountField_TradingDay, &pReqQueryAccountField_TradingDay_len
		, &pReqQueryAccountField_PlateSerial
		, &pReqQueryAccountField_LastFragment
		, &pReqQueryAccountField_SessionID
		, &pReqQueryAccountField_CustomerName, &pReqQueryAccountField_CustomerName_len
		, &pReqQueryAccountField_IdCardType
		, &pReqQueryAccountField_IdentifiedCardNo, &pReqQueryAccountField_IdentifiedCardNo_len
		, &pReqQueryAccountField_CustType
		, &pReqQueryAccountField_BankAccount, &pReqQueryAccountField_BankAccount_len
		, &pReqQueryAccountField_BankPassWord, &pReqQueryAccountField_BankPassWord_len
		, &pReqQueryAccountField_AccountID, &pReqQueryAccountField_AccountID_len
		, &pReqQueryAccountField_Password, &pReqQueryAccountField_Password_len
		, &pReqQueryAccountField_FutureSerial
		, &pReqQueryAccountField_InstallID
		, &pReqQueryAccountField_UserID, &pReqQueryAccountField_UserID_len
		, &pReqQueryAccountField_VerifyCertNoFlag
		, &pReqQueryAccountField_CurrencyID, &pReqQueryAccountField_CurrencyID_len
		, &pReqQueryAccountField_Digest, &pReqQueryAccountField_Digest_len
		, &pReqQueryAccountField_BankAccType
		, &pReqQueryAccountField_DeviceID, &pReqQueryAccountField_DeviceID_len
		, &pReqQueryAccountField_BankSecuAccType
		, &pReqQueryAccountField_BrokerIDByBank, &pReqQueryAccountField_BrokerIDByBank_len
		, &pReqQueryAccountField_BankSecuAcc, &pReqQueryAccountField_BankSecuAcc_len
		, &pReqQueryAccountField_BankPwdFlag
		, &pReqQueryAccountField_SecuPwdFlag
		, &pReqQueryAccountField_OperNo, &pReqQueryAccountField_OperNo_len
		, &pReqQueryAccountField_RequestID
		, &pReqQueryAccountField_TID
		, &pReqQueryAccountField_LongCustomerName, &pReqQueryAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqQueryAccountField_TradeCode != NULL) {
		if(pReqQueryAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqQueryAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pReqQueryAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqQueryAccountField_BankID != NULL) {
		if(pReqQueryAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqQueryAccountField_BankID, sizeof(self->data.BankID) );
		pReqQueryAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqQueryAccountField_BankBranchID != NULL) {
		if(pReqQueryAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqQueryAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqQueryAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqQueryAccountField_BrokerID != NULL) {
		if(pReqQueryAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqQueryAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pReqQueryAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqQueryAccountField_BrokerBranchID != NULL) {
		if(pReqQueryAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqQueryAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqQueryAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqQueryAccountField_TradeDate != NULL) {
		if(pReqQueryAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqQueryAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pReqQueryAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqQueryAccountField_TradeTime != NULL) {
		if(pReqQueryAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqQueryAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pReqQueryAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqQueryAccountField_BankSerial != NULL) {
		if(pReqQueryAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqQueryAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pReqQueryAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqQueryAccountField_TradingDay != NULL) {
		if(pReqQueryAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqQueryAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pReqQueryAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqQueryAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqQueryAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqQueryAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqQueryAccountField_CustomerName != NULL) {
		if(pReqQueryAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqQueryAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pReqQueryAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqQueryAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqQueryAccountField_IdentifiedCardNo != NULL) {
		if(pReqQueryAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqQueryAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqQueryAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqQueryAccountField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pReqQueryAccountField_BankAccount != NULL) {
		if(pReqQueryAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqQueryAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pReqQueryAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqQueryAccountField_BankPassWord != NULL) {
		if(pReqQueryAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqQueryAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqQueryAccountField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqQueryAccountField_AccountID != NULL) {
		if(pReqQueryAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqQueryAccountField_AccountID, sizeof(self->data.AccountID) );
		pReqQueryAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqQueryAccountField_Password != NULL) {
		if(pReqQueryAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqQueryAccountField_Password, sizeof(self->data.Password) );
		pReqQueryAccountField_Password = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pReqQueryAccountField_FutureSerial;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqQueryAccountField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pReqQueryAccountField_UserID != NULL) {
		if(pReqQueryAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqQueryAccountField_UserID, sizeof(self->data.UserID) );
		pReqQueryAccountField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqQueryAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqQueryAccountField_CurrencyID != NULL) {
		if(pReqQueryAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqQueryAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqQueryAccountField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReqQueryAccountField_Digest != NULL) {
		if(pReqQueryAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqQueryAccountField_Digest, sizeof(self->data.Digest) );
		pReqQueryAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqQueryAccountField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pReqQueryAccountField_DeviceID != NULL) {
		if(pReqQueryAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqQueryAccountField_DeviceID, sizeof(self->data.DeviceID) );
		pReqQueryAccountField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pReqQueryAccountField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqQueryAccountField_BrokerIDByBank != NULL) {
		if(pReqQueryAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqQueryAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqQueryAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqQueryAccountField_BankSecuAcc != NULL) {
		if(pReqQueryAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pReqQueryAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pReqQueryAccountField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqQueryAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqQueryAccountField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pReqQueryAccountField_OperNo != NULL) {
		if(pReqQueryAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqQueryAccountField_OperNo, sizeof(self->data.OperNo) );
		pReqQueryAccountField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pReqQueryAccountField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pReqQueryAccountField_TID;

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqQueryAccountField_LongCustomerName != NULL) {
		if(pReqQueryAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqQueryAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqQueryAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqQueryAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqQueryAccountField_dealloc(PyCThostFtdcReqQueryAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqQueryAccountField_repr(PyCThostFtdcReqQueryAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:s}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_TradeCode(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankBranchID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BrokerID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BrokerBranchID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_TradeDate(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_TradeTime(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankSerial(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_TradingDay(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_PlateSerial(PyCThostFtdcReqQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_LastFragment(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_SessionID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_CustomerName(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_IdCardType(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_IdentifiedCardNo(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_CustType(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankAccount(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankPassWord(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_AccountID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_Password(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_FutureSerial(PyCThostFtdcReqQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_InstallID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_UserID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_VerifyCertNoFlag(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_CurrencyID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_Digest(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankAccType(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_DeviceID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankSecuAccType(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BrokerIDByBank(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankSecuAcc(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_BankPwdFlag(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_SecuPwdFlag(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_OperNo(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_RequestID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_TID(PyCThostFtdcReqQueryAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryAccountField_get_LongCustomerName(PyCThostFtdcReqQueryAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcReqQueryAccountField_set_TradeCode(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankBranchID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BrokerID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BrokerBranchID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_TradeDate(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_TradeTime(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankSerial(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_TradingDay(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_PlateSerial(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_LastFragment(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_SessionID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_CustomerName(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_IdCardType(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_IdentifiedCardNo(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_CustType(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankAccount(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankPassWord(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_AccountID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_Password(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_FutureSerial(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_InstallID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_UserID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_VerifyCertNoFlag(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_CurrencyID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_Digest(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankAccType(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_DeviceID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankSecuAccType(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BrokerIDByBank(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankSecuAcc(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_BankPwdFlag(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_SecuPwdFlag(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_OperNo(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_RequestID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_TID(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryAccountField_set_LongCustomerName(PyCThostFtdcReqQueryAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqQueryAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqQueryAccountField_get_TradeCode, (setter)PyCThostFtdcReqQueryAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqQueryAccountField_get_BankID, (setter)PyCThostFtdcReqQueryAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqQueryAccountField_get_BankBranchID, (setter)PyCThostFtdcReqQueryAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqQueryAccountField_get_BrokerID, (setter)PyCThostFtdcReqQueryAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqQueryAccountField_get_BrokerBranchID, (setter)PyCThostFtdcReqQueryAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqQueryAccountField_get_TradeDate, (setter)PyCThostFtdcReqQueryAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqQueryAccountField_get_TradeTime, (setter)PyCThostFtdcReqQueryAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqQueryAccountField_get_BankSerial, (setter)PyCThostFtdcReqQueryAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqQueryAccountField_get_TradingDay, (setter)PyCThostFtdcReqQueryAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqQueryAccountField_get_PlateSerial, (setter)PyCThostFtdcReqQueryAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqQueryAccountField_get_LastFragment, (setter)PyCThostFtdcReqQueryAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqQueryAccountField_get_SessionID, (setter)PyCThostFtdcReqQueryAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqQueryAccountField_get_CustomerName, (setter)PyCThostFtdcReqQueryAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqQueryAccountField_get_IdCardType, (setter)PyCThostFtdcReqQueryAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqQueryAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqQueryAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqQueryAccountField_get_CustType, (setter)PyCThostFtdcReqQueryAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqQueryAccountField_get_BankAccount, (setter)PyCThostFtdcReqQueryAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqQueryAccountField_get_BankPassWord, (setter)PyCThostFtdcReqQueryAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqQueryAccountField_get_AccountID, (setter)PyCThostFtdcReqQueryAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqQueryAccountField_get_Password, (setter)PyCThostFtdcReqQueryAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcReqQueryAccountField_get_FutureSerial, (setter)PyCThostFtdcReqQueryAccountField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqQueryAccountField_get_InstallID, (setter)PyCThostFtdcReqQueryAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqQueryAccountField_get_UserID, (setter)PyCThostFtdcReqQueryAccountField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqQueryAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqQueryAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqQueryAccountField_get_CurrencyID, (setter)PyCThostFtdcReqQueryAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqQueryAccountField_get_Digest, (setter)PyCThostFtdcReqQueryAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqQueryAccountField_get_BankAccType, (setter)PyCThostFtdcReqQueryAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqQueryAccountField_get_DeviceID, (setter)PyCThostFtdcReqQueryAccountField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqQueryAccountField_get_BankSecuAccType, (setter)PyCThostFtdcReqQueryAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqQueryAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcReqQueryAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqQueryAccountField_get_BankSecuAcc, (setter)PyCThostFtdcReqQueryAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqQueryAccountField_get_BankPwdFlag, (setter)PyCThostFtdcReqQueryAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqQueryAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcReqQueryAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqQueryAccountField_get_OperNo, (setter)PyCThostFtdcReqQueryAccountField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcReqQueryAccountField_get_RequestID, (setter)PyCThostFtdcReqQueryAccountField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqQueryAccountField_get_TID, (setter)PyCThostFtdcReqQueryAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqQueryAccountField_get_LongCustomerName, (setter)PyCThostFtdcReqQueryAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqQueryAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqQueryAccountField",	/* tp_name */
	sizeof(PyCThostFtdcReqQueryAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqQueryAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqQueryAccountField_repr,   /* tp_repr */
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
	"CThostFtdcReqQueryAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqQueryAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqQueryAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqQueryAccountField_new,       /* tp_new */
};

int PyCThostFtdcReqQueryAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqQueryAccountField  */
	if (PyType_Ready(&PyCThostFtdcReqQueryAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqQueryAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqQueryAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqQueryAccountField", (PyObject *)&PyCThostFtdcReqQueryAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryAccountField to module");
        Py_DECREF(&PyCThostFtdcReqQueryAccountFieldType);
		return -1;
    }

    return 0;
}
