
#include "PyCThostFtdcVerifyFuturePasswordField.h"



static PyObject *PyCThostFtdcVerifyFuturePasswordField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcVerifyFuturePasswordField *self = (PyCThostFtdcVerifyFuturePasswordField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcVerifyFuturePasswordField_init(PyCThostFtdcVerifyFuturePasswordField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "AccountID", "Password", "BankAccount", "BankPassWord", "InstallID", "TID", "CurrencyID",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pVerifyFuturePasswordField_TradeCode = NULL;
	Py_ssize_t pVerifyFuturePasswordField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pVerifyFuturePasswordField_BankID = NULL;
	Py_ssize_t pVerifyFuturePasswordField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pVerifyFuturePasswordField_BankBranchID = NULL;
	Py_ssize_t pVerifyFuturePasswordField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pVerifyFuturePasswordField_BrokerID = NULL;
	Py_ssize_t pVerifyFuturePasswordField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pVerifyFuturePasswordField_BrokerBranchID = NULL;
	Py_ssize_t pVerifyFuturePasswordField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pVerifyFuturePasswordField_TradeDate = NULL;
	Py_ssize_t pVerifyFuturePasswordField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pVerifyFuturePasswordField_TradeTime = NULL;
	Py_ssize_t pVerifyFuturePasswordField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pVerifyFuturePasswordField_BankSerial = NULL;
	Py_ssize_t pVerifyFuturePasswordField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pVerifyFuturePasswordField_TradingDay = NULL;
	Py_ssize_t pVerifyFuturePasswordField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pVerifyFuturePasswordField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pVerifyFuturePasswordField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pVerifyFuturePasswordField_SessionID = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pVerifyFuturePasswordField_AccountID = NULL;
	Py_ssize_t pVerifyFuturePasswordField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pVerifyFuturePasswordField_Password = NULL;
	Py_ssize_t pVerifyFuturePasswordField_Password_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pVerifyFuturePasswordField_BankAccount = NULL;
	Py_ssize_t pVerifyFuturePasswordField_BankAccount_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pVerifyFuturePasswordField_BankPassWord = NULL;
	Py_ssize_t pVerifyFuturePasswordField_BankPassWord_len = 0;

	//TThostFtdcInstallIDType int
	int pVerifyFuturePasswordField_InstallID = 0;

	//TThostFtdcTIDType int
	int pVerifyFuturePasswordField_TID = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pVerifyFuturePasswordField_CurrencyID = NULL;
	Py_ssize_t pVerifyFuturePasswordField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciy#y#y#y#iiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icis#s#s#s#iis#", (char **)kwlist
#endif

		, &pVerifyFuturePasswordField_TradeCode, &pVerifyFuturePasswordField_TradeCode_len
		, &pVerifyFuturePasswordField_BankID, &pVerifyFuturePasswordField_BankID_len
		, &pVerifyFuturePasswordField_BankBranchID, &pVerifyFuturePasswordField_BankBranchID_len
		, &pVerifyFuturePasswordField_BrokerID, &pVerifyFuturePasswordField_BrokerID_len
		, &pVerifyFuturePasswordField_BrokerBranchID, &pVerifyFuturePasswordField_BrokerBranchID_len
		, &pVerifyFuturePasswordField_TradeDate, &pVerifyFuturePasswordField_TradeDate_len
		, &pVerifyFuturePasswordField_TradeTime, &pVerifyFuturePasswordField_TradeTime_len
		, &pVerifyFuturePasswordField_BankSerial, &pVerifyFuturePasswordField_BankSerial_len
		, &pVerifyFuturePasswordField_TradingDay, &pVerifyFuturePasswordField_TradingDay_len
		, &pVerifyFuturePasswordField_PlateSerial
		, &pVerifyFuturePasswordField_LastFragment
		, &pVerifyFuturePasswordField_SessionID
		, &pVerifyFuturePasswordField_AccountID, &pVerifyFuturePasswordField_AccountID_len
		, &pVerifyFuturePasswordField_Password, &pVerifyFuturePasswordField_Password_len
		, &pVerifyFuturePasswordField_BankAccount, &pVerifyFuturePasswordField_BankAccount_len
		, &pVerifyFuturePasswordField_BankPassWord, &pVerifyFuturePasswordField_BankPassWord_len
		, &pVerifyFuturePasswordField_InstallID
		, &pVerifyFuturePasswordField_TID
		, &pVerifyFuturePasswordField_CurrencyID, &pVerifyFuturePasswordField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pVerifyFuturePasswordField_TradeCode != NULL) {
		if(pVerifyFuturePasswordField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pVerifyFuturePasswordField_TradeCode, sizeof(self->data.TradeCode) );
		pVerifyFuturePasswordField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pVerifyFuturePasswordField_BankID != NULL) {
		if(pVerifyFuturePasswordField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pVerifyFuturePasswordField_BankID, sizeof(self->data.BankID) );
		pVerifyFuturePasswordField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pVerifyFuturePasswordField_BankBranchID != NULL) {
		if(pVerifyFuturePasswordField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pVerifyFuturePasswordField_BankBranchID, sizeof(self->data.BankBranchID) );
		pVerifyFuturePasswordField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pVerifyFuturePasswordField_BrokerID != NULL) {
		if(pVerifyFuturePasswordField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pVerifyFuturePasswordField_BrokerID, sizeof(self->data.BrokerID) );
		pVerifyFuturePasswordField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pVerifyFuturePasswordField_BrokerBranchID != NULL) {
		if(pVerifyFuturePasswordField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pVerifyFuturePasswordField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pVerifyFuturePasswordField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pVerifyFuturePasswordField_TradeDate != NULL) {
		if(pVerifyFuturePasswordField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pVerifyFuturePasswordField_TradeDate, sizeof(self->data.TradeDate) );
		pVerifyFuturePasswordField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pVerifyFuturePasswordField_TradeTime != NULL) {
		if(pVerifyFuturePasswordField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pVerifyFuturePasswordField_TradeTime, sizeof(self->data.TradeTime) );
		pVerifyFuturePasswordField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pVerifyFuturePasswordField_BankSerial != NULL) {
		if(pVerifyFuturePasswordField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pVerifyFuturePasswordField_BankSerial, sizeof(self->data.BankSerial) );
		pVerifyFuturePasswordField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pVerifyFuturePasswordField_TradingDay != NULL) {
		if(pVerifyFuturePasswordField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pVerifyFuturePasswordField_TradingDay, sizeof(self->data.TradingDay) );
		pVerifyFuturePasswordField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pVerifyFuturePasswordField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pVerifyFuturePasswordField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pVerifyFuturePasswordField_SessionID;

	//TThostFtdcAccountIDType char[13]
	if(pVerifyFuturePasswordField_AccountID != NULL) {
		if(pVerifyFuturePasswordField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pVerifyFuturePasswordField_AccountID, sizeof(self->data.AccountID) );
		pVerifyFuturePasswordField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pVerifyFuturePasswordField_Password != NULL) {
		if(pVerifyFuturePasswordField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pVerifyFuturePasswordField_Password, sizeof(self->data.Password) );
		pVerifyFuturePasswordField_Password = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pVerifyFuturePasswordField_BankAccount != NULL) {
		if(pVerifyFuturePasswordField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pVerifyFuturePasswordField_BankAccount, sizeof(self->data.BankAccount) );
		pVerifyFuturePasswordField_BankAccount = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pVerifyFuturePasswordField_BankPassWord != NULL) {
		if(pVerifyFuturePasswordField_BankPassWord_len > (Py_ssize_t)sizeof(self->data.BankPassWord)) {
			PyErr_Format(PyExc_ValueError, "BankPassWord too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_BankPassWord_len, (Py_ssize_t)sizeof(self->data.BankPassWord));
			return -1;
		}
		strncpy(self->data.BankPassWord, pVerifyFuturePasswordField_BankPassWord, sizeof(self->data.BankPassWord) );
		pVerifyFuturePasswordField_BankPassWord = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pVerifyFuturePasswordField_InstallID;

	//TThostFtdcTIDType int
	self->data.TID = pVerifyFuturePasswordField_TID;

	//TThostFtdcCurrencyIDType char[4]
	if(pVerifyFuturePasswordField_CurrencyID != NULL) {
		if(pVerifyFuturePasswordField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pVerifyFuturePasswordField_CurrencyID, sizeof(self->data.CurrencyID) );
		pVerifyFuturePasswordField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcVerifyFuturePasswordField_dealloc(PyCThostFtdcVerifyFuturePasswordField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_repr(PyCThostFtdcVerifyFuturePasswordField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:y,s:y,s:y,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:s,s:s,s:s,s:i,s:i,s:s}"
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
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "BankAccount", self->data.BankAccount 
		, "BankPassWord", self->data.BankPassWord 
		, "InstallID", self->data.InstallID
		, "TID", self->data.TID
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradeCode(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankBranchID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BrokerID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BrokerBranchID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradeDate(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradeTime(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankSerial(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TradingDay(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_PlateSerial(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_LastFragment(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_SessionID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_AccountID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_Password(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankAccount(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_BankPassWord(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.BankPassWord);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_InstallID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_TID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcVerifyFuturePasswordField_get_CurrencyID(PyCThostFtdcVerifyFuturePasswordField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcVerifyFuturePasswordField_set_TradeCode(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_BankID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_BankBranchID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_BrokerID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_BrokerBranchID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_TradeDate(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_TradeTime(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_BankSerial(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_TradingDay(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_PlateSerial(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_LastFragment(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_SessionID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_AccountID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_Password(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_BankAccount(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_BankPassWord(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_InstallID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_TID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordField_set_CurrencyID(PyCThostFtdcVerifyFuturePasswordField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcVerifyFuturePasswordField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradeCode, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankBranchID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BrokerID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BrokerBranchID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradeDate, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradeTime, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankSerial, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TradingDay, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcVerifyFuturePasswordField_get_PlateSerial, (setter)PyCThostFtdcVerifyFuturePasswordField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcVerifyFuturePasswordField_get_LastFragment, (setter)PyCThostFtdcVerifyFuturePasswordField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_SessionID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_AccountID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcVerifyFuturePasswordField_get_Password, (setter)PyCThostFtdcVerifyFuturePasswordField_set_Password, (char *)"Password", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankAccount, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BankPassWord", (getter)PyCThostFtdcVerifyFuturePasswordField_get_BankPassWord, (setter)PyCThostFtdcVerifyFuturePasswordField_set_BankPassWord, (char *)"BankPassWord", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_InstallID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_TID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_TID, (char *)"TID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcVerifyFuturePasswordField_get_CurrencyID, (setter)PyCThostFtdcVerifyFuturePasswordField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcVerifyFuturePasswordFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcVerifyFuturePasswordField",	/* tp_name */
	sizeof(PyCThostFtdcVerifyFuturePasswordField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcVerifyFuturePasswordField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcVerifyFuturePasswordField_repr,   /* tp_repr */
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
	"CThostFtdcVerifyFuturePasswordField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcVerifyFuturePasswordField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcVerifyFuturePasswordField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcVerifyFuturePasswordField_new,       /* tp_new */
};

int PyCThostFtdcVerifyFuturePasswordFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcVerifyFuturePasswordField  */
	if (PyType_Ready(&PyCThostFtdcVerifyFuturePasswordFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcVerifyFuturePasswordField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcVerifyFuturePasswordFieldType);
    if( PyModule_AddObject(module, "CThostFtdcVerifyFuturePasswordField", (PyObject *)&PyCThostFtdcVerifyFuturePasswordFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyFuturePasswordField to module");
        Py_DECREF(&PyCThostFtdcVerifyFuturePasswordFieldType);
		return -1;
    }

    return 0;
}
