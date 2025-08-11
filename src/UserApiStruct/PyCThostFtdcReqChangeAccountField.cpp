
#include "PyCThostFtdcReqChangeAccountField.h"



static PyObject *PyCThostFtdcReqChangeAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqChangeAccountField *self = (PyCThostFtdcReqChangeAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqChangeAccountField_init(PyCThostFtdcReqChangeAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "NewBankAccount", "NewBankPassWord", "AccountID", "Password", "BankAccType", "InstallID", "VerifyCertNoFlag", "CurrencyID", "BrokerIDByBank", "BankPwdFlag", "SecuPwdFlag", "TID", "Digest", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqChangeAccountField_TradeCode = NULL;
	Py_ssize_t pReqChangeAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqChangeAccountField_BankID = NULL;
	Py_ssize_t pReqChangeAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqChangeAccountField_BankBranchID = NULL;
	Py_ssize_t pReqChangeAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqChangeAccountField_BrokerID = NULL;
	Py_ssize_t pReqChangeAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqChangeAccountField_BrokerBranchID = NULL;
	Py_ssize_t pReqChangeAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqChangeAccountField_TradeDate = NULL;
	Py_ssize_t pReqChangeAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqChangeAccountField_TradeTime = NULL;
	Py_ssize_t pReqChangeAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqChangeAccountField_BankSerial = NULL;
	Py_ssize_t pReqChangeAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqChangeAccountField_TradingDay = NULL;
	Py_ssize_t pReqChangeAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqChangeAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqChangeAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqChangeAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqChangeAccountField_CustomerName = NULL;
	Py_ssize_t pReqChangeAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqChangeAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqChangeAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqChangeAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pReqChangeAccountField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pReqChangeAccountField_CountryCode = NULL;
	Py_ssize_t pReqChangeAccountField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pReqChangeAccountField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pReqChangeAccountField_Address = NULL;
	Py_ssize_t pReqChangeAccountField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pReqChangeAccountField_ZipCode = NULL;
	Py_ssize_t pReqChangeAccountField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pReqChangeAccountField_Telephone = NULL;
	Py_ssize_t pReqChangeAccountField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pReqChangeAccountField_MobilePhone = NULL;
	Py_ssize_t pReqChangeAccountField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pReqChangeAccountField_Fax = NULL;
	Py_ssize_t pReqChangeAccountField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pReqChangeAccountField_EMail = NULL;
	Py_ssize_t pReqChangeAccountField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pReqChangeAccountField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqChangeAccountField_BankAccount = NULL;
	Py_ssize_t pReqChangeAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqChangeAccountField_BankPassWord = NULL;
	Py_ssize_t pReqChangeAccountField_BankPassWord_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqChangeAccountField_NewBankAccount = NULL;
	Py_ssize_t pReqChangeAccountField_NewBankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqChangeAccountField_NewBankPassWord = NULL;
	Py_ssize_t pReqChangeAccountField_NewBankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqChangeAccountField_AccountID = NULL;
	Py_ssize_t pReqChangeAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqChangeAccountField_Password = NULL;
	Py_ssize_t pReqChangeAccountField_Password_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqChangeAccountField_BankAccType = 0;

	//TThostFtdcInstallIDType int
	int pReqChangeAccountField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqChangeAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqChangeAccountField_CurrencyID = NULL;
	Py_ssize_t pReqChangeAccountField_CurrencyID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqChangeAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pReqChangeAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqChangeAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqChangeAccountField_SecuPwdFlag = 0;

	//TThostFtdcTIDType int
	int pReqChangeAccountField_TID = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqChangeAccountField_Digest = NULL;
	Py_ssize_t pReqChangeAccountField_Digest_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqChangeAccountField_LongCustomerName = NULL;
	Py_ssize_t pReqChangeAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#y#y#cicy#y#cciy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#s#s#cics#s#ccis#s#", (char **)kwlist
#endif

		, &pReqChangeAccountField_TradeCode, &pReqChangeAccountField_TradeCode_len
		, &pReqChangeAccountField_BankID, &pReqChangeAccountField_BankID_len
		, &pReqChangeAccountField_BankBranchID, &pReqChangeAccountField_BankBranchID_len
		, &pReqChangeAccountField_BrokerID, &pReqChangeAccountField_BrokerID_len
		, &pReqChangeAccountField_BrokerBranchID, &pReqChangeAccountField_BrokerBranchID_len
		, &pReqChangeAccountField_TradeDate, &pReqChangeAccountField_TradeDate_len
		, &pReqChangeAccountField_TradeTime, &pReqChangeAccountField_TradeTime_len
		, &pReqChangeAccountField_BankSerial, &pReqChangeAccountField_BankSerial_len
		, &pReqChangeAccountField_TradingDay, &pReqChangeAccountField_TradingDay_len
		, &pReqChangeAccountField_PlateSerial
		, &pReqChangeAccountField_LastFragment
		, &pReqChangeAccountField_SessionID
		, &pReqChangeAccountField_CustomerName, &pReqChangeAccountField_CustomerName_len
		, &pReqChangeAccountField_IdCardType
		, &pReqChangeAccountField_IdentifiedCardNo, &pReqChangeAccountField_IdentifiedCardNo_len
		, &pReqChangeAccountField_Gender
		, &pReqChangeAccountField_CountryCode, &pReqChangeAccountField_CountryCode_len
		, &pReqChangeAccountField_CustType
		, &pReqChangeAccountField_Address, &pReqChangeAccountField_Address_len
		, &pReqChangeAccountField_ZipCode, &pReqChangeAccountField_ZipCode_len
		, &pReqChangeAccountField_Telephone, &pReqChangeAccountField_Telephone_len
		, &pReqChangeAccountField_MobilePhone, &pReqChangeAccountField_MobilePhone_len
		, &pReqChangeAccountField_Fax, &pReqChangeAccountField_Fax_len
		, &pReqChangeAccountField_EMail, &pReqChangeAccountField_EMail_len
		, &pReqChangeAccountField_MoneyAccountStatus
		, &pReqChangeAccountField_BankAccount, &pReqChangeAccountField_BankAccount_len
		, &pReqChangeAccountField_BankPassWord, &pReqChangeAccountField_BankPassWord_len
		, &pReqChangeAccountField_NewBankAccount, &pReqChangeAccountField_NewBankAccount_len
		, &pReqChangeAccountField_NewBankPassWord, &pReqChangeAccountField_NewBankPassWord_len
		, &pReqChangeAccountField_AccountID, &pReqChangeAccountField_AccountID_len
		, &pReqChangeAccountField_Password, &pReqChangeAccountField_Password_len
		, &pReqChangeAccountField_BankAccType
		, &pReqChangeAccountField_InstallID
		, &pReqChangeAccountField_VerifyCertNoFlag
		, &pReqChangeAccountField_CurrencyID, &pReqChangeAccountField_CurrencyID_len
		, &pReqChangeAccountField_BrokerIDByBank, &pReqChangeAccountField_BrokerIDByBank_len
		, &pReqChangeAccountField_BankPwdFlag
		, &pReqChangeAccountField_SecuPwdFlag
		, &pReqChangeAccountField_TID
		, &pReqChangeAccountField_Digest, &pReqChangeAccountField_Digest_len
		, &pReqChangeAccountField_LongCustomerName, &pReqChangeAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqChangeAccountField_TradeCode != NULL) {
		if(pReqChangeAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqChangeAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pReqChangeAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqChangeAccountField_BankID != NULL) {
		if(pReqChangeAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqChangeAccountField_BankID, sizeof(self->data.BankID) );
		pReqChangeAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqChangeAccountField_BankBranchID != NULL) {
		if(pReqChangeAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqChangeAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqChangeAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqChangeAccountField_BrokerID != NULL) {
		if(pReqChangeAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqChangeAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pReqChangeAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqChangeAccountField_BrokerBranchID != NULL) {
		if(pReqChangeAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqChangeAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqChangeAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqChangeAccountField_TradeDate != NULL) {
		if(pReqChangeAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqChangeAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pReqChangeAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqChangeAccountField_TradeTime != NULL) {
		if(pReqChangeAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqChangeAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pReqChangeAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqChangeAccountField_BankSerial != NULL) {
		if(pReqChangeAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqChangeAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pReqChangeAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqChangeAccountField_TradingDay != NULL) {
		if(pReqChangeAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqChangeAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pReqChangeAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqChangeAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqChangeAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqChangeAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqChangeAccountField_CustomerName != NULL) {
		if(pReqChangeAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqChangeAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pReqChangeAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqChangeAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqChangeAccountField_IdentifiedCardNo != NULL) {
		if(pReqChangeAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqChangeAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqChangeAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pReqChangeAccountField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pReqChangeAccountField_CountryCode != NULL) {
		if(pReqChangeAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pReqChangeAccountField_CountryCode, sizeof(self->data.CountryCode) );
		pReqChangeAccountField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqChangeAccountField_CustType;

	//TThostFtdcAddressType char[101]
	if(pReqChangeAccountField_Address != NULL) {
		if(pReqChangeAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pReqChangeAccountField_Address, sizeof(self->data.Address) );
		pReqChangeAccountField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pReqChangeAccountField_ZipCode != NULL) {
		if(pReqChangeAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pReqChangeAccountField_ZipCode, sizeof(self->data.ZipCode) );
		pReqChangeAccountField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pReqChangeAccountField_Telephone != NULL) {
		if(pReqChangeAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pReqChangeAccountField_Telephone, sizeof(self->data.Telephone) );
		pReqChangeAccountField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pReqChangeAccountField_MobilePhone != NULL) {
		if(pReqChangeAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pReqChangeAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
		pReqChangeAccountField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pReqChangeAccountField_Fax != NULL) {
		if(pReqChangeAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pReqChangeAccountField_Fax, sizeof(self->data.Fax) );
		pReqChangeAccountField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pReqChangeAccountField_EMail != NULL) {
		if(pReqChangeAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pReqChangeAccountField_EMail, sizeof(self->data.EMail) );
		pReqChangeAccountField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pReqChangeAccountField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pReqChangeAccountField_BankAccount != NULL) {
		if(pReqChangeAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqChangeAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pReqChangeAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqChangeAccountField_BankPassWord != NULL) {
		if(pReqChangeAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqChangeAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqChangeAccountField_BankPassWord = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqChangeAccountField_NewBankAccount != NULL) {
		if(pReqChangeAccountField_NewBankAccount_len > (Py_ssize_t)sizeof(self->data.NewBankAccount)) {
			PyErr_Format(PyExc_ValueError, "NewBankAccount too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_NewBankAccount_len, (Py_ssize_t)sizeof(self->data.NewBankAccount));
			return -1;
		}
		strncpy(self->data.NewBankAccount, pReqChangeAccountField_NewBankAccount, sizeof(self->data.NewBankAccount) );
		pReqChangeAccountField_NewBankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqChangeAccountField_NewBankPassWord != NULL) {
		if(pReqChangeAccountField_NewBankPassWord_len > (Py_ssize_t)sizeof(self->data.NewBankPassWord)) {
			PyErr_Format(PyExc_ValueError, "NewBankPassWord too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_NewBankPassWord_len, (Py_ssize_t)sizeof(self->data.NewBankPassWord));
			return -1;
		}
		strncpy(self->data.NewBankPassWord, pReqChangeAccountField_NewBankPassWord, sizeof(self->data.NewBankPassWord) );
		pReqChangeAccountField_NewBankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqChangeAccountField_AccountID != NULL) {
		if(pReqChangeAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqChangeAccountField_AccountID, sizeof(self->data.AccountID) );
		pReqChangeAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqChangeAccountField_Password != NULL) {
		if(pReqChangeAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqChangeAccountField_Password, sizeof(self->data.Password) );
		pReqChangeAccountField_Password = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqChangeAccountField_BankAccType;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqChangeAccountField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqChangeAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqChangeAccountField_CurrencyID != NULL) {
		if(pReqChangeAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqChangeAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqChangeAccountField_CurrencyID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqChangeAccountField_BrokerIDByBank != NULL) {
		if(pReqChangeAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqChangeAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqChangeAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqChangeAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqChangeAccountField_SecuPwdFlag;

	//TThostFtdcTIDType int
	self->data.TID = pReqChangeAccountField_TID;

	//TThostFtdcDigestType char[36]
	if(pReqChangeAccountField_Digest != NULL) {
		if(pReqChangeAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqChangeAccountField_Digest, sizeof(self->data.Digest) );
		pReqChangeAccountField_Digest = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqChangeAccountField_LongCustomerName != NULL) {
		if(pReqChangeAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqChangeAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqChangeAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqChangeAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqChangeAccountField_dealloc(PyCThostFtdcReqChangeAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqChangeAccountField_repr(PyCThostFtdcReqChangeAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:y,s:y,s:c,s:c,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:s,s:s,s:c,s:c,s:i,s:s,s:s}"
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
		, "NewBankAccount", self->data.NewBankAccount 
		, "NewBankPassWord", self->data.NewBankPassWord 
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "BankAccType", self->data.BankAccType
		, "InstallID", self->data.InstallID
		, "VerifyCertNoFlag", self->data.VerifyCertNoFlag
		, "CurrencyID", self->data.CurrencyID 
		, "BrokerIDByBank", self->data.BrokerIDByBank 
		, "BankPwdFlag", self->data.BankPwdFlag
		, "SecuPwdFlag", self->data.SecuPwdFlag
		, "TID", self->data.TID
		, "Digest", self->data.Digest 
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqChangeAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_TradeCode(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BankID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BankBranchID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BrokerID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BrokerBranchID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_TradeDate(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_TradeTime(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BankSerial(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_TradingDay(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_PlateSerial(PyCThostFtdcReqChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_LastFragment(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_SessionID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_CustomerName(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_IdCardType(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_IdentifiedCardNo(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_Gender(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_CountryCode(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_CustType(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_Address(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_ZipCode(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_Telephone(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_MobilePhone(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_Fax(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_EMail(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_MoneyAccountStatus(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BankAccount(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BankPassWord(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_NewBankAccount(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.NewBankAccount);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_NewBankPassWord(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.NewBankPassWord);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_AccountID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_Password(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BankAccType(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_InstallID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_VerifyCertNoFlag(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_CurrencyID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BrokerIDByBank(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_BankPwdFlag(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_SecuPwdFlag(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_TID(PyCThostFtdcReqChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_Digest(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqChangeAccountField_get_LongCustomerName(PyCThostFtdcReqChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcReqChangeAccountField_set_TradeCode(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BankID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BankBranchID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BrokerID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BrokerBranchID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_TradeDate(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_TradeTime(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BankSerial(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_TradingDay(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_PlateSerial(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_LastFragment(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_SessionID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_CustomerName(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_IdCardType(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_IdentifiedCardNo(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_Gender(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_CountryCode(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_CustType(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_Address(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_ZipCode(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_Telephone(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_MobilePhone(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_Fax(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_EMail(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_MoneyAccountStatus(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BankAccount(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BankPassWord(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_NewBankAccount(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewBankAccount Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewBankAccount)) {
		PyErr_SetString(PyExc_ValueError, "NewBankAccount must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.NewBankAccount, buf, sizeof(self->data.NewBankAccount));
	return 0;
}

static int PyCThostFtdcReqChangeAccountField_set_NewBankPassWord(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewBankPassWord Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewBankPassWord)) {
		PyErr_SetString(PyExc_ValueError, "NewBankPassWord must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.NewBankPassWord, buf, sizeof(self->data.NewBankPassWord));
	return 0;
}

static int PyCThostFtdcReqChangeAccountField_set_AccountID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_Password(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BankAccType(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_InstallID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_VerifyCertNoFlag(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_CurrencyID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BrokerIDByBank(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_BankPwdFlag(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_SecuPwdFlag(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_TID(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_Digest(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqChangeAccountField_set_LongCustomerName(PyCThostFtdcReqChangeAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqChangeAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqChangeAccountField_get_TradeCode, (setter)PyCThostFtdcReqChangeAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqChangeAccountField_get_BankID, (setter)PyCThostFtdcReqChangeAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqChangeAccountField_get_BankBranchID, (setter)PyCThostFtdcReqChangeAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqChangeAccountField_get_BrokerID, (setter)PyCThostFtdcReqChangeAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqChangeAccountField_get_BrokerBranchID, (setter)PyCThostFtdcReqChangeAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqChangeAccountField_get_TradeDate, (setter)PyCThostFtdcReqChangeAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqChangeAccountField_get_TradeTime, (setter)PyCThostFtdcReqChangeAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqChangeAccountField_get_BankSerial, (setter)PyCThostFtdcReqChangeAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqChangeAccountField_get_TradingDay, (setter)PyCThostFtdcReqChangeAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqChangeAccountField_get_PlateSerial, (setter)PyCThostFtdcReqChangeAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqChangeAccountField_get_LastFragment, (setter)PyCThostFtdcReqChangeAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqChangeAccountField_get_SessionID, (setter)PyCThostFtdcReqChangeAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqChangeAccountField_get_CustomerName, (setter)PyCThostFtdcReqChangeAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqChangeAccountField_get_IdCardType, (setter)PyCThostFtdcReqChangeAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqChangeAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqChangeAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcReqChangeAccountField_get_Gender, (setter)PyCThostFtdcReqChangeAccountField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcReqChangeAccountField_get_CountryCode, (setter)PyCThostFtdcReqChangeAccountField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqChangeAccountField_get_CustType, (setter)PyCThostFtdcReqChangeAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcReqChangeAccountField_get_Address, (setter)PyCThostFtdcReqChangeAccountField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcReqChangeAccountField_get_ZipCode, (setter)PyCThostFtdcReqChangeAccountField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcReqChangeAccountField_get_Telephone, (setter)PyCThostFtdcReqChangeAccountField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcReqChangeAccountField_get_MobilePhone, (setter)PyCThostFtdcReqChangeAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcReqChangeAccountField_get_Fax, (setter)PyCThostFtdcReqChangeAccountField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcReqChangeAccountField_get_EMail, (setter)PyCThostFtdcReqChangeAccountField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReqChangeAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcReqChangeAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqChangeAccountField_get_BankAccount, (setter)PyCThostFtdcReqChangeAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqChangeAccountField_get_BankPassWord, (setter)PyCThostFtdcReqChangeAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"NewBankAccount", (getter)PyCThostFtdcReqChangeAccountField_get_NewBankAccount, (setter)PyCThostFtdcReqChangeAccountField_set_NewBankAccount, (char *)"NewBankAccount", NULL},
	 {(char *)"NewBankPassWord", (getter)PyCThostFtdcReqChangeAccountField_get_NewBankPassWord, (setter)PyCThostFtdcReqChangeAccountField_set_NewBankPassWord, (char *)"NewBankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqChangeAccountField_get_AccountID, (setter)PyCThostFtdcReqChangeAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqChangeAccountField_get_Password, (setter)PyCThostFtdcReqChangeAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqChangeAccountField_get_BankAccType, (setter)PyCThostFtdcReqChangeAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqChangeAccountField_get_InstallID, (setter)PyCThostFtdcReqChangeAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqChangeAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqChangeAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqChangeAccountField_get_CurrencyID, (setter)PyCThostFtdcReqChangeAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqChangeAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcReqChangeAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqChangeAccountField_get_BankPwdFlag, (setter)PyCThostFtdcReqChangeAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqChangeAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcReqChangeAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqChangeAccountField_get_TID, (setter)PyCThostFtdcReqChangeAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqChangeAccountField_get_Digest, (setter)PyCThostFtdcReqChangeAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqChangeAccountField_get_LongCustomerName, (setter)PyCThostFtdcReqChangeAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqChangeAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqChangeAccountField",	/* tp_name */
	sizeof(PyCThostFtdcReqChangeAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqChangeAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqChangeAccountField_repr,   /* tp_repr */
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
	"CThostFtdcReqChangeAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqChangeAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqChangeAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqChangeAccountField_new,       /* tp_new */
};

int PyCThostFtdcReqChangeAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqChangeAccountField  */
	if (PyType_Ready(&PyCThostFtdcReqChangeAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqChangeAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqChangeAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqChangeAccountField", (PyObject *)&PyCThostFtdcReqChangeAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqChangeAccountField to module");
        Py_DECREF(&PyCThostFtdcReqChangeAccountFieldType);
		return -1;
    }

    return 0;
}
