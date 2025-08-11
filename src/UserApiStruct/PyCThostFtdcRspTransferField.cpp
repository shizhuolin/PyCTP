
#include "PyCThostFtdcRspTransferField.h"



static PyObject *PyCThostFtdcRspTransferField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspTransferField *self = (PyCThostFtdcRspTransferField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspTransferField_init(PyCThostFtdcRspTransferField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspTransferField_TradeCode = NULL;
	Py_ssize_t pRspTransferField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspTransferField_BankID = NULL;
	Py_ssize_t pRspTransferField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspTransferField_BankBranchID = NULL;
	Py_ssize_t pRspTransferField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspTransferField_BrokerID = NULL;
	Py_ssize_t pRspTransferField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspTransferField_BrokerBranchID = NULL;
	Py_ssize_t pRspTransferField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspTransferField_TradeDate = NULL;
	Py_ssize_t pRspTransferField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspTransferField_TradeTime = NULL;
	Py_ssize_t pRspTransferField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspTransferField_BankSerial = NULL;
	Py_ssize_t pRspTransferField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspTransferField_TradingDay = NULL;
	Py_ssize_t pRspTransferField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspTransferField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspTransferField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspTransferField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pRspTransferField_CustomerName = NULL;
	Py_ssize_t pRspTransferField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pRspTransferField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pRspTransferField_IdentifiedCardNo = NULL;
	Py_ssize_t pRspTransferField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pRspTransferField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspTransferField_BankAccount = NULL;
	Py_ssize_t pRspTransferField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspTransferField_BankPassWord = NULL;
	Py_ssize_t pRspTransferField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pRspTransferField_AccountID = NULL;
	Py_ssize_t pRspTransferField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspTransferField_Password = NULL;
	Py_ssize_t pRspTransferField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pRspTransferField_InstallID = 0;

	//TThostFtdcFutureSerialType int
	int pRspTransferField_FutureSerial = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspTransferField_UserID = NULL;
	Py_ssize_t pRspTransferField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pRspTransferField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspTransferField_CurrencyID = NULL;
	Py_ssize_t pRspTransferField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pRspTransferField_TradeAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pRspTransferField_FutureFetchAmount = 0.0;

	//TThostFtdcFeePayFlagType char
	char pRspTransferField_FeePayFlag = 0;

	//TThostFtdcCustFeeType double
	double pRspTransferField_CustFee = 0.0;

	//TThostFtdcFutureFeeType double
	double pRspTransferField_BrokerFee = 0.0;

	//TThostFtdcAddInfoType char[129]
	const char *pRspTransferField_Message = NULL;
	Py_ssize_t pRspTransferField_Message_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pRspTransferField_Digest = NULL;
	Py_ssize_t pRspTransferField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspTransferField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspTransferField_DeviceID = NULL;
	Py_ssize_t pRspTransferField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspTransferField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspTransferField_BrokerIDByBank = NULL;
	Py_ssize_t pRspTransferField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspTransferField_BankSecuAcc = NULL;
	Py_ssize_t pRspTransferField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pRspTransferField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pRspTransferField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspTransferField_OperNo = NULL;
	Py_ssize_t pRspTransferField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspTransferField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspTransferField_TID = 0;

	//TThostFtdcTransferStatusType char
	char pRspTransferField_TransferStatus = 0;

	//TThostFtdcErrorIDType int
	int pRspTransferField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pRspTransferField_ErrorMsg = NULL;
	Py_ssize_t pRspTransferField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pRspTransferField_LongCustomerName = NULL;
	Py_ssize_t pRspTransferField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iiciy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iicis#s#", (char **)kwlist
#endif

		, &pRspTransferField_TradeCode, &pRspTransferField_TradeCode_len
		, &pRspTransferField_BankID, &pRspTransferField_BankID_len
		, &pRspTransferField_BankBranchID, &pRspTransferField_BankBranchID_len
		, &pRspTransferField_BrokerID, &pRspTransferField_BrokerID_len
		, &pRspTransferField_BrokerBranchID, &pRspTransferField_BrokerBranchID_len
		, &pRspTransferField_TradeDate, &pRspTransferField_TradeDate_len
		, &pRspTransferField_TradeTime, &pRspTransferField_TradeTime_len
		, &pRspTransferField_BankSerial, &pRspTransferField_BankSerial_len
		, &pRspTransferField_TradingDay, &pRspTransferField_TradingDay_len
		, &pRspTransferField_PlateSerial
		, &pRspTransferField_LastFragment
		, &pRspTransferField_SessionID
		, &pRspTransferField_CustomerName, &pRspTransferField_CustomerName_len
		, &pRspTransferField_IdCardType
		, &pRspTransferField_IdentifiedCardNo, &pRspTransferField_IdentifiedCardNo_len
		, &pRspTransferField_CustType
		, &pRspTransferField_BankAccount, &pRspTransferField_BankAccount_len
		, &pRspTransferField_BankPassWord, &pRspTransferField_BankPassWord_len
		, &pRspTransferField_AccountID, &pRspTransferField_AccountID_len
		, &pRspTransferField_Password, &pRspTransferField_Password_len
		, &pRspTransferField_InstallID
		, &pRspTransferField_FutureSerial
		, &pRspTransferField_UserID, &pRspTransferField_UserID_len
		, &pRspTransferField_VerifyCertNoFlag
		, &pRspTransferField_CurrencyID, &pRspTransferField_CurrencyID_len
		, &pRspTransferField_TradeAmount
		, &pRspTransferField_FutureFetchAmount
		, &pRspTransferField_FeePayFlag
		, &pRspTransferField_CustFee
		, &pRspTransferField_BrokerFee
		, &pRspTransferField_Message, &pRspTransferField_Message_len
		, &pRspTransferField_Digest, &pRspTransferField_Digest_len
		, &pRspTransferField_BankAccType
		, &pRspTransferField_DeviceID, &pRspTransferField_DeviceID_len
		, &pRspTransferField_BankSecuAccType
		, &pRspTransferField_BrokerIDByBank, &pRspTransferField_BrokerIDByBank_len
		, &pRspTransferField_BankSecuAcc, &pRspTransferField_BankSecuAcc_len
		, &pRspTransferField_BankPwdFlag
		, &pRspTransferField_SecuPwdFlag
		, &pRspTransferField_OperNo, &pRspTransferField_OperNo_len
		, &pRspTransferField_RequestID
		, &pRspTransferField_TID
		, &pRspTransferField_TransferStatus
		, &pRspTransferField_ErrorID
		, &pRspTransferField_ErrorMsg, &pRspTransferField_ErrorMsg_len
		, &pRspTransferField_LongCustomerName, &pRspTransferField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspTransferField_TradeCode != NULL) {
		if(pRspTransferField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspTransferField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspTransferField_TradeCode, sizeof(self->data.TradeCode) );
		pRspTransferField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspTransferField_BankID != NULL) {
		if(pRspTransferField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspTransferField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspTransferField_BankID, sizeof(self->data.BankID) );
		pRspTransferField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspTransferField_BankBranchID != NULL) {
		if(pRspTransferField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspTransferField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspTransferField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspTransferField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspTransferField_BrokerID != NULL) {
		if(pRspTransferField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspTransferField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspTransferField_BrokerID, sizeof(self->data.BrokerID) );
		pRspTransferField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspTransferField_BrokerBranchID != NULL) {
		if(pRspTransferField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspTransferField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspTransferField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspTransferField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspTransferField_TradeDate != NULL) {
		if(pRspTransferField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspTransferField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspTransferField_TradeDate, sizeof(self->data.TradeDate) );
		pRspTransferField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspTransferField_TradeTime != NULL) {
		if(pRspTransferField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspTransferField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspTransferField_TradeTime, sizeof(self->data.TradeTime) );
		pRspTransferField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspTransferField_BankSerial != NULL) {
		if(pRspTransferField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspTransferField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspTransferField_BankSerial, sizeof(self->data.BankSerial) );
		pRspTransferField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspTransferField_TradingDay != NULL) {
		if(pRspTransferField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspTransferField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspTransferField_TradingDay, sizeof(self->data.TradingDay) );
		pRspTransferField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspTransferField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspTransferField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspTransferField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pRspTransferField_CustomerName != NULL) {
		if(pRspTransferField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pRspTransferField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pRspTransferField_CustomerName, sizeof(self->data.CustomerName) );
		pRspTransferField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pRspTransferField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pRspTransferField_IdentifiedCardNo != NULL) {
		if(pRspTransferField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pRspTransferField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pRspTransferField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pRspTransferField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pRspTransferField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pRspTransferField_BankAccount != NULL) {
		if(pRspTransferField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pRspTransferField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pRspTransferField_BankAccount, sizeof(self->data.BankAccount) );
		pRspTransferField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspTransferField_BankPassWord != NULL) {
		if(pRspTransferField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pRspTransferField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pRspTransferField_BankPassWord, sizeof(self->data.BankPassWord) );
		pRspTransferField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pRspTransferField_AccountID != NULL) {
		if(pRspTransferField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pRspTransferField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pRspTransferField_AccountID, sizeof(self->data.AccountID) );
		pRspTransferField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspTransferField_Password != NULL) {
		if(pRspTransferField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pRspTransferField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pRspTransferField_Password, sizeof(self->data.Password) );
		pRspTransferField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspTransferField_InstallID;

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pRspTransferField_FutureSerial;

	//TThostFtdcUserIDType char[16]
	if(pRspTransferField_UserID != NULL) {
		if(pRspTransferField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspTransferField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspTransferField_UserID, sizeof(self->data.UserID) );
		pRspTransferField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pRspTransferField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pRspTransferField_CurrencyID != NULL) {
		if(pRspTransferField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspTransferField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspTransferField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspTransferField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pRspTransferField_TradeAmount;
	//TThostFtdcTradeAmountType double
	self->data.FutureFetchAmount = pRspTransferField_FutureFetchAmount;
	//TThostFtdcFeePayFlagType char
	self->data.FeePayFlag = pRspTransferField_FeePayFlag;

	//TThostFtdcCustFeeType double
	self->data.CustFee = pRspTransferField_CustFee;
	//TThostFtdcFutureFeeType double
	self->data.BrokerFee = pRspTransferField_BrokerFee;
	//TThostFtdcAddInfoType char[129]
	if(pRspTransferField_Message != NULL) {
		if(pRspTransferField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pRspTransferField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pRspTransferField_Message, sizeof(self->data.Message) );
		pRspTransferField_Message = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pRspTransferField_Digest != NULL) {
		if(pRspTransferField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspTransferField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspTransferField_Digest, sizeof(self->data.Digest) );
		pRspTransferField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pRspTransferField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pRspTransferField_DeviceID != NULL) {
		if(pRspTransferField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspTransferField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspTransferField_DeviceID, sizeof(self->data.DeviceID) );
		pRspTransferField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pRspTransferField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspTransferField_BrokerIDByBank != NULL) {
		if(pRspTransferField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspTransferField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspTransferField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspTransferField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pRspTransferField_BankSecuAcc != NULL) {
		if(pRspTransferField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pRspTransferField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pRspTransferField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pRspTransferField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pRspTransferField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pRspTransferField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pRspTransferField_OperNo != NULL) {
		if(pRspTransferField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspTransferField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspTransferField_OperNo, sizeof(self->data.OperNo) );
		pRspTransferField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspTransferField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspTransferField_TID;

	//TThostFtdcTransferStatusType char
	self->data.TransferStatus = pRspTransferField_TransferStatus;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pRspTransferField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pRspTransferField_ErrorMsg != NULL) {
		if(pRspTransferField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pRspTransferField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pRspTransferField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pRspTransferField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pRspTransferField_LongCustomerName != NULL) {
		if(pRspTransferField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pRspTransferField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pRspTransferField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pRspTransferField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspTransferField_dealloc(PyCThostFtdcRspTransferField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspTransferField_repr(PyCThostFtdcRspTransferField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:i,s:s,s:s}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspTransferField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspTransferField_get_TradeCode(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankBranchID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspTransferField_get_BrokerID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspTransferField_get_BrokerBranchID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspTransferField_get_TradeDate(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspTransferField_get_TradeTime(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankSerial(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspTransferField_get_TradingDay(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspTransferField_get_PlateSerial(PyCThostFtdcRspTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspTransferField_get_LastFragment(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_SessionID(PyCThostFtdcRspTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferField_get_CustomerName(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcRspTransferField_get_IdCardType(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_IdentifiedCardNo(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcRspTransferField_get_CustType(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankAccount(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankPassWord(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcRspTransferField_get_AccountID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcRspTransferField_get_Password(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcRspTransferField_get_InstallID(PyCThostFtdcRspTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferField_get_FutureSerial(PyCThostFtdcRspTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcRspTransferField_get_UserID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspTransferField_get_VerifyCertNoFlag(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_CurrencyID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspTransferField_get_TradeAmount(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcRspTransferField_get_FutureFetchAmount(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

static PyObject *PyCThostFtdcRspTransferField_get_FeePayFlag(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_CustFee(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcRspTransferField_get_BrokerFee(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BrokerFee);
}

static PyObject *PyCThostFtdcRspTransferField_get_Message(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcRspTransferField_get_Digest(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankAccType(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_DeviceID(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankSecuAccType(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_BrokerIDByBank(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankSecuAcc(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcRspTransferField_get_BankPwdFlag(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_SecuPwdFlag(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_OperNo(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspTransferField_get_RequestID(PyCThostFtdcRspTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferField_get_TID(PyCThostFtdcRspTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferField_get_TransferStatus(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

static PyObject *PyCThostFtdcRspTransferField_get_ErrorID(PyCThostFtdcRspTransferField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcRspTransferField_get_ErrorMsg(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcRspTransferField_get_LongCustomerName(PyCThostFtdcRspTransferField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcRspTransferField_set_TradeCode(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankBranchID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BrokerID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BrokerBranchID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_TradeDate(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_TradeTime(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankSerial(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_TradingDay(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_PlateSerial(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_LastFragment(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_SessionID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_CustomerName(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_IdCardType(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_IdentifiedCardNo(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_CustType(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankAccount(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankPassWord(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_AccountID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_Password(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_InstallID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_FutureSerial(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_UserID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_VerifyCertNoFlag(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_CurrencyID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_TradeAmount(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_FutureFetchAmount(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_FeePayFlag(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_CustFee(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BrokerFee(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_Message(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_Digest(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankAccType(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_DeviceID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankSecuAccType(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BrokerIDByBank(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankSecuAcc(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_BankPwdFlag(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_SecuPwdFlag(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_OperNo(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_RequestID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_TID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_TransferStatus(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_ErrorID(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_ErrorMsg(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspTransferField_set_LongCustomerName(PyCThostFtdcRspTransferField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspTransferField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspTransferField_get_TradeCode, (setter)PyCThostFtdcRspTransferField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspTransferField_get_BankID, (setter)PyCThostFtdcRspTransferField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspTransferField_get_BankBranchID, (setter)PyCThostFtdcRspTransferField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspTransferField_get_BrokerID, (setter)PyCThostFtdcRspTransferField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspTransferField_get_BrokerBranchID, (setter)PyCThostFtdcRspTransferField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspTransferField_get_TradeDate, (setter)PyCThostFtdcRspTransferField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspTransferField_get_TradeTime, (setter)PyCThostFtdcRspTransferField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspTransferField_get_BankSerial, (setter)PyCThostFtdcRspTransferField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspTransferField_get_TradingDay, (setter)PyCThostFtdcRspTransferField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspTransferField_get_PlateSerial, (setter)PyCThostFtdcRspTransferField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspTransferField_get_LastFragment, (setter)PyCThostFtdcRspTransferField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspTransferField_get_SessionID, (setter)PyCThostFtdcRspTransferField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcRspTransferField_get_CustomerName, (setter)PyCThostFtdcRspTransferField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcRspTransferField_get_IdCardType, (setter)PyCThostFtdcRspTransferField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspTransferField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspTransferField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcRspTransferField_get_CustType, (setter)PyCThostFtdcRspTransferField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcRspTransferField_get_BankAccount, (setter)PyCThostFtdcRspTransferField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcRspTransferField_get_BankPassWord, (setter)PyCThostFtdcRspTransferField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcRspTransferField_get_AccountID, (setter)PyCThostFtdcRspTransferField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcRspTransferField_get_Password, (setter)PyCThostFtdcRspTransferField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspTransferField_get_InstallID, (setter)PyCThostFtdcRspTransferField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcRspTransferField_get_FutureSerial, (setter)PyCThostFtdcRspTransferField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspTransferField_get_UserID, (setter)PyCThostFtdcRspTransferField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspTransferField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspTransferField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspTransferField_get_CurrencyID, (setter)PyCThostFtdcRspTransferField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcRspTransferField_get_TradeAmount, (setter)PyCThostFtdcRspTransferField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"FutureFetchAmount", (getter)PyCThostFtdcRspTransferField_get_FutureFetchAmount, (setter)PyCThostFtdcRspTransferField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
	 {(char *)"FeePayFlag", (getter)PyCThostFtdcRspTransferField_get_FeePayFlag, (setter)PyCThostFtdcRspTransferField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcRspTransferField_get_CustFee, (setter)PyCThostFtdcRspTransferField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"BrokerFee", (getter)PyCThostFtdcRspTransferField_get_BrokerFee, (setter)PyCThostFtdcRspTransferField_set_BrokerFee, (char *)"BrokerFee", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcRspTransferField_get_Message, (setter)PyCThostFtdcRspTransferField_set_Message, (char *)"Message", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspTransferField_get_Digest, (setter)PyCThostFtdcRspTransferField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcRspTransferField_get_BankAccType, (setter)PyCThostFtdcRspTransferField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspTransferField_get_DeviceID, (setter)PyCThostFtdcRspTransferField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspTransferField_get_BankSecuAccType, (setter)PyCThostFtdcRspTransferField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspTransferField_get_BrokerIDByBank, (setter)PyCThostFtdcRspTransferField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspTransferField_get_BankSecuAcc, (setter)PyCThostFtdcRspTransferField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspTransferField_get_BankPwdFlag, (setter)PyCThostFtdcRspTransferField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspTransferField_get_SecuPwdFlag, (setter)PyCThostFtdcRspTransferField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspTransferField_get_OperNo, (setter)PyCThostFtdcRspTransferField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspTransferField_get_RequestID, (setter)PyCThostFtdcRspTransferField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspTransferField_get_TID, (setter)PyCThostFtdcRspTransferField_set_TID, (char *)"TID", NULL},
	 {(char *)"TransferStatus", (getter)PyCThostFtdcRspTransferField_get_TransferStatus, (setter)PyCThostFtdcRspTransferField_set_TransferStatus, (char *)"TransferStatus", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcRspTransferField_get_ErrorID, (setter)PyCThostFtdcRspTransferField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcRspTransferField_get_ErrorMsg, (setter)PyCThostFtdcRspTransferField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcRspTransferField_get_LongCustomerName, (setter)PyCThostFtdcRspTransferField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspTransferFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspTransferField",	/* tp_name */
	sizeof(PyCThostFtdcRspTransferField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspTransferField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspTransferField_repr,   /* tp_repr */
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
	"CThostFtdcRspTransferField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspTransferField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspTransferField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspTransferField_new,       /* tp_new */
};

int PyCThostFtdcRspTransferFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspTransferField  */
	if (PyType_Ready(&PyCThostFtdcRspTransferFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspTransferField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspTransferFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspTransferField", (PyObject *)&PyCThostFtdcRspTransferFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspTransferField to module");
        Py_DECREF(&PyCThostFtdcRspTransferFieldType);
		return -1;
    }

    return 0;
}
