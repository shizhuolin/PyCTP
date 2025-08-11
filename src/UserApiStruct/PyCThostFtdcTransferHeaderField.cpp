
#include "PyCThostFtdcTransferHeaderField.h"



static PyObject *PyCThostFtdcTransferHeaderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferHeaderField *self = (PyCThostFtdcTransferHeaderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferHeaderField_init(PyCThostFtdcTransferHeaderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Version", "TradeCode", "TradeDate", "TradeTime", "TradeSerial", "FutureID", "BankID", "BankBrchID", "OperNo", "DeviceID", "RecordNum", "SessionID", "RequestID",  NULL};

	//TThostFtdcVersionType char[4]
	const char *pTransferHeaderField_Version = NULL;
	Py_ssize_t pTransferHeaderField_Version_len = 0;

	//TThostFtdcTradeCodeType char[7]
	const char *pTransferHeaderField_TradeCode = NULL;
	Py_ssize_t pTransferHeaderField_TradeCode_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pTransferHeaderField_TradeDate = NULL;
	Py_ssize_t pTransferHeaderField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pTransferHeaderField_TradeTime = NULL;
	Py_ssize_t pTransferHeaderField_TradeTime_len = 0;

	//TThostFtdcTradeSerialType char[9]
	const char *pTransferHeaderField_TradeSerial = NULL;
	Py_ssize_t pTransferHeaderField_TradeSerial_len = 0;

	//TThostFtdcFutureIDType char[11]
	const char *pTransferHeaderField_FutureID = NULL;
	Py_ssize_t pTransferHeaderField_FutureID_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pTransferHeaderField_BankID = NULL;
	Py_ssize_t pTransferHeaderField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pTransferHeaderField_BankBrchID = NULL;
	Py_ssize_t pTransferHeaderField_BankBrchID_len = 0;

	//TThostFtdcOperNoType char[17]
	const char *pTransferHeaderField_OperNo = NULL;
	Py_ssize_t pTransferHeaderField_OperNo_len = 0;

	//TThostFtdcDeviceIDType char[3]
	const char *pTransferHeaderField_DeviceID = NULL;
	Py_ssize_t pTransferHeaderField_DeviceID_len = 0;

	//TThostFtdcRecordNumType char[7]
	const char *pTransferHeaderField_RecordNum = NULL;
	Py_ssize_t pTransferHeaderField_RecordNum_len = 0;

	//TThostFtdcSessionIDType int
	int pTransferHeaderField_SessionID = 0;

	//TThostFtdcRequestIDType int
	int pTransferHeaderField_RequestID = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#ii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#ii", (char **)kwlist
#endif

		, &pTransferHeaderField_Version, &pTransferHeaderField_Version_len
		, &pTransferHeaderField_TradeCode, &pTransferHeaderField_TradeCode_len
		, &pTransferHeaderField_TradeDate, &pTransferHeaderField_TradeDate_len
		, &pTransferHeaderField_TradeTime, &pTransferHeaderField_TradeTime_len
		, &pTransferHeaderField_TradeSerial, &pTransferHeaderField_TradeSerial_len
		, &pTransferHeaderField_FutureID, &pTransferHeaderField_FutureID_len
		, &pTransferHeaderField_BankID, &pTransferHeaderField_BankID_len
		, &pTransferHeaderField_BankBrchID, &pTransferHeaderField_BankBrchID_len
		, &pTransferHeaderField_OperNo, &pTransferHeaderField_OperNo_len
		, &pTransferHeaderField_DeviceID, &pTransferHeaderField_DeviceID_len
		, &pTransferHeaderField_RecordNum, &pTransferHeaderField_RecordNum_len
		, &pTransferHeaderField_SessionID
		, &pTransferHeaderField_RequestID


    )) {
        return -1;
    }

	//TThostFtdcVersionType char[4]
	if(pTransferHeaderField_Version != NULL) {
		if(pTransferHeaderField_Version_len > (Py_ssize_t)sizeof(self->data.Version)) {
			PyErr_Format(PyExc_ValueError, "Version too long: length=%zd (max allowed is %zd)", pTransferHeaderField_Version_len, (Py_ssize_t)sizeof(self->data.Version));
			return -1;
		}
		strncpy(self->data.Version, pTransferHeaderField_Version, sizeof(self->data.Version) );
		pTransferHeaderField_Version = NULL;
	}

	//TThostFtdcTradeCodeType char[7]
	if(pTransferHeaderField_TradeCode != NULL) {
		if(pTransferHeaderField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pTransferHeaderField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pTransferHeaderField_TradeCode, sizeof(self->data.TradeCode) );
		pTransferHeaderField_TradeCode = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pTransferHeaderField_TradeDate != NULL) {
		if(pTransferHeaderField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pTransferHeaderField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pTransferHeaderField_TradeDate, sizeof(self->data.TradeDate) );
		pTransferHeaderField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pTransferHeaderField_TradeTime != NULL) {
		if(pTransferHeaderField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pTransferHeaderField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pTransferHeaderField_TradeTime, sizeof(self->data.TradeTime) );
		pTransferHeaderField_TradeTime = NULL;
	}

	//TThostFtdcTradeSerialType char[9]
	if(pTransferHeaderField_TradeSerial != NULL) {
		if(pTransferHeaderField_TradeSerial_len > (Py_ssize_t)sizeof(self->data.TradeSerial)) {
			PyErr_Format(PyExc_ValueError, "TradeSerial too long: length=%zd (max allowed is %zd)", pTransferHeaderField_TradeSerial_len, (Py_ssize_t)sizeof(self->data.TradeSerial));
			return -1;
		}
		strncpy(self->data.TradeSerial, pTransferHeaderField_TradeSerial, sizeof(self->data.TradeSerial) );
		pTransferHeaderField_TradeSerial = NULL;
	}

	//TThostFtdcFutureIDType char[11]
	if(pTransferHeaderField_FutureID != NULL) {
		if(pTransferHeaderField_FutureID_len > (Py_ssize_t)sizeof(self->data.FutureID)) {
			PyErr_Format(PyExc_ValueError, "FutureID too long: length=%zd (max allowed is %zd)", pTransferHeaderField_FutureID_len, (Py_ssize_t)sizeof(self->data.FutureID));
			return -1;
		}
		strncpy(self->data.FutureID, pTransferHeaderField_FutureID, sizeof(self->data.FutureID) );
		pTransferHeaderField_FutureID = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pTransferHeaderField_BankID != NULL) {
		if(pTransferHeaderField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pTransferHeaderField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pTransferHeaderField_BankID, sizeof(self->data.BankID) );
		pTransferHeaderField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pTransferHeaderField_BankBrchID != NULL) {
		if(pTransferHeaderField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
			PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", pTransferHeaderField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
			return -1;
		}
		strncpy(self->data.BankBrchID, pTransferHeaderField_BankBrchID, sizeof(self->data.BankBrchID) );
		pTransferHeaderField_BankBrchID = NULL;
	}

	//TThostFtdcOperNoType char[17]
	if(pTransferHeaderField_OperNo != NULL) {
		if(pTransferHeaderField_OperNo_len > (Py_ssize_t)sizeof(self->data.OperNo)) {
			PyErr_Format(PyExc_ValueError, "OperNo too long: length=%zd (max allowed is %zd)", pTransferHeaderField_OperNo_len, (Py_ssize_t)sizeof(self->data.OperNo));
			return -1;
		}
		strncpy(self->data.OperNo, pTransferHeaderField_OperNo, sizeof(self->data.OperNo) );
		pTransferHeaderField_OperNo = NULL;
	}

	//TThostFtdcDeviceIDType char[3]
	if(pTransferHeaderField_DeviceID != NULL) {
		if(pTransferHeaderField_DeviceID_len > (Py_ssize_t)sizeof(self->data.DeviceID)) {
			PyErr_Format(PyExc_ValueError, "DeviceID too long: length=%zd (max allowed is %zd)", pTransferHeaderField_DeviceID_len, (Py_ssize_t)sizeof(self->data.DeviceID));
			return -1;
		}
		strncpy(self->data.DeviceID, pTransferHeaderField_DeviceID, sizeof(self->data.DeviceID) );
		pTransferHeaderField_DeviceID = NULL;
	}

	//TThostFtdcRecordNumType char[7]
	if(pTransferHeaderField_RecordNum != NULL) {
		if(pTransferHeaderField_RecordNum_len > (Py_ssize_t)sizeof(self->data.RecordNum)) {
			PyErr_Format(PyExc_ValueError, "RecordNum too long: length=%zd (max allowed is %zd)", pTransferHeaderField_RecordNum_len, (Py_ssize_t)sizeof(self->data.RecordNum));
			return -1;
		}
		strncpy(self->data.RecordNum, pTransferHeaderField_RecordNum, sizeof(self->data.RecordNum) );
		pTransferHeaderField_RecordNum = NULL;
	}

	//TThostFtdcSessionIDType int
	self->data.SessionID = pTransferHeaderField_SessionID;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pTransferHeaderField_RequestID;



    return 0;
}

static void PyCThostFtdcTransferHeaderField_dealloc(PyCThostFtdcTransferHeaderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferHeaderField_repr(PyCThostFtdcTransferHeaderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i}"
#endif

		, "Version", self->data.Version 
		, "TradeCode", self->data.TradeCode 
		, "TradeDate", self->data.TradeDate 
		, "TradeTime", self->data.TradeTime 
		, "TradeSerial", self->data.TradeSerial 
		, "FutureID", self->data.FutureID 
		, "BankID", self->data.BankID 
		, "BankBrchID", self->data.BankBrchID 
		, "OperNo", self->data.OperNo 
		, "DeviceID", self->data.DeviceID 
		, "RecordNum", self->data.RecordNum 
		, "SessionID", self->data.SessionID
		, "RequestID", self->data.RequestID


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferHeaderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_Version(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.Version);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_TradeCode(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_TradeDate(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_TradeTime(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_TradeSerial(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeSerial);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_FutureID(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureID);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_BankID(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_BankBrchID(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBrchID);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_OperNo(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.OperNo);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_DeviceID(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.DeviceID);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_RecordNum(PyCThostFtdcTransferHeaderField *self, void *closure) {
	return PyBytes_FromString(self->data.RecordNum);
}

static PyObject *PyCThostFtdcTransferHeaderField_get_SessionID(PyCThostFtdcTransferHeaderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcTransferHeaderField_get_RequestID(PyCThostFtdcTransferHeaderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static int PyCThostFtdcTransferHeaderField_set_Version(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Version Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Version)) {
		PyErr_SetString(PyExc_ValueError, "Version must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.Version, buf, sizeof(self->data.Version));
	return 0;
}

static int PyCThostFtdcTransferHeaderField_set_TradeCode(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferHeaderField_set_TradeDate(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferHeaderField_set_TradeTime(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferHeaderField_set_TradeSerial(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeSerial Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeSerial)) {
		PyErr_SetString(PyExc_ValueError, "TradeSerial must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeSerial, buf, sizeof(self->data.TradeSerial));
	return 0;
}

static int PyCThostFtdcTransferHeaderField_set_FutureID(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FutureID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FutureID)) {
		PyErr_SetString(PyExc_ValueError, "FutureID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.FutureID, buf, sizeof(self->data.FutureID));
	return 0;
}

static int PyCThostFtdcTransferHeaderField_set_BankID(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferHeaderField_set_BankBrchID(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankBrchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
		PyErr_SetString(PyExc_ValueError, "BankBrchID must be less than 5 bytes");
		return -1;
	}
	strncpy(self->data.BankBrchID, buf, sizeof(self->data.BankBrchID));
	return 0;
}

static int PyCThostFtdcTransferHeaderField_set_OperNo(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferHeaderField_set_DeviceID(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferHeaderField_set_RecordNum(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RecordNum Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RecordNum)) {
		PyErr_SetString(PyExc_ValueError, "RecordNum must be less than 7 bytes");
		return -1;
	}
	strncpy(self->data.RecordNum, buf, sizeof(self->data.RecordNum));
	return 0;
}

static int PyCThostFtdcTransferHeaderField_set_SessionID(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferHeaderField_set_RequestID(PyCThostFtdcTransferHeaderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcTransferHeaderField_getset[] = {
	 {(char *)"Version", (getter)PyCThostFtdcTransferHeaderField_get_Version, (setter)PyCThostFtdcTransferHeaderField_set_Version, (char *)"Version", NULL},
	 {(char *)"TradeCode", (getter)PyCThostFtdcTransferHeaderField_get_TradeCode, (setter)PyCThostFtdcTransferHeaderField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"TradeDate", (getter)PyCThostFtdcTransferHeaderField_get_TradeDate, (setter)PyCThostFtdcTransferHeaderField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcTransferHeaderField_get_TradeTime, (setter)PyCThostFtdcTransferHeaderField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"TradeSerial", (getter)PyCThostFtdcTransferHeaderField_get_TradeSerial, (setter)PyCThostFtdcTransferHeaderField_set_TradeSerial, (char *)"TradeSerial", NULL},
	 {(char *)"FutureID", (getter)PyCThostFtdcTransferHeaderField_get_FutureID, (setter)PyCThostFtdcTransferHeaderField_set_FutureID, (char *)"FutureID", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcTransferHeaderField_get_BankID, (setter)PyCThostFtdcTransferHeaderField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBrchID", (getter)PyCThostFtdcTransferHeaderField_get_BankBrchID, (setter)PyCThostFtdcTransferHeaderField_set_BankBrchID, (char *)"BankBrchID", NULL},
	 {(char *)"OperNo", (getter)PyCThostFtdcTransferHeaderField_get_OperNo, (setter)PyCThostFtdcTransferHeaderField_set_OperNo, (char *)"OperNo", NULL},
	 {(char *)"DeviceID", (getter)PyCThostFtdcTransferHeaderField_get_DeviceID, (setter)PyCThostFtdcTransferHeaderField_set_DeviceID, (char *)"DeviceID", NULL},
	 {(char *)"RecordNum", (getter)PyCThostFtdcTransferHeaderField_get_RecordNum, (setter)PyCThostFtdcTransferHeaderField_set_RecordNum, (char *)"RecordNum", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcTransferHeaderField_get_SessionID, (setter)PyCThostFtdcTransferHeaderField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcTransferHeaderField_get_RequestID, (setter)PyCThostFtdcTransferHeaderField_set_RequestID, (char *)"RequestID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferHeaderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferHeaderField",	/* tp_name */
	sizeof(PyCThostFtdcTransferHeaderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferHeaderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferHeaderField_repr,   /* tp_repr */
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
	"CThostFtdcTransferHeaderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferHeaderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferHeaderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferHeaderField_new,       /* tp_new */
};

int PyCThostFtdcTransferHeaderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferHeaderField  */
	if (PyType_Ready(&PyCThostFtdcTransferHeaderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferHeaderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferHeaderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferHeaderField", (PyObject *)&PyCThostFtdcTransferHeaderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferHeaderField to module");
        Py_DECREF(&PyCThostFtdcTransferHeaderFieldType);
		return -1;
    }

    return 0;
}
