
#include "PyCThostFtdcChangeAccountField.h"



static PyObject *PyCThostFtdcChangeAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcChangeAccountField *self = (PyCThostFtdcChangeAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcChangeAccountField_init(PyCThostFtdcChangeAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "NewBankAccount", "NewBankPassWord", "AccountID", "Password", "BankAccType", "InstallID", "VerifyCertNoFlag", "CurrencyID", "BrokerIDByBank", "BankPwdFlag", "SecuPwdFlag", "TID", "Digest", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pChangeAccountField_TradeCode = NULL;
	Py_ssize_t pChangeAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pChangeAccountField_BankID = NULL;
	Py_ssize_t pChangeAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pChangeAccountField_BankBranchID = NULL;
	Py_ssize_t pChangeAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pChangeAccountField_BrokerID = NULL;
	Py_ssize_t pChangeAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pChangeAccountField_BrokerBranchID = NULL;
	Py_ssize_t pChangeAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pChangeAccountField_TradeDate = NULL;
	Py_ssize_t pChangeAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pChangeAccountField_TradeTime = NULL;
	Py_ssize_t pChangeAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pChangeAccountField_BankSerial = NULL;
	Py_ssize_t pChangeAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pChangeAccountField_TradingDay = NULL;
	Py_ssize_t pChangeAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pChangeAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pChangeAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pChangeAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pChangeAccountField_CustomerName = NULL;
	Py_ssize_t pChangeAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pChangeAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pChangeAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pChangeAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pChangeAccountField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pChangeAccountField_CountryCode = NULL;
	Py_ssize_t pChangeAccountField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pChangeAccountField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pChangeAccountField_Address = NULL;
	Py_ssize_t pChangeAccountField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pChangeAccountField_ZipCode = NULL;
	Py_ssize_t pChangeAccountField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pChangeAccountField_Telephone = NULL;
	Py_ssize_t pChangeAccountField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pChangeAccountField_MobilePhone = NULL;
	Py_ssize_t pChangeAccountField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pChangeAccountField_Fax = NULL;
	Py_ssize_t pChangeAccountField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pChangeAccountField_EMail = NULL;
	Py_ssize_t pChangeAccountField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pChangeAccountField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pChangeAccountField_BankAccount = NULL;
	Py_ssize_t pChangeAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pChangeAccountField_BankPassWord = NULL;
	Py_ssize_t pChangeAccountField_BankPassWord_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pChangeAccountField_NewBankAccount = NULL;
	Py_ssize_t pChangeAccountField_NewBankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pChangeAccountField_NewBankPassWord = NULL;
	Py_ssize_t pChangeAccountField_NewBankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pChangeAccountField_AccountID = NULL;
	Py_ssize_t pChangeAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pChangeAccountField_Password = NULL;
	Py_ssize_t pChangeAccountField_Password_len = 0;

	//TThostFtdcBankAccTypeType char
	char pChangeAccountField_BankAccType = 0;

	//TThostFtdcInstallIDType int
	int pChangeAccountField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pChangeAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pChangeAccountField_CurrencyID = NULL;
	Py_ssize_t pChangeAccountField_CurrencyID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pChangeAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pChangeAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcPwdFlagType char
	char pChangeAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pChangeAccountField_SecuPwdFlag = 0;

	//TThostFtdcTIDType int
	int pChangeAccountField_TID = 0;

	//TThostFtdcDigestType char[36]
	const char *pChangeAccountField_Digest = NULL;
	Py_ssize_t pChangeAccountField_Digest_len = 0;

	//TThostFtdcErrorIDType int
	int pChangeAccountField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pChangeAccountField_ErrorMsg = NULL;
	Py_ssize_t pChangeAccountField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pChangeAccountField_LongCustomerName = NULL;
	Py_ssize_t pChangeAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#y#y#cicy#y#cciy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#s#s#cics#s#ccis#is#s#", (char **)kwlist
#endif

		, &pChangeAccountField_TradeCode, &pChangeAccountField_TradeCode_len
		, &pChangeAccountField_BankID, &pChangeAccountField_BankID_len
		, &pChangeAccountField_BankBranchID, &pChangeAccountField_BankBranchID_len
		, &pChangeAccountField_BrokerID, &pChangeAccountField_BrokerID_len
		, &pChangeAccountField_BrokerBranchID, &pChangeAccountField_BrokerBranchID_len
		, &pChangeAccountField_TradeDate, &pChangeAccountField_TradeDate_len
		, &pChangeAccountField_TradeTime, &pChangeAccountField_TradeTime_len
		, &pChangeAccountField_BankSerial, &pChangeAccountField_BankSerial_len
		, &pChangeAccountField_TradingDay, &pChangeAccountField_TradingDay_len
		, &pChangeAccountField_PlateSerial
		, &pChangeAccountField_LastFragment
		, &pChangeAccountField_SessionID
		, &pChangeAccountField_CustomerName, &pChangeAccountField_CustomerName_len
		, &pChangeAccountField_IdCardType
		, &pChangeAccountField_IdentifiedCardNo, &pChangeAccountField_IdentifiedCardNo_len
		, &pChangeAccountField_Gender
		, &pChangeAccountField_CountryCode, &pChangeAccountField_CountryCode_len
		, &pChangeAccountField_CustType
		, &pChangeAccountField_Address, &pChangeAccountField_Address_len
		, &pChangeAccountField_ZipCode, &pChangeAccountField_ZipCode_len
		, &pChangeAccountField_Telephone, &pChangeAccountField_Telephone_len
		, &pChangeAccountField_MobilePhone, &pChangeAccountField_MobilePhone_len
		, &pChangeAccountField_Fax, &pChangeAccountField_Fax_len
		, &pChangeAccountField_EMail, &pChangeAccountField_EMail_len
		, &pChangeAccountField_MoneyAccountStatus
		, &pChangeAccountField_BankAccount, &pChangeAccountField_BankAccount_len
		, &pChangeAccountField_BankPassWord, &pChangeAccountField_BankPassWord_len
		, &pChangeAccountField_NewBankAccount, &pChangeAccountField_NewBankAccount_len
		, &pChangeAccountField_NewBankPassWord, &pChangeAccountField_NewBankPassWord_len
		, &pChangeAccountField_AccountID, &pChangeAccountField_AccountID_len
		, &pChangeAccountField_Password, &pChangeAccountField_Password_len
		, &pChangeAccountField_BankAccType
		, &pChangeAccountField_InstallID
		, &pChangeAccountField_VerifyCertNoFlag
		, &pChangeAccountField_CurrencyID, &pChangeAccountField_CurrencyID_len
		, &pChangeAccountField_BrokerIDByBank, &pChangeAccountField_BrokerIDByBank_len
		, &pChangeAccountField_BankPwdFlag
		, &pChangeAccountField_SecuPwdFlag
		, &pChangeAccountField_TID
		, &pChangeAccountField_Digest, &pChangeAccountField_Digest_len
		, &pChangeAccountField_ErrorID
		, &pChangeAccountField_ErrorMsg, &pChangeAccountField_ErrorMsg_len
		, &pChangeAccountField_LongCustomerName, &pChangeAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pChangeAccountField_TradeCode != NULL) {
		if(pChangeAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pChangeAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pChangeAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pChangeAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pChangeAccountField_BankID != NULL) {
		if(pChangeAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pChangeAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pChangeAccountField_BankID, sizeof(self->data.BankID) );
		pChangeAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pChangeAccountField_BankBranchID != NULL) {
		if(pChangeAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pChangeAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pChangeAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pChangeAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pChangeAccountField_BrokerID != NULL) {
		if(pChangeAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pChangeAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pChangeAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pChangeAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pChangeAccountField_BrokerBranchID != NULL) {
		if(pChangeAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pChangeAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pChangeAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pChangeAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pChangeAccountField_TradeDate != NULL) {
		if(pChangeAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pChangeAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pChangeAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pChangeAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pChangeAccountField_TradeTime != NULL) {
		if(pChangeAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pChangeAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pChangeAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pChangeAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pChangeAccountField_BankSerial != NULL) {
		if(pChangeAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pChangeAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pChangeAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pChangeAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pChangeAccountField_TradingDay != NULL) {
		if(pChangeAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pChangeAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pChangeAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pChangeAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pChangeAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pChangeAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pChangeAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pChangeAccountField_CustomerName != NULL) {
		if(pChangeAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pChangeAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pChangeAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pChangeAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pChangeAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pChangeAccountField_IdentifiedCardNo != NULL) {
		if(pChangeAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pChangeAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pChangeAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pChangeAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pChangeAccountField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pChangeAccountField_CountryCode != NULL) {
		if(pChangeAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pChangeAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pChangeAccountField_CountryCode, sizeof(self->data.CountryCode) );
		pChangeAccountField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pChangeAccountField_CustType;

	//TThostFtdcAddressType char[101]
	if(pChangeAccountField_Address != NULL) {
		if(pChangeAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pChangeAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pChangeAccountField_Address, sizeof(self->data.Address) );
		pChangeAccountField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pChangeAccountField_ZipCode != NULL) {
		if(pChangeAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pChangeAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pChangeAccountField_ZipCode, sizeof(self->data.ZipCode) );
		pChangeAccountField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pChangeAccountField_Telephone != NULL) {
		if(pChangeAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pChangeAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pChangeAccountField_Telephone, sizeof(self->data.Telephone) );
		pChangeAccountField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pChangeAccountField_MobilePhone != NULL) {
		if(pChangeAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pChangeAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pChangeAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
		pChangeAccountField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pChangeAccountField_Fax != NULL) {
		if(pChangeAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pChangeAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pChangeAccountField_Fax, sizeof(self->data.Fax) );
		pChangeAccountField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pChangeAccountField_EMail != NULL) {
		if(pChangeAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pChangeAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pChangeAccountField_EMail, sizeof(self->data.EMail) );
		pChangeAccountField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pChangeAccountField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pChangeAccountField_BankAccount != NULL) {
		if(pChangeAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pChangeAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pChangeAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pChangeAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pChangeAccountField_BankPassWord != NULL) {
		if(pChangeAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pChangeAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pChangeAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pChangeAccountField_BankPassWord = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pChangeAccountField_NewBankAccount != NULL) {
		if(pChangeAccountField_NewBankAccount_len > (Py_ssize_t)sizeof(self->data.NewBankAccount)) {
			PyErr_Format(PyExc_ValueError, "NewBankAccount too long: length=%zd (max allowed is %zd)", pChangeAccountField_NewBankAccount_len, (Py_ssize_t)sizeof(self->data.NewBankAccount));
			return -1;
		}
		strncpy(self->data.NewBankAccount, pChangeAccountField_NewBankAccount, sizeof(self->data.NewBankAccount) );
		pChangeAccountField_NewBankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pChangeAccountField_NewBankPassWord != NULL) {
		if(pChangeAccountField_NewBankPassWord_len > (Py_ssize_t)sizeof(self->data.NewBankPassWord)) {
			PyErr_Format(PyExc_ValueError, "NewBankPassWord too long: length=%zd (max allowed is %zd)", pChangeAccountField_NewBankPassWord_len, (Py_ssize_t)sizeof(self->data.NewBankPassWord));
			return -1;
		}
		strncpy(self->data.NewBankPassWord, pChangeAccountField_NewBankPassWord, sizeof(self->data.NewBankPassWord) );
		pChangeAccountField_NewBankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pChangeAccountField_AccountID != NULL) {
		if(pChangeAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pChangeAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pChangeAccountField_AccountID, sizeof(self->data.AccountID) );
		pChangeAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pChangeAccountField_Password != NULL) {
		if(pChangeAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pChangeAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pChangeAccountField_Password, sizeof(self->data.Password) );
		pChangeAccountField_Password = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pChangeAccountField_BankAccType;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pChangeAccountField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pChangeAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pChangeAccountField_CurrencyID != NULL) {
		if(pChangeAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pChangeAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pChangeAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pChangeAccountField_CurrencyID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pChangeAccountField_BrokerIDByBank != NULL) {
		if(pChangeAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pChangeAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pChangeAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pChangeAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pChangeAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pChangeAccountField_SecuPwdFlag;

	//TThostFtdcTIDType int
	self->data.TID = pChangeAccountField_TID;

	//TThostFtdcDigestType char[36]
	if(pChangeAccountField_Digest != NULL) {
		if(pChangeAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pChangeAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pChangeAccountField_Digest, sizeof(self->data.Digest) );
		pChangeAccountField_Digest = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pChangeAccountField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pChangeAccountField_ErrorMsg != NULL) {
		if(pChangeAccountField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pChangeAccountField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pChangeAccountField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pChangeAccountField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pChangeAccountField_LongCustomerName != NULL) {
		if(pChangeAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pChangeAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pChangeAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pChangeAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcChangeAccountField_dealloc(PyCThostFtdcChangeAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcChangeAccountField_repr(PyCThostFtdcChangeAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:c,s:y,s:y,s:c,s:c,s:i,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:c,s:s,s:s,s:c,s:c,s:i,s:s,s:i,s:s,s:s}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcChangeAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcChangeAccountField_get_TradeCode(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BankID(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BankBranchID(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BrokerID(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BrokerBranchID(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcChangeAccountField_get_TradeDate(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcChangeAccountField_get_TradeTime(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BankSerial(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcChangeAccountField_get_TradingDay(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcChangeAccountField_get_PlateSerial(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcChangeAccountField_get_LastFragment(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_SessionID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcChangeAccountField_get_CustomerName(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcChangeAccountField_get_IdCardType(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_IdentifiedCardNo(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcChangeAccountField_get_Gender(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_CountryCode(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcChangeAccountField_get_CustType(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_Address(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcChangeAccountField_get_ZipCode(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcChangeAccountField_get_Telephone(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcChangeAccountField_get_MobilePhone(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcChangeAccountField_get_Fax(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcChangeAccountField_get_EMail(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcChangeAccountField_get_MoneyAccountStatus(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BankAccount(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BankPassWord(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcChangeAccountField_get_NewBankAccount(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.NewBankAccount);
}

static PyObject *PyCThostFtdcChangeAccountField_get_NewBankPassWord(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.NewBankPassWord);
}

static PyObject *PyCThostFtdcChangeAccountField_get_AccountID(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcChangeAccountField_get_Password(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BankAccType(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_InstallID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcChangeAccountField_get_VerifyCertNoFlag(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_CurrencyID(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BrokerIDByBank(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcChangeAccountField_get_BankPwdFlag(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_SecuPwdFlag(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcChangeAccountField_get_TID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcChangeAccountField_get_Digest(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcChangeAccountField_get_ErrorID(PyCThostFtdcChangeAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcChangeAccountField_get_ErrorMsg(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcChangeAccountField_get_LongCustomerName(PyCThostFtdcChangeAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcChangeAccountField_set_TradeCode(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BankID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BankBranchID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BrokerID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BrokerBranchID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_TradeDate(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_TradeTime(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BankSerial(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_TradingDay(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_PlateSerial(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_LastFragment(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_SessionID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_CustomerName(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_IdCardType(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_IdentifiedCardNo(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_Gender(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_CountryCode(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_CustType(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_Address(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_ZipCode(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_Telephone(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_MobilePhone(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_Fax(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_EMail(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_MoneyAccountStatus(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BankAccount(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BankPassWord(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_NewBankAccount(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_NewBankPassWord(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_AccountID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_Password(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BankAccType(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_InstallID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_VerifyCertNoFlag(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_CurrencyID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BrokerIDByBank(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_BankPwdFlag(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_SecuPwdFlag(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_TID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_Digest(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_ErrorID(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_ErrorMsg(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcChangeAccountField_set_LongCustomerName(PyCThostFtdcChangeAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcChangeAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcChangeAccountField_get_TradeCode, (setter)PyCThostFtdcChangeAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcChangeAccountField_get_BankID, (setter)PyCThostFtdcChangeAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcChangeAccountField_get_BankBranchID, (setter)PyCThostFtdcChangeAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcChangeAccountField_get_BrokerID, (setter)PyCThostFtdcChangeAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcChangeAccountField_get_BrokerBranchID, (setter)PyCThostFtdcChangeAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcChangeAccountField_get_TradeDate, (setter)PyCThostFtdcChangeAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcChangeAccountField_get_TradeTime, (setter)PyCThostFtdcChangeAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcChangeAccountField_get_BankSerial, (setter)PyCThostFtdcChangeAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcChangeAccountField_get_TradingDay, (setter)PyCThostFtdcChangeAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcChangeAccountField_get_PlateSerial, (setter)PyCThostFtdcChangeAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcChangeAccountField_get_LastFragment, (setter)PyCThostFtdcChangeAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcChangeAccountField_get_SessionID, (setter)PyCThostFtdcChangeAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcChangeAccountField_get_CustomerName, (setter)PyCThostFtdcChangeAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcChangeAccountField_get_IdCardType, (setter)PyCThostFtdcChangeAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcChangeAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcChangeAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcChangeAccountField_get_Gender, (setter)PyCThostFtdcChangeAccountField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcChangeAccountField_get_CountryCode, (setter)PyCThostFtdcChangeAccountField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcChangeAccountField_get_CustType, (setter)PyCThostFtdcChangeAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcChangeAccountField_get_Address, (setter)PyCThostFtdcChangeAccountField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcChangeAccountField_get_ZipCode, (setter)PyCThostFtdcChangeAccountField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcChangeAccountField_get_Telephone, (setter)PyCThostFtdcChangeAccountField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcChangeAccountField_get_MobilePhone, (setter)PyCThostFtdcChangeAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcChangeAccountField_get_Fax, (setter)PyCThostFtdcChangeAccountField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcChangeAccountField_get_EMail, (setter)PyCThostFtdcChangeAccountField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcChangeAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcChangeAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcChangeAccountField_get_BankAccount, (setter)PyCThostFtdcChangeAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcChangeAccountField_get_BankPassWord, (setter)PyCThostFtdcChangeAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"NewBankAccount", (getter)PyCThostFtdcChangeAccountField_get_NewBankAccount, (setter)PyCThostFtdcChangeAccountField_set_NewBankAccount, (char *)"NewBankAccount", NULL},
	 {(char *)"NewBankPassWord", (getter)PyCThostFtdcChangeAccountField_get_NewBankPassWord, (setter)PyCThostFtdcChangeAccountField_set_NewBankPassWord, (char *)"NewBankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcChangeAccountField_get_AccountID, (setter)PyCThostFtdcChangeAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcChangeAccountField_get_Password, (setter)PyCThostFtdcChangeAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcChangeAccountField_get_BankAccType, (setter)PyCThostFtdcChangeAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcChangeAccountField_get_InstallID, (setter)PyCThostFtdcChangeAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcChangeAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcChangeAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcChangeAccountField_get_CurrencyID, (setter)PyCThostFtdcChangeAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcChangeAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcChangeAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcChangeAccountField_get_BankPwdFlag, (setter)PyCThostFtdcChangeAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcChangeAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcChangeAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcChangeAccountField_get_TID, (setter)PyCThostFtdcChangeAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcChangeAccountField_get_Digest, (setter)PyCThostFtdcChangeAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcChangeAccountField_get_ErrorID, (setter)PyCThostFtdcChangeAccountField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcChangeAccountField_get_ErrorMsg, (setter)PyCThostFtdcChangeAccountField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcChangeAccountField_get_LongCustomerName, (setter)PyCThostFtdcChangeAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcChangeAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcChangeAccountField",	/* tp_name */
	sizeof(PyCThostFtdcChangeAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcChangeAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcChangeAccountField_repr,   /* tp_repr */
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
	"CThostFtdcChangeAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcChangeAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcChangeAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcChangeAccountField_new,       /* tp_new */
};

int PyCThostFtdcChangeAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcChangeAccountField  */
	if (PyType_Ready(&PyCThostFtdcChangeAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcChangeAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcChangeAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcChangeAccountField", (PyObject *)&PyCThostFtdcChangeAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcChangeAccountField to module");
        Py_DECREF(&PyCThostFtdcChangeAccountFieldType);
		return -1;
    }

    return 0;
}
