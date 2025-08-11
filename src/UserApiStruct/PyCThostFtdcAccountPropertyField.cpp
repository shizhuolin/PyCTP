
#include "PyCThostFtdcAccountPropertyField.h"



static PyObject *PyCThostFtdcAccountPropertyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAccountPropertyField *self = (PyCThostFtdcAccountPropertyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcAccountPropertyField_init(PyCThostFtdcAccountPropertyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "BankID", "BankAccount", "OpenName", "OpenBank", "IsActive", "AccountSourceType", "OpenDate", "CancelDate", "OperatorID", "OperateDate", "OperateTime", "CurrencyID",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pAccountPropertyField_BrokerID = NULL;
	Py_ssize_t pAccountPropertyField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pAccountPropertyField_AccountID = NULL;
	Py_ssize_t pAccountPropertyField_AccountID_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pAccountPropertyField_BankID = NULL;
	Py_ssize_t pAccountPropertyField_BankID_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pAccountPropertyField_BankAccount = NULL;
	Py_ssize_t pAccountPropertyField_BankAccount_len = 0;

	//TThostFtdcInvestorFullNameType char[101]
	const char *pAccountPropertyField_OpenName = NULL;
	Py_ssize_t pAccountPropertyField_OpenName_len = 0;

	//TThostFtdcOpenBankType char[101]
	const char *pAccountPropertyField_OpenBank = NULL;
	Py_ssize_t pAccountPropertyField_OpenBank_len = 0;

	//TThostFtdcBoolType int
	int pAccountPropertyField_IsActive = 0;

	//TThostFtdcAccountSourceTypeType char
	char pAccountPropertyField_AccountSourceType = 0;

	//TThostFtdcDateType char[9]
	const char *pAccountPropertyField_OpenDate = NULL;
	Py_ssize_t pAccountPropertyField_OpenDate_len = 0;

	//TThostFtdcDateType char[9]
	const char *pAccountPropertyField_CancelDate = NULL;
	Py_ssize_t pAccountPropertyField_CancelDate_len = 0;

	//TThostFtdcOperatorIDType char[65]
	const char *pAccountPropertyField_OperatorID = NULL;
	Py_ssize_t pAccountPropertyField_OperatorID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pAccountPropertyField_OperateDate = NULL;
	Py_ssize_t pAccountPropertyField_OperateDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pAccountPropertyField_OperateTime = NULL;
	Py_ssize_t pAccountPropertyField_OperateTime_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pAccountPropertyField_CurrencyID = NULL;
	Py_ssize_t pAccountPropertyField_CurrencyID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#icy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#ics#s#s#s#s#s#", (char **)kwlist
#endif

		, &pAccountPropertyField_BrokerID, &pAccountPropertyField_BrokerID_len
		, &pAccountPropertyField_AccountID, &pAccountPropertyField_AccountID_len
		, &pAccountPropertyField_BankID, &pAccountPropertyField_BankID_len
		, &pAccountPropertyField_BankAccount, &pAccountPropertyField_BankAccount_len
		, &pAccountPropertyField_OpenName, &pAccountPropertyField_OpenName_len
		, &pAccountPropertyField_OpenBank, &pAccountPropertyField_OpenBank_len
		, &pAccountPropertyField_IsActive
		, &pAccountPropertyField_AccountSourceType
		, &pAccountPropertyField_OpenDate, &pAccountPropertyField_OpenDate_len
		, &pAccountPropertyField_CancelDate, &pAccountPropertyField_CancelDate_len
		, &pAccountPropertyField_OperatorID, &pAccountPropertyField_OperatorID_len
		, &pAccountPropertyField_OperateDate, &pAccountPropertyField_OperateDate_len
		, &pAccountPropertyField_OperateTime, &pAccountPropertyField_OperateTime_len
		, &pAccountPropertyField_CurrencyID, &pAccountPropertyField_CurrencyID_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pAccountPropertyField_BrokerID != NULL) {
		if(pAccountPropertyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pAccountPropertyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pAccountPropertyField_BrokerID, sizeof(self->data.BrokerID) );
		pAccountPropertyField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pAccountPropertyField_AccountID != NULL) {
		if(pAccountPropertyField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pAccountPropertyField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pAccountPropertyField_AccountID, sizeof(self->data.AccountID) );
		pAccountPropertyField_AccountID = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pAccountPropertyField_BankID != NULL) {
		if(pAccountPropertyField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pAccountPropertyField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pAccountPropertyField_BankID, sizeof(self->data.BankID) );
		pAccountPropertyField_BankID = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pAccountPropertyField_BankAccount != NULL) {
		if(pAccountPropertyField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pAccountPropertyField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pAccountPropertyField_BankAccount, sizeof(self->data.BankAccount) );
		pAccountPropertyField_BankAccount = NULL;
	}

	//TThostFtdcInvestorFullNameType char[101]
	if(pAccountPropertyField_OpenName != NULL) {
		if(pAccountPropertyField_OpenName_len > (Py_ssize_t)sizeof(self->data.OpenName)) {
			PyErr_Format(PyExc_ValueError, "OpenName too long: length=%zd (max allowed is %zd)", pAccountPropertyField_OpenName_len, (Py_ssize_t)sizeof(self->data.OpenName));
			return -1;
		}
		strncpy(self->data.OpenName, pAccountPropertyField_OpenName, sizeof(self->data.OpenName) );
		pAccountPropertyField_OpenName = NULL;
	}

	//TThostFtdcOpenBankType char[101]
	if(pAccountPropertyField_OpenBank != NULL) {
		if(pAccountPropertyField_OpenBank_len > (Py_ssize_t)sizeof(self->data.OpenBank)) {
			PyErr_Format(PyExc_ValueError, "OpenBank too long: length=%zd (max allowed is %zd)", pAccountPropertyField_OpenBank_len, (Py_ssize_t)sizeof(self->data.OpenBank));
			return -1;
		}
		strncpy(self->data.OpenBank, pAccountPropertyField_OpenBank, sizeof(self->data.OpenBank) );
		pAccountPropertyField_OpenBank = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pAccountPropertyField_IsActive;

	//TThostFtdcAccountSourceTypeType char
	self->data.AccountSourceType = pAccountPropertyField_AccountSourceType;

	//TThostFtdcDateType char[9]
	if(pAccountPropertyField_OpenDate != NULL) {
		if(pAccountPropertyField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pAccountPropertyField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pAccountPropertyField_OpenDate, sizeof(self->data.OpenDate) );
		pAccountPropertyField_OpenDate = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pAccountPropertyField_CancelDate != NULL) {
		if(pAccountPropertyField_CancelDate_len > (Py_ssize_t)sizeof(self->data.CancelDate)) {
			PyErr_Format(PyExc_ValueError, "CancelDate too long: length=%zd (max allowed is %zd)", pAccountPropertyField_CancelDate_len, (Py_ssize_t)sizeof(self->data.CancelDate));
			return -1;
		}
		strncpy(self->data.CancelDate, pAccountPropertyField_CancelDate, sizeof(self->data.CancelDate) );
		pAccountPropertyField_CancelDate = NULL;
	}

	//TThostFtdcOperatorIDType char[65]
	if(pAccountPropertyField_OperatorID != NULL) {
		if(pAccountPropertyField_OperatorID_len > (Py_ssize_t)sizeof(self->data.OperatorID)) {
			PyErr_Format(PyExc_ValueError, "OperatorID too long: length=%zd (max allowed is %zd)", pAccountPropertyField_OperatorID_len, (Py_ssize_t)sizeof(self->data.OperatorID));
			return -1;
		}
		strncpy(self->data.OperatorID, pAccountPropertyField_OperatorID, sizeof(self->data.OperatorID) );
		pAccountPropertyField_OperatorID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pAccountPropertyField_OperateDate != NULL) {
		if(pAccountPropertyField_OperateDate_len > (Py_ssize_t)sizeof(self->data.OperateDate)) {
			PyErr_Format(PyExc_ValueError, "OperateDate too long: length=%zd (max allowed is %zd)", pAccountPropertyField_OperateDate_len, (Py_ssize_t)sizeof(self->data.OperateDate));
			return -1;
		}
		strncpy(self->data.OperateDate, pAccountPropertyField_OperateDate, sizeof(self->data.OperateDate) );
		pAccountPropertyField_OperateDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pAccountPropertyField_OperateTime != NULL) {
		if(pAccountPropertyField_OperateTime_len > (Py_ssize_t)sizeof(self->data.OperateTime)) {
			PyErr_Format(PyExc_ValueError, "OperateTime too long: length=%zd (max allowed is %zd)", pAccountPropertyField_OperateTime_len, (Py_ssize_t)sizeof(self->data.OperateTime));
			return -1;
		}
		strncpy(self->data.OperateTime, pAccountPropertyField_OperateTime, sizeof(self->data.OperateTime) );
		pAccountPropertyField_OperateTime = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pAccountPropertyField_CurrencyID != NULL) {
		if(pAccountPropertyField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pAccountPropertyField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pAccountPropertyField_CurrencyID, sizeof(self->data.CurrencyID) );
		pAccountPropertyField_CurrencyID = NULL;
	}



    return 0;
}

static void PyCThostFtdcAccountPropertyField_dealloc(PyCThostFtdcAccountPropertyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAccountPropertyField_repr(PyCThostFtdcAccountPropertyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "BankID", self->data.BankID 
		, "BankAccount", self->data.BankAccount 
		, "OpenName", self->data.OpenName 
		, "OpenBank", self->data.OpenBank 
		, "IsActive", self->data.IsActive
		, "AccountSourceType", self->data.AccountSourceType
		, "OpenDate", self->data.OpenDate 
		, "CancelDate", self->data.CancelDate 
		, "OperatorID", self->data.OperatorID 
		, "OperateDate", self->data.OperateDate 
		, "OperateTime", self->data.OperateTime 
		, "CurrencyID", self->data.CurrencyID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountPropertyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_BrokerID(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_AccountID(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_BankID(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_BankAccount(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_OpenName(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenName);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_OpenBank(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenBank);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_IsActive(PyCThostFtdcAccountPropertyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static PyObject *PyCThostFtdcAccountPropertyField_get_AccountSourceType(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AccountSourceType), 1);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_OpenDate(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_CancelDate(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.CancelDate);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_OperatorID(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.OperatorID);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_OperateDate(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.OperateDate);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_OperateTime(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.OperateTime);
}

static PyObject *PyCThostFtdcAccountPropertyField_get_CurrencyID(PyCThostFtdcAccountPropertyField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static int PyCThostFtdcAccountPropertyField_set_BrokerID(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountPropertyField_set_AccountID(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_BankID(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountPropertyField_set_BankAccount(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountPropertyField_set_OpenName(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenName)) {
		PyErr_SetString(PyExc_ValueError, "OpenName must be less than 101 bytes");
		return -1;
	}
	strncpy(self->data.OpenName, buf, sizeof(self->data.OpenName));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_OpenBank(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenBank Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenBank)) {
		PyErr_SetString(PyExc_ValueError, "OpenBank must be less than 101 bytes");
		return -1;
	}
	strncpy(self->data.OpenBank, buf, sizeof(self->data.OpenBank));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_IsActive(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int"); 
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
    self->data.IsActive = (int)buf; 
    return 0; 
}

static int PyCThostFtdcAccountPropertyField_set_AccountSourceType(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountSourceType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountSourceType)) {
		PyErr_SetString(PyExc_ValueError, "AccountSourceType must be less than 1 bytes");
		return -1;
	}
	self->data.AccountSourceType = *buf;
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_OpenDate(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
		PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_CancelDate(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CancelDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CancelDate)) {
		PyErr_SetString(PyExc_ValueError, "CancelDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CancelDate, buf, sizeof(self->data.CancelDate));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_OperatorID(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OperatorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OperatorID)) {
		PyErr_SetString(PyExc_ValueError, "OperatorID must be less than 65 bytes");
		return -1;
	}
	strncpy(self->data.OperatorID, buf, sizeof(self->data.OperatorID));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_OperateDate(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OperateDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OperateDate)) {
		PyErr_SetString(PyExc_ValueError, "OperateDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.OperateDate, buf, sizeof(self->data.OperateDate));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_OperateTime(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OperateTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OperateTime)) {
		PyErr_SetString(PyExc_ValueError, "OperateTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.OperateTime, buf, sizeof(self->data.OperateTime));
	return 0;
}

static int PyCThostFtdcAccountPropertyField_set_CurrencyID(PyCThostFtdcAccountPropertyField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcAccountPropertyField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcAccountPropertyField_get_BrokerID, (setter)PyCThostFtdcAccountPropertyField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcAccountPropertyField_get_AccountID, (setter)PyCThostFtdcAccountPropertyField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcAccountPropertyField_get_BankID, (setter)PyCThostFtdcAccountPropertyField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcAccountPropertyField_get_BankAccount, (setter)PyCThostFtdcAccountPropertyField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"OpenName", (getter)PyCThostFtdcAccountPropertyField_get_OpenName, (setter)PyCThostFtdcAccountPropertyField_set_OpenName, (char *)"OpenName", NULL},
	 {(char *)"OpenBank", (getter)PyCThostFtdcAccountPropertyField_get_OpenBank, (setter)PyCThostFtdcAccountPropertyField_set_OpenBank, (char *)"OpenBank", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcAccountPropertyField_get_IsActive, (setter)PyCThostFtdcAccountPropertyField_set_IsActive, (char *)"IsActive", NULL},
	 {(char *)"AccountSourceType", (getter)PyCThostFtdcAccountPropertyField_get_AccountSourceType, (setter)PyCThostFtdcAccountPropertyField_set_AccountSourceType, (char *)"AccountSourceType", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcAccountPropertyField_get_OpenDate, (setter)PyCThostFtdcAccountPropertyField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"CancelDate", (getter)PyCThostFtdcAccountPropertyField_get_CancelDate, (setter)PyCThostFtdcAccountPropertyField_set_CancelDate, (char *)"CancelDate", NULL},
	 {(char *)"OperatorID", (getter)PyCThostFtdcAccountPropertyField_get_OperatorID, (setter)PyCThostFtdcAccountPropertyField_set_OperatorID, (char *)"OperatorID", NULL},
	 {(char *)"OperateDate", (getter)PyCThostFtdcAccountPropertyField_get_OperateDate, (setter)PyCThostFtdcAccountPropertyField_set_OperateDate, (char *)"OperateDate", NULL},
	 {(char *)"OperateTime", (getter)PyCThostFtdcAccountPropertyField_get_OperateTime, (setter)PyCThostFtdcAccountPropertyField_set_OperateTime, (char *)"OperateTime", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcAccountPropertyField_get_CurrencyID, (setter)PyCThostFtdcAccountPropertyField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAccountPropertyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAccountPropertyField",	/* tp_name */
	sizeof(PyCThostFtdcAccountPropertyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAccountPropertyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAccountPropertyField_repr,   /* tp_repr */
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
	"CThostFtdcAccountPropertyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAccountPropertyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAccountPropertyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAccountPropertyField_new,       /* tp_new */
};

int PyCThostFtdcAccountPropertyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAccountPropertyField  */
	if (PyType_Ready(&PyCThostFtdcAccountPropertyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAccountPropertyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAccountPropertyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAccountPropertyField", (PyObject *)&PyCThostFtdcAccountPropertyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAccountPropertyField to module");
        Py_DECREF(&PyCThostFtdcAccountPropertyFieldType);
		return -1;
    }

    return 0;
}
