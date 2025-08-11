
#include "PyCThostFtdcTransferSerialField.h"



static PyObject *PyCThostFtdcTransferSerialField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferSerialField *self = (PyCThostFtdcTransferSerialField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferSerialField_init(PyCThostFtdcTransferSerialField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"PlateSerial", "TradeDate", "TradingDay", "TradeTime", "TradeCode", "SessionID", "BankID", "BankBranchID", "BankAccType", "BankAccount", "BankSerial", "BrokerID", "BrokerBranchID", "FutureAccType", "AccountID", "InvestorID", "FutureSerial", "IdCardType", "IdentifiedCardNo", "CurrencyID", "TradeAmount", "CustFee", "BrokerFee", "AvailabilityFlag", "OperatorCode", "BankNewAccount", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcPlateSerialType int
	int pTransferSerialField_PlateSerial = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pTransferSerialField_TradeDate = NULL;
	Py_ssize_t pTransferSerialField_TradeDate_len = 0;

	//TThostFtdcDateType char[9]
	const char *pTransferSerialField_TradingDay = NULL;
	Py_ssize_t pTransferSerialField_TradingDay_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pTransferSerialField_TradeTime = NULL;
	Py_ssize_t pTransferSerialField_TradeTime_len = 0;

	//TThostFtdcTradeCodeType char[7]
	const char *pTransferSerialField_TradeCode = NULL;
	Py_ssize_t pTransferSerialField_TradeCode_len = 0;

	//TThostFtdcSessionIDType int
	int pTransferSerialField_SessionID = 0;

	//TThostFtdcBankIDType char[4]
	const char *pTransferSerialField_BankID = NULL;
	Py_ssize_t pTransferSerialField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pTransferSerialField_BankBranchID = NULL;
	Py_ssize_t pTransferSerialField_BankBranchID_len = 0;

	//TThostFtdcBankAccTypeType char
	char pTransferSerialField_BankAccType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pTransferSerialField_BankAccount = NULL;
	Py_ssize_t pTransferSerialField_BankAccount_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pTransferSerialField_BankSerial = NULL;
	Py_ssize_t pTransferSerialField_BankSerial_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pTransferSerialField_BrokerID = NULL;
	Py_ssize_t pTransferSerialField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pTransferSerialField_BrokerBranchID = NULL;
	Py_ssize_t pTransferSerialField_BrokerBranchID_len = 0;

	//TThostFtdcFutureAccTypeType char
	char pTransferSerialField_FutureAccType = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTransferSerialField_AccountID = NULL;
	Py_ssize_t pTransferSerialField_AccountID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pTransferSerialField_InvestorID = NULL;
	Py_ssize_t pTransferSerialField_InvestorID_len = 0;

	//TThostFtdcFutureSerialType int
	int pTransferSerialField_FutureSerial = 0;

	//TThostFtdcIdCardTypeType char
	char pTransferSerialField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pTransferSerialField_IdentifiedCardNo = NULL;
	Py_ssize_t pTransferSerialField_IdentifiedCardNo_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pTransferSerialField_CurrencyID = NULL;
	Py_ssize_t pTransferSerialField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pTransferSerialField_TradeAmount = 0.0;

	//TThostFtdcCustFeeType double
	double pTransferSerialField_CustFee = 0.0;

	//TThostFtdcFutureFeeType double
	double pTransferSerialField_BrokerFee = 0.0;

	//TThostFtdcAvailabilityFlagType char
	char pTransferSerialField_AvailabilityFlag = 0;

	//TThostFtdcOperatorCodeType char[17]
	const char *pTransferSerialField_OperatorCode = NULL;
	Py_ssize_t pTransferSerialField_OperatorCode_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pTransferSerialField_BankNewAccount = NULL;
	Py_ssize_t pTransferSerialField_BankNewAccount_len = 0;

	//TThostFtdcErrorIDType int
	int pTransferSerialField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pTransferSerialField_ErrorMsg = NULL;
	Py_ssize_t pTransferSerialField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iy#y#y#y#iy#y#cy#y#y#y#cy#y#icy#y#dddcy#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|is#s#s#s#is#s#cs#s#s#s#cs#s#ics#s#dddcs#s#is#", (char **)kwlist
#endif

		, &pTransferSerialField_PlateSerial
		, &pTransferSerialField_TradeDate, &pTransferSerialField_TradeDate_len
		, &pTransferSerialField_TradingDay, &pTransferSerialField_TradingDay_len
		, &pTransferSerialField_TradeTime, &pTransferSerialField_TradeTime_len
		, &pTransferSerialField_TradeCode, &pTransferSerialField_TradeCode_len
		, &pTransferSerialField_SessionID
		, &pTransferSerialField_BankID, &pTransferSerialField_BankID_len
		, &pTransferSerialField_BankBranchID, &pTransferSerialField_BankBranchID_len
		, &pTransferSerialField_BankAccType
		, &pTransferSerialField_BankAccount, &pTransferSerialField_BankAccount_len
		, &pTransferSerialField_BankSerial, &pTransferSerialField_BankSerial_len
		, &pTransferSerialField_BrokerID, &pTransferSerialField_BrokerID_len
		, &pTransferSerialField_BrokerBranchID, &pTransferSerialField_BrokerBranchID_len
		, &pTransferSerialField_FutureAccType
		, &pTransferSerialField_AccountID, &pTransferSerialField_AccountID_len
		, &pTransferSerialField_InvestorID, &pTransferSerialField_InvestorID_len
		, &pTransferSerialField_FutureSerial
		, &pTransferSerialField_IdCardType
		, &pTransferSerialField_IdentifiedCardNo, &pTransferSerialField_IdentifiedCardNo_len
		, &pTransferSerialField_CurrencyID, &pTransferSerialField_CurrencyID_len
		, &pTransferSerialField_TradeAmount
		, &pTransferSerialField_CustFee
		, &pTransferSerialField_BrokerFee
		, &pTransferSerialField_AvailabilityFlag
		, &pTransferSerialField_OperatorCode, &pTransferSerialField_OperatorCode_len
		, &pTransferSerialField_BankNewAccount, &pTransferSerialField_BankNewAccount_len
		, &pTransferSerialField_ErrorID
		, &pTransferSerialField_ErrorMsg, &pTransferSerialField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcPlateSerialType int
	self->data.PlateSerial = pTransferSerialField_PlateSerial;

	//TThostFtdcTradeDateType char[9]
	if(pTransferSerialField_TradeDate != NULL) {
		if(pTransferSerialField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pTransferSerialField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pTransferSerialField_TradeDate, sizeof(self->data.TradeDate) );
		pTransferSerialField_TradeDate = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pTransferSerialField_TradingDay != NULL) {
		if(pTransferSerialField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pTransferSerialField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pTransferSerialField_TradingDay, sizeof(self->data.TradingDay) );
		pTransferSerialField_TradingDay = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pTransferSerialField_TradeTime != NULL) {
		if(pTransferSerialField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pTransferSerialField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pTransferSerialField_TradeTime, sizeof(self->data.TradeTime) );
		pTransferSerialField_TradeTime = NULL;
	}

	//TThostFtdcTradeCodeType char[7]
	if(pTransferSerialField_TradeCode != NULL) {
		if(pTransferSerialField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pTransferSerialField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pTransferSerialField_TradeCode, sizeof(self->data.TradeCode) );
		pTransferSerialField_TradeCode = NULL;
	}

	//TThostFtdcSessionIDType int
	self->data.SessionID = pTransferSerialField_SessionID;

	//TThostFtdcBankIDType char[4]
	if(pTransferSerialField_BankID != NULL) {
		if(pTransferSerialField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pTransferSerialField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pTransferSerialField_BankID, sizeof(self->data.BankID) );
		pTransferSerialField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pTransferSerialField_BankBranchID != NULL) {
		if(pTransferSerialField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pTransferSerialField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pTransferSerialField_BankBranchID, sizeof(self->data.BankBranchID) );
		pTransferSerialField_BankBranchID = NULL;
	}

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pTransferSerialField_BankAccType;

	//TThostFtdcBankAccountType char[41]
	if(pTransferSerialField_BankAccount != NULL) {
		if(pTransferSerialField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pTransferSerialField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pTransferSerialField_BankAccount, sizeof(self->data.BankAccount) );
		pTransferSerialField_BankAccount = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pTransferSerialField_BankSerial != NULL) {
		if(pTransferSerialField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pTransferSerialField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pTransferSerialField_BankSerial, sizeof(self->data.BankSerial) );
		pTransferSerialField_BankSerial = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pTransferSerialField_BrokerID != NULL) {
		if(pTransferSerialField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTransferSerialField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTransferSerialField_BrokerID, sizeof(self->data.BrokerID) );
		pTransferSerialField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pTransferSerialField_BrokerBranchID != NULL) {
		if(pTransferSerialField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pTransferSerialField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pTransferSerialField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pTransferSerialField_BrokerBranchID = NULL;
	}

	//TThostFtdcFutureAccTypeType char
	self->data.FutureAccType = pTransferSerialField_FutureAccType;

	//TThostFtdcAccountIDType char[13]
	if(pTransferSerialField_AccountID != NULL) {
		if(pTransferSerialField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pTransferSerialField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pTransferSerialField_AccountID, sizeof(self->data.AccountID) );
		pTransferSerialField_AccountID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pTransferSerialField_InvestorID != NULL) {
		if(pTransferSerialField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pTransferSerialField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pTransferSerialField_InvestorID, sizeof(self->data.InvestorID) );
		pTransferSerialField_InvestorID = NULL;
	}

	//TThostFtdcFutureSerialType int
	self->data.FutureSerial = pTransferSerialField_FutureSerial;

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pTransferSerialField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pTransferSerialField_IdentifiedCardNo != NULL) {
		if(pTransferSerialField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pTransferSerialField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pTransferSerialField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pTransferSerialField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pTransferSerialField_CurrencyID != NULL) {
		if(pTransferSerialField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pTransferSerialField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pTransferSerialField_CurrencyID, sizeof(self->data.CurrencyID) );
		pTransferSerialField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pTransferSerialField_TradeAmount;
	//TThostFtdcCustFeeType double
	self->data.CustFee = pTransferSerialField_CustFee;
	//TThostFtdcFutureFeeType double
	self->data.BrokerFee = pTransferSerialField_BrokerFee;
	//TThostFtdcAvailabilityFlagType char
	self->data.AvailabilityFlag = pTransferSerialField_AvailabilityFlag;

	//TThostFtdcOperatorCodeType char[17]
	if(pTransferSerialField_OperatorCode != NULL) {
		if(pTransferSerialField_OperatorCode_len > (Py_ssize_t)sizeof(self->data.OperatorCode)) {
			PyErr_Format(PyExc_ValueError, "OperatorCode too long: length=%zd (max allowed is %zd)", pTransferSerialField_OperatorCode_len, (Py_ssize_t)sizeof(self->data.OperatorCode));
			return -1;
		}
		strncpy(self->data.OperatorCode, pTransferSerialField_OperatorCode, sizeof(self->data.OperatorCode) );
		pTransferSerialField_OperatorCode = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pTransferSerialField_BankNewAccount != NULL) {
		if(pTransferSerialField_BankNewAccount_len > (Py_ssize_t)sizeof(self->data.BankNewAccount)) {
			PyErr_Format(PyExc_ValueError, "BankNewAccount too long: length=%zd (max allowed is %zd)", pTransferSerialField_BankNewAccount_len, (Py_ssize_t)sizeof(self->data.BankNewAccount));
			return -1;
		}
		strncpy(self->data.BankNewAccount, pTransferSerialField_BankNewAccount, sizeof(self->data.BankNewAccount) );
		pTransferSerialField_BankNewAccount = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pTransferSerialField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pTransferSerialField_ErrorMsg != NULL) {
		if(pTransferSerialField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pTransferSerialField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pTransferSerialField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pTransferSerialField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcTransferSerialField_dealloc(PyCThostFtdcTransferSerialField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferSerialField_repr(PyCThostFtdcTransferSerialField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:y,s:y,s:d,s:d,s:d,s:c,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:i,s:c,s:s,s:s,s:d,s:d,s:d,s:c,s:s,s:s,s:i,s:s}"
#endif

		, "PlateSerial", self->data.PlateSerial
		, "TradeDate", self->data.TradeDate 
		, "TradingDay", self->data.TradingDay 
		, "TradeTime", self->data.TradeTime 
		, "TradeCode", self->data.TradeCode 
		, "SessionID", self->data.SessionID
		, "BankID", self->data.BankID 
		, "BankBranchID", self->data.BankBranchID 
		, "BankAccType", self->data.BankAccType
		, "BankAccount", self->data.BankAccount 
		, "BankSerial", self->data.BankSerial 
		, "BrokerID", self->data.BrokerID 
		, "BrokerBranchID", self->data.BrokerBranchID 
		, "FutureAccType", self->data.FutureAccType
		, "AccountID", self->data.AccountID 
		, "InvestorID", self->data.InvestorID 
		, "FutureSerial", self->data.FutureSerial
		, "IdCardType", self->data.IdCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "CurrencyID", self->data.CurrencyID 
		, "TradeAmount", self->data.TradeAmount
		, "CustFee", self->data.CustFee
		, "BrokerFee", self->data.BrokerFee
		, "AvailabilityFlag", self->data.AvailabilityFlag
		, "OperatorCode", self->data.OperatorCode 
		, "BankNewAccount", self->data.BankNewAccount 
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferSerialField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferSerialField_get_PlateSerial(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcTransferSerialField_get_TradeDate(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcTransferSerialField_get_TradingDay(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcTransferSerialField_get_TradeTime(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcTransferSerialField_get_TradeCode(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcTransferSerialField_get_SessionID(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcTransferSerialField_get_BankID(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BankBranchID(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BankAccType(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BankAccount(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BankSerial(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BrokerID(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BrokerBranchID(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcTransferSerialField_get_FutureAccType(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FutureAccType), 1);
}

static PyObject *PyCThostFtdcTransferSerialField_get_AccountID(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcTransferSerialField_get_InvestorID(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcTransferSerialField_get_FutureSerial(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcTransferSerialField_get_IdCardType(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcTransferSerialField_get_IdentifiedCardNo(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcTransferSerialField_get_CurrencyID(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcTransferSerialField_get_TradeAmount(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcTransferSerialField_get_CustFee(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyFloat_FromDouble(self->data.CustFee);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BrokerFee(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyFloat_FromDouble(self->data.BrokerFee);
}

static PyObject *PyCThostFtdcTransferSerialField_get_AvailabilityFlag(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AvailabilityFlag), 1);
}

static PyObject *PyCThostFtdcTransferSerialField_get_OperatorCode(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.OperatorCode);
}

static PyObject *PyCThostFtdcTransferSerialField_get_BankNewAccount(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankNewAccount);
}

static PyObject *PyCThostFtdcTransferSerialField_get_ErrorID(PyCThostFtdcTransferSerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcTransferSerialField_get_ErrorMsg(PyCThostFtdcTransferSerialField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcTransferSerialField_set_PlateSerial(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_TradeDate(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_TradingDay(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_TradeTime(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_TradeCode(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_SessionID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BankID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BankBranchID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BankAccType(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BankAccount(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BankSerial(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BrokerID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BrokerBranchID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_FutureAccType(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FutureAccType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FutureAccType)) {
		PyErr_SetString(PyExc_ValueError, "FutureAccType must be less than 1 bytes");
		return -1;
	}
	self->data.FutureAccType = *buf;
	return 0;
}

static int PyCThostFtdcTransferSerialField_set_AccountID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_InvestorID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcTransferSerialField_set_FutureSerial(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_IdCardType(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_IdentifiedCardNo(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_CurrencyID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_TradeAmount(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_CustFee(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_BrokerFee(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_AvailabilityFlag(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AvailabilityFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AvailabilityFlag)) {
		PyErr_SetString(PyExc_ValueError, "AvailabilityFlag must be less than 1 bytes");
		return -1;
	}
	self->data.AvailabilityFlag = *buf;
	return 0;
}

static int PyCThostFtdcTransferSerialField_set_OperatorCode(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OperatorCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OperatorCode)) {
		PyErr_SetString(PyExc_ValueError, "OperatorCode must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.OperatorCode, buf, sizeof(self->data.OperatorCode));
	return 0;
}

static int PyCThostFtdcTransferSerialField_set_BankNewAccount(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankNewAccount Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankNewAccount)) {
		PyErr_SetString(PyExc_ValueError, "BankNewAccount must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.BankNewAccount, buf, sizeof(self->data.BankNewAccount));
	return 0;
}

static int PyCThostFtdcTransferSerialField_set_ErrorID(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferSerialField_set_ErrorMsg(PyCThostFtdcTransferSerialField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTransferSerialField_getset[] = {
	 {(char *)"PlateSerial", (getter)PyCThostFtdcTransferSerialField_get_PlateSerial, (setter)PyCThostFtdcTransferSerialField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcTransferSerialField_get_TradeDate, (setter)PyCThostFtdcTransferSerialField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcTransferSerialField_get_TradingDay, (setter)PyCThostFtdcTransferSerialField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcTransferSerialField_get_TradeTime, (setter)PyCThostFtdcTransferSerialField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"TradeCode", (getter)PyCThostFtdcTransferSerialField_get_TradeCode, (setter)PyCThostFtdcTransferSerialField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcTransferSerialField_get_SessionID, (setter)PyCThostFtdcTransferSerialField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcTransferSerialField_get_BankID, (setter)PyCThostFtdcTransferSerialField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcTransferSerialField_get_BankBranchID, (setter)PyCThostFtdcTransferSerialField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcTransferSerialField_get_BankAccType, (setter)PyCThostFtdcTransferSerialField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcTransferSerialField_get_BankAccount, (setter)PyCThostFtdcTransferSerialField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcTransferSerialField_get_BankSerial, (setter)PyCThostFtdcTransferSerialField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcTransferSerialField_get_BrokerID, (setter)PyCThostFtdcTransferSerialField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcTransferSerialField_get_BrokerBranchID, (setter)PyCThostFtdcTransferSerialField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"FutureAccType", (getter)PyCThostFtdcTransferSerialField_get_FutureAccType, (setter)PyCThostFtdcTransferSerialField_set_FutureAccType, (char *)"FutureAccType", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcTransferSerialField_get_AccountID, (setter)PyCThostFtdcTransferSerialField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcTransferSerialField_get_InvestorID, (setter)PyCThostFtdcTransferSerialField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcTransferSerialField_get_FutureSerial, (setter)PyCThostFtdcTransferSerialField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcTransferSerialField_get_IdCardType, (setter)PyCThostFtdcTransferSerialField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcTransferSerialField_get_IdentifiedCardNo, (setter)PyCThostFtdcTransferSerialField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcTransferSerialField_get_CurrencyID, (setter)PyCThostFtdcTransferSerialField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcTransferSerialField_get_TradeAmount, (setter)PyCThostFtdcTransferSerialField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"CustFee", (getter)PyCThostFtdcTransferSerialField_get_CustFee, (setter)PyCThostFtdcTransferSerialField_set_CustFee, (char *)"CustFee", NULL},
	 {(char *)"BrokerFee", (getter)PyCThostFtdcTransferSerialField_get_BrokerFee, (setter)PyCThostFtdcTransferSerialField_set_BrokerFee, (char *)"BrokerFee", NULL},
	 {(char *)"AvailabilityFlag", (getter)PyCThostFtdcTransferSerialField_get_AvailabilityFlag, (setter)PyCThostFtdcTransferSerialField_set_AvailabilityFlag, (char *)"AvailabilityFlag", NULL},
	 {(char *)"OperatorCode", (getter)PyCThostFtdcTransferSerialField_get_OperatorCode, (setter)PyCThostFtdcTransferSerialField_set_OperatorCode, (char *)"OperatorCode", NULL},
	 {(char *)"BankNewAccount", (getter)PyCThostFtdcTransferSerialField_get_BankNewAccount, (setter)PyCThostFtdcTransferSerialField_set_BankNewAccount, (char *)"BankNewAccount", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcTransferSerialField_get_ErrorID, (setter)PyCThostFtdcTransferSerialField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcTransferSerialField_get_ErrorMsg, (setter)PyCThostFtdcTransferSerialField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferSerialFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferSerialField",	/* tp_name */
	sizeof(PyCThostFtdcTransferSerialField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferSerialField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferSerialField_repr,   /* tp_repr */
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
	"CThostFtdcTransferSerialField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferSerialField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferSerialField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferSerialField_new,       /* tp_new */
};

int PyCThostFtdcTransferSerialFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferSerialField  */
	if (PyType_Ready(&PyCThostFtdcTransferSerialFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferSerialField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferSerialFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferSerialField", (PyObject *)&PyCThostFtdcTransferSerialFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferSerialField to module");
        Py_DECREF(&PyCThostFtdcTransferSerialFieldType);
		return -1;
    }

    return 0;
}
