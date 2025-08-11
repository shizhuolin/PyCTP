
#include "PyCThostFtdcAccountregisterField.h"



static PyObject *PyCThostFtdcAccountregisterField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAccountregisterField *self = (PyCThostFtdcAccountregisterField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcAccountregisterField_init(PyCThostFtdcAccountregisterField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradeDay", "BankID", "BankBranchID", "BankAccount", "BrokerID", "BrokerBranchID", "AccountID", "IdCardType", "IdentifiedCardNo", "CustomerName", "CurrencyID", "OpenOrDestroy", "RegDate", "OutDate", "TID", "CustType", "BankAccType", "LongCustomerName",  NULL};

	//TThostFtdcTradeDateType char[9]
	const char *pAccountregisterField_TradeDay = NULL;
	Py_ssize_t pAccountregisterField_TradeDay_len = 0;

	//TThostFtdcBankIDType char[4]
	const char *pAccountregisterField_BankID = NULL;
	Py_ssize_t pAccountregisterField_BankID_len = 0;

	//TThostFtdcBankBrchIDType char[5]
	const char *pAccountregisterField_BankBranchID = NULL;
	Py_ssize_t pAccountregisterField_BankBranchID_len = 0;

	//TThostFtdcBankAccountType char[41]
	const char *pAccountregisterField_BankAccount = NULL;
	Py_ssize_t pAccountregisterField_BankAccount_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pAccountregisterField_BrokerID = NULL;
	Py_ssize_t pAccountregisterField_BrokerID_len = 0;

	//TThostFtdcFutureBranchIDType char[31]
	const char *pAccountregisterField_BrokerBranchID = NULL;
	Py_ssize_t pAccountregisterField_BrokerBranchID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pAccountregisterField_AccountID = NULL;
	Py_ssize_t pAccountregisterField_AccountID_len = 0;

	//TThostFtdcIdCardTypeType char
	char pAccountregisterField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pAccountregisterField_IdentifiedCardNo = NULL;
	Py_ssize_t pAccountregisterField_IdentifiedCardNo_len = 0;

	//TThostFtdcIndividualNameType char[51]
	const char *pAccountregisterField_CustomerName = NULL;
	Py_ssize_t pAccountregisterField_CustomerName_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pAccountregisterField_CurrencyID = NULL;
	Py_ssize_t pAccountregisterField_CurrencyID_len = 0;

	//TThostFtdcOpenOrDestroyType char
	char pAccountregisterField_OpenOrDestroy = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pAccountregisterField_RegDate = NULL;
	Py_ssize_t pAccountregisterField_RegDate_len = 0;

	//TThostFtdcTradeDateType char[9]
	const char *pAccountregisterField_OutDate = NULL;
	Py_ssize_t pAccountregisterField_OutDate_len = 0;

	//TThostFtdcTIDType int
	int pAccountregisterField_TID = 0;

	//TThostFtdcCustTypeType char
	char pAccountregisterField_CustType = 0;

	//TThostFtdcBankAccTypeType char
	char pAccountregisterField_BankAccType = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pAccountregisterField_LongCustomerName = NULL;
	Py_ssize_t pAccountregisterField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#cy#y#y#cy#y#iccy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#cs#s#s#cs#s#iccs#", (char **)kwlist
#endif

		, &pAccountregisterField_TradeDay, &pAccountregisterField_TradeDay_len
		, &pAccountregisterField_BankID, &pAccountregisterField_BankID_len
		, &pAccountregisterField_BankBranchID, &pAccountregisterField_BankBranchID_len
		, &pAccountregisterField_BankAccount, &pAccountregisterField_BankAccount_len
		, &pAccountregisterField_BrokerID, &pAccountregisterField_BrokerID_len
		, &pAccountregisterField_BrokerBranchID, &pAccountregisterField_BrokerBranchID_len
		, &pAccountregisterField_AccountID, &pAccountregisterField_AccountID_len
		, &pAccountregisterField_IdCardType
		, &pAccountregisterField_IdentifiedCardNo, &pAccountregisterField_IdentifiedCardNo_len
		, &pAccountregisterField_CustomerName, &pAccountregisterField_CustomerName_len
		, &pAccountregisterField_CurrencyID, &pAccountregisterField_CurrencyID_len
		, &pAccountregisterField_OpenOrDestroy
		, &pAccountregisterField_RegDate, &pAccountregisterField_RegDate_len
		, &pAccountregisterField_OutDate, &pAccountregisterField_OutDate_len
		, &pAccountregisterField_TID
		, &pAccountregisterField_CustType
		, &pAccountregisterField_BankAccType
		, &pAccountregisterField_LongCustomerName, &pAccountregisterField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcTradeDateType char[9]
	if(pAccountregisterField_TradeDay != NULL) {
		if(pAccountregisterField_TradeDay_len > (Py_ssize_t)sizeof(self->data.TradeDay)) {
			PyErr_Format(PyExc_ValueError, "TradeDay too long: length=%zd (max allowed is %zd)", pAccountregisterField_TradeDay_len, (Py_ssize_t)sizeof(self->data.TradeDay));
			return -1;
		}
		strncpy(self->data.TradeDay, pAccountregisterField_TradeDay, sizeof(self->data.TradeDay) );
		pAccountregisterField_TradeDay = NULL;
	}

	//TThostFtdcBankIDType char[4]
	if(pAccountregisterField_BankID != NULL) {
		if(pAccountregisterField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
			PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", pAccountregisterField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
			return -1;
		}
		strncpy(self->data.BankID, pAccountregisterField_BankID, sizeof(self->data.BankID) );
		pAccountregisterField_BankID = NULL;
	}

	//TThostFtdcBankBrchIDType char[5]
	if(pAccountregisterField_BankBranchID != NULL) {
		if(pAccountregisterField_BankBranchID_len > (Py_ssize_t)sizeof(self->data.BankBranchID)) {
			PyErr_Format(PyExc_ValueError, "BankBranchID too long: length=%zd (max allowed is %zd)", pAccountregisterField_BankBranchID_len, (Py_ssize_t)sizeof(self->data.BankBranchID));
			return -1;
		}
		strncpy(self->data.BankBranchID, pAccountregisterField_BankBranchID, sizeof(self->data.BankBranchID) );
		pAccountregisterField_BankBranchID = NULL;
	}

	//TThostFtdcBankAccountType char[41]
	if(pAccountregisterField_BankAccount != NULL) {
		if(pAccountregisterField_BankAccount_len > (Py_ssize_t)sizeof(self->data.BankAccount)) {
			PyErr_Format(PyExc_ValueError, "BankAccount too long: length=%zd (max allowed is %zd)", pAccountregisterField_BankAccount_len, (Py_ssize_t)sizeof(self->data.BankAccount));
			return -1;
		}
		strncpy(self->data.BankAccount, pAccountregisterField_BankAccount, sizeof(self->data.BankAccount) );
		pAccountregisterField_BankAccount = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pAccountregisterField_BrokerID != NULL) {
		if(pAccountregisterField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pAccountregisterField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pAccountregisterField_BrokerID, sizeof(self->data.BrokerID) );
		pAccountregisterField_BrokerID = NULL;
	}

	//TThostFtdcFutureBranchIDType char[31]
	if(pAccountregisterField_BrokerBranchID != NULL) {
		if(pAccountregisterField_BrokerBranchID_len > (Py_ssize_t)sizeof(self->data.BrokerBranchID)) {
			PyErr_Format(PyExc_ValueError, "BrokerBranchID too long: length=%zd (max allowed is %zd)", pAccountregisterField_BrokerBranchID_len, (Py_ssize_t)sizeof(self->data.BrokerBranchID));
			return -1;
		}
		strncpy(self->data.BrokerBranchID, pAccountregisterField_BrokerBranchID, sizeof(self->data.BrokerBranchID) );
		pAccountregisterField_BrokerBranchID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pAccountregisterField_AccountID != NULL) {
		if(pAccountregisterField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pAccountregisterField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pAccountregisterField_AccountID, sizeof(self->data.AccountID) );
		pAccountregisterField_AccountID = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pAccountregisterField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pAccountregisterField_IdentifiedCardNo != NULL) {
		if(pAccountregisterField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pAccountregisterField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pAccountregisterField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pAccountregisterField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcIndividualNameType char[51]
	if(pAccountregisterField_CustomerName != NULL) {
		if(pAccountregisterField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pAccountregisterField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pAccountregisterField_CustomerName, sizeof(self->data.CustomerName) );
		pAccountregisterField_CustomerName = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pAccountregisterField_CurrencyID != NULL) {
		if(pAccountregisterField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pAccountregisterField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pAccountregisterField_CurrencyID, sizeof(self->data.CurrencyID) );
		pAccountregisterField_CurrencyID = NULL;
	}

	//TThostFtdcOpenOrDestroyType char
	self->data.OpenOrDestroy = pAccountregisterField_OpenOrDestroy;

	//TThostFtdcTradeDateType char[9]
	if(pAccountregisterField_RegDate != NULL) {
		if(pAccountregisterField_RegDate_len > (Py_ssize_t)sizeof(self->data.RegDate)) {
			PyErr_Format(PyExc_ValueError, "RegDate too long: length=%zd (max allowed is %zd)", pAccountregisterField_RegDate_len, (Py_ssize_t)sizeof(self->data.RegDate));
			return -1;
		}
		strncpy(self->data.RegDate, pAccountregisterField_RegDate, sizeof(self->data.RegDate) );
		pAccountregisterField_RegDate = NULL;
	}

	//TThostFtdcTradeDateType char[9]
	if(pAccountregisterField_OutDate != NULL) {
		if(pAccountregisterField_OutDate_len > (Py_ssize_t)sizeof(self->data.OutDate)) {
			PyErr_Format(PyExc_ValueError, "OutDate too long: length=%zd (max allowed is %zd)", pAccountregisterField_OutDate_len, (Py_ssize_t)sizeof(self->data.OutDate));
			return -1;
		}
		strncpy(self->data.OutDate, pAccountregisterField_OutDate, sizeof(self->data.OutDate) );
		pAccountregisterField_OutDate = NULL;
	}

	//TThostFtdcTIDType int
	self->data.TID = pAccountregisterField_TID;

	//TThostFtdcCustTypeType char
	self->data.CustType = pAccountregisterField_CustType;

	//TThostFtdcBankAccTypeType char
	self->data.BankAccType = pAccountregisterField_BankAccType;

	//TThostFtdcLongIndividualNameType char[161]
	if(pAccountregisterField_LongCustomerName != NULL) {
		if(pAccountregisterField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pAccountregisterField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pAccountregisterField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pAccountregisterField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcAccountregisterField_dealloc(PyCThostFtdcAccountregisterField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAccountregisterField_repr(PyCThostFtdcAccountregisterField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:c,s:y,s:y,s:i,s:c,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:c,s:s,s:s,s:i,s:c,s:c,s:s}"
#endif

		, "TradeDay", self->data.TradeDay 
		, "BankID", self->data.BankID 
		, "BankBranchID", self->data.BankBranchID 
		, "BankAccount", self->data.BankAccount 
		, "BrokerID", self->data.BrokerID 
		, "BrokerBranchID", self->data.BrokerBranchID 
		, "AccountID", self->data.AccountID 
		, "IdCardType", self->data.IdCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "CustomerName", self->data.CustomerName 
		, "CurrencyID", self->data.CurrencyID 
		, "OpenOrDestroy", self->data.OpenOrDestroy
		, "RegDate", self->data.RegDate 
		, "OutDate", self->data.OutDate 
		, "TID", self->data.TID
		, "CustType", self->data.CustType
		, "BankAccType", self->data.BankAccType
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAccountregisterField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcAccountregisterField_get_TradeDay(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.TradeDay);
}

static PyObject *PyCThostFtdcAccountregisterField_get_BankID(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BankID);
}

static PyObject *PyCThostFtdcAccountregisterField_get_BankBranchID(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BankBranchID);
}

static PyObject *PyCThostFtdcAccountregisterField_get_BankAccount(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BankAccount);
}

static PyObject *PyCThostFtdcAccountregisterField_get_BrokerID(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcAccountregisterField_get_BrokerBranchID(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerBranchID);
}

static PyObject *PyCThostFtdcAccountregisterField_get_AccountID(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcAccountregisterField_get_IdCardType(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcAccountregisterField_get_IdentifiedCardNo(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcAccountregisterField_get_CustomerName(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcAccountregisterField_get_CurrencyID(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcAccountregisterField_get_OpenOrDestroy(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OpenOrDestroy), 1);
}

static PyObject *PyCThostFtdcAccountregisterField_get_RegDate(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.RegDate);
}

static PyObject *PyCThostFtdcAccountregisterField_get_OutDate(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.OutDate);
}

static PyObject *PyCThostFtdcAccountregisterField_get_TID(PyCThostFtdcAccountregisterField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.TID);
#else 
	return PyInt_FromLong(self->data.TID);
#endif 
}

static PyObject *PyCThostFtdcAccountregisterField_get_CustType(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcAccountregisterField_get_BankAccType(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.BankAccType), 1);
}

static PyObject *PyCThostFtdcAccountregisterField_get_LongCustomerName(PyCThostFtdcAccountregisterField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcAccountregisterField_set_TradeDay(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TradeDay Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TradeDay)) {
		PyErr_SetString(PyExc_ValueError, "TradeDay must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.TradeDay, buf, sizeof(self->data.TradeDay));
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_BankID(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_BankBranchID(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_BankAccount(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_BrokerID(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_BrokerBranchID(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_AccountID(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_IdCardType(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IdCardType)) {
		PyErr_SetString(PyExc_ValueError, "IdCardType must be less than 1 bytes");
		return -1;
	}
	self->data.IdCardType = *buf;
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_IdentifiedCardNo(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
		PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.IdentifiedCardNo, buf, sizeof(self->data.IdentifiedCardNo));
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_CustomerName(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
		PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.CustomerName, buf, sizeof(self->data.CustomerName));
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_CurrencyID(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_OpenOrDestroy(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenOrDestroy Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenOrDestroy)) {
		PyErr_SetString(PyExc_ValueError, "OpenOrDestroy must be less than 1 bytes");
		return -1;
	}
	self->data.OpenOrDestroy = *buf;
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_RegDate(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RegDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RegDate)) {
		PyErr_SetString(PyExc_ValueError, "RegDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.RegDate, buf, sizeof(self->data.RegDate));
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_OutDate(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OutDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OutDate)) {
		PyErr_SetString(PyExc_ValueError, "OutDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.OutDate, buf, sizeof(self->data.OutDate));
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_TID(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcAccountregisterField_set_CustType(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CustType)) {
		PyErr_SetString(PyExc_ValueError, "CustType must be less than 1 bytes");
		return -1;
	}
	self->data.CustType = *buf;
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_BankAccType(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BankAccType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BankAccType)) {
		PyErr_SetString(PyExc_ValueError, "BankAccType must be less than 1 bytes");
		return -1;
	}
	self->data.BankAccType = *buf;
	return 0;
}

static int PyCThostFtdcAccountregisterField_set_LongCustomerName(PyCThostFtdcAccountregisterField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
		PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.LongCustomerName, buf, sizeof(self->data.LongCustomerName));
	return 0;
}



static PyGetSetDef PyCThostFtdcAccountregisterField_getset[] = {
	 {(char *)"TradeDay", (getter)PyCThostFtdcAccountregisterField_get_TradeDay, (setter)PyCThostFtdcAccountregisterField_set_TradeDay, (char *)"TradeDay", NULL},
	 {(char *)"BankID", (getter)PyCThostFtdcAccountregisterField_get_BankID, (setter)PyCThostFtdcAccountregisterField_set_BankID, (char *)"BankID", NULL},
	 {(char *)"BankBranchID", (getter)PyCThostFtdcAccountregisterField_get_BankBranchID, (setter)PyCThostFtdcAccountregisterField_set_BankBranchID, (char *)"BankBranchID", NULL},
	 {(char *)"BankAccount", (getter)PyCThostFtdcAccountregisterField_get_BankAccount, (setter)PyCThostFtdcAccountregisterField_set_BankAccount, (char *)"BankAccount", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcAccountregisterField_get_BrokerID, (setter)PyCThostFtdcAccountregisterField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"BrokerBranchID", (getter)PyCThostFtdcAccountregisterField_get_BrokerBranchID, (setter)PyCThostFtdcAccountregisterField_set_BrokerBranchID, (char *)"BrokerBranchID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcAccountregisterField_get_AccountID, (setter)PyCThostFtdcAccountregisterField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcAccountregisterField_get_IdCardType, (setter)PyCThostFtdcAccountregisterField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcAccountregisterField_get_IdentifiedCardNo, (setter)PyCThostFtdcAccountregisterField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustomerName", (getter)PyCThostFtdcAccountregisterField_get_CustomerName, (setter)PyCThostFtdcAccountregisterField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcAccountregisterField_get_CurrencyID, (setter)PyCThostFtdcAccountregisterField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"OpenOrDestroy", (getter)PyCThostFtdcAccountregisterField_get_OpenOrDestroy, (setter)PyCThostFtdcAccountregisterField_set_OpenOrDestroy, (char *)"OpenOrDestroy", NULL},
	 {(char *)"RegDate", (getter)PyCThostFtdcAccountregisterField_get_RegDate, (setter)PyCThostFtdcAccountregisterField_set_RegDate, (char *)"RegDate", NULL},
	 {(char *)"OutDate", (getter)PyCThostFtdcAccountregisterField_get_OutDate, (setter)PyCThostFtdcAccountregisterField_set_OutDate, (char *)"OutDate", NULL},
	 {(char *)"TID", (getter)PyCThostFtdcAccountregisterField_get_TID, (setter)PyCThostFtdcAccountregisterField_set_TID, (char *)"TID", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcAccountregisterField_get_CustType, (setter)PyCThostFtdcAccountregisterField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"BankAccType", (getter)PyCThostFtdcAccountregisterField_get_BankAccType, (setter)PyCThostFtdcAccountregisterField_set_BankAccType, (char *)"BankAccType", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcAccountregisterField_get_LongCustomerName, (setter)PyCThostFtdcAccountregisterField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAccountregisterFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAccountregisterField",	/* tp_name */
	sizeof(PyCThostFtdcAccountregisterField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAccountregisterField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAccountregisterField_repr,   /* tp_repr */
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
	"CThostFtdcAccountregisterField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAccountregisterField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAccountregisterField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAccountregisterField_new,       /* tp_new */
};

int PyCThostFtdcAccountregisterFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAccountregisterField  */
	if (PyType_Ready(&PyCThostFtdcAccountregisterFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAccountregisterField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAccountregisterFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAccountregisterField", (PyObject *)&PyCThostFtdcAccountregisterFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAccountregisterField to module");
        Py_DECREF(&PyCThostFtdcAccountregisterFieldType);
		return -1;
    }

    return 0;
}
