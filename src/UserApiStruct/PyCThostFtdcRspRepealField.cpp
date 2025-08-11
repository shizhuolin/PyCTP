
#include "PyCThostFtdcRspRepealField.h"



static PyObject *PyCThostFtdcRspRepealField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspRepealField *self = (PyCThostFtdcRspRepealField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspRepealField_init(PyCThostFtdcRspRepealField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RepealTimeInterval", "RepealedTimes", "BankRepealFlag", "BrokerRepealFlag", "PlateRepealSerial", "BankRepealSerial", "FutureRepealSerial", "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "ErrorID", "ErrorMsg", "LongCustomerName",  NULL};

	//TThostFtdcRepealTimeIntervalType int
	int pRspRepealField_RepealTimeInterval = 0;

	//TThostFtdcRepealedTimesType int
	int pRspRepealField_RepealedTimes = 0;

	//TThostFtdcBankRepealFlagType char
	char pRspRepealField_BankRepealFlag = 0;

	//TThostFtdcBrokerRepealFlagType char
	char pRspRepealField_BrokerRepealFlag = 0;

	//TThostFtdcPlateSerialType int
	int pRspRepealField_PlateRepealSerial = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspRepealField_BankRepealSerial = NULL;
	Py_ssize_t pRspRepealField_BankRepealSerial_len = 0;

	//TThostFtdcFutureSerialType int
	int pRspRepealField_FutureRepealSerial = 0;

	//TThostFtdcTradeCodeType char[7]
	const char *pRspRepealField_TradeCode = NULL;
	Py_ssize_t pRspRepealField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspRepealField_BankID = NULL;
	Py_ssize_t pRspRepealField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspRepealField_BankBranchID = NULL;
	Py_ssize_t pRspRepealField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspRepealField_BrokerID = NULL;
	Py_ssize_t pRspRepealField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspRepealField_BrokerBranchID = NULL;
	Py_ssize_t pRspRepealField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspRepealField_TradeDate = NULL;
	Py_ssize_t pRspRepealField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspRepealField_TradeTime = NULL;
	Py_ssize_t pRspRepealField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspRepealField_BankSerial = NULL;
	Py_ssize_t pRspRepealField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspRepealField_TradingDay = NULL;
	Py_ssize_t pRspRepealField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspRepealField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspRepealField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspRepealField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pRspRepealField_CustomerName = NULL;
	Py_ssize_t pRspRepealField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pRspRepealField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pRspRepealField_IdentifiedCardNo = NULL;
	Py_ssize_t pRspRepealField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pRspRepealField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspRepealField_BankAccount = NULL;
	Py_ssize_t pRspRepealField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspRepealField_BankPassWord = NULL;
	Py_ssize_t pRspRepealField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pRspRepealField_AccountID = NULL;
	Py_ssize_t pRspRepealField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspRepealField_Password = NULL;
	Py_ssize_t pRspRepealField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pRspRepealField_InstallID = 0;

	//TThostFtdcFutureSerialType int
	int pRspRepealField_FutureSerial = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspRepealField_UserID = NULL;
	Py_ssize_t pRspRepealField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pRspRepealField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspRepealField_CurrencyID = NULL;
	Py_ssize_t pRspRepealField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pRspRepealField_TradeAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pRspRepealField_FutureFetchAmount = 0.0;

	//TThostFtdcFeePayFlagType char
	char pRspRepealField_FeePayFlag = 0;

	//TThostFtdcCustFeeType double
	double pRspRepealField_CustFee = 0.0;

	//TThostFtdcFutureFeeType double
	double pRspRepealField_BrokerFee = 0.0;

	//TThostFtdcAddInfoType char[129]
	const char *pRspRepealField_Message = NULL;
	Py_ssize_t pRspRepealField_Message_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pRspRepealField_Digest = NULL;
	Py_ssize_t pRspRepealField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspRepealField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspRepealField_DeviceID = NULL;
	Py_ssize_t pRspRepealField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pRspRepealField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspRepealField_BrokerIDByBank = NULL;
	Py_ssize_t pRspRepealField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspRepealField_BankSecuAcc = NULL;
	Py_ssize_t pRspRepealField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pRspRepealField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pRspRepealField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspRepealField_OperNo = NULL;
	Py_ssize_t pRspRepealField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspRepealField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspRepealField_TID = 0;

	//TThostFtdcTransferStatusType char
	char pRspRepealField_TransferStatus = 0;

	//TThostFtdcErrorIDType int
	int pRspRepealField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pRspRepealField_ErrorMsg = NULL;
	Py_ssize_t pRspRepealField_ErrorMsg_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pRspRepealField_LongCustomerName = NULL;
	Py_ssize_t pRspRepealField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iicciy#iy#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iiciy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiccis#is#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iicis#s#", (char **)kwlist
#endif

		, &pRspRepealField_RepealTimeInterval
		, &pRspRepealField_RepealedTimes
		, &pRspRepealField_BankRepealFlag
		, &pRspRepealField_BrokerRepealFlag
		, &pRspRepealField_PlateRepealSerial
		, &pRspRepealField_BankRepealSerial, &pRspRepealField_BankRepealSerial_len
		, &pRspRepealField_FutureRepealSerial
		, &pRspRepealField_TradeCode, &pRspRepealField_TradeCode_len
		, &pRspRepealField_BankID, &pRspRepealField_BankID_len
		, &pRspRepealField_BankBranchID, &pRspRepealField_BankBranchID_len
		, &pRspRepealField_BrokerID, &pRspRepealField_BrokerID_len
		, &pRspRepealField_BrokerBranchID, &pRspRepealField_BrokerBranchID_len
		, &pRspRepealField_TradeDate, &pRspRepealField_TradeDate_len
		, &pRspRepealField_TradeTime, &pRspRepealField_TradeTime_len
		, &pRspRepealField_BankSerial, &pRspRepealField_BankSerial_len
		, &pRspRepealField_TradingDay, &pRspRepealField_TradingDay_len
		, &pRspRepealField_PlateSerial
		, &pRspRepealField_LastFragment
		, &pRspRepealField_SessionID
		, &pRspRepealField_CustomerName, &pRspRepealField_CustomerName_len
		, &pRspRepealField_IdCardType
		, &pRspRepealField_IdentifiedCardNo, &pRspRepealField_IdentifiedCardNo_len
		, &pRspRepealField_CustType
		, &pRspRepealField_BankAccount, &pRspRepealField_BankAccount_len
		, &pRspRepealField_BankPassWord, &pRspRepealField_BankPassWord_len
		, &pRspRepealField_AccountID, &pRspRepealField_AccountID_len
		, &pRspRepealField_Password, &pRspRepealField_Password_len
		, &pRspRepealField_InstallID
		, &pRspRepealField_FutureSerial
		, &pRspRepealField_UserID, &pRspRepealField_UserID_len
		, &pRspRepealField_VerifyCertNoFlag
		, &pRspRepealField_CurrencyID, &pRspRepealField_CurrencyID_len
		, &pRspRepealField_TradeAmount
		, &pRspRepealField_FutureFetchAmount
		, &pRspRepealField_FeePayFlag
		, &pRspRepealField_CustFee
		, &pRspRepealField_BrokerFee
		, &pRspRepealField_Message, &pRspRepealField_Message_len
		, &pRspRepealField_Digest, &pRspRepealField_Digest_len
		, &pRspRepealField_BankAccType
		, &pRspRepealField_DeviceID, &pRspRepealField_DeviceID_len
		, &pRspRepealField_BankSecuAccType
		, &pRspRepealField_BrokerIDByBank, &pRspRepealField_BrokerIDByBank_len
		, &pRspRepealField_BankSecuAcc, &pRspRepealField_BankSecuAcc_len
		, &pRspRepealField_BankPwdFlag
		, &pRspRepealField_SecuPwdFlag
		, &pRspRepealField_OperNo, &pRspRepealField_OperNo_len
		, &pRspRepealField_RequestID
		, &pRspRepealField_TID
		, &pRspRepealField_TransferStatus
		, &pRspRepealField_ErrorID
		, &pRspRepealField_ErrorMsg, &pRspRepealField_ErrorMsg_len
		, &pRspRepealField_LongCustomerName, &pRspRepealField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcRepealTimeIntervalType int
	self->data.RepealTimeInterval = pRspRepealField_RepealTimeInterval;

	//TThostFtdcRepealedTimesType int
	self->data.RepealedTimes = pRspRepealField_RepealedTimes;

	//TThostFtdcBankRepealFlagType char
	self->data.BankRepealFlag = pRspRepealField_BankRepealFlag;

	//TThostFtdcBrokerRepealFlagType char
	self->data.BrokerRepealFlag = pRspRepealField_BrokerRepealFlag;

	//TThostFtdcPlateSerialType int
	self->data.PlateRepealSerial = pRspRepealField_PlateRepealSerial;

	//TThostFtdcBankSerialType char[13]
	if(pRspRepealField_BankRepealSerial != NULL) {
		if(pRspRepealField_BankRepealSerial_len > (Py_ssize_t)sizeof(self->data.BankRepealSerial)) {
			PyErr_Format(PyExc_ValueError, "BankRepealSerial too long: length=%zd (max allowed is %zd)", pRspRepealField_BankRepealSerial_len, (Py_ssize_t)sizeof(self->data.BankRepealSerial));
			return -1;
		}
		strncpy(self->data.BankRepealSerial, pRspRepealField_BankRepealSerial, sizeof(self->data.BankRepealSerial) );
		pRspRepealField_BankRepealSerial = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureRepealSerial = pRspRepealField_FutureRepealSerial;

	//TThostFtdcTradeCodeType char[7]
	if(pRspRepealField_TradeCode != NULL) {
		if(pRspRepealField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspRepealField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspRepealField_TradeCode, sizeof(self->data.TradeCode) );
		pRspRepealField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspRepealField_BankID != NULL) {
		if(pRspRepealField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspRepealField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspRepealField_BankID, sizeof(self->data.BankID) );
		pRspRepealField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspRepealField_BankBranchID != NULL) {
		if(pRspRepealField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspRepealField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspRepealField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspRepealField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspRepealField_BrokerID != NULL) {
		if(pRspRepealField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspRepealField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspRepealField_BrokerID, sizeof(self->data.BrokerID) );
		pRspRepealField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspRepealField_BrokerBranchID != NULL) {
		if(pRspRepealField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspRepealField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspRepealField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspRepealField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspRepealField_TradeDate != NULL) {
		if(pRspRepealField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspRepealField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspRepealField_TradeDate, sizeof(self->data.TradeDate) );
		pRspRepealField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspRepealField_TradeTime != NULL) {
		if(pRspRepealField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspRepealField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspRepealField_TradeTime, sizeof(self->data.TradeTime) );
		pRspRepealField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspRepealField_BankSerial != NULL) {
		if(pRspRepealField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspRepealField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspRepealField_BankSerial, sizeof(self->data.BankSerial) );
		pRspRepealField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspRepealField_TradingDay != NULL) {
		if(pRspRepealField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspRepealField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspRepealField_TradingDay, sizeof(self->data.TradingDay) );
		pRspRepealField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspRepealField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspRepealField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspRepealField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pRspRepealField_CustomerName != NULL) {
		if(pRspRepealField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pRspRepealField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pRspRepealField_CustomerName, sizeof(self->data.CustomerName) );
		pRspRepealField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pRspRepealField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pRspRepealField_IdentifiedCardNo != NULL) {
		if(pRspRepealField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pRspRepealField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pRspRepealField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pRspRepealField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pRspRepealField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pRspRepealField_BankAccount != NULL) {
		if(pRspRepealField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pRspRepealField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pRspRepealField_BankAccount, sizeof(self->data.BankAccount) );
		pRspRepealField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspRepealField_BankPassWord != NULL) {
		if(pRspRepealField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pRspRepealField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pRspRepealField_BankPassWord, sizeof(self->data.BankPassWord) );
		pRspRepealField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pRspRepealField_AccountID != NULL) {
		if(pRspRepealField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pRspRepealField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pRspRepealField_AccountID, sizeof(self->data.AccountID) );
		pRspRepealField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspRepealField_Password != NULL) {
		if(pRspRepealField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pRspRepealField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pRspRepealField_Password, sizeof(self->data.Password) );
		pRspRepealField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspRepealField_InstallID;

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pRspRepealField_FutureSerial;

	//TThostFtdcUserIDType char[16]
	if(pRspRepealField_UserID != NULL) {
		if(pRspRepealField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspRepealField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspRepealField_UserID, sizeof(self->data.UserID) );
		pRspRepealField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pRspRepealField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pRspRepealField_CurrencyID != NULL) {
		if(pRspRepealField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspRepealField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspRepealField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspRepealField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pRspRepealField_TradeAmount;
	//TThostFtdcTradeAmountType double
	self->data.FutureFetchAmount = pRspRepealField_FutureFetchAmount;
	//TThostFtdcFeePayFlagType char
	self->data.FeePayFlag = pRspRepealField_FeePayFlag;

	//TThostFtdcCustFeeType double
	self->data.CustFee = pRspRepealField_CustFee;
	//TThostFtdcFutureFeeType double
	self->data.BrokerFee = pRspRepealField_BrokerFee;
	//TThostFtdcAddInfoType char[129]
	if(pRspRepealField_Message != NULL) {
		if(pRspRepealField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pRspRepealField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pRspRepealField_Message, sizeof(self->data.Message) );
		pRspRepealField_Message = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pRspRepealField_Digest != NULL) {
		if(pRspRepealField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspRepealField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspRepealField_Digest, sizeof(self->data.Digest) );
		pRspRepealField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pRspRepealField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pRspRepealField_DeviceID != NULL) {
		if(pRspRepealField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspRepealField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspRepealField_DeviceID, sizeof(self->data.DeviceID) );
		pRspRepealField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pRspRepealField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspRepealField_BrokerIDByBank != NULL) {
		if(pRspRepealField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspRepealField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspRepealField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspRepealField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pRspRepealField_BankSecuAcc != NULL) {
		if(pRspRepealField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pRspRepealField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pRspRepealField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pRspRepealField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pRspRepealField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pRspRepealField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pRspRepealField_OperNo != NULL) {
		if(pRspRepealField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspRepealField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspRepealField_OperNo, sizeof(self->data.OperNo) );
		pRspRepealField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspRepealField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspRepealField_TID;

	//TThostFtdcTransferStatusType char
	self->data.TransferStatus = pRspRepealField_TransferStatus;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pRspRepealField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pRspRepealField_ErrorMsg != NULL) {
		if(pRspRepealField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pRspRepealField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pRspRepealField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pRspRepealField_ErrorMsg = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pRspRepealField_LongCustomerName != NULL) {
		if(pRspRepealField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pRspRepealField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pRspRepealField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pRspRepealField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspRepealField_dealloc(PyCThostFtdcRspRepealField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspRepealField_repr(PyCThostFtdcRspRepealField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:i,s:s,s:s}"
#endif

		, "RepealTimeInterval", self->data.RepealTimeInterval
		, "RepealedTimes", self->data.RepealedTimes
		, "BankRepealFlag", self->data.BankRepealFlag
		, "BrokerRepealFlag", self->data.BrokerRepealFlag
		, "PlateRepealSerial", self->data.PlateRepealSerial
		, "BankRepealSerial", self->data.BankRepealSerial 
		, "FutureRepealSerial", self->data.FutureRepealSerial
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspRepealField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspRepealField_get_RepealTimeInterval(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RepealTimeInterval);
#else 
	return PyInt_FromLong(self->data.RepealTimeInterval);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_RepealedTimes(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RepealedTimes);
#else 
	return PyInt_FromLong(self->data.RepealedTimes);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_BankRepealFlag(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankRepealFlag), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_BrokerRepealFlag(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BrokerRepealFlag), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_PlateRepealSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateRepealSerial);
#else 
	return PyInt_FromLong(self->data.PlateRepealSerial);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_BankRepealSerial(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankRepealSerial);
}

static PyObject *PyCThostFtdcRspRepealField_get_FutureRepealSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureRepealSerial);
#else 
	return PyInt_FromLong(self->data.FutureRepealSerial);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_TradeCode(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankBranchID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspRepealField_get_BrokerID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspRepealField_get_BrokerBranchID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspRepealField_get_TradeDate(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspRepealField_get_TradeTime(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankSerial(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspRepealField_get_TradingDay(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspRepealField_get_PlateSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_LastFragment(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_SessionID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_CustomerName(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcRspRepealField_get_IdCardType(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_IdentifiedCardNo(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcRspRepealField_get_CustType(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankAccount(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankPassWord(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcRspRepealField_get_AccountID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcRspRepealField_get_Password(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcRspRepealField_get_InstallID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_FutureSerial(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_UserID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspRepealField_get_VerifyCertNoFlag(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_CurrencyID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspRepealField_get_TradeAmount(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcRspRepealField_get_FutureFetchAmount(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

static PyObject *PyCThostFtdcRspRepealField_get_FeePayFlag(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_CustFee(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcRspRepealField_get_BrokerFee(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BrokerFee);
}

static PyObject *PyCThostFtdcRspRepealField_get_Message(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcRspRepealField_get_Digest(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankAccType(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_DeviceID(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankSecuAccType(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_BrokerIDByBank(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankSecuAcc(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcRspRepealField_get_BankPwdFlag(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_SecuPwdFlag(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_OperNo(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspRepealField_get_RequestID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_TID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_TransferStatus(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

static PyObject *PyCThostFtdcRspRepealField_get_ErrorID(PyCThostFtdcRspRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcRspRepealField_get_ErrorMsg(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcRspRepealField_get_LongCustomerName(PyCThostFtdcRspRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcRspRepealField_set_RepealTimeInterval(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RepealTimeInterval Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "RepealTimeInterval Expected int"); 
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
    self->data.RepealTimeInterval = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspRepealField_set_RepealedTimes(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "RepealedTimes Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "RepealedTimes Expected int"); 
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
    self->data.RepealedTimes = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspRepealField_set_BankRepealFlag(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankRepealFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankRepealFlag)) {
		PyErr_SetString(PyExc_ValueError, "BankRepealFlag must be less than 1 bytes");
		return -1;
	}
	self->data.BankRepealFlag = *buf;
	return 0;
}

static int PyCThostFtdcRspRepealField_set_BrokerRepealFlag(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerRepealFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerRepealFlag)) {
		PyErr_SetString(PyExc_ValueError, "BrokerRepealFlag must be less than 1 bytes");
		return -1;
	}
	self->data.BrokerRepealFlag = *buf;
	return 0;
}

static int PyCThostFtdcRspRepealField_set_PlateRepealSerial(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PlateRepealSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "PlateRepealSerial Expected int"); 
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
    self->data.PlateRepealSerial = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspRepealField_set_BankRepealSerial(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankRepealSerial Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankRepealSerial)) {
		PyErr_SetString(PyExc_ValueError, "BankRepealSerial must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.BankRepealSerial, buf, sizeof(self->data.BankRepealSerial));
	return 0;
}

static int PyCThostFtdcRspRepealField_set_FutureRepealSerial(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureRepealSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FutureRepealSerial Expected int"); 
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
    self->data.FutureRepealSerial = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspRepealField_set_TradeCode(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankBranchID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BrokerID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BrokerBranchID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_TradeDate(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_TradeTime(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankSerial(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_TradingDay(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_PlateSerial(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_LastFragment(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_SessionID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_CustomerName(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_IdCardType(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_IdentifiedCardNo(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_CustType(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankAccount(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankPassWord(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_AccountID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_Password(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_InstallID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_FutureSerial(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_UserID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_VerifyCertNoFlag(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_CurrencyID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_TradeAmount(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_FutureFetchAmount(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_FeePayFlag(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_CustFee(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BrokerFee(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_Message(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_Digest(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankAccType(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_DeviceID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankSecuAccType(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BrokerIDByBank(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankSecuAcc(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_BankPwdFlag(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_SecuPwdFlag(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_OperNo(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_RequestID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_TID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_TransferStatus(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_ErrorID(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_ErrorMsg(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspRepealField_set_LongCustomerName(PyCThostFtdcRspRepealField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspRepealField_getset[] = {
	 {(char *)"RepealTimeInterval", (getter)PyCThostFtdcRspRepealField_get_RepealTimeInterval, (setter)PyCThostFtdcRspRepealField_set_RepealTimeInterval, (char *)"RepealTimeInterval", NULL},
	 {(char *)"RepealedTimes", (getter)PyCThostFtdcRspRepealField_get_RepealedTimes, (setter)PyCThostFtdcRspRepealField_set_RepealedTimes, (char *)"RepealedTimes", NULL},
	 {(char *)"BankRepealFlag", (getter)PyCThostFtdcRspRepealField_get_BankRepealFlag, (setter)PyCThostFtdcRspRepealField_set_BankRepealFlag, (char *)"BankRepealFlag", NULL},
	 {(char *)"BrokerRepealFlag", (getter)PyCThostFtdcRspRepealField_get_BrokerRepealFlag, (setter)PyCThostFtdcRspRepealField_set_BrokerRepealFlag, (char *)"BrokerRepealFlag", NULL},
	 {(char *)"PlateRepealSerial", (getter)PyCThostFtdcRspRepealField_get_PlateRepealSerial, (setter)PyCThostFtdcRspRepealField_set_PlateRepealSerial, (char *)"PlateRepealSerial", NULL},
	 {(char *)"BankRepealSerial", (getter)PyCThostFtdcRspRepealField_get_BankRepealSerial, (setter)PyCThostFtdcRspRepealField_set_BankRepealSerial, (char *)"BankRepealSerial", NULL},
	 {(char *)"FutureRepealSerial", (getter)PyCThostFtdcRspRepealField_get_FutureRepealSerial, (setter)PyCThostFtdcRspRepealField_set_FutureRepealSerial, (char *)"FutureRepealSerial", NULL},
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspRepealField_get_TradeCode, (setter)PyCThostFtdcRspRepealField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspRepealField_get_BankID, (setter)PyCThostFtdcRspRepealField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspRepealField_get_BankBranchID, (setter)PyCThostFtdcRspRepealField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspRepealField_get_BrokerID, (setter)PyCThostFtdcRspRepealField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspRepealField_get_BrokerBranchID, (setter)PyCThostFtdcRspRepealField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspRepealField_get_TradeDate, (setter)PyCThostFtdcRspRepealField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspRepealField_get_TradeTime, (setter)PyCThostFtdcRspRepealField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspRepealField_get_BankSerial, (setter)PyCThostFtdcRspRepealField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspRepealField_get_TradingDay, (setter)PyCThostFtdcRspRepealField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspRepealField_get_PlateSerial, (setter)PyCThostFtdcRspRepealField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspRepealField_get_LastFragment, (setter)PyCThostFtdcRspRepealField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspRepealField_get_SessionID, (setter)PyCThostFtdcRspRepealField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcRspRepealField_get_CustomerName, (setter)PyCThostFtdcRspRepealField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcRspRepealField_get_IdCardType, (setter)PyCThostFtdcRspRepealField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcRspRepealField_get_IdentifiedCardNo, (setter)PyCThostFtdcRspRepealField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcRspRepealField_get_CustType, (setter)PyCThostFtdcRspRepealField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcRspRepealField_get_BankAccount, (setter)PyCThostFtdcRspRepealField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcRspRepealField_get_BankPassWord, (setter)PyCThostFtdcRspRepealField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcRspRepealField_get_AccountID, (setter)PyCThostFtdcRspRepealField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcRspRepealField_get_Password, (setter)PyCThostFtdcRspRepealField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspRepealField_get_InstallID, (setter)PyCThostFtdcRspRepealField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcRspRepealField_get_FutureSerial, (setter)PyCThostFtdcRspRepealField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspRepealField_get_UserID, (setter)PyCThostFtdcRspRepealField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcRspRepealField_get_VerifyCertNoFlag, (setter)PyCThostFtdcRspRepealField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspRepealField_get_CurrencyID, (setter)PyCThostFtdcRspRepealField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcRspRepealField_get_TradeAmount, (setter)PyCThostFtdcRspRepealField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"FutureFetchAmount", (getter)PyCThostFtdcRspRepealField_get_FutureFetchAmount, (setter)PyCThostFtdcRspRepealField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
	 {(char *)"FeePayFlag", (getter)PyCThostFtdcRspRepealField_get_FeePayFlag, (setter)PyCThostFtdcRspRepealField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcRspRepealField_get_CustFee, (setter)PyCThostFtdcRspRepealField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"BrokerFee", (getter)PyCThostFtdcRspRepealField_get_BrokerFee, (setter)PyCThostFtdcRspRepealField_set_BrokerFee, (char *)"BrokerFee", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcRspRepealField_get_Message, (setter)PyCThostFtdcRspRepealField_set_Message, (char *)"Message", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspRepealField_get_Digest, (setter)PyCThostFtdcRspRepealField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcRspRepealField_get_BankAccType, (setter)PyCThostFtdcRspRepealField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspRepealField_get_DeviceID, (setter)PyCThostFtdcRspRepealField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcRspRepealField_get_BankSecuAccType, (setter)PyCThostFtdcRspRepealField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspRepealField_get_BrokerIDByBank, (setter)PyCThostFtdcRspRepealField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcRspRepealField_get_BankSecuAcc, (setter)PyCThostFtdcRspRepealField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcRspRepealField_get_BankPwdFlag, (setter)PyCThostFtdcRspRepealField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcRspRepealField_get_SecuPwdFlag, (setter)PyCThostFtdcRspRepealField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspRepealField_get_OperNo, (setter)PyCThostFtdcRspRepealField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspRepealField_get_RequestID, (setter)PyCThostFtdcRspRepealField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspRepealField_get_TID, (setter)PyCThostFtdcRspRepealField_set_TID, (char *)"TID", NULL},
	 {(char *)"TransferStatus", (getter)PyCThostFtdcRspRepealField_get_TransferStatus, (setter)PyCThostFtdcRspRepealField_set_TransferStatus, (char *)"TransferStatus", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcRspRepealField_get_ErrorID, (setter)PyCThostFtdcRspRepealField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcRspRepealField_get_ErrorMsg, (setter)PyCThostFtdcRspRepealField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcRspRepealField_get_LongCustomerName, (setter)PyCThostFtdcRspRepealField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspRepealFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspRepealField",	/* tp_name */
	sizeof(PyCThostFtdcRspRepealField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspRepealField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspRepealField_repr,   /* tp_repr */
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
	"CThostFtdcRspRepealField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspRepealField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspRepealField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspRepealField_new,       /* tp_new */
};

int PyCThostFtdcRspRepealFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspRepealField  */
	if (PyType_Ready(&PyCThostFtdcRspRepealFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspRepealField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspRepealFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspRepealField", (PyObject *)&PyCThostFtdcRspRepealFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspRepealField to module");
        Py_DECREF(&PyCThostFtdcRspRepealFieldType);
		return -1;
    }

    return 0;
}
