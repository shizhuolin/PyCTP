
#include "PyCThostFtdcNotifyFutureSignInField.h"



static PyObject *PyCThostFtdcNotifyFutureSignInField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifyFutureSignInField *self = (PyCThostFtdcNotifyFutureSignInField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcNotifyFutureSignInField_init(PyCThostFtdcNotifyFutureSignInField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", "PinKey", "MacKey",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pNotifyFutureSignInField_TradeCode = NULL;
	Py_ssize_t pNotifyFutureSignInField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pNotifyFutureSignInField_BankID = NULL;
	Py_ssize_t pNotifyFutureSignInField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pNotifyFutureSignInField_BankBranchID = NULL;
	Py_ssize_t pNotifyFutureSignInField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pNotifyFutureSignInField_BrokerID = NULL;
	Py_ssize_t pNotifyFutureSignInField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pNotifyFutureSignInField_BrokerBranchID = NULL;
	Py_ssize_t pNotifyFutureSignInField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyFutureSignInField_TradeDate = NULL;
	Py_ssize_t pNotifyFutureSignInField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pNotifyFutureSignInField_TradeTime = NULL;
	Py_ssize_t pNotifyFutureSignInField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pNotifyFutureSignInField_BankSerial = NULL;
	Py_ssize_t pNotifyFutureSignInField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifyFutureSignInField_TradingDay = NULL;
	Py_ssize_t pNotifyFutureSignInField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pNotifyFutureSignInField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pNotifyFutureSignInField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pNotifyFutureSignInField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pNotifyFutureSignInField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pNotifyFutureSignInField_UserID = NULL;
	Py_ssize_t pNotifyFutureSignInField_UserID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pNotifyFutureSignInField_Digest = NULL;
	Py_ssize_t pNotifyFutureSignInField_Digest_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pNotifyFutureSignInField_CurrencyID = NULL;
	Py_ssize_t pNotifyFutureSignInField_CurrencyID_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pNotifyFutureSignInField_DeviceID = NULL;
	Py_ssize_t pNotifyFutureSignInField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pNotifyFutureSignInField_BrokerIDByBank = NULL;
	Py_ssize_t pNotifyFutureSignInField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pNotifyFutureSignInField_OperNo = NULL;
	Py_ssize_t pNotifyFutureSignInField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pNotifyFutureSignInField_RequestID = 0;

	//TThostFtdcTIDType int
	int pNotifyFutureSignInField_TID = 0;

	//TThostFtdcErrorIDType int
	int pNotifyFutureSignInField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pNotifyFutureSignInField_ErrorMsg = NULL;
	Py_ssize_t pNotifyFutureSignInField_ErrorMsg_len = 0;

	//TThostFtdcPasswordKeyType char[129]
	const char *pNotifyFutureSignInField_PinKey = NULL;
	Py_ssize_t pNotifyFutureSignInField_PinKey_len = 0;

	//TThostFtdcPasswordKeyType char[129]
	const char *pNotifyFutureSignInField_MacKey = NULL;
	Py_ssize_t pNotifyFutureSignInField_MacKey_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#s#s#", (char **)kwlist
#endif

		, &pNotifyFutureSignInField_TradeCode, &pNotifyFutureSignInField_TradeCode_len
		, &pNotifyFutureSignInField_BankID, &pNotifyFutureSignInField_BankID_len
		, &pNotifyFutureSignInField_BankBranchID, &pNotifyFutureSignInField_BankBranchID_len
		, &pNotifyFutureSignInField_BrokerID, &pNotifyFutureSignInField_BrokerID_len
		, &pNotifyFutureSignInField_BrokerBranchID, &pNotifyFutureSignInField_BrokerBranchID_len
		, &pNotifyFutureSignInField_TradeDate, &pNotifyFutureSignInField_TradeDate_len
		, &pNotifyFutureSignInField_TradeTime, &pNotifyFutureSignInField_TradeTime_len
		, &pNotifyFutureSignInField_BankSerial, &pNotifyFutureSignInField_BankSerial_len
		, &pNotifyFutureSignInField_TradingDay, &pNotifyFutureSignInField_TradingDay_len
		, &pNotifyFutureSignInField_PlateSerial
		, &pNotifyFutureSignInField_LastFragment
		, &pNotifyFutureSignInField_SessionID
		, &pNotifyFutureSignInField_InstallID
		, &pNotifyFutureSignInField_UserID, &pNotifyFutureSignInField_UserID_len
		, &pNotifyFutureSignInField_Digest, &pNotifyFutureSignInField_Digest_len
		, &pNotifyFutureSignInField_CurrencyID, &pNotifyFutureSignInField_CurrencyID_len
		, &pNotifyFutureSignInField_DeviceID, &pNotifyFutureSignInField_DeviceID_len
		, &pNotifyFutureSignInField_BrokerIDByBank, &pNotifyFutureSignInField_BrokerIDByBank_len
		, &pNotifyFutureSignInField_OperNo, &pNotifyFutureSignInField_OperNo_len
		, &pNotifyFutureSignInField_RequestID
		, &pNotifyFutureSignInField_TID
		, &pNotifyFutureSignInField_ErrorID
		, &pNotifyFutureSignInField_ErrorMsg, &pNotifyFutureSignInField_ErrorMsg_len
		, &pNotifyFutureSignInField_PinKey, &pNotifyFutureSignInField_PinKey_len
		, &pNotifyFutureSignInField_MacKey, &pNotifyFutureSignInField_MacKey_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pNotifyFutureSignInField_TradeCode != NULL) {
		if(pNotifyFutureSignInField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pNotifyFutureSignInField_TradeCode, sizeof(self->data.TradeCode) );
		pNotifyFutureSignInField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pNotifyFutureSignInField_BankID != NULL) {
		if(pNotifyFutureSignInField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pNotifyFutureSignInField_BankID, sizeof(self->data.BankID) );
		pNotifyFutureSignInField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pNotifyFutureSignInField_BankBranchID != NULL) {
		if(pNotifyFutureSignInField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pNotifyFutureSignInField_BankBranchID, sizeof(self->data.BankBranchID) );
		pNotifyFutureSignInField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pNotifyFutureSignInField_BrokerID != NULL) {
		if(pNotifyFutureSignInField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pNotifyFutureSignInField_BrokerID, sizeof(self->data.BrokerID) );
		pNotifyFutureSignInField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pNotifyFutureSignInField_BrokerBranchID != NULL) {
		if(pNotifyFutureSignInField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pNotifyFutureSignInField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pNotifyFutureSignInField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyFutureSignInField_TradeDate != NULL) {
		if(pNotifyFutureSignInField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pNotifyFutureSignInField_TradeDate, sizeof(self->data.TradeDate) );
		pNotifyFutureSignInField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pNotifyFutureSignInField_TradeTime != NULL) {
		if(pNotifyFutureSignInField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pNotifyFutureSignInField_TradeTime, sizeof(self->data.TradeTime) );
		pNotifyFutureSignInField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pNotifyFutureSignInField_BankSerial != NULL) {
		if(pNotifyFutureSignInField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pNotifyFutureSignInField_BankSerial, sizeof(self->data.BankSerial) );
		pNotifyFutureSignInField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifyFutureSignInField_TradingDay != NULL) {
		if(pNotifyFutureSignInField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pNotifyFutureSignInField_TradingDay, sizeof(self->data.TradingDay) );
		pNotifyFutureSignInField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pNotifyFutureSignInField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pNotifyFutureSignInField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pNotifyFutureSignInField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pNotifyFutureSignInField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pNotifyFutureSignInField_UserID != NULL) {
		if(pNotifyFutureSignInField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pNotifyFutureSignInField_UserID, sizeof(self->data.UserID) );
		pNotifyFutureSignInField_UserID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pNotifyFutureSignInField_Digest != NULL) {
		if(pNotifyFutureSignInField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pNotifyFutureSignInField_Digest, sizeof(self->data.Digest) );
		pNotifyFutureSignInField_Digest = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pNotifyFutureSignInField_CurrencyID != NULL) {
		if(pNotifyFutureSignInField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pNotifyFutureSignInField_CurrencyID, sizeof(self->data.CurrencyID) );
		pNotifyFutureSignInField_CurrencyID = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pNotifyFutureSignInField_DeviceID != NULL) {
		if(pNotifyFutureSignInField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pNotifyFutureSignInField_DeviceID, sizeof(self->data.DeviceID) );
		pNotifyFutureSignInField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pNotifyFutureSignInField_BrokerIDByBank != NULL) {
		if(pNotifyFutureSignInField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pNotifyFutureSignInField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pNotifyFutureSignInField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pNotifyFutureSignInField_OperNo != NULL) {
		if(pNotifyFutureSignInField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pNotifyFutureSignInField_OperNo, sizeof(self->data.OperNo) );
		pNotifyFutureSignInField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pNotifyFutureSignInField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pNotifyFutureSignInField_TID;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pNotifyFutureSignInField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pNotifyFutureSignInField_ErrorMsg != NULL) {
		if(pNotifyFutureSignInField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pNotifyFutureSignInField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pNotifyFutureSignInField_ErrorMsg = NULL;
	}

	//TThostFtdcPasswordKeyType char[129]
	if(pNotifyFutureSignInField_PinKey != NULL) {
		if(pNotifyFutureSignInField_PinKey_len > (Py_ssize_t)sizeof(self->data.PinKey)) {
			PyErr_Format(PyExc_ValueError, "PinKey too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_PinKey_len, (Py_ssize_t)sizeof(self->data.PinKey));
			return -1;
		}
		strncpy(self->data.PinKey, pNotifyFutureSignInField_PinKey, sizeof(self->data.PinKey) );
		pNotifyFutureSignInField_PinKey = NULL;
	}

	//TThostFtdcPasswordKeyType char[129]
	if(pNotifyFutureSignInField_MacKey != NULL) {
		if(pNotifyFutureSignInField_MacKey_len > (Py_ssize_t)sizeof(self->data.MacKey)) {
			PyErr_Format(PyExc_ValueError, "MacKey too long: length=%zd (max allowed is %zd)", pNotifyFutureSignInField_MacKey_len, (Py_ssize_t)sizeof(self->data.MacKey));
			return -1;
		}
		strncpy(self->data.MacKey, pNotifyFutureSignInField_MacKey, sizeof(self->data.MacKey) );
		pNotifyFutureSignInField_MacKey = NULL;
	}



    return 0;
}

static void PyCThostFtdcNotifyFutureSignInField_dealloc(PyCThostFtdcNotifyFutureSignInField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_repr(PyCThostFtdcNotifyFutureSignInField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s,s:s,s:s}"
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
		, "PinKey", self->data.PinKey 
		, "MacKey", self->data.MacKey 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifyFutureSignInField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradeCode(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BankID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BankBranchID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BrokerID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BrokerBranchID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradeDate(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradeTime(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BankSerial(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TradingDay(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_PlateSerial(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_LastFragment(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_SessionID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_InstallID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_UserID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_Digest(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_CurrencyID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_DeviceID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_BrokerIDByBank(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_OperNo(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_RequestID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_TID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_ErrorID(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_ErrorMsg(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_PinKey(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.PinKey);
}

static PyObject *PyCThostFtdcNotifyFutureSignInField_get_MacKey(PyCThostFtdcNotifyFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.MacKey);
}

static int PyCThostFtdcNotifyFutureSignInField_set_TradeCode(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_BankID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_BankBranchID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_BrokerID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_BrokerBranchID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_TradeDate(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_TradeTime(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_BankSerial(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_TradingDay(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_PlateSerial(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_LastFragment(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_SessionID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_InstallID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_UserID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_Digest(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_CurrencyID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_DeviceID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_BrokerIDByBank(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_OperNo(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_RequestID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_TID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_ErrorID(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_ErrorMsg(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifyFutureSignInField_set_PinKey(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PinKey Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PinKey)) {
		PyErr_SetString(PyExc_ValueError, "PinKey must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.PinKey, buf, sizeof(self->data.PinKey));
	return 0;
}

static int PyCThostFtdcNotifyFutureSignInField_set_MacKey(PyCThostFtdcNotifyFutureSignInField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MacKey Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MacKey)) {
		PyErr_SetString(PyExc_ValueError, "MacKey must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.MacKey, buf, sizeof(self->data.MacKey));
	return 0;
}



static PyGetSetDef PyCThostFtdcNotifyFutureSignInField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradeCode, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BankID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BankBranchID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BrokerID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifyFutureSignInField_get_BrokerBranchID, (setter)PyCThostFtdcNotifyFutureSignInField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradeDate, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradeTime, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcNotifyFutureSignInField_get_BankSerial, (setter)PyCThostFtdcNotifyFutureSignInField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcNotifyFutureSignInField_get_TradingDay, (setter)PyCThostFtdcNotifyFutureSignInField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcNotifyFutureSignInField_get_PlateSerial, (setter)PyCThostFtdcNotifyFutureSignInField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcNotifyFutureSignInField_get_LastFragment, (setter)PyCThostFtdcNotifyFutureSignInField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcNotifyFutureSignInField_get_SessionID, (setter)PyCThostFtdcNotifyFutureSignInField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcNotifyFutureSignInField_get_InstallID, (setter)PyCThostFtdcNotifyFutureSignInField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcNotifyFutureSignInField_get_UserID, (setter)PyCThostFtdcNotifyFutureSignInField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcNotifyFutureSignInField_get_Digest, (setter)PyCThostFtdcNotifyFutureSignInField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcNotifyFutureSignInField_get_CurrencyID, (setter)PyCThostFtdcNotifyFutureSignInField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcNotifyFutureSignInField_get_DeviceID, (setter)PyCThostFtdcNotifyFutureSignInField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifyFutureSignInField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifyFutureSignInField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcNotifyFutureSignInField_get_OperNo, (setter)PyCThostFtdcNotifyFutureSignInField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcNotifyFutureSignInField_get_RequestID, (setter)PyCThostFtdcNotifyFutureSignInField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcNotifyFutureSignInField_get_TID, (setter)PyCThostFtdcNotifyFutureSignInField_set_TID, (char *)"TID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcNotifyFutureSignInField_get_ErrorID, (setter)PyCThostFtdcNotifyFutureSignInField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifyFutureSignInField_get_ErrorMsg, (setter)PyCThostFtdcNotifyFutureSignInField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"PinKey", (getter)PyCThostFtdcNotifyFutureSignInField_get_PinKey, (setter)PyCThostFtdcNotifyFutureSignInField_set_PinKey, (char *)"PinKey", NULL},
	 {(char *)"MacKey", (getter)PyCThostFtdcNotifyFutureSignInField_get_MacKey, (setter)PyCThostFtdcNotifyFutureSignInField_set_MacKey, (char *)"MacKey", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifyFutureSignInFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifyFutureSignInField",	/* tp_name */
	sizeof(PyCThostFtdcNotifyFutureSignInField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifyFutureSignInField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifyFutureSignInField_repr,   /* tp_repr */
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
	"CThostFtdcNotifyFutureSignInField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifyFutureSignInField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifyFutureSignInField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifyFutureSignInField_new,       /* tp_new */
};

int PyCThostFtdcNotifyFutureSignInFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifyFutureSignInField  */
	if (PyType_Ready(&PyCThostFtdcNotifyFutureSignInFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifyFutureSignInField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifyFutureSignInFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifyFutureSignInField", (PyObject *)&PyCThostFtdcNotifyFutureSignInFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifyFutureSignInField to module");
        Py_DECREF(&PyCThostFtdcNotifyFutureSignInFieldType);
		return -1;
    }

    return 0;
}
