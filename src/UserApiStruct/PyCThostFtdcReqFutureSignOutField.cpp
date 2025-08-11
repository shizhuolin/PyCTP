
#include "PyCThostFtdcReqFutureSignOutField.h"



static PyObject *PyCThostFtdcReqFutureSignOutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqFutureSignOutField *self = (PyCThostFtdcReqFutureSignOutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqFutureSignOutField_init(PyCThostFtdcReqFutureSignOutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqFutureSignOutField_TradeCode = NULL;
	Py_ssize_t pReqFutureSignOutField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqFutureSignOutField_BankID = NULL;
	Py_ssize_t pReqFutureSignOutField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqFutureSignOutField_BankBranchID = NULL;
	Py_ssize_t pReqFutureSignOutField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqFutureSignOutField_BrokerID = NULL;
	Py_ssize_t pReqFutureSignOutField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqFutureSignOutField_BrokerBranchID = NULL;
	Py_ssize_t pReqFutureSignOutField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqFutureSignOutField_TradeDate = NULL;
	Py_ssize_t pReqFutureSignOutField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqFutureSignOutField_TradeTime = NULL;
	Py_ssize_t pReqFutureSignOutField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqFutureSignOutField_BankSerial = NULL;
	Py_ssize_t pReqFutureSignOutField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqFutureSignOutField_TradingDay = NULL;
	Py_ssize_t pReqFutureSignOutField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqFutureSignOutField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqFutureSignOutField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqFutureSignOutField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pReqFutureSignOutField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqFutureSignOutField_UserID = NULL;
	Py_ssize_t pReqFutureSignOutField_UserID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqFutureSignOutField_Digest = NULL;
	Py_ssize_t pReqFutureSignOutField_Digest_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pReqFutureSignOutField_CurrencyID = NULL;
	Py_ssize_t pReqFutureSignOutField_CurrencyID_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqFutureSignOutField_DeviceID = NULL;
	Py_ssize_t pReqFutureSignOutField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqFutureSignOutField_BrokerIDByBank = NULL;
	Py_ssize_t pReqFutureSignOutField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqFutureSignOutField_OperNo = NULL;
	Py_ssize_t pReqFutureSignOutField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pReqFutureSignOutField_RequestID = 0;

	//TThostFtdcTIDType int
	int pReqFutureSignOutField_TID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#ii", (char **)kwlist
#endif

		, &pReqFutureSignOutField_TradeCode, &pReqFutureSignOutField_TradeCode_len
		, &pReqFutureSignOutField_BankID, &pReqFutureSignOutField_BankID_len
		, &pReqFutureSignOutField_BankBranchID, &pReqFutureSignOutField_BankBranchID_len
		, &pReqFutureSignOutField_BrokerID, &pReqFutureSignOutField_BrokerID_len
		, &pReqFutureSignOutField_BrokerBranchID, &pReqFutureSignOutField_BrokerBranchID_len
		, &pReqFutureSignOutField_TradeDate, &pReqFutureSignOutField_TradeDate_len
		, &pReqFutureSignOutField_TradeTime, &pReqFutureSignOutField_TradeTime_len
		, &pReqFutureSignOutField_BankSerial, &pReqFutureSignOutField_BankSerial_len
		, &pReqFutureSignOutField_TradingDay, &pReqFutureSignOutField_TradingDay_len
		, &pReqFutureSignOutField_PlateSerial
		, &pReqFutureSignOutField_LastFragment
		, &pReqFutureSignOutField_SessionID
		, &pReqFutureSignOutField_InstallID
		, &pReqFutureSignOutField_UserID, &pReqFutureSignOutField_UserID_len
		, &pReqFutureSignOutField_Digest, &pReqFutureSignOutField_Digest_len
		, &pReqFutureSignOutField_CurrencyID, &pReqFutureSignOutField_CurrencyID_len
		, &pReqFutureSignOutField_DeviceID, &pReqFutureSignOutField_DeviceID_len
		, &pReqFutureSignOutField_BrokerIDByBank, &pReqFutureSignOutField_BrokerIDByBank_len
		, &pReqFutureSignOutField_OperNo, &pReqFutureSignOutField_OperNo_len
		, &pReqFutureSignOutField_RequestID
		, &pReqFutureSignOutField_TID


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqFutureSignOutField_TradeCode != NULL) {
		if(pReqFutureSignOutField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqFutureSignOutField_TradeCode, sizeof(self->data.TradeCode) );
		pReqFutureSignOutField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqFutureSignOutField_BankID != NULL) {
		if(pReqFutureSignOutField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqFutureSignOutField_BankID, sizeof(self->data.BankID) );
		pReqFutureSignOutField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqFutureSignOutField_BankBranchID != NULL) {
		if(pReqFutureSignOutField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqFutureSignOutField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqFutureSignOutField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqFutureSignOutField_BrokerID != NULL) {
		if(pReqFutureSignOutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqFutureSignOutField_BrokerID, sizeof(self->data.BrokerID) );
		pReqFutureSignOutField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqFutureSignOutField_BrokerBranchID != NULL) {
		if(pReqFutureSignOutField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqFutureSignOutField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqFutureSignOutField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqFutureSignOutField_TradeDate != NULL) {
		if(pReqFutureSignOutField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqFutureSignOutField_TradeDate, sizeof(self->data.TradeDate) );
		pReqFutureSignOutField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqFutureSignOutField_TradeTime != NULL) {
		if(pReqFutureSignOutField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqFutureSignOutField_TradeTime, sizeof(self->data.TradeTime) );
		pReqFutureSignOutField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqFutureSignOutField_BankSerial != NULL) {
		if(pReqFutureSignOutField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqFutureSignOutField_BankSerial, sizeof(self->data.BankSerial) );
		pReqFutureSignOutField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqFutureSignOutField_TradingDay != NULL) {
		if(pReqFutureSignOutField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqFutureSignOutField_TradingDay, sizeof(self->data.TradingDay) );
		pReqFutureSignOutField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqFutureSignOutField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqFutureSignOutField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqFutureSignOutField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqFutureSignOutField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pReqFutureSignOutField_UserID != NULL) {
		if(pReqFutureSignOutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqFutureSignOutField_UserID, sizeof(self->data.UserID) );
		pReqFutureSignOutField_UserID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pReqFutureSignOutField_Digest != NULL) {
		if(pReqFutureSignOutField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqFutureSignOutField_Digest, sizeof(self->data.Digest) );
		pReqFutureSignOutField_Digest = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pReqFutureSignOutField_CurrencyID != NULL) {
		if(pReqFutureSignOutField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pReqFutureSignOutField_CurrencyID, sizeof(self->data.CurrencyID) );
		pReqFutureSignOutField_CurrencyID = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pReqFutureSignOutField_DeviceID != NULL) {
		if(pReqFutureSignOutField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqFutureSignOutField_DeviceID, sizeof(self->data.DeviceID) );
		pReqFutureSignOutField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqFutureSignOutField_BrokerIDByBank != NULL) {
		if(pReqFutureSignOutField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqFutureSignOutField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqFutureSignOutField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pReqFutureSignOutField_OperNo != NULL) {
		if(pReqFutureSignOutField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqFutureSignOutField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqFutureSignOutField_OperNo, sizeof(self->data.OperNo) );
		pReqFutureSignOutField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pReqFutureSignOutField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pReqFutureSignOutField_TID;



    return 0;
}

static void PyCThostFtdcReqFutureSignOutField_dealloc(PyCThostFtdcReqFutureSignOutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_repr(PyCThostFtdcReqFutureSignOutField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
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
		, "InstallID", self->data.InstallID
		, "UserID", self->data.UserID 
		, "Digest", self->data.Digest 
		, "CurrencyID", self->data.CurrencyID 
		, "DeviceID", self->data.DeviceID 
		, "BrokerIDByBank", self->data.BrokerIDByBank 
		, "OperNo", self->data.OperNo 
		, "RequestID", self->data.RequestID
		, "TID", self->data.TID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqFutureSignOutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradeCode(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_BankID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_BankBranchID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_BrokerID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_BrokerBranchID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradeDate(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradeTime(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_BankSerial(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_TradingDay(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_PlateSerial(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_LastFragment(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_SessionID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_InstallID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_UserID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_Digest(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_CurrencyID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_DeviceID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_BrokerIDByBank(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_OperNo(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_RequestID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcReqFutureSignOutField_get_TID(PyCThostFtdcReqFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static int PyCThostFtdcReqFutureSignOutField_set_TradeCode(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_BankID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_BankBranchID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_BrokerID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_BrokerBranchID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_TradeDate(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_TradeTime(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_BankSerial(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_TradingDay(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_PlateSerial(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_LastFragment(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_SessionID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_InstallID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_UserID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_Digest(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_CurrencyID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_DeviceID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_BrokerIDByBank(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_OperNo(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_RequestID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqFutureSignOutField_set_TID(PyCThostFtdcReqFutureSignOutField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqFutureSignOutField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqFutureSignOutField_get_TradeCode, (setter)PyCThostFtdcReqFutureSignOutField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqFutureSignOutField_get_BankID, (setter)PyCThostFtdcReqFutureSignOutField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqFutureSignOutField_get_BankBranchID, (setter)PyCThostFtdcReqFutureSignOutField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqFutureSignOutField_get_BrokerID, (setter)PyCThostFtdcReqFutureSignOutField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqFutureSignOutField_get_BrokerBranchID, (setter)PyCThostFtdcReqFutureSignOutField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqFutureSignOutField_get_TradeDate, (setter)PyCThostFtdcReqFutureSignOutField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqFutureSignOutField_get_TradeTime, (setter)PyCThostFtdcReqFutureSignOutField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqFutureSignOutField_get_BankSerial, (setter)PyCThostFtdcReqFutureSignOutField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqFutureSignOutField_get_TradingDay, (setter)PyCThostFtdcReqFutureSignOutField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqFutureSignOutField_get_PlateSerial, (setter)PyCThostFtdcReqFutureSignOutField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqFutureSignOutField_get_LastFragment, (setter)PyCThostFtdcReqFutureSignOutField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqFutureSignOutField_get_SessionID, (setter)PyCThostFtdcReqFutureSignOutField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqFutureSignOutField_get_InstallID, (setter)PyCThostFtdcReqFutureSignOutField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqFutureSignOutField_get_UserID, (setter)PyCThostFtdcReqFutureSignOutField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqFutureSignOutField_get_Digest, (setter)PyCThostFtdcReqFutureSignOutField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcReqFutureSignOutField_get_CurrencyID, (setter)PyCThostFtdcReqFutureSignOutField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqFutureSignOutField_get_DeviceID, (setter)PyCThostFtdcReqFutureSignOutField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqFutureSignOutField_get_BrokerIDByBank, (setter)PyCThostFtdcReqFutureSignOutField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqFutureSignOutField_get_OperNo, (setter)PyCThostFtdcReqFutureSignOutField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcReqFutureSignOutField_get_RequestID, (setter)PyCThostFtdcReqFutureSignOutField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqFutureSignOutField_get_TID, (setter)PyCThostFtdcReqFutureSignOutField_set_TID, (char *)"TID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqFutureSignOutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqFutureSignOutField",	/* tp_name */
	sizeof(PyCThostFtdcReqFutureSignOutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqFutureSignOutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqFutureSignOutField_repr,   /* tp_repr */
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
	"CThostFtdcReqFutureSignOutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqFutureSignOutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqFutureSignOutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqFutureSignOutField_new,       /* tp_new */
};

int PyCThostFtdcReqFutureSignOutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqFutureSignOutField  */
	if (PyType_Ready(&PyCThostFtdcReqFutureSignOutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqFutureSignOutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqFutureSignOutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqFutureSignOutField", (PyObject *)&PyCThostFtdcReqFutureSignOutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqFutureSignOutField to module");
        Py_DECREF(&PyCThostFtdcReqFutureSignOutFieldType);
		return -1;
    }

    return 0;
}
