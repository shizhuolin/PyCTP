
#include "PyCThostFtdcErrExecOrderField.h"



static PyObject *PyCThostFtdcErrExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcErrExecOrderField *self = (PyCThostFtdcErrExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcErrExecOrderField_init(PyCThostFtdcErrExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExchangeID", "InvestUnitID", "AccountID", "CurrencyID", "ClientID", "reserve2", "MacAddress", "ErrorID", "ErrorMsg", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pErrExecOrderField_BrokerID = NULL;
	Py_ssize_t pErrExecOrderField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pErrExecOrderField_InvestorID = NULL;
	Py_ssize_t pErrExecOrderField_InvestorID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pErrExecOrderField_reserve1 = NULL;
	Py_ssize_t pErrExecOrderField_reserve1_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pErrExecOrderField_ExecOrderRef = NULL;
	Py_ssize_t pErrExecOrderField_ExecOrderRef_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pErrExecOrderField_UserID = NULL;
	Py_ssize_t pErrExecOrderField_UserID_len = 0;

	//TThostFtdcVolumeType int
	int pErrExecOrderField_Volume = 0;

	//TThostFtdcRequestIDType int
	int pErrExecOrderField_RequestID = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pErrExecOrderField_BusinessUnit = NULL;
	Py_ssize_t pErrExecOrderField_BusinessUnit_len = 0;

	//TThostFtdcOffsetFlagType char
	char pErrExecOrderField_OffsetFlag = 0;

	//TThostFtdcHedgeFlagType char
	char pErrExecOrderField_HedgeFlag = 0;

	//TThostFtdcActionTypeType char
	char pErrExecOrderField_ActionType = 0;

	//TThostFtdcPosiDirectionType char
	char pErrExecOrderField_PosiDirection = 0;

	//TThostFtdcExecOrderPositionFlagType char
	char pErrExecOrderField_ReservePositionFlag = 0;

	//TThostFtdcExecOrderCloseFlagType char
	char pErrExecOrderField_CloseFlag = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pErrExecOrderField_ExchangeID = NULL;
	Py_ssize_t pErrExecOrderField_ExchangeID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pErrExecOrderField_InvestUnitID = NULL;
	Py_ssize_t pErrExecOrderField_InvestUnitID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pErrExecOrderField_AccountID = NULL;
	Py_ssize_t pErrExecOrderField_AccountID_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pErrExecOrderField_CurrencyID = NULL;
	Py_ssize_t pErrExecOrderField_CurrencyID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pErrExecOrderField_ClientID = NULL;
	Py_ssize_t pErrExecOrderField_ClientID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pErrExecOrderField_reserve2 = NULL;
	Py_ssize_t pErrExecOrderField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pErrExecOrderField_MacAddress = NULL;
	Py_ssize_t pErrExecOrderField_MacAddress_len = 0;

	//TThostFtdcErrorIDType int
	int pErrExecOrderField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pErrExecOrderField_ErrorMsg = NULL;
	Py_ssize_t pErrExecOrderField_ErrorMsg_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pErrExecOrderField_InstrumentID = NULL;
	Py_ssize_t pErrExecOrderField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pErrExecOrderField_IPAddress = NULL;
	Py_ssize_t pErrExecOrderField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#ccccccs#s#s#s#s#s#s#is#s#s#", (char **)kwlist
#endif

		, &pErrExecOrderField_BrokerID, &pErrExecOrderField_BrokerID_len
		, &pErrExecOrderField_InvestorID, &pErrExecOrderField_InvestorID_len
		, &pErrExecOrderField_reserve1, &pErrExecOrderField_reserve1_len
		, &pErrExecOrderField_ExecOrderRef, &pErrExecOrderField_ExecOrderRef_len
		, &pErrExecOrderField_UserID, &pErrExecOrderField_UserID_len
		, &pErrExecOrderField_Volume
		, &pErrExecOrderField_RequestID
		, &pErrExecOrderField_BusinessUnit, &pErrExecOrderField_BusinessUnit_len
		, &pErrExecOrderField_OffsetFlag
		, &pErrExecOrderField_HedgeFlag
		, &pErrExecOrderField_ActionType
		, &pErrExecOrderField_PosiDirection
		, &pErrExecOrderField_ReservePositionFlag
		, &pErrExecOrderField_CloseFlag
		, &pErrExecOrderField_ExchangeID, &pErrExecOrderField_ExchangeID_len
		, &pErrExecOrderField_InvestUnitID, &pErrExecOrderField_InvestUnitID_len
		, &pErrExecOrderField_AccountID, &pErrExecOrderField_AccountID_len
		, &pErrExecOrderField_CurrencyID, &pErrExecOrderField_CurrencyID_len
		, &pErrExecOrderField_ClientID, &pErrExecOrderField_ClientID_len
		, &pErrExecOrderField_reserve2, &pErrExecOrderField_reserve2_len
		, &pErrExecOrderField_MacAddress, &pErrExecOrderField_MacAddress_len
		, &pErrExecOrderField_ErrorID
		, &pErrExecOrderField_ErrorMsg, &pErrExecOrderField_ErrorMsg_len
		, &pErrExecOrderField_InstrumentID, &pErrExecOrderField_InstrumentID_len
		, &pErrExecOrderField_IPAddress, &pErrExecOrderField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pErrExecOrderField_BrokerID != NULL) {
		if(pErrExecOrderField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pErrExecOrderField_BrokerID, sizeof(self->data.BrokerID) );
		pErrExecOrderField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pErrExecOrderField_InvestorID != NULL) {
		if(pErrExecOrderField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pErrExecOrderField_InvestorID, sizeof(self->data.InvestorID) );
		pErrExecOrderField_InvestorID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pErrExecOrderField_reserve1 != NULL) {
		if(pErrExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pErrExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pErrExecOrderField_reserve1, sizeof(self->data.reserve1) );
		pErrExecOrderField_reserve1 = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pErrExecOrderField_ExecOrderRef != NULL) {
		if(pErrExecOrderField_ExecOrderRef_len > (Py_ssize_t)sizeof(self->data.ExecOrderRef)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is %zd)", pErrExecOrderField_ExecOrderRef_len, (Py_ssize_t)sizeof(self->data.ExecOrderRef));
			return -1;
		}
		strncpy(self->data.ExecOrderRef, pErrExecOrderField_ExecOrderRef, sizeof(self->data.ExecOrderRef) );
		pErrExecOrderField_ExecOrderRef = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pErrExecOrderField_UserID != NULL) {
		if(pErrExecOrderField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pErrExecOrderField_UserID, sizeof(self->data.UserID) );
		pErrExecOrderField_UserID = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pErrExecOrderField_Volume;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pErrExecOrderField_RequestID;

	//TThostFtdcBusinessUnitType char[21]
	if(pErrExecOrderField_BusinessUnit != NULL) {
		if(pErrExecOrderField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pErrExecOrderField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pErrExecOrderField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pErrExecOrderField_BusinessUnit = NULL;
	}

	//TThostFtdcOffsetFlagType char
	self->data.OffsetFlag = pErrExecOrderField_OffsetFlag;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pErrExecOrderField_HedgeFlag;

	//TThostFtdcActionTypeType char
	self->data.ActionType = pErrExecOrderField_ActionType;

	//TThostFtdcPosiDirectionType char
	self->data.PosiDirection = pErrExecOrderField_PosiDirection;

	//TThostFtdcExecOrderPositionFlagType char
	self->data.ReservePositionFlag = pErrExecOrderField_ReservePositionFlag;

	//TThostFtdcExecOrderCloseFlagType char
	self->data.CloseFlag = pErrExecOrderField_CloseFlag;

	//TThostFtdcExchangeIDType char[9]
	if(pErrExecOrderField_ExchangeID != NULL) {
		if(pErrExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pErrExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
		pErrExecOrderField_ExchangeID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pErrExecOrderField_InvestUnitID != NULL) {
		if(pErrExecOrderField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pErrExecOrderField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pErrExecOrderField_InvestUnitID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pErrExecOrderField_AccountID != NULL) {
		if(pErrExecOrderField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pErrExecOrderField_AccountID, sizeof(self->data.AccountID) );
		pErrExecOrderField_AccountID = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pErrExecOrderField_CurrencyID != NULL) {
		if(pErrExecOrderField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pErrExecOrderField_CurrencyID, sizeof(self->data.CurrencyID) );
		pErrExecOrderField_CurrencyID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pErrExecOrderField_ClientID != NULL) {
		if(pErrExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pErrExecOrderField_ClientID, sizeof(self->data.ClientID) );
		pErrExecOrderField_ClientID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pErrExecOrderField_reserve2 != NULL) {
		if(pErrExecOrderField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pErrExecOrderField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pErrExecOrderField_reserve2, sizeof(self->data.reserve2) );
		pErrExecOrderField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pErrExecOrderField_MacAddress != NULL) {
		if(pErrExecOrderField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pErrExecOrderField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pErrExecOrderField_MacAddress, sizeof(self->data.MacAddress) );
		pErrExecOrderField_MacAddress = NULL;
	}

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pErrExecOrderField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pErrExecOrderField_ErrorMsg != NULL) {
		if(pErrExecOrderField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pErrExecOrderField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pErrExecOrderField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pErrExecOrderField_ErrorMsg = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pErrExecOrderField_InstrumentID != NULL) {
		if(pErrExecOrderField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pErrExecOrderField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pErrExecOrderField_InstrumentID, sizeof(self->data.InstrumentID) );
		pErrExecOrderField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pErrExecOrderField_IPAddress != NULL) {
		if(pErrExecOrderField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pErrExecOrderField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pErrExecOrderField_IPAddress, sizeof(self->data.IPAddress) );
		pErrExecOrderField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcErrExecOrderField_dealloc(PyCThostFtdcErrExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcErrExecOrderField_repr(PyCThostFtdcErrExecOrderField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:c,s:c,s:c,s:c,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s}"
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
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcErrExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_BrokerID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_InvestorID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_reserve1(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_ExecOrderRef(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderRef);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_UserID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_Volume(PyCThostFtdcErrExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderField_get_RequestID(PyCThostFtdcErrExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderField_get_BusinessUnit(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_OffsetFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetFlag), 1);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_HedgeFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_ActionType(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_PosiDirection(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PosiDirection), 1);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_ReservePositionFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ReservePositionFlag), 1);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_CloseFlag(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CloseFlag), 1);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_ExchangeID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_InvestUnitID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_AccountID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_CurrencyID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_ClientID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_reserve2(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_MacAddress(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_ErrorID(PyCThostFtdcErrExecOrderField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcErrExecOrderField_get_ErrorMsg(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_InstrumentID(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcErrExecOrderField_get_IPAddress(PyCThostFtdcErrExecOrderField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcErrExecOrderField_set_BrokerID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_InvestorID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_reserve1(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_ExecOrderRef(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_UserID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_Volume(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_RequestID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_BusinessUnit(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_OffsetFlag(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_HedgeFlag(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_ActionType(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_PosiDirection(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_ReservePositionFlag(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_CloseFlag(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_ExchangeID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_InvestUnitID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_AccountID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_CurrencyID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_ClientID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_reserve2(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_MacAddress(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_ErrorID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_ErrorMsg(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_InstrumentID(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcErrExecOrderField_set_IPAddress(PyCThostFtdcErrExecOrderField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcErrExecOrderField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcErrExecOrderField_get_BrokerID, (setter)PyCThostFtdcErrExecOrderField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcErrExecOrderField_get_InvestorID, (setter)PyCThostFtdcErrExecOrderField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcErrExecOrderField_get_reserve1, (setter)PyCThostFtdcErrExecOrderField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ExecOrderRef", (getter)PyCThostFtdcErrExecOrderField_get_ExecOrderRef, (setter)PyCThostFtdcErrExecOrderField_set_ExecOrderRef, (char *)"ExecOrderRef", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcErrExecOrderField_get_UserID, (setter)PyCThostFtdcErrExecOrderField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcErrExecOrderField_get_Volume, (setter)PyCThostFtdcErrExecOrderField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcErrExecOrderField_get_RequestID, (setter)PyCThostFtdcErrExecOrderField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcErrExecOrderField_get_BusinessUnit, (setter)PyCThostFtdcErrExecOrderField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OffsetFlag", (getter)PyCThostFtdcErrExecOrderField_get_OffsetFlag, (setter)PyCThostFtdcErrExecOrderField_set_OffsetFlag, (char *)"OffsetFlag", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcErrExecOrderField_get_HedgeFlag, (setter)PyCThostFtdcErrExecOrderField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ActionType", (getter)PyCThostFtdcErrExecOrderField_get_ActionType, (setter)PyCThostFtdcErrExecOrderField_set_ActionType, (char *)"ActionType", NULL},
	 {(char *)"PosiDirection", (getter)PyCThostFtdcErrExecOrderField_get_PosiDirection, (setter)PyCThostFtdcErrExecOrderField_set_PosiDirection, (char *)"PosiDirection", NULL},
	 {(char *)"ReservePositionFlag", (getter)PyCThostFtdcErrExecOrderField_get_ReservePositionFlag, (setter)PyCThostFtdcErrExecOrderField_set_ReservePositionFlag, (char *)"ReservePositionFlag", NULL},
	 {(char *)"CloseFlag", (getter)PyCThostFtdcErrExecOrderField_get_CloseFlag, (setter)PyCThostFtdcErrExecOrderField_set_CloseFlag, (char *)"CloseFlag", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcErrExecOrderField_get_ExchangeID, (setter)PyCThostFtdcErrExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcErrExecOrderField_get_InvestUnitID, (setter)PyCThostFtdcErrExecOrderField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcErrExecOrderField_get_AccountID, (setter)PyCThostFtdcErrExecOrderField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcErrExecOrderField_get_CurrencyID, (setter)PyCThostFtdcErrExecOrderField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcErrExecOrderField_get_ClientID, (setter)PyCThostFtdcErrExecOrderField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcErrExecOrderField_get_reserve2, (setter)PyCThostFtdcErrExecOrderField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcErrExecOrderField_get_MacAddress, (setter)PyCThostFtdcErrExecOrderField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcErrExecOrderField_get_ErrorID, (setter)PyCThostFtdcErrExecOrderField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcErrExecOrderField_get_ErrorMsg, (setter)PyCThostFtdcErrExecOrderField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcErrExecOrderField_get_InstrumentID, (setter)PyCThostFtdcErrExecOrderField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcErrExecOrderField_get_IPAddress, (setter)PyCThostFtdcErrExecOrderField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcErrExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcErrExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcErrExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcErrExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcErrExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcErrExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcErrExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcErrExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcErrExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcErrExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcErrExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcErrExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcErrExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcErrExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcErrExecOrderField", (PyObject *)&PyCThostFtdcErrExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcErrExecOrderField to module");
        Py_DECREF(&PyCThostFtdcErrExecOrderFieldType);
		return -1;
    }

    return 0;
}
