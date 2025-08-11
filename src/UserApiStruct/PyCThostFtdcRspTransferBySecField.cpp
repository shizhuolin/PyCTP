
#include "PyCThostFtdcRspTransferBySecField.h"



static PyObject *PyCThostFtdcRspTransferBySecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspTransferBySecField *self = (PyCThostFtdcRspTransferBySecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspTransferBySecField_init(PyCThostFtdcRspTransferBySecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "ErrorID", "ErrorMsg", "LongCustomerName", "DRIdentityID", "SecFutureSerial",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspTransferBySecField_TradeCode = NULL;
	Py_ssize_t pRspTransferBySecField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspTransferBySecField_BankID = NULL;
	Py_ssize_t pRspTransferBySecField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspTransferBySecField_BankBranchID = NULL;
	Py_ssize_t pRspTransferBySecField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspTransferBySecField_BrokerID = NULL;
	Py_ssize_t pRspTransferBySecField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspTransferBySecField_BrokerBranchID = NULL;
	Py_ssize_t pRspTransferBySecField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspTransferBySecField_TradeDate = NULL;
	Py_ssize_t pRspTransferBySecField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspTransferBySecField_TradeTime = NULL;
	Py_ssize_t pRspTransferBySecField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspTransferBySecField_BankSerial = NULL;
	Py_ssize_t pRspTransferBySecField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspTransferBySecField_TradingDay = NULL;
	Py_ssize_t pRspTransferBySecField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspTransferBySecField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspTransferBySecField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspTransferBySecField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pRspTransferBySecField_CustomerName = NULL;
	Py_ssize_t pRspTransferBySecField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pRspTransferBySecField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pRspTransferBySecField_IdentifiedCardNo = NULL;
	Py_ssize_t pRspTransferBySecField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pRspTransferBySecField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspTransferBySecField_BankAccount = NULL;
	Py_ssize_t pRspTransferBySecField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspTransferBySecField_BankPassWord = NULL;
	Py_ssize_t pRspTransferBySecField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pRspTransferBySecField_AccountID = NULL;
	Py_ssize_t pRspTransferBySecField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspTransferBySecField_Password = NULL;
	Py_ssize_t pRspTransferBySecField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pRspTransferBySecField_InstallID = 0;

	//TThostFtdcFutureSerialType int
	int pRspTransferBySecField_FutureSerial = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspTransferBySecField_UserID = NULL;
	Py_ssize_t pRspTransferBySecField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pRspTransferBySecField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspTransferBySecField_CurrencyID = NULL;
	Py_ssize_t pRspTransferBySecField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pRspTransferBySecField_TradeAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pRspTransferBySecField_FutureFetchAmount = 0.0;

	//TThostFtdcFeePayFlagType char
	char pRspTransferBySecField_FeePayFlag = 0;

	//TThostFtdcCustFeeType double
	double pRspTransferBySecField_CustFee = 0.0;

	//TThostFtdcFutureFeeType double
	double pRspTransferBySecField_BrokerFee = 0.0;

	//TThostFtdcAddInfoType char[129]
	const char *pRspTransferBySecField_Message = NULL;
	Py_ssize_t pRspTransferBySecField_Message_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pRspTransferBySecField_Digest = NULL;
	Py_ssize_t pRspTransferBySecField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspTransferBySecField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspTransferBySecField_DeviceID = NULL;
	Py_ssize_t pRspTransferBySecField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspTransferBySecField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspTransferBySecField_BrokerIDByBank = NULL;
	Py_ssize_t pRspTransferBySecField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspTransferBySecField_BankSecuAcc = NULL;
	Py_ssize_t pRspTransferBySecField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pRspTransferBySecField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pRspTransferBySecField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspTransferBySecField_OperNo = NULL;
	Py_ssize_t pRspTransferBySecField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspTransferBySecField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspTransferBySecField_TID = 0;

	//TThostFtdcTransferStatusType char
	char pRspTransferBySecField_TransferStatus = 0;

	//TThostFtdcErrorIDType int
	int pRspTransferBySecField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pRspTransferBySecField_ErrorMsg = NULL;
	Py_ssize_t pRspTransferBySecField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pRspTransferBySecField_LongCustomerName = NULL;
	Py_ssize_t pRspTransferBySecField_LongCustomerName_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pRspTransferBySecField_DRIdentityID = 0;

	//TThostFtdcFutureSerialType int
	int pRspTransferBySecField_SecFutureSerial = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iiciy#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iicis#s#ii", (char **)kwlist
#endif

		, &pRspTransferBySecField_TradeCode, &pRspTransferBySecField_TradeCode_len
		, &pRspTransferBySecField_BankID, &pRspTransferBySecField_BankID_len
		, &pRspTransferBySecField_BankBranchID, &pRspTransferBySecField_BankBranchID_len
		, &pRspTransferBySecField_BrokerID, &pRspTransferBySecField_BrokerID_len
		, &pRspTransferBySecField_BrokerBranchID, &pRspTransferBySecField_BrokerBranchID_len
		, &pRspTransferBySecField_TradeDate, &pRspTransferBySecField_TradeDate_len
		, &pRspTransferBySecField_TradeTime, &pRspTransferBySecField_TradeTime_len
		, &pRspTransferBySecField_BankSerial, &pRspTransferBySecField_BankSerial_len
		, &pRspTransferBySecField_TradingDay, &pRspTransferBySecField_TradingDay_len
		, &pRspTransferBySecField_PlateSerial
		, &pRspTransferBySecField_LastFragment
		, &pRspTransferBySecField_SessionID
		, &pRspTransferBySecField_CustomerName, &pRspTransferBySecField_CustomerName_len
		, &pRspTransferBySecField_IdCardType
		, &pRspTransferBySecField_IdentifiedCardNo, &pRspTransferBySecField_IdentifiedCardNo_len
		, &pRspTransferBySecField_CustType
		, &pRspTransferBySecField_BankAccount, &pRspTransferBySecField_BankAccount_len
		, &pRspTransferBySecField_BankPassWord, &pRspTransferBySecField_BankPassWord_len
		, &pRspTransferBySecField_AccountID, &pRspTransferBySecField_AccountID_len
		, &pRspTransferBySecField_Password, &pRspTransferBySecField_Password_len
		, &pRspTransferBySecField_InstallID
		, &pRspTransferBySecField_FutureSerial
		, &pRspTransferBySecField_UserID, &pRspTransferBySecField_UserID_len
		, &pRspTransferBySecField_VerifyCertNoFlag
		, &pRspTransferBySecField_CurrencyID, &pRspTransferBySecField_CurrencyID_len
		, &pRspTransferBySecField_TradeAmount
		, &pRspTransferBySecField_FutureFetchAmount
		, &pRspTransferBySecField_FeePayFlag
		, &pRspTransferBySecField_CustFee
		, &pRspTransferBySecField_BrokerFee
		, &pRspTransferBySecField_Message, &pRspTransferBySecField_Message_len
		, &pRspTransferBySecField_Digest, &pRspTransferBySecField_Digest_len
		, &pRspTransferBySecField_BankAccType
		, &pRspTransferBySecField_DeviceID, &pRspTransferBySecField_DeviceID_len
		, &pRspTransferBySecField_BankSecuAccType
		, &pRspTransferBySecField_BrokerIDByBank, &pRspTransferBySecField_BrokerIDByBank_len
		, &pRspTransferBySecField_BankSecuAcc, &pRspTransferBySecField_BankSecuAcc_len
		, &pRspTransferBySecField_BankPwdFlag
		, &pRspTransferBySecField_SecuPwdFlag
		, &pRspTransferBySecField_OperNo, &pRspTransferBySecField_OperNo_len
		, &pRspTransferBySecField_RequestID
		, &pRspTransferBySecField_TID
		, &pRspTransferBySecField_TransferStatus
		, &pRspTransferBySecField_ErrorID
		, &pRspTransferBySecField_ErrorMsg, &pRspTransferBySecField_ErrorMsg_len
		, &pRspTransferBySecField_LongCustomerName, &pRspTransferBySecField_LongCustomerName_len
		, &pRspTransferBySecField_DRIdentityID
		, &pRspTransferBySecField_SecFutureSerial


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspTransferBySecField_TradeCode != NULL) {
		if(pRspTransferBySecField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspTransferBySecField_TradeCode, sizeof(self->data.TradeCode) );
		pRspTransferBySecField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspTransferBySecField_BankID != NULL) {
		if(pRspTransferBySecField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspTransferBySecField_BankID, sizeof(self->data.BankID) );
		pRspTransferBySecField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspTransferBySecField_BankBranchID != NULL) {
		if(pRspTransferBySecField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspTransferBySecField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspTransferBySecField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspTransferBySecField_BrokerID != NULL) {
		if(pRspTransferBySecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspTransferBySecField_BrokerID, sizeof(self->data.BrokerID) );
		pRspTransferBySecField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspTransferBySecField_BrokerBranchID != NULL) {
		if(pRspTransferBySecField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspTransferBySecField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspTransferBySecField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspTransferBySecField_TradeDate != NULL) {
		if(pRspTransferBySecField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspTransferBySecField_TradeDate, sizeof(self->data.TradeDate) );
		pRspTransferBySecField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspTransferBySecField_TradeTime != NULL) {
		if(pRspTransferBySecField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspTransferBySecField_TradeTime, sizeof(self->data.TradeTime) );
		pRspTransferBySecField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspTransferBySecField_BankSerial != NULL) {
		if(pRspTransferBySecField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspTransferBySecField_BankSerial, sizeof(self->data.BankSerial) );
		pRspTransferBySecField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspTransferBySecField_TradingDay != NULL) {
		if(pRspTransferBySecField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspTransferBySecField_TradingDay, sizeof(self->data.TradingDay) );
		pRspTransferBySecField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspTransferBySecField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspTransferBySecField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspTransferBySecField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pRspTransferBySecField_CustomerName != NULL) {
		if(pRspTransferBySecField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pRspTransferBySecField_CustomerName, sizeof(self->data.CustomerName) );
		pRspTransferBySecField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pRspTransferBySecField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pRspTransferBySecField_IdentifiedCardNo != NULL) {
		if(pRspTransferBySecField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pRspTransferBySecField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pRspTransferBySecField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pRspTransferBySecField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pRspTransferBySecField_BankAccount != NULL) {
		if(pRspTransferBySecField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pRspTransferBySecField_BankAccount, sizeof(self->data.BankAccount) );
		pRspTransferBySecField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspTransferBySecField_BankPassWord != NULL) {
		if(pRspTransferBySecField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pRspTransferBySecField_BankPassWord, sizeof(self->data.BankPassWord) );
		pRspTransferBySecField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pRspTransferBySecField_AccountID != NULL) {
		if(pRspTransferBySecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pRspTransferBySecField_AccountID, sizeof(self->data.AccountID) );
		pRspTransferBySecField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspTransferBySecField_Password != NULL) {
		if(pRspTransferBySecField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pRspTransferBySecField_Password, sizeof(self->data.Password) );
		pRspTransferBySecField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspTransferBySecField_InstallID;

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pRspTransferBySecField_FutureSerial;

	//TThostFtdcUserIDType char[16]
	if(pRspTransferBySecField_UserID != NULL) {
		if(pRspTransferBySecField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspTransferBySecField_UserID, sizeof(self->data.UserID) );
		pRspTransferBySecField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pRspTransferBySecField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pRspTransferBySecField_CurrencyID != NULL) {
		if(pRspTransferBySecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspTransferBySecField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspTransferBySecField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pRspTransferBySecField_TradeAmount;
	//TThostFtdcTradeAmountType double
	self->data.FutureFetchAmount = pRspTransferBySecField_FutureFetchAmount;
	//TThostFtdcFeePayFlagType char
	self->data.FeePayFlag = pRspTransferBySecField_FeePayFlag;

	//TThostFtdcCustFeeType double
	self->data.CustFee = pRspTransferBySecField_CustFee;
	//TThostFtdcFutureFeeType double
	self->data.BrokerFee = pRspTransferBySecField_BrokerFee;
	//TThostFtdcAddInfoType char[129]
	if(pRspTransferBySecField_Message != NULL) {
		if(pRspTransferBySecField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pRspTransferBySecField_Message, sizeof(self->data.Message) );
		pRspTransferBySecField_Message = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pRspTransferBySecField_Digest != NULL) {
		if(pRspTransferBySecField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspTransferBySecField_Digest, sizeof(self->data.Digest) );
		pRspTransferBySecField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pRspTransferBySecField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pRspTransferBySecField_DeviceID != NULL) {
		if(pRspTransferBySecField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspTransferBySecField_DeviceID, sizeof(self->data.DeviceID) );
		pRspTransferBySecField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pRspTransferBySecField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspTransferBySecField_BrokerIDByBank != NULL) {
		if(pRspTransferBySecField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspTransferBySecField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspTransferBySecField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pRspTransferBySecField_BankSecuAcc != NULL) {
		if(pRspTransferBySecField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pRspTransferBySecField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pRspTransferBySecField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pRspTransferBySecField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pRspTransferBySecField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pRspTransferBySecField_OperNo != NULL) {
		if(pRspTransferBySecField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspTransferBySecField_OperNo, sizeof(self->data.OperNo) );
		pRspTransferBySecField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspTransferBySecField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspTransferBySecField_TID;

	//TThostFtdcTransferStatusType char
	self->data.TransferStatus = pRspTransferBySecField_TransferStatus;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pRspTransferBySecField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pRspTransferBySecField_ErrorMsg != NULL) {
		if(pRspTransferBySecField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pRspTransferBySecField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pRspTransferBySecField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pRspTransferBySecField_LongCustomerName != NULL) {
		if(pRspTransferBySecField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pRspTransferBySecField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pRspTransferBySecField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pRspTransferBySecField_LongCustomerName = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pRspTransferBySecField_DRIdentityID;

	//TThostFtdcFutureSerialType int
	self->data.SecFutureSerial = pRspTransferBySecField_SecFutureSerial;



    return 0;
}

static void PyCThostFtdcRspTransferBySecField_dealloc(PyCThostFtdcRspTransferBySecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspTransferBySecField_repr(PyCThostFtdcRspTransferBySecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:i,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:i,s:s,s:s,s:i,s:i}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "LongCustomerName", self->data.LongCustomerName 
		, "DRIdentityID", self->data.DRIdentityID
		, "SecFutureSerial", self->data.SecFutureSerial


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspTransferBySecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeCode(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankBranchID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerBranchID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeDate(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeTime(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_TradingDay(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_PlateSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_LastFragment(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_SessionID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_CustomerName(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_IdCardType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_IdentifiedCardNo(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_CustType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankAccount(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankPassWord(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_AccountID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_Password(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_InstallID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_FutureSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_UserID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_VerifyCertNoFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_CurrencyID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_TradeAmount(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_FutureFetchAmount(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_FeePayFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_CustFee(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerFee(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BrokerFee);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_Message(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_Digest(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankAccType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_DeviceID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankSecuAccType(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BrokerIDByBank(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankSecuAcc(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_BankPwdFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_SecuPwdFlag(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_OperNo(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_RequestID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_TID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_TransferStatus(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_ErrorID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_ErrorMsg(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_LongCustomerName(PyCThostFtdcRspTransferBySecField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_DRIdentityID(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferBySecField_get_SecFutureSerial(PyCThostFtdcRspTransferBySecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SecFutureSerial);
#else 
	return PyInt_FromLong(self->data.SecFutureSerial);
#endif 
}

static int PyCThostFtdcRspTransferBySecField_set_TradeCode(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankBranchID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BrokerID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BrokerBranchID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_TradeDate(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_TradeTime(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankSerial(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_TradingDay(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_PlateSerial(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_LastFragment(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_SessionID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_CustomerName(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_IdCardType(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_IdentifiedCardNo(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_CustType(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankAccount(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankPassWord(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_AccountID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_Password(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_InstallID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_FutureSerial(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_UserID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_VerifyCertNoFlag(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_CurrencyID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_TradeAmount(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_FutureFetchAmount(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_FeePayFlag(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_CustFee(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BrokerFee(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_Message(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_Digest(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankAccType(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_DeviceID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankSecuAccType(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BrokerIDByBank(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankSecuAcc(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_BankPwdFlag(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_SecuPwdFlag(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_OperNo(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_RequestID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_TID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_TransferStatus(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_ErrorID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_ErrorMsg(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_LongCustomerName(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_DRIdentityID(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferBySecField_set_SecFutureSerial(PyCThostFtdcRspTransferBySecField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspTransferBySecField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspTransferBySecField_get_TradeCode, (setter)PyCThostFtdcRspTransferBySecField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspTransferBySecField_get_BankID, (setter)PyCThostFtdcRspTransferBySecField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspTransferBySecField_get_BankBranchID, (setter)PyCThostFtdcRspTransferBySecField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerID, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerBranchID, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspTransferBySecField_get_TradeDate, (setter)PyCThostFtdcRspTransferBySecField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspTransferBySecField_get_TradeTime, (setter)PyCThostFtdcRspTransferBySecField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspTransferBySecField_get_BankSerial, (setter)PyCThostFtdcRspTransferBySecField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspTransferBySecField_get_TradingDay, (setter)PyCThostFtdcRspTransferBySecField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspTransferBySecField_get_PlateSerial, (setter)PyCThostFtdcRspTransferBySecField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspTransferBySecField_get_LastFragment, (setter)PyCThostFtdcRspTransferBySecField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspTransferBySecField_get_SessionID, (setter)PyCThostFtdcRspTransferBySecField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcRspTransferBySecField_get_CustomerName, (setter)PyCThostFtdcRspTransferBySecField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcRspTransferBySecField_get_IdCardType, (setter)PyCThostFtdcRspTransferBySecField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspTransferBySecField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspTransferBySecField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcRspTransferBySecField_get_CustType, (setter)PyCThostFtdcRspTransferBySecField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcRspTransferBySecField_get_BankAccount, (setter)PyCThostFtdcRspTransferBySecField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcRspTransferBySecField_get_BankPassWord, (setter)PyCThostFtdcRspTransferBySecField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcRspTransferBySecField_get_AccountID, (setter)PyCThostFtdcRspTransferBySecField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcRspTransferBySecField_get_Password, (setter)PyCThostFtdcRspTransferBySecField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspTransferBySecField_get_InstallID, (setter)PyCThostFtdcRspTransferBySecField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcRspTransferBySecField_get_FutureSerial, (setter)PyCThostFtdcRspTransferBySecField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspTransferBySecField_get_UserID, (setter)PyCThostFtdcRspTransferBySecField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspTransferBySecField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspTransferBySecField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspTransferBySecField_get_CurrencyID, (setter)PyCThostFtdcRspTransferBySecField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcRspTransferBySecField_get_TradeAmount, (setter)PyCThostFtdcRspTransferBySecField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"FutureFetchAmount", (getter)PyCThostFtdcRspTransferBySecField_get_FutureFetchAmount, (setter)PyCThostFtdcRspTransferBySecField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
	 {(char *)"FeePayFlag", (getter)PyCThostFtdcRspTransferBySecField_get_FeePayFlag, (setter)PyCThostFtdcRspTransferBySecField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcRspTransferBySecField_get_CustFee, (setter)PyCThostFtdcRspTransferBySecField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"BrokerFee", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerFee, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerFee, (char *)"BrokerFee", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcRspTransferBySecField_get_Message, (setter)PyCThostFtdcRspTransferBySecField_set_Message, (char *)"Message", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspTransferBySecField_get_Digest, (setter)PyCThostFtdcRspTransferBySecField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcRspTransferBySecField_get_BankAccType, (setter)PyCThostFtdcRspTransferBySecField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspTransferBySecField_get_DeviceID, (setter)PyCThostFtdcRspTransferBySecField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspTransferBySecField_get_BankSecuAccType, (setter)PyCThostFtdcRspTransferBySecField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspTransferBySecField_get_BrokerIDByBank, (setter)PyCThostFtdcRspTransferBySecField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspTransferBySecField_get_BankSecuAcc, (setter)PyCThostFtdcRspTransferBySecField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspTransferBySecField_get_BankPwdFlag, (setter)PyCThostFtdcRspTransferBySecField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspTransferBySecField_get_SecuPwdFlag, (setter)PyCThostFtdcRspTransferBySecField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspTransferBySecField_get_OperNo, (setter)PyCThostFtdcRspTransferBySecField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspTransferBySecField_get_RequestID, (setter)PyCThostFtdcRspTransferBySecField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspTransferBySecField_get_TID, (setter)PyCThostFtdcRspTransferBySecField_set_TID, (char *)"TID", NULL},
	 {(char *)"TransferStatus", (getter)PyCThostFtdcRspTransferBySecField_get_TransferStatus, (setter)PyCThostFtdcRspTransferBySecField_set_TransferStatus, (char *)"TransferStatus", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcRspTransferBySecField_get_ErrorID, (setter)PyCThostFtdcRspTransferBySecField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcRspTransferBySecField_get_ErrorMsg, (setter)PyCThostFtdcRspTransferBySecField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcRspTransferBySecField_get_LongCustomerName, (setter)PyCThostFtdcRspTransferBySecField_set_LongCustomerName, (char *)"LongCustomerName", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcRspTransferBySecField_get_DRIdentityID, (setter)PyCThostFtdcRspTransferBySecField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"SecFutureSerial", (getter)PyCThostFtdcRspTransferBySecField_get_SecFutureSerial, (setter)PyCThostFtdcRspTransferBySecField_set_SecFutureSerial, (char *)"SecFutureSerial", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspTransferBySecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspTransferBySecField",	/* tp_name */
	sizeof(PyCThostFtdcRspTransferBySecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspTransferBySecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspTransferBySecField_repr,   /* tp_repr */
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
	"CThostFtdcRspTransferBySecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspTransferBySecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspTransferBySecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspTransferBySecField_new,       /* tp_new */
};

int PyCThostFtdcRspTransferBySecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspTransferBySecField  */
	if (PyType_Ready(&PyCThostFtdcRspTransferBySecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspTransferBySecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspTransferBySecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspTransferBySecField", (PyObject *)&PyCThostFtdcRspTransferBySecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspTransferBySecField to module");
        Py_DECREF(&PyCThostFtdcRspTransferBySecFieldType);
		return -1;
    }

    return 0;
}
