
#include "PyCThostFtdcNotifyFutureSignOutField.h"



static PyObject *PyCThostFtdcNotifyFutureSignOutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifyFutureSignOutField *self = (PyCThostFtdcNotifyFutureSignOutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcNotifyFutureSignOutField_init(PyCThostFtdcNotifyFutureSignOutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pNotifyFutureSignOutField_TradeCode = NULL;
	Py_ssize_t pNotifyFutureSignOutField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pNotifyFutureSignOutField_BankID = NULL;
	Py_ssize_t pNotifyFutureSignOutField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pNotifyFutureSignOutField_BankBranchID = NULL;
	Py_ssize_t pNotifyFutureSignOutField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pNotifyFutureSignOutField_BrokerID = NULL;
	Py_ssize_t pNotifyFutureSignOutField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pNotifyFutureSignOutField_BrokerBranchID = NULL;
	Py_ssize_t pNotifyFutureSignOutField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyFutureSignOutField_TradeDate = NULL;
	Py_ssize_t pNotifyFutureSignOutField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pNotifyFutureSignOutField_TradeTime = NULL;
	Py_ssize_t pNotifyFutureSignOutField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pNotifyFutureSignOutField_BankSerial = NULL;
	Py_ssize_t pNotifyFutureSignOutField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyFutureSignOutField_TradingDay = NULL;
	Py_ssize_t pNotifyFutureSignOutField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pNotifyFutureSignOutField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pNotifyFutureSignOutField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pNotifyFutureSignOutField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pNotifyFutureSignOutField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pNotifyFutureSignOutField_UserID = NULL;
	Py_ssize_t pNotifyFutureSignOutField_UserID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pNotifyFutureSignOutField_Digest = NULL;
	Py_ssize_t pNotifyFutureSignOutField_Digest_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pNotifyFutureSignOutField_CurrencyID = NULL;
	Py_ssize_t pNotifyFutureSignOutField_CurrencyID_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pNotifyFutureSignOutField_DeviceID = NULL;
	Py_ssize_t pNotifyFutureSignOutField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pNotifyFutureSignOutField_BrokerIDByBank = NULL;
	Py_ssize_t pNotifyFutureSignOutField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pNotifyFutureSignOutField_OperNo = NULL;
	Py_ssize_t pNotifyFutureSignOutField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pNotifyFutureSignOutField_RequestID = 0;

	//TThostFtdcTIDType int
	int pNotifyFutureSignOutField_TID = 0;

	//TThostFtdcErrorIDType int
	int pNotifyFutureSignOutField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pNotifyFutureSignOutField_ErrorMsg = NULL;
	Py_ssize_t pNotifyFutureSignOutField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#", (char **)kwlist
#endif

		, &pNotifyFutureSignOutField_TradeCode, &pNotifyFutureSignOutField_TradeCode_len
		, &pNotifyFutureSignOutField_BankID, &pNotifyFutureSignOutField_BankID_len
		, &pNotifyFutureSignOutField_BankBranchID, &pNotifyFutureSignOutField_BankBranchID_len
		, &pNotifyFutureSignOutField_BrokerID, &pNotifyFutureSignOutField_BrokerID_len
		, &pNotifyFutureSignOutField_BrokerBranchID, &pNotifyFutureSignOutField_BrokerBranchID_len
		, &pNotifyFutureSignOutField_TradeDate, &pNotifyFutureSignOutField_TradeDate_len
		, &pNotifyFutureSignOutField_TradeTime, &pNotifyFutureSignOutField_TradeTime_len
		, &pNotifyFutureSignOutField_BankSerial, &pNotifyFutureSignOutField_BankSerial_len
		, &pNotifyFutureSignOutField_TradingDay, &pNotifyFutureSignOutField_TradingDay_len
		, &pNotifyFutureSignOutField_PlateSerial
		, &pNotifyFutureSignOutField_LastFragment
		, &pNotifyFutureSignOutField_SessionID
		, &pNotifyFutureSignOutField_InstallID
		, &pNotifyFutureSignOutField_UserID, &pNotifyFutureSignOutField_UserID_len
		, &pNotifyFutureSignOutField_Digest, &pNotifyFutureSignOutField_Digest_len
		, &pNotifyFutureSignOutField_CurrencyID, &pNotifyFutureSignOutField_CurrencyID_len
		, &pNotifyFutureSignOutField_DeviceID, &pNotifyFutureSignOutField_DeviceID_len
		, &pNotifyFutureSignOutField_BrokerIDByBank, &pNotifyFutureSignOutField_BrokerIDByBank_len
		, &pNotifyFutureSignOutField_OperNo, &pNotifyFutureSignOutField_OperNo_len
		, &pNotifyFutureSignOutField_RequestID
		, &pNotifyFutureSignOutField_TID
		, &pNotifyFutureSignOutField_ErrorID
		, &pNotifyFutureSignOutField_ErrorMsg, &pNotifyFutureSignOutField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pNotifyFutureSignOutField_TradeCode != NULL) {
		if(pNotifyFutureSignOutField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pNotifyFutureSignOutField_TradeCode, sizeof(self->data.TradeCode) );
		pNotifyFutureSignOutField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pNotifyFutureSignOutField_BankID != NULL) {
		if(pNotifyFutureSignOutField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pNotifyFutureSignOutField_BankID, sizeof(self->data.BankID) );
		pNotifyFutureSignOutField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pNotifyFutureSignOutField_BankBranchID != NULL) {
		if(pNotifyFutureSignOutField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pNotifyFutureSignOutField_BankBranchID, sizeof(self->data.BankBranchID) );
		pNotifyFutureSignOutField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pNotifyFutureSignOutField_BrokerID != NULL) {
		if(pNotifyFutureSignOutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pNotifyFutureSignOutField_BrokerID, sizeof(self->data.BrokerID) );
		pNotifyFutureSignOutField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pNotifyFutureSignOutField_BrokerBranchID != NULL) {
		if(pNotifyFutureSignOutField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pNotifyFutureSignOutField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pNotifyFutureSignOutField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyFutureSignOutField_TradeDate != NULL) {
		if(pNotifyFutureSignOutField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pNotifyFutureSignOutField_TradeDate, sizeof(self->data.TradeDate) );
		pNotifyFutureSignOutField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pNotifyFutureSignOutField_TradeTime != NULL) {
		if(pNotifyFutureSignOutField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pNotifyFutureSignOutField_TradeTime, sizeof(self->data.TradeTime) );
		pNotifyFutureSignOutField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pNotifyFutureSignOutField_BankSerial != NULL) {
		if(pNotifyFutureSignOutField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pNotifyFutureSignOutField_BankSerial, sizeof(self->data.BankSerial) );
		pNotifyFutureSignOutField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyFutureSignOutField_TradingDay != NULL) {
		if(pNotifyFutureSignOutField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pNotifyFutureSignOutField_TradingDay, sizeof(self->data.TradingDay) );
		pNotifyFutureSignOutField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pNotifyFutureSignOutField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pNotifyFutureSignOutField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pNotifyFutureSignOutField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pNotifyFutureSignOutField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pNotifyFutureSignOutField_UserID != NULL) {
		if(pNotifyFutureSignOutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pNotifyFutureSignOutField_UserID, sizeof(self->data.UserID) );
		pNotifyFutureSignOutField_UserID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pNotifyFutureSignOutField_Digest != NULL) {
		if(pNotifyFutureSignOutField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pNotifyFutureSignOutField_Digest, sizeof(self->data.Digest) );
		pNotifyFutureSignOutField_Digest = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pNotifyFutureSignOutField_CurrencyID != NULL) {
		if(pNotifyFutureSignOutField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pNotifyFutureSignOutField_CurrencyID, sizeof(self->data.CurrencyID) );
		pNotifyFutureSignOutField_CurrencyID = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pNotifyFutureSignOutField_DeviceID != NULL) {
		if(pNotifyFutureSignOutField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pNotifyFutureSignOutField_DeviceID, sizeof(self->data.DeviceID) );
		pNotifyFutureSignOutField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pNotifyFutureSignOutField_BrokerIDByBank != NULL) {
		if(pNotifyFutureSignOutField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pNotifyFutureSignOutField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pNotifyFutureSignOutField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pNotifyFutureSignOutField_OperNo != NULL) {
		if(pNotifyFutureSignOutField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pNotifyFutureSignOutField_OperNo, sizeof(self->data.OperNo) );
		pNotifyFutureSignOutField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pNotifyFutureSignOutField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pNotifyFutureSignOutField_TID;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pNotifyFutureSignOutField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pNotifyFutureSignOutField_ErrorMsg != NULL) {
		if(pNotifyFutureSignOutField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pNotifyFutureSignOutField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pNotifyFutureSignOutField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pNotifyFutureSignOutField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcNotifyFutureSignOutField_dealloc(PyCThostFtdcNotifyFutureSignOutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_repr(PyCThostFtdcNotifyFutureSignOutField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyFutureSignOutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradeCode(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BankID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BankBranchID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BrokerID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BrokerBranchID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradeDate(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradeTime(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BankSerial(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TradingDay(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_PlateSerial(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_LastFragment(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_SessionID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_InstallID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_UserID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_Digest(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_CurrencyID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_DeviceID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_BrokerIDByBank(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_OperNo(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_RequestID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_TID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_ErrorID(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignOutField_get_ErrorMsg(PyCThostFtdcNotifyFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcNotifyFutureSignOutField_set_TradeCode(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_BankID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_BankBranchID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_BrokerID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_BrokerBranchID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_TradeDate(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_TradeTime(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_BankSerial(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_TradingDay(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_PlateSerial(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_LastFragment(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_SessionID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_InstallID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_UserID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_Digest(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_CurrencyID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_DeviceID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_BrokerIDByBank(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_OperNo(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_RequestID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_TID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_ErrorID(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignOutField_set_ErrorMsg(PyCThostFtdcNotifyFutureSignOutField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcNotifyFutureSignOutField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradeCode, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BankID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BankBranchID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BrokerID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BrokerBranchID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradeDate, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradeTime, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BankSerial, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TradingDay, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcNotifyFutureSignOutField_get_PlateSerial, (setter)PyCThostFtdcNotifyFutureSignOutField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcNotifyFutureSignOutField_get_LastFragment, (setter)PyCThostFtdcNotifyFutureSignOutField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_SessionID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_InstallID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_UserID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcNotifyFutureSignOutField_get_Digest, (setter)PyCThostFtdcNotifyFutureSignOutField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_CurrencyID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_DeviceID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifyFutureSignOutField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifyFutureSignOutField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcNotifyFutureSignOutField_get_OperNo, (setter)PyCThostFtdcNotifyFutureSignOutField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_RequestID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_TID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_TID, (char *)"TID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcNotifyFutureSignOutField_get_ErrorID, (setter)PyCThostFtdcNotifyFutureSignOutField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifyFutureSignOutField_get_ErrorMsg, (setter)PyCThostFtdcNotifyFutureSignOutField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifyFutureSignOutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifyFutureSignOutField",	/* tp_name */
	sizeof(PyCThostFtdcNotifyFutureSignOutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifyFutureSignOutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifyFutureSignOutField_repr,   /* tp_repr */
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
	"CThostFtdcNotifyFutureSignOutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifyFutureSignOutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifyFutureSignOutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifyFutureSignOutField_new,       /* tp_new */
};

int PyCThostFtdcNotifyFutureSignOutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifyFutureSignOutField  */
	if (PyType_Ready(&PyCThostFtdcNotifyFutureSignOutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifyFutureSignOutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifyFutureSignOutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifyFutureSignOutField", (PyObject *)&PyCThostFtdcNotifyFutureSignOutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyFutureSignOutField to module");
        Py_DECREF(&PyCThostFtdcNotifyFutureSignOutFieldType);
		return -1;
    }

    return 0;
}
