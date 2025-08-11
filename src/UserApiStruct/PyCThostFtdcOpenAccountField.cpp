
#include "PyCThostFtdcOpenAccountField.h"



static PyObject *PyCThostFtdcOpenAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOpenAccountField *self = (PyCThostFtdcOpenAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcOpenAccountField_init(PyCThostFtdcOpenAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pOpenAccountField_TradeCode = NULL;
	Py_ssize_t pOpenAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pOpenAccountField_BankID = NULL;
	Py_ssize_t pOpenAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pOpenAccountField_BankBranchID = NULL;
	Py_ssize_t pOpenAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pOpenAccountField_BrokerID = NULL;
	Py_ssize_t pOpenAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pOpenAccountField_BrokerBranchID = NULL;
	Py_ssize_t pOpenAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pOpenAccountField_TradeDate = NULL;
	Py_ssize_t pOpenAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pOpenAccountField_TradeTime = NULL;
	Py_ssize_t pOpenAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pOpenAccountField_BankSerial = NULL;
	Py_ssize_t pOpenAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pOpenAccountField_TradingDay = NULL;
	Py_ssize_t pOpenAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pOpenAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pOpenAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pOpenAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pOpenAccountField_CustomerName = NULL;
	Py_ssize_t pOpenAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pOpenAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pOpenAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pOpenAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pOpenAccountField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pOpenAccountField_CountryCode = NULL;
	Py_ssize_t pOpenAccountField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pOpenAccountField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pOpenAccountField_Address = NULL;
	Py_ssize_t pOpenAccountField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pOpenAccountField_ZipCode = NULL;
	Py_ssize_t pOpenAccountField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pOpenAccountField_Telephone = NULL;
	Py_ssize_t pOpenAccountField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pOpenAccountField_MobilePhone = NULL;
	Py_ssize_t pOpenAccountField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pOpenAccountField_Fax = NULL;
	Py_ssize_t pOpenAccountField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pOpenAccountField_EMail = NULL;
	Py_ssize_t pOpenAccountField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pOpenAccountField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pOpenAccountField_BankAccount = NULL;
	Py_ssize_t pOpenAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pOpenAccountField_BankPassWord = NULL;
	Py_ssize_t pOpenAccountField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pOpenAccountField_AccountID = NULL;
	Py_ssize_t pOpenAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pOpenAccountField_Password = NULL;
	Py_ssize_t pOpenAccountField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pOpenAccountField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pOpenAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pOpenAccountField_CurrencyID = NULL;
	Py_ssize_t pOpenAccountField_CurrencyID_len = 0;

	//TThostFtdcCashExchangeCodeType char
	char pOpenAccountField_CashExchangeCode = 0;

	//TThostFtdcDigestType char[36]
	const char *pOpenAccountField_Digest = NULL;
	Py_ssize_t pOpenAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pOpenAccountField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pOpenAccountField_DeviceID = NULL;
	Py_ssize_t pOpenAccountField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pOpenAccountField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pOpenAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pOpenAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pOpenAccountField_BankSecuAcc = NULL;
	Py_ssize_t pOpenAccountField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pOpenAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pOpenAccountField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pOpenAccountField_OperNo = NULL;
	Py_ssize_t pOpenAccountField_OperNo_len = 0;

	//TThostFtdcTIDType int
	int pOpenAccountField_TID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pOpenAccountField_UserID = NULL;
	Py_ssize_t pOpenAccountField_UserID_len = 0;

	//TThostFtdcErrorIDType int
	int pOpenAccountField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pOpenAccountField_ErrorMsg = NULL;
	Py_ssize_t pOpenAccountField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pOpenAccountField_LongCustomerName = NULL;
	Py_ssize_t pOpenAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#ics#cs#cs#cs#s#ccs#is#is#s#", (char **)kwlist
#endif

		, &pOpenAccountField_TradeCode, &pOpenAccountField_TradeCode_len
		, &pOpenAccountField_BankID, &pOpenAccountField_BankID_len
		, &pOpenAccountField_BankBranchID, &pOpenAccountField_BankBranchID_len
		, &pOpenAccountField_BrokerID, &pOpenAccountField_BrokerID_len
		, &pOpenAccountField_BrokerBranchID, &pOpenAccountField_BrokerBranchID_len
		, &pOpenAccountField_TradeDate, &pOpenAccountField_TradeDate_len
		, &pOpenAccountField_TradeTime, &pOpenAccountField_TradeTime_len
		, &pOpenAccountField_BankSerial, &pOpenAccountField_BankSerial_len
		, &pOpenAccountField_TradingDay, &pOpenAccountField_TradingDay_len
		, &pOpenAccountField_PlateSerial
		, &pOpenAccountField_LastFragment
		, &pOpenAccountField_SessionID
		, &pOpenAccountField_CustomerName, &pOpenAccountField_CustomerName_len
		, &pOpenAccountField_IdCardType
		, &pOpenAccountField_IdentifiedCardNo, &pOpenAccountField_IdentifiedCardNo_len
		, &pOpenAccountField_Gender
		, &pOpenAccountField_CountryCode, &pOpenAccountField_CountryCode_len
		, &pOpenAccountField_CustType
		, &pOpenAccountField_Address, &pOpenAccountField_Address_len
		, &pOpenAccountField_ZipCode, &pOpenAccountField_ZipCode_len
		, &pOpenAccountField_Telephone, &pOpenAccountField_Telephone_len
		, &pOpenAccountField_MobilePhone, &pOpenAccountField_MobilePhone_len
		, &pOpenAccountField_Fax, &pOpenAccountField_Fax_len
		, &pOpenAccountField_EMail, &pOpenAccountField_EMail_len
		, &pOpenAccountField_MoneyAccountStatus
		, &pOpenAccountField_BankAccount, &pOpenAccountField_BankAccount_len
		, &pOpenAccountField_BankPassWord, &pOpenAccountField_BankPassWord_len
		, &pOpenAccountField_AccountID, &pOpenAccountField_AccountID_len
		, &pOpenAccountField_Password, &pOpenAccountField_Password_len
		, &pOpenAccountField_InstallID
		, &pOpenAccountField_VerifyCertNoFlag
		, &pOpenAccountField_CurrencyID, &pOpenAccountField_CurrencyID_len
		, &pOpenAccountField_CashExchangeCode
		, &pOpenAccountField_Digest, &pOpenAccountField_Digest_len
		, &pOpenAccountField_BankAccType
		, &pOpenAccountField_DeviceID, &pOpenAccountField_DeviceID_len
		, &pOpenAccountField_BankSecuAccType
		, &pOpenAccountField_BrokerIDByBank, &pOpenAccountField_BrokerIDByBank_len
		, &pOpenAccountField_BankSecuAcc, &pOpenAccountField_BankSecuAcc_len
		, &pOpenAccountField_BankPwdFlag
		, &pOpenAccountField_SecuPwdFlag
		, &pOpenAccountField_OperNo, &pOpenAccountField_OperNo_len
		, &pOpenAccountField_TID
		, &pOpenAccountField_UserID, &pOpenAccountField_UserID_len
		, &pOpenAccountField_ErrorID
		, &pOpenAccountField_ErrorMsg, &pOpenAccountField_ErrorMsg_len
		, &pOpenAccountField_LongCustomerName, &pOpenAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pOpenAccountField_TradeCode != NULL) {
		if(pOpenAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pOpenAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pOpenAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pOpenAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pOpenAccountField_BankID != NULL) {
		if(pOpenAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pOpenAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pOpenAccountField_BankID, sizeof(self->data.BankID) );
		pOpenAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pOpenAccountField_BankBranchID != NULL) {
		if(pOpenAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pOpenAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pOpenAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pOpenAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pOpenAccountField_BrokerID != NULL) {
		if(pOpenAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pOpenAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pOpenAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pOpenAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pOpenAccountField_BrokerBranchID != NULL) {
		if(pOpenAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pOpenAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pOpenAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pOpenAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pOpenAccountField_TradeDate != NULL) {
		if(pOpenAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pOpenAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pOpenAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pOpenAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pOpenAccountField_TradeTime != NULL) {
		if(pOpenAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pOpenAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pOpenAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pOpenAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pOpenAccountField_BankSerial != NULL) {
		if(pOpenAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pOpenAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pOpenAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pOpenAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pOpenAccountField_TradingDay != NULL) {
		if(pOpenAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pOpenAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pOpenAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pOpenAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pOpenAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pOpenAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pOpenAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pOpenAccountField_CustomerName != NULL) {
		if(pOpenAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pOpenAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pOpenAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pOpenAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pOpenAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pOpenAccountField_IdentifiedCardNo != NULL) {
		if(pOpenAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pOpenAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pOpenAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pOpenAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pOpenAccountField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pOpenAccountField_CountryCode != NULL) {
		if(pOpenAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pOpenAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pOpenAccountField_CountryCode, sizeof(self->data.CountryCode) );
		pOpenAccountField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pOpenAccountField_CustType;

	//TThostFtdcAddressType char[101]
	if(pOpenAccountField_Address != NULL) {
		if(pOpenAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pOpenAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pOpenAccountField_Address, sizeof(self->data.Address) );
		pOpenAccountField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pOpenAccountField_ZipCode != NULL) {
		if(pOpenAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pOpenAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pOpenAccountField_ZipCode, sizeof(self->data.ZipCode) );
		pOpenAccountField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pOpenAccountField_Telephone != NULL) {
		if(pOpenAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pOpenAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pOpenAccountField_Telephone, sizeof(self->data.Telephone) );
		pOpenAccountField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pOpenAccountField_MobilePhone != NULL) {
		if(pOpenAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pOpenAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pOpenAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
		pOpenAccountField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pOpenAccountField_Fax != NULL) {
		if(pOpenAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pOpenAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pOpenAccountField_Fax, sizeof(self->data.Fax) );
		pOpenAccountField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pOpenAccountField_EMail != NULL) {
		if(pOpenAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pOpenAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pOpenAccountField_EMail, sizeof(self->data.EMail) );
		pOpenAccountField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pOpenAccountField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pOpenAccountField_BankAccount != NULL) {
		if(pOpenAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pOpenAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pOpenAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pOpenAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pOpenAccountField_BankPassWord != NULL) {
		if(pOpenAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pOpenAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pOpenAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pOpenAccountField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pOpenAccountField_AccountID != NULL) {
		if(pOpenAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pOpenAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pOpenAccountField_AccountID, sizeof(self->data.AccountID) );
		pOpenAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pOpenAccountField_Password != NULL) {
		if(pOpenAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pOpenAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pOpenAccountField_Password, sizeof(self->data.Password) );
		pOpenAccountField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pOpenAccountField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pOpenAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pOpenAccountField_CurrencyID != NULL) {
		if(pOpenAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pOpenAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pOpenAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pOpenAccountField_CurrencyID = NULL;
	}

	//TThostFtdcCashExchangeCodeType char
	self->data.CashExchangeCode = pOpenAccountField_CashExchangeCode;

	//TThostFtdcDigestType char[36]
	if(pOpenAccountField_Digest != NULL) {
		if(pOpenAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pOpenAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pOpenAccountField_Digest, sizeof(self->data.Digest) );
		pOpenAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pOpenAccountField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pOpenAccountField_DeviceID != NULL) {
		if(pOpenAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pOpenAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pOpenAccountField_DeviceID, sizeof(self->data.DeviceID) );
		pOpenAccountField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pOpenAccountField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pOpenAccountField_BrokerIDByBank != NULL) {
		if(pOpenAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pOpenAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pOpenAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pOpenAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pOpenAccountField_BankSecuAcc != NULL) {
		if(pOpenAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pOpenAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pOpenAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pOpenAccountField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pOpenAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pOpenAccountField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pOpenAccountField_OperNo != NULL) {
		if(pOpenAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pOpenAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pOpenAccountField_OperNo, sizeof(self->data.OperNo) );
		pOpenAccountField_OperNo = NULL;
	}

	//TThostFtdcTIDType int
	self->data.TID = pOpenAccountField_TID;

	//TThostFtdcUserIDType char[16]
	if(pOpenAccountField_UserID != NULL) {
		if(pOpenAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pOpenAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pOpenAccountField_UserID, sizeof(self->data.UserID) );
		pOpenAccountField_UserID = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pOpenAccountField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pOpenAccountField_ErrorMsg != NULL) {
		if(pOpenAccountField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pOpenAccountField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pOpenAccountField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pOpenAccountField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pOpenAccountField_LongCustomerName != NULL) {
		if(pOpenAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pOpenAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pOpenAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pOpenAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcOpenAccountField_dealloc(PyCThostFtdcOpenAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOpenAccountField_repr(PyCThostFtdcOpenAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:i,s:s,s:s}"
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
		, "Gender", self->data.Gender
		, "CountryCode", self->data.CountryCode 
		, "CustType", self->data.CustType
		, "Address", self->data.Address 
		, "ZipCode", self->data.ZipCode 
		, "Telephone", self->data.Telephone 
		, "MobilePhone", self->data.MobilePhone 
		, "Fax", self->data.Fax 
		, "EMail", self->data.EMail 
		, "MoneyAccountStatus", self->data.MoneyAccountStatus
		, "BankAccount", self->data.BankAccount 
		, "BankPassWord", self->data.BankPassWord 
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "InstallID", self->data.InstallID
		, "VerifyCertNoFlag", self->data.VerifyCertNoFlag
		, "CurrencyID", self->data.CurrencyID 
		, "CashExchangeCode", self->data.CashExchangeCode
		, "Digest", self->data.Digest 
		, "BankAccType", self->data.BankAccType
		, "DeviceID", self->data.DeviceID 
		, "BankSecuAccType", self->data.BankSecuAccType
		, "BrokerIDByBank", self->data.BrokerIDByBank 
		, "BankSecuAcc", self->data.BankSecuAcc 
		, "BankPwdFlag", self->data.BankPwdFlag
		, "SecuPwdFlag", self->data.SecuPwdFlag
		, "OperNo", self->data.OperNo 
		, "TID", self->data.TID
		, "UserID", self->data.UserID 
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOpenAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcOpenAccountField_get_TradeCode(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankBranchID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BrokerID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BrokerBranchID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_TradeDate(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcOpenAccountField_get_TradeTime(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankSerial(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcOpenAccountField_get_TradingDay(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcOpenAccountField_get_PlateSerial(PyCThostFtdcOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcOpenAccountField_get_LastFragment(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_SessionID(PyCThostFtdcOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcOpenAccountField_get_CustomerName(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcOpenAccountField_get_IdCardType(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_IdentifiedCardNo(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcOpenAccountField_get_Gender(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_CountryCode(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcOpenAccountField_get_CustType(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_Address(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcOpenAccountField_get_ZipCode(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcOpenAccountField_get_Telephone(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcOpenAccountField_get_MobilePhone(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcOpenAccountField_get_Fax(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcOpenAccountField_get_EMail(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcOpenAccountField_get_MoneyAccountStatus(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankAccount(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankPassWord(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcOpenAccountField_get_AccountID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_Password(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcOpenAccountField_get_InstallID(PyCThostFtdcOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcOpenAccountField_get_VerifyCertNoFlag(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_CurrencyID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_CashExchangeCode(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CashExchangeCode), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_Digest(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankAccType(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_DeviceID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankSecuAccType(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BrokerIDByBank(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankSecuAcc(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcOpenAccountField_get_BankPwdFlag(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_SecuPwdFlag(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcOpenAccountField_get_OperNo(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcOpenAccountField_get_TID(PyCThostFtdcOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcOpenAccountField_get_UserID(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcOpenAccountField_get_ErrorID(PyCThostFtdcOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcOpenAccountField_get_ErrorMsg(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcOpenAccountField_get_LongCustomerName(PyCThostFtdcOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcOpenAccountField_set_TradeCode(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankBranchID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BrokerID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BrokerBranchID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_TradeDate(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_TradeTime(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankSerial(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_TradingDay(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_PlateSerial(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_LastFragment(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_SessionID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_CustomerName(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_IdCardType(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_IdentifiedCardNo(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_Gender(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Gender Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Gender)) {
		PyErr_SetString(PyExc_ValueError, "Gender must be less than 1 bytes");
		return -1;
	}
	self->data.Gender = *buf;
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_CountryCode(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CountryCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
		PyErr_SetString(PyExc_ValueError, "CountryCode must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.CountryCode, buf, sizeof(self->data.CountryCode));
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_CustType(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_Address(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Address)) {
		PyErr_SetString(PyExc_ValueError, "Address must be less than 101 bytes");
		return -1;
	}
	strncpy(self->data.Address, buf, sizeof(self->data.Address));
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_ZipCode(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
		PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 7 bytes");
		return -1;
	}
	strncpy(self->data.ZipCode, buf, sizeof(self->data.ZipCode));
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_Telephone(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Telephone)) {
		PyErr_SetString(PyExc_ValueError, "Telephone must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Telephone, buf, sizeof(self->data.Telephone));
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_MobilePhone(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MobilePhone Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
		PyErr_SetString(PyExc_ValueError, "MobilePhone must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.MobilePhone, buf, sizeof(self->data.MobilePhone));
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_Fax(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Fax Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Fax)) {
		PyErr_SetString(PyExc_ValueError, "Fax must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Fax, buf, sizeof(self->data.Fax));
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_EMail(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "EMail Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.EMail)) {
		PyErr_SetString(PyExc_ValueError, "EMail must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.EMail, buf, sizeof(self->data.EMail));
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_MoneyAccountStatus(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MoneyAccountStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MoneyAccountStatus)) {
		PyErr_SetString(PyExc_ValueError, "MoneyAccountStatus must be less than 1 bytes");
		return -1;
	}
	self->data.MoneyAccountStatus = *buf;
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_BankAccount(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankPassWord(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_AccountID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_Password(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_InstallID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_VerifyCertNoFlag(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_CurrencyID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_CashExchangeCode(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CashExchangeCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CashExchangeCode)) {
		PyErr_SetString(PyExc_ValueError, "CashExchangeCode must be less than 1 bytes");
		return -1;
	}
	self->data.CashExchangeCode = *buf;
	return 0;
}

static int PyCThostFtdcOpenAccountField_set_Digest(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankAccType(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_DeviceID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankSecuAccType(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BrokerIDByBank(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankSecuAcc(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_BankPwdFlag(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_SecuPwdFlag(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_OperNo(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_TID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_UserID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_ErrorID(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_ErrorMsg(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcOpenAccountField_set_LongCustomerName(PyCThostFtdcOpenAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcOpenAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcOpenAccountField_get_TradeCode, (setter)PyCThostFtdcOpenAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcOpenAccountField_get_BankID, (setter)PyCThostFtdcOpenAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcOpenAccountField_get_BankBranchID, (setter)PyCThostFtdcOpenAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcOpenAccountField_get_BrokerID, (setter)PyCThostFtdcOpenAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcOpenAccountField_get_BrokerBranchID, (setter)PyCThostFtdcOpenAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcOpenAccountField_get_TradeDate, (setter)PyCThostFtdcOpenAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcOpenAccountField_get_TradeTime, (setter)PyCThostFtdcOpenAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcOpenAccountField_get_BankSerial, (setter)PyCThostFtdcOpenAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcOpenAccountField_get_TradingDay, (setter)PyCThostFtdcOpenAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcOpenAccountField_get_PlateSerial, (setter)PyCThostFtdcOpenAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcOpenAccountField_get_LastFragment, (setter)PyCThostFtdcOpenAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcOpenAccountField_get_SessionID, (setter)PyCThostFtdcOpenAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcOpenAccountField_get_CustomerName, (setter)PyCThostFtdcOpenAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcOpenAccountField_get_IdCardType, (setter)PyCThostFtdcOpenAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcOpenAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcOpenAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcOpenAccountField_get_Gender, (setter)PyCThostFtdcOpenAccountField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcOpenAccountField_get_CountryCode, (setter)PyCThostFtdcOpenAccountField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcOpenAccountField_get_CustType, (setter)PyCThostFtdcOpenAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcOpenAccountField_get_Address, (setter)PyCThostFtdcOpenAccountField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcOpenAccountField_get_ZipCode, (setter)PyCThostFtdcOpenAccountField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcOpenAccountField_get_Telephone, (setter)PyCThostFtdcOpenAccountField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcOpenAccountField_get_MobilePhone, (setter)PyCThostFtdcOpenAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcOpenAccountField_get_Fax, (setter)PyCThostFtdcOpenAccountField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcOpenAccountField_get_EMail, (setter)PyCThostFtdcOpenAccountField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcOpenAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcOpenAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcOpenAccountField_get_BankAccount, (setter)PyCThostFtdcOpenAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcOpenAccountField_get_BankPassWord, (setter)PyCThostFtdcOpenAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcOpenAccountField_get_AccountID, (setter)PyCThostFtdcOpenAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcOpenAccountField_get_Password, (setter)PyCThostFtdcOpenAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcOpenAccountField_get_InstallID, (setter)PyCThostFtdcOpenAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcOpenAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcOpenAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcOpenAccountField_get_CurrencyID, (setter)PyCThostFtdcOpenAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"CashExchangeCode", (getter)PyCThostFtdcOpenAccountField_get_CashExchangeCode, (setter)PyCThostFtdcOpenAccountField_set_CashExchangeCode, (char *)"CashExchangeCode", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcOpenAccountField_get_Digest, (setter)PyCThostFtdcOpenAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcOpenAccountField_get_BankAccType, (setter)PyCThostFtdcOpenAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcOpenAccountField_get_DeviceID, (setter)PyCThostFtdcOpenAccountField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcOpenAccountField_get_BankSecuAccType, (setter)PyCThostFtdcOpenAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcOpenAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcOpenAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcOpenAccountField_get_BankSecuAcc, (setter)PyCThostFtdcOpenAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcOpenAccountField_get_BankPwdFlag, (setter)PyCThostFtdcOpenAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcOpenAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcOpenAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcOpenAccountField_get_OperNo, (setter)PyCThostFtdcOpenAccountField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcOpenAccountField_get_TID, (setter)PyCThostFtdcOpenAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcOpenAccountField_get_UserID, (setter)PyCThostFtdcOpenAccountField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcOpenAccountField_get_ErrorID, (setter)PyCThostFtdcOpenAccountField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcOpenAccountField_get_ErrorMsg, (setter)PyCThostFtdcOpenAccountField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcOpenAccountField_get_LongCustomerName, (setter)PyCThostFtdcOpenAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOpenAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOpenAccountField",	/* tp_name */
	sizeof(PyCThostFtdcOpenAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOpenAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOpenAccountField_repr,   /* tp_repr */
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
	"CThostFtdcOpenAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOpenAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOpenAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOpenAccountField_new,       /* tp_new */
};

int PyCThostFtdcOpenAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOpenAccountField  */
	if (PyType_Ready(&PyCThostFtdcOpenAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOpenAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOpenAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOpenAccountField", (PyObject *)&PyCThostFtdcOpenAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOpenAccountField to module");
        Py_DECREF(&PyCThostFtdcOpenAccountFieldType);
		return -1;
    }

    return 0;
}
