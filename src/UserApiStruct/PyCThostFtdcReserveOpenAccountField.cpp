
#include "PyCThostFtdcReserveOpenAccountField.h"



static PyObject *PyCThostFtdcReserveOpenAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReserveOpenAccountField *self = (PyCThostFtdcReserveOpenAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReserveOpenAccountField_init(PyCThostFtdcReserveOpenAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "Gender", "CountryCode", "CustType", "Address", "ZipCode", "Telephone", "MobilePhone", "Fax", "EMail", "MoneyAccountStatus", "BankAccount", "BankPassWord", "InstallID", "VerifyCertNoFlag", "CurrencyID", "Digest", "BankAccType", "BrokerIDByBank", "TID", "ReserveOpenAccStas", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReserveOpenAccountField_TradeCode = NULL;
	Py_ssize_t pReserveOpenAccountField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReserveOpenAccountField_BankID = NULL;
	Py_ssize_t pReserveOpenAccountField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReserveOpenAccountField_BankBranchID = NULL;
	Py_ssize_t pReserveOpenAccountField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReserveOpenAccountField_BrokerID = NULL;
	Py_ssize_t pReserveOpenAccountField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReserveOpenAccountField_BrokerBranchID = NULL;
	Py_ssize_t pReserveOpenAccountField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReserveOpenAccountField_TradeDate = NULL;
	Py_ssize_t pReserveOpenAccountField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReserveOpenAccountField_TradeTime = NULL;
	Py_ssize_t pReserveOpenAccountField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReserveOpenAccountField_BankSerial = NULL;
	Py_ssize_t pReserveOpenAccountField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReserveOpenAccountField_TradingDay = NULL;
	Py_ssize_t pReserveOpenAccountField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReserveOpenAccountField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReserveOpenAccountField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReserveOpenAccountField_SessionID = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReserveOpenAccountField_CustomerName = NULL;
	Py_ssize_t pReserveOpenAccountField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReserveOpenAccountField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReserveOpenAccountField_IdentifiedCardNo = NULL;
	Py_ssize_t pReserveOpenAccountField_IdentifiedCardNo_len = 0;

	//TThostFtdcGenderType char
	char pReserveOpenAccountField_Gender = 0;

	//TThostFtdcCountryCodeType char[21]
	const char *pReserveOpenAccountField_CountryCode = NULL;
	Py_ssize_t pReserveOpenAccountField_CountryCode_len = 0;

	//TThostFtdcCustTypeType char
	char pReserveOpenAccountField_CustType = 0;

	//TThostFtdcAddressType char[101]
	const char *pReserveOpenAccountField_Address = NULL;
	Py_ssize_t pReserveOpenAccountField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pReserveOpenAccountField_ZipCode = NULL;
	Py_ssize_t pReserveOpenAccountField_ZipCode_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pReserveOpenAccountField_Telephone = NULL;
	Py_ssize_t pReserveOpenAccountField_Telephone_len = 0;

	//TThostFtdcMobilePhoneType char[21]
	const char *pReserveOpenAccountField_MobilePhone = NULL;
	Py_ssize_t pReserveOpenAccountField_MobilePhone_len = 0;

	//TThostFtdcFaxType char[41]
	const char *pReserveOpenAccountField_Fax = NULL;
	Py_ssize_t pReserveOpenAccountField_Fax_len = 0;

	//TThostFtdcEMailType char[41]
	const char *pReserveOpenAccountField_EMail = NULL;
	Py_ssize_t pReserveOpenAccountField_EMail_len = 0;

	//TThostFtdcMoneyAccountStatusType char
	char pReserveOpenAccountField_MoneyAccountStatus = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReserveOpenAccountField_BankAccount = NULL;
	Py_ssize_t pReserveOpenAccountField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReserveOpenAccountField_BankPassWord = NULL;
	Py_ssize_t pReserveOpenAccountField_BankPassWord_len = 0;

	//TThostFtdcInstallIDType int
	int pReserveOpenAccountField_InstallID = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReserveOpenAccountField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReserveOpenAccountField_CurrencyID = NULL;
	Py_ssize_t pReserveOpenAccountField_CurrencyID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReserveOpenAccountField_Digest = NULL;
	Py_ssize_t pReserveOpenAccountField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReserveOpenAccountField_BankAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReserveOpenAccountField_BrokerIDByBank = NULL;
	Py_ssize_t pReserveOpenAccountField_BrokerIDByBank_len = 0;

	//TThostFtdcTIDType int
	int pReserveOpenAccountField_TID = 0;

	//TThostFtdcReserveOpenAccStasType char
	char pReserveOpenAccountField_ReserveOpenAccStas = 0;

	//TThostFtdcErrorIDType int
	int pReserveOpenAccountField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pReserveOpenAccountField_ErrorMsg = NULL;
	Py_ssize_t pReserveOpenAccountField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#cy#y#y#y#y#y#cy#y#icy#y#cy#iciy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#cs#s#s#s#s#s#cs#s#ics#s#cs#icis#", (char **)kwlist
#endif

		, &pReserveOpenAccountField_TradeCode, &pReserveOpenAccountField_TradeCode_len
		, &pReserveOpenAccountField_BankID, &pReserveOpenAccountField_BankID_len
		, &pReserveOpenAccountField_BankBranchID, &pReserveOpenAccountField_BankBranchID_len
		, &pReserveOpenAccountField_BrokerID, &pReserveOpenAccountField_BrokerID_len
		, &pReserveOpenAccountField_BrokerBranchID, &pReserveOpenAccountField_BrokerBranchID_len
		, &pReserveOpenAccountField_TradeDate, &pReserveOpenAccountField_TradeDate_len
		, &pReserveOpenAccountField_TradeTime, &pReserveOpenAccountField_TradeTime_len
		, &pReserveOpenAccountField_BankSerial, &pReserveOpenAccountField_BankSerial_len
		, &pReserveOpenAccountField_TradingDay, &pReserveOpenAccountField_TradingDay_len
		, &pReserveOpenAccountField_PlateSerial
		, &pReserveOpenAccountField_LastFragment
		, &pReserveOpenAccountField_SessionID
		, &pReserveOpenAccountField_CustomerName, &pReserveOpenAccountField_CustomerName_len
		, &pReserveOpenAccountField_IdCardType
		, &pReserveOpenAccountField_IdentifiedCardNo, &pReserveOpenAccountField_IdentifiedCardNo_len
		, &pReserveOpenAccountField_Gender
		, &pReserveOpenAccountField_CountryCode, &pReserveOpenAccountField_CountryCode_len
		, &pReserveOpenAccountField_CustType
		, &pReserveOpenAccountField_Address, &pReserveOpenAccountField_Address_len
		, &pReserveOpenAccountField_ZipCode, &pReserveOpenAccountField_ZipCode_len
		, &pReserveOpenAccountField_Telephone, &pReserveOpenAccountField_Telephone_len
		, &pReserveOpenAccountField_MobilePhone, &pReserveOpenAccountField_MobilePhone_len
		, &pReserveOpenAccountField_Fax, &pReserveOpenAccountField_Fax_len
		, &pReserveOpenAccountField_EMail, &pReserveOpenAccountField_EMail_len
		, &pReserveOpenAccountField_MoneyAccountStatus
		, &pReserveOpenAccountField_BankAccount, &pReserveOpenAccountField_BankAccount_len
		, &pReserveOpenAccountField_BankPassWord, &pReserveOpenAccountField_BankPassWord_len
		, &pReserveOpenAccountField_InstallID
		, &pReserveOpenAccountField_VerifyCertNoFlag
		, &pReserveOpenAccountField_CurrencyID, &pReserveOpenAccountField_CurrencyID_len
		, &pReserveOpenAccountField_Digest, &pReserveOpenAccountField_Digest_len
		, &pReserveOpenAccountField_BankAccType
		, &pReserveOpenAccountField_BrokerIDByBank, &pReserveOpenAccountField_BrokerIDByBank_len
		, &pReserveOpenAccountField_TID
		, &pReserveOpenAccountField_ReserveOpenAccStas
		, &pReserveOpenAccountField_ErrorID
		, &pReserveOpenAccountField_ErrorMsg, &pReserveOpenAccountField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReserveOpenAccountField_TradeCode != NULL) {
		if(pReserveOpenAccountField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReserveOpenAccountField_TradeCode, sizeof(self->data.TradeCode) );
		pReserveOpenAccountField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReserveOpenAccountField_BankID != NULL) {
		if(pReserveOpenAccountField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReserveOpenAccountField_BankID, sizeof(self->data.BankID) );
		pReserveOpenAccountField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReserveOpenAccountField_BankBranchID != NULL) {
		if(pReserveOpenAccountField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReserveOpenAccountField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReserveOpenAccountField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReserveOpenAccountField_BrokerID != NULL) {
		if(pReserveOpenAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReserveOpenAccountField_BrokerID, sizeof(self->data.BrokerID) );
		pReserveOpenAccountField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReserveOpenAccountField_BrokerBranchID != NULL) {
		if(pReserveOpenAccountField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReserveOpenAccountField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReserveOpenAccountField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReserveOpenAccountField_TradeDate != NULL) {
		if(pReserveOpenAccountField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReserveOpenAccountField_TradeDate, sizeof(self->data.TradeDate) );
		pReserveOpenAccountField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReserveOpenAccountField_TradeTime != NULL) {
		if(pReserveOpenAccountField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReserveOpenAccountField_TradeTime, sizeof(self->data.TradeTime) );
		pReserveOpenAccountField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReserveOpenAccountField_BankSerial != NULL) {
		if(pReserveOpenAccountField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReserveOpenAccountField_BankSerial, sizeof(self->data.BankSerial) );
		pReserveOpenAccountField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReserveOpenAccountField_TradingDay != NULL) {
		if(pReserveOpenAccountField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReserveOpenAccountField_TradingDay, sizeof(self->data.TradingDay) );
		pReserveOpenAccountField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReserveOpenAccountField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReserveOpenAccountField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReserveOpenAccountField_SessionID;

	//TThostFtdcLongIndividualNameType char[161]
	if(pReserveOpenAccountField_CustomerName != NULL) {
		if(pReserveOpenAccountField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReserveOpenAccountField_CustomerName, sizeof(self->data.CustomerName) );
		pReserveOpenAccountField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReserveOpenAccountField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReserveOpenAccountField_IdentifiedCardNo != NULL) {
		if(pReserveOpenAccountField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReserveOpenAccountField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReserveOpenAccountField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcGenderType char
	self->data.Gender = pReserveOpenAccountField_Gender;

	//TThostFtdcCountryCodeType char[21]
	if(pReserveOpenAccountField_CountryCode != NULL) {
		if(pReserveOpenAccountField_CountryCode_len > (Py_ssize_t)sizeof(self->data.CountryCode)) {
			PyErr_Format(PyExc_ValueError, "CountryCode too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_CountryCode_len, (Py_ssize_t)sizeof(self->data.CountryCode));
			return -1;
		}
		strncpy(self->data.CountryCode, pReserveOpenAccountField_CountryCode, sizeof(self->data.CountryCode) );
		pReserveOpenAccountField_CountryCode = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReserveOpenAccountField_CustType;

	//TThostFtdcAddressType char[101]
	if(pReserveOpenAccountField_Address != NULL) {
		if(pReserveOpenAccountField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pReserveOpenAccountField_Address, sizeof(self->data.Address) );
		pReserveOpenAccountField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pReserveOpenAccountField_ZipCode != NULL) {
		if(pReserveOpenAccountField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pReserveOpenAccountField_ZipCode, sizeof(self->data.ZipCode) );
		pReserveOpenAccountField_ZipCode = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pReserveOpenAccountField_Telephone != NULL) {
		if(pReserveOpenAccountField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pReserveOpenAccountField_Telephone, sizeof(self->data.Telephone) );
		pReserveOpenAccountField_Telephone = NULL;
	}

	//TThostFtdcMobilePhoneType char[21]
	if(pReserveOpenAccountField_MobilePhone != NULL) {
		if(pReserveOpenAccountField_MobilePhone_len > (Py_ssize_t)sizeof(self->data.MobilePhone)) {
			PyErr_Format(PyExc_ValueError, "MobilePhone too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_MobilePhone_len, (Py_ssize_t)sizeof(self->data.MobilePhone));
			return -1;
		}
		strncpy(self->data.MobilePhone, pReserveOpenAccountField_MobilePhone, sizeof(self->data.MobilePhone) );
		pReserveOpenAccountField_MobilePhone = NULL;
	}

	//TThostFtdcFaxType char[41]
	if(pReserveOpenAccountField_Fax != NULL) {
		if(pReserveOpenAccountField_Fax_len > (Py_ssize_t)sizeof(self->data.Fax)) {
			PyErr_Format(PyExc_ValueError, "Fax too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_Fax_len, (Py_ssize_t)sizeof(self->data.Fax));
			return -1;
		}
		strncpy(self->data.Fax, pReserveOpenAccountField_Fax, sizeof(self->data.Fax) );
		pReserveOpenAccountField_Fax = NULL;
	}

	//TThostFtdcEMailType char[41]
	if(pReserveOpenAccountField_EMail != NULL) {
		if(pReserveOpenAccountField_EMail_len > (Py_ssize_t)sizeof(self->data.EMail)) {
			PyErr_Format(PyExc_ValueError, "EMail too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_EMail_len, (Py_ssize_t)sizeof(self->data.EMail));
			return -1;
		}
		strncpy(self->data.EMail, pReserveOpenAccountField_EMail, sizeof(self->data.EMail) );
		pReserveOpenAccountField_EMail = NULL;
	}

	//TThostFtdcMoneyAccountStatusType char
	self->data.MoneyAccountStatus = pReserveOpenAccountField_MoneyAccountStatus;

	//TThostFtdcBankAccountType char[41]
	if(pReserveOpenAccountField_BankAccount != NULL) {
		if(pReserveOpenAccountField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReserveOpenAccountField_BankAccount, sizeof(self->data.BankAccount) );
		pReserveOpenAccountField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReserveOpenAccountField_BankPassWord != NULL) {
		if(pReserveOpenAccountField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReserveOpenAccountField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReserveOpenAccountField_BankPassWord = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReserveOpenAccountField_InstallID;

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReserveOpenAccountField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReserveOpenAccountField_CurrencyID != NULL) {
		if(pReserveOpenAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReserveOpenAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReserveOpenAccountField_CurrencyID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReserveOpenAccountField_Digest != NULL) {
		if(pReserveOpenAccountField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReserveOpenAccountField_Digest, sizeof(self->data.Digest) );
		pReserveOpenAccountField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReserveOpenAccountField_BankAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReserveOpenAccountField_BrokerIDByBank != NULL) {
		if(pReserveOpenAccountField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReserveOpenAccountField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReserveOpenAccountField_BrokerIDByBank = NULL;
	}

	//TThostFtdcTIDType int
	self->data.TID = pReserveOpenAccountField_TID;

	//TThostFtdcReserveOpenAccStasType char
	self->data.ReserveOpenAccStas = pReserveOpenAccountField_ReserveOpenAccStas;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pReserveOpenAccountField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pReserveOpenAccountField_ErrorMsg != NULL) {
		if(pReserveOpenAccountField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pReserveOpenAccountField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pReserveOpenAccountField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pReserveOpenAccountField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcReserveOpenAccountField_dealloc(PyCThostFtdcReserveOpenAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_repr(PyCThostFtdcReserveOpenAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:c,s:y,s:i,s:c,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:i,s:c,s:s,s:s,s:c,s:s,s:i,s:c,s:i,s:s}"
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
		, "ReserveOpenAccStas", self->data.ReserveOpenAccStas
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReserveOpenAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_TradeCode(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BankID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BankBranchID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BrokerID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BrokerBranchID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_TradeDate(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_TradeTime(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BankSerial(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_TradingDay(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_PlateSerial(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_LastFragment(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_SessionID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_CustomerName(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_IdCardType(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_IdentifiedCardNo(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_Gender(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Gender), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_CountryCode(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CountryCode);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_CustType(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_Address(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_ZipCode(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_Telephone(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_MobilePhone(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.MobilePhone);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_Fax(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Fax);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_EMail(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.EMail);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_MoneyAccountStatus(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.MoneyAccountStatus), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BankAccount(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BankPassWord(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_InstallID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_VerifyCertNoFlag(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_CurrencyID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_Digest(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BankAccType(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_BrokerIDByBank(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_TID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_ReserveOpenAccStas(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ReserveOpenAccStas), 1);
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_ErrorID(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcReserveOpenAccountField_get_ErrorMsg(PyCThostFtdcReserveOpenAccountField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcReserveOpenAccountField_set_TradeCode(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BankID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BankBranchID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BrokerID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BrokerBranchID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_TradeDate(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_TradeTime(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BankSerial(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_TradingDay(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_PlateSerial(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_LastFragment(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_SessionID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_CustomerName(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_IdCardType(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_IdentifiedCardNo(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_Gender(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_CountryCode(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_CustType(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_Address(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_ZipCode(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_Telephone(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_MobilePhone(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_Fax(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_EMail(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_MoneyAccountStatus(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BankAccount(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BankPassWord(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_InstallID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_VerifyCertNoFlag(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_CurrencyID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_Digest(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BankAccType(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_BrokerIDByBank(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_TID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_ReserveOpenAccStas(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ReserveOpenAccStas Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ReserveOpenAccStas)) {
		PyErr_SetString(PyExc_ValueError, "ReserveOpenAccStas must be less than 1 bytes");
		return -1;
	}
	self->data.ReserveOpenAccStas = *buf;
	return 0;
}

static int PyCThostFtdcReserveOpenAccountField_set_ErrorID(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReserveOpenAccountField_set_ErrorMsg(PyCThostFtdcReserveOpenAccountField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReserveOpenAccountField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReserveOpenAccountField_get_TradeCode, (setter)PyCThostFtdcReserveOpenAccountField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReserveOpenAccountField_get_BankID, (setter)PyCThostFtdcReserveOpenAccountField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReserveOpenAccountField_get_BankBranchID, (setter)PyCThostFtdcReserveOpenAccountField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReserveOpenAccountField_get_BrokerID, (setter)PyCThostFtdcReserveOpenAccountField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReserveOpenAccountField_get_BrokerBranchID, (setter)PyCThostFtdcReserveOpenAccountField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReserveOpenAccountField_get_TradeDate, (setter)PyCThostFtdcReserveOpenAccountField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReserveOpenAccountField_get_TradeTime, (setter)PyCThostFtdcReserveOpenAccountField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReserveOpenAccountField_get_BankSerial, (setter)PyCThostFtdcReserveOpenAccountField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReserveOpenAccountField_get_TradingDay, (setter)PyCThostFtdcReserveOpenAccountField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReserveOpenAccountField_get_PlateSerial, (setter)PyCThostFtdcReserveOpenAccountField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReserveOpenAccountField_get_LastFragment, (setter)PyCThostFtdcReserveOpenAccountField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReserveOpenAccountField_get_SessionID, (setter)PyCThostFtdcReserveOpenAccountField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReserveOpenAccountField_get_CustomerName, (setter)PyCThostFtdcReserveOpenAccountField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReserveOpenAccountField_get_IdCardType, (setter)PyCThostFtdcReserveOpenAccountField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReserveOpenAccountField_get_IdentifiedCardNo, (setter)PyCThostFtdcReserveOpenAccountField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"Gender", (getter)PyCThostFtdcReserveOpenAccountField_get_Gender, (setter)PyCThostFtdcReserveOpenAccountField_set_Gender, (char *)"Gender", NULL},
	 {(char *)"CountryCode", (getter)PyCThostFtdcReserveOpenAccountField_get_CountryCode, (setter)PyCThostFtdcReserveOpenAccountField_set_CountryCode, (char *)"CountryCode", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReserveOpenAccountField_get_CustType, (setter)PyCThostFtdcReserveOpenAccountField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcReserveOpenAccountField_get_Address, (setter)PyCThostFtdcReserveOpenAccountField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcReserveOpenAccountField_get_ZipCode, (setter)PyCThostFtdcReserveOpenAccountField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcReserveOpenAccountField_get_Telephone, (setter)PyCThostFtdcReserveOpenAccountField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"MobilePhone", (getter)PyCThostFtdcReserveOpenAccountField_get_MobilePhone, (setter)PyCThostFtdcReserveOpenAccountField_set_MobilePhone, (char *)"MobilePhone", NULL},
	 {(char *)"Fax", (getter)PyCThostFtdcReserveOpenAccountField_get_Fax, (setter)PyCThostFtdcReserveOpenAccountField_set_Fax, (char *)"Fax", NULL},
	 {(char *)"EMail", (getter)PyCThostFtdcReserveOpenAccountField_get_EMail, (setter)PyCThostFtdcReserveOpenAccountField_set_EMail, (char *)"EMail", NULL},
	 {(char *)"MoneyAccountStatus", (getter)PyCThostFtdcReserveOpenAccountField_get_MoneyAccountStatus, (setter)PyCThostFtdcReserveOpenAccountField_set_MoneyAccountStatus, (char *)"MoneyAccountStatus", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReserveOpenAccountField_get_BankAccount, (setter)PyCThostFtdcReserveOpenAccountField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReserveOpenAccountField_get_BankPassWord, (setter)PyCThostFtdcReserveOpenAccountField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReserveOpenAccountField_get_InstallID, (setter)PyCThostFtdcReserveOpenAccountField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReserveOpenAccountField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReserveOpenAccountField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReserveOpenAccountField_get_CurrencyID, (setter)PyCThostFtdcReserveOpenAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReserveOpenAccountField_get_Digest, (setter)PyCThostFtdcReserveOpenAccountField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReserveOpenAccountField_get_BankAccType, (setter)PyCThostFtdcReserveOpenAccountField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReserveOpenAccountField_get_BrokerIDByBank, (setter)PyCThostFtdcReserveOpenAccountField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReserveOpenAccountField_get_TID, (setter)PyCThostFtdcReserveOpenAccountField_set_TID, (char *)"TID", NULL},
	 {(char *)"ReserveOpenAccStas", (getter)PyCThostFtdcReserveOpenAccountField_get_ReserveOpenAccStas, (setter)PyCThostFtdcReserveOpenAccountField_set_ReserveOpenAccStas, (char *)"ReserveOpenAccStas", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcReserveOpenAccountField_get_ErrorID, (setter)PyCThostFtdcReserveOpenAccountField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcReserveOpenAccountField_get_ErrorMsg, (setter)PyCThostFtdcReserveOpenAccountField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReserveOpenAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReserveOpenAccountField",	/* tp_name */
	sizeof(PyCThostFtdcReserveOpenAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReserveOpenAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReserveOpenAccountField_repr,   /* tp_repr */
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
	"CThostFtdcReserveOpenAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReserveOpenAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReserveOpenAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReserveOpenAccountField_new,       /* tp_new */
};

int PyCThostFtdcReserveOpenAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReserveOpenAccountField  */
	if (PyType_Ready(&PyCThostFtdcReserveOpenAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReserveOpenAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReserveOpenAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReserveOpenAccountField", (PyObject *)&PyCThostFtdcReserveOpenAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReserveOpenAccountField to module");
        Py_DECREF(&PyCThostFtdcReserveOpenAccountFieldType);
		return -1;
    }

    return 0;
}
