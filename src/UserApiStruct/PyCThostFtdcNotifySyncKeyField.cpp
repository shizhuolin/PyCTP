
#include "PyCThostFtdcNotifySyncKeyField.h"



static PyObject *PyCThostFtdcNotifySyncKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcNotifySyncKeyField *self = (PyCThostFtdcNotifySyncKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcNotifySyncKeyField_init(PyCThostFtdcNotifySyncKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID", "ErrorID", "ErrorMsg",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pNotifySyncKeyField_TradeCode = NULL;
	Py_ssize_t pNotifySyncKeyField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pNotifySyncKeyField_BankID = NULL;
	Py_ssize_t pNotifySyncKeyField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pNotifySyncKeyField_BankBranchID = NULL;
	Py_ssize_t pNotifySyncKeyField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pNotifySyncKeyField_BrokerID = NULL;
	Py_ssize_t pNotifySyncKeyField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pNotifySyncKeyField_BrokerBranchID = NULL;
	Py_ssize_t pNotifySyncKeyField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifySyncKeyField_TradeDate = NULL;
	Py_ssize_t pNotifySyncKeyField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pNotifySyncKeyField_TradeTime = NULL;
	Py_ssize_t pNotifySyncKeyField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pNotifySyncKeyField_BankSerial = NULL;
	Py_ssize_t pNotifySyncKeyField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pNotifySyncKeyField_TradingDay = NULL;
	Py_ssize_t pNotifySyncKeyField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pNotifySyncKeyField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pNotifySyncKeyField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pNotifySyncKeyField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pNotifySyncKeyField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pNotifySyncKeyField_UserID = NULL;
	Py_ssize_t pNotifySyncKeyField_UserID_len = 0;

	//TThostFtdcAddInfoType char[129]
	const char *pNotifySyncKeyField_Message = NULL;
	Py_ssize_t pNotifySyncKeyField_Message_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pNotifySyncKeyField_DeviceID = NULL;
	Py_ssize_t pNotifySyncKeyField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pNotifySyncKeyField_BrokerIDByBank = NULL;
	Py_ssize_t pNotifySyncKeyField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pNotifySyncKeyField_OperNo = NULL;
	Py_ssize_t pNotifySyncKeyField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pNotifySyncKeyField_RequestID = 0;

	//TThostFtdcTIDType int
	int pNotifySyncKeyField_TID = 0;

	//TThostFtdcErrorIDType int
	int pNotifySyncKeyField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pNotifySyncKeyField_ErrorMsg = NULL;
	Py_ssize_t pNotifySyncKeyField_ErrorMsg_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#iiiy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#iiis#", (char **)kwlist
#endif

		, &pNotifySyncKeyField_TradeCode, &pNotifySyncKeyField_TradeCode_len
		, &pNotifySyncKeyField_BankID, &pNotifySyncKeyField_BankID_len
		, &pNotifySyncKeyField_BankBranchID, &pNotifySyncKeyField_BankBranchID_len
		, &pNotifySyncKeyField_BrokerID, &pNotifySyncKeyField_BrokerID_len
		, &pNotifySyncKeyField_BrokerBranchID, &pNotifySyncKeyField_BrokerBranchID_len
		, &pNotifySyncKeyField_TradeDate, &pNotifySyncKeyField_TradeDate_len
		, &pNotifySyncKeyField_TradeTime, &pNotifySyncKeyField_TradeTime_len
		, &pNotifySyncKeyField_BankSerial, &pNotifySyncKeyField_BankSerial_len
		, &pNotifySyncKeyField_TradingDay, &pNotifySyncKeyField_TradingDay_len
		, &pNotifySyncKeyField_PlateSerial
		, &pNotifySyncKeyField_LastFragment
		, &pNotifySyncKeyField_SessionID
		, &pNotifySyncKeyField_InstallID
		, &pNotifySyncKeyField_UserID, &pNotifySyncKeyField_UserID_len
		, &pNotifySyncKeyField_Message, &pNotifySyncKeyField_Message_len
		, &pNotifySyncKeyField_DeviceID, &pNotifySyncKeyField_DeviceID_len
		, &pNotifySyncKeyField_BrokerIDByBank, &pNotifySyncKeyField_BrokerIDByBank_len
		, &pNotifySyncKeyField_OperNo, &pNotifySyncKeyField_OperNo_len
		, &pNotifySyncKeyField_RequestID
		, &pNotifySyncKeyField_TID
		, &pNotifySyncKeyField_ErrorID
		, &pNotifySyncKeyField_ErrorMsg, &pNotifySyncKeyField_ErrorMsg_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pNotifySyncKeyField_TradeCode != NULL) {
		if(pNotifySyncKeyField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pNotifySyncKeyField_TradeCode, sizeof(self->data.TradeCode) );
		pNotifySyncKeyField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pNotifySyncKeyField_BankID != NULL) {
		if(pNotifySyncKeyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pNotifySyncKeyField_BankID, sizeof(self->data.BankID) );
		pNotifySyncKeyField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pNotifySyncKeyField_BankBranchID != NULL) {
		if(pNotifySyncKeyField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pNotifySyncKeyField_BankBranchID, sizeof(self->data.BankBranchID) );
		pNotifySyncKeyField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pNotifySyncKeyField_BrokerID != NULL) {
		if(pNotifySyncKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pNotifySyncKeyField_BrokerID, sizeof(self->data.BrokerID) );
		pNotifySyncKeyField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pNotifySyncKeyField_BrokerBranchID != NULL) {
		if(pNotifySyncKeyField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pNotifySyncKeyField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pNotifySyncKeyField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifySyncKeyField_TradeDate != NULL) {
		if(pNotifySyncKeyField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pNotifySyncKeyField_TradeDate, sizeof(self->data.TradeDate) );
		pNotifySyncKeyField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pNotifySyncKeyField_TradeTime != NULL) {
		if(pNotifySyncKeyField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pNotifySyncKeyField_TradeTime, sizeof(self->data.TradeTime) );
		pNotifySyncKeyField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pNotifySyncKeyField_BankSerial != NULL) {
		if(pNotifySyncKeyField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pNotifySyncKeyField_BankSerial, sizeof(self->data.BankSerial) );
		pNotifySyncKeyField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pNotifySyncKeyField_TradingDay != NULL) {
		if(pNotifySyncKeyField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pNotifySyncKeyField_TradingDay, sizeof(self->data.TradingDay) );
		pNotifySyncKeyField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pNotifySyncKeyField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pNotifySyncKeyField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pNotifySyncKeyField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pNotifySyncKeyField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pNotifySyncKeyField_UserID != NULL) {
		if(pNotifySyncKeyField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pNotifySyncKeyField_UserID, sizeof(self->data.UserID) );
		pNotifySyncKeyField_UserID = NULL;
	}

	//TThostFtdcAddInfoType char[129]
	if(pNotifySyncKeyField_Message != NULL) {
		if(pNotifySyncKeyField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pNotifySyncKeyField_Message, sizeof(self->data.Message) );
		pNotifySyncKeyField_Message = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pNotifySyncKeyField_DeviceID != NULL) {
		if(pNotifySyncKeyField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pNotifySyncKeyField_DeviceID, sizeof(self->data.DeviceID) );
		pNotifySyncKeyField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pNotifySyncKeyField_BrokerIDByBank != NULL) {
		if(pNotifySyncKeyField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pNotifySyncKeyField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pNotifySyncKeyField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pNotifySyncKeyField_OperNo != NULL) {
		if(pNotifySyncKeyField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pNotifySyncKeyField_OperNo, sizeof(self->data.OperNo) );
		pNotifySyncKeyField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pNotifySyncKeyField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pNotifySyncKeyField_TID;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pNotifySyncKeyField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pNotifySyncKeyField_ErrorMsg != NULL) {
		if(pNotifySyncKeyField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pNotifySyncKeyField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pNotifySyncKeyField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pNotifySyncKeyField_ErrorMsg = NULL;
	}



    return 0;
}

static void PyCThostFtdcNotifySyncKeyField_dealloc(PyCThostFtdcNotifySyncKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_repr(PyCThostFtdcNotifySyncKeyField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcNotifySyncKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradeCode(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_BankID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_BankBranchID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_BrokerID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_BrokerBranchID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradeDate(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradeTime(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_BankSerial(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_TradingDay(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_PlateSerial(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_LastFragment(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_SessionID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_InstallID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_UserID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_Message(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_DeviceID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_BrokerIDByBank(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_OperNo(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_RequestID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_TID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_ErrorID(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcNotifySyncKeyField_get_ErrorMsg(PyCThostFtdcNotifySyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static int PyCThostFtdcNotifySyncKeyField_set_TradeCode(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_BankID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_BankBranchID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_BrokerID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_BrokerBranchID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_TradeDate(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_TradeTime(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_BankSerial(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_TradingDay(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_PlateSerial(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_LastFragment(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_SessionID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_InstallID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_UserID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_Message(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_DeviceID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_BrokerIDByBank(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_OperNo(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_RequestID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_TID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_ErrorID(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcNotifySyncKeyField_set_ErrorMsg(PyCThostFtdcNotifySyncKeyField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcNotifySyncKeyField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcNotifySyncKeyField_get_TradeCode, (setter)PyCThostFtdcNotifySyncKeyField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcNotifySyncKeyField_get_BankID, (setter)PyCThostFtdcNotifySyncKeyField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcNotifySyncKeyField_get_BankBranchID, (setter)PyCThostFtdcNotifySyncKeyField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcNotifySyncKeyField_get_BrokerID, (setter)PyCThostFtdcNotifySyncKeyField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcNotifySyncKeyField_get_BrokerBranchID, (setter)PyCThostFtdcNotifySyncKeyField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcNotifySyncKeyField_get_TradeDate, (setter)PyCThostFtdcNotifySyncKeyField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcNotifySyncKeyField_get_TradeTime, (setter)PyCThostFtdcNotifySyncKeyField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcNotifySyncKeyField_get_BankSerial, (setter)PyCThostFtdcNotifySyncKeyField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcNotifySyncKeyField_get_TradingDay, (setter)PyCThostFtdcNotifySyncKeyField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcNotifySyncKeyField_get_PlateSerial, (setter)PyCThostFtdcNotifySyncKeyField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcNotifySyncKeyField_get_LastFragment, (setter)PyCThostFtdcNotifySyncKeyField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcNotifySyncKeyField_get_SessionID, (setter)PyCThostFtdcNotifySyncKeyField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcNotifySyncKeyField_get_InstallID, (setter)PyCThostFtdcNotifySyncKeyField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcNotifySyncKeyField_get_UserID, (setter)PyCThostFtdcNotifySyncKeyField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcNotifySyncKeyField_get_Message, (setter)PyCThostFtdcNotifySyncKeyField_set_Message, (char *)"Message", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcNotifySyncKeyField_get_DeviceID, (setter)PyCThostFtdcNotifySyncKeyField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcNotifySyncKeyField_get_BrokerIDByBank, (setter)PyCThostFtdcNotifySyncKeyField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcNotifySyncKeyField_get_OperNo, (setter)PyCThostFtdcNotifySyncKeyField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcNotifySyncKeyField_get_RequestID, (setter)PyCThostFtdcNotifySyncKeyField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcNotifySyncKeyField_get_TID, (setter)PyCThostFtdcNotifySyncKeyField_set_TID, (char *)"TID", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcNotifySyncKeyField_get_ErrorID, (setter)PyCThostFtdcNotifySyncKeyField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcNotifySyncKeyField_get_ErrorMsg, (setter)PyCThostFtdcNotifySyncKeyField_set_ErrorMsg, (char *)"ErrorMsg", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcNotifySyncKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcNotifySyncKeyField",	/* tp_name */
	sizeof(PyCThostFtdcNotifySyncKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcNotifySyncKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcNotifySyncKeyField_repr,   /* tp_repr */
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
	"CThostFtdcNotifySyncKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcNotifySyncKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcNotifySyncKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcNotifySyncKeyField_new,       /* tp_new */
};

int PyCThostFtdcNotifySyncKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcNotifySyncKeyField  */
	if (PyType_Ready(&PyCThostFtdcNotifySyncKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcNotifySyncKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcNotifySyncKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcNotifySyncKeyField", (PyObject *)&PyCThostFtdcNotifySyncKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcNotifySyncKeyField to module");
        Py_DECREF(&PyCThostFtdcNotifySyncKeyFieldType);
		return -1;
    }

    return 0;
}
