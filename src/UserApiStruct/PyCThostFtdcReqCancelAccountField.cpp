
#include "PyCThostFtdcReqCancelAccountField.h"



static PyObject *PyCThostFtdcReqCancelAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqCancelAccountField *self = (PyCThostFtdcReqCancelAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqCancelAccountField_init(PyCThostFtdcReqCancelAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "VerifyCertNoFlag", "CurrencyID", "CashExchangeCode", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "TID", "UserID", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqCancelAccountField_TradeCode = NULL;
	Py_ssize_t pReqCancelAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqCancelAccountField_BankID = NULL;
	Py_ssize_t pReqCancelAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqCancelAccountField_BankBranchID = NULL;
	Py_ssize_t pReqCancelAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqCancelAccountField_BrokerID = NULL;
	Py_ssize_t pReqCancelAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqCancelAccountField_BrokerBranchID = NULL;
	Py_ssize_t pReqCancelAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqCancelAccountField_TradeDate = NULL;
	Py_ssize_t pReqCancelAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqCancelAccountField_TradeTime = NULL;
	Py_ssize_t pReqCancelAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqCancelAccountField_BankSerial = NULL;
	Py_ssize_t pReqCancelAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqCancelAccountField_TradingDay = NULL;
	Py_ssize_t pReqCancelAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqCancelAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqCancelAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqCancelAccountField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqCancelAccountField_CustomerName = NULL;
	Py_ssize_t pReqCancelAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqCancelAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqCancelAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqCancelAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pReqCancelAccountField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pReqCancelAccountField_CountryCode = NULL;
	Py_ssize_t pReqCancelAccountField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pReqCancelAccountField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pReqCancelAccountField_Address = NULL;
	Py_ssize_t pReqCancelAccountField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pReqCancelAccountField_ZipCode = NULL;
	Py_ssize_t pReqCancelAccountField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pReqCancelAccountField_Telephone = NULL;
	Py_ssize_t pReqCancelAccountField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pReqCancelAccountField_MobilePhone = NULL;
	Py_ssize_t pReqCancelAccountField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pReqCancelAccountField_Fax = NULL;
	Py_ssize_t pReqCancelAccountField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pReqCancelAccountField_EMail = NULL;
	Py_ssize_t pReqCancelAccountField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pReqCancelAccountField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqCancelAccountField_BankAccount = NULL;
	Py_ssize_t pReqCancelAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqCancelAccountField_BankPassWord = NULL;
	Py_ssize_t pReqCancelAccountField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqCancelAccountField_AccountID = NULL;
	Py_ssize_t pReqCancelAccountField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqCancelAccountField_Password = NULL;
	Py_ssize_t pReqCancelAccountField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pReqCancelAccountField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqCancelAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqCancelAccountField_CurrencyID = NULL;
	Py_ssize_t pReqCancelAccountField_CurrencyID_len = 0;

	//TThostFtdcCashExchangeCodeType char
	char pReqCancelAccountField_CashExchangeCode = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqCancelAccountField_Digest = NULL;
	Py_ssize_t pReqCancelAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqCancelAccountField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqCancelAccountField_DeviceID = NULL;
	Py_ssize_t pReqCancelAccountField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqCancelAccountField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqCancelAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pReqCancelAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqCancelAccountField_BankSecuAcc = NULL;
	Py_ssize_t pReqCancelAccountField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqCancelAccountField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqCancelAccountField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqCancelAccountField_OperNo = NULL;
	Py_ssize_t pReqCancelAccountField_OperNo_len = 0;

	//TThostFtdcTIDType int
	int pReqCancelAccountField_TID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqCancelAccountField_UserID = NULL;
	Py_ssize_t pReqCancelAccountField_UserID_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqCancelAccountField_LongCustomerName = NULL;
	Py_ssize_t pReqCancelAccountField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#y#y#icy#cy#cy#cy#y#ccy#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#s#s#ics#cs#cs#cs#s#ccs#is#s#", (char **)kwlist
#endif

		, &pReqCancelAccountField_TradeCode, &pReqCancelAccountField_TradeCode_len
		, &pReqCancelAccountField_BankID, &pReqCancelAccountField_BankID_len
		, &pReqCancelAccountField_BankBranchID, &pReqCancelAccountField_BankBranchID_len
		, &pReqCancelAccountField_BrokerID, &pReqCancelAccountField_BrokerID_len
		, &pReqCancelAccountField_BrokerBranchID, &pReqCancelAccountField_BrokerBranchID_len
		, &pReqCancelAccountField_TradeDate, &pReqCancelAccountField_TradeDate_len
		, &pReqCancelAccountField_TradeTime, &pReqCancelAccountField_TradeTime_len
		, &pReqCancelAccountField_BankSerial, &pReqCancelAccountField_BankSerial_len
		, &pReqCancelAccountField_TradingDay, &pReqCancelAccountField_TradingDay_len
		, &pReqCancelAccountField_PlateSerial
		, &pReqCancelAccountField_LastFragment
		, &pReqCancelAccountField_SessionID
		, &pReqCancelAccountField_CustomerName, &pReqCancelAccountField_CustomerName_len
		, &pReqCancelAccountField_IdCardType
		, &pReqCancelAccountField_IdentifiedCardNo, &pReqCancelAccountField_IdentifiedCardNo_len
		, &pReqCancelAccountField_Gender
		, &pReqCancelAccountField_CountryCode, &pReqCancelAccountField_CountryCode_len
		, &pReqCancelAccountField_CustType
		, &pReqCancelAccountField_Address, &pReqCancelAccountField_Address_len
		, &pReqCancelAccountField_ZipCode, &pReqCancelAccountField_ZipCode_len
		, &pReqCancelAccountField_Telephone, &pReqCancelAccountField_Telephone_len
		, &pReqCancelAccountField_MobilePhone, &pReqCancelAccountField_MobilePhone_len
		, &pReqCancelAccountField_Fax, &pReqCancelAccountField_Fax_len
		, &pReqCancelAccountField_EMail, &pReqCancelAccountField_EMail_len
		, &pReqCancelAccountField_MoneyAccountStatus
		, &pReqCancelAccountField_BankAccount, &pReqCancelAccountField_BankAccount_len
		, &pReqCancelAccountField_BankPassWord, &pReqCancelAccountField_BankPassWord_len
		, &pReqCancelAccountField_AccountID, &pReqCancelAccountField_AccountID_len
		, &pReqCancelAccountField_Password, &pReqCancelAccountField_Password_len
		, &pReqCancelAccountField_InstallID
		, &pReqCancelAccountField_VerifyCertNoFlag
		, &pReqCancelAccountField_CurrencyID, &pReqCancelAccountField_CurrencyID_len
		, &pReqCancelAccountField_CashExchangeCode
		, &pReqCancelAccountField_Digest, &pReqCancelAccountField_Digest_len
		, &pReqCancelAccountField_BankAccType
		, &pReqCancelAccountField_DeviceID, &pReqCancelAccountField_DeviceID_len
		, &pReqCancelAccountField_BankSecuAccType
		, &pReqCancelAccountField_BrokerIDByBank, &pReqCancelAccountField_BrokerIDByBank_len
		, &pReqCancelAccountField_BankSecuAcc, &pReqCancelAccountField_BankSecuAcc_len
		, &pReqCancelAccountField_BankPwdFlag
		, &pReqCancelAccountField_SecuPwdFlag
		, &pReqCancelAccountField_OperNo, &pReqCancelAccountField_OperNo_len
		, &pReqCancelAccountField_TID
		, &pReqCancelAccountField_UserID, &pReqCancelAccountField_UserID_len
		, &pReqCancelAccountField_LongCustomerName, &pReqCancelAccountField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqCancelAccountField_TradeCode != NULL) {
		if(pReqCancelAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqCancelAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pReqCancelAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqCancelAccountField_BankID != NULL) {
		if(pReqCancelAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqCancelAccountField_BankID, sizeof(self->data.BankID) );
		pReqCancelAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqCancelAccountField_BankBranchID != NULL) {
		if(pReqCancelAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqCancelAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqCancelAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqCancelAccountField_BrokerID != NULL) {
		if(pReqCancelAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqCancelAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pReqCancelAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqCancelAccountField_BrokerBranchID != NULL) {
		if(pReqCancelAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqCancelAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqCancelAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqCancelAccountField_TradeDate != NULL) {
		if(pReqCancelAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqCancelAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pReqCancelAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqCancelAccountField_TradeTime != NULL) {
		if(pReqCancelAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqCancelAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pReqCancelAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqCancelAccountField_BankSerial != NULL) {
		if(pReqCancelAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqCancelAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pReqCancelAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqCancelAccountField_TradingDay != NULL) {
		if(pReqCancelAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqCancelAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pReqCancelAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqCancelAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqCancelAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqCancelAccountField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqCancelAccountField_CustomerName != NULL) {
		if(pReqCancelAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqCancelAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pReqCancelAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqCancelAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqCancelAccountField_IdentifiedCardNo != NULL) {
		if(pReqCancelAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqCancelAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqCancelAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pReqCancelAccountField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pReqCancelAccountField_CountryCode != NULL) {
		if(pReqCancelAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pReqCancelAccountField_CountryCode, sizeof(self->data.CountryCode) );
		pReqCancelAccountField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqCancelAccountField_CustType;

	//TThostFtdcAddressType char[101]
	if(pReqCancelAccountField_Address != NULL) {
		if(pReqCancelAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pReqCancelAccountField_Address, sizeof(self->data.Address) );
		pReqCancelAccountField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pReqCancelAccountField_ZipCode != NULL) {
		if(pReqCancelAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pReqCancelAccountField_ZipCode, sizeof(self->data.ZipCode) );
		pReqCancelAccountField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pReqCancelAccountField_Telephone != NULL) {
		if(pReqCancelAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pReqCancelAccountField_Telephone, sizeof(self->data.Telephone) );
		pReqCancelAccountField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pReqCancelAccountField_MobilePhone != NULL) {
		if(pReqCancelAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pReqCancelAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
		pReqCancelAccountField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pReqCancelAccountField_Fax != NULL) {
		if(pReqCancelAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pReqCancelAccountField_Fax, sizeof(self->data.Fax) );
		pReqCancelAccountField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pReqCancelAccountField_EMail != NULL) {
		if(pReqCancelAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pReqCancelAccountField_EMail, sizeof(self->data.EMail) );
		pReqCancelAccountField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pReqCancelAccountField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pReqCancelAccountField_BankAccount != NULL) {
		if(pReqCancelAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqCancelAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pReqCancelAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqCancelAccountField_BankPassWord != NULL) {
		if(pReqCancelAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqCancelAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqCancelAccountField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqCancelAccountField_AccountID != NULL) {
		if(pReqCancelAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqCancelAccountField_AccountID, sizeof(self->data.AccountID) );
		pReqCancelAccountField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqCancelAccountField_Password != NULL) {
		if(pReqCancelAccountField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqCancelAccountField_Password, sizeof(self->data.Password) );
		pReqCancelAccountField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqCancelAccountField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqCancelAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqCancelAccountField_CurrencyID != NULL) {
		if(pReqCancelAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqCancelAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqCancelAccountField_CurrencyID = NULL;
	}

	//TThostFtdcCashExchangeCodeType char
	self->data.CashExchangeCode = pReqCancelAccountField_CashExchangeCode;

	//TThostFtdcDigestType char[36]
	if(pReqCancelAccountField_Digest != NULL) {
		if(pReqCancelAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqCancelAccountField_Digest, sizeof(self->data.Digest) );
		pReqCancelAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqCancelAccountField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pReqCancelAccountField_DeviceID != NULL) {
		if(pReqCancelAccountField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqCancelAccountField_DeviceID, sizeof(self->data.DeviceID) );
		pReqCancelAccountField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pReqCancelAccountField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqCancelAccountField_BrokerIDByBank != NULL) {
		if(pReqCancelAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqCancelAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqCancelAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqCancelAccountField_BankSecuAcc != NULL) {
		if(pReqCancelAccountField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pReqCancelAccountField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pReqCancelAccountField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqCancelAccountField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqCancelAccountField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pReqCancelAccountField_OperNo != NULL) {
		if(pReqCancelAccountField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqCancelAccountField_OperNo, sizeof(self->data.OperNo) );
		pReqCancelAccountField_OperNo = NULL;
	}

	//TThostFtdcTIDType int
	self->data.TID = pReqCancelAccountField_TID;

	//TThostFtdcUserIDType char[16]
	if(pReqCancelAccountField_UserID != NULL) {
		if(pReqCancelAccountField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqCancelAccountField_UserID, sizeof(self->data.UserID) );
		pReqCancelAccountField_UserID = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqCancelAccountField_LongCustomerName != NULL) {
		if(pReqCancelAccountField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqCancelAccountField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqCancelAccountField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqCancelAccountField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqCancelAccountField_dealloc(PyCThostFtdcReqCancelAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqCancelAccountField_repr(PyCThostFtdcReqCancelAccountField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqCancelAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_TradeCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankBranchID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BrokerID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BrokerBranchID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_TradeDate(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_TradeTime(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankSerial(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_TradingDay(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_PlateSerial(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_LastFragment(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_SessionID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_CustomerName(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_IdCardType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_IdentifiedCardNo(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_Gender(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_CountryCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_CustType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_Address(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_ZipCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_Telephone(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_MobilePhone(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_Fax(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_EMail(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_MoneyAccountStatus(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankAccount(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankPassWord(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_AccountID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_Password(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_InstallID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_VerifyCertNoFlag(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_CurrencyID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_CashExchangeCode(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CashExchangeCode), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_Digest(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankAccType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_DeviceID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankSecuAccType(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BrokerIDByBank(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankSecuAcc(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_BankPwdFlag(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_SecuPwdFlag(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_OperNo(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_TID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_UserID(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqCancelAccountField_get_LongCustomerName(PyCThostFtdcReqCancelAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcReqCancelAccountField_set_TradeCode(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankBranchID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BrokerID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BrokerBranchID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_TradeDate(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_TradeTime(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankSerial(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_TradingDay(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_PlateSerial(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_LastFragment(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_SessionID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_CustomerName(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_IdCardType(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_IdentifiedCardNo(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_Gender(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_CountryCode(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_CustType(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_Address(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_ZipCode(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_Telephone(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_MobilePhone(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_Fax(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_EMail(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_MoneyAccountStatus(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankAccount(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankPassWord(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_AccountID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_Password(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_InstallID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_VerifyCertNoFlag(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_CurrencyID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_CashExchangeCode(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_Digest(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankAccType(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_DeviceID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankSecuAccType(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BrokerIDByBank(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankSecuAcc(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_BankPwdFlag(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_SecuPwdFlag(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_OperNo(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_TID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_UserID(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqCancelAccountField_set_LongCustomerName(PyCThostFtdcReqCancelAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqCancelAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqCancelAccountField_get_TradeCode, (setter)PyCThostFtdcReqCancelAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqCancelAccountField_get_BankID, (setter)PyCThostFtdcReqCancelAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqCancelAccountField_get_BankBranchID, (setter)PyCThostFtdcReqCancelAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqCancelAccountField_get_BrokerID, (setter)PyCThostFtdcReqCancelAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqCancelAccountField_get_BrokerBranchID, (setter)PyCThostFtdcReqCancelAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqCancelAccountField_get_TradeDate, (setter)PyCThostFtdcReqCancelAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqCancelAccountField_get_TradeTime, (setter)PyCThostFtdcReqCancelAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqCancelAccountField_get_BankSerial, (setter)PyCThostFtdcReqCancelAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqCancelAccountField_get_TradingDay, (setter)PyCThostFtdcReqCancelAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqCancelAccountField_get_PlateSerial, (setter)PyCThostFtdcReqCancelAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqCancelAccountField_get_LastFragment, (setter)PyCThostFtdcReqCancelAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqCancelAccountField_get_SessionID, (setter)PyCThostFtdcReqCancelAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqCancelAccountField_get_CustomerName, (setter)PyCThostFtdcReqCancelAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqCancelAccountField_get_IdCardType, (setter)PyCThostFtdcReqCancelAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqCancelAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqCancelAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcReqCancelAccountField_get_Gender, (setter)PyCThostFtdcReqCancelAccountField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcReqCancelAccountField_get_CountryCode, (setter)PyCThostFtdcReqCancelAccountField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqCancelAccountField_get_CustType, (setter)PyCThostFtdcReqCancelAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcReqCancelAccountField_get_Address, (setter)PyCThostFtdcReqCancelAccountField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcReqCancelAccountField_get_ZipCode, (setter)PyCThostFtdcReqCancelAccountField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcReqCancelAccountField_get_Telephone, (setter)PyCThostFtdcReqCancelAccountField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcReqCancelAccountField_get_MobilePhone, (setter)PyCThostFtdcReqCancelAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcReqCancelAccountField_get_Fax, (setter)PyCThostFtdcReqCancelAccountField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcReqCancelAccountField_get_EMail, (setter)PyCThostFtdcReqCancelAccountField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReqCancelAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcReqCancelAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqCancelAccountField_get_BankAccount, (setter)PyCThostFtdcReqCancelAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqCancelAccountField_get_BankPassWord, (setter)PyCThostFtdcReqCancelAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqCancelAccountField_get_AccountID, (setter)PyCThostFtdcReqCancelAccountField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqCancelAccountField_get_Password, (setter)PyCThostFtdcReqCancelAccountField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqCancelAccountField_get_InstallID, (setter)PyCThostFtdcReqCancelAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqCancelAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqCancelAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqCancelAccountField_get_CurrencyID, (setter)PyCThostFtdcReqCancelAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"CashExchangeCode", (getter)PyCThostFtdcReqCancelAccountField_get_CashExchangeCode, (setter)PyCThostFtdcReqCancelAccountField_set_CashExchangeCode, (char *)"CashExchangeCode", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqCancelAccountField_get_Digest, (setter)PyCThostFtdcReqCancelAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqCancelAccountField_get_BankAccType, (setter)PyCThostFtdcReqCancelAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqCancelAccountField_get_DeviceID, (setter)PyCThostFtdcReqCancelAccountField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqCancelAccountField_get_BankSecuAccType, (setter)PyCThostFtdcReqCancelAccountField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqCancelAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcReqCancelAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqCancelAccountField_get_BankSecuAcc, (setter)PyCThostFtdcReqCancelAccountField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqCancelAccountField_get_BankPwdFlag, (setter)PyCThostFtdcReqCancelAccountField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqCancelAccountField_get_SecuPwdFlag, (setter)PyCThostFtdcReqCancelAccountField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqCancelAccountField_get_OperNo, (setter)PyCThostFtdcReqCancelAccountField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqCancelAccountField_get_TID, (setter)PyCThostFtdcReqCancelAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqCancelAccountField_get_UserID, (setter)PyCThostFtdcReqCancelAccountField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqCancelAccountField_get_LongCustomerName, (setter)PyCThostFtdcReqCancelAccountField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqCancelAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqCancelAccountField",	/* tp_name */
	sizeof(PyCThostFtdcReqCancelAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqCancelAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqCancelAccountField_repr,   /* tp_repr */
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
	"CThostFtdcReqCancelAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqCancelAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqCancelAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqCancelAccountField_new,       /* tp_new */
};

int PyCThostFtdcReqCancelAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqCancelAccountField  */
	if (PyType_Ready(&PyCThostFtdcReqCancelAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqCancelAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqCancelAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqCancelAccountField", (PyObject *)&PyCThostFtdcReqCancelAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqCancelAccountField to module");
        Py_DECREF(&PyCThostFtdcReqCancelAccountFieldType);
		return -1;
    }

    return 0;
}
