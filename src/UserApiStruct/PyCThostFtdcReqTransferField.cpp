
#include "PyCThostFtdcReqTransferField.h"



static PyObject *PyCThostFtdcReqTransferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqTransferField *self = (PyCThostFtdcReqTransferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqTransferField_init(PyCThostFtdcReqTransferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqTransferField_TradeCode = NULL;
	Py_ssize_t pReqTransferField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqTransferField_BankID = NULL;
	Py_ssize_t pReqTransferField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqTransferField_BankBranchID = NULL;
	Py_ssize_t pReqTransferField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqTransferField_BrokerID = NULL;
	Py_ssize_t pReqTransferField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqTransferField_BrokerBranchID = NULL;
	Py_ssize_t pReqTransferField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqTransferField_TradeDate = NULL;
	Py_ssize_t pReqTransferField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqTransferField_TradeTime = NULL;
	Py_ssize_t pReqTransferField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqTransferField_BankSerial = NULL;
	Py_ssize_t pReqTransferField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqTransferField_TradingDay = NULL;
	Py_ssize_t pReqTransferField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqTransferField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqTransferField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqTransferField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqTransferField_CustomerName = NULL;
	Py_ssize_t pReqTransferField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqTransferField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqTransferField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqTransferField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pReqTransferField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqTransferField_BankAccount = NULL;
	Py_ssize_t pReqTransferField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqTransferField_BankPassWord = NULL;
	Py_ssize_t pReqTransferField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqTransferField_AccountID = NULL;
	Py_ssize_t pReqTransferField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqTransferField_Password = NULL;
	Py_ssize_t pReqTransferField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pReqTransferField_InstallID = 0;

	//TThostFtdcFutureSerialType int
	int pReqTransferField_FutureSerial = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqTransferField_UserID = NULL;
	Py_ssize_t pReqTransferField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqTransferField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqTransferField_CurrencyID = NULL;
	Py_ssize_t pReqTransferField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pReqTransferField_TradeAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pReqTransferField_FutureFetchAmount = 0.0;

	//TThostFtdcFeePayFlagType char
	char pReqTransferField_FeePayFlag = 0;

	//TThostFtdcCustFeeType double
	double pReqTransferField_CustFee = 0.0;

	//TThostFtdcFutureFeeType double
	double pReqTransferField_BrokerFee = 0.0;

	//TThostFtdcAddInfoType char[129]
	const char *pReqTransferField_Message = NULL;
	Py_ssize_t pReqTransferField_Message_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqTransferField_Digest = NULL;
	Py_ssize_t pReqTransferField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqTransferField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqTransferField_DeviceID = NULL;
	Py_ssize_t pReqTransferField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqTransferField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqTransferField_BrokerIDByBank = NULL;
	Py_ssize_t pReqTransferField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqTransferField_BankSecuAcc = NULL;
	Py_ssize_t pReqTransferField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqTransferField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqTransferField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqTransferField_OperNo = NULL;
	Py_ssize_t pReqTransferField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pReqTransferField_RequestID = 0;

	//TThostFtdcTIDType int
	int pReqTransferField_TID = 0;

	//TThostFtdcTransferStatusType char
	char pReqTransferField_TransferStatus = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqTransferField_LongCustomerName = NULL;
	Py_ssize_t pReqTransferField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iics#", (char **)kwlist
#endif

		, &pReqTransferField_TradeCode, &pReqTransferField_TradeCode_len
		, &pReqTransferField_BankID, &pReqTransferField_BankID_len
		, &pReqTransferField_BankBranchID, &pReqTransferField_BankBranchID_len
		, &pReqTransferField_BrokerID, &pReqTransferField_BrokerID_len
		, &pReqTransferField_BrokerBranchID, &pReqTransferField_BrokerBranchID_len
		, &pReqTransferField_TradeDate, &pReqTransferField_TradeDate_len
		, &pReqTransferField_TradeTime, &pReqTransferField_TradeTime_len
		, &pReqTransferField_BankSerial, &pReqTransferField_BankSerial_len
		, &pReqTransferField_TradingDay, &pReqTransferField_TradingDay_len
		, &pReqTransferField_PlateSerial
		, &pReqTransferField_LastFragment
		, &pReqTransferField_SessionID
		, &pReqTransferField_CustomerName, &pReqTransferField_CustomerName_len
		, &pReqTransferField_IdCardType
		, &pReqTransferField_IdentifiedCardNo, &pReqTransferField_IdentifiedCardNo_len
		, &pReqTransferField_CustType
		, &pReqTransferField_BankAccount, &pReqTransferField_BankAccount_len
		, &pReqTransferField_BankPassWord, &pReqTransferField_BankPassWord_len
		, &pReqTransferField_AccountID, &pReqTransferField_AccountID_len
		, &pReqTransferField_Password, &pReqTransferField_Password_len
		, &pReqTransferField_InstallID
		, &pReqTransferField_FutureSerial
		, &pReqTransferField_UserID, &pReqTransferField_UserID_len
		, &pReqTransferField_VerifyCertNoFlag
		, &pReqTransferField_CurrencyID, &pReqTransferField_CurrencyID_len
		, &pReqTransferField_TradeAmount
		, &pReqTransferField_FutureFetchAmount
		, &pReqTransferField_FeePayFlag
		, &pReqTransferField_CustFee
		, &pReqTransferField_BrokerFee
		, &pReqTransferField_Message, &pReqTransferField_Message_len
		, &pReqTransferField_Digest, &pReqTransferField_Digest_len
		, &pReqTransferField_BankAccType
		, &pReqTransferField_DeviceID, &pReqTransferField_DeviceID_len
		, &pReqTransferField_BankSecuAccType
		, &pReqTransferField_BrokerIDByBank, &pReqTransferField_BrokerIDByBank_len
		, &pReqTransferField_BankSecuAcc, &pReqTransferField_BankSecuAcc_len
		, &pReqTransferField_BankPwdFlag
		, &pReqTransferField_SecuPwdFlag
		, &pReqTransferField_OperNo, &pReqTransferField_OperNo_len
		, &pReqTransferField_RequestID
		, &pReqTransferField_TID
		, &pReqTransferField_TransferStatus
		, &pReqTransferField_LongCustomerName, &pReqTransferField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqTransferField_TradeCode != NULL) {
		if(pReqTransferField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqTransferField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqTransferField_TradeCode, sizeof(self->data.TradeCode) );
		pReqTransferField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqTransferField_BankID != NULL) {
		if(pReqTransferField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqTransferField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqTransferField_BankID, sizeof(self->data.BankID) );
		pReqTransferField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqTransferField_BankBranchID != NULL) {
		if(pReqTransferField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqTransferField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqTransferField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqTransferField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqTransferField_BrokerID != NULL) {
		if(pReqTransferField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqTransferField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqTransferField_BrokerID, sizeof(self->data.BrokerID) );
		pReqTransferField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqTransferField_BrokerBranchID != NULL) {
		if(pReqTransferField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqTransferField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqTransferField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqTransferField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqTransferField_TradeDate != NULL) {
		if(pReqTransferField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqTransferField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqTransferField_TradeDate, sizeof(self->data.TradeDate) );
		pReqTransferField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqTransferField_TradeTime != NULL) {
		if(pReqTransferField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqTransferField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqTransferField_TradeTime, sizeof(self->data.TradeTime) );
		pReqTransferField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqTransferField_BankSerial != NULL) {
		if(pReqTransferField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqTransferField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqTransferField_BankSerial, sizeof(self->data.BankSerial) );
		pReqTransferField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqTransferField_TradingDay != NULL) {
		if(pReqTransferField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqTransferField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqTransferField_TradingDay, sizeof(self->data.TradingDay) );
		pReqTransferField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqTransferField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqTransferField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqTransferField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqTransferField_CustomerName != NULL) {
		if(pReqTransferField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqTransferField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqTransferField_CustomerName, sizeof(self->data.CustomerName) );
		pReqTransferField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqTransferField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqTransferField_IdentifiedCardNo != NULL) {
		if(pReqTransferField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqTransferField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqTransferField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqTransferField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqTransferField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pReqTransferField_BankAccount != NULL) {
		if(pReqTransferField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqTransferField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqTransferField_BankAccount, sizeof(self->data.BankAccount) );
		pReqTransferField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqTransferField_BankPassWord != NULL) {
		if(pReqTransferField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqTransferField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqTransferField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqTransferField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqTransferField_AccountID != NULL) {
		if(pReqTransferField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqTransferField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqTransferField_AccountID, sizeof(self->data.AccountID) );
		pReqTransferField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqTransferField_Password != NULL) {
		if(pReqTransferField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqTransferField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqTransferField_Password, sizeof(self->data.Password) );
		pReqTransferField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqTransferField_InstallID;

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pReqTransferField_FutureSerial;

	//TThostFtdcUserIDType char[16]
	if(pReqTransferField_UserID != NULL) {
		if(pReqTransferField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqTransferField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqTransferField_UserID, sizeof(self->data.UserID) );
		pReqTransferField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqTransferField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqTransferField_CurrencyID != NULL) {
		if(pReqTransferField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqTransferField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqTransferField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqTransferField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pReqTransferField_TradeAmount;
	//TThostFtdcTradeAmountType double
	self->data.FutureFetchAmount = pReqTransferField_FutureFetchAmount;
	//TThostFtdcFeePayFlagType char
	self->data.FeePayFlag = pReqTransferField_FeePayFlag;

	//TThostFtdcCustFeeType double
	self->data.CustFee = pReqTransferField_CustFee;
	//TThostFtdcFutureFeeType double
	self->data.BrokerFee = pReqTransferField_BrokerFee;
	//TThostFtdcAddInfoType char[129]
	if(pReqTransferField_Message != NULL) {
		if(pReqTransferField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pReqTransferField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pReqTransferField_Message, sizeof(self->data.Message) );
		pReqTransferField_Message = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReqTransferField_Digest != NULL) {
		if(pReqTransferField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqTransferField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqTransferField_Digest, sizeof(self->data.Digest) );
		pReqTransferField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqTransferField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pReqTransferField_DeviceID != NULL) {
		if(pReqTransferField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqTransferField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqTransferField_DeviceID, sizeof(self->data.DeviceID) );
		pReqTransferField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pReqTransferField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqTransferField_BrokerIDByBank != NULL) {
		if(pReqTransferField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqTransferField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqTransferField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqTransferField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqTransferField_BankSecuAcc != NULL) {
		if(pReqTransferField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pReqTransferField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pReqTransferField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pReqTransferField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqTransferField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqTransferField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pReqTransferField_OperNo != NULL) {
		if(pReqTransferField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqTransferField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqTransferField_OperNo, sizeof(self->data.OperNo) );
		pReqTransferField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pReqTransferField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pReqTransferField_TID;

	//TThostFtdcTransferStatusType char
	self->data.TransferStatus = pReqTransferField_TransferStatus;

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqTransferField_LongCustomerName != NULL) {
		if(pReqTransferField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqTransferField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqTransferField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqTransferField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqTransferField_dealloc(PyCThostFtdcReqTransferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqTransferField_repr(PyCThostFtdcReqTransferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:s}"
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
		, "InstallID", self->data.InstallID
		, "FutureSerial", self->data.FutureSerial
		, "UserID", self->data.UserID 
		, "VerifyCertNoFlag", self->data.VerifyCertNoFlag
		, "CurrencyID", self->data.CurrencyID 
		, "TradeAmount", self->data.TradeAmount
		, "FutureFetchAmount", self->data.FutureFetchAmount
		, "FeePayFlag", self->data.FeePayFlag
		, "CustFee", self->data.CustFee
		, "BrokerFee", self->data.BrokerFee
		, "Message", self->data.Message 
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
		, "TransferStatus", self->data.TransferStatus
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqTransferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqTransferField_get_TradeCode(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankBranchID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqTransferField_get_BrokerID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqTransferField_get_BrokerBranchID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqTransferField_get_TradeDate(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqTransferField_get_TradeTime(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankSerial(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqTransferField_get_TradingDay(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqTransferField_get_PlateSerial(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqTransferField_get_LastFragment(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_SessionID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferField_get_CustomerName(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqTransferField_get_IdCardType(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_IdentifiedCardNo(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqTransferField_get_CustType(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankAccount(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankPassWord(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqTransferField_get_AccountID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqTransferField_get_Password(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqTransferField_get_InstallID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferField_get_FutureSerial(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcReqTransferField_get_UserID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqTransferField_get_VerifyCertNoFlag(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_CurrencyID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqTransferField_get_TradeAmount(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcReqTransferField_get_FutureFetchAmount(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

static PyObject *PyCThostFtdcReqTransferField_get_FeePayFlag(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_CustFee(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcReqTransferField_get_BrokerFee(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BrokerFee);
}

static PyObject *PyCThostFtdcReqTransferField_get_Message(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcReqTransferField_get_Digest(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankAccType(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_DeviceID(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankSecuAccType(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_BrokerIDByBank(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankSecuAcc(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcReqTransferField_get_BankPwdFlag(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_SecuPwdFlag(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_OperNo(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqTransferField_get_RequestID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferField_get_TID(PyCThostFtdcReqTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferField_get_TransferStatus(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

static PyObject *PyCThostFtdcReqTransferField_get_LongCustomerName(PyCThostFtdcReqTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcReqTransferField_set_TradeCode(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankBranchID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BrokerID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BrokerBranchID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_TradeDate(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_TradeTime(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankSerial(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_TradingDay(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_PlateSerial(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_LastFragment(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_SessionID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_CustomerName(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_IdCardType(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_IdentifiedCardNo(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_CustType(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankAccount(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankPassWord(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_AccountID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_Password(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_InstallID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_FutureSerial(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_UserID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_VerifyCertNoFlag(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_CurrencyID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_TradeAmount(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradeAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TradeAmount = buf;
    return 0;
}

static int PyCThostFtdcReqTransferField_set_FutureFetchAmount(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureFetchAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.FutureFetchAmount = buf;
    return 0;
}

static int PyCThostFtdcReqTransferField_set_FeePayFlag(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FeePayFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FeePayFlag)) {
		PyErr_SetString(PyExc_ValueError, "FeePayFlag must be less than 1 bytes");
		return -1;
	}
	self->data.FeePayFlag = *buf;
	return 0;
}

static int PyCThostFtdcReqTransferField_set_CustFee(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CustFee Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.CustFee = buf;
    return 0;
}

static int PyCThostFtdcReqTransferField_set_BrokerFee(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerFee Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.BrokerFee = buf;
    return 0;
}

static int PyCThostFtdcReqTransferField_set_Message(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Message Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Message)) {
		PyErr_SetString(PyExc_ValueError, "Message must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.Message, buf, sizeof(self->data.Message));
	return 0;
}

static int PyCThostFtdcReqTransferField_set_Digest(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankAccType(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_DeviceID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankSecuAccType(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BrokerIDByBank(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankSecuAcc(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_BankPwdFlag(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_SecuPwdFlag(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_OperNo(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_RequestID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_TID(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferField_set_TransferStatus(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TransferStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TransferStatus)) {
		PyErr_SetString(PyExc_ValueError, "TransferStatus must be less than 1 bytes");
		return -1;
	}
	self->data.TransferStatus = *buf;
	return 0;
}

static int PyCThostFtdcReqTransferField_set_LongCustomerName(PyCThostFtdcReqTransferField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqTransferField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqTransferField_get_TradeCode, (setter)PyCThostFtdcReqTransferField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqTransferField_get_BankID, (setter)PyCThostFtdcReqTransferField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqTransferField_get_BankBranchID, (setter)PyCThostFtdcReqTransferField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqTransferField_get_BrokerID, (setter)PyCThostFtdcReqTransferField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqTransferField_get_BrokerBranchID, (setter)PyCThostFtdcReqTransferField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqTransferField_get_TradeDate, (setter)PyCThostFtdcReqTransferField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqTransferField_get_TradeTime, (setter)PyCThostFtdcReqTransferField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqTransferField_get_BankSerial, (setter)PyCThostFtdcReqTransferField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqTransferField_get_TradingDay, (setter)PyCThostFtdcReqTransferField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqTransferField_get_PlateSerial, (setter)PyCThostFtdcReqTransferField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqTransferField_get_LastFragment, (setter)PyCThostFtdcReqTransferField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqTransferField_get_SessionID, (setter)PyCThostFtdcReqTransferField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqTransferField_get_CustomerName, (setter)PyCThostFtdcReqTransferField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqTransferField_get_IdCardType, (setter)PyCThostFtdcReqTransferField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqTransferField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqTransferField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqTransferField_get_CustType, (setter)PyCThostFtdcReqTransferField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqTransferField_get_BankAccount, (setter)PyCThostFtdcReqTransferField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqTransferField_get_BankPassWord, (setter)PyCThostFtdcReqTransferField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqTransferField_get_AccountID, (setter)PyCThostFtdcReqTransferField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqTransferField_get_Password, (setter)PyCThostFtdcReqTransferField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqTransferField_get_InstallID, (setter)PyCThostFtdcReqTransferField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcReqTransferField_get_FutureSerial, (setter)PyCThostFtdcReqTransferField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqTransferField_get_UserID, (setter)PyCThostFtdcReqTransferField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqTransferField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqTransferField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqTransferField_get_CurrencyID, (setter)PyCThostFtdcReqTransferField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcReqTransferField_get_TradeAmount, (setter)PyCThostFtdcReqTransferField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"FutureFetchAmount", (getter)PyCThostFtdcReqTransferField_get_FutureFetchAmount, (setter)PyCThostFtdcReqTransferField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
	 {(char *)"FeePayFlag", (getter)PyCThostFtdcReqTransferField_get_FeePayFlag, (setter)PyCThostFtdcReqTransferField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcReqTransferField_get_CustFee, (setter)PyCThostFtdcReqTransferField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"BrokerFee", (getter)PyCThostFtdcReqTransferField_get_BrokerFee, (setter)PyCThostFtdcReqTransferField_set_BrokerFee, (char *)"BrokerFee", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcReqTransferField_get_Message, (setter)PyCThostFtdcReqTransferField_set_Message, (char *)"Message", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqTransferField_get_Digest, (setter)PyCThostFtdcReqTransferField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqTransferField_get_BankAccType, (setter)PyCThostFtdcReqTransferField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqTransferField_get_DeviceID, (setter)PyCThostFtdcReqTransferField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqTransferField_get_BankSecuAccType, (setter)PyCThostFtdcReqTransferField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqTransferField_get_BrokerIDByBank, (setter)PyCThostFtdcReqTransferField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqTransferField_get_BankSecuAcc, (setter)PyCThostFtdcReqTransferField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqTransferField_get_BankPwdFlag, (setter)PyCThostFtdcReqTransferField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqTransferField_get_SecuPwdFlag, (setter)PyCThostFtdcReqTransferField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqTransferField_get_OperNo, (setter)PyCThostFtdcReqTransferField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcReqTransferField_get_RequestID, (setter)PyCThostFtdcReqTransferField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqTransferField_get_TID, (setter)PyCThostFtdcReqTransferField_set_TID, (char *)"TID", NULL},
	 {(char *)"TransferStatus", (getter)PyCThostFtdcReqTransferField_get_TransferStatus, (setter)PyCThostFtdcReqTransferField_set_TransferStatus, (char *)"TransferStatus", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqTransferField_get_LongCustomerName, (setter)PyCThostFtdcReqTransferField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqTransferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqTransferField",	/* tp_name */
	sizeof(PyCThostFtdcReqTransferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqTransferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqTransferField_repr,   /* tp_repr */
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
	"CThostFtdcReqTransferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqTransferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqTransferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqTransferField_new,       /* tp_new */
};

int PyCThostFtdcReqTransferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqTransferField  */
	if (PyType_Ready(&PyCThostFtdcReqTransferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqTransferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqTransferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqTransferField", (PyObject *)&PyCThostFtdcReqTransferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqTransferField to module");
        Py_DECREF(&PyCThostFtdcReqTransferFieldType);
		return -1;
    }

    return 0;
}
