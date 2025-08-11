
#include "PyCThostFtdcRspQueryTradeResultBySerialField.h"



static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspQueryTradeResultBySerialField *self = (PyCThostFtdcRspQueryTradeResultBySerialField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_init(PyCThostFtdcRspQueryTradeResultBySerialField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "ErrorID", "ErrorMsg", "Reference", "RefrenceIssureType", "RefrenceIssure", "OriginReturnCode", "OriginDescrInfoForReturnCode", "BankAccount", "BankPassWord", "AccountID", "Password", "CurrencyID", "TradeAmount", "Digest",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspQueryTradeResultBySerialField_TradeCode = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspQueryTradeResultBySerialField_BankID = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspQueryTradeResultBySerialField_BankBranchID = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspQueryTradeResultBySerialField_BrokerID = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspQueryTradeResultBySerialField_BrokerBranchID = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspQueryTradeResultBySerialField_TradeDate = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspQueryTradeResultBySerialField_TradeTime = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspQueryTradeResultBySerialField_BankSerial = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspQueryTradeResultBySerialField_TradingDay = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspQueryTradeResultBySerialField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspQueryTradeResultBySerialField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspQueryTradeResultBySerialField_SessionID = 0;

	//TThostFtdcErrorIDType int
	int pRspQueryTradeResultBySerialField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pRspQueryTradeResultBySerialField_ErrorMsg = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_ErrorMsg_len = 0;

	//TThostFtdcSerialType int
	int pRspQueryTradeResultBySerialField_Reference = 0;

	//TThostFtdcInstitutionTypeType char
	char pRspQueryTradeResultBySerialField_RefrenceIssureType = 0;

	//TThostFtdcOrganCodeType char[36]
	const char *pRspQueryTradeResultBySerialField_RefrenceIssure = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_RefrenceIssure_len = 0;

	//TThostFtdcReturnCodeType char[7]
	const char *pRspQueryTradeResultBySerialField_OriginReturnCode = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_OriginReturnCode_len = 0;

	//TThostFtdcDescrInfoForReturnCodeType char[129]
	const char *pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pRspQueryTradeResultBySerialField_BankAccount = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspQueryTradeResultBySerialField_BankPassWord = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pRspQueryTradeResultBySerialField_AccountID = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pRspQueryTradeResultBySerialField_Password = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_Password_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspQueryTradeResultBySerialField_CurrencyID = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pRspQueryTradeResultBySerialField_TradeAmount = 0.0;

	//TThostFtdcDigestType char[36]
	const char *pRspQueryTradeResultBySerialField_Digest = NULL;
	Py_ssize_t pRspQueryTradeResultBySerialField_Digest_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#icy#y#y#y#y#y#y#y#dy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#ics#s#s#s#s#s#s#s#ds#", (char **)kwlist
#endif

		, &pRspQueryTradeResultBySerialField_TradeCode, &pRspQueryTradeResultBySerialField_TradeCode_len
		, &pRspQueryTradeResultBySerialField_BankID, &pRspQueryTradeResultBySerialField_BankID_len
		, &pRspQueryTradeResultBySerialField_BankBranchID, &pRspQueryTradeResultBySerialField_BankBranchID_len
		, &pRspQueryTradeResultBySerialField_BrokerID, &pRspQueryTradeResultBySerialField_BrokerID_len
		, &pRspQueryTradeResultBySerialField_BrokerBranchID, &pRspQueryTradeResultBySerialField_BrokerBranchID_len
		, &pRspQueryTradeResultBySerialField_TradeDate, &pRspQueryTradeResultBySerialField_TradeDate_len
		, &pRspQueryTradeResultBySerialField_TradeTime, &pRspQueryTradeResultBySerialField_TradeTime_len
		, &pRspQueryTradeResultBySerialField_BankSerial, &pRspQueryTradeResultBySerialField_BankSerial_len
		, &pRspQueryTradeResultBySerialField_TradingDay, &pRspQueryTradeResultBySerialField_TradingDay_len
		, &pRspQueryTradeResultBySerialField_PlateSerial
		, &pRspQueryTradeResultBySerialField_LastFragment
		, &pRspQueryTradeResultBySerialField_SessionID
		, &pRspQueryTradeResultBySerialField_ErrorID
		, &pRspQueryTradeResultBySerialField_ErrorMsg, &pRspQueryTradeResultBySerialField_ErrorMsg_len
		, &pRspQueryTradeResultBySerialField_Reference
		, &pRspQueryTradeResultBySerialField_RefrenceIssureType
		, &pRspQueryTradeResultBySerialField_RefrenceIssure, &pRspQueryTradeResultBySerialField_RefrenceIssure_len
		, &pRspQueryTradeResultBySerialField_OriginReturnCode, &pRspQueryTradeResultBySerialField_OriginReturnCode_len
		, &pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, &pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len
		, &pRspQueryTradeResultBySerialField_BankAccount, &pRspQueryTradeResultBySerialField_BankAccount_len
		, &pRspQueryTradeResultBySerialField_BankPassWord, &pRspQueryTradeResultBySerialField_BankPassWord_len
		, &pRspQueryTradeResultBySerialField_AccountID, &pRspQueryTradeResultBySerialField_AccountID_len
		, &pRspQueryTradeResultBySerialField_Password, &pRspQueryTradeResultBySerialField_Password_len
		, &pRspQueryTradeResultBySerialField_CurrencyID, &pRspQueryTradeResultBySerialField_CurrencyID_len
		, &pRspQueryTradeResultBySerialField_TradeAmount
		, &pRspQueryTradeResultBySerialField_Digest, &pRspQueryTradeResultBySerialField_Digest_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspQueryTradeResultBySerialField_TradeCode != NULL) {
		if(pRspQueryTradeResultBySerialField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspQueryTradeResultBySerialField_TradeCode, sizeof(self->data.TradeCode) );
		pRspQueryTradeResultBySerialField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspQueryTradeResultBySerialField_BankID != NULL) {
		if(pRspQueryTradeResultBySerialField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspQueryTradeResultBySerialField_BankID, sizeof(self->data.BankID) );
		pRspQueryTradeResultBySerialField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspQueryTradeResultBySerialField_BankBranchID != NULL) {
		if(pRspQueryTradeResultBySerialField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspQueryTradeResultBySerialField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspQueryTradeResultBySerialField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspQueryTradeResultBySerialField_BrokerID != NULL) {
		if(pRspQueryTradeResultBySerialField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspQueryTradeResultBySerialField_BrokerID, sizeof(self->data.BrokerID) );
		pRspQueryTradeResultBySerialField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspQueryTradeResultBySerialField_BrokerBranchID != NULL) {
		if(pRspQueryTradeResultBySerialField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspQueryTradeResultBySerialField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspQueryTradeResultBySerialField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspQueryTradeResultBySerialField_TradeDate != NULL) {
		if(pRspQueryTradeResultBySerialField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspQueryTradeResultBySerialField_TradeDate, sizeof(self->data.TradeDate) );
		pRspQueryTradeResultBySerialField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspQueryTradeResultBySerialField_TradeTime != NULL) {
		if(pRspQueryTradeResultBySerialField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspQueryTradeResultBySerialField_TradeTime, sizeof(self->data.TradeTime) );
		pRspQueryTradeResultBySerialField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspQueryTradeResultBySerialField_BankSerial != NULL) {
		if(pRspQueryTradeResultBySerialField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspQueryTradeResultBySerialField_BankSerial, sizeof(self->data.BankSerial) );
		pRspQueryTradeResultBySerialField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspQueryTradeResultBySerialField_TradingDay != NULL) {
		if(pRspQueryTradeResultBySerialField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspQueryTradeResultBySerialField_TradingDay, sizeof(self->data.TradingDay) );
		pRspQueryTradeResultBySerialField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspQueryTradeResultBySerialField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspQueryTradeResultBySerialField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspQueryTradeResultBySerialField_SessionID;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pRspQueryTradeResultBySerialField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pRspQueryTradeResultBySerialField_ErrorMsg != NULL) {
		if(pRspQueryTradeResultBySerialField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pRspQueryTradeResultBySerialField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pRspQueryTradeResultBySerialField_ErrorMsg = NULL;
	}

	//TThostFtdcSerialType int
	self->data.Reference = pRspQueryTradeResultBySerialField_Reference;

	//TThostFtdcInstitutionTypeType char
	self->data.RefrenceIssureType = pRspQueryTradeResultBySerialField_RefrenceIssureType;

	//TThostFtdcOrganCodeType char[36]
	if(pRspQueryTradeResultBySerialField_RefrenceIssure != NULL) {
		if(pRspQueryTradeResultBySerialField_RefrenceIssure_len > (Py_ssize_t)sizeof(self->data.RefrenceIssure)) {
			PyErr_Format(PyExc_ValueError, "RefrenceIssure too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_RefrenceIssure_len, (Py_ssize_t)sizeof(self->data.RefrenceIssure));
			return -1;
		}
		strncpy(self->data.RefrenceIssure, pRspQueryTradeResultBySerialField_RefrenceIssure, sizeof(self->data.RefrenceIssure) );
		pRspQueryTradeResultBySerialField_RefrenceIssure = NULL;
	}

	//TThostFtdcReturnCodeType char[7]
	if(pRspQueryTradeResultBySerialField_OriginReturnCode != NULL) {
		if(pRspQueryTradeResultBySerialField_OriginReturnCode_len > (Py_ssize_t)sizeof(self->data.OriginReturnCode)) {
			PyErr_Format(PyExc_ValueError, "OriginReturnCode too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_OriginReturnCode_len, (Py_ssize_t)sizeof(self->data.OriginReturnCode));
			return -1;
		}
		strncpy(self->data.OriginReturnCode, pRspQueryTradeResultBySerialField_OriginReturnCode, sizeof(self->data.OriginReturnCode) );
		pRspQueryTradeResultBySerialField_OriginReturnCode = NULL;
	}

	//TThostFtdcDescrInfoForReturnCodeType char[129]
	if(pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode != NULL) {
		if(pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len > (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode)) {
			PyErr_Format(PyExc_ValueError, "OriginDescrInfoForReturnCode too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode_len, (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode));
			return -1;
		}
		strncpy(self->data.OriginDescrInfoForReturnCode, pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode, sizeof(self->data.OriginDescrInfoForReturnCode) );
		pRspQueryTradeResultBySerialField_OriginDescrInfoForReturnCode = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pRspQueryTradeResultBySerialField_BankAccount != NULL) {
		if(pRspQueryTradeResultBySerialField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pRspQueryTradeResultBySerialField_BankAccount, sizeof(self->data.BankAccount) );
		pRspQueryTradeResultBySerialField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspQueryTradeResultBySerialField_BankPassWord != NULL) {
		if(pRspQueryTradeResultBySerialField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pRspQueryTradeResultBySerialField_BankPassWord, sizeof(self->data.BankPassWord) );
		pRspQueryTradeResultBySerialField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pRspQueryTradeResultBySerialField_AccountID != NULL) {
		if(pRspQueryTradeResultBySerialField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pRspQueryTradeResultBySerialField_AccountID, sizeof(self->data.AccountID) );
		pRspQueryTradeResultBySerialField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pRspQueryTradeResultBySerialField_Password != NULL) {
		if(pRspQueryTradeResultBySerialField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pRspQueryTradeResultBySerialField_Password, sizeof(self->data.Password) );
		pRspQueryTradeResultBySerialField_Password = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pRspQueryTradeResultBySerialField_CurrencyID != NULL) {
		if(pRspQueryTradeResultBySerialField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspQueryTradeResultBySerialField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspQueryTradeResultBySerialField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pRspQueryTradeResultBySerialField_TradeAmount;
	//TThostFtdcDigestType char[36]
	if(pRspQueryTradeResultBySerialField_Digest != NULL) {
		if(pRspQueryTradeResultBySerialField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspQueryTradeResultBySerialField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspQueryTradeResultBySerialField_Digest, sizeof(self->data.Digest) );
		pRspQueryTradeResultBySerialField_Digest = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspQueryTradeResultBySerialField_dealloc(PyCThostFtdcRspQueryTradeResultBySerialField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_repr(PyCThostFtdcRspQueryTradeResultBySerialField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:i,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:d,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:i,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:d,s:s}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "Reference", self->data.Reference
		, "RefrenceIssureType", self->data.RefrenceIssureType
		, "RefrenceIssure", self->data.RefrenceIssure 
		, "OriginReturnCode", self->data.OriginReturnCode 
		, "OriginDescrInfoForReturnCode", self->data.OriginDescrInfoForReturnCode 
		, "BankAccount", self->data.BankAccount 
		, "BankPassWord", self->data.BankPassWord 
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "CurrencyID", self->data.CurrencyID 
		, "TradeAmount", self->data.TradeAmount
		, "Digest", self->data.Digest 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspQueryTradeResultBySerialField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankBranchID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerBranchID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeDate(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeTime(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankSerial(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradingDay(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_PlateSerial(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_LastFragment(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_SessionID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorMsg(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_Reference(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Reference);
#else 
	return PyInt_FromLong(self->data.Reference);
#endif 
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssureType(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.RefrenceIssureType), 1);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssure(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.RefrenceIssure);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.OriginReturnCode);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginDescrInfoForReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.OriginDescrInfoForReturnCode);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankAccount(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_BankPassWord(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_AccountID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_Password(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_CurrencyID(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeAmount(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcRspQueryTradeResultBySerialField_get_Digest(PyCThostFtdcRspQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeCode(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankBranchID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerBranchID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeDate(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeTime(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankSerial(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradingDay(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_PlateSerial(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_LastFragment(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_SessionID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorMsg(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_Reference(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Reference Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Reference Expected int"); 
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
    self->data.Reference = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssureType(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RefrenceIssureType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RefrenceIssureType)) {
		PyErr_SetString(PyExc_ValueError, "RefrenceIssureType must be less than 1 bytes");
		return -1;
	}
	self->data.RefrenceIssureType = *buf;
	return 0;
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssure(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RefrenceIssure Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RefrenceIssure)) {
		PyErr_SetString(PyExc_ValueError, "RefrenceIssure must be less than 36 bytes");
		return -1;
	}
	strncpy(self->data.RefrenceIssure, buf, sizeof(self->data.RefrenceIssure));
	return 0;
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OriginReturnCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OriginReturnCode)) {
		PyErr_SetString(PyExc_ValueError, "OriginReturnCode must be less than 7 bytes");
		return -1;
	}
	strncpy(self->data.OriginReturnCode, buf, sizeof(self->data.OriginReturnCode));
	return 0;
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginDescrInfoForReturnCode(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OriginDescrInfoForReturnCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OriginDescrInfoForReturnCode)) {
		PyErr_SetString(PyExc_ValueError, "OriginDescrInfoForReturnCode must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.OriginDescrInfoForReturnCode, buf, sizeof(self->data.OriginDescrInfoForReturnCode));
	return 0;
}

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankAccount(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_BankPassWord(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_AccountID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_Password(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_CurrencyID(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeAmount(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspQueryTradeResultBySerialField_set_Digest(PyCThostFtdcRspQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspQueryTradeResultBySerialField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeCode, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankBranchID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BrokerBranchID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeDate, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeTime, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankSerial, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradingDay, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_PlateSerial, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_LastFragment, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_SessionID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_ErrorMsg, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"Reference", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_Reference, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_Reference, (char *)"Reference", NULL},
	 {(char *)"RefrenceIssureType", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssureType, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssureType, (char *)"RefrenceIssureType", NULL},
	 {(char *)"RefrenceIssure", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_RefrenceIssure, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_RefrenceIssure, (char *)"RefrenceIssure", NULL},
	 {(char *)"OriginReturnCode", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginReturnCode, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginReturnCode, (char *)"OriginReturnCode", NULL},
	 {(char *)"OriginDescrInfoForReturnCode", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_OriginDescrInfoForReturnCode, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_OriginDescrInfoForReturnCode, (char *)"OriginDescrInfoForReturnCode", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankAccount, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_BankPassWord, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_AccountID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_Password, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_Password, (char *)"Password", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_CurrencyID, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_TradeAmount, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspQueryTradeResultBySerialField_get_Digest, (setter)PyCThostFtdcRspQueryTradeResultBySerialField_set_Digest, (char *)"Digest", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspQueryTradeResultBySerialFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspQueryTradeResultBySerialField",	/* tp_name */
	sizeof(PyCThostFtdcRspQueryTradeResultBySerialField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspQueryTradeResultBySerialField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspQueryTradeResultBySerialField_repr,   /* tp_repr */
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
	"CThostFtdcRspQueryTradeResultBySerialField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspQueryTradeResultBySerialField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspQueryTradeResultBySerialField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspQueryTradeResultBySerialField_new,       /* tp_new */
};

int PyCThostFtdcRspQueryTradeResultBySerialFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspQueryTradeResultBySerialField  */
	if (PyType_Ready(&PyCThostFtdcRspQueryTradeResultBySerialFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspQueryTradeResultBySerialField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspQueryTradeResultBySerialFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspQueryTradeResultBySerialField", (PyObject *)&PyCThostFtdcRspQueryTradeResultBySerialFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspQueryTradeResultBySerialField to module");
        Py_DECREF(&PyCThostFtdcRspQueryTradeResultBySerialFieldType);
		return -1;
    }

    return 0;
}
