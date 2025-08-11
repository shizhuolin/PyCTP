
#include "PyCThostFtdcExchangeCombActionField.h"



static PyObject *PyCThostFtdcExchangeCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeCombActionField *self = (PyCThostFtdcExchangeCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeCombActionField_init(PyCThostFtdcExchangeCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"Direction", "Volume", "CombDirection", "HedgeFlag", "ActionLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "ActionStatus", "NotifySequence", "TradingDay", "SettlementID", "SequenceNo", "reserve2", "MacAddress", "ComTradeID", "BranchID", "ExchangeInstID", "IPAddress",  NULL};

	//TThostFtdcDirectionType char
	char pExchangeCombActionField_Direction = 0;

	//TThostFtdcVolumeType int
	int pExchangeCombActionField_Volume = 0;

	//TThostFtdcCombDirectionType char
	char pExchangeCombActionField_CombDirection = 0;

	//TThostFtdcHedgeFlagType char
	char pExchangeCombActionField_HedgeFlag = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeCombActionField_ActionLocalID = NULL;
	Py_ssize_t pExchangeCombActionField_ActionLocalID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeCombActionField_ExchangeID = NULL;
	Py_ssize_t pExchangeCombActionField_ExchangeID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeCombActionField_ParticipantID = NULL;
	Py_ssize_t pExchangeCombActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeCombActionField_ClientID = NULL;
	Py_ssize_t pExchangeCombActionField_ClientID_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeCombActionField_reserve1 = NULL;
	Py_ssize_t pExchangeCombActionField_reserve1_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeCombActionField_TraderID = NULL;
	Py_ssize_t pExchangeCombActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeCombActionField_InstallID = 0;

	//TThostFtdcOrderActionStatusType char
	char pExchangeCombActionField_ActionStatus = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeCombActionField_NotifySequence = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeCombActionField_TradingDay = NULL;
	Py_ssize_t pExchangeCombActionField_TradingDay_len = 0;

	//TThostFtdcSettlementIDType int
	int pExchangeCombActionField_SettlementID = 0;

	//TThostFtdcSequenceNoType int
	int pExchangeCombActionField_SequenceNo = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeCombActionField_reserve2 = NULL;
	Py_ssize_t pExchangeCombActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeCombActionField_MacAddress = NULL;
	Py_ssize_t pExchangeCombActionField_MacAddress_len = 0;

	//TThostFtdcTradeIDType char[21]
	const char *pExchangeCombActionField_ComTradeID = NULL;
	Py_ssize_t pExchangeCombActionField_ComTradeID_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeCombActionField_BranchID = NULL;
	Py_ssize_t pExchangeCombActionField_BranchID_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeCombActionField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeCombActionField_ExchangeInstID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeCombActionField_IPAddress = NULL;
	Py_ssize_t pExchangeCombActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ciccy#y#y#y#y#y#iciy#iiy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ciccs#s#s#s#s#s#icis#iis#s#s#s#s#s#", (char **)kwlist
#endif

		, &pExchangeCombActionField_Direction
		, &pExchangeCombActionField_Volume
		, &pExchangeCombActionField_CombDirection
		, &pExchangeCombActionField_HedgeFlag
		, &pExchangeCombActionField_ActionLocalID, &pExchangeCombActionField_ActionLocalID_len
		, &pExchangeCombActionField_ExchangeID, &pExchangeCombActionField_ExchangeID_len
		, &pExchangeCombActionField_ParticipantID, &pExchangeCombActionField_ParticipantID_len
		, &pExchangeCombActionField_ClientID, &pExchangeCombActionField_ClientID_len
		, &pExchangeCombActionField_reserve1, &pExchangeCombActionField_reserve1_len
		, &pExchangeCombActionField_TraderID, &pExchangeCombActionField_TraderID_len
		, &pExchangeCombActionField_InstallID
		, &pExchangeCombActionField_ActionStatus
		, &pExchangeCombActionField_NotifySequence
		, &pExchangeCombActionField_TradingDay, &pExchangeCombActionField_TradingDay_len
		, &pExchangeCombActionField_SettlementID
		, &pExchangeCombActionField_SequenceNo
		, &pExchangeCombActionField_reserve2, &pExchangeCombActionField_reserve2_len
		, &pExchangeCombActionField_MacAddress, &pExchangeCombActionField_MacAddress_len
		, &pExchangeCombActionField_ComTradeID, &pExchangeCombActionField_ComTradeID_len
		, &pExchangeCombActionField_BranchID, &pExchangeCombActionField_BranchID_len
		, &pExchangeCombActionField_ExchangeInstID, &pExchangeCombActionField_ExchangeInstID_len
		, &pExchangeCombActionField_IPAddress, &pExchangeCombActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcDirectionType char
	self->data.Direction = pExchangeCombActionField_Direction;

	//TThostFtdcVolumeType int
	self->data.Volume = pExchangeCombActionField_Volume;

	//TThostFtdcCombDirectionType char
	self->data.CombDirection = pExchangeCombActionField_CombDirection;

	//TThostFtdcHedgeFlagType char
	self->data.HedgeFlag = pExchangeCombActionField_HedgeFlag;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeCombActionField_ActionLocalID != NULL) {
		if(pExchangeCombActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExchangeCombActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExchangeCombActionField_ActionLocalID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeCombActionField_ExchangeID != NULL) {
		if(pExchangeCombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeCombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeCombActionField_ExchangeID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeCombActionField_ParticipantID != NULL) {
		if(pExchangeCombActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeCombActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeCombActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeCombActionField_ClientID != NULL) {
		if(pExchangeCombActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeCombActionField_ClientID, sizeof(self->data.ClientID) );
		pExchangeCombActionField_ClientID = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeCombActionField_reserve1 != NULL) {
		if(pExchangeCombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeCombActionField_reserve1, sizeof(self->data.reserve1) );
		pExchangeCombActionField_reserve1 = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeCombActionField_TraderID != NULL) {
		if(pExchangeCombActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeCombActionField_TraderID, sizeof(self->data.TraderID) );
		pExchangeCombActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeCombActionField_InstallID;

	//TThostFtdcOrderActionStatusType char
	self->data.ActionStatus = pExchangeCombActionField_ActionStatus;

	//TThostFtdcSequenceNoType int
	self->data.NotifySequence = pExchangeCombActionField_NotifySequence;

	//TThostFtdcDateType char[9]
	if(pExchangeCombActionField_TradingDay != NULL) {
		if(pExchangeCombActionField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pExchangeCombActionField_TradingDay, sizeof(self->data.TradingDay) );
		pExchangeCombActionField_TradingDay = NULL;
	}

	//TThostFtdcSettlementIDType int
	self->data.SettlementID = pExchangeCombActionField_SettlementID;

	//TThostFtdcSequenceNoType int
	self->data.SequenceNo = pExchangeCombActionField_SequenceNo;

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeCombActionField_reserve2 != NULL) {
		if(pExchangeCombActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeCombActionField_reserve2, sizeof(self->data.reserve2) );
		pExchangeCombActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeCombActionField_MacAddress != NULL) {
		if(pExchangeCombActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeCombActionField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeCombActionField_MacAddress = NULL;
	}

	//TThostFtdcTradeIDType char[21]
	if(pExchangeCombActionField_ComTradeID != NULL) {
		if(pExchangeCombActionField_ComTradeID_len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
			PyErr_Format(PyExc_ValueError, "ComTradeID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_ComTradeID_len, (Py_ssize_t)sizeof(self->data.ComTradeID));
			return -1;
		}
		strncpy(self->data.ComTradeID, pExchangeCombActionField_ComTradeID, sizeof(self->data.ComTradeID) );
		pExchangeCombActionField_ComTradeID = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pExchangeCombActionField_BranchID != NULL) {
		if(pExchangeCombActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeCombActionField_BranchID, sizeof(self->data.BranchID) );
		pExchangeCombActionField_BranchID = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeCombActionField_ExchangeInstID != NULL) {
		if(pExchangeCombActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeCombActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeCombActionField_ExchangeInstID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeCombActionField_IPAddress != NULL) {
		if(pExchangeCombActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeCombActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeCombActionField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeCombActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeCombActionField_dealloc(PyCThostFtdcExchangeCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeCombActionField_repr(PyCThostFtdcExchangeCombActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:c,s:i,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:c,s:i,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "Direction", self->data.Direction
		, "Volume", self->data.Volume
		, "CombDirection", self->data.CombDirection
		, "HedgeFlag", self->data.HedgeFlag
		, "ActionLocalID", self->data.ActionLocalID 
		, "ExchangeID", self->data.ExchangeID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "reserve1", self->data.reserve1 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "ActionStatus", self->data.ActionStatus
		, "NotifySequence", self->data.NotifySequence
		, "TradingDay", self->data.TradingDay 
		, "SettlementID", self->data.SettlementID
		, "SequenceNo", self->data.SequenceNo
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "ComTradeID", self->data.ComTradeID 
		, "BranchID", self->data.BranchID 
		, "ExchangeInstID", self->data.ExchangeInstID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_Direction(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_Volume(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_CombDirection(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CombDirection), 1);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_HedgeFlag(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_ActionLocalID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_ExchangeID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_ParticipantID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_ClientID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_reserve1(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_TraderID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_InstallID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_ActionStatus(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionStatus), 1);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_NotifySequence(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.NotifySequence);
#else 
	return PyInt_FromLong(self->data.NotifySequence);
#endif 
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_TradingDay(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_SettlementID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SettlementID);
#else 
	return PyInt_FromLong(self->data.SettlementID);
#endif 
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_SequenceNo(PyCThostFtdcExchangeCombActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SequenceNo);
#else 
	return PyInt_FromLong(self->data.SequenceNo);
#endif 
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_reserve2(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_MacAddress(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_ComTradeID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ComTradeID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_BranchID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_ExchangeInstID(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static PyObject *PyCThostFtdcExchangeCombActionField_get_IPAddress(PyCThostFtdcExchangeCombActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeCombActionField_set_Direction(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
		PyErr_SetString(PyExc_ValueError, "Direction must be less than 1 bytes");
		return -1;
	}
	self->data.Direction = *buf;
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_Volume(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_CombDirection(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CombDirection Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CombDirection)) {
		PyErr_SetString(PyExc_ValueError, "CombDirection must be less than 1 bytes");
		return -1;
	}
	self->data.CombDirection = *buf;
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_HedgeFlag(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_ActionLocalID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ActionLocalID, buf, sizeof(self->data.ActionLocalID));
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_ExchangeID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_ParticipantID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
		PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_ClientID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_reserve1(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_TraderID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
		PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_InstallID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_ActionStatus(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionStatus)) {
		PyErr_SetString(PyExc_ValueError, "ActionStatus must be less than 1 bytes");
		return -1;
	}
	self->data.ActionStatus = *buf;
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_NotifySequence(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "NotifySequence Expected int"); 
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
    self->data.NotifySequence = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeCombActionField_set_TradingDay(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_SettlementID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SettlementID Expected int"); 
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
    self->data.SettlementID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeCombActionField_set_SequenceNo(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SequenceNo Expected int"); 
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
    self->data.SequenceNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeCombActionField_set_reserve2(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_MacAddress(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeCombActionField_set_ComTradeID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ComTradeID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ComTradeID)) {
		PyErr_SetString(PyExc_ValueError, "ComTradeID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ComTradeID, buf, sizeof(self->data.ComTradeID));
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_BranchID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BranchID)) {
		PyErr_SetString(PyExc_ValueError, "BranchID must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.BranchID, buf, sizeof(self->data.BranchID));
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_ExchangeInstID(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
		PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
	return 0;
}

static int PyCThostFtdcExchangeCombActionField_set_IPAddress(PyCThostFtdcExchangeCombActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeCombActionField_getset[] = {
	 {(char *)"Direction", (getter)PyCThostFtdcExchangeCombActionField_get_Direction, (setter)PyCThostFtdcExchangeCombActionField_set_Direction, (char *)"Direction", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcExchangeCombActionField_get_Volume, (setter)PyCThostFtdcExchangeCombActionField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"CombDirection", (getter)PyCThostFtdcExchangeCombActionField_get_CombDirection, (setter)PyCThostFtdcExchangeCombActionField_set_CombDirection, (char *)"CombDirection", NULL},
	 {(char *)"HedgeFlag", (getter)PyCThostFtdcExchangeCombActionField_get_HedgeFlag, (setter)PyCThostFtdcExchangeCombActionField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeCombActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeCombActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeCombActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeCombActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeCombActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeCombActionField_get_ClientID, (setter)PyCThostFtdcExchangeCombActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeCombActionField_get_reserve1, (setter)PyCThostFtdcExchangeCombActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeCombActionField_get_TraderID, (setter)PyCThostFtdcExchangeCombActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeCombActionField_get_InstallID, (setter)PyCThostFtdcExchangeCombActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"ActionStatus", (getter)PyCThostFtdcExchangeCombActionField_get_ActionStatus, (setter)PyCThostFtdcExchangeCombActionField_set_ActionStatus, (char *)"ActionStatus", NULL},
	 {(char *)"NotifySequence", (getter)PyCThostFtdcExchangeCombActionField_get_NotifySequence, (setter)PyCThostFtdcExchangeCombActionField_set_NotifySequence, (char *)"NotifySequence", NULL},
	 {(char *)"TradingDay", (getter)PyCThostFtdcExchangeCombActionField_get_TradingDay, (setter)PyCThostFtdcExchangeCombActionField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"SettlementID", (getter)PyCThostFtdcExchangeCombActionField_get_SettlementID, (setter)PyCThostFtdcExchangeCombActionField_set_SettlementID, (char *)"SettlementID", NULL},
	 {(char *)"SequenceNo", (getter)PyCThostFtdcExchangeCombActionField_get_SequenceNo, (setter)PyCThostFtdcExchangeCombActionField_set_SequenceNo, (char *)"SequenceNo", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeCombActionField_get_reserve2, (setter)PyCThostFtdcExchangeCombActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeCombActionField_get_MacAddress, (setter)PyCThostFtdcExchangeCombActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"ComTradeID", (getter)PyCThostFtdcExchangeCombActionField_get_ComTradeID, (setter)PyCThostFtdcExchangeCombActionField_set_ComTradeID, (char *)"ComTradeID", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeCombActionField_get_BranchID, (setter)PyCThostFtdcExchangeCombActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeCombActionField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeCombActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeCombActionField_get_IPAddress, (setter)PyCThostFtdcExchangeCombActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeCombActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeCombActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeCombActionField", (PyObject *)&PyCThostFtdcExchangeCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeCombActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeCombActionFieldType);
		return -1;
    }

    return 0;
}
