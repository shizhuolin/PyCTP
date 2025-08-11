
#include "PyCThostFtdcFutureSignIOField.h"



static PyObject *PyCThostFtdcFutureSignIOField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcFutureSignIOField *self = (PyCThostFtdcFutureSignIOField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcFutureSignIOField_init(PyCThostFtdcFutureSignIOField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "InstallID", "UserID", "Digest", "CurrencyID", "DeviceID", "BrokerIDByBank", "OperNo", "RequestID", "TID",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pFutureSignIOField_TradeCode = NULL;
	Py_ssize_t pFutureSignIOField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pFutureSignIOField_BankID = NULL;
	Py_ssize_t pFutureSignIOField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pFutureSignIOField_BankBranchID = NULL;
	Py_ssize_t pFutureSignIOField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pFutureSignIOField_BrokerID = NULL;
	Py_ssize_t pFutureSignIOField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pFutureSignIOField_BrokerBranchID = NULL;
	Py_ssize_t pFutureSignIOField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pFutureSignIOField_TradeDate = NULL;
	Py_ssize_t pFutureSignIOField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pFutureSignIOField_TradeTime = NULL;
	Py_ssize_t pFutureSignIOField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pFutureSignIOField_BankSerial = NULL;
	Py_ssize_t pFutureSignIOField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pFutureSignIOField_TradingDay = NULL;
	Py_ssize_t pFutureSignIOField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pFutureSignIOField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pFutureSignIOField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pFutureSignIOField_SessionID = 0;

	//TThostFtdcInstallIDType int
	int pFutureSignIOField_InstallID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pFutureSignIOField_UserID = NULL;
	Py_ssize_t pFutureSignIOField_UserID_len = 0;

	//TThostFtdcDigestType char[36]
	const char *pFutureSignIOField_Digest = NULL;
	Py_ssize_t pFutureSignIOField_Digest_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pFutureSignIOField_CurrencyID = NULL;
	Py_ssize_t pFutureSignIOField_CurrencyID_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pFutureSignIOField_DeviceID = NULL;
	Py_ssize_t pFutureSignIOField_DeviceID_len = 0;

	//TThostFtdcBankCodingForFutureType char[33]
	const char *pFutureSignIOField_BrokerIDByBank = NULL;
	Py_ssize_t pFutureSignIOField_BrokerIDByBank_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pFutureSignIOField_OperNo = NULL;
	Py_ssize_t pFutureSignIOField_OperNo_len = 0;

	//TThostFtdcRequestIDType int
	int pFutureSignIOField_RequestID = 0;

	//TThostFtdcTIDType int
	int pFutureSignIOField_TID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#iciiy#y#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#iciis#s#s#s#s#s#ii", (char **)kwlist
#endif

		, &pFutureSignIOField_TradeCode, &pFutureSignIOField_TradeCode_len
		, &pFutureSignIOField_BankID, &pFutureSignIOField_BankID_len
		, &pFutureSignIOField_BankBranchID, &pFutureSignIOField_BankBranchID_len
		, &pFutureSignIOField_BrokerID, &pFutureSignIOField_BrokerID_len
		, &pFutureSignIOField_BrokerBranchID, &pFutureSignIOField_BrokerBranchID_len
		, &pFutureSignIOField_TradeDate, &pFutureSignIOField_TradeDate_len
		, &pFutureSignIOField_TradeTime, &pFutureSignIOField_TradeTime_len
		, &pFutureSignIOField_BankSerial, &pFutureSignIOField_BankSerial_len
		, &pFutureSignIOField_TradingDay, &pFutureSignIOField_TradingDay_len
		, &pFutureSignIOField_PlateSerial
		, &pFutureSignIOField_LastFragment
		, &pFutureSignIOField_SessionID
		, &pFutureSignIOField_InstallID
		, &pFutureSignIOField_UserID, &pFutureSignIOField_UserID_len
		, &pFutureSignIOField_Digest, &pFutureSignIOField_Digest_len
		, &pFutureSignIOField_CurrencyID, &pFutureSignIOField_CurrencyID_len
		, &pFutureSignIOField_DeviceID, &pFutureSignIOField_DeviceID_len
		, &pFutureSignIOField_BrokerIDByBank, &pFutureSignIOField_BrokerIDByBank_len
		, &pFutureSignIOField_OperNo, &pFutureSignIOField_OperNo_len
		, &pFutureSignIOField_RequestID
		, &pFutureSignIOField_TID


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pFutureSignIOField_TradeCode != NULL) {
		if(pFutureSignIOField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pFutureSignIOField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pFutureSignIOField_TradeCode, sizeof(self->data.TradeCode) );
		pFutureSignIOField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pFutureSignIOField_BankID != NULL) {
		if(pFutureSignIOField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pFutureSignIOField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pFutureSignIOField_BankID, sizeof(self->data.BankID) );
		pFutureSignIOField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pFutureSignIOField_BankBranchID != NULL) {
		if(pFutureSignIOField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pFutureSignIOField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pFutureSignIOField_BankBranchID, sizeof(self->data.BankBranchID) );
		pFutureSignIOField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pFutureSignIOField_BrokerID != NULL) {
		if(pFutureSignIOField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pFutureSignIOField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pFutureSignIOField_BrokerID, sizeof(self->data.BrokerID) );
		pFutureSignIOField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pFutureSignIOField_BrokerBranchID != NULL) {
		if(pFutureSignIOField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pFutureSignIOField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pFutureSignIOField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pFutureSignIOField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pFutureSignIOField_TradeDate != NULL) {
		if(pFutureSignIOField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pFutureSignIOField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pFutureSignIOField_TradeDate, sizeof(self->data.TradeDate) );
		pFutureSignIOField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pFutureSignIOField_TradeTime != NULL) {
		if(pFutureSignIOField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pFutureSignIOField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pFutureSignIOField_TradeTime, sizeof(self->data.TradeTime) );
		pFutureSignIOField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pFutureSignIOField_BankSerial != NULL) {
		if(pFutureSignIOField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pFutureSignIOField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pFutureSignIOField_BankSerial, sizeof(self->data.BankSerial) );
		pFutureSignIOField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pFutureSignIOField_TradingDay != NULL) {
		if(pFutureSignIOField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pFutureSignIOField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pFutureSignIOField_TradingDay, sizeof(self->data.TradingDay) );
		pFutureSignIOField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pFutureSignIOField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pFutureSignIOField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pFutureSignIOField_SessionID;

	//TThostFtdcInstallIDType int
	self->data.InstallID = pFutureSignIOField_InstallID;

	//TThostFtdcUserIDType char[16]
	if(pFutureSignIOField_UserID != NULL) {
		if(pFutureSignIOField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pFutureSignIOField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pFutureSignIOField_UserID, sizeof(self->data.UserID) );
		pFutureSignIOField_UserID = NULL;
	}

	//TThostFtdcDigestType char[36]
	if(pFutureSignIOField_Digest != NULL) {
		if(pFutureSignIOField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pFutureSignIOField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pFutureSignIOField_Digest, sizeof(self->data.Digest) );
		pFutureSignIOField_Digest = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pFutureSignIOField_CurrencyID != NULL) {
		if(pFutureSignIOField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pFutureSignIOField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pFutureSignIOField_CurrencyID, sizeof(self->data.CurrencyID) );
		pFutureSignIOField_CurrencyID = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pFutureSignIOField_DeviceID != NULL) {
		if(pFutureSignIOField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pFutureSignIOField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pFutureSignIOField_DeviceID, sizeof(self->data.DeviceID) );
		pFutureSignIOField_DeviceID = NULL;
	}

	//TThostFtdcBankCodingForFutureType char[33]
	if(pFutureSignIOField_BrokerIDByBank != NULL) {
		if(pFutureSignIOField_BrokerIDByBank_len > (Py_ssize_t)sizeof(self->data.BrokerIDByBank)) {
			PyErr_Format(PyExc_ValueError, "BrokerIDByBank too long: length=%zd (max allowed is %zd)", pFutureSignIOField_BrokerIDByBank_len, (Py_ssize_t)sizeof(self->data.BrokerIDByBank));
			return -1;
		}
		strncpy(self->data.BrokerIDByBank, pFutureSignIOField_BrokerIDByBank, sizeof(self->data.BrokerIDByBank) );
		pFutureSignIOField_BrokerIDByBank = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pFutureSignIOField_OperNo != NULL) {
		if(pFutureSignIOField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pFutureSignIOField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pFutureSignIOField_OperNo, sizeof(self->data.OperNo) );
		pFutureSignIOField_OperNo = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pFutureSignIOField_RequestID;

	//TThostFtdcTIDType int
	self->data.TID = pFutureSignIOField_TID;



    return 0;
}

static void PyCThostFtdcFutureSignIOField_dealloc(PyCThostFtdcFutureSignIOField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcFutureSignIOField_repr(PyCThostFtdcFutureSignIOField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcFutureSignIOField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_TradeCode(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_BankID(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_BankBranchID(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_BrokerID(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_BrokerBranchID(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_TradeDate(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_TradeTime(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_BankSerial(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_TradingDay(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_PlateSerial(PyCThostFtdcFutureSignIOField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcFutureSignIOField_get_LastFragment(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_SessionID(PyCThostFtdcFutureSignIOField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcFutureSignIOField_get_InstallID(PyCThostFtdcFutureSignIOField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcFutureSignIOField_get_UserID(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_Digest(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_CurrencyID(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_DeviceID(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_BrokerIDByBank(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerIDByBank);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_OperNo(PyCThostFtdcFutureSignIOField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcFutureSignIOField_get_RequestID(PyCThostFtdcFutureSignIOField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcFutureSignIOField_get_TID(PyCThostFtdcFutureSignIOField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static int PyCThostFtdcFutureSignIOField_set_TradeCode(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_BankID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_BankBranchID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_BrokerID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_BrokerBranchID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_TradeDate(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_TradeTime(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_BankSerial(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_TradingDay(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_PlateSerial(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_LastFragment(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_SessionID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_InstallID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_UserID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_Digest(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_CurrencyID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_DeviceID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_BrokerIDByBank(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_OperNo(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_RequestID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcFutureSignIOField_set_TID(PyCThostFtdcFutureSignIOField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcFutureSignIOField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcFutureSignIOField_get_TradeCode, (setter)PyCThostFtdcFutureSignIOField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcFutureSignIOField_get_BankID, (setter)PyCThostFtdcFutureSignIOField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcFutureSignIOField_get_BankBranchID, (setter)PyCThostFtdcFutureSignIOField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcFutureSignIOField_get_BrokerID, (setter)PyCThostFtdcFutureSignIOField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcFutureSignIOField_get_BrokerBranchID, (setter)PyCThostFtdcFutureSignIOField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcFutureSignIOField_get_TradeDate, (setter)PyCThostFtdcFutureSignIOField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcFutureSignIOField_get_TradeTime, (setter)PyCThostFtdcFutureSignIOField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcFutureSignIOField_get_BankSerial, (setter)PyCThostFtdcFutureSignIOField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcFutureSignIOField_get_TradingDay, (setter)PyCThostFtdcFutureSignIOField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcFutureSignIOField_get_PlateSerial, (setter)PyCThostFtdcFutureSignIOField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcFutureSignIOField_get_LastFragment, (setter)PyCThostFtdcFutureSignIOField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcFutureSignIOField_get_SessionID, (setter)PyCThostFtdcFutureSignIOField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcFutureSignIOField_get_InstallID, (setter)PyCThostFtdcFutureSignIOField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcFutureSignIOField_get_UserID, (setter)PyCThostFtdcFutureSignIOField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcFutureSignIOField_get_Digest, (setter)PyCThostFtdcFutureSignIOField_set_Digest, (char *)"Digest", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcFutureSignIOField_get_CurrencyID, (setter)PyCThostFtdcFutureSignIOField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcFutureSignIOField_get_DeviceID, (setter)PyCThostFtdcFutureSignIOField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"BrokerIDByBank", (getter)PyCThostFtdcFutureSignIOField_get_BrokerIDByBank, (setter)PyCThostFtdcFutureSignIOField_set_BrokerIDByBank, (char *)"BrokerIDByBank", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcFutureSignIOField_get_OperNo, (setter)PyCThostFtdcFutureSignIOField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcFutureSignIOField_get_RequestID, (setter)PyCThostFtdcFutureSignIOField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcFutureSignIOField_get_TID, (setter)PyCThostFtdcFutureSignIOField_set_TID, (char *)"TID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcFutureSignIOFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcFutureSignIOField",	/* tp_name */
	sizeof(PyCThostFtdcFutureSignIOField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcFutureSignIOField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcFutureSignIOField_repr,   /* tp_repr */
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
	"CThostFtdcFutureSignIOField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcFutureSignIOField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcFutureSignIOField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcFutureSignIOField_new,       /* tp_new */
};

int PyCThostFtdcFutureSignIOFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcFutureSignIOField  */
	if (PyType_Ready(&PyCThostFtdcFutureSignIOFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcFutureSignIOField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcFutureSignIOFieldType);
    if( PyModule_AddObject(module, "CThostFtdcFutureSignIOField", (PyObject *)&PyCThostFtdcFutureSignIOFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcFutureSignIOField to module");
        Py_DECREF(&PyCThostFtdcFutureSignIOFieldType);
		return -1;
    }

    return 0;
}
