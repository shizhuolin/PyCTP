
#include "PyCThostFtdcTransferQryDetailRspField.h"



static PyObject *PyCThostFtdcTransferQryDetailRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTransferQryDetailRspField *self = (PyCThostFtdcTransferQryDetailRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTransferQryDetailRspField_init(PyCThostFtdcTransferQryDetailRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeDate", "TradeTime", "TradeCode", "FutureSerial", "FutureID", "FutureAccount", "BankSerial", "BankID", "BankBrchID", "BankAccount", "CertCode", "CurrencyCode", "TxAmount", "Flag",  NULL};

	//TThostFtdcDateType char[9]
	const char *pTransferQryDetailRspField_TradeDate = NULL;
	Py_ssize_t pTransferQryDetailRspField_TradeDate_len = 0;

	//TThostFtdcTradeTimeType char[9]
	const char *pTransferQryDetailRspField_TradeTime = NULL;
	Py_ssize_t pTransferQryDetailRspField_TradeTime_len = 0;

	//TThostFtdcTradeCodeType char[7]
	const char *pTransferQryDetailRspField_TradeCode = NULL;
	Py_ssize_t pTransferQryDetailRspField_TradeCode_len = 0;

	//TThostFtdcTradeSerialNoType int
	int pTransferQryDetailRspField_FutureSerial = 0;

	//TThostFtdcFutureIDType char[11]
	const char *pTransferQryDetailRspField_FutureID = NULL;
	Py_ssize_t pTransferQryDetailRspField_FutureID_len = 0;

	//TThostFtdcFutureAccountType char[22]
	const char *pTransferQryDetailRspField_FutureAccount = NULL;
	Py_ssize_t pTransferQryDetailRspField_FutureAccount_len = 0;

	//TThostFtdcTradeSerialNoType int
	int pTransferQryDetailRspField_BankSerial = 0;

	//TThostFtdcBankIDType char[4]
	const char *pTransferQryDetailRspField_BankID = NULL;
	Py_ssize_t pTransferQryDetailRspField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pTransferQryDetailRspField_BankBrchID = NULL;
	Py_ssize_t pTransferQryDetailRspField_BankBrchID_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pTransferQryDetailRspField_BankAccount = NULL;
	Py_ssize_t pTransferQryDetailRspField_BankAccount_len = 0;

	//TThostFtdcCertCodeType char[21]
	const char *pTransferQryDetailRspField_CertCode = NULL;
	Py_ssize_t pTransferQryDetailRspField_CertCode_len = 0;

	//TThostFtdcCurrencyCodeType char[4]
	const char *pTransferQryDetailRspField_CurrencyCode = NULL;
	Py_ssize_t pTransferQryDetailRspField_CurrencyCode_len = 0;

	//TThostFtdcMoneyType double
	double pTransferQryDetailRspField_TxAmount = 0.0;

	//TThostFtdcTransferValidFlagType char
	char pTransferQryDetailRspField_Flag = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#y#iy#y#y#y#y#dc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#s#is#s#s#s#s#dc", (char **)kwlist
#endif

		, &pTransferQryDetailRspField_TradeDate, &pTransferQryDetailRspField_TradeDate_len
		, &pTransferQryDetailRspField_TradeTime, &pTransferQryDetailRspField_TradeTime_len
		, &pTransferQryDetailRspField_TradeCode, &pTransferQryDetailRspField_TradeCode_len
		, &pTransferQryDetailRspField_FutureSerial
		, &pTransferQryDetailRspField_FutureID, &pTransferQryDetailRspField_FutureID_len
		, &pTransferQryDetailRspField_FutureAccount, &pTransferQryDetailRspField_FutureAccount_len
		, &pTransferQryDetailRspField_BankSerial
		, &pTransferQryDetailRspField_BankID, &pTransferQryDetailRspField_BankID_len
		, &pTransferQryDetailRspField_BankBrchID, &pTransferQryDetailRspField_BankBrchID_len
		, &pTransferQryDetailRspField_BankAccount, &pTransferQryDetailRspField_BankAccount_len
		, &pTransferQryDetailRspField_CertCode, &pTransferQryDetailRspField_CertCode_len
		, &pTransferQryDetailRspField_CurrencyCode, &pTransferQryDetailRspField_CurrencyCode_len
		, &pTransferQryDetailRspField_TxAmount
		, &pTransferQryDetailRspField_Flag


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pTransferQryDetailRspField_TradeDate != NULL) {
		if(pTransferQryDetailRspField_TradeDate_len > (Py_ssize_t)sizeof(self->data.TradeDate)) {
			PyErr_Format(PyExc_ValueError, "TradeDate too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_TradeDate_len, (Py_ssize_t)sizeof(self->data.TradeDate));
			return -1;
		}
		strncpy(self->data.TradeDate, pTransferQryDetailRspField_TradeDate, sizeof(self->data.TradeDate) );
		pTransferQryDetailRspField_TradeDate = NULL;
	}

	//TThostFtdcTradeTimeType char[9]
	if(pTransferQryDetailRspField_TradeTime != NULL) {
		if(pTransferQryDetailRspField_TradeTime_len > (Py_ssize_t)sizeof(self->data.TradeTime)) {
			PyErr_Format(PyExc_ValueError, "TradeTime too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_TradeTime_len, (Py_ssize_t)sizeof(self->data.TradeTime));
			return -1;
		}
		strncpy(self->data.TradeTime, pTransferQryDetailRspField_TradeTime, sizeof(self->data.TradeTime) );
		pTransferQryDetailRspField_TradeTime = NULL;
	}

	//TThostFtdcTradeCodeType char[7]
	if(pTransferQryDetailRspField_TradeCode != NULL) {
		if(pTransferQryDetailRspField_TradeCode_len > (Py_ssize_t)sizeof(self->data.TradeCode)) {
			PyErr_Format(PyExc_ValueError, "TradeCode too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_TradeCode_len, (Py_ssize_t)sizeof(self->data.TradeCode));
			return -1;
		}
		strncpy(self->data.TradeCode, pTransferQryDetailRspField_TradeCode, sizeof(self->data.TradeCode) );
		pTransferQryDetailRspField_TradeCode = NULL;
	}

	//TThostFtdcTradeSerialNoType int
	self->data.FutureSerial = pTransferQryDetailRspField_FutureSerial;

	//TThostFtdcFutureIDType char[11]
	if(pTransferQryDetailRspField_FutureID != NULL) {
		if(pTransferQryDetailRspField_FutureID_len > (Py_ssize_t)sizeof(self->data.FutureID)) {
			PyErr_Format(PyExc_ValueError, "FutureID too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_FutureID_len, (Py_ssize_t)sizeof(self->data.FutureID));
			return -1;
		}
		strncpy(self->data.FutureID, pTransferQryDetailRspField_FutureID, sizeof(self->data.FutureID) );
		pTransferQryDetailRspField_FutureID = NULL;
	}

	//TThostFtdcFutureAccountType char[22]
	if(pTransferQryDetailRspField_FutureAccount != NULL) {
		if(pTransferQryDetailRspField_FutureAccount_len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
			PyErr_Format(PyExc_ValueError, "FutureAccount too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_FutureAccount_len, (Py_ssize_t)sizeof(self->data.FutureAccount));
			return -1;
		}
		strncpy(self->data.FutureAccount, pTransferQryDetailRspField_FutureAccount, sizeof(self->data.FutureAccount) );
		pTransferQryDetailRspField_FutureAccount = NULL;
	}

	//TThostFtdcTradeSerialNoType int
	self->data.BankSerial = pTransferQryDetailRspField_BankSerial;

	//TThostFtdcBankIDType char[4]
	if(pTransferQryDetailRspField_BankID != NULL) {
		if(pTransferQryDetailRspField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pTransferQryDetailRspField_BankID, sizeof(self->data.BankID) );
		pTransferQryDetailRspField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pTransferQryDetailRspField_BankBrchID != NULL) {
		if(pTransferQryDetailRspField_BankBrchID_len > (Py_ssize_t)sizeof(self->data.BankBrchID)) {
			PyErr_Format(PyExc_ValueError, "BankBrchID too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_BankBrchID_len, (Py_ssize_t)sizeof(self->data.BankBrchID));
			return -1;
		}
		strncpy(self->data.BankBrchID, pTransferQryDetailRspField_BankBrchID, sizeof(self->data.BankBrchID) );
		pTransferQryDetailRspField_BankBrchID = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pTransferQryDetailRspField_BankAccount != NULL) {
		if(pTransferQryDetailRspField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pTransferQryDetailRspField_BankAccount, sizeof(self->data.BankAccount) );
		pTransferQryDetailRspField_BankAccount = NULL;
	}

	//TThostFtdcCertCodeType char[21]
	if(pTransferQryDetailRspField_CertCode != NULL) {
		if(pTransferQryDetailRspField_CertCode_len > (Py_ssize_t)sizeof(self->data.CertCode)) {
			PyErr_Format(PyExc_ValueError, "CertCode too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_CertCode_len, (Py_ssize_t)sizeof(self->data.CertCode));
			return -1;
		}
		strncpy(self->data.CertCode, pTransferQryDetailRspField_CertCode, sizeof(self->data.CertCode) );
		pTransferQryDetailRspField_CertCode = NULL;
	}

	//TThostFtdcCurrencyCodeType char[4]
	if(pTransferQryDetailRspField_CurrencyCode != NULL) {
		if(pTransferQryDetailRspField_CurrencyCode_len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
			PyErr_Format(PyExc_ValueError, "CurrencyCode too long: length=%zd (max allowed is %zd)", pTransferQryDetailRspField_CurrencyCode_len, (Py_ssize_t)sizeof(self->data.CurrencyCode));
			return -1;
		}
		strncpy(self->data.CurrencyCode, pTransferQryDetailRspField_CurrencyCode, sizeof(self->data.CurrencyCode) );
		pTransferQryDetailRspField_CurrencyCode = NULL;
	}

	//TThostFtdcMoneyType double
	self->data.TxAmount = pTransferQryDetailRspField_TxAmount;
	//TThostFtdcTransferValidFlagType char
	self->data.Flag = pTransferQryDetailRspField_Flag;



    return 0;
}

static void PyCThostFtdcTransferQryDetailRspField_dealloc(PyCThostFtdcTransferQryDetailRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_repr(PyCThostFtdcTransferQryDetailRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:d,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:d,s:c}"
#endif

		, "TradeDate", self->data.TradeDate 
		, "TradeTime", self->data.TradeTime 
		, "TradeCode", self->data.TradeCode 
		, "FutureSerial", self->data.FutureSerial
		, "FutureID", self->data.FutureID 
		, "FutureAccount", self->data.FutureAccount 
		, "BankSerial", self->data.BankSerial
		, "BankID", self->data.BankID 
		, "BankBrchID", self->data.BankBrchID 
		, "BankAccount", self->data.BankAccount 
		, "CertCode", self->data.CertCode 
		, "CurrencyCode", self->data.CurrencyCode 
		, "TxAmount", self->data.TxAmount
		, "Flag", self->data.Flag


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTransferQryDetailRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TradeDate(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDate);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TradeTime(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeTime);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TradeCode(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeCode);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_FutureSerial(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FutureSerial);
#else 
	return PyInt_FromLong(self->data.FutureSerial);
#endif 
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_FutureID(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureID);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_FutureAccount(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.FutureAccount);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankSerial(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.BankSerial);
#else 
	return PyInt_FromLong(self->data.BankSerial);
#endif 
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankID(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankBrchID(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBrchID);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_BankAccount(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_CertCode(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.CertCode);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_CurrencyCode(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyCode);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_TxAmount(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyFloat_FromDouble(self->data.TxAmount);
}

static PyObject *PyCThostFtdcTransferQryDetailRspField_get_Flag(PyCThostFtdcTransferQryDetailRspField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Flag), 1);
}

static int PyCThostFtdcTransferQryDetailRspField_set_TradeDate(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryDetailRspField_set_TradeTime(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryDetailRspField_set_TradeCode(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryDetailRspField_set_FutureSerial(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FutureSerial Expected int"); 
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
    self->data.FutureSerial = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTransferQryDetailRspField_set_FutureID(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryDetailRspField_set_FutureAccount(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FutureAccount Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FutureAccount)) {
		PyErr_SetString(PyExc_ValueError, "FutureAccount must be less than 22 bytes");
		return -1;
	}
	strncpy(self->data.FutureAccount, buf, sizeof(self->data.FutureAccount));
	return 0;
}

static int PyCThostFtdcTransferQryDetailRspField_set_BankSerial(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "BankSerial Expected int"); 
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
    self->data.BankSerial = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTransferQryDetailRspField_set_BankID(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryDetailRspField_set_BankBrchID(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTransferQryDetailRspField_set_BankAccount(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankAccount Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
		PyErr_SetString(PyExc_ValueError, "BankAccount must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.BankAccount, buf, sizeof(self->data.BankAccount));
	return 0;
}

static int PyCThostFtdcTransferQryDetailRspField_set_CertCode(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CertCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CertCode)) {
		PyErr_SetString(PyExc_ValueError, "CertCode must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.CertCode, buf, sizeof(self->data.CertCode));
	return 0;
}

static int PyCThostFtdcTransferQryDetailRspField_set_CurrencyCode(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyCode)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyCode must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyCode, buf, sizeof(self->data.CurrencyCode));
	return 0;
}

static int PyCThostFtdcTransferQryDetailRspField_set_TxAmount(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TxAmount Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.TxAmount = buf;
    return 0;
}

static int PyCThostFtdcTransferQryDetailRspField_set_Flag(PyCThostFtdcTransferQryDetailRspField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Flag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Flag)) {
		PyErr_SetString(PyExc_ValueError, "Flag must be less than 1 bytes");
		return -1;
	}
	self->data.Flag = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcTransferQryDetailRspField_getset[] = {
	 {(char *)"TradeDate", (getter)PyCThostFtdcTransferQryDetailRspField_get_TradeDate, (setter)PyCThostFtdcTransferQryDetailRspField_set_TradeDate, (char *)"TradeDate", NULL},
	 {(char *)"TradeTime", (getter)PyCThostFtdcTransferQryDetailRspField_get_TradeTime, (setter)PyCThostFtdcTransferQryDetailRspField_set_TradeTime, (char *)"TradeTime", NULL},
	 {(char *)"TradeCode", (getter)PyCThostFtdcTransferQryDetailRspField_get_TradeCode, (setter)PyCThostFtdcTransferQryDetailRspField_set_TradeCode, (char *)"TradeCode", NULL},
	 {(char *)"FutureSerial", (getter)PyCThostFtdcTransferQryDetailRspField_get_FutureSerial, (setter)PyCThostFtdcTransferQryDetailRspField_set_FutureSerial, (char *)"FutureSerial", NULL},
	 {(char *)"FutureID", (getter)PyCThostFtdcTransferQryDetailRspField_get_FutureID, (setter)PyCThostFtdcTransferQryDetailRspField_set_FutureID, (char *)"FutureID", NULL},
	 {(char *)"FutureAccount", (getter)PyCThostFtdcTransferQryDetailRspField_get_FutureAccount, (setter)PyCThostFtdcTransferQryDetailRspField_set_FutureAccount, (char *)"FutureAccount", NULL},
	 {(char *)"BankSerial", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankSerial, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankSerial, (char *)"BankSerial", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankID, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBrchID", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankBrchID, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankBrchID, (char *)"BankBrchID", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcTransferQryDetailRspField_get_BankAccount, (setter)PyCThostFtdcTransferQryDetailRspField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"CertCode", (getter)PyCThostFtdcTransferQryDetailRspField_get_CertCode, (setter)PyCThostFtdcTransferQryDetailRspField_set_CertCode, (char *)"CertCode", NULL},
	 {(char *)"CurrencyCode", (getter)PyCThostFtdcTransferQryDetailRspField_get_CurrencyCode, (setter)PyCThostFtdcTransferQryDetailRspField_set_CurrencyCode, (char *)"CurrencyCode", NULL},
	 {(char *)"TxAmount", (getter)PyCThostFtdcTransferQryDetailRspField_get_TxAmount, (setter)PyCThostFtdcTransferQryDetailRspField_set_TxAmount, (char *)"TxAmount", NULL},
	 {(char *)"Flag", (getter)PyCThostFtdcTransferQryDetailRspField_get_Flag, (setter)PyCThostFtdcTransferQryDetailRspField_set_Flag, (char *)"Flag", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTransferQryDetailRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTransferQryDetailRspField",	/* tp_name */
	sizeof(PyCThostFtdcTransferQryDetailRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTransferQryDetailRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTransferQryDetailRspField_repr,   /* tp_repr */
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
	"CThostFtdcTransferQryDetailRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTransferQryDetailRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTransferQryDetailRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTransferQryDetailRspField_new,       /* tp_new */
};

int PyCThostFtdcTransferQryDetailRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTransferQryDetailRspField  */
	if (PyType_Ready(&PyCThostFtdcTransferQryDetailRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTransferQryDetailRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTransferQryDetailRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTransferQryDetailRspField", (PyObject *)&PyCThostFtdcTransferQryDetailRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTransferQryDetailRspField to module");
        Py_DECREF(&PyCThostFtdcTransferQryDetailRspFieldType);
		return -1;
    }

    return 0;
}
