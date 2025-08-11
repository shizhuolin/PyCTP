
#include "PyCThostFtdcExchangeExecOrderActionField.h"



static PyObject *PyCThostFtdcExchangeExecOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeExecOrderActionField *self = (PyCThostFtdcExchangeExecOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeExecOrderActionField_init(PyCThostFtdcExchangeExecOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ExecOrderSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "ExecOrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "ActionType", "BranchID", "reserve1", "MacAddress", "reserve2", "Volume", "IPAddress", "ExchangeInstID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeExecOrderActionField_ExchangeID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ExchangeID_len = 0;

	//TThostFtdcExecOrderSysIDType char[21]
	const char *pExchangeExecOrderActionField_ExecOrderSysID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ExecOrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pExchangeExecOrderActionField_ActionFlag = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeExecOrderActionField_ActionDate = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeExecOrderActionField_ActionTime = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeExecOrderActionField_TraderID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeExecOrderActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeExecOrderActionField_ExecOrderLocalID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ExecOrderLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeExecOrderActionField_ActionLocalID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeExecOrderActionField_ParticipantID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeExecOrderActionField_ClientID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeExecOrderActionField_BusinessUnit = NULL;
	Py_ssize_t pExchangeExecOrderActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pExchangeExecOrderActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExchangeExecOrderActionField_UserID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_UserID_len = 0;

	//TThostFtdcActionTypeType char
	char pExchangeExecOrderActionField_ActionType = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeExecOrderActionField_BranchID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_BranchID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeExecOrderActionField_reserve1 = NULL;
	Py_ssize_t pExchangeExecOrderActionField_reserve1_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeExecOrderActionField_MacAddress = NULL;
	Py_ssize_t pExchangeExecOrderActionField_MacAddress_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeExecOrderActionField_reserve2 = NULL;
	Py_ssize_t pExchangeExecOrderActionField_reserve2_len = 0;

	//TThostFtdcVolumeType int
	int pExchangeExecOrderActionField_Volume = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeExecOrderActionField_IPAddress = NULL;
	Py_ssize_t pExchangeExecOrderActionField_IPAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeExecOrderActionField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeExecOrderActionField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#cy#y#y#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#is#s#s#s#s#cs#cs#s#s#s#is#s#", (char **)kwlist
#endif

		, &pExchangeExecOrderActionField_ExchangeID, &pExchangeExecOrderActionField_ExchangeID_len
		, &pExchangeExecOrderActionField_ExecOrderSysID, &pExchangeExecOrderActionField_ExecOrderSysID_len
		, &pExchangeExecOrderActionField_ActionFlag
		, &pExchangeExecOrderActionField_ActionDate, &pExchangeExecOrderActionField_ActionDate_len
		, &pExchangeExecOrderActionField_ActionTime, &pExchangeExecOrderActionField_ActionTime_len
		, &pExchangeExecOrderActionField_TraderID, &pExchangeExecOrderActionField_TraderID_len
		, &pExchangeExecOrderActionField_InstallID
		, &pExchangeExecOrderActionField_ExecOrderLocalID, &pExchangeExecOrderActionField_ExecOrderLocalID_len
		, &pExchangeExecOrderActionField_ActionLocalID, &pExchangeExecOrderActionField_ActionLocalID_len
		, &pExchangeExecOrderActionField_ParticipantID, &pExchangeExecOrderActionField_ParticipantID_len
		, &pExchangeExecOrderActionField_ClientID, &pExchangeExecOrderActionField_ClientID_len
		, &pExchangeExecOrderActionField_BusinessUnit, &pExchangeExecOrderActionField_BusinessUnit_len
		, &pExchangeExecOrderActionField_OrderActionStatus
		, &pExchangeExecOrderActionField_UserID, &pExchangeExecOrderActionField_UserID_len
		, &pExchangeExecOrderActionField_ActionType
		, &pExchangeExecOrderActionField_BranchID, &pExchangeExecOrderActionField_BranchID_len
		, &pExchangeExecOrderActionField_reserve1, &pExchangeExecOrderActionField_reserve1_len
		, &pExchangeExecOrderActionField_MacAddress, &pExchangeExecOrderActionField_MacAddress_len
		, &pExchangeExecOrderActionField_reserve2, &pExchangeExecOrderActionField_reserve2_len
		, &pExchangeExecOrderActionField_Volume
		, &pExchangeExecOrderActionField_IPAddress, &pExchangeExecOrderActionField_IPAddress_len
		, &pExchangeExecOrderActionField_ExchangeInstID, &pExchangeExecOrderActionField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeExecOrderActionField_ExchangeID != NULL) {
		if(pExchangeExecOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeExecOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeExecOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcExecOrderSysIDType char[21]
	if(pExchangeExecOrderActionField_ExecOrderSysID != NULL) {
		if(pExchangeExecOrderActionField_ExecOrderSysID_len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ExecOrderSysID_len, (Py_ssize_t)sizeof(self->data.ExecOrderSysID));
			return -1;
		}
		strncpy(self->data.ExecOrderSysID, pExchangeExecOrderActionField_ExecOrderSysID, sizeof(self->data.ExecOrderSysID) );
		pExchangeExecOrderActionField_ExecOrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pExchangeExecOrderActionField_ActionFlag;

	//TThostFtdcDateType char[9]
	if(pExchangeExecOrderActionField_ActionDate != NULL) {
		if(pExchangeExecOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pExchangeExecOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
		pExchangeExecOrderActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeExecOrderActionField_ActionTime != NULL) {
		if(pExchangeExecOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pExchangeExecOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
		pExchangeExecOrderActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeExecOrderActionField_TraderID != NULL) {
		if(pExchangeExecOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeExecOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pExchangeExecOrderActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeExecOrderActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeExecOrderActionField_ExecOrderLocalID != NULL) {
		if(pExchangeExecOrderActionField_ExecOrderLocalID_len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ExecOrderLocalID_len, (Py_ssize_t)sizeof(self->data.ExecOrderLocalID));
			return -1;
		}
		strncpy(self->data.ExecOrderLocalID, pExchangeExecOrderActionField_ExecOrderLocalID, sizeof(self->data.ExecOrderLocalID) );
		pExchangeExecOrderActionField_ExecOrderLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeExecOrderActionField_ActionLocalID != NULL) {
		if(pExchangeExecOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExchangeExecOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExchangeExecOrderActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeExecOrderActionField_ParticipantID != NULL) {
		if(pExchangeExecOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeExecOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeExecOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeExecOrderActionField_ClientID != NULL) {
		if(pExchangeExecOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeExecOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pExchangeExecOrderActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeExecOrderActionField_BusinessUnit != NULL) {
		if(pExchangeExecOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeExecOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeExecOrderActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pExchangeExecOrderActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pExchangeExecOrderActionField_UserID != NULL) {
		if(pExchangeExecOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pExchangeExecOrderActionField_UserID, sizeof(self->data.UserID) );
		pExchangeExecOrderActionField_UserID = NULL;
	}

	//TThostFtdcActionTypeType char
	self->data.ActionType = pExchangeExecOrderActionField_ActionType;

	//TThostFtdcBranchIDType char[9]
	if(pExchangeExecOrderActionField_BranchID != NULL) {
		if(pExchangeExecOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeExecOrderActionField_BranchID, sizeof(self->data.BranchID) );
		pExchangeExecOrderActionField_BranchID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeExecOrderActionField_reserve1 != NULL) {
		if(pExchangeExecOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeExecOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pExchangeExecOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeExecOrderActionField_MacAddress != NULL) {
		if(pExchangeExecOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeExecOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeExecOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeExecOrderActionField_reserve2 != NULL) {
		if(pExchangeExecOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeExecOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pExchangeExecOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcVolumeType int
	self->data.Volume = pExchangeExecOrderActionField_Volume;

	//TThostFtdcIPAddressType char[33]
	if(pExchangeExecOrderActionField_IPAddress != NULL) {
		if(pExchangeExecOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeExecOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeExecOrderActionField_IPAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeExecOrderActionField_ExchangeInstID != NULL) {
		if(pExchangeExecOrderActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeExecOrderActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeExecOrderActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeExecOrderActionField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeExecOrderActionField_dealloc(PyCThostFtdcExchangeExecOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_repr(PyCThostFtdcExchangeExecOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s,s:i,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "ExecOrderSysID", self->data.ExecOrderSysID 
		, "ActionFlag", self->data.ActionFlag
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "ExecOrderLocalID", self->data.ExecOrderLocalID 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "UserID", self->data.UserID 
		, "ActionType", self->data.ActionType
		, "BranchID", self->data.BranchID 
		, "reserve1", self->data.reserve1 
		, "MacAddress", self->data.MacAddress 
		, "reserve2", self->data.reserve2 
		, "Volume", self->data.Volume
		, "IPAddress", self->data.IPAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExchangeID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderSysID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderSysID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionFlag(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionDate(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionTime(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_TraderID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_InstallID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExecOrderLocalID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionLocalID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ParticipantID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ClientID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_BusinessUnit(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_OrderActionStatus(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_UserID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ActionType(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionType), 1);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_BranchID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_reserve1(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_MacAddress(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_reserve2(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_Volume(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_IPAddress(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcExchangeExecOrderActionField_get_ExchangeInstID(PyCThostFtdcExchangeExecOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcExchangeExecOrderActionField_set_ExchangeID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderSysID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderSysID, buf, sizeof(self->data.ExecOrderSysID));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_ActionFlag(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionFlag)) {
		PyErr_SetString(PyExc_ValueError, "ActionFlag must be less than 1 bytes");
		return -1;
	}
	self->data.ActionFlag = *buf;
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_ActionDate(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
		PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionDate, buf, sizeof(self->data.ActionDate));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_ActionTime(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
		PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.ActionTime, buf, sizeof(self->data.ActionTime));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_TraderID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_InstallID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderLocalID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ExecOrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ExecOrderLocalID, buf, sizeof(self->data.ExecOrderLocalID));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_ActionLocalID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_ParticipantID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_ClientID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_BusinessUnit(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_OrderActionStatus(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderActionStatus)) {
		PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be less than 1 bytes");
		return -1;
	}
	self->data.OrderActionStatus = *buf;
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_UserID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_ActionType(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_BranchID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_reserve1(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
		PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
		return -1;
	}
	strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_MacAddress(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_reserve2(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.reserve2)) {
		PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 31 bytes");
		return -1;
	}
	strncpy(self->data.reserve2, buf, sizeof(self->data.reserve2));
	return 0;
}

static int PyCThostFtdcExchangeExecOrderActionField_set_Volume(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_IPAddress(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeExecOrderActionField_set_ExchangeInstID(PyCThostFtdcExchangeExecOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeExecOrderActionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ExecOrderSysID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderSysID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderSysID, (char *)"ExecOrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionDate, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionTime, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_TraderID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_InstallID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"ExecOrderLocalID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExecOrderLocalID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExecOrderLocalID, (char *)"ExecOrderLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ClientID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeExecOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeExecOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeExecOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeExecOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_UserID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ActionType", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ActionType, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ActionType, (char *)"ActionType", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_BranchID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeExecOrderActionField_get_reserve1, (setter)PyCThostFtdcExchangeExecOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeExecOrderActionField_get_MacAddress, (setter)PyCThostFtdcExchangeExecOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeExecOrderActionField_get_reserve2, (setter)PyCThostFtdcExchangeExecOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcExchangeExecOrderActionField_get_Volume, (setter)PyCThostFtdcExchangeExecOrderActionField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeExecOrderActionField_get_IPAddress, (setter)PyCThostFtdcExchangeExecOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeExecOrderActionField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeExecOrderActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeExecOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeExecOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeExecOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeExecOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeExecOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeExecOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeExecOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeExecOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeExecOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeExecOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeExecOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeExecOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeExecOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeExecOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeExecOrderActionField", (PyObject *)&PyCThostFtdcExchangeExecOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeExecOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeExecOrderActionFieldType);
		return -1;
    }

    return 0;
}
