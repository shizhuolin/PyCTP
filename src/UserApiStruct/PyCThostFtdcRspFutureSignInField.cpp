
#include "PyCThostFtdcRspFutureSignInField.h"



static PyObject *PyCThostFtdcRspFutureSignInField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspFutureSignInField *self = (PyCThostFtdcRspFutureSignInField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspFutureSignInField_init(PyCThostFtdcRspFutureSignInField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg", "PinKey", "MacKey",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspFutureSignInField_TradeCode = NULL;
	Py_ssize_t pRspFutureSignInField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspFutureSignInField_BankID = NULL;
	Py_ssize_t pRspFutureSignInField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspFutureSignInField_BankBranchID = NULL;
	Py_ssize_t pRspFutureSignInField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspFutureSignInField_BrokerID = NULL;
	Py_ssize_t pRspFutureSignInField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspFutureSignInField_BrokerBranchID = NULL;
	Py_ssize_t pRspFutureSignInField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspFutureSignInField_TradeDate = NULL;
	Py_ssize_t pRspFutureSignInField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspFutureSignInField_TradeTime = NULL;
	Py_ssize_t pRspFutureSignInField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspFutureSignInField_BankSerial = NULL;
	Py_ssize_t pRspFutureSignInField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspFutureSignInField_TradingDay = NULL;
	Py_ssize_t pRspFutureSignInField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspFutureSignInField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspFutureSignInField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspFutureSignInField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pRspFutureSignInField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspFutureSignInField_UserID = NULL;
	Py_ssize_t pRspFutureSignInField_UserID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pRspFutureSignInField_Digest = NULL;
	Py_ssize_t pRspFutureSignInField_Digest_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pRspFutureSignInField_CurrencyID = NULL;
	Py_ssize_t pRspFutureSignInField_CurrencyID_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspFutureSignInField_DeviceID = NULL;
	Py_ssize_t pRspFutureSignInField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspFutureSignInField_BrokerIDByBank = NULL;
	Py_ssize_t pRspFutureSignInField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspFutureSignInField_OperNo = NULL;
	Py_ssize_t pRspFutureSignInField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspFutureSignInField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspFutureSignInField_TID = 0;

	//TThostFtdcErrorIDType int
	int pRspFutureSignInField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pRspFutureSignInField_ErrorMsg = NULL;
	Py_ssize_t pRspFutureSignInField_ErrorMsg_len = 0;

	//TThostFtdcPasswordKeyType char[129]
	const char *pRspFutureSignInField_PinKey = NULL;
	Py_ssize_t pRspFutureSignInField_PinKey_len = 0;

	//TThostFtdcPasswordKeyType char[129]
	const char *pRspFutureSignInField_MacKey = NULL;
	Py_ssize_t pRspFutureSignInField_MacKey_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#iiiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#iiis#s#s#", (char **)kwlist
#endif

		, &pRspFutureSignInField_TradeCode, &pRspFutureSignInField_TradeCode_len
		, &pRspFutureSignInField_BankID, &pRspFutureSignInField_BankID_len
		, &pRspFutureSignInField_BankBranchID, &pRspFutureSignInField_BankBranchID_len
		, &pRspFutureSignInField_BrokerID, &pRspFutureSignInField_BrokerID_len
		, &pRspFutureSignInField_BrokerBranchID, &pRspFutureSignInField_BrokerBranchID_len
		, &pRspFutureSignInField_TradeDate, &pRspFutureSignInField_TradeDate_len
		, &pRspFutureSignInField_TradeTime, &pRspFutureSignInField_TradeTime_len
		, &pRspFutureSignInField_BankSerial, &pRspFutureSignInField_BankSerial_len
		, &pRspFutureSignInField_TradingDay, &pRspFutureSignInField_TradingDay_len
		, &pRspFutureSignInField_PlateSerial
		, &pRspFutureSignInField_LastFragment
		, &pRspFutureSignInField_SessionID
		, &pRspFutureSignInField_InstallID
		, &pRspFutureSignInField_UserID, &pRspFutureSignInField_UserID_len
		, &pRspFutureSignInField_Digest, &pRspFutureSignInField_Digest_len
		, &pRspFutureSignInField_CurrencyID, &pRspFutureSignInField_CurrencyID_len
		, &pRspFutureSignInField_DeviceID, &pRspFutureSignInField_DeviceID_len
		, &pRspFutureSignInField_BrokerIDByBank, &pRspFutureSignInField_BrokerIDByBank_len
		, &pRspFutureSignInField_OperNo, &pRspFutureSignInField_OperNo_len
		, &pRspFutureSignInField_RequestID
		, &pRspFutureSignInField_TID
		, &pRspFutureSignInField_ErrorID
		, &pRspFutureSignInField_ErrorMsg, &pRspFutureSignInField_ErrorMsg_len
		, &pRspFutureSignInField_PinKey, &pRspFutureSignInField_PinKey_len
		, &pRspFutureSignInField_MacKey, &pRspFutureSignInField_MacKey_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspFutureSignInField_TradeCode != NULL) {
		if(pRspFutureSignInField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspFutureSignInField_TradeCode, sizeof(self->data.TradeCode) );
		pRspFutureSignInField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspFutureSignInField_BankID != NULL) {
		if(pRspFutureSignInField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspFutureSignInField_BankID, sizeof(self->data.BankID) );
		pRspFutureSignInField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspFutureSignInField_BankBranchID != NULL) {
		if(pRspFutureSignInField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspFutureSignInField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspFutureSignInField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspFutureSignInField_BrokerID != NULL) {
		if(pRspFutureSignInField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspFutureSignInField_BrokerID, sizeof(self->data.BrokerID) );
		pRspFutureSignInField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspFutureSignInField_BrokerBranchID != NULL) {
		if(pRspFutureSignInField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspFutureSignInField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspFutureSignInField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspFutureSignInField_TradeDate != NULL) {
		if(pRspFutureSignInField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspFutureSignInField_TradeDate, sizeof(self->data.TradeDate) );
		pRspFutureSignInField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspFutureSignInField_TradeTime != NULL) {
		if(pRspFutureSignInField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspFutureSignInField_TradeTime, sizeof(self->data.TradeTime) );
		pRspFutureSignInField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspFutureSignInField_BankSerial != NULL) {
		if(pRspFutureSignInField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspFutureSignInField_BankSerial, sizeof(self->data.BankSerial) );
		pRspFutureSignInField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspFutureSignInField_TradingDay != NULL) {
		if(pRspFutureSignInField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspFutureSignInField_TradingDay, sizeof(self->data.TradingDay) );
		pRspFutureSignInField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspFutureSignInField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspFutureSignInField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspFutureSignInField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspFutureSignInField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pRspFutureSignInField_UserID != NULL) {
		if(pRspFutureSignInField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspFutureSignInField_UserID, sizeof(self->data.UserID) );
		pRspFutureSignInField_UserID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pRspFutureSignInField_Digest != NULL) {
		if(pRspFutureSignInField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pRspFutureSignInField_Digest, sizeof(self->data.Digest) );
		pRspFutureSignInField_Digest = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pRspFutureSignInField_CurrencyID != NULL) {
		if(pRspFutureSignInField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pRspFutureSignInField_CurrencyID, sizeof(self->data.CurrencyID) );
		pRspFutureSignInField_CurrencyID = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pRspFutureSignInField_DeviceID != NULL) {
		if(pRspFutureSignInField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspFutureSignInField_DeviceID, sizeof(self->data.DeviceID) );
		pRspFutureSignInField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspFutureSignInField_BrokerIDByBank != NULL) {
		if(pRspFutureSignInField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspFutureSignInField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspFutureSignInField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pRspFutureSignInField_OperNo != NULL) {
		if(pRspFutureSignInField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspFutureSignInField_OperNo, sizeof(self->data.OperNo) );
		pRspFutureSignInField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspFutureSignInField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspFutureSignInField_TID;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pRspFutureSignInField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pRspFutureSignInField_ErrorMsg != NULL) {
		if(pRspFutureSignInField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pRspFutureSignInField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pRspFutureSignInField_ErrorMsg = NULL;
	}

	//TThostFtdcPasswordKeyType char[129]
	if(pRspFutureSignInField_PinKey != NULL) {
		if(pRspFutureSignInField_PinKey_len > (Py_ssize_t)sizeof(self->data.PinKey)) {
			PyErr_Format(PyExc_ValueError, "PinKey too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_PinKey_len, (Py_ssize_t)sizeof(self->data.PinKey));
			return -1;
		}
		strncpy(self->data.PinKey, pRspFutureSignInField_PinKey, sizeof(self->data.PinKey) );
		pRspFutureSignInField_PinKey = NULL;
	}

	//TThostFtdcPasswordKeyType char[129]
	if(pRspFutureSignInField_MacKey != NULL) {
		if(pRspFutureSignInField_MacKey_len > (Py_ssize_t)sizeof(self->data.MacKey)) {
			PyErr_Format(PyExc_ValueError, "MacKey too long: length=%zd (max allowed is %zd)", pRspFutureSignInField_MacKey_len, (Py_ssize_t)sizeof(self->data.MacKey));
			return -1;
		}
		strncpy(self->data.MacKey, pRspFutureSignInField_MacKey, sizeof(self->data.MacKey) );
		pRspFutureSignInField_MacKey = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspFutureSignInField_dealloc(PyCThostFtdcRspFutureSignInField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspFutureSignInField_repr(PyCThostFtdcRspFutureSignInField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspFutureSignInField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_TradeCode(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_BankID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_BankBranchID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_BrokerID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_BrokerBranchID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_TradeDate(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_TradeTime(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_BankSerial(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_TradingDay(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_PlateSerial(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_LastFragment(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_SessionID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_InstallID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_UserID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_Digest(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_CurrencyID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_DeviceID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_BrokerIDByBank(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_OperNo(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_RequestID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_TID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_ErrorID(PyCThostFtdcRspFutureSignInField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_ErrorMsg(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_PinKey(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.PinKey);
}

static PyObject *PyCThostFtdcRspFutureSignInField_get_MacKey(PyCThostFtdcRspFutureSignInField *self, void *closure) {
	return PyBytes_FromString(self->data.MacKey);
}

static int PyCThostFtdcRspFutureSignInField_set_TradeCode(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_BankID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_BankBranchID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_BrokerID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_BrokerBranchID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_TradeDate(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_TradeTime(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_BankSerial(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_TradingDay(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_PlateSerial(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_LastFragment(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_SessionID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_InstallID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_UserID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_Digest(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_CurrencyID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_DeviceID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_BrokerIDByBank(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_OperNo(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_RequestID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_TID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_ErrorID(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_ErrorMsg(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_PinKey(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspFutureSignInField_set_MacKey(PyCThostFtdcRspFutureSignInField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspFutureSignInField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspFutureSignInField_get_TradeCode, (setter)PyCThostFtdcRspFutureSignInField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspFutureSignInField_get_BankID, (setter)PyCThostFtdcRspFutureSignInField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspFutureSignInField_get_BankBranchID, (setter)PyCThostFtdcRspFutureSignInField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspFutureSignInField_get_BrokerID, (setter)PyCThostFtdcRspFutureSignInField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspFutureSignInField_get_BrokerBranchID, (setter)PyCThostFtdcRspFutureSignInField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspFutureSignInField_get_TradeDate, (setter)PyCThostFtdcRspFutureSignInField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspFutureSignInField_get_TradeTime, (setter)PyCThostFtdcRspFutureSignInField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspFutureSignInField_get_BankSerial, (setter)PyCThostFtdcRspFutureSignInField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspFutureSignInField_get_TradingDay, (setter)PyCThostFtdcRspFutureSignInField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspFutureSignInField_get_PlateSerial, (setter)PyCThostFtdcRspFutureSignInField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspFutureSignInField_get_LastFragment, (setter)PyCThostFtdcRspFutureSignInField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspFutureSignInField_get_SessionID, (setter)PyCThostFtdcRspFutureSignInField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspFutureSignInField_get_InstallID, (setter)PyCThostFtdcRspFutureSignInField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspFutureSignInField_get_UserID, (setter)PyCThostFtdcRspFutureSignInField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcRspFutureSignInField_get_Digest, (setter)PyCThostFtdcRspFutureSignInField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcRspFutureSignInField_get_CurrencyID, (setter)PyCThostFtdcRspFutureSignInField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspFutureSignInField_get_DeviceID, (setter)PyCThostFtdcRspFutureSignInField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspFutureSignInField_get_BrokerIDByBank, (setter)PyCThostFtdcRspFutureSignInField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspFutureSignInField_get_OperNo, (setter)PyCThostFtdcRspFutureSignInField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspFutureSignInField_get_RequestID, (setter)PyCThostFtdcRspFutureSignInField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspFutureSignInField_get_TID, (setter)PyCThostFtdcRspFutureSignInField_set_TID, (char *)"TID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcRspFutureSignInField_get_ErrorID, (setter)PyCThostFtdcRspFutureSignInField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcRspFutureSignInField_get_ErrorMsg, (setter)PyCThostFtdcRspFutureSignInField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"PinKey", (getter)PyCThostFtdcRspFutureSignInField_get_PinKey, (setter)PyCThostFtdcRspFutureSignInField_set_PinKey, (char *)"PinKey", NULL},
	 {(char *)"MacKey", (getter)PyCThostFtdcRspFutureSignInField_get_MacKey, (setter)PyCThostFtdcRspFutureSignInField_set_MacKey, (char *)"MacKey", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspFutureSignInFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspFutureSignInField",	/* tp_name */
	sizeof(PyCThostFtdcRspFutureSignInField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspFutureSignInField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspFutureSignInField_repr,   /* tp_repr */
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
	"CThostFtdcRspFutureSignInField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspFutureSignInField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspFutureSignInField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspFutureSignInField_new,       /* tp_new */
};

int PyCThostFtdcRspFutureSignInFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspFutureSignInField  */
	if (PyType_Ready(&PyCThostFtdcRspFutureSignInFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspFutureSignInField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspFutureSignInFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspFutureSignInField", (PyObject *)&PyCThostFtdcRspFutureSignInFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspFutureSignInField to module");
        Py_DECREF(&PyCThostFtdcRspFutureSignInFieldType);
		return -1;
    }

    return 0;
}
