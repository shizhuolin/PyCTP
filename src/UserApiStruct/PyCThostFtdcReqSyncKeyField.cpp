
#include "PyCThostFtdcReqSyncKeyField.h"



static PyObject *PyCThostFtdcReqSyncKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqSyncKeyField *self = (PyCThostFtdcReqSyncKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqSyncKeyField_init(PyCThostFtdcReqSyncKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Message", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqSyncKeyField_TradeCode = NULL;
	Py_ssize_t pReqSyncKeyField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqSyncKeyField_BankID = NULL;
	Py_ssize_t pReqSyncKeyField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqSyncKeyField_BankBranchID = NULL;
	Py_ssize_t pReqSyncKeyField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqSyncKeyField_BrokerID = NULL;
	Py_ssize_t pReqSyncKeyField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqSyncKeyField_BrokerBranchID = NULL;
	Py_ssize_t pReqSyncKeyField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqSyncKeyField_TradeDate = NULL;
	Py_ssize_t pReqSyncKeyField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqSyncKeyField_TradeTime = NULL;
	Py_ssize_t pReqSyncKeyField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqSyncKeyField_BankSerial = NULL;
	Py_ssize_t pReqSyncKeyField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqSyncKeyField_TradingDay = NULL;
	Py_ssize_t pReqSyncKeyField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqSyncKeyField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqSyncKeyField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqSyncKeyField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pReqSyncKeyField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqSyncKeyField_UserID = NULL;
	Py_ssize_t pReqSyncKeyField_UserID_len = 0;

	//TThostFtdcAddInfoType char[129]
	const char *pReqSyncKeyField_Message = NULL;
	Py_ssize_t pReqSyncKeyField_Message_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pReqSyncKeyField_DeviceID = NULL;
	Py_ssize_t pReqSyncKeyField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pReqSyncKeyField_BrokerIDByBank = NULL;
	Py_ssize_t pReqSyncKeyField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pReqSyncKeyField_OperNo = NULL;
	Py_ssize_t pReqSyncKeyField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pReqSyncKeyField_RequestID = 0;

	//TThostFtdcTIDType int
	int pReqSyncKeyField_TID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#ii", (char **)kwlist
#endif

		, &pReqSyncKeyField_TradeCode, &pReqSyncKeyField_TradeCode_len
		, &pReqSyncKeyField_BankID, &pReqSyncKeyField_BankID_len
		, &pReqSyncKeyField_BankBranchID, &pReqSyncKeyField_BankBranchID_len
		, &pReqSyncKeyField_BrokerID, &pReqSyncKeyField_BrokerID_len
		, &pReqSyncKeyField_BrokerBranchID, &pReqSyncKeyField_BrokerBranchID_len
		, &pReqSyncKeyField_TradeDate, &pReqSyncKeyField_TradeDate_len
		, &pReqSyncKeyField_TradeTime, &pReqSyncKeyField_TradeTime_len
		, &pReqSyncKeyField_BankSerial, &pReqSyncKeyField_BankSerial_len
		, &pReqSyncKeyField_TradingDay, &pReqSyncKeyField_TradingDay_len
		, &pReqSyncKeyField_PlateSerial
		, &pReqSyncKeyField_LastFragment
		, &pReqSyncKeyField_SessionID
		, &pReqSyncKeyField_InstallID
		, &pReqSyncKeyField_UserID, &pReqSyncKeyField_UserID_len
		, &pReqSyncKeyField_Message, &pReqSyncKeyField_Message_len
		, &pReqSyncKeyField_DeviceID, &pReqSyncKeyField_DeviceID_len
		, &pReqSyncKeyField_BrokerIDByBank, &pReqSyncKeyField_BrokerIDByBank_len
		, &pReqSyncKeyField_OperNo, &pReqSyncKeyField_OperNo_len
		, &pReqSyncKeyField_RequestID
		, &pReqSyncKeyField_TID


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqSyncKeyField_TradeCode != NULL) {
		if(pReqSyncKeyField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqSyncKeyField_TradeCode, sizeof(self->data.TradeCode) );
		pReqSyncKeyField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqSyncKeyField_BankID != NULL) {
		if(pReqSyncKeyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqSyncKeyField_BankID, sizeof(self->data.BankID) );
		pReqSyncKeyField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqSyncKeyField_BankBranchID != NULL) {
		if(pReqSyncKeyField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqSyncKeyField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqSyncKeyField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqSyncKeyField_BrokerID != NULL) {
		if(pReqSyncKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqSyncKeyField_BrokerID, sizeof(self->data.BrokerID) );
		pReqSyncKeyField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqSyncKeyField_BrokerBranchID != NULL) {
		if(pReqSyncKeyField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqSyncKeyField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqSyncKeyField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqSyncKeyField_TradeDate != NULL) {
		if(pReqSyncKeyField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqSyncKeyField_TradeDate, sizeof(self->data.TradeDate) );
		pReqSyncKeyField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqSyncKeyField_TradeTime != NULL) {
		if(pReqSyncKeyField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqSyncKeyField_TradeTime, sizeof(self->data.TradeTime) );
		pReqSyncKeyField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqSyncKeyField_BankSerial != NULL) {
		if(pReqSyncKeyField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqSyncKeyField_BankSerial, sizeof(self->data.BankSerial) );
		pReqSyncKeyField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqSyncKeyField_TradingDay != NULL) {
		if(pReqSyncKeyField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqSyncKeyField_TradingDay, sizeof(self->data.TradingDay) );
		pReqSyncKeyField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqSyncKeyField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqSyncKeyField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqSyncKeyField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pReqSyncKeyField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pReqSyncKeyField_UserID != NULL) {
		if(pReqSyncKeyField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqSyncKeyField_UserID, sizeof(self->data.UserID) );
		pReqSyncKeyField_UserID = NULL;
	}

	//TThostFtdcAddInfoType char[129]
	if(pReqSyncKeyField_Message != NULL) {
		if(pReqSyncKeyField_Message_len > (Py_ssize_t)sizeof(self->data.Message)) {
			PyErr_Format(PyExc_ValueError, "Message too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_Message_len, (Py_ssize_t)sizeof(self->data.Message));
			return -1;
		}
		strncpy(self->data.Message, pReqSyncKeyField_Message, sizeof(self->data.Message) );
		pReqSyncKeyField_Message = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pReqSyncKeyField_DeviceID != NULL) {
		if(pReqSyncKeyField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pReqSyncKeyField_DeviceID, sizeof(self->data.DeviceID) );
		pReqSyncKeyField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pReqSyncKeyField_BrokerIDByBank != NULL) {
		if(pReqSyncKeyField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pReqSyncKeyField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pReqSyncKeyField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pReqSyncKeyField_OperNo != NULL) {
		if(pReqSyncKeyField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pReqSyncKeyField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pReqSyncKeyField_OperNo, sizeof(self->data.OperNo) );
		pReqSyncKeyField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pReqSyncKeyField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pReqSyncKeyField_TID;



    return 0;
}

static void PyCThostFtdcReqSyncKeyField_dealloc(PyCThostFtdcReqSyncKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqSyncKeyField_repr(PyCThostFtdcReqSyncKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
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


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqSyncKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_TradeCode(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_BankID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_BankBranchID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_BrokerID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_BrokerBranchID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_TradeDate(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_TradeTime(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_BankSerial(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_TradingDay(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_PlateSerial(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_LastFragment(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_SessionID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_InstallID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_UserID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_Message(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.Message);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_DeviceID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_BrokerIDByBank(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_OperNo(PyCThostFtdcReqSyncKeyField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_RequestID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcReqSyncKeyField_get_TID(PyCThostFtdcReqSyncKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static int PyCThostFtdcReqSyncKeyField_set_TradeCode(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_BankID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_BankBranchID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_BrokerID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_BrokerBranchID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_TradeDate(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_TradeTime(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_BankSerial(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_TradingDay(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_PlateSerial(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_LastFragment(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_SessionID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_InstallID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_UserID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_Message(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_DeviceID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_BrokerIDByBank(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_OperNo(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_RequestID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqSyncKeyField_set_TID(PyCThostFtdcReqSyncKeyField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqSyncKeyField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqSyncKeyField_get_TradeCode, (setter)PyCThostFtdcReqSyncKeyField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqSyncKeyField_get_BankID, (setter)PyCThostFtdcReqSyncKeyField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqSyncKeyField_get_BankBranchID, (setter)PyCThostFtdcReqSyncKeyField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqSyncKeyField_get_BrokerID, (setter)PyCThostFtdcReqSyncKeyField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqSyncKeyField_get_BrokerBranchID, (setter)PyCThostFtdcReqSyncKeyField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqSyncKeyField_get_TradeDate, (setter)PyCThostFtdcReqSyncKeyField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqSyncKeyField_get_TradeTime, (setter)PyCThostFtdcReqSyncKeyField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqSyncKeyField_get_BankSerial, (setter)PyCThostFtdcReqSyncKeyField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqSyncKeyField_get_TradingDay, (setter)PyCThostFtdcReqSyncKeyField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqSyncKeyField_get_PlateSerial, (setter)PyCThostFtdcReqSyncKeyField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqSyncKeyField_get_LastFragment, (setter)PyCThostFtdcReqSyncKeyField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqSyncKeyField_get_SessionID, (setter)PyCThostFtdcReqSyncKeyField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcReqSyncKeyField_get_InstallID, (setter)PyCThostFtdcReqSyncKeyField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqSyncKeyField_get_UserID, (setter)PyCThostFtdcReqSyncKeyField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Message", (getter)PyCThostFtdcReqSyncKeyField_get_Message, (setter)PyCThostFtdcReqSyncKeyField_set_Message, (char *)"Message", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcReqSyncKeyField_get_DeviceID, (setter)PyCThostFtdcReqSyncKeyField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcReqSyncKeyField_get_BrokerIDByBank, (setter)PyCThostFtdcReqSyncKeyField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcReqSyncKeyField_get_OperNo, (setter)PyCThostFtdcReqSyncKeyField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcReqSyncKeyField_get_RequestID, (setter)PyCThostFtdcReqSyncKeyField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcReqSyncKeyField_get_TID, (setter)PyCThostFtdcReqSyncKeyField_set_TID, (char *)"TID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqSyncKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqSyncKeyField",	/* tp_name */
	sizeof(PyCThostFtdcReqSyncKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqSyncKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqSyncKeyField_repr,   /* tp_repr */
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
	"CThostFtdcReqSyncKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqSyncKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqSyncKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqSyncKeyField_new,       /* tp_new */
};

int PyCThostFtdcReqSyncKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqSyncKeyField  */
	if (PyType_Ready(&PyCThostFtdcReqSyncKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqSyncKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqSyncKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqSyncKeyField", (PyObject *)&PyCThostFtdcReqSyncKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqSyncKeyField to module");
        Py_DECREF(&PyCThostFtdcReqSyncKeyFieldType);
		return -1;
    }

    return 0;
}
