
#include "PyCThostFtdcReqTransferBySecField.h"



static PyObject *PyCThostFtdcReqTransferBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqTransferBySecField *self = (PyCThostFtdcReqTransferBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqTransferBySecField_init(PyCThostFtdcReqTransferBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqTransferBySecField_TradeCode = NULL;
	Py_ssize_t pReqTransferBySecField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqTransferBySecField_BankID = NULL;
	Py_ssize_t pReqTransferBySecField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqTransferBySecField_BankBranchID = NULL;
	Py_ssize_t pReqTransferBySecField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqTransferBySecField_BrokerID = NULL;
	Py_ssize_t pReqTransferBySecField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqTransferBySecField_BrokerBranchID = NULL;
	Py_ssize_t pReqTransferBySecField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqTransferBySecField_TradeDate = NULL;
	Py_ssize_t pReqTransferBySecField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqTransferBySecField_TradeTime = NULL;
	Py_ssize_t pReqTransferBySecField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqTransferBySecField_BankSerial = NULL;
	Py_ssize_t pReqTransferBySecField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqTransferBySecField_TradingDay = NULL;
	Py_ssize_t pReqTransferBySecField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqTransferBySecField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqTransferBySecField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqTransferBySecField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqTransferBySecField_CustomerName = NULL;
	Py_ssize_t pReqTransferBySecField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqTransferBySecField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqTransferBySecField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqTransferBySecField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pReqTransferBySecField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqTransferBySecField_BankAccount = NULL;
	Py_ssize_t pReqTransferBySecField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqTransferBySecField_BankPassWord = NULL;
	Py_ssize_t pReqTransferBySecField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqTransferBySecField_AccountID = NULL;
	Py_ssize_t pReqTransferBySecField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqTransferBySecField_Password = NULL;
	Py_ssize_t pReqTransferBySecField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pReqTransferBySecField_InstallID = 0;

	//TThostFtdcFutureSerialType int
	int pReqTransferBySecField_FutureSerial = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqTransferBySecField_UserID = NULL;
	Py_ssize_t pReqTransferBySecField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqTransferBySecField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqTransferBySecField_CurrencyID = NULL;
	Py_ssize_t pReqTransferBySecField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pReqTransferBySecField_TradeAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pReqTransferBySecField_FutureFetchAmount = 0.0;

	//TThostFtdcFeePayFlagType char
	char pReqTransferBySecField_FeePayFlag = 0;

	//TThostFtdcCustFeeType double
	double pReqTransferBySecField_CustFee = 0.0;

	//TThostFtdcFutureFeeType double
	double pReqTransferBySecField_BrokerFee = 0.0;

	//TThostFtdcAddInfoType char[129]
	const char *pReqTransferBySecField_Message = NULL;
	Py_ssize_t pReqTransferBySecField_Message_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqTransferBySecField_Digest = NULL;
	Py_ssize_t pReqTransferBySecField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqTransferBySecField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqTransferBySecField_DeviceID = NULL;
	Py_ssize_t pReqTransferBySecField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqTransferBySecField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqTransferBySecField_BrokerIDByBank = NULL;
	Py_ssize_t pReqTransferBySecField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqTransferBySecField_BankSecuAcc = NULL;
	Py_ssize_t pReqTransferBySecField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqTransferBySecField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqTransferBySecField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqTransferBySecField_OperNo = NULL;
	Py_ssize_t pReqTransferBySecField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pReqTransferBySecField_RequestID = 0;

	//TThostFtdcTIDType int
	int pReqTransferBySecField_TID = 0;

	//TThostFtdcTransferStatusType char
	char pReqTransferBySecField_TransferStatus = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqTransferBySecField_LongCustomerName = NULL;
	Py_ssize_t pReqTransferBySecField_LongCustomerName_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pReqTransferBySecField_DRIdentityID = 0;

	//TThostFtdcFutureSerialType int
	int pReqTransferBySecField_SecFutureSerial = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iics#ii", (char **)kwlist
#endif

		, &pReqTransferBySecField_TradeCode, &pReqTransferBySecField_TradeCode_len
		, &pReqTransferBySecField_BankID, &pReqTransferBySecField_BankID_len
		, &pReqTransferBySecField_BankBranchID, &pReqTransferBySecField_BankBranchID_len
		, &pReqTransferBySecField_BrokerID, &pReqTransferBySecField_BrokerID_len
		, &pReqTransferBySecField_BrokerBranchID, &pReqTransferBySecField_BrokerBranchID_len
		, &pReqTransferBySecField_TradeDate, &pReqTransferBySecField_TradeDate_len
		, &pReqTransferBySecField_TradeTime, &pReqTransferBySecField_TradeTime_len
		, &pReqTransferBySecField_BankSerial, &pReqTransferBySecField_BankSerial_len
		, &pReqTransferBySecField_TradingDay, &pReqTransferBySecField_TradingDay_len
		, &pReqTransferBySecField_PlateSerial
		, &pReqTransferBySecField_LastFragment
		, &pReqTransferBySecField_SessionID
		, &pReqTransferBySecField_CustomerName, &pReqTransferBySecField_CustomerName_len
		, &pReqTransferBySecField_IdCardType
		, &pReqTransferBySecField_IdentifiedCardNo, &pReqTransferBySecField_IdentifiedCardNo_len
		, &pReqTransferBySecField_CustType
		, &pReqTransferBySecField_BankAccount, &pReqTransferBySecField_BankAccount_len
		, &pReqTransferBySecField_BankPassWord, &pReqTransferBySecField_BankPassWord_len
		, &pReqTransferBySecField_AccountID, &pReqTransferBySecField_AccountID_len
		, &pReqTransferBySecField_Password, &pReqTransferBySecField_Password_len
		, &pReqTransferBySecField_InstallID
		, &pReqTransferBySecField_FutureSerial
		, &pReqTransferBySecField_UserID, &pReqTransferBySecField_UserID_len
		, &pReqTransferBySecField_VerifyCertNoFlag
		, &pReqTransferBySecField_CurrencyID, &pReqTransferBySecField_CurrencyID_len
		, &pReqTransferBySecField_TradeAmount
		, &pReqTransferBySecField_FutureFetchAmount
		, &pReqTransferBySecField_FeePayFlag
		, &pReqTransferBySecField_CustFee
		, &pReqTransferBySecField_BrokerFee
		, &pReqTransferBySecField_Message, &pReqTransferBySecField_Message_len
		, &pReqTransferBySecField_Digest, &pReqTransferBySecField_Digest_len
		, &pReqTransferBySecField_BankAccType
		, &pReqTransferBySecField_DeviceID, &pReqTransferBySecField_DeviceID_len
		, &pReqTransferBySecField_BankSecuAccType
		, &pReqTransferBySecField_BrokerIDByBank, &pReqTransferBySecField_BrokerIDByBank_len
		, &pReqTransferBySecField_BankSecuAcc, &pReqTransferBySecField_BankSecuAcc_len
		, &pReqTransferBySecField_BankPwdFlag
		, &pReqTransferBySecField_SecuPwdFlag
		, &pReqTransferBySecField_OperNo, &pReqTransferBySecField_OperNo_len
		, &pReqTransferBySecField_RequestID
		, &pReqTransferBySecField_TID
		, &pReqTransferBySecField_TransferStatus
		, &pReqTransferBySecField_LongCustomerName, &pReqTransferBySecField_LongCustomerName_len
		, &pReqTransferBySecField_DRIdentityID
		, &pReqTransferBySecField_SecFutureSerial


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqTransferBySecField_TradeCode != NULL) {
		if(pReqTransferBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqTransferBySecField_TradeCode, sizeof(self->data.TradeCode) );
		pReqTransferBySecField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqTransferBySecField_BankID != NULL) {
		if(pReqTransferBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqTransferBySecField_BankID, sizeof(self->data.BankID) );
		pReqTransferBySecField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqTransferBySecField_BankBranchID != NULL) {
		if(pReqTransferBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqTransferBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqTransferBySecField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqTransferBySecField_BrokerID != NULL) {
		if(pReqTransferBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqTransferBySecField_BrokerID, sizeof(self->data.BrokerID) );
		pReqTransferBySecField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqTransferBySecField_BrokerBranchID != NULL) {
		if(pReqTransferBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqTransferBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqTransferBySecField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqTransferBySecField_TradeDate != NULL) {
		if(pReqTransferBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqTransferBySecField_TradeDate, sizeof(self->data.TradeDate) );
		pReqTransferBySecField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqTransferBySecField_TradeTime != NULL) {
		if(pReqTransferBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqTransferBySecField_TradeTime, sizeof(self->data.TradeTime) );
		pReqTransferBySecField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqTransferBySecField_BankSerial != NULL) {
		if(pReqTransferBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqTransferBySecField_BankSerial, sizeof(self->data.BankSerial) );
		pReqTransferBySecField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqTransferBySecField_TradingDay != NULL) {
		if(pReqTransferBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqTransferBySecField_TradingDay, sizeof(self->data.TradingDay) );
		pReqTransferBySecField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqTransferBySecField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqTransferBySecField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqTransferBySecField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqTransferBySecField_CustomerName != NULL) {
		if(pReqTransferBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqTransferBySecField_CustomerName, sizeof(self->data.CustomerName) );
		pReqTransferBySecField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqTransferBySecField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqTransferBySecField_IdentifiedCardNo != NULL) {
		if(pReqTransferBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqTransferBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqTransferBySecField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqTransferBySecField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pReqTransferBySecField_BankAccount != NULL) {
		if(pReqTransferBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqTransferBySecField_BankAccount, sizeof(self->data.BankAccount) );
		pReqTransferBySecField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqTransferBySecField_BankPassWord != NULL) {
		if(pReqTransferBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqTransferBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqTransferBySecField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqTransferBySecField_AccountID != NULL) {
		if(pReqTransferBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqTransferBySecField_AccountID, sizeof(self->data.AccountID) );
		pReqTransferBySecField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqTransferBySecField_Password != NULL) {
		if(pReqTransferBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqTransferBySecField_Password, sizeof(self->data.Password) );
		pReqTransferBySecField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqTransferBySecField_InstallID;

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pReqTransferBySecField_FutureSerial;

	//TThostFtdcUserIDType char[16]
	if(pReqTransferBySecField_UserID != NULL) {
		if(pReqTransferBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqTransferBySecField_UserID, sizeof(self->data.UserID) );
		pReqTransferBySecField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqTransferBySecField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqTransferBySecField_CurrencyID != NULL) {
		if(pReqTransferBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqTransferBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqTransferBySecField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pReqTransferBySecField_TradeAmount;
	//TThostFtdcTradeAmountType double
	self->data.FutureFetchAmount = pReqTransferBySecField_FutureFetchAmount;
	//TThostFtdcFeePayFlagType char
	self->data.FeePayFlag = pReqTransferBySecField_FeePayFlag;

	//TThostFtdcCustFeeType double
	self->data.CustFee = pReqTransferBySecField_CustFee;
	//TThostFtdcFutureFeeType double
	self->data.BrokerFee = pReqTransferBySecField_BrokerFee;
	//TThostFtdcAddInfoType char[129]
	if(pReqTransferBySecField_Message != NULL) {
		if(pReqTransferBySecField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pReqTransferBySecField_Message, sizeof(self->data.Message) );
		pReqTransferBySecField_Message = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReqTransferBySecField_Digest != NULL) {
		if(pReqTransferBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqTransferBySecField_Digest, sizeof(self->data.Digest) );
		pReqTransferBySecField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqTransferBySecField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pReqTransferBySecField_DeviceID != NULL) {
		if(pReqTransferBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqTransferBySecField_DeviceID, sizeof(self->data.DeviceID) );
		pReqTransferBySecField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pReqTransferBySecField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqTransferBySecField_BrokerIDByBank != NULL) {
		if(pReqTransferBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqTransferBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqTransferBySecField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqTransferBySecField_BankSecuAcc != NULL) {
		if(pReqTransferBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pReqTransferBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pReqTransferBySecField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqTransferBySecField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqTransferBySecField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pReqTransferBySecField_OperNo != NULL) {
		if(pReqTransferBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqTransferBySecField_OperNo, sizeof(self->data.OperNo) );
		pReqTransferBySecField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pReqTransferBySecField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pReqTransferBySecField_TID;

	//TThostFtdcTransferStatusType char
	self->data.TransferStatus = pReqTransferBySecField_TransferStatus;

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqTransferBySecField_LongCustomerName != NULL) {
		if(pReqTransferBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqTransferBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqTransferBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqTransferBySecField_LongCustomerName = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pReqTransferBySecField_DRIdentityID;

	//TThostFtdcFutureSerialType int
	self->data.SecFutureSerial = pReqTransferBySecField_SecFutureSerial;



    return 0;
}

static void PyCThostFtdcReqTransferBySecField_dealloc(PyCThostFtdcReqTransferBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqTransferBySecField_repr(PyCThostFtdcReqTransferBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:s,s:i,s:i}"
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
		, "DRIdentityID", self->data.DRIdentityID
		, "SecFutureSerial", self->data.SecFutureSerial


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqTransferBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_TradeCode(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankBranchID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BrokerID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BrokerBranchID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_TradeDate(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_TradeTime(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankSerial(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_TradingDay(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_PlateSerial(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_LastFragment(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_SessionID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_CustomerName(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_IdCardType(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_IdentifiedCardNo(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_CustType(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankAccount(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankPassWord(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_AccountID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_Password(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_InstallID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_FutureSerial(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_UserID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_VerifyCertNoFlag(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_CurrencyID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_TradeAmount(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_FutureFetchAmount(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_FeePayFlag(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_CustFee(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BrokerFee(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BrokerFee);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_Message(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_Digest(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankAccType(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_DeviceID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankSecuAccType(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BrokerIDByBank(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankSecuAcc(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_BankPwdFlag(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_SecuPwdFlag(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_OperNo(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_RequestID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_TID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_TransferStatus(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_LongCustomerName(PyCThostFtdcReqTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_DRIdentityID(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcReqTransferBySecField_get_SecFutureSerial(PyCThostFtdcReqTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SecFutureSerial);
#else 
	return PyInt_FromLong(self->data.SecFutureSerial);
#endif 
}

static int PyCThostFtdcReqTransferBySecField_set_TradeCode(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankBranchID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BrokerID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BrokerBranchID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_TradeDate(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_TradeTime(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankSerial(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_TradingDay(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_PlateSerial(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_LastFragment(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_SessionID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_CustomerName(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_IdCardType(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_IdentifiedCardNo(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_CustType(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankAccount(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankPassWord(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_AccountID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_Password(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_InstallID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_FutureSerial(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_UserID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_VerifyCertNoFlag(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_CurrencyID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_TradeAmount(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_FutureFetchAmount(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_FeePayFlag(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_CustFee(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BrokerFee(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_Message(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_Digest(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankAccType(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_DeviceID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankSecuAccType(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BrokerIDByBank(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankSecuAcc(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_BankPwdFlag(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_SecuPwdFlag(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_OperNo(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_RequestID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_TID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_TransferStatus(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_LongCustomerName(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqTransferBySecField_set_DRIdentityID(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int"); 
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
    self->data.DRIdentityID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcReqTransferBySecField_set_SecFutureSerial(PyCThostFtdcReqTransferBySecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecFutureSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SecFutureSerial Expected int"); 
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
    self->data.SecFutureSerial = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcReqTransferBySecField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqTransferBySecField_get_TradeCode, (setter)PyCThostFtdcReqTransferBySecField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqTransferBySecField_get_BankID, (setter)PyCThostFtdcReqTransferBySecField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqTransferBySecField_get_BankBranchID, (setter)PyCThostFtdcReqTransferBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqTransferBySecField_get_BrokerID, (setter)PyCThostFtdcReqTransferBySecField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqTransferBySecField_get_BrokerBranchID, (setter)PyCThostFtdcReqTransferBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqTransferBySecField_get_TradeDate, (setter)PyCThostFtdcReqTransferBySecField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqTransferBySecField_get_TradeTime, (setter)PyCThostFtdcReqTransferBySecField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqTransferBySecField_get_BankSerial, (setter)PyCThostFtdcReqTransferBySecField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqTransferBySecField_get_TradingDay, (setter)PyCThostFtdcReqTransferBySecField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqTransferBySecField_get_PlateSerial, (setter)PyCThostFtdcReqTransferBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqTransferBySecField_get_LastFragment, (setter)PyCThostFtdcReqTransferBySecField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqTransferBySecField_get_SessionID, (setter)PyCThostFtdcReqTransferBySecField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqTransferBySecField_get_CustomerName, (setter)PyCThostFtdcReqTransferBySecField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqTransferBySecField_get_IdCardType, (setter)PyCThostFtdcReqTransferBySecField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqTransferBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqTransferBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqTransferBySecField_get_CustType, (setter)PyCThostFtdcReqTransferBySecField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqTransferBySecField_get_BankAccount, (setter)PyCThostFtdcReqTransferBySecField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqTransferBySecField_get_BankPassWord, (setter)PyCThostFtdcReqTransferBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqTransferBySecField_get_AccountID, (setter)PyCThostFtdcReqTransferBySecField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqTransferBySecField_get_Password, (setter)PyCThostFtdcReqTransferBySecField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqTransferBySecField_get_InstallID, (setter)PyCThostFtdcReqTransferBySecField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcReqTransferBySecField_get_FutureSerial, (setter)PyCThostFtdcReqTransferBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqTransferBySecField_get_UserID, (setter)PyCThostFtdcReqTransferBySecField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqTransferBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqTransferBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqTransferBySecField_get_CurrencyID, (setter)PyCThostFtdcReqTransferBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcReqTransferBySecField_get_TradeAmount, (setter)PyCThostFtdcReqTransferBySecField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"FutureFetchAmount", (getter)PyCThostFtdcReqTransferBySecField_get_FutureFetchAmount, (setter)PyCThostFtdcReqTransferBySecField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
	 {(char *)"FeePayFlag", (getter)PyCThostFtdcReqTransferBySecField_get_FeePayFlag, (setter)PyCThostFtdcReqTransferBySecField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcReqTransferBySecField_get_CustFee, (setter)PyCThostFtdcReqTransferBySecField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"BrokerFee", (getter)PyCThostFtdcReqTransferBySecField_get_BrokerFee, (setter)PyCThostFtdcReqTransferBySecField_set_BrokerFee, (char *)"BrokerFee", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcReqTransferBySecField_get_Message, (setter)PyCThostFtdcReqTransferBySecField_set_Message, (char *)"Message", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqTransferBySecField_get_Digest, (setter)PyCThostFtdcReqTransferBySecField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqTransferBySecField_get_BankAccType, (setter)PyCThostFtdcReqTransferBySecField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqTransferBySecField_get_DeviceID, (setter)PyCThostFtdcReqTransferBySecField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqTransferBySecField_get_BankSecuAccType, (setter)PyCThostFtdcReqTransferBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqTransferBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcReqTransferBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqTransferBySecField_get_BankSecuAcc, (setter)PyCThostFtdcReqTransferBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqTransferBySecField_get_BankPwdFlag, (setter)PyCThostFtdcReqTransferBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqTransferBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcReqTransferBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqTransferBySecField_get_OperNo, (setter)PyCThostFtdcReqTransferBySecField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcReqTransferBySecField_get_RequestID, (setter)PyCThostFtdcReqTransferBySecField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqTransferBySecField_get_TID, (setter)PyCThostFtdcReqTransferBySecField_set_TID, (char *)"TID", NULL},
	 {(char *)"TransferStatus", (getter)PyCThostFtdcReqTransferBySecField_get_TransferStatus, (setter)PyCThostFtdcReqTransferBySecField_set_TransferStatus, (char *)"TransferStatus", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqTransferBySecField_get_LongCustomerName, (setter)PyCThostFtdcReqTransferBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcReqTransferBySecField_get_DRIdentityID, (setter)PyCThostFtdcReqTransferBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"SecFutureSerial", (getter)PyCThostFtdcReqTransferBySecField_get_SecFutureSerial, (setter)PyCThostFtdcReqTransferBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqTransferBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqTransferBySecField",	/* tp_name */
	sizeof(PyCThostFtdcReqTransferBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqTransferBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqTransferBySecField_repr,   /* tp_repr */
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
	"CThostFtdcReqTransferBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqTransferBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqTransferBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqTransferBySecField_new,       /* tp_new */
};

int PyCThostFtdcReqTransferBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqTransferBySecField  */
	if (PyType_Ready(&PyCThostFtdcReqTransferBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqTransferBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqTransferBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqTransferBySecField", (PyObject *)&PyCThostFtdcReqTransferBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqTransferBySecField to module");
        Py_DECREF(&PyCThostFtdcReqTransferBySecFieldType);
		return -1;
    }

    return 0;
}
