
#include "PyCThostFtdcRspFutureSignOutField.h"



static PyObject *PyCThostFtdcRspFutureSignOutField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspFutureSignOutField *self = (PyCThostFtdcRspFutureSignOutField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspFutureSignOutField_init(PyCThostFtdcRspFutureSignOutField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspFutureSignOutField_TradeCode = NULL;
	Py_ssize_t pRspFutureSignOutField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspFutureSignOutField_BankID = NULL;
	Py_ssize_t pRspFutureSignOutField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspFutureSignOutField_BankBranchID = NULL;
	Py_ssize_t pRspFutureSignOutField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspFutureSignOutField_BrokerID = NULL;
	Py_ssize_t pRspFutureSignOutField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspFutureSignOutField_BrokerBranchID = NULL;
	Py_ssize_t pRspFutureSignOutField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspFutureSignOutField_TradeDate = NULL;
	Py_ssize_t pRspFutureSignOutField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspFutureSignOutField_TradeTime = NULL;
	Py_ssize_t pRspFutureSignOutField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspFutureSignOutField_BankSerial = NULL;
	Py_ssize_t pRspFutureSignOutField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspFutureSignOutField_TradingDay = NULL;
	Py_ssize_t pRspFutureSignOutField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspFutureSignOutField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspFutureSignOutField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspFutureSignOutField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pRspFutureSignOutField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspFutureSignOutField_UserID = NULL;
	Py_ssize_t pRspFutureSignOutField_UserID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pRspFutureSignOutField_Digest = NULL;
	Py_ssize_t pRspFutureSignOutField_Digest_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspFutureSignOutField_CurrencyID = NULL;
	Py_ssize_t pRspFutureSignOutField_CurrencyID_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspFutureSignOutField_DeviceID = NULL;
	Py_ssize_t pRspFutureSignOutField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspFutureSignOutField_BrokerIDByBank = NULL;
	Py_ssize_t pRspFutureSignOutField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspFutureSignOutField_OperNo = NULL;
	Py_ssize_t pRspFutureSignOutField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspFutureSignOutField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspFutureSignOutField_TID = 0;

	//TThostFtdcErrorIDType int
	int pRspFutureSignOutField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pRspFutureSignOutField_ErrorMsg = NULL;
	Py_ssize_t pRspFutureSignOutField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#", (char **)kwlist
#endif

		, &pRspFutureSignOutField_TradeCode, &pRspFutureSignOutField_TradeCode_len
		, &pRspFutureSignOutField_BankID, &pRspFutureSignOutField_BankID_len
		, &pRspFutureSignOutField_BankBranchID, &pRspFutureSignOutField_BankBranchID_len
		, &pRspFutureSignOutField_BrokerID, &pRspFutureSignOutField_BrokerID_len
		, &pRspFutureSignOutField_BrokerBranchID, &pRspFutureSignOutField_BrokerBranchID_len
		, &pRspFutureSignOutField_TradeDate, &pRspFutureSignOutField_TradeDate_len
		, &pRspFutureSignOutField_TradeTime, &pRspFutureSignOutField_TradeTime_len
		, &pRspFutureSignOutField_BankSerial, &pRspFutureSignOutField_BankSerial_len
		, &pRspFutureSignOutField_TradingDay, &pRspFutureSignOutField_TradingDay_len
		, &pRspFutureSignOutField_PlateSerial
		, &pRspFutureSignOutField_LastFragment
		, &pRspFutureSignOutField_SessionID
		, &pRspFutureSignOutField_InstallID
		, &pRspFutureSignOutField_UserID, &pRspFutureSignOutField_UserID_len
		, &pRspFutureSignOutField_Digest, &pRspFutureSignOutField_Digest_len
		, &pRspFutureSignOutField_CurrencyID, &pRspFutureSignOutField_CurrencyID_len
		, &pRspFutureSignOutField_DeviceID, &pRspFutureSignOutField_DeviceID_len
		, &pRspFutureSignOutField_BrokerIDByBank, &pRspFutureSignOutField_BrokerIDByBank_len
		, &pRspFutureSignOutField_OperNo, &pRspFutureSignOutField_OperNo_len
		, &pRspFutureSignOutField_RequestID
		, &pRspFutureSignOutField_TID
		, &pRspFutureSignOutField_ErrorID
		, &pRspFutureSignOutField_ErrorMsg, &pRspFutureSignOutField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspFutureSignOutField_TradeCode != NULL) {
		if(pRspFutureSignOutField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspFutureSignOutField_TradeCode, sizeof(self->data.TradeCode) );
		pRspFutureSignOutField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspFutureSignOutField_BankID != NULL) {
		if(pRspFutureSignOutField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspFutureSignOutField_BankID, sizeof(self->data.BankID) );
		pRspFutureSignOutField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspFutureSignOutField_BankBranchID != NULL) {
		if(pRspFutureSignOutField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspFutureSignOutField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspFutureSignOutField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspFutureSignOutField_BrokerID != NULL) {
		if(pRspFutureSignOutField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspFutureSignOutField_BrokerID, sizeof(self->data.BrokerID) );
		pRspFutureSignOutField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspFutureSignOutField_BrokerBranchID != NULL) {
		if(pRspFutureSignOutField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspFutureSignOutField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspFutureSignOutField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspFutureSignOutField_TradeDate != NULL) {
		if(pRspFutureSignOutField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspFutureSignOutField_TradeDate, sizeof(self->data.TradeDate) );
		pRspFutureSignOutField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspFutureSignOutField_TradeTime != NULL) {
		if(pRspFutureSignOutField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspFutureSignOutField_TradeTime, sizeof(self->data.TradeTime) );
		pRspFutureSignOutField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspFutureSignOutField_BankSerial != NULL) {
		if(pRspFutureSignOutField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspFutureSignOutField_BankSerial, sizeof(self->data.BankSerial) );
		pRspFutureSignOutField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspFutureSignOutField_TradingDay != NULL) {
		if(pRspFutureSignOutField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspFutureSignOutField_TradingDay, sizeof(self->data.TradingDay) );
		pRspFutureSignOutField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspFutureSignOutField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspFutureSignOutField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspFutureSignOutField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspFutureSignOutField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pRspFutureSignOutField_UserID != NULL) {
		if(pRspFutureSignOutField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspFutureSignOutField_UserID, sizeof(self->data.UserID) );
		pRspFutureSignOutField_UserID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pRspFutureSignOutField_Digest != NULL) {
		if(pRspFutureSignOutField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspFutureSignOutField_Digest, sizeof(self->data.Digest) );
		pRspFutureSignOutField_Digest = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pRspFutureSignOutField_CurrencyID != NULL) {
		if(pRspFutureSignOutField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspFutureSignOutField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspFutureSignOutField_CurrencyID = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pRspFutureSignOutField_DeviceID != NULL) {
		if(pRspFutureSignOutField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspFutureSignOutField_DeviceID, sizeof(self->data.DeviceID) );
		pRspFutureSignOutField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspFutureSignOutField_BrokerIDByBank != NULL) {
		if(pRspFutureSignOutField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspFutureSignOutField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspFutureSignOutField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pRspFutureSignOutField_OperNo != NULL) {
		if(pRspFutureSignOutField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspFutureSignOutField_OperNo, sizeof(self->data.OperNo) );
		pRspFutureSignOutField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspFutureSignOutField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspFutureSignOutField_TID;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pRspFutureSignOutField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pRspFutureSignOutField_ErrorMsg != NULL) {
		if(pRspFutureSignOutField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pRspFutureSignOutField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pRspFutureSignOutField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pRspFutureSignOutField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspFutureSignOutField_dealloc(PyCThostFtdcRspFutureSignOutField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_repr(PyCThostFtdcRspFutureSignOutField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignOutField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradeCode(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_BankID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_BankBranchID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_BrokerID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_BrokerBranchID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradeDate(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradeTime(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_BankSerial(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_TradingDay(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_PlateSerial(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_LastFragment(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_SessionID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_InstallID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_UserID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_Digest(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_CurrencyID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_DeviceID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_BrokerIDByBank(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_OperNo(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_RequestID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_TID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_ErrorID(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignOutField_get_ErrorMsg(PyCThostFtdcRspFutureSignOutField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcRspFutureSignOutField_set_TradeCode(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_BankID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_BankBranchID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_BrokerID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_BrokerBranchID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_TradeDate(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_TradeTime(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_BankSerial(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_TradingDay(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_PlateSerial(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_LastFragment(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_SessionID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_InstallID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_UserID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_Digest(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_CurrencyID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_DeviceID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_BrokerIDByBank(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_OperNo(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_RequestID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_TID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_ErrorID(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignOutField_set_ErrorMsg(PyCThostFtdcRspFutureSignOutField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspFutureSignOutField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspFutureSignOutField_get_TradeCode, (setter)PyCThostFtdcRspFutureSignOutField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspFutureSignOutField_get_BankID, (setter)PyCThostFtdcRspFutureSignOutField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspFutureSignOutField_get_BankBranchID, (setter)PyCThostFtdcRspFutureSignOutField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspFutureSignOutField_get_BrokerID, (setter)PyCThostFtdcRspFutureSignOutField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspFutureSignOutField_get_BrokerBranchID, (setter)PyCThostFtdcRspFutureSignOutField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspFutureSignOutField_get_TradeDate, (setter)PyCThostFtdcRspFutureSignOutField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspFutureSignOutField_get_TradeTime, (setter)PyCThostFtdcRspFutureSignOutField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspFutureSignOutField_get_BankSerial, (setter)PyCThostFtdcRspFutureSignOutField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspFutureSignOutField_get_TradingDay, (setter)PyCThostFtdcRspFutureSignOutField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspFutureSignOutField_get_PlateSerial, (setter)PyCThostFtdcRspFutureSignOutField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspFutureSignOutField_get_LastFragment, (setter)PyCThostFtdcRspFutureSignOutField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspFutureSignOutField_get_SessionID, (setter)PyCThostFtdcRspFutureSignOutField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspFutureSignOutField_get_InstallID, (setter)PyCThostFtdcRspFutureSignOutField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspFutureSignOutField_get_UserID, (setter)PyCThostFtdcRspFutureSignOutField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspFutureSignOutField_get_Digest, (setter)PyCThostFtdcRspFutureSignOutField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspFutureSignOutField_get_CurrencyID, (setter)PyCThostFtdcRspFutureSignOutField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspFutureSignOutField_get_DeviceID, (setter)PyCThostFtdcRspFutureSignOutField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspFutureSignOutField_get_BrokerIDByBank, (setter)PyCThostFtdcRspFutureSignOutField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspFutureSignOutField_get_OperNo, (setter)PyCThostFtdcRspFutureSignOutField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspFutureSignOutField_get_RequestID, (setter)PyCThostFtdcRspFutureSignOutField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspFutureSignOutField_get_TID, (setter)PyCThostFtdcRspFutureSignOutField_set_TID, (char *)"TID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcRspFutureSignOutField_get_ErrorID, (setter)PyCThostFtdcRspFutureSignOutField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcRspFutureSignOutField_get_ErrorMsg, (setter)PyCThostFtdcRspFutureSignOutField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspFutureSignOutFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspFutureSignOutField",	/* tp_name */
	sizeof(PyCThostFtdcRspFutureSignOutField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspFutureSignOutField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspFutureSignOutField_repr,   /* tp_repr */
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
	"CThostFtdcRspFutureSignOutField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspFutureSignOutField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspFutureSignOutField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspFutureSignOutField_new,       /* tp_new */
};

int PyCThostFtdcRspFutureSignOutFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspFutureSignOutField  */
	if (PyType_Ready(&PyCThostFtdcRspFutureSignOutFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspFutureSignOutField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspFutureSignOutFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspFutureSignOutField", (PyObject *)&PyCThostFtdcRspFutureSignOutFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspFutureSignOutField to module");
        Py_DECREF(&PyCThostFtdcRspFutureSignOutFieldType);
		return -1;
    }

    return 0;
}
