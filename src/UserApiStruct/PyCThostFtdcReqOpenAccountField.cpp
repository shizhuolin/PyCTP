
#include "PyCThostFtdcReqOpenAccountField.h"



static PyObject *PyCThostFtdcReqOpenAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqOpenAccountField *self = (PyCThostFtdcReqOpenAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqOpenAccountField_init(PyCThostFtdcReqOpenAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqOpenAccountField_TradeCode = NULL;
	Py_ssize_t pReqOpenAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqOpenAccountField_BankID = NULL;
	Py_ssize_t pReqOpenAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqOpenAccountField_BankBranchID = NULL;
	Py_ssize_t pReqOpenAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqOpenAccountField_BrokerID = NULL;
	Py_ssize_t pReqOpenAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqOpenAccountField_BrokerBranchID = NULL;
	Py_ssize_t pReqOpenAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqOpenAccountField_TradeDate = NULL;
	Py_ssize_t pReqOpenAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqOpenAccountField_TradeTime = NULL;
	Py_ssize_t pReqOpenAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqOpenAccountField_BankSerial = NULL;
	Py_ssize_t pReqOpenAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqOpenAccountField_TradingDay = NULL;
	Py_ssize_t pReqOpenAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqOpenAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqOpenAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqOpenAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqOpenAccountField_CustomerName = NULL;
	Py_ssize_t pReqOpenAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqOpenAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqOpenAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqOpenAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pReqOpenAccountField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pReqOpenAccountField_CountryCode = NULL;
	Py_ssize_t pReqOpenAccountField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pReqOpenAccountField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pReqOpenAccountField_Address = NULL;
	Py_ssize_t pReqOpenAccountField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pReqOpenAccountField_ZipCode = NULL;
	Py_ssize_t pReqOpenAccountField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pReqOpenAccountField_Telephone = NULL;
	Py_ssize_t pReqOpenAccountField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pReqOpenAccountField_MobilePhone = NULL;
	Py_ssize_t pReqOpenAccountField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pReqOpenAccountField_Fax = NULL;
	Py_ssize_t pReqOpenAccountField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pReqOpenAccountField_EMail = NULL;
	Py_ssize_t pReqOpenAccountField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pReqOpenAccountField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqOpenAccountField_BankAccount = NULL;
	Py_ssize_t pReqOpenAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqOpenAccountField_BankPassWord = NULL;
	Py_ssize_t pReqOpenAccountField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqOpenAccountField_AccountID = NULL;
	Py_ssize_t pReqOpenAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqOpenAccountField_Password = NULL;
	Py_ssize_t pReqOpenAccountField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pReqOpenAccountField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqOpenAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqOpenAccountField_CurrencyID = NULL;
	Py_ssize_t pReqOpenAccountField_CurrencyID_len = 0;

	//TThostFtdcCashExchangeCodeType char
	char pReqOpenAccountField_CashExchangeCode = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqOpenAccountField_Digest = NULL;
	Py_ssize_t pReqOpenAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqOpenAccountField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqOpenAccountField_DeviceID = NULL;
	Py_ssize_t pReqOpenAccountField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqOpenAccountField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqOpenAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pReqOpenAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqOpenAccountField_BankSecuAcc = NULL;
	Py_ssize_t pReqOpenAccountField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqOpenAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqOpenAccountField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqOpenAccountField_OperNo = NULL;
	Py_ssize_t pReqOpenAccountField_OperNo_len = 0;

	//TThostFtdcTIDType int
	int pReqOpenAccountField_TID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqOpenAccountField_UserID = NULL;
	Py_ssize_t pReqOpenAccountField_UserID_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqOpenAccountField_LongCustomerName = NULL;
	Py_ssize_t pReqOpenAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#ics#cs#cs#cs#s#ccs#is#s#", (char **)kwlist
#endif

		, &pReqOpenAccountField_TradeCode, &pReqOpenAccountField_TradeCode_len
		, &pReqOpenAccountField_BankID, &pReqOpenAccountField_BankID_len
		, &pReqOpenAccountField_BankBranchID, &pReqOpenAccountField_BankBranchID_len
		, &pReqOpenAccountField_BrokerID, &pReqOpenAccountField_BrokerID_len
		, &pReqOpenAccountField_BrokerBranchID, &pReqOpenAccountField_BrokerBranchID_len
		, &pReqOpenAccountField_TradeDate, &pReqOpenAccountField_TradeDate_len
		, &pReqOpenAccountField_TradeTime, &pReqOpenAccountField_TradeTime_len
		, &pReqOpenAccountField_BankSerial, &pReqOpenAccountField_BankSerial_len
		, &pReqOpenAccountField_TradingDay, &pReqOpenAccountField_TradingDay_len
		, &pReqOpenAccountField_PlateSerial
		, &pReqOpenAccountField_LastFragment
		, &pReqOpenAccountField_SessionID
		, &pReqOpenAccountField_CustomerName, &pReqOpenAccountField_CustomerName_len
		, &pReqOpenAccountField_IdCardType
		, &pReqOpenAccountField_IdentifiedCardNo, &pReqOpenAccountField_IdentifiedCardNo_len
		, &pReqOpenAccountField_Gender
		, &pReqOpenAccountField_CountryCode, &pReqOpenAccountField_CountryCode_len
		, &pReqOpenAccountField_CustType
		, &pReqOpenAccountField_Address, &pReqOpenAccountField_Address_len
		, &pReqOpenAccountField_ZipCode, &pReqOpenAccountField_ZipCode_len
		, &pReqOpenAccountField_Telephone, &pReqOpenAccountField_Telephone_len
		, &pReqOpenAccountField_MobilePhone, &pReqOpenAccountField_MobilePhone_len
		, &pReqOpenAccountField_Fax, &pReqOpenAccountField_Fax_len
		, &pReqOpenAccountField_EMail, &pReqOpenAccountField_EMail_len
		, &pReqOpenAccountField_MoneyAccountStatus
		, &pReqOpenAccountField_BankAccount, &pReqOpenAccountField_BankAccount_len
		, &pReqOpenAccountField_BankPassWord, &pReqOpenAccountField_BankPassWord_len
		, &pReqOpenAccountField_AccountID, &pReqOpenAccountField_AccountID_len
		, &pReqOpenAccountField_Password, &pReqOpenAccountField_Password_len
		, &pReqOpenAccountField_InstallID
		, &pReqOpenAccountField_VerifyCertNoFlag
		, &pReqOpenAccountField_CurrencyID, &pReqOpenAccountField_CurrencyID_len
		, &pReqOpenAccountField_CashExchangeCode
		, &pReqOpenAccountField_Digest, &pReqOpenAccountField_Digest_len
		, &pReqOpenAccountField_BankAccType
		, &pReqOpenAccountField_DeviceID, &pReqOpenAccountField_DeviceID_len
		, &pReqOpenAccountField_BankSecuAccType
		, &pReqOpenAccountField_BrokerIDByBank, &pReqOpenAccountField_BrokerIDByBank_len
		, &pReqOpenAccountField_BankSecuAcc, &pReqOpenAccountField_BankSecuAcc_len
		, &pReqOpenAccountField_BankPwdFlag
		, &pReqOpenAccountField_SecuPwdFlag
		, &pReqOpenAccountField_OperNo, &pReqOpenAccountField_OperNo_len
		, &pReqOpenAccountField_TID
		, &pReqOpenAccountField_UserID, &pReqOpenAccountField_UserID_len
		, &pReqOpenAccountField_LongCustomerName, &pReqOpenAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqOpenAccountField_TradeCode != NULL) {
		if(pReqOpenAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqOpenAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pReqOpenAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqOpenAccountField_BankID != NULL) {
		if(pReqOpenAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqOpenAccountField_BankID, sizeof(self->data.BankID) );
		pReqOpenAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqOpenAccountField_BankBranchID != NULL) {
		if(pReqOpenAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqOpenAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqOpenAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqOpenAccountField_BrokerID != NULL) {
		if(pReqOpenAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqOpenAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pReqOpenAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqOpenAccountField_BrokerBranchID != NULL) {
		if(pReqOpenAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqOpenAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqOpenAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqOpenAccountField_TradeDate != NULL) {
		if(pReqOpenAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqOpenAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pReqOpenAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqOpenAccountField_TradeTime != NULL) {
		if(pReqOpenAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqOpenAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pReqOpenAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqOpenAccountField_BankSerial != NULL) {
		if(pReqOpenAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqOpenAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pReqOpenAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqOpenAccountField_TradingDay != NULL) {
		if(pReqOpenAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqOpenAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pReqOpenAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqOpenAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqOpenAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqOpenAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqOpenAccountField_CustomerName != NULL) {
		if(pReqOpenAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqOpenAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pReqOpenAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqOpenAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqOpenAccountField_IdentifiedCardNo != NULL) {
		if(pReqOpenAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqOpenAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqOpenAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pReqOpenAccountField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pReqOpenAccountField_CountryCode != NULL) {
		if(pReqOpenAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pReqOpenAccountField_CountryCode, sizeof(self->data.CountryCode) );
		pReqOpenAccountField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqOpenAccountField_CustType;

	//TThostFtdcAddressType char[101]
	if(pReqOpenAccountField_Address != NULL) {
		if(pReqOpenAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pReqOpenAccountField_Address, sizeof(self->data.Address) );
		pReqOpenAccountField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pReqOpenAccountField_ZipCode != NULL) {
		if(pReqOpenAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pReqOpenAccountField_ZipCode, sizeof(self->data.ZipCode) );
		pReqOpenAccountField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pReqOpenAccountField_Telephone != NULL) {
		if(pReqOpenAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pReqOpenAccountField_Telephone, sizeof(self->data.Telephone) );
		pReqOpenAccountField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pReqOpenAccountField_MobilePhone != NULL) {
		if(pReqOpenAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pReqOpenAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
		pReqOpenAccountField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pReqOpenAccountField_Fax != NULL) {
		if(pReqOpenAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pReqOpenAccountField_Fax, sizeof(self->data.Fax) );
		pReqOpenAccountField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pReqOpenAccountField_EMail != NULL) {
		if(pReqOpenAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pReqOpenAccountField_EMail, sizeof(self->data.EMail) );
		pReqOpenAccountField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pReqOpenAccountField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pReqOpenAccountField_BankAccount != NULL) {
		if(pReqOpenAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqOpenAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pReqOpenAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqOpenAccountField_BankPassWord != NULL) {
		if(pReqOpenAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqOpenAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqOpenAccountField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqOpenAccountField_AccountID != NULL) {
		if(pReqOpenAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqOpenAccountField_AccountID, sizeof(self->data.AccountID) );
		pReqOpenAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqOpenAccountField_Password != NULL) {
		if(pReqOpenAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqOpenAccountField_Password, sizeof(self->data.Password) );
		pReqOpenAccountField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqOpenAccountField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqOpenAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqOpenAccountField_CurrencyID != NULL) {
		if(pReqOpenAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqOpenAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqOpenAccountField_CurrencyID = NULL;
	}

	//TThostFtdcCashExchangeCodeType char
	self->data.CashExchangeCode = pReqOpenAccountField_CashExchangeCode;

	//TThostFtdcDigestType char[36]
	if(pReqOpenAccountField_Digest != NULL) {
		if(pReqOpenAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqOpenAccountField_Digest, sizeof(self->data.Digest) );
		pReqOpenAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqOpenAccountField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pReqOpenAccountField_DeviceID != NULL) {
		if(pReqOpenAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqOpenAccountField_DeviceID, sizeof(self->data.DeviceID) );
		pReqOpenAccountField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pReqOpenAccountField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqOpenAccountField_BrokerIDByBank != NULL) {
		if(pReqOpenAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqOpenAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqOpenAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqOpenAccountField_BankSecuAcc != NULL) {
		if(pReqOpenAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pReqOpenAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pReqOpenAccountField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqOpenAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqOpenAccountField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pReqOpenAccountField_OperNo != NULL) {
		if(pReqOpenAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqOpenAccountField_OperNo, sizeof(self->data.OperNo) );
		pReqOpenAccountField_OperNo = NULL;
	}

	//TThostFtdcTIDType int
	self->data.TID = pReqOpenAccountField_TID;

	//TThostFtdcUserIDType char[16]
	if(pReqOpenAccountField_UserID != NULL) {
		if(pReqOpenAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqOpenAccountField_UserID, sizeof(self->data.UserID) );
		pReqOpenAccountField_UserID = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqOpenAccountField_LongCustomerName != NULL) {
		if(pReqOpenAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqOpenAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqOpenAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqOpenAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqOpenAccountField_dealloc(PyCThostFtdcReqOpenAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqOpenAccountField_repr(PyCThostFtdcReqOpenAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:s,s:s}"
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
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqOpenAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_TradeCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankBranchID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BrokerID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BrokerBranchID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_TradeDate(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_TradeTime(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankSerial(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_TradingDay(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_PlateSerial(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_LastFragment(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_SessionID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_CustomerName(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_IdCardType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_IdentifiedCardNo(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_Gender(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_CountryCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_CustType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_Address(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_ZipCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_Telephone(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_MobilePhone(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_Fax(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_EMail(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_MoneyAccountStatus(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankAccount(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankPassWord(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_AccountID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_Password(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_InstallID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_VerifyCertNoFlag(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_CurrencyID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_CashExchangeCode(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CashExchangeCode), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_Digest(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankAccType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_DeviceID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankSecuAccType(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BrokerIDByBank(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankSecuAcc(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_BankPwdFlag(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_SecuPwdFlag(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_OperNo(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_TID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_UserID(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqOpenAccountField_get_LongCustomerName(PyCThostFtdcReqOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcReqOpenAccountField_set_TradeCode(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankBranchID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BrokerID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BrokerBranchID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_TradeDate(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_TradeTime(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankSerial(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_TradingDay(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_PlateSerial(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_LastFragment(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_SessionID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_CustomerName(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_IdCardType(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_IdentifiedCardNo(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_Gender(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_CountryCode(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_CustType(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_Address(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_ZipCode(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_Telephone(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_MobilePhone(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_Fax(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_EMail(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_MoneyAccountStatus(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankAccount(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankPassWord(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_AccountID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_Password(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_InstallID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_VerifyCertNoFlag(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_CurrencyID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_CashExchangeCode(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_Digest(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankAccType(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_DeviceID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankSecuAccType(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BrokerIDByBank(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankSecuAcc(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_BankPwdFlag(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_SecuPwdFlag(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_OperNo(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_TID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_UserID(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqOpenAccountField_set_LongCustomerName(PyCThostFtdcReqOpenAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqOpenAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqOpenAccountField_get_TradeCode, (setter)PyCThostFtdcReqOpenAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqOpenAccountField_get_BankID, (setter)PyCThostFtdcReqOpenAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqOpenAccountField_get_BankBranchID, (setter)PyCThostFtdcReqOpenAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqOpenAccountField_get_BrokerID, (setter)PyCThostFtdcReqOpenAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqOpenAccountField_get_BrokerBranchID, (setter)PyCThostFtdcReqOpenAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqOpenAccountField_get_TradeDate, (setter)PyCThostFtdcReqOpenAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqOpenAccountField_get_TradeTime, (setter)PyCThostFtdcReqOpenAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqOpenAccountField_get_BankSerial, (setter)PyCThostFtdcReqOpenAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqOpenAccountField_get_TradingDay, (setter)PyCThostFtdcReqOpenAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqOpenAccountField_get_PlateSerial, (setter)PyCThostFtdcReqOpenAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqOpenAccountField_get_LastFragment, (setter)PyCThostFtdcReqOpenAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqOpenAccountField_get_SessionID, (setter)PyCThostFtdcReqOpenAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqOpenAccountField_get_CustomerName, (setter)PyCThostFtdcReqOpenAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqOpenAccountField_get_IdCardType, (setter)PyCThostFtdcReqOpenAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqOpenAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqOpenAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcReqOpenAccountField_get_Gender, (setter)PyCThostFtdcReqOpenAccountField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcReqOpenAccountField_get_CountryCode, (setter)PyCThostFtdcReqOpenAccountField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqOpenAccountField_get_CustType, (setter)PyCThostFtdcReqOpenAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcReqOpenAccountField_get_Address, (setter)PyCThostFtdcReqOpenAccountField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcReqOpenAccountField_get_ZipCode, (setter)PyCThostFtdcReqOpenAccountField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcReqOpenAccountField_get_Telephone, (setter)PyCThostFtdcReqOpenAccountField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcReqOpenAccountField_get_MobilePhone, (setter)PyCThostFtdcReqOpenAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcReqOpenAccountField_get_Fax, (setter)PyCThostFtdcReqOpenAccountField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcReqOpenAccountField_get_EMail, (setter)PyCThostFtdcReqOpenAccountField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReqOpenAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcReqOpenAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqOpenAccountField_get_BankAccount, (setter)PyCThostFtdcReqOpenAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqOpenAccountField_get_BankPassWord, (setter)PyCThostFtdcReqOpenAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqOpenAccountField_get_AccountID, (setter)PyCThostFtdcReqOpenAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqOpenAccountField_get_Password, (setter)PyCThostFtdcReqOpenAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqOpenAccountField_get_InstallID, (setter)PyCThostFtdcReqOpenAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqOpenAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqOpenAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqOpenAccountField_get_CurrencyID, (setter)PyCThostFtdcReqOpenAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"CashExchangeCode", (getter)PyCThostFtdcReqOpenAccountField_get_CashExchangeCode, (setter)PyCThostFtdcReqOpenAccountField_set_CashExchangeCode, (char *)"CashExchangeCode", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqOpenAccountField_get_Digest, (setter)PyCThostFtdcReqOpenAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqOpenAccountField_get_BankAccType, (setter)PyCThostFtdcReqOpenAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqOpenAccountField_get_DeviceID, (setter)PyCThostFtdcReqOpenAccountField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqOpenAccountField_get_BankSecuAccType, (setter)PyCThostFtdcReqOpenAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqOpenAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcReqOpenAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqOpenAccountField_get_BankSecuAcc, (setter)PyCThostFtdcReqOpenAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqOpenAccountField_get_BankPwdFlag, (setter)PyCThostFtdcReqOpenAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqOpenAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcReqOpenAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqOpenAccountField_get_OperNo, (setter)PyCThostFtdcReqOpenAccountField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqOpenAccountField_get_TID, (setter)PyCThostFtdcReqOpenAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqOpenAccountField_get_UserID, (setter)PyCThostFtdcReqOpenAccountField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqOpenAccountField_get_LongCustomerName, (setter)PyCThostFtdcReqOpenAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqOpenAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqOpenAccountField",	/* tp_name */
	sizeof(PyCThostFtdcReqOpenAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqOpenAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqOpenAccountField_repr,   /* tp_repr */
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
	"CThostFtdcReqOpenAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqOpenAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqOpenAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqOpenAccountField_new,       /* tp_new */
};

int PyCThostFtdcReqOpenAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqOpenAccountField  */
	if (PyType_Ready(&PyCThostFtdcReqOpenAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqOpenAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqOpenAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqOpenAccountField", (PyObject *)&PyCThostFtdcReqOpenAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqOpenAccountField to module");
        Py_DECREF(&PyCThostFtdcReqOpenAccountFieldType);
		return -1;
    }

    return 0;
}
