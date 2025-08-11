
#include "PyCThostFtdcCancelAccountField.h"



static PyObject *PyCThostFtdcCancelAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCancelAccountField *self = (PyCThostFtdcCancelAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcCancelAccountField_init(PyCThostFtdcCancelAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pCancelAccountField_TradeCode = NULL;
	Py_ssize_t pCancelAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pCancelAccountField_BankID = NULL;
	Py_ssize_t pCancelAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pCancelAccountField_BankBranchID = NULL;
	Py_ssize_t pCancelAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pCancelAccountField_BrokerID = NULL;
	Py_ssize_t pCancelAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pCancelAccountField_BrokerBranchID = NULL;
	Py_ssize_t pCancelAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pCancelAccountField_TradeDate = NULL;
	Py_ssize_t pCancelAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pCancelAccountField_TradeTime = NULL;
	Py_ssize_t pCancelAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pCancelAccountField_BankSerial = NULL;
	Py_ssize_t pCancelAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pCancelAccountField_TradingDay = NULL;
	Py_ssize_t pCancelAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pCancelAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pCancelAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pCancelAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pCancelAccountField_CustomerName = NULL;
	Py_ssize_t pCancelAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pCancelAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pCancelAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pCancelAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pCancelAccountField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pCancelAccountField_CountryCode = NULL;
	Py_ssize_t pCancelAccountField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pCancelAccountField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pCancelAccountField_Address = NULL;
	Py_ssize_t pCancelAccountField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pCancelAccountField_ZipCode = NULL;
	Py_ssize_t pCancelAccountField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pCancelAccountField_Telephone = NULL;
	Py_ssize_t pCancelAccountField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pCancelAccountField_MobilePhone = NULL;
	Py_ssize_t pCancelAccountField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pCancelAccountField_Fax = NULL;
	Py_ssize_t pCancelAccountField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pCancelAccountField_EMail = NULL;
	Py_ssize_t pCancelAccountField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pCancelAccountField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pCancelAccountField_BankAccount = NULL;
	Py_ssize_t pCancelAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pCancelAccountField_BankPassWord = NULL;
	Py_ssize_t pCancelAccountField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pCancelAccountField_AccountID = NULL;
	Py_ssize_t pCancelAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pCancelAccountField_Password = NULL;
	Py_ssize_t pCancelAccountField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pCancelAccountField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pCancelAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pCancelAccountField_CurrencyID = NULL;
	Py_ssize_t pCancelAccountField_CurrencyID_len = 0;

	//TThostFtdcCashExchangeCodeType char
	char pCancelAccountField_CashExchangeCode = 0;

	//TThostFtdcDigestType char[36]
	const char *pCancelAccountField_Digest = NULL;
	Py_ssize_t pCancelAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pCancelAccountField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pCancelAccountField_DeviceID = NULL;
	Py_ssize_t pCancelAccountField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pCancelAccountField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pCancelAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pCancelAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pCancelAccountField_BankSecuAcc = NULL;
	Py_ssize_t pCancelAccountField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pCancelAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pCancelAccountField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pCancelAccountField_OperNo = NULL;
	Py_ssize_t pCancelAccountField_OperNo_len = 0;

	//TThostFtdcTIDType int
	int pCancelAccountField_TID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pCancelAccountField_UserID = NULL;
	Py_ssize_t pCancelAccountField_UserID_len = 0;

	//TThostFtdcErrorIDType int
	int pCancelAccountField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pCancelAccountField_ErrorMsg = NULL;
	Py_ssize_t pCancelAccountField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pCancelAccountField_LongCustomerName = NULL;
	Py_ssize_t pCancelAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#ics#cs#cs#cs#s#ccs#is#is#s#", (char **)kwlist
#endif

		, &pCancelAccountField_TradeCode, &pCancelAccountField_TradeCode_len
		, &pCancelAccountField_BankID, &pCancelAccountField_BankID_len
		, &pCancelAccountField_BankBranchID, &pCancelAccountField_BankBranchID_len
		, &pCancelAccountField_BrokerID, &pCancelAccountField_BrokerID_len
		, &pCancelAccountField_BrokerBranchID, &pCancelAccountField_BrokerBranchID_len
		, &pCancelAccountField_TradeDate, &pCancelAccountField_TradeDate_len
		, &pCancelAccountField_TradeTime, &pCancelAccountField_TradeTime_len
		, &pCancelAccountField_BankSerial, &pCancelAccountField_BankSerial_len
		, &pCancelAccountField_TradingDay, &pCancelAccountField_TradingDay_len
		, &pCancelAccountField_PlateSerial
		, &pCancelAccountField_LastFragment
		, &pCancelAccountField_SessionID
		, &pCancelAccountField_CustomerName, &pCancelAccountField_CustomerName_len
		, &pCancelAccountField_IdCardType
		, &pCancelAccountField_IdentifiedCardNo, &pCancelAccountField_IdentifiedCardNo_len
		, &pCancelAccountField_Gender
		, &pCancelAccountField_CountryCode, &pCancelAccountField_CountryCode_len
		, &pCancelAccountField_CustType
		, &pCancelAccountField_Address, &pCancelAccountField_Address_len
		, &pCancelAccountField_ZipCode, &pCancelAccountField_ZipCode_len
		, &pCancelAccountField_Telephone, &pCancelAccountField_Telephone_len
		, &pCancelAccountField_MobilePhone, &pCancelAccountField_MobilePhone_len
		, &pCancelAccountField_Fax, &pCancelAccountField_Fax_len
		, &pCancelAccountField_EMail, &pCancelAccountField_EMail_len
		, &pCancelAccountField_MoneyAccountStatus
		, &pCancelAccountField_BankAccount, &pCancelAccountField_BankAccount_len
		, &pCancelAccountField_BankPassWord, &pCancelAccountField_BankPassWord_len
		, &pCancelAccountField_AccountID, &pCancelAccountField_AccountID_len
		, &pCancelAccountField_Password, &pCancelAccountField_Password_len
		, &pCancelAccountField_InstallID
		, &pCancelAccountField_VerifyCertNoFlag
		, &pCancelAccountField_CurrencyID, &pCancelAccountField_CurrencyID_len
		, &pCancelAccountField_CashExchangeCode
		, &pCancelAccountField_Digest, &pCancelAccountField_Digest_len
		, &pCancelAccountField_BankAccType
		, &pCancelAccountField_DeviceID, &pCancelAccountField_DeviceID_len
		, &pCancelAccountField_BankSecuAccType
		, &pCancelAccountField_BrokerIDByBank, &pCancelAccountField_BrokerIDByBank_len
		, &pCancelAccountField_BankSecuAcc, &pCancelAccountField_BankSecuAcc_len
		, &pCancelAccountField_BankPwdFlag
		, &pCancelAccountField_SecuPwdFlag
		, &pCancelAccountField_OperNo, &pCancelAccountField_OperNo_len
		, &pCancelAccountField_TID
		, &pCancelAccountField_UserID, &pCancelAccountField_UserID_len
		, &pCancelAccountField_ErrorID
		, &pCancelAccountField_ErrorMsg, &pCancelAccountField_ErrorMsg_len
		, &pCancelAccountField_LongCustomerName, &pCancelAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pCancelAccountField_TradeCode != NULL) {
		if(pCancelAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pCancelAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pCancelAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pCancelAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pCancelAccountField_BankID != NULL) {
		if(pCancelAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pCancelAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pCancelAccountField_BankID, sizeof(self->data.BankID) );
		pCancelAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pCancelAccountField_BankBranchID != NULL) {
		if(pCancelAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pCancelAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pCancelAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pCancelAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pCancelAccountField_BrokerID != NULL) {
		if(pCancelAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pCancelAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pCancelAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pCancelAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pCancelAccountField_BrokerBranchID != NULL) {
		if(pCancelAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pCancelAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pCancelAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pCancelAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pCancelAccountField_TradeDate != NULL) {
		if(pCancelAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pCancelAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pCancelAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pCancelAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pCancelAccountField_TradeTime != NULL) {
		if(pCancelAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pCancelAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pCancelAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pCancelAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pCancelAccountField_BankSerial != NULL) {
		if(pCancelAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pCancelAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pCancelAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pCancelAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pCancelAccountField_TradingDay != NULL) {
		if(pCancelAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pCancelAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pCancelAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pCancelAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pCancelAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pCancelAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pCancelAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pCancelAccountField_CustomerName != NULL) {
		if(pCancelAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pCancelAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pCancelAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pCancelAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pCancelAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pCancelAccountField_IdentifiedCardNo != NULL) {
		if(pCancelAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pCancelAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pCancelAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pCancelAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pCancelAccountField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pCancelAccountField_CountryCode != NULL) {
		if(pCancelAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pCancelAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pCancelAccountField_CountryCode, sizeof(self->data.CountryCode) );
		pCancelAccountField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pCancelAccountField_CustType;

	//TThostFtdcAddressType char[101]
	if(pCancelAccountField_Address != NULL) {
		if(pCancelAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pCancelAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pCancelAccountField_Address, sizeof(self->data.Address) );
		pCancelAccountField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pCancelAccountField_ZipCode != NULL) {
		if(pCancelAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pCancelAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pCancelAccountField_ZipCode, sizeof(self->data.ZipCode) );
		pCancelAccountField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pCancelAccountField_Telephone != NULL) {
		if(pCancelAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pCancelAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pCancelAccountField_Telephone, sizeof(self->data.Telephone) );
		pCancelAccountField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pCancelAccountField_MobilePhone != NULL) {
		if(pCancelAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pCancelAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pCancelAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
		pCancelAccountField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pCancelAccountField_Fax != NULL) {
		if(pCancelAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pCancelAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pCancelAccountField_Fax, sizeof(self->data.Fax) );
		pCancelAccountField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pCancelAccountField_EMail != NULL) {
		if(pCancelAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pCancelAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pCancelAccountField_EMail, sizeof(self->data.EMail) );
		pCancelAccountField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pCancelAccountField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pCancelAccountField_BankAccount != NULL) {
		if(pCancelAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pCancelAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pCancelAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pCancelAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pCancelAccountField_BankPassWord != NULL) {
		if(pCancelAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pCancelAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pCancelAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pCancelAccountField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pCancelAccountField_AccountID != NULL) {
		if(pCancelAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pCancelAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pCancelAccountField_AccountID, sizeof(self->data.AccountID) );
		pCancelAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pCancelAccountField_Password != NULL) {
		if(pCancelAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pCancelAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pCancelAccountField_Password, sizeof(self->data.Password) );
		pCancelAccountField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pCancelAccountField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pCancelAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pCancelAccountField_CurrencyID != NULL) {
		if(pCancelAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pCancelAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pCancelAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pCancelAccountField_CurrencyID = NULL;
	}

	//TThostFtdcCashExchangeCodeType char
	self->data.CashExchangeCode = pCancelAccountField_CashExchangeCode;

	//TThostFtdcDigestType char[36]
	if(pCancelAccountField_Digest != NULL) {
		if(pCancelAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pCancelAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pCancelAccountField_Digest, sizeof(self->data.Digest) );
		pCancelAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pCancelAccountField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pCancelAccountField_DeviceID != NULL) {
		if(pCancelAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pCancelAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pCancelAccountField_DeviceID, sizeof(self->data.DeviceID) );
		pCancelAccountField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pCancelAccountField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pCancelAccountField_BrokerIDByBank != NULL) {
		if(pCancelAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pCancelAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pCancelAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pCancelAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pCancelAccountField_BankSecuAcc != NULL) {
		if(pCancelAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pCancelAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pCancelAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pCancelAccountField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pCancelAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pCancelAccountField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pCancelAccountField_OperNo != NULL) {
		if(pCancelAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pCancelAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pCancelAccountField_OperNo, sizeof(self->data.OperNo) );
		pCancelAccountField_OperNo = NULL;
	}

	//TThostFtdcTIDType int
	self->data.TID = pCancelAccountField_TID;

	//TThostFtdcUserIDType char[16]
	if(pCancelAccountField_UserID != NULL) {
		if(pCancelAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pCancelAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pCancelAccountField_UserID, sizeof(self->data.UserID) );
		pCancelAccountField_UserID = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pCancelAccountField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pCancelAccountField_ErrorMsg != NULL) {
		if(pCancelAccountField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pCancelAccountField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pCancelAccountField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pCancelAccountField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pCancelAccountField_LongCustomerName != NULL) {
		if(pCancelAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pCancelAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pCancelAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pCancelAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcCancelAccountField_dealloc(PyCThostFtdcCancelAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCancelAccountField_repr(PyCThostFtdcCancelAccountField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCancelAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcCancelAccountField_get_TradeCode(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankBranchID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BrokerID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BrokerBranchID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_TradeDate(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcCancelAccountField_get_TradeTime(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankSerial(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcCancelAccountField_get_TradingDay(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcCancelAccountField_get_PlateSerial(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcCancelAccountField_get_LastFragment(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_SessionID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcCancelAccountField_get_CustomerName(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcCancelAccountField_get_IdCardType(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_IdentifiedCardNo(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcCancelAccountField_get_Gender(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_CountryCode(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcCancelAccountField_get_CustType(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_Address(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcCancelAccountField_get_ZipCode(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcCancelAccountField_get_Telephone(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcCancelAccountField_get_MobilePhone(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcCancelAccountField_get_Fax(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcCancelAccountField_get_EMail(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcCancelAccountField_get_MoneyAccountStatus(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankAccount(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankPassWord(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcCancelAccountField_get_AccountID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_Password(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcCancelAccountField_get_InstallID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcCancelAccountField_get_VerifyCertNoFlag(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_CurrencyID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_CashExchangeCode(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CashExchangeCode), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_Digest(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankAccType(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_DeviceID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankSecuAccType(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BrokerIDByBank(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankSecuAcc(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcCancelAccountField_get_BankPwdFlag(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_SecuPwdFlag(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcCancelAccountField_get_OperNo(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcCancelAccountField_get_TID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcCancelAccountField_get_UserID(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcCancelAccountField_get_ErrorID(PyCThostFtdcCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcCancelAccountField_get_ErrorMsg(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcCancelAccountField_get_LongCustomerName(PyCThostFtdcCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcCancelAccountField_set_TradeCode(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankBranchID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BrokerID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BrokerBranchID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_TradeDate(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_TradeTime(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankSerial(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_TradingDay(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_PlateSerial(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_LastFragment(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_SessionID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_CustomerName(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_IdCardType(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_IdentifiedCardNo(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_Gender(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_CountryCode(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_CustType(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_Address(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_ZipCode(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_Telephone(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_MobilePhone(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_Fax(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_EMail(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_MoneyAccountStatus(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankAccount(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankPassWord(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_AccountID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_Password(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_InstallID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_VerifyCertNoFlag(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_CurrencyID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_CashExchangeCode(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_Digest(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankAccType(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_DeviceID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankSecuAccType(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BrokerIDByBank(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankSecuAcc(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_BankPwdFlag(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_SecuPwdFlag(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_OperNo(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_TID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_UserID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_ErrorID(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_ErrorMsg(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcCancelAccountField_set_LongCustomerName(PyCThostFtdcCancelAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcCancelAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcCancelAccountField_get_TradeCode, (setter)PyCThostFtdcCancelAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcCancelAccountField_get_BankID, (setter)PyCThostFtdcCancelAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcCancelAccountField_get_BankBranchID, (setter)PyCThostFtdcCancelAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcCancelAccountField_get_BrokerID, (setter)PyCThostFtdcCancelAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcCancelAccountField_get_BrokerBranchID, (setter)PyCThostFtdcCancelAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcCancelAccountField_get_TradeDate, (setter)PyCThostFtdcCancelAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcCancelAccountField_get_TradeTime, (setter)PyCThostFtdcCancelAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcCancelAccountField_get_BankSerial, (setter)PyCThostFtdcCancelAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcCancelAccountField_get_TradingDay, (setter)PyCThostFtdcCancelAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcCancelAccountField_get_PlateSerial, (setter)PyCThostFtdcCancelAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcCancelAccountField_get_LastFragment, (setter)PyCThostFtdcCancelAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcCancelAccountField_get_SessionID, (setter)PyCThostFtdcCancelAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcCancelAccountField_get_CustomerName, (setter)PyCThostFtdcCancelAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcCancelAccountField_get_IdCardType, (setter)PyCThostFtdcCancelAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcCancelAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcCancelAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcCancelAccountField_get_Gender, (setter)PyCThostFtdcCancelAccountField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcCancelAccountField_get_CountryCode, (setter)PyCThostFtdcCancelAccountField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcCancelAccountField_get_CustType, (setter)PyCThostFtdcCancelAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcCancelAccountField_get_Address, (setter)PyCThostFtdcCancelAccountField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcCancelAccountField_get_ZipCode, (setter)PyCThostFtdcCancelAccountField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcCancelAccountField_get_Telephone, (setter)PyCThostFtdcCancelAccountField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcCancelAccountField_get_MobilePhone, (setter)PyCThostFtdcCancelAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcCancelAccountField_get_Fax, (setter)PyCThostFtdcCancelAccountField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcCancelAccountField_get_EMail, (setter)PyCThostFtdcCancelAccountField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcCancelAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcCancelAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcCancelAccountField_get_BankAccount, (setter)PyCThostFtdcCancelAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcCancelAccountField_get_BankPassWord, (setter)PyCThostFtdcCancelAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcCancelAccountField_get_AccountID, (setter)PyCThostFtdcCancelAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcCancelAccountField_get_Password, (setter)PyCThostFtdcCancelAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcCancelAccountField_get_InstallID, (setter)PyCThostFtdcCancelAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcCancelAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcCancelAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcCancelAccountField_get_CurrencyID, (setter)PyCThostFtdcCancelAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"CashExchangeCode", (getter)PyCThostFtdcCancelAccountField_get_CashExchangeCode, (setter)PyCThostFtdcCancelAccountField_set_CashExchangeCode, (char *)"CashExchangeCode", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcCancelAccountField_get_Digest, (setter)PyCThostFtdcCancelAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcCancelAccountField_get_BankAccType, (setter)PyCThostFtdcCancelAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcCancelAccountField_get_DeviceID, (setter)PyCThostFtdcCancelAccountField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcCancelAccountField_get_BankSecuAccType, (setter)PyCThostFtdcCancelAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcCancelAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcCancelAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcCancelAccountField_get_BankSecuAcc, (setter)PyCThostFtdcCancelAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcCancelAccountField_get_BankPwdFlag, (setter)PyCThostFtdcCancelAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcCancelAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcCancelAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcCancelAccountField_get_OperNo, (setter)PyCThostFtdcCancelAccountField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcCancelAccountField_get_TID, (setter)PyCThostFtdcCancelAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcCancelAccountField_get_UserID, (setter)PyCThostFtdcCancelAccountField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcCancelAccountField_get_ErrorID, (setter)PyCThostFtdcCancelAccountField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcCancelAccountField_get_ErrorMsg, (setter)PyCThostFtdcCancelAccountField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcCancelAccountField_get_LongCustomerName, (setter)PyCThostFtdcCancelAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCancelAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCancelAccountField",	/* tp_name */
	sizeof(PyCThostFtdcCancelAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCancelAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCancelAccountField_repr,   /* tp_repr */
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
	"CThostFtdcCancelAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCancelAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCancelAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCancelAccountField_new,       /* tp_new */
};

int PyCThostFtdcCancelAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCancelAccountField  */
	if (PyType_Ready(&PyCThostFtdcCancelAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCancelAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCancelAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCancelAccountField", (PyObject *)&PyCThostFtdcCancelAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCancelAccountField to module");
        Py_DECREF(&PyCThostFtdcCancelAccountFieldType);
		return -1;
    }

    return 0;
}
