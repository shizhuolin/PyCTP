
#include "PyCThostFtdcReqQueryTradeResultBySerialField.h"



static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqQueryTradeResultBySerialField *self = (PyCThostFtdcReqQueryTradeResultBySerialField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqQueryTradeResultBySerialField_init(PyCThostFtdcReqQueryTradeResultBySerialField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "Reference", "RefrenceIssureType", "RefrenceIssure", "CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "BankAccount", "BankPassWord", "AccountID", "Password", "CurrencyID", "TradeAmount", "Digest", "LongCustomerName",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqQueryTradeResultBySerialField_TradeCode = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqQueryTradeResultBySerialField_BankID = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqQueryTradeResultBySerialField_BankBranchID = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqQueryTradeResultBySerialField_BrokerID = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqQueryTradeResultBySerialField_BrokerBranchID = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqQueryTradeResultBySerialField_TradeDate = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqQueryTradeResultBySerialField_TradeTime = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqQueryTradeResultBySerialField_BankSerial = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqQueryTradeResultBySerialField_TradingDay = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqQueryTradeResultBySerialField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqQueryTradeResultBySerialField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqQueryTradeResultBySerialField_SessionID = 0;

	//TThostFtdcSerialType int
	int pReqQueryTradeResultBySerialField_Reference = 0;

	//TThostFtdcInstitutionTypeType char
	char pReqQueryTradeResultBySerialField_RefrenceIssureType = 0;

	//TThostFtdcOrganCodeType char[36]
	const char *pReqQueryTradeResultBySerialField_RefrenceIssure = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_RefrenceIssure_len = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pReqQueryTradeResultBySerialField_CustomerName = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pReqQueryTradeResultBySerialField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pReqQueryTradeResultBySerialField_IdentifiedCardNo = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pReqQueryTradeResultBySerialField_CustType = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pReqQueryTradeResultBySerialField_BankAccount = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqQueryTradeResultBySerialField_BankPassWord = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_BankPassWord_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pReqQueryTradeResultBySerialField_AccountID = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqQueryTradeResultBySerialField_Password = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_Password_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqQueryTradeResultBySerialField_CurrencyID = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_CurrencyID_len = 0;

	//TThostFtdcTradeAmountType double
	double pReqQueryTradeResultBySerialField_TradeAmount = 0.0;

	//TThostFtdcDigestType char[36]
	const char *pReqQueryTradeResultBySerialField_Digest = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_Digest_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pReqQueryTradeResultBySerialField_LongCustomerName = NULL;
	Py_ssize_t pReqQueryTradeResultBySerialField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciicy#y#cy#cy#y#y#y#y#dy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciics#s#cs#cs#s#s#s#s#ds#s#", (char **)kwlist
#endif

		, &pReqQueryTradeResultBySerialField_TradeCode, &pReqQueryTradeResultBySerialField_TradeCode_len
		, &pReqQueryTradeResultBySerialField_BankID, &pReqQueryTradeResultBySerialField_BankID_len
		, &pReqQueryTradeResultBySerialField_BankBranchID, &pReqQueryTradeResultBySerialField_BankBranchID_len
		, &pReqQueryTradeResultBySerialField_BrokerID, &pReqQueryTradeResultBySerialField_BrokerID_len
		, &pReqQueryTradeResultBySerialField_BrokerBranchID, &pReqQueryTradeResultBySerialField_BrokerBranchID_len
		, &pReqQueryTradeResultBySerialField_TradeDate, &pReqQueryTradeResultBySerialField_TradeDate_len
		, &pReqQueryTradeResultBySerialField_TradeTime, &pReqQueryTradeResultBySerialField_TradeTime_len
		, &pReqQueryTradeResultBySerialField_BankSerial, &pReqQueryTradeResultBySerialField_BankSerial_len
		, &pReqQueryTradeResultBySerialField_TradingDay, &pReqQueryTradeResultBySerialField_TradingDay_len
		, &pReqQueryTradeResultBySerialField_PlateSerial
		, &pReqQueryTradeResultBySerialField_LastFragment
		, &pReqQueryTradeResultBySerialField_SessionID
		, &pReqQueryTradeResultBySerialField_Reference
		, &pReqQueryTradeResultBySerialField_RefrenceIssureType
		, &pReqQueryTradeResultBySerialField_RefrenceIssure, &pReqQueryTradeResultBySerialField_RefrenceIssure_len
		, &pReqQueryTradeResultBySerialField_CustomerName, &pReqQueryTradeResultBySerialField_CustomerName_len
		, &pReqQueryTradeResultBySerialField_IdCardType
		, &pReqQueryTradeResultBySerialField_IdentifiedCardNo, &pReqQueryTradeResultBySerialField_IdentifiedCardNo_len
		, &pReqQueryTradeResultBySerialField_CustType
		, &pReqQueryTradeResultBySerialField_BankAccount, &pReqQueryTradeResultBySerialField_BankAccount_len
		, &pReqQueryTradeResultBySerialField_BankPassWord, &pReqQueryTradeResultBySerialField_BankPassWord_len
		, &pReqQueryTradeResultBySerialField_AccountID, &pReqQueryTradeResultBySerialField_AccountID_len
		, &pReqQueryTradeResultBySerialField_Password, &pReqQueryTradeResultBySerialField_Password_len
		, &pReqQueryTradeResultBySerialField_CurrencyID, &pReqQueryTradeResultBySerialField_CurrencyID_len
		, &pReqQueryTradeResultBySerialField_TradeAmount
		, &pReqQueryTradeResultBySerialField_Digest, &pReqQueryTradeResultBySerialField_Digest_len
		, &pReqQueryTradeResultBySerialField_LongCustomerName, &pReqQueryTradeResultBySerialField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqQueryTradeResultBySerialField_TradeCode != NULL) {
		if(pReqQueryTradeResultBySerialField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqQueryTradeResultBySerialField_TradeCode, sizeof(self->data.TradeCode) );
		pReqQueryTradeResultBySerialField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqQueryTradeResultBySerialField_BankID != NULL) {
		if(pReqQueryTradeResultBySerialField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqQueryTradeResultBySerialField_BankID, sizeof(self->data.BankID) );
		pReqQueryTradeResultBySerialField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqQueryTradeResultBySerialField_BankBranchID != NULL) {
		if(pReqQueryTradeResultBySerialField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqQueryTradeResultBySerialField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqQueryTradeResultBySerialField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqQueryTradeResultBySerialField_BrokerID != NULL) {
		if(pReqQueryTradeResultBySerialField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqQueryTradeResultBySerialField_BrokerID, sizeof(self->data.BrokerID) );
		pReqQueryTradeResultBySerialField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqQueryTradeResultBySerialField_BrokerBranchID != NULL) {
		if(pReqQueryTradeResultBySerialField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqQueryTradeResultBySerialField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqQueryTradeResultBySerialField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqQueryTradeResultBySerialField_TradeDate != NULL) {
		if(pReqQueryTradeResultBySerialField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqQueryTradeResultBySerialField_TradeDate, sizeof(self->data.TradeDate) );
		pReqQueryTradeResultBySerialField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqQueryTradeResultBySerialField_TradeTime != NULL) {
		if(pReqQueryTradeResultBySerialField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqQueryTradeResultBySerialField_TradeTime, sizeof(self->data.TradeTime) );
		pReqQueryTradeResultBySerialField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqQueryTradeResultBySerialField_BankSerial != NULL) {
		if(pReqQueryTradeResultBySerialField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqQueryTradeResultBySerialField_BankSerial, sizeof(self->data.BankSerial) );
		pReqQueryTradeResultBySerialField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqQueryTradeResultBySerialField_TradingDay != NULL) {
		if(pReqQueryTradeResultBySerialField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqQueryTradeResultBySerialField_TradingDay, sizeof(self->data.TradingDay) );
		pReqQueryTradeResultBySerialField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqQueryTradeResultBySerialField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqQueryTradeResultBySerialField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqQueryTradeResultBySerialField_SessionID;

	//TThostFtdcSerialType int
	self->data.Reference = pReqQueryTradeResultBySerialField_Reference;

	//TThostFtdcInstitutionTypeType char
	self->data.RefrenceIssureType = pReqQueryTradeResultBySerialField_RefrenceIssureType;

	//TThostFtdcOrganCodeType char[36]
	if(pReqQueryTradeResultBySerialField_RefrenceIssure != NULL) {
		if(pReqQueryTradeResultBySerialField_RefrenceIssure_len > (Py_ssize_t)sizeof(self->data.RefrenceIssure)) {
			PyErr_Format(PyExc_ValueError, "RefrenceIssure too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_RefrenceIssure_len, (Py_ssize_t)sizeof(self->data.RefrenceIssure));
			return -1;
		}
		strncpy(self->data.RefrenceIssure, pReqQueryTradeResultBySerialField_RefrenceIssure, sizeof(self->data.RefrenceIssure) );
		pReqQueryTradeResultBySerialField_RefrenceIssure = NULL;
	}

	//TThostFtdcIndividualNameType char[51]
	if(pReqQueryTradeResultBySerialField_CustomerName != NULL) {
		if(pReqQueryTradeResultBySerialField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pReqQueryTradeResultBySerialField_CustomerName, sizeof(self->data.CustomerName) );
		pReqQueryTradeResultBySerialField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pReqQueryTradeResultBySerialField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pReqQueryTradeResultBySerialField_IdentifiedCardNo != NULL) {
		if(pReqQueryTradeResultBySerialField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pReqQueryTradeResultBySerialField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pReqQueryTradeResultBySerialField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pReqQueryTradeResultBySerialField_CustType;

	//TThostFtdcBankAccountType char[41]
	if(pReqQueryTradeResultBySerialField_BankAccount != NULL) {
		if(pReqQueryTradeResultBySerialField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pReqQueryTradeResultBySerialField_BankAccount, sizeof(self->data.BankAccount) );
		pReqQueryTradeResultBySerialField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqQueryTradeResultBySerialField_BankPassWord != NULL) {
		if(pReqQueryTradeResultBySerialField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pReqQueryTradeResultBySerialField_BankPassWord, sizeof(self->data.BankPassWord) );
		pReqQueryTradeResultBySerialField_BankPassWord = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pReqQueryTradeResultBySerialField_AccountID != NULL) {
		if(pReqQueryTradeResultBySerialField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pReqQueryTradeResultBySerialField_AccountID, sizeof(self->data.AccountID) );
		pReqQueryTradeResultBySerialField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqQueryTradeResultBySerialField_Password != NULL) {
		if(pReqQueryTradeResultBySerialField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqQueryTradeResultBySerialField_Password, sizeof(self->data.Password) );
		pReqQueryTradeResultBySerialField_Password = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pReqQueryTradeResultBySerialField_CurrencyID != NULL) {
		if(pReqQueryTradeResultBySerialField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqQueryTradeResultBySerialField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqQueryTradeResultBySerialField_CurrencyID = NULL;
	}

	//TThostFtdcTradeAmountType double
	self->data.TradeAmount = pReqQueryTradeResultBySerialField_TradeAmount;
	//TThostFtdcDigestType char[36]
	if(pReqQueryTradeResultBySerialField_Digest != NULL) {
		if(pReqQueryTradeResultBySerialField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqQueryTradeResultBySerialField_Digest, sizeof(self->data.Digest) );
		pReqQueryTradeResultBySerialField_Digest = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pReqQueryTradeResultBySerialField_LongCustomerName != NULL) {
		if(pReqQueryTradeResultBySerialField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pReqQueryTradeResultBySerialField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pReqQueryTradeResultBySerialField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pReqQueryTradeResultBySerialField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqQueryTradeResultBySerialField_dealloc(PyCThostFtdcReqQueryTradeResultBySerialField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_repr(PyCThostFtdcReqQueryTradeResultBySerialField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:c,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:c,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:d,s:s,s:s}"
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
		, "Reference", self->data.Reference
		, "RefrenceIssureType", self->data.RefrenceIssureType
		, "RefrenceIssure", self->data.RefrenceIssure 
		, "CustomerName", self->data.CustomerName 
		, "IdCardType", self->data.IdCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "CustType", self->data.CustType
		, "BankAccount", self->data.BankAccount 
		, "BankPassWord", self->data.BankPassWord 
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "CurrencyID", self->data.CurrencyID 
		, "TradeAmount", self->data.TradeAmount
		, "Digest", self->data.Digest 
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqQueryTradeResultBySerialField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeCode(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankBranchID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerBranchID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeDate(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeTime(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankSerial(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradingDay(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_PlateSerial(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_LastFragment(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_SessionID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_Reference(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Reference);
#else 
	return PyInt_FromLong(self->data.Reference);
#endif 
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssureType(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.RefrenceIssureType), 1);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssure(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.RefrenceIssure);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_CustomerName(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_IdCardType(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_IdentifiedCardNo(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_CustType(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankAccount(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_BankPassWord(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_AccountID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_Password(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_CurrencyID(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeAmount(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TradeAmount);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_Digest(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqQueryTradeResultBySerialField_get_LongCustomerName(PyCThostFtdcReqQueryTradeResultBySerialField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeCode(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankID(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankBranchID(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerID(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerBranchID(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeDate(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeTime(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankSerial(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradingDay(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_PlateSerial(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_LastFragment(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_SessionID(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_Reference(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssureType(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssure(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_CustomerName(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_IdCardType(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_IdentifiedCardNo(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_CustType(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankAccount(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_BankPassWord(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_AccountID(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_Password(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_CurrencyID(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeAmount(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_Digest(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqQueryTradeResultBySerialField_set_LongCustomerName(PyCThostFtdcReqQueryTradeResultBySerialField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqQueryTradeResultBySerialField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeCode, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankBranchID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BrokerBranchID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeDate, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeTime, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankSerial, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradingDay, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_PlateSerial, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_LastFragment, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_SessionID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"Reference", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_Reference, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_Reference, (char *)"Reference", NULL},
	 {(char *)"RefrenceIssureType", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssureType, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssureType, (char *)"RefrenceIssureType", NULL},
	 {(char *)"RefrenceIssure", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_RefrenceIssure, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_RefrenceIssure, (char *)"RefrenceIssure", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_CustomerName, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_IdCardType, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_IdentifiedCardNo, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_CustType, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankAccount, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_BankPassWord, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_AccountID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_Password, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_Password, (char *)"Password", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_CurrencyID, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"TradeAmount", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_TradeAmount, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_TradeAmount, (char *)"TradeAmount", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_Digest, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcReqQueryTradeResultBySerialField_get_LongCustomerName, (setter)PyCThostFtdcReqQueryTradeResultBySerialField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqQueryTradeResultBySerialFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqQueryTradeResultBySerialField",	/* tp_name */
	sizeof(PyCThostFtdcReqQueryTradeResultBySerialField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqQueryTradeResultBySerialField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqQueryTradeResultBySerialField_repr,   /* tp_repr */
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
	"CThostFtdcReqQueryTradeResultBySerialField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqQueryTradeResultBySerialField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqQueryTradeResultBySerialField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqQueryTradeResultBySerialField_new,       /* tp_new */
};

int PyCThostFtdcReqQueryTradeResultBySerialFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqQueryTradeResultBySerialField  */
	if (PyType_Ready(&PyCThostFtdcReqQueryTradeResultBySerialFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqQueryTradeResultBySerialField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqQueryTradeResultBySerialFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqQueryTradeResultBySerialField", (PyObject *)&PyCThostFtdcReqQueryTradeResultBySerialFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqQueryTradeResultBySerialField to module");
        Py_DECREF(&PyCThostFtdcReqQueryTradeResultBySerialFieldType);
		return -1;
    }

    return 0;
}
