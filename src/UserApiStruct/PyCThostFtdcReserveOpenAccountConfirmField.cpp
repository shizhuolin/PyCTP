
#include "PyCThostFtdcReserveOpenAccountConfirmField.h"



static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReserveOpenAccountConfirmField *self = (PyCThostFtdcReserveOpenAccountConfirmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReserveOpenAccountConfirmField_init(PyCThostFtdcReserveOpenAccountConfirmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "InstallID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "BrokerIDByBank", "TID", "AccountID", "Password", "BankReserveOpenSeq", "BookDate", "BookPsw", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReserveOpenAccountConfirmField_TradeCode = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReserveOpenAccountConfirmField_BankID = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReserveOpenAccountConfirmField_BankBranchID = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReserveOpenAccountConfirmField_BrokerID = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReserveOpenAccountConfirmField_BrokerBranchID = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReserveOpenAccountConfirmField_TradeDate = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReserveOpenAccountConfirmField_TradeTime = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReserveOpenAccountConfirmField_BankSerial = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReserveOpenAccountConfirmField_TradingDay = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReserveOpenAccountConfirmField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReserveOpenAccountConfirmField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReserveOpenAccountConfirmField_SessionID = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReserveOpenAccountConfirmField_CustomerName = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReserveOpenAccountConfirmField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReserveOpenAccountConfirmField_IdentifiedCardNo = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pReserveOpenAccountConfirmField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pReserveOpenAccountConfirmField_CountryCode = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pReserveOpenAccountConfirmField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pReserveOpenAccountConfirmField_Address = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pReserveOpenAccountConfirmField_ZipCode = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pReserveOpenAccountConfirmField_Telephone = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pReserveOpenAccountConfirmField_MobilePhone = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pReserveOpenAccountConfirmField_Fax = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pReserveOpenAccountConfirmField_EMail = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pReserveOpenAccountConfirmField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReserveOpenAccountConfirmField_BankAccount = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReserveOpenAccountConfirmField_BankPassWord = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BankPassWord_len = 0;

	//TThostFtdcInstallIDType int
	int pReserveOpenAccountConfirmField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReserveOpenAccountConfirmField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReserveOpenAccountConfirmField_CurrencyID = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReserveOpenAccountConfirmField_Digest = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReserveOpenAccountConfirmField_BankAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReserveOpenAccountConfirmField_BrokerIDByBank = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BrokerIDByBank_len = 0;

	//TThostFtdcTIDType int
	int pReserveOpenAccountConfirmField_TID = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReserveOpenAccountConfirmField_AccountID = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReserveOpenAccountConfirmField_Password = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_Password_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReserveOpenAccountConfirmField_BankReserveOpenSeq = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BankReserveOpenSeq_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReserveOpenAccountConfirmField_BookDate = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BookDate_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReserveOpenAccountConfirmField_BookPsw = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_BookPsw_len = 0;

	//TThostFtdcErrorIDType int
	int pReserveOpenAccountConfirmField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pReserveOpenAccountConfirmField_ErrorMsg = NULL;
	Py_ssize_t pReserveOpenAccountConfirmField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#icy#y#cy#iy#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#ics#s#cs#is#s#s#s#s#is#", (char **)kwlist
#endif

		, &pReserveOpenAccountConfirmField_TradeCode, &pReserveOpenAccountConfirmField_TradeCode_len
		, &pReserveOpenAccountConfirmField_BankID, &pReserveOpenAccountConfirmField_BankID_len
		, &pReserveOpenAccountConfirmField_BankBranchID, &pReserveOpenAccountConfirmField_BankBranchID_len
		, &pReserveOpenAccountConfirmField_BrokerID, &pReserveOpenAccountConfirmField_BrokerID_len
		, &pReserveOpenAccountConfirmField_BrokerBranchID, &pReserveOpenAccountConfirmField_BrokerBranchID_len
		, &pReserveOpenAccountConfirmField_TradeDate, &pReserveOpenAccountConfirmField_TradeDate_len
		, &pReserveOpenAccountConfirmField_TradeTime, &pReserveOpenAccountConfirmField_TradeTime_len
		, &pReserveOpenAccountConfirmField_BankSerial, &pReserveOpenAccountConfirmField_BankSerial_len
		, &pReserveOpenAccountConfirmField_TradingDay, &pReserveOpenAccountConfirmField_TradingDay_len
		, &pReserveOpenAccountConfirmField_PlateSerial
		, &pReserveOpenAccountConfirmField_LastFragment
		, &pReserveOpenAccountConfirmField_SessionID
		, &pReserveOpenAccountConfirmField_CustomerName, &pReserveOpenAccountConfirmField_CustomerName_len
		, &pReserveOpenAccountConfirmField_IdCardType
		, &pReserveOpenAccountConfirmField_IdentifiedCardNo, &pReserveOpenAccountConfirmField_IdentifiedCardNo_len
		, &pReserveOpenAccountConfirmField_Gender
		, &pReserveOpenAccountConfirmField_CountryCode, &pReserveOpenAccountConfirmField_CountryCode_len
		, &pReserveOpenAccountConfirmField_CustType
		, &pReserveOpenAccountConfirmField_Address, &pReserveOpenAccountConfirmField_Address_len
		, &pReserveOpenAccountConfirmField_ZipCode, &pReserveOpenAccountConfirmField_ZipCode_len
		, &pReserveOpenAccountConfirmField_Telephone, &pReserveOpenAccountConfirmField_Telephone_len
		, &pReserveOpenAccountConfirmField_MobilePhone, &pReserveOpenAccountConfirmField_MobilePhone_len
		, &pReserveOpenAccountConfirmField_Fax, &pReserveOpenAccountConfirmField_Fax_len
		, &pReserveOpenAccountConfirmField_EMail, &pReserveOpenAccountConfirmField_EMail_len
		, &pReserveOpenAccountConfirmField_MoneyAccountStatus
		, &pReserveOpenAccountConfirmField_BankAccount, &pReserveOpenAccountConfirmField_BankAccount_len
		, &pReserveOpenAccountConfirmField_BankPassWord, &pReserveOpenAccountConfirmField_BankPassWord_len
		, &pReserveOpenAccountConfirmField_InstallID
		, &pReserveOpenAccountConfirmField_VerifyCertNoFlag
		, &pReserveOpenAccountConfirmField_CurrencyID, &pReserveOpenAccountConfirmField_CurrencyID_len
		, &pReserveOpenAccountConfirmField_Digest, &pReserveOpenAccountConfirmField_Digest_len
		, &pReserveOpenAccountConfirmField_BankAccType
		, &pReserveOpenAccountConfirmField_BrokerIDByBank, &pReserveOpenAccountConfirmField_BrokerIDByBank_len
		, &pReserveOpenAccountConfirmField_TID
		, &pReserveOpenAccountConfirmField_AccountID, &pReserveOpenAccountConfirmField_AccountID_len
		, &pReserveOpenAccountConfirmField_Password, &pReserveOpenAccountConfirmField_Password_len
		, &pReserveOpenAccountConfirmField_BankReserveOpenSeq, &pReserveOpenAccountConfirmField_BankReserveOpenSeq_len
		, &pReserveOpenAccountConfirmField_BookDate, &pReserveOpenAccountConfirmField_BookDate_len
		, &pReserveOpenAccountConfirmField_BookPsw, &pReserveOpenAccountConfirmField_BookPsw_len
		, &pReserveOpenAccountConfirmField_ErrorID
		, &pReserveOpenAccountConfirmField_ErrorMsg, &pReserveOpenAccountConfirmField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReserveOpenAccountConfirmField_TradeCode != NULL) {
		if(pReserveOpenAccountConfirmField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReserveOpenAccountConfirmField_TradeCode, sizeof(self->data.TradeCode) );
		pReserveOpenAccountConfirmField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReserveOpenAccountConfirmField_BankID != NULL) {
		if(pReserveOpenAccountConfirmField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReserveOpenAccountConfirmField_BankID, sizeof(self->data.BankID) );
		pReserveOpenAccountConfirmField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReserveOpenAccountConfirmField_BankBranchID != NULL) {
		if(pReserveOpenAccountConfirmField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReserveOpenAccountConfirmField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReserveOpenAccountConfirmField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReserveOpenAccountConfirmField_BrokerID != NULL) {
		if(pReserveOpenAccountConfirmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReserveOpenAccountConfirmField_BrokerID, sizeof(self->data.BrokerID) );
		pReserveOpenAccountConfirmField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReserveOpenAccountConfirmField_BrokerBranchID != NULL) {
		if(pReserveOpenAccountConfirmField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReserveOpenAccountConfirmField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReserveOpenAccountConfirmField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReserveOpenAccountConfirmField_TradeDate != NULL) {
		if(pReserveOpenAccountConfirmField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReserveOpenAccountConfirmField_TradeDate, sizeof(self->data.TradeDate) );
		pReserveOpenAccountConfirmField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReserveOpenAccountConfirmField_TradeTime != NULL) {
		if(pReserveOpenAccountConfirmField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReserveOpenAccountConfirmField_TradeTime, sizeof(self->data.TradeTime) );
		pReserveOpenAccountConfirmField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReserveOpenAccountConfirmField_BankSerial != NULL) {
		if(pReserveOpenAccountConfirmField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReserveOpenAccountConfirmField_BankSerial, sizeof(self->data.BankSerial) );
		pReserveOpenAccountConfirmField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReserveOpenAccountConfirmField_TradingDay != NULL) {
		if(pReserveOpenAccountConfirmField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReserveOpenAccountConfirmField_TradingDay, sizeof(self->data.TradingDay) );
		pReserveOpenAccountConfirmField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReserveOpenAccountConfirmField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReserveOpenAccountConfirmField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReserveOpenAccountConfirmField_SessionID;

	//TThostFtdcLongIndividualNameType char[161]
	if(pReserveOpenAccountConfirmField_CustomerName != NULL) {
		if(pReserveOpenAccountConfirmField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReserveOpenAccountConfirmField_CustomerName, sizeof(self->data.CustomerName) );
		pReserveOpenAccountConfirmField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReserveOpenAccountConfirmField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReserveOpenAccountConfirmField_IdentifiedCardNo != NULL) {
		if(pReserveOpenAccountConfirmField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReserveOpenAccountConfirmField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReserveOpenAccountConfirmField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pReserveOpenAccountConfirmField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pReserveOpenAccountConfirmField_CountryCode != NULL) {
		if(pReserveOpenAccountConfirmField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pReserveOpenAccountConfirmField_CountryCode, sizeof(self->data.CountryCode) );
		pReserveOpenAccountConfirmField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReserveOpenAccountConfirmField_CustType;

	//TThostFtdcAddressType char[101]
	if(pReserveOpenAccountConfirmField_Address != NULL) {
		if(pReserveOpenAccountConfirmField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pReserveOpenAccountConfirmField_Address, sizeof(self->data.Address) );
		pReserveOpenAccountConfirmField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pReserveOpenAccountConfirmField_ZipCode != NULL) {
		if(pReserveOpenAccountConfirmField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pReserveOpenAccountConfirmField_ZipCode, sizeof(self->data.ZipCode) );
		pReserveOpenAccountConfirmField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pReserveOpenAccountConfirmField_Telephone != NULL) {
		if(pReserveOpenAccountConfirmField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pReserveOpenAccountConfirmField_Telephone, sizeof(self->data.Telephone) );
		pReserveOpenAccountConfirmField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pReserveOpenAccountConfirmField_MobilePhone != NULL) {
		if(pReserveOpenAccountConfirmField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pReserveOpenAccountConfirmField_MobilePhone, sizeof(self->data.MobilePhone) );
		pReserveOpenAccountConfirmField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pReserveOpenAccountConfirmField_Fax != NULL) {
		if(pReserveOpenAccountConfirmField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pReserveOpenAccountConfirmField_Fax, sizeof(self->data.Fax) );
		pReserveOpenAccountConfirmField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pReserveOpenAccountConfirmField_EMail != NULL) {
		if(pReserveOpenAccountConfirmField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pReserveOpenAccountConfirmField_EMail, sizeof(self->data.EMail) );
		pReserveOpenAccountConfirmField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pReserveOpenAccountConfirmField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pReserveOpenAccountConfirmField_BankAccount != NULL) {
		if(pReserveOpenAccountConfirmField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReserveOpenAccountConfirmField_BankAccount, sizeof(self->data.BankAccount) );
		pReserveOpenAccountConfirmField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReserveOpenAccountConfirmField_BankPassWord != NULL) {
		if(pReserveOpenAccountConfirmField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReserveOpenAccountConfirmField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReserveOpenAccountConfirmField_BankPassWord = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReserveOpenAccountConfirmField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReserveOpenAccountConfirmField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReserveOpenAccountConfirmField_CurrencyID != NULL) {
		if(pReserveOpenAccountConfirmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReserveOpenAccountConfirmField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReserveOpenAccountConfirmField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReserveOpenAccountConfirmField_Digest != NULL) {
		if(pReserveOpenAccountConfirmField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReserveOpenAccountConfirmField_Digest, sizeof(self->data.Digest) );
		pReserveOpenAccountConfirmField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReserveOpenAccountConfirmField_BankAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReserveOpenAccountConfirmField_BrokerIDByBank != NULL) {
		if(pReserveOpenAccountConfirmField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReserveOpenAccountConfirmField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReserveOpenAccountConfirmField_BrokerIDByBank = NULL;
	}

	//TThostFtdcTIDType int
	self->data.TID = pReserveOpenAccountConfirmField_TID;

	//TThostFtdcAccountIDType char[13]
	if(pReserveOpenAccountConfirmField_AccountID != NULL) {
		if(pReserveOpenAccountConfirmField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReserveOpenAccountConfirmField_AccountID, sizeof(self->data.AccountID) );
		pReserveOpenAccountConfirmField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReserveOpenAccountConfirmField_Password != NULL) {
		if(pReserveOpenAccountConfirmField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReserveOpenAccountConfirmField_Password, sizeof(self->data.Password) );
		pReserveOpenAccountConfirmField_Password = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReserveOpenAccountConfirmField_BankReserveOpenSeq != NULL) {
		if(pReserveOpenAccountConfirmField_BankReserveOpenSeq_len > (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq)) {
			PyErr_Format(PyExc_ValueError, "BankReserveOpenSeq too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BankReserveOpenSeq_len, (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq));
			return -1;
		}
		strncpy(self->data.BankReserveOpenSeq, pReserveOpenAccountConfirmField_BankReserveOpenSeq, sizeof(self->data.BankReserveOpenSeq) );
		pReserveOpenAccountConfirmField_BankReserveOpenSeq = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReserveOpenAccountConfirmField_BookDate != NULL) {
		if(pReserveOpenAccountConfirmField_BookDate_len > (Py_ssize_t)sizeof(self->data.BookDate)) {
			PyErr_Format(PyExc_ValueError, "BookDate too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BookDate_len, (Py_ssize_t)sizeof(self->data.BookDate));
			return -1;
		}
		strncpy(self->data.BookDate, pReserveOpenAccountConfirmField_BookDate, sizeof(self->data.BookDate) );
		pReserveOpenAccountConfirmField_BookDate = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReserveOpenAccountConfirmField_BookPsw != NULL) {
		if(pReserveOpenAccountConfirmField_BookPsw_len > (Py_ssize_t)sizeof(self->data.BookPsw)) {
			PyErr_Format(PyExc_ValueError, "BookPsw too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_BookPsw_len, (Py_ssize_t)sizeof(self->data.BookPsw));
			return -1;
		}
		strncpy(self->data.BookPsw, pReserveOpenAccountConfirmField_BookPsw, sizeof(self->data.BookPsw) );
		pReserveOpenAccountConfirmField_BookPsw = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pReserveOpenAccountConfirmField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pReserveOpenAccountConfirmField_ErrorMsg != NULL) {
		if(pReserveOpenAccountConfirmField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pReserveOpenAccountConfirmField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pReserveOpenAccountConfirmField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pReserveOpenAccountConfirmField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcReserveOpenAccountConfirmField_dealloc(PyCThostFtdcReserveOpenAccountConfirmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_repr(PyCThostFtdcReserveOpenAccountConfirmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:i,s:c,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
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
		, "InstallID", self->data.InstallID
		, "VerifyCertNoFlag", self->data.VerifyCertNoFlag
		, "CurrencyID", self->data.CurrencyID 
		, "Digest", self->data.Digest 
		, "BankAccType", self->data.BankAccType
		, "BrokerIDByBank", self->data.BrokerIDByBank 
		, "TID", self->data.TID
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "BankReserveOpenSeq", self->data.BankReserveOpenSeq 
		, "BookDate", self->data.BookDate 
		, "BookPsw", self->data.BookPsw 
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReserveOpenAccountConfirmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradeCode(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankBranchID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerBranchID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradeDate(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradeTime(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankSerial(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TradingDay(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_PlateSerial(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_LastFragment(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_SessionID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CustomerName(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_IdCardType(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_IdentifiedCardNo(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Gender(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CountryCode(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CustType(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Address(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_ZipCode(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Telephone(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_MobilePhone(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Fax(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_EMail(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_MoneyAccountStatus(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccount(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankPassWord(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_InstallID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_VerifyCertNoFlag(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_CurrencyID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Digest(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccType(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerIDByBank(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_TID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_AccountID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_Password(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BankReserveOpenSeq(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BankReserveOpenSeq);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BookDate(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BookDate);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_BookPsw(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.BookPsw);
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorID(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorMsg(PyCThostFtdcReserveOpenAccountConfirmField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradeCode(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankBranchID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerBranchID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradeDate(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradeTime(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankSerial(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_TradingDay(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_PlateSerial(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_LastFragment(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_SessionID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_CustomerName(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
		PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.CustomerName, buf, sizeof(self->data.CustomerName));
	return 0;
}

static int PyCThostFtdcReserveOpenAccountConfirmField_set_IdCardType(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_IdentifiedCardNo(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_Gender(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_CountryCode(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_CustType(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_Address(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_ZipCode(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_Telephone(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_MobilePhone(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_Fax(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_EMail(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_MoneyAccountStatus(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccount(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankPassWord(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_InstallID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_VerifyCertNoFlag(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_CurrencyID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_Digest(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccType(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerIDByBank(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_TID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_AccountID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_Password(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BankReserveOpenSeq(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankReserveOpenSeq Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankReserveOpenSeq)) {
		PyErr_SetString(PyExc_ValueError, "BankReserveOpenSeq must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.BankReserveOpenSeq, buf, sizeof(self->data.BankReserveOpenSeq));
	return 0;
}

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BookDate(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BookDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BookDate)) {
		PyErr_SetString(PyExc_ValueError, "BookDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.BookDate, buf, sizeof(self->data.BookDate));
	return 0;
}

static int PyCThostFtdcReserveOpenAccountConfirmField_set_BookPsw(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BookPsw Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BookPsw)) {
		PyErr_SetString(PyExc_ValueError, "BookPsw must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.BookPsw, buf, sizeof(self->data.BookPsw));
	return 0;
}

static int PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorID(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorMsg(PyCThostFtdcReserveOpenAccountConfirmField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReserveOpenAccountConfirmField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradeCode, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankBranchID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerBranchID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradeDate, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradeTime, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankSerial, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TradingDay, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_PlateSerial, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_LastFragment, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_SessionID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CustomerName, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_IdCardType, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_IdentifiedCardNo, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Gender, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CountryCode, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CustType, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Address, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_ZipCode, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Telephone, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_MobilePhone, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Fax, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_EMail, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_MoneyAccountStatus, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccount, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankPassWord, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_InstallID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_CurrencyID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Digest, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankAccType, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BrokerIDByBank, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_TID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_TID, (char *)"TID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_AccountID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_Password, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_Password, (char *)"Password", NULL},
	 {(char *)"BankReserveOpenSeq", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BankReserveOpenSeq, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BankReserveOpenSeq, (char *)"BankReserveOpenSeq", NULL},
	 {(char *)"BookDate", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BookDate, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BookDate, (char *)"BookDate", NULL},
	 {(char *)"BookPsw", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_BookPsw, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_BookPsw, (char *)"BookPsw", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorID, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcReserveOpenAccountConfirmField_get_ErrorMsg, (setter)PyCThostFtdcReserveOpenAccountConfirmField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReserveOpenAccountConfirmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReserveOpenAccountConfirmField",	/* tp_name */
	sizeof(PyCThostFtdcReserveOpenAccountConfirmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReserveOpenAccountConfirmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReserveOpenAccountConfirmField_repr,   /* tp_repr */
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
	"CThostFtdcReserveOpenAccountConfirmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReserveOpenAccountConfirmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReserveOpenAccountConfirmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReserveOpenAccountConfirmField_new,       /* tp_new */
};

int PyCThostFtdcReserveOpenAccountConfirmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReserveOpenAccountConfirmField  */
	if (PyType_Ready(&PyCThostFtdcReserveOpenAccountConfirmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReserveOpenAccountConfirmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReserveOpenAccountConfirmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReserveOpenAccountConfirmField", (PyObject *)&PyCThostFtdcReserveOpenAccountConfirmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReserveOpenAccountConfirmField to module");
        Py_DECREF(&PyCThostFtdcReserveOpenAccountConfirmFieldType);
		return -1;
    }

    return 0;
}
