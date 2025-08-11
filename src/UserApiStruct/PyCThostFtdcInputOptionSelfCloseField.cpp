
#include "PyCThostFtdcInputOptionSelfCloseField.h"



static PyObject *PyCThostFtdcInputOptionSelfCloseField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOptionSelfCloseField *self = (PyCThostFtdcInputOptionSelfCloseField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputOptionSelfCloseField_init(PyCThostFtdcInputOptionSelfCloseField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "OptionSelfCloseRef", "UserID", "Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputOptionSelfCloseField_BrokerID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputOptionSelfCloseField_InvestorID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputOptionSelfCloseField_reserve1 = NULL;
	Py_ssize_t pInputOptionSelfCloseField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputOptionSelfCloseField_OptionSelfCloseRef = NULL;
	Py_ssize_t pInputOptionSelfCloseField_OptionSelfCloseRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputOptionSelfCloseField_UserID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_UserID_len = 0;

	//TThostFtdcVolumeType int
	int pInputOptionSelfCloseField_Volume = 0;

	//TThostFtdcRequestIDType int
	int pInputOptionSelfCloseField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pInputOptionSelfCloseField_BusinessUnit = NULL;
	Py_ssize_t pInputOptionSelfCloseField_BusinessUnit_len = 0;

	//TThostFtdcHedgeFlagType char
	char pInputOptionSelfCloseField_HedgeFlag = 0;

	//TThostFtdcOptSelfCloseFlagType char
	char pInputOptionSelfCloseField_OptSelfCloseFlag = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputOptionSelfCloseField_ExchangeID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputOptionSelfCloseField_InvestUnitID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pInputOptionSelfCloseField_AccountID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pInputOptionSelfCloseField_CurrencyID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_CurrencyID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pInputOptionSelfCloseField_ClientID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_ClientID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputOptionSelfCloseField_reserve2 = NULL;
	Py_ssize_t pInputOptionSelfCloseField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputOptionSelfCloseField_MacAddress = NULL;
	Py_ssize_t pInputOptionSelfCloseField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputOptionSelfCloseField_InstrumentID = NULL;
	Py_ssize_t pInputOptionSelfCloseField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputOptionSelfCloseField_IPAddress = NULL;
	Py_ssize_t pInputOptionSelfCloseField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccs#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pInputOptionSelfCloseField_BrokerID, &pInputOptionSelfCloseField_BrokerID_len
		, &pInputOptionSelfCloseField_InvestorID, &pInputOptionSelfCloseField_InvestorID_len
		, &pInputOptionSelfCloseField_reserve1, &pInputOptionSelfCloseField_reserve1_len
		, &pInputOptionSelfCloseField_OptionSelfCloseRef, &pInputOptionSelfCloseField_OptionSelfCloseRef_len
		, &pInputOptionSelfCloseField_UserID, &pInputOptionSelfCloseField_UserID_len
		, &pInputOptionSelfCloseField_Volume
		, &pInputOptionSelfCloseField_RequestID
		, &pInputOptionSelfCloseField_BusinessUnit, &pInputOptionSelfCloseField_BusinessUnit_len
		, &pInputOptionSelfCloseField_HedgeFlag
		, &pInputOptionSelfCloseField_OptSelfCloseFlag
		, &pInputOptionSelfCloseField_ExchangeID, &pInputOptionSelfCloseField_ExchangeID_len
		, &pInputOptionSelfCloseField_InvestUnitID, &pInputOptionSelfCloseField_InvestUnitID_len
		, &pInputOptionSelfCloseField_AccountID, &pInputOptionSelfCloseField_AccountID_len
		, &pInputOptionSelfCloseField_CurrencyID, &pInputOptionSelfCloseField_CurrencyID_len
		, &pInputOptionSelfCloseField_ClientID, &pInputOptionSelfCloseField_ClientID_len
		, &pInputOptionSelfCloseField_reserve2, &pInputOptionSelfCloseField_reserve2_len
		, &pInputOptionSelfCloseField_MacAddress, &pInputOptionSelfCloseField_MacAddress_len
		, &pInputOptionSelfCloseField_InstrumentID, &pInputOptionSelfCloseField_InstrumentID_len
		, &pInputOptionSelfCloseField_IPAddress, &pInputOptionSelfCloseField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputOptionSelfCloseField_BrokerID != NULL) {
		if(pInputOptionSelfCloseField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputOptionSelfCloseField_BrokerID, sizeof(self->data.BrokerID) );
		pInputOptionSelfCloseField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputOptionSelfCloseField_InvestorID != NULL) {
		if(pInputOptionSelfCloseField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputOptionSelfCloseField_InvestorID, sizeof(self->data.InvestorID) );
		pInputOptionSelfCloseField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputOptionSelfCloseField_reserve1 != NULL) {
		if(pInputOptionSelfCloseField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputOptionSelfCloseField_reserve1, sizeof(self->data.reserve1) );
		pInputOptionSelfCloseField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pInputOptionSelfCloseField_OptionSelfCloseRef != NULL) {
		if(pInputOptionSelfCloseField_OptionSelfCloseRef_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_OptionSelfCloseRef_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseRef, pInputOptionSelfCloseField_OptionSelfCloseRef, sizeof(self->data.OptionSelfCloseRef) );
		pInputOptionSelfCloseField_OptionSelfCloseRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pInputOptionSelfCloseField_UserID != NULL) {
		if(pInputOptionSelfCloseField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputOptionSelfCloseField_UserID, sizeof(self->data.UserID) );
		pInputOptionSelfCloseField_UserID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pInputOptionSelfCloseField_Volume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputOptionSelfCloseField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pInputOptionSelfCloseField_BusinessUnit != NULL) {
		if(pInputOptionSelfCloseField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pInputOptionSelfCloseField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pInputOptionSelfCloseField_BusinessUnit = NULL;
	}

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInputOptionSelfCloseField_HedgeFlag;

	//TThostFtdcOptSelfCloseFlagType char
	self->data.OptSelfCloseFlag = pInputOptionSelfCloseField_OptSelfCloseFlag;

	//TThostFtdcExchangeIDType char[9]
	if(pInputOptionSelfCloseField_ExchangeID != NULL) {
		if(pInputOptionSelfCloseField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputOptionSelfCloseField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputOptionSelfCloseField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputOptionSelfCloseField_InvestUnitID != NULL) {
		if(pInputOptionSelfCloseField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputOptionSelfCloseField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputOptionSelfCloseField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pInputOptionSelfCloseField_AccountID != NULL) {
		if(pInputOptionSelfCloseField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pInputOptionSelfCloseField_AccountID, sizeof(self->data.AccountID) );
		pInputOptionSelfCloseField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pInputOptionSelfCloseField_CurrencyID != NULL) {
		if(pInputOptionSelfCloseField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pInputOptionSelfCloseField_CurrencyID, sizeof(self->data.CurrencyID) );
		pInputOptionSelfCloseField_CurrencyID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pInputOptionSelfCloseField_ClientID != NULL) {
		if(pInputOptionSelfCloseField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pInputOptionSelfCloseField_ClientID, sizeof(self->data.ClientID) );
		pInputOptionSelfCloseField_ClientID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputOptionSelfCloseField_reserve2 != NULL) {
		if(pInputOptionSelfCloseField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputOptionSelfCloseField_reserve2, sizeof(self->data.reserve2) );
		pInputOptionSelfCloseField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputOptionSelfCloseField_MacAddress != NULL) {
		if(pInputOptionSelfCloseField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputOptionSelfCloseField_MacAddress, sizeof(self->data.MacAddress) );
		pInputOptionSelfCloseField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputOptionSelfCloseField_InstrumentID != NULL) {
		if(pInputOptionSelfCloseField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputOptionSelfCloseField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputOptionSelfCloseField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputOptionSelfCloseField_IPAddress != NULL) {
		if(pInputOptionSelfCloseField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputOptionSelfCloseField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputOptionSelfCloseField_IPAddress, sizeof(self->data.IPAddress) );
		pInputOptionSelfCloseField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputOptionSelfCloseField_dealloc(PyCThostFtdcInputOptionSelfCloseField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_repr(PyCThostFtdcInputOptionSelfCloseField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "OptionSelfCloseRef", self->data.OptionSelfCloseRef 
		, "UserID", self->data.UserID 
		, "Volume", self->data.Volume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "HedgeFlag", self->data.HedgeFlag
		, "OptSelfCloseFlag", self->data.OptSelfCloseFlag
		, "ExchangeID", self->data.ExchangeID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "AccountID", self->data.AccountID 
		, "CurrencyID", self->data.CurrencyID 
		, "ClientID", self->data.ClientID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOptionSelfCloseField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_BrokerID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_InvestorID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_reserve1(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseRef);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_UserID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_Volume(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_RequestID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_BusinessUnit(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_HedgeFlag(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_OptSelfCloseFlag(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_ExchangeID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_InvestUnitID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_AccountID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_CurrencyID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_ClientID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_reserve2(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_MacAddress(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_InstrumentID(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputOptionSelfCloseField_get_IPAddress(PyCThostFtdcInputOptionSelfCloseField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcInputOptionSelfCloseField_set_BrokerID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseField_set_InvestorID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_reserve1(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_OptionSelfCloseRef(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseRef)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseRef, buf, sizeof(self->data.OptionSelfCloseRef));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_UserID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseField_set_Volume(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Volume Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Volume Expected int"); 
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
    self->data.Volume = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOptionSelfCloseField_set_RequestID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseField_set_BusinessUnit(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
		PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.BusinessUnit, buf, sizeof(self->data.BusinessUnit));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_HedgeFlag(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
		PyErr_SetString(PyExc_ValueError, "HedgeFlag must be less than 1 bytes");
		return -1;
	}
	self->data.HedgeFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_OptSelfCloseFlag(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptSelfCloseFlag)) {
		PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OptSelfCloseFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_ExchangeID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_InvestUnitID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
		PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_AccountID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseField_set_CurrencyID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOptionSelfCloseField_set_ClientID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
		PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_reserve2(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_MacAddress(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
		PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_InstrumentID(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
		PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
	return 0;
}

static int PyCThostFtdcInputOptionSelfCloseField_set_IPAddress(PyCThostFtdcInputOptionSelfCloseField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
		PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcInputOptionSelfCloseField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_BrokerID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_InvestorID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputOptionSelfCloseField_get_reserve1, (setter)PyCThostFtdcInputOptionSelfCloseField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"OptionSelfCloseRef", (getter)PyCThostFtdcInputOptionSelfCloseField_get_OptionSelfCloseRef, (setter)PyCThostFtdcInputOptionSelfCloseField_set_OptionSelfCloseRef, (char *)"OptionSelfCloseRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_UserID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcInputOptionSelfCloseField_get_Volume, (setter)PyCThostFtdcInputOptionSelfCloseField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_RequestID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcInputOptionSelfCloseField_get_BusinessUnit, (setter)PyCThostFtdcInputOptionSelfCloseField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInputOptionSelfCloseField_get_HedgeFlag, (setter)PyCThostFtdcInputOptionSelfCloseField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcInputOptionSelfCloseField_get_OptSelfCloseFlag, (setter)PyCThostFtdcInputOptionSelfCloseField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_ExchangeID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_InvestUnitID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_AccountID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_CurrencyID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_ClientID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputOptionSelfCloseField_get_reserve2, (setter)PyCThostFtdcInputOptionSelfCloseField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputOptionSelfCloseField_get_MacAddress, (setter)PyCThostFtdcInputOptionSelfCloseField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputOptionSelfCloseField_get_InstrumentID, (setter)PyCThostFtdcInputOptionSelfCloseField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputOptionSelfCloseField_get_IPAddress, (setter)PyCThostFtdcInputOptionSelfCloseField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOptionSelfCloseFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOptionSelfCloseField",	/* tp_name */
	sizeof(PyCThostFtdcInputOptionSelfCloseField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOptionSelfCloseField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOptionSelfCloseField_repr,   /* tp_repr */
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
	"CThostFtdcInputOptionSelfCloseField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOptionSelfCloseField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOptionSelfCloseField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOptionSelfCloseField_new,       /* tp_new */
};

int PyCThostFtdcInputOptionSelfCloseFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOptionSelfCloseField  */
	if (PyType_Ready(&PyCThostFtdcInputOptionSelfCloseFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOptionSelfCloseField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOptionSelfCloseFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOptionSelfCloseField", (PyObject *)&PyCThostFtdcInputOptionSelfCloseFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOptionSelfCloseField to module");
        Py_DECREF(&PyCThostFtdcInputOptionSelfCloseFieldType);
		return -1;
    }

    return 0;
}
