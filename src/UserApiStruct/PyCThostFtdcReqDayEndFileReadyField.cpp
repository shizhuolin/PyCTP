
#include "PyCThostFtdcReqDayEndFileReadyField.h"



static PyObject *PyCThostFtdcReqDayEndFileReadyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqDayEndFileReadyField *self = (PyCThostFtdcReqDayEndFileReadyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqDayEndFileReadyField_init(PyCThostFtdcReqDayEndFileReadyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeCode", "BankID", "BankBranchID", "BrokerID", "BrokerBranchID", "TradeDate", "TradeTime", "BankSerial", "TradingDay", "PlateSerial", "LastFragment", "SessionID", "FileBusinessCode", "Digest",  NULL};

	//TThostFtdcTradeCodeType char[7]
	const char *pReqDayEndFileReadyField_TradeCode = NULL;
	Py_ssize_t pReqDayEndFileReadyField_TradeCode_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pReqDayEndFileReadyField_BankID = NULL;
	Py_ssize_t pReqDayEndFileReadyField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pReqDayEndFileReadyField_BankBranchID = NULL;
	Py_ssize_t pReqDayEndFileReadyField_BankBranchID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqDayEndFileReadyField_BrokerID = NULL;
	Py_ssize_t pReqDayEndFileReadyField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pReqDayEndFileReadyField_BrokerBranchID = NULL;
	Py_ssize_t pReqDayEndFileReadyField_BrokerBranchID_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqDayEndFileReadyField_TradeDate = NULL;
	Py_ssize_t pReqDayEndFileReadyField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pReqDayEndFileReadyField_TradeTime = NULL;
	Py_ssize_t pReqDayEndFileReadyField_TradeTime_len = 0;

	//TThostFtdcBankSerialType char[13]
	const char *pReqDayEndFileReadyField_BankSerial = NULL;
	Py_ssize_t pReqDayEndFileReadyField_BankSerial_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pReqDayEndFileReadyField_TradingDay = NULL;
	Py_ssize_t pReqDayEndFileReadyField_TradingDay_len = 0;

	//TThostFtdcSerialType int
	int pReqDayEndFileReadyField_PlateSerial = 0;

	//TThostFtdcLastFragmentType char
	char pReqDayEndFileReadyField_LastFragment = 0;

	//TThostFtdcSessionIDType int
	int pReqDayEndFileReadyField_SessionID = 0;

	//TThostFtdcFileBusinessCodeType char
	char pReqDayEndFileReadyField_FileBusinessCode = 0;

	//TThostFtdcDigestType char[36]
	const char *pReqDayEndFileReadyField_Digest = NULL;
	Py_ssize_t pReqDayEndFileReadyField_Digest_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#icicy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#icics#", (char **)kwlist
#endif

		, &pReqDayEndFileReadyField_TradeCode, &pReqDayEndFileReadyField_TradeCode_len
		, &pReqDayEndFileReadyField_BankID, &pReqDayEndFileReadyField_BankID_len
		, &pReqDayEndFileReadyField_BankBranchID, &pReqDayEndFileReadyField_BankBranchID_len
		, &pReqDayEndFileReadyField_BrokerID, &pReqDayEndFileReadyField_BrokerID_len
		, &pReqDayEndFileReadyField_BrokerBranchID, &pReqDayEndFileReadyField_BrokerBranchID_len
		, &pReqDayEndFileReadyField_TradeDate, &pReqDayEndFileReadyField_TradeDate_len
		, &pReqDayEndFileReadyField_TradeTime, &pReqDayEndFileReadyField_TradeTime_len
		, &pReqDayEndFileReadyField_BankSerial, &pReqDayEndFileReadyField_BankSerial_len
		, &pReqDayEndFileReadyField_TradingDay, &pReqDayEndFileReadyField_TradingDay_len
		, &pReqDayEndFileReadyField_PlateSerial
		, &pReqDayEndFileReadyField_LastFragment
		, &pReqDayEndFileReadyField_SessionID
		, &pReqDayEndFileReadyField_FileBusinessCode
		, &pReqDayEndFileReadyField_Digest, &pReqDayEndFileReadyField_Digest_len


    )) {
        return -1;
    }

	//TThostFtdcTradeCodeType char[7]
	if(pReqDayEndFileReadyField_TradeCode != NULL) {
		if(pReqDayEndFileReadyField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pReqDayEndFileReadyField_TradeCode, sizeof(self->data.TradeCode) );
		pReqDayEndFileReadyField_TradeCode = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pReqDayEndFileReadyField_BankID != NULL) {
		if(pReqDayEndFileReadyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pReqDayEndFileReadyField_BankID, sizeof(self->data.BankID) );
		pReqDayEndFileReadyField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pReqDayEndFileReadyField_BankBranchID != NULL) {
		if(pReqDayEndFileReadyField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pReqDayEndFileReadyField_BankBranchID, sizeof(self->data.BankBranchID) );
		pReqDayEndFileReadyField_BankBranchID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqDayEndFileReadyField_BrokerID != NULL) {
		if(pReqDayEndFileReadyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqDayEndFileReadyField_BrokerID, sizeof(self->data.BrokerID) );
		pReqDayEndFileReadyField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pReqDayEndFileReadyField_BrokerBranchID != NULL) {
		if(pReqDayEndFileReadyField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pReqDayEndFileReadyField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pReqDayEndFileReadyField_BrokerBranchID = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqDayEndFileReadyField_TradeDate != NULL) {
		if(pReqDayEndFileReadyField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pReqDayEndFileReadyField_TradeDate, sizeof(self->data.TradeDate) );
		pReqDayEndFileReadyField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pReqDayEndFileReadyField_TradeTime != NULL) {
		if(pReqDayEndFileReadyField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pReqDayEndFileReadyField_TradeTime, sizeof(self->data.TradeTime) );
		pReqDayEndFileReadyField_TradeTime = NULL;
	}

	//TThostFtdcBankSerialType char[13]
	if(pReqDayEndFileReadyField_BankSerial != NULL) {
		if(pReqDayEndFileReadyField_BankSerial_len > (Py_ssize_t)sizeof(self->data.BankSerial)) {
			PyErr_Format(PyExc_ValueError, "BankSerial too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_BankSerial_len, (Py_ssize_t)sizeof(self->data.BankSerial));
			return -1;
		}
		strncpy(self->data.BankSerial, pReqDayEndFileReadyField_BankSerial, sizeof(self->data.BankSerial) );
		pReqDayEndFileReadyField_BankSerial = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pReqDayEndFileReadyField_TradingDay != NULL) {
		if(pReqDayEndFileReadyField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqDayEndFileReadyField_TradingDay, sizeof(self->data.TradingDay) );
		pReqDayEndFileReadyField_TradingDay = NULL;
	}

	//TThostFtdcSerialType int
	self->data.PlateSerial = pReqDayEndFileReadyField_PlateSerial;

	//TThostFtdcLastFragmentType char
	self->data.LastFragment = pReqDayEndFileReadyField_LastFragment;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pReqDayEndFileReadyField_SessionID;

	//TThostFtdcFileBusinessCodeType char
	self->data.FileBusinessCode = pReqDayEndFileReadyField_FileBusinessCode;

	//TThostFtdcDigestType char[36]
	if(pReqDayEndFileReadyField_Digest != NULL) {
		if(pReqDayEndFileReadyField_Digest_len > (Py_ssize_t)sizeof(self->data.Digest)) {
			PyErr_Format(PyExc_ValueError, "Digest too long: length=%zd (max allowed is %zd)", pReqDayEndFileReadyField_Digest_len, (Py_ssize_t)sizeof(self->data.Digest));
			return -1;
		}
		strncpy(self->data.Digest, pReqDayEndFileReadyField_Digest, sizeof(self->data.Digest) );
		pReqDayEndFileReadyField_Digest = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqDayEndFileReadyField_dealloc(PyCThostFtdcReqDayEndFileReadyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_repr(PyCThostFtdcReqDayEndFileReadyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:c,s:s}"
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
		, "FileBusinessCode", self->data.FileBusinessCode
		, "Digest", self->data.Digest 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqDayEndFileReadyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradeCode(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BankID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BankBranchID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BrokerID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BrokerBranchID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradeDate(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradeTime(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_BankSerial(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankSerial);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_TradingDay(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_PlateSerial(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.PlateSerial);
#else 
	return PyInt_FromLong(self->data.PlateSerial);
#endif 
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_LastFragment(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.LastFragment), 1);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_SessionID(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_FileBusinessCode(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.FileBusinessCode), 1);
}

static PyObject *PyCThostFtdcReqDayEndFileReadyField_get_Digest(PyCThostFtdcReqDayEndFileReadyField *self, void *closure) {
	return PyBytes_FromString(self->data.Digest);
}

static int PyCThostFtdcReqDayEndFileReadyField_set_TradeCode(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_BankID(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_BankBranchID(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_BrokerID(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_BrokerBranchID(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_TradeDate(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_TradeTime(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_BankSerial(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_TradingDay(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_PlateSerial(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_LastFragment(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_SessionID(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqDayEndFileReadyField_set_FileBusinessCode(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FileBusinessCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FileBusinessCode)) {
		PyErr_SetString(PyExc_ValueError, "FileBusinessCode must be less than 1 bytes");
		return -1;
	}
	self->data.FileBusinessCode = *buf;
	return 0;
}

static int PyCThostFtdcReqDayEndFileReadyField_set_Digest(PyCThostFtdcReqDayEndFileReadyField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqDayEndFileReadyField_getset[] = {
	 {(char *)"TradeCode", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradeCode, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BankID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BankBranchID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BrokerID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BrokerBranchID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradeDate, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradeTime, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcReqDayEndFileReadyField_get_BankSerial, (setter)PyCThostFtdcReqDayEndFileReadyField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqDayEndFileReadyField_get_TradingDay, (setter)PyCThostFtdcReqDayEndFileReadyField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"PlateSerial", (getter)PyCThostFtdcReqDayEndFileReadyField_get_PlateSerial, (setter)PyCThostFtdcReqDayEndFileReadyField_set_PlateSerial, (char *)"PlateSerial", NULL},
	 {(char *)"LastFragment", (getter)PyCThostFtdcReqDayEndFileReadyField_get_LastFragment, (setter)PyCThostFtdcReqDayEndFileReadyField_set_LastFragment, (char *)"LastFragment", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcReqDayEndFileReadyField_get_SessionID, (setter)PyCThostFtdcReqDayEndFileReadyField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"FileBusinessCode", (getter)PyCThostFtdcReqDayEndFileReadyField_get_FileBusinessCode, (setter)PyCThostFtdcReqDayEndFileReadyField_set_FileBusinessCode, (char *)"FileBusinessCode", NULL},
	 {(char *)"Digest", (getter)PyCThostFtdcReqDayEndFileReadyField_get_Digest, (setter)PyCThostFtdcReqDayEndFileReadyField_set_Digest, (char *)"Digest", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqDayEndFileReadyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqDayEndFileReadyField",	/* tp_name */
	sizeof(PyCThostFtdcReqDayEndFileReadyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqDayEndFileReadyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqDayEndFileReadyField_repr,   /* tp_repr */
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
	"CThostFtdcReqDayEndFileReadyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqDayEndFileReadyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqDayEndFileReadyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqDayEndFileReadyField_new,       /* tp_new */
};

int PyCThostFtdcReqDayEndFileReadyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqDayEndFileReadyField  */
	if (PyType_Ready(&PyCThostFtdcReqDayEndFileReadyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqDayEndFileReadyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqDayEndFileReadyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqDayEndFileReadyField", (PyObject *)&PyCThostFtdcReqDayEndFileReadyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqDayEndFileReadyField to module");
        Py_DECREF(&PyCThostFtdcReqDayEndFileReadyFieldType);
		return -1;
    }

    return 0;
}
