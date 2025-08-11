
#include "PyCThostFtdcInputExecOrderField.h"



static PyObject *PyCThostFtdcInputExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputExecOrderField *self = (PyCThostFtdcInputExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputExecOrderField_init(PyCThostFtdcInputExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputExecOrderField_BrokerID = NULL;
	Py_ssize_t pInputExecOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputExecOrderField_InvestorID = NULL;
	Py_ssize_t pInputExecOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputExecOrderField_reserve1 = NULL;
	Py_ssize_t pInputExecOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputExecOrderField_ExecOrderRef = NULL;
	Py_ssize_t pInputExecOrderField_ExecOrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputExecOrderField_UserID = NULL;
	Py_ssize_t pInputExecOrderField_UserID_len = 0;

	//TThostFtdcVolumeType int
	int pInputExecOrderField_Volume = 0;

	//TThostFtdcRequestIDType int
	int pInputExecOrderField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pInputExecOrderField_BusinessUnit = NULL;
	Py_ssize_t pInputExecOrderField_BusinessUnit_len = 0;

	//TThostFtdcOffsetFlagType char
	char pInputExecOrderField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pInputExecOrderField_HedgeFlag = 0;

	//TThostFtdcActionTypeType char
	char pInputExecOrderField_ActionType = 0;

	//TThostFtdcPosiDirectionType char
	char pInputExecOrderField_PosiDirection = 0;

	//TThostFtdcExecOrderPositionFlagType char
	char pInputExecOrderField_ReservePositionFlag = 0;

	//TThostFtdcExecOrderCloseFlagType char
	char pInputExecOrderField_CloseFlag = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputExecOrderField_ExchangeID = NULL;
	Py_ssize_t pInputExecOrderField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputExecOrderField_InvestUnitID = NULL;
	Py_ssize_t pInputExecOrderField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pInputExecOrderField_AccountID = NULL;
	Py_ssize_t pInputExecOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pInputExecOrderField_CurrencyID = NULL;
	Py_ssize_t pInputExecOrderField_CurrencyID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pInputExecOrderField_ClientID = NULL;
	Py_ssize_t pInputExecOrderField_ClientID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputExecOrderField_reserve2 = NULL;
	Py_ssize_t pInputExecOrderField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputExecOrderField_MacAddress = NULL;
	Py_ssize_t pInputExecOrderField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputExecOrderField_InstrumentID = NULL;
	Py_ssize_t pInputExecOrderField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputExecOrderField_IPAddress = NULL;
	Py_ssize_t pInputExecOrderField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccccccs#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pInputExecOrderField_BrokerID, &pInputExecOrderField_BrokerID_len
		, &pInputExecOrderField_InvestorID, &pInputExecOrderField_InvestorID_len
		, &pInputExecOrderField_reserve1, &pInputExecOrderField_reserve1_len
		, &pInputExecOrderField_ExecOrderRef, &pInputExecOrderField_ExecOrderRef_len
		, &pInputExecOrderField_UserID, &pInputExecOrderField_UserID_len
		, &pInputExecOrderField_Volume
		, &pInputExecOrderField_RequestID
		, &pInputExecOrderField_BusinessUnit, &pInputExecOrderField_BusinessUnit_len
		, &pInputExecOrderField_OffsetFlag
		, &pInputExecOrderField_HedgeFlag
		, &pInputExecOrderField_ActionType
		, &pInputExecOrderField_PosiDirection
		, &pInputExecOrderField_ReservePositionFlag
		, &pInputExecOrderField_CloseFlag
		, &pInputExecOrderField_ExchangeID, &pInputExecOrderField_ExchangeID_len
		, &pInputExecOrderField_InvestUnitID, &pInputExecOrderField_InvestUnitID_len
		, &pInputExecOrderField_AccountID, &pInputExecOrderField_AccountID_len
		, &pInputExecOrderField_CurrencyID, &pInputExecOrderField_CurrencyID_len
		, &pInputExecOrderField_ClientID, &pInputExecOrderField_ClientID_len
		, &pInputExecOrderField_reserve2, &pInputExecOrderField_reserve2_len
		, &pInputExecOrderField_MacAddress, &pInputExecOrderField_MacAddress_len
		, &pInputExecOrderField_InstrumentID, &pInputExecOrderField_InstrumentID_len
		, &pInputExecOrderField_IPAddress, &pInputExecOrderField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputExecOrderField_BrokerID != NULL) {
		if(pInputExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pInputExecOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputExecOrderField_InvestorID != NULL) {
		if(pInputExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pInputExecOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputExecOrderField_reserve1 != NULL) {
		if(pInputExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputExecOrderField_reserve1, sizeof(self->data.reserve1) );
		pInputExecOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pInputExecOrderField_ExecOrderRef != NULL) {
		if(pInputExecOrderField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", pInputExecOrderField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
			return -1;
		}
		strncpy(self->data.ExecOrderRef, pInputExecOrderField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
		pInputExecOrderField_ExecOrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pInputExecOrderField_UserID != NULL) {
		if(pInputExecOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputExecOrderField_UserID, sizeof(self->data.UserID) );
		pInputExecOrderField_UserID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pInputExecOrderField_Volume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputExecOrderField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pInputExecOrderField_BusinessUnit != NULL) {
		if(pInputExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pInputExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pInputExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pInputExecOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pInputExecOrderField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pInputExecOrderField_HedgeFlag;

	//TThostFtdcActionTypeType char
	self->data.ActionType = pInputExecOrderField_ActionType;

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pInputExecOrderField_PosiDirection;

	//TThostFtdcExecOrderPositionFlagType char
	self->data.ReservePositionFlag = pInputExecOrderField_ReservePositionFlag;

	//TThostFtdcExecOrderCloseFlagType char
	self->data.CloseFlag = pInputExecOrderField_CloseFlag;

	//TThostFtdcExchangeIDType char[9]
	if(pInputExecOrderField_ExchangeID != NULL) {
		if(pInputExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputExecOrderField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputExecOrderField_InvestUnitID != NULL) {
		if(pInputExecOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputExecOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputExecOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pInputExecOrderField_AccountID != NULL) {
		if(pInputExecOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pInputExecOrderField_AccountID, sizeof(self->data.AccountID) );
		pInputExecOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pInputExecOrderField_CurrencyID != NULL) {
		if(pInputExecOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pInputExecOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pInputExecOrderField_CurrencyID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pInputExecOrderField_ClientID != NULL) {
		if(pInputExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pInputExecOrderField_ClientID, sizeof(self->data.ClientID) );
		pInputExecOrderField_ClientID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputExecOrderField_reserve2 != NULL) {
		if(pInputExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputExecOrderField_reserve2, sizeof(self->data.reserve2) );
		pInputExecOrderField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputExecOrderField_MacAddress != NULL) {
		if(pInputExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pInputExecOrderField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputExecOrderField_InstrumentID != NULL) {
		if(pInputExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputExecOrderField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputExecOrderField_IPAddress != NULL) {
		if(pInputExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pInputExecOrderField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputExecOrderField_dealloc(PyCThostFtdcInputExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputExecOrderField_repr(PyCThostFtdcInputExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "reserve1", self->data.reserve1 
		, "ExecOrderRef", self->data.ExecOrderRef 
		, "UserID", self->data.UserID 
		, "Volume", self->data.Volume
		, "RequestID", self->data.RequestID
		, "BusinessUnit", self->data.BusinessUnit 
		, "OffsetFlag", self->data.OffsetFlag
		, "HedgeFlag", self->data.HedgeFlag
		, "ActionType", self->data.ActionType
		, "PosiDirection", self->data.PosiDirection
		, "ReservePositionFlag", self->data.ReservePositionFlag
		, "CloseFlag", self->data.CloseFlag
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_BrokerID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_InvestorID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_reserve1(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_ExecOrderRef(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderRef);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_UserID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_Volume(PyCThostFtdcInputExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcInputExecOrderField_get_RequestID(PyCThostFtdcInputExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputExecOrderField_get_BusinessUnit(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_OffsetFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_HedgeFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_ActionType(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_PosiDirection(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_ReservePositionFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_CloseFlag(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_ExchangeID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_InvestUnitID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_AccountID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_CurrencyID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_ClientID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_reserve2(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_MacAddress(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_InstrumentID(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputExecOrderField_get_IPAddress(PyCThostFtdcInputExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcInputExecOrderField_set_BrokerID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_InvestorID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_reserve1(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_ExecOrderRef(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderRef, buf, sizeof(self->data.ExecOrderRef));
	return 0;
}

static int PyCThostFtdcInputExecOrderField_set_UserID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_Volume(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_RequestID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_BusinessUnit(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_OffsetFlag(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetFlag)) {
		PyErr_SetString(PyExc_ValueError, "OffsetFlag must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputExecOrderField_set_HedgeFlag(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_ActionType(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionType)) {
		PyErr_SetString(PyExc_ValueError, "ActionType must be less than 1 bytes");
		return -1;
	}
	self->data.ActionType = *buf;
	return 0;
}

static int PyCThostFtdcInputExecOrderField_set_PosiDirection(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PosiDirection)) {
		PyErr_SetString(PyExc_ValueError, "PosiDirection must be less than 1 bytes");
		return -1;
	}
	self->data.PosiDirection = *buf;
	return 0;
}

static int PyCThostFtdcInputExecOrderField_set_ReservePositionFlag(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ReservePositionFlag)) {
		PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be less than 1 bytes");
		return -1;
	}
	self->data.ReservePositionFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputExecOrderField_set_CloseFlag(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CloseFlag)) {
		PyErr_SetString(PyExc_ValueError, "CloseFlag must be less than 1 bytes");
		return -1;
	}
	self->data.CloseFlag = *buf;
	return 0;
}

static int PyCThostFtdcInputExecOrderField_set_ExchangeID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_InvestUnitID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_AccountID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_CurrencyID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_ClientID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_reserve2(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_MacAddress(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_InstrumentID(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputExecOrderField_set_IPAddress(PyCThostFtdcInputExecOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInputExecOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputExecOrderField_get_BrokerID, (setter)PyCThostFtdcInputExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputExecOrderField_get_InvestorID, (setter)PyCThostFtdcInputExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputExecOrderField_get_reserve1, (setter)PyCThostFtdcInputExecOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExecOrderRef", (getter)PyCThostFtdcInputExecOrderField_get_ExecOrderRef, (setter)PyCThostFtdcInputExecOrderField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputExecOrderField_get_UserID, (setter)PyCThostFtdcInputExecOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcInputExecOrderField_get_Volume, (setter)PyCThostFtdcInputExecOrderField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputExecOrderField_get_RequestID, (setter)PyCThostFtdcInputExecOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcInputExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcInputExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcInputExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcInputExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcInputExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcInputExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ActionType", (getter)PyCThostFtdcInputExecOrderField_get_ActionType, (setter)PyCThostFtdcInputExecOrderField_set_ActionType, (char *)"ActionType", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcInputExecOrderField_get_PosiDirection, (setter)PyCThostFtdcInputExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"ReservePositionFlag", (getter)PyCThostFtdcInputExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcInputExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
	 {(char *)"CloseFlag", (getter)PyCThostFtdcInputExecOrderField_get_CloseFlag, (setter)PyCThostFtdcInputExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputExecOrderField_get_ExchangeID, (setter)PyCThostFtdcInputExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputExecOrderField_get_InvestUnitID, (setter)PyCThostFtdcInputExecOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcInputExecOrderField_get_AccountID, (setter)PyCThostFtdcInputExecOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcInputExecOrderField_get_CurrencyID, (setter)PyCThostFtdcInputExecOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcInputExecOrderField_get_ClientID, (setter)PyCThostFtdcInputExecOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputExecOrderField_get_reserve2, (setter)PyCThostFtdcInputExecOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputExecOrderField_get_MacAddress, (setter)PyCThostFtdcInputExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputExecOrderField_get_InstrumentID, (setter)PyCThostFtdcInputExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputExecOrderField_get_IPAddress, (setter)PyCThostFtdcInputExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcInputExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcInputExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcInputExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcInputExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputExecOrderField", (PyObject *)&PyCThostFtdcInputExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputExecOrderField to module");
        Py_DECREF(&PyCThostFtdcInputExecOrderFieldType);
		return -1;
    }

    return 0;
}
