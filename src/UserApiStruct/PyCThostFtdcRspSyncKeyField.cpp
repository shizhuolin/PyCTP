
#include "PyCThostFtdcRspSyncKeyField.h"



static PyObject *PyCThostFtdcRspSyncKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspSyncKeyField *self = (PyCThostFtdcRspSyncKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspSyncKeyField_init(PyCThostFtdcRspSyncKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pRspSyncKeyField_TradeCode = NULL;
	Py_ssize_t pRspSyncKeyField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pRspSyncKeyField_BankID = NULL;
	Py_ssize_t pRspSyncKeyField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pRspSyncKeyField_BankBranchID = NULL;
	Py_ssize_t pRspSyncKeyField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspSyncKeyField_BrokerID = NULL;
	Py_ssize_t pRspSyncKeyField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pRspSyncKeyField_BrokerBranchID = NULL;
	Py_ssize_t pRspSyncKeyField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspSyncKeyField_TradeDate = NULL;
	Py_ssize_t pRspSyncKeyField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pRspSyncKeyField_TradeTime = NULL;
	Py_ssize_t pRspSyncKeyField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pRspSyncKeyField_BankSerial = NULL;
	Py_ssize_t pRspSyncKeyField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pRspSyncKeyField_TradingDay = NULL;
	Py_ssize_t pRspSyncKeyField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pRspSyncKeyField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pRspSyncKeyField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pRspSyncKeyField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pRspSyncKeyField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspSyncKeyField_UserID = NULL;
	Py_ssize_t pRspSyncKeyField_UserID_len = 0;

	//TThostFtdcAddInfoType char[129]
	const char *pRspSyncKeyField_Message = NULL;
	Py_ssize_t pRspSyncKeyField_Message_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pRspSyncKeyField_DeviceID = NULL;
	Py_ssize_t pRspSyncKeyField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pRspSyncKeyField_BrokerIDByBank = NULL;
	Py_ssize_t pRspSyncKeyField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pRspSyncKeyField_OperNo = NULL;
	Py_ssize_t pRspSyncKeyField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pRspSyncKeyField_RequestID = 0;

	//TThostFtdcTIDType int
	int pRspSyncKeyField_TID = 0;

	//TThostFtdcErrorIDType int
	int pRspSyncKeyField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pRspSyncKeyField_ErrorMsg = NULL;
	Py_ssize_t pRspSyncKeyField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#iiis#", (char **)kwlist
#endif

		, &pRspSyncKeyField_TradeCode, &pRspSyncKeyField_TradeCode_len
		, &pRspSyncKeyField_BankID, &pRspSyncKeyField_BankID_len
		, &pRspSyncKeyField_BankBranchID, &pRspSyncKeyField_BankBranchID_len
		, &pRspSyncKeyField_BrokerID, &pRspSyncKeyField_BrokerID_len
		, &pRspSyncKeyField_BrokerBranchID, &pRspSyncKeyField_BrokerBranchID_len
		, &pRspSyncKeyField_TradeDate, &pRspSyncKeyField_TradeDate_len
		, &pRspSyncKeyField_TradeTime, &pRspSyncKeyField_TradeTime_len
		, &pRspSyncKeyField_BankSerial, &pRspSyncKeyField_BankSerial_len
		, &pRspSyncKeyField_TradingDay, &pRspSyncKeyField_TradingDay_len
		, &pRspSyncKeyField_PlateSerial
		, &pRspSyncKeyField_LastFragment
		, &pRspSyncKeyField_SessionID
		, &pRspSyncKeyField_InstallID
		, &pRspSyncKeyField_UserID, &pRspSyncKeyField_UserID_len
		, &pRspSyncKeyField_Message, &pRspSyncKeyField_Message_len
		, &pRspSyncKeyField_DeviceID, &pRspSyncKeyField_DeviceID_len
		, &pRspSyncKeyField_BrokerIDByBank, &pRspSyncKeyField_BrokerIDByBank_len
		, &pRspSyncKeyField_OperNo, &pRspSyncKeyField_OperNo_len
		, &pRspSyncKeyField_RequestID
		, &pRspSyncKeyField_TID
		, &pRspSyncKeyField_ErrorID
		, &pRspSyncKeyField_ErrorMsg, &pRspSyncKeyField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pRspSyncKeyField_TradeCode != NULL) {
		if(pRspSyncKeyField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pRspSyncKeyField_TradeCode, sizeof(self->data.TradeCode) );
		pRspSyncKeyField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pRspSyncKeyField_BankID != NULL) {
		if(pRspSyncKeyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pRspSyncKeyField_BankID, sizeof(self->data.BankID) );
		pRspSyncKeyField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pRspSyncKeyField_BankBranchID != NULL) {
		if(pRspSyncKeyField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pRspSyncKeyField_BankBranchID, sizeof(self->data.BankBranchID) );
		pRspSyncKeyField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspSyncKeyField_BrokerID != NULL) {
		if(pRspSyncKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspSyncKeyField_BrokerID, sizeof(self->data.BrokerID) );
		pRspSyncKeyField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pRspSyncKeyField_BrokerBranchID != NULL) {
		if(pRspSyncKeyField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pRspSyncKeyField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pRspSyncKeyField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspSyncKeyField_TradeDate != NULL) {
		if(pRspSyncKeyField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pRspSyncKeyField_TradeDate, sizeof(self->data.TradeDate) );
		pRspSyncKeyField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pRspSyncKeyField_TradeTime != NULL) {
		if(pRspSyncKeyField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pRspSyncKeyField_TradeTime, sizeof(self->data.TradeTime) );
		pRspSyncKeyField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pRspSyncKeyField_BankSerial != NULL) {
		if(pRspSyncKeyField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pRspSyncKeyField_BankSerial, sizeof(self->data.BankSerial) );
		pRspSyncKeyField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pRspSyncKeyField_TradingDay != NULL) {
		if(pRspSyncKeyField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspSyncKeyField_TradingDay, sizeof(self->data.TradingDay) );
		pRspSyncKeyField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pRspSyncKeyField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pRspSyncKeyField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspSyncKeyField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pRspSyncKeyField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pRspSyncKeyField_UserID != NULL) {
		if(pRspSyncKeyField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspSyncKeyField_UserID, sizeof(self->data.UserID) );
		pRspSyncKeyField_UserID = NULL;
	}

	//TThostFtdcAddInfoType char[129]
	if(pRspSyncKeyField_Message != NULL) {
		if(pRspSyncKeyField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pRspSyncKeyField_Message, sizeof(self->data.Message) );
		pRspSyncKeyField_Message = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pRspSyncKeyField_DeviceID != NULL) {
		if(pRspSyncKeyField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pRspSyncKeyField_DeviceID, sizeof(self->data.DeviceID) );
		pRspSyncKeyField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pRspSyncKeyField_BrokerIDByBank != NULL) {
		if(pRspSyncKeyField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pRspSyncKeyField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pRspSyncKeyField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pRspSyncKeyField_OperNo != NULL) {
		if(pRspSyncKeyField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pRspSyncKeyField_OperNo, sizeof(self->data.OperNo) );
		pRspSyncKeyField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pRspSyncKeyField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pRspSyncKeyField_TID;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pRspSyncKeyField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pRspSyncKeyField_ErrorMsg != NULL) {
		if(pRspSyncKeyField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pRspSyncKeyField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pRspSyncKeyField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pRspSyncKeyField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspSyncKeyField_dealloc(PyCThostFtdcRspSyncKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspSyncKeyField_repr(PyCThostFtdcRspSyncKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:i,s:s}"
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
		, "Message", self->data.Message 
		, "DeviceID", self->data.DeviceID 
		, "BrokerIDByBank", self->data.BrokerIDByBank 
		, "OperNo", self->data.OperNo 
		, "RequestID", self->data.RequestID
		, "TID", self->data.TID
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspSyncKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_TradeCode(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_BankID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_BankBranchID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_BrokerID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_BrokerBranchID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_TradeDate(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_TradeTime(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_BankSerial(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_TradingDay(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_PlateSerial(PyCThostFtdcRspSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_LastFragment(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_SessionID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_InstallID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_UserID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_Message(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_DeviceID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_BrokerIDByBank(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_OperNo(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_RequestID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_TID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_ErrorID(PyCThostFtdcRspSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcRspSyncKeyField_get_ErrorMsg(PyCThostFtdcRspSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcRspSyncKeyField_set_TradeCode(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_BankID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_BankBranchID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_BrokerID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_BrokerBranchID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_TradeDate(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_TradeTime(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_BankSerial(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_TradingDay(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_PlateSerial(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_LastFragment(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_SessionID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_InstallID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_UserID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_Message(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_DeviceID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_BrokerIDByBank(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_OperNo(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_RequestID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_TID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_ErrorID(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspSyncKeyField_set_ErrorMsg(PyCThostFtdcRspSyncKeyField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcRspSyncKeyField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcRspSyncKeyField_get_TradeCode, (setter)PyCThostFtdcRspSyncKeyField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcRspSyncKeyField_get_BankID, (setter)PyCThostFtdcRspSyncKeyField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcRspSyncKeyField_get_BankBranchID, (setter)PyCThostFtdcRspSyncKeyField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspSyncKeyField_get_BrokerID, (setter)PyCThostFtdcRspSyncKeyField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcRspSyncKeyField_get_BrokerBranchID, (setter)PyCThostFtdcRspSyncKeyField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcRspSyncKeyField_get_TradeDate, (setter)PyCThostFtdcRspSyncKeyField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcRspSyncKeyField_get_TradeTime, (setter)PyCThostFtdcRspSyncKeyField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcRspSyncKeyField_get_BankSerial, (setter)PyCThostFtdcRspSyncKeyField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspSyncKeyField_get_TradingDay, (setter)PyCThostFtdcRspSyncKeyField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcRspSyncKeyField_get_PlateSerial, (setter)PyCThostFtdcRspSyncKeyField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcRspSyncKeyField_get_LastFragment, (setter)PyCThostFtdcRspSyncKeyField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspSyncKeyField_get_SessionID, (setter)PyCThostFtdcRspSyncKeyField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcRspSyncKeyField_get_InstallID, (setter)PyCThostFtdcRspSyncKeyField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspSyncKeyField_get_UserID, (setter)PyCThostFtdcRspSyncKeyField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcRspSyncKeyField_get_Message, (setter)PyCThostFtdcRspSyncKeyField_set_Message, (char *)"Message", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcRspSyncKeyField_get_DeviceID, (setter)PyCThostFtdcRspSyncKeyField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcRspSyncKeyField_get_BrokerIDByBank, (setter)PyCThostFtdcRspSyncKeyField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcRspSyncKeyField_get_OperNo, (setter)PyCThostFtdcRspSyncKeyField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcRspSyncKeyField_get_RequestID, (setter)PyCThostFtdcRspSyncKeyField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcRspSyncKeyField_get_TID, (setter)PyCThostFtdcRspSyncKeyField_set_TID, (char *)"TID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcRspSyncKeyField_get_ErrorID, (setter)PyCThostFtdcRspSyncKeyField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcRspSyncKeyField_get_ErrorMsg, (setter)PyCThostFtdcRspSyncKeyField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspSyncKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspSyncKeyField",	/* tp_name */
	sizeof(PyCThostFtdcRspSyncKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspSyncKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspSyncKeyField_repr,   /* tp_repr */
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
	"CThostFtdcRspSyncKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspSyncKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspSyncKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspSyncKeyField_new,       /* tp_new */
};

int PyCThostFtdcRspSyncKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspSyncKeyField  */
	if (PyType_Ready(&PyCThostFtdcRspSyncKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspSyncKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspSyncKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspSyncKeyField", (PyObject *)&PyCThostFtdcRspSyncKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspSyncKeyField to module");
        Py_DECREF(&PyCThostFtdcRspSyncKeyFieldType);
		return -1;
    }

    return 0;
}
