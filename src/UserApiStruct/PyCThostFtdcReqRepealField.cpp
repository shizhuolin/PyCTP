
#include "PyCThostFtdcReqRepealField.h"



static PyObject *PyCThostFtdcReqRepealField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqRepealField *self = (PyCThostFtdcReqRepealField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqRepealField_init(PyCThostFtdcReqRepealField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"RepealTimeInterval", "RepealedTimes", "BankRepealFlag", "BrokerRepealFlag", "PlateRepealSerial", "BankRepealSerial", "FutureRepealSerial", "TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "InstallID", "FutureSerial", "UserID", "VerifyCertNoFlag", "CurrencyID", "TradeAmount", "FutureFetchAmount", "FeePayFlag", "CustFee", "BrokerFee", "Message", "Digest", "BankAccType", "DeviceID", "BankSecuAccType", "BrokerIDByBank", "BankSecuAcc", "BankPwdFlag", "SecuPwdFlag", "OperNo", "RequestID", "TID", "TransferStatus", "LongCustomerName",  NULL};

	//TThostFtdcRepealTimeIntervalType int
	int pReqRepealField_RepealTimeInterval = 0;

	//TThostFtdcRepealedTimesType int
	int pReqRepealField_RepealedTimes = 0;

	//TThostFtdcBankRepealFlagType char
	char pReqRepealField_BankRepealFlag = 0;

	//TThostFtdcBrokerRepealFlagType char
	char pReqRepealField_BrokerRepealFlag = 0;

	//TThostFtdcPlateSerialType int
	int pReqRepealField_PlateRepealSerial = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqRepealField_BankRepealSerial = NULL;
	Py_ssize_t pReqRepealField_BankRepealSerial_len = 0;

	//TThostFtdcFutureSerialType int
	int pReqRepealField_FutureRepealSerial = 0;

	//TThostFtdcTradeCodeType char[7]
	const char *pReqRepealField_TradeCode = NULL;
	Py_ssize_t pReqRepealField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqRepealField_BankID = NULL;
	Py_ssize_t pReqRepealField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqRepealField_BankBranchID = NULL;
	Py_ssize_t pReqRepealField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqRepealField_BrokerID = NULL;
	Py_ssize_t pReqRepealField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqRepealField_BrokerBranchID = NULL;
	Py_ssize_t pReqRepealField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqRepealField_TradeDate = NULL;
	Py_ssize_t pReqRepealField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqRepealField_TradeTime = NULL;
	Py_ssize_t pReqRepealField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqRepealField_BankSerial = NULL;
	Py_ssize_t pReqRepealField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqRepealField_TradingDay = NULL;
	Py_ssize_t pReqRepealField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqRepealField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqRepealField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqRepealField_SessionID = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqRepealField_CustomerName = NULL;
	Py_ssize_t pReqRepealField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqRepealField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqRepealField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqRepealField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pReqRepealField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqRepealField_BankAccount = NULL;
	Py_ssize_t pReqRepealField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqRepealField_BankPassWord = NULL;
	Py_ssize_t pReqRepealField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqRepealField_AccountID = NULL;
	Py_ssize_t pReqRepealField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqRepealField_Password = NULL;
	Py_ssize_t pReqRepealField_Password_len = 0;

	//TThostFtdcInstallIDType int
	int pReqRepealField_InstallID = 0;

	//TThostFtdcFutureSerialType int
	int pReqRepealField_FutureSerial = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqRepealField_UserID = NULL;
	Py_ssize_t pReqRepealField_UserID_len = 0;

	//TThostFtdcYesNoIndicatorType char
	char pReqRepealField_VerifyCertNoFlag = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqRepealField_CurrencyID = NULL;
	Py_ssize_t pReqRepealField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pReqRepealField_TradeAmount = 0.0;

	//TThostFtdcTradeAmountType double
	double pReqRepealField_FutureFetchAmount = 0.0;

	//TThostFtdcFeePayFlagType char
	char pReqRepealField_FeePayFlag = 0;

	//TThostFtdcCustFeeType double
	double pReqRepealField_CustFee = 0.0;

	//TThostFtdcFutureFeeType double
	double pReqRepealField_BrokerFee = 0.0;

	//TThostFtdcAddInfoType char[129]
	const char *pReqRepealField_Message = NULL;
	Py_ssize_t pReqRepealField_Message_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqRepealField_Digest = NULL;
	Py_ssize_t pReqRepealField_Digest_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqRepealField_BankAccType = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqRepealField_DeviceID = NULL;
	Py_ssize_t pReqRepealField_DeviceID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pReqRepealField_BankSecuAccType = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqRepealField_BrokerIDByBank = NULL;
	Py_ssize_t pReqRepealField_BrokerIDByBank_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqRepealField_BankSecuAcc = NULL;
	Py_ssize_t pReqRepealField_BankSecuAcc_len = 0;

	//TThostFtdcPwdFlagType char
	char pReqRepealField_BankPwdFlag = 0;

	//TThostFtdcPwdFlagType char
	char pReqRepealField_SecuPwdFlag = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqRepealField_OperNo = NULL;
	Py_ssize_t pReqRepealField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pReqRepealField_RequestID = 0;

	//TThostFtdcTIDType int
	int pReqRepealField_TID = 0;

	//TThostFtdcTransferStatusType char
	char pReqRepealField_TransferStatus = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqRepealField_LongCustomerName = NULL;
	Py_ssize_t pReqRepealField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iicciy#iy#y#y#y#y#y#y#y#y#iciy#cy#cy#y#y#y#iiy#cy#ddcddy#y#cy#cy#y#ccy#iicy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiccis#is#s#s#s#s#s#s#s#s#icis#cs#cs#s#s#s#iis#cs#ddcdds#s#cs#cs#s#ccs#iics#", (char **)kwlist
#endif

		, &pReqRepealField_RepealTimeInterval
		, &pReqRepealField_RepealedTimes
		, &pReqRepealField_BankRepealFlag
		, &pReqRepealField_BrokerRepealFlag
		, &pReqRepealField_PlateRepealSerial
		, &pReqRepealField_BankRepealSerial, &pReqRepealField_BankRepealSerial_len
		, &pReqRepealField_FutureRepealSerial
		, &pReqRepealField_TradeCode, &pReqRepealField_TradeCode_len
		, &pReqRepealField_BankID, &pReqRepealField_BankID_len
		, &pReqRepealField_BankBranchID, &pReqRepealField_BankBranchID_len
		, &pReqRepealField_BrokerID, &pReqRepealField_BrokerID_len
		, &pReqRepealField_BrokerBranchID, &pReqRepealField_BrokerBranchID_len
		, &pReqRepealField_TradeDate, &pReqRepealField_TradeDate_len
		, &pReqRepealField_TradeTime, &pReqRepealField_TradeTime_len
		, &pReqRepealField_BankSerial, &pReqRepealField_BankSerial_len
		, &pReqRepealField_TradingDay, &pReqRepealField_TradingDay_len
		, &pReqRepealField_PlateSerial
		, &pReqRepealField_LastFragment
		, &pReqRepealField_SessionID
		, &pReqRepealField_CustomerName, &pReqRepealField_CustomerName_len
		, &pReqRepealField_IdCardType
		, &pReqRepealField_IdentifiedCardNo, &pReqRepealField_IdentifiedCardNo_len
		, &pReqRepealField_CustType
		, &pReqRepealField_BankAccount, &pReqRepealField_BankAccount_len
		, &pReqRepealField_BankPassWord, &pReqRepealField_BankPassWord_len
		, &pReqRepealField_AccountID, &pReqRepealField_AccountID_len
		, &pReqRepealField_Password, &pReqRepealField_Password_len
		, &pReqRepealField_InstallID
		, &pReqRepealField_FutureSerial
		, &pReqRepealField_UserID, &pReqRepealField_UserID_len
		, &pReqRepealField_VerifyCertNoFlag
		, &pReqRepealField_CurrencyID, &pReqRepealField_CurrencyID_len
		, &pReqRepealField_TradeAmount
		, &pReqRepealField_FutureFetchAmount
		, &pReqRepealField_FeePayFlag
		, &pReqRepealField_CustFee
		, &pReqRepealField_BrokerFee
		, &pReqRepealField_Message, &pReqRepealField_Message_len
		, &pReqRepealField_Digest, &pReqRepealField_Digest_len
		, &pReqRepealField_BankAccType
		, &pReqRepealField_DeviceID, &pReqRepealField_DeviceID_len
		, &pReqRepealField_BankSecuAccType
		, &pReqRepealField_BrokerIDByBank, &pReqRepealField_BrokerIDByBank_len
		, &pReqRepealField_BankSecuAcc, &pReqRepealField_BankSecuAcc_len
		, &pReqRepealField_BankPwdFlag
		, &pReqRepealField_SecuPwdFlag
		, &pReqRepealField_OperNo, &pReqRepealField_OperNo_len
		, &pReqRepealField_RequestID
		, &pReqRepealField_TID
		, &pReqRepealField_TransferStatus
		, &pReqRepealField_LongCustomerName, &pReqRepealField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcRepealTimeIntervalType int
	self->data.RepealTimeInterval = pReqRepealField_RepealTimeInterval;

	//TThostFtdcRepealedTimesType int
	self->data.RepealedTimes = pReqRepealField_RepealedTimes;

	//TThostFtdcBankRepealFlagType char
	self->data.BankRepealFlag = pReqRepealField_BankRepealFlag;

	//TThostFtdcBrokerRepealFlagType char
	self->data.BrokerRepealFlag = pReqRepealField_BrokerRepealFlag;

	//TThostFtdcPlateSerialType int
	self->data.PlateRepealSerial = pReqRepealField_PlateRepealSerial;

	//TThostFtdcBankSerialType char[13]
	if(pReqRepealField_BankRepealSerial != NULL) {
		if(pReqRepealField_BankRepealSerial_len > (Py_ssize_t)sizeof(self->data.BankRepealSerial)) {
			PyErr_Format(PyExc_ValueError, "BankRepealSerial too long: length=%zd (max allowed is %zd)", pReqRepealField_BankRepealSerial_len, (Py_ssize_t)sizeof(self->data.BankRepealSerial));
			return -1;
		}
		strncpy(self->data.BankRepealSerial, pReqRepealField_BankRepealSerial, sizeof(self->data.BankRepealSerial) );
		pReqRepealField_BankRepealSerial = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureRepealSerial = pReqRepealField_FutureRepealSerial;

	//TThostFtdcTradeCodeType char[7]
	if(pReqRepealField_TradeCode != NULL) {
		if(pReqRepealField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqRepealField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqRepealField_TradeCode, sizeof(self->data.TradeCode) );
		pReqRepealField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqRepealField_BankID != NULL) {
		if(pReqRepealField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqRepealField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqRepealField_BankID, sizeof(self->data.BankID) );
		pReqRepealField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqRepealField_BankBranchID != NULL) {
		if(pReqRepealField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqRepealField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqRepealField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqRepealField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqRepealField_BrokerID != NULL) {
		if(pReqRepealField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqRepealField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqRepealField_BrokerID, sizeof(self->data.BrokerID) );
		pReqRepealField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqRepealField_BrokerBranchID != NULL) {
		if(pReqRepealField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqRepealField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqRepealField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqRepealField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqRepealField_TradeDate != NULL) {
		if(pReqRepealField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqRepealField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqRepealField_TradeDate, sizeof(self->data.TradeDate) );
		pReqRepealField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqRepealField_TradeTime != NULL) {
		if(pReqRepealField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqRepealField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqRepealField_TradeTime, sizeof(self->data.TradeTime) );
		pReqRepealField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqRepealField_BankSerial != NULL) {
		if(pReqRepealField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqRepealField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqRepealField_BankSerial, sizeof(self->data.BankSerial) );
		pReqRepealField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqRepealField_TradingDay != NULL) {
		if(pReqRepealField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqRepealField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqRepealField_TradingDay, sizeof(self->data.TradingDay) );
		pReqRepealField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqRepealField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqRepealField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqRepealField_SessionID;

	//TThostFtdcIndividualNameType char[51]
	if(pReqRepealField_CustomerName != NULL) {
		if(pReqRepealField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqRepealField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqRepealField_CustomerName, sizeof(self->data.CustomerName) );
		pReqRepealField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqRepealField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqRepealField_IdentifiedCardNo != NULL) {
		if(pReqRepealField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqRepealField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqRepealField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqRepealField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqRepealField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pReqRepealField_BankAccount != NULL) {
		if(pReqRepealField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqRepealField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqRepealField_BankAccount, sizeof(self->data.BankAccount) );
		pReqRepealField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqRepealField_BankPassWord != NULL) {
		if(pReqRepealField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqRepealField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqRepealField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqRepealField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqRepealField_AccountID != NULL) {
		if(pReqRepealField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqRepealField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqRepealField_AccountID, sizeof(self->data.AccountID) );
		pReqRepealField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqRepealField_Password != NULL) {
		if(pReqRepealField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqRepealField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqRepealField_Password, sizeof(self->data.Password) );
		pReqRepealField_Password = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqRepealField_InstallID;

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pReqRepealField_FutureSerial;

	//TThostFtdcUserIDType char[16]
	if(pReqRepealField_UserID != NULL) {
		if(pReqRepealField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqRepealField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqRepealField_UserID, sizeof(self->data.UserID) );
		pReqRepealField_UserID = NULL;
	}

	//TThostFtdcYesNoIndicatorType char
	self->data.VerifyCertNoFlag = pReqRepealField_VerifyCertNoFlag;

	//TThostFtdcCurrencyIDType char[4]
	if(pReqRepealField_CurrencyID != NULL) {
		if(pReqRepealField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqRepealField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqRepealField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqRepealField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pReqRepealField_TradeAmount;
	//TThostFtdcTradeAmountType double
	self->data.FutureFetchAmount = pReqRepealField_FutureFetchAmount;
	//TThostFtdcFeePayFlagType char
	self->data.FeePayFlag = pReqRepealField_FeePayFlag;

	//TThostFtdcCustFeeType double
	self->data.CustFee = pReqRepealField_CustFee;
	//TThostFtdcFutureFeeType double
	self->data.BrokerFee = pReqRepealField_BrokerFee;
	//TThostFtdcAddInfoType char[129]
	if(pReqRepealField_Message != NULL) {
		if(pReqRepealField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pReqRepealField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pReqRepealField_Message, sizeof(self->data.Message) );
		pReqRepealField_Message = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReqRepealField_Digest != NULL) {
		if(pReqRepealField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqRepealField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqRepealField_Digest, sizeof(self->data.Digest) );
		pReqRepealField_Digest = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pReqRepealField_BankAccType;

	//TThostFtdcDeviceIDType char[3]
	if(pReqRepealField_DeviceID != NULL) {
		if(pReqRepealField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqRepealField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqRepealField_DeviceID, sizeof(self->data.DeviceID) );
		pReqRepealField_DeviceID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankSecuAccType = pReqRepealField_BankSecuAccType;

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqRepealField_BrokerIDByBank != NULL) {
		if(pReqRepealField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqRepealField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqRepealField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqRepealField_BrokerIDByBank = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pReqRepealField_BankSecuAcc != NULL) {
		if(pReqRepealField_BankSecuAcc_len > (Py_ssize_t)sizeof(self->data.BankSecuAcc)) {
			PyErr_Format(PyExc_ValueError, "BankSecuAcc too long: length=%zd (max allowed is %zd)", pReqRepealField_BankSecuAcc_len, (Py_ssize_t)sizeof(self->data.BankSecuAcc));
			return -1;
		}
		strncpy(self->data.BankSecuAcc, pReqRepealField_BankSecuAcc, sizeof(self->data.BankSecuAcc) );
		pReqRepealField_BankSecuAcc = NULL;
	}

	//TThostFtdcPwdFlagType char
	self->data.BankPwdFlag = pReqRepealField_BankPwdFlag;

	//TThostFtdcPwdFlagType char
	self->data.SecuPwdFlag = pReqRepealField_SecuPwdFlag;

	//TThostFtdcOperNoType char[17]
	if(pReqRepealField_OperNo != NULL) {
		if(pReqRepealField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqRepealField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqRepealField_OperNo, sizeof(self->data.OperNo) );
		pReqRepealField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pReqRepealField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pReqRepealField_TID;

	//TThostFtdcTransferStatusType char
	self->data.TransferStatus = pReqRepealField_TransferStatus;

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqRepealField_LongCustomerName != NULL) {
		if(pReqRepealField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqRepealField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqRepealField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqRepealField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqRepealField_dealloc(PyCThostFtdcReqRepealField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqRepealField_repr(PyCThostFtdcReqRepealField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:y,s:d,s:d,s:c,s:d,s:d,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:c,s:c,s:y,s:i,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:c,s:c,s:i,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:s,s:d,s:d,s:c,s:d,s:d,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:c,s:c,s:s,s:i,s:i,s:c,s:s}"
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
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqRepealField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqRepealField_get_RepealTimeInterval(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RepealTimeInterval);
#else 
	return PyInt_FromLong(self->data.RepealTimeInterval);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_RepealedTimes(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RepealedTimes);
#else 
	return PyInt_FromLong(self->data.RepealedTimes);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_BankRepealFlag(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankRepealFlag), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_BrokerRepealFlag(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BrokerRepealFlag), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_PlateRepealSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateRepealSerial);
#else 
	return PyInt_FromLong(self->data.PlateRepealSerial);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_BankRepealSerial(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankRepealSerial);
}

static PyObject *PyCThostFtdcReqRepealField_get_FutureRepealSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureRepealSerial);
#else 
	return PyInt_FromLong(self->data.FutureRepealSerial);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_TradeCode(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankBranchID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqRepealField_get_BrokerID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqRepealField_get_BrokerBranchID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqRepealField_get_TradeDate(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqRepealField_get_TradeTime(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankSerial(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqRepealField_get_TradingDay(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqRepealField_get_PlateSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_LastFragment(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_SessionID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_CustomerName(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqRepealField_get_IdCardType(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_IdentifiedCardNo(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqRepealField_get_CustType(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankAccount(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankPassWord(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqRepealField_get_AccountID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqRepealField_get_Password(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqRepealField_get_InstallID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_FutureSerial(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_UserID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqRepealField_get_VerifyCertNoFlag(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.VerifyCertNoFlag), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_CurrencyID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqRepealField_get_TradeAmount(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcReqRepealField_get_FutureFetchAmount(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.FutureFetchAmount);
}

static PyObject *PyCThostFtdcReqRepealField_get_FeePayFlag(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FeePayFlag), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_CustFee(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcReqRepealField_get_BrokerFee(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BrokerFee);
}

static PyObject *PyCThostFtdcReqRepealField_get_Message(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcReqRepealField_get_Digest(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankAccType(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_DeviceID(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankSecuAccType(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankSecuAccType), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_BrokerIDByBank(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankSecuAcc(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSecuAcc);
}

static PyObject *PyCThostFtdcReqRepealField_get_BankPwdFlag(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_SecuPwdFlag(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.SecuPwdFlag), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_OperNo(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqRepealField_get_RequestID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_TID(PyCThostFtdcReqRepealField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcReqRepealField_get_TransferStatus(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.TransferStatus), 1);
}

static PyObject *PyCThostFtdcReqRepealField_get_LongCustomerName(PyCThostFtdcReqRepealField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcReqRepealField_set_RepealTimeInterval(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_RepealedTimes(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankRepealFlag(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BrokerRepealFlag(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_PlateRepealSerial(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankRepealSerial(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_FutureRepealSerial(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_TradeCode(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankBranchID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BrokerID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BrokerBranchID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_TradeDate(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_TradeTime(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankSerial(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_TradingDay(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_PlateSerial(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_LastFragment(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_SessionID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_CustomerName(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_IdCardType(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_IdentifiedCardNo(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_CustType(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankAccount(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankPassWord(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_AccountID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_Password(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_InstallID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_FutureSerial(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_UserID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_VerifyCertNoFlag(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_CurrencyID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_TradeAmount(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_FutureFetchAmount(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_FeePayFlag(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_CustFee(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BrokerFee(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_Message(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_Digest(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankAccType(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_DeviceID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankSecuAccType(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BrokerIDByBank(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankSecuAcc(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_BankPwdFlag(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_SecuPwdFlag(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_OperNo(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_RequestID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_TID(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_TransferStatus(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqRepealField_set_LongCustomerName(PyCThostFtdcReqRepealField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqRepealField_getset[] = {
	 {(char *)"RepealTimeInterval", (getter)PyCThostFtdcReqRepealField_get_RepealTimeInterval, (setter)PyCThostFtdcReqRepealField_set_RepealTimeInterval, (char *)"RepealTimeInterval", NULL},
	 {(char *)"RepealedTimes", (getter)PyCThostFtdcReqRepealField_get_RepealedTimes, (setter)PyCThostFtdcReqRepealField_set_RepealedTimes, (char *)"RepealedTimes", NULL},
	 {(char *)"BankRepealFlag", (getter)PyCThostFtdcReqRepealField_get_BankRepealFlag, (setter)PyCThostFtdcReqRepealField_set_BankRepealFlag, (char *)"BankRepealFlag", NULL},
	 {(char *)"BrokerRepealFlag", (getter)PyCThostFtdcReqRepealField_get_BrokerRepealFlag, (setter)PyCThostFtdcReqRepealField_set_BrokerRepealFlag, (char *)"BrokerRepealFlag", NULL},
	 {(char *)"PlateRepealSerial", (getter)PyCThostFtdcReqRepealField_get_PlateRepealSerial, (setter)PyCThostFtdcReqRepealField_set_PlateRepealSerial, (char *)"PlateRepealSerial", NULL},
	 {(char *)"BankRepealSerial", (getter)PyCThostFtdcReqRepealField_get_BankRepealSerial, (setter)PyCThostFtdcReqRepealField_set_BankRepealSerial, (char *)"BankRepealSerial", NULL},
	 {(char *)"FutureRepealSerial", (getter)PyCThostFtdcReqRepealField_get_FutureRepealSerial, (setter)PyCThostFtdcReqRepealField_set_FutureRepealSerial, (char *)"FutureRepealSerial", NULL},
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqRepealField_get_TradeCode, (setter)PyCThostFtdcReqRepealField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqRepealField_get_BankID, (setter)PyCThostFtdcReqRepealField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqRepealField_get_BankBranchID, (setter)PyCThostFtdcReqRepealField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqRepealField_get_BrokerID, (setter)PyCThostFtdcReqRepealField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqRepealField_get_BrokerBranchID, (setter)PyCThostFtdcReqRepealField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqRepealField_get_TradeDate, (setter)PyCThostFtdcReqRepealField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqRepealField_get_TradeTime, (setter)PyCThostFtdcReqRepealField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqRepealField_get_BankSerial, (setter)PyCThostFtdcReqRepealField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqRepealField_get_TradingDay, (setter)PyCThostFtdcReqRepealField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqRepealField_get_PlateSerial, (setter)PyCThostFtdcReqRepealField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqRepealField_get_LastFragment, (setter)PyCThostFtdcReqRepealField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqRepealField_get_SessionID, (setter)PyCThostFtdcReqRepealField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqRepealField_get_CustomerName, (setter)PyCThostFtdcReqRepealField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqRepealField_get_IdCardType, (setter)PyCThostFtdcReqRepealField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqRepealField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqRepealField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqRepealField_get_CustType, (setter)PyCThostFtdcReqRepealField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqRepealField_get_BankAccount, (setter)PyCThostFtdcReqRepealField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqRepealField_get_BankPassWord, (setter)PyCThostFtdcReqRepealField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqRepealField_get_AccountID, (setter)PyCThostFtdcReqRepealField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqRepealField_get_Password, (setter)PyCThostFtdcReqRepealField_set_Password, (char *)"Password", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqRepealField_get_InstallID, (setter)PyCThostFtdcReqRepealField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcReqRepealField_get_FutureSerial, (setter)PyCThostFtdcReqRepealField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqRepealField_get_UserID, (setter)PyCThostFtdcReqRepealField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"VerifyCertNoFlag", (getter)PyCThostFtdcReqRepealField_get_VerifyCertNoFlag, (setter)PyCThostFtdcReqRepealField_set_VerifyCertNoFlag, (char *)"VerifyCertNoFlag", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqRepealField_get_CurrencyID, (setter)PyCThostFtdcReqRepealField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcReqRepealField_get_TradeAmount, (setter)PyCThostFtdcReqRepealField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"FutureFetchAmount", (getter)PyCThostFtdcReqRepealField_get_FutureFetchAmount, (setter)PyCThostFtdcReqRepealField_set_FutureFetchAmount, (char *)"FutureFetchAmount", NULL},
	 {(char *)"FeePayFlag", (getter)PyCThostFtdcReqRepealField_get_FeePayFlag, (setter)PyCThostFtdcReqRepealField_set_FeePayFlag, (char *)"FeePayFlag", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcReqRepealField_get_CustFee, (setter)PyCThostFtdcReqRepealField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"BrokerFee", (getter)PyCThostFtdcReqRepealField_get_BrokerFee, (setter)PyCThostFtdcReqRepealField_set_BrokerFee, (char *)"BrokerFee", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcReqRepealField_get_Message, (setter)PyCThostFtdcReqRepealField_set_Message, (char *)"Message", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqRepealField_get_Digest, (setter)PyCThostFtdcReqRepealField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcReqRepealField_get_BankAccType, (setter)PyCThostFtdcReqRepealField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqRepealField_get_DeviceID, (setter)PyCThostFtdcReqRepealField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BankSecuAccType", (getter)PyCThostFtdcReqRepealField_get_BankSecuAccType, (setter)PyCThostFtdcReqRepealField_set_BankSecuAccType, (char *)"BankSecuAccType", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqRepealField_get_BrokerIDByBank, (setter)PyCThostFtdcReqRepealField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"BankSecuAcc", (getter)PyCThostFtdcReqRepealField_get_BankSecuAcc, (setter)PyCThostFtdcReqRepealField_set_BankSecuAcc, (char *)"BankSecuAcc", NULL},
	 {(char *)"BankPwdFlag", (getter)PyCThostFtdcReqRepealField_get_BankPwdFlag, (setter)PyCThostFtdcReqRepealField_set_BankPwdFlag, (char *)"BankPwdFlag", NULL},
	 {(char *)"SecuPwdFlag", (getter)PyCThostFtdcReqRepealField_get_SecuPwdFlag, (setter)PyCThostFtdcReqRepealField_set_SecuPwdFlag, (char *)"SecuPwdFlag", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqRepealField_get_OperNo, (setter)PyCThostFtdcReqRepealField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcReqRepealField_get_RequestID, (setter)PyCThostFtdcReqRepealField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqRepealField_get_TID, (setter)PyCThostFtdcReqRepealField_set_TID, (char *)"TID", NULL},
	 {(char *)"TransferStatus", (getter)PyCThostFtdcReqRepealField_get_TransferStatus, (setter)PyCThostFtdcReqRepealField_set_TransferStatus, (char *)"TransferStatus", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqRepealField_get_LongCustomerName, (setter)PyCThostFtdcReqRepealField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqRepealFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqRepealField",	/* tp_name */
	sizeof(PyCThostFtdcReqRepealField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqRepealField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqRepealField_repr,   /* tp_repr */
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
	"CThostFtdcReqRepealField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqRepealField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqRepealField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqRepealField_new,       /* tp_new */
};

int PyCThostFtdcReqRepealFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqRepealField  */
	if (PyType_Ready(&PyCThostFtdcReqRepealFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqRepealField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqRepealFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqRepealField", (PyObject *)&PyCThostFtdcReqRepealFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqRepealField to module");
        Py_DECREF(&PyCThostFtdcReqRepealFieldType);
		return -1;
    }

    return 0;
}
