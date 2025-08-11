
#include "PyCThostFtdcExchangeOptionSelfCloseActionField.h"



static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOptionSelfCloseActionField *self = (PyCThostFtdcExchangeOptionSelfCloseActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOptionSelfCloseActionField_init(PyCThostFtdcExchangeOptionSelfCloseActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "OptionSelfCloseLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "BranchID", "reserve1", "MacAddress", "reserve2", "OptSelfCloseFlag", "IPAddress", "ExchangeInstID",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeOptionSelfCloseActionField_ExchangeID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pExchangeOptionSelfCloseActionField_ActionFlag = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeOptionSelfCloseActionField_ActionDate = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOptionSelfCloseActionField_ActionTime = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeOptionSelfCloseActionField_TraderID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeOptionSelfCloseActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOptionSelfCloseActionField_ActionLocalID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeOptionSelfCloseActionField_ParticipantID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeOptionSelfCloseActionField_ClientID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeOptionSelfCloseActionField_BusinessUnit = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pExchangeOptionSelfCloseActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExchangeOptionSelfCloseActionField_UserID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_UserID_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeOptionSelfCloseActionField_BranchID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_BranchID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeOptionSelfCloseActionField_reserve1 = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_reserve1_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeOptionSelfCloseActionField_MacAddress = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_MacAddress_len = 0;

	//TThostFtdcOldExchangeInstIDType char[31]
	const char *pExchangeOptionSelfCloseActionField_reserve2 = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_reserve2_len = 0;

	//TThostFtdcOptSelfCloseFlagType char
	char pExchangeOptionSelfCloseActionField_OptSelfCloseFlag = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeOptionSelfCloseActionField_IPAddress = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_IPAddress_len = 0;

	//TThostFtdcExchangeInstIDType char[81]
	const char *pExchangeOptionSelfCloseActionField_ExchangeInstID = NULL;
	Py_ssize_t pExchangeOptionSelfCloseActionField_ExchangeInstID_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#is#s#s#s#s#cs#s#s#s#s#cs#s#", (char **)kwlist
#endif

		, &pExchangeOptionSelfCloseActionField_ExchangeID, &pExchangeOptionSelfCloseActionField_ExchangeID_len
		, &pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, &pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len
		, &pExchangeOptionSelfCloseActionField_ActionFlag
		, &pExchangeOptionSelfCloseActionField_ActionDate, &pExchangeOptionSelfCloseActionField_ActionDate_len
		, &pExchangeOptionSelfCloseActionField_ActionTime, &pExchangeOptionSelfCloseActionField_ActionTime_len
		, &pExchangeOptionSelfCloseActionField_TraderID, &pExchangeOptionSelfCloseActionField_TraderID_len
		, &pExchangeOptionSelfCloseActionField_InstallID
		, &pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, &pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len
		, &pExchangeOptionSelfCloseActionField_ActionLocalID, &pExchangeOptionSelfCloseActionField_ActionLocalID_len
		, &pExchangeOptionSelfCloseActionField_ParticipantID, &pExchangeOptionSelfCloseActionField_ParticipantID_len
		, &pExchangeOptionSelfCloseActionField_ClientID, &pExchangeOptionSelfCloseActionField_ClientID_len
		, &pExchangeOptionSelfCloseActionField_BusinessUnit, &pExchangeOptionSelfCloseActionField_BusinessUnit_len
		, &pExchangeOptionSelfCloseActionField_OrderActionStatus
		, &pExchangeOptionSelfCloseActionField_UserID, &pExchangeOptionSelfCloseActionField_UserID_len
		, &pExchangeOptionSelfCloseActionField_BranchID, &pExchangeOptionSelfCloseActionField_BranchID_len
		, &pExchangeOptionSelfCloseActionField_reserve1, &pExchangeOptionSelfCloseActionField_reserve1_len
		, &pExchangeOptionSelfCloseActionField_MacAddress, &pExchangeOptionSelfCloseActionField_MacAddress_len
		, &pExchangeOptionSelfCloseActionField_reserve2, &pExchangeOptionSelfCloseActionField_reserve2_len
		, &pExchangeOptionSelfCloseActionField_OptSelfCloseFlag
		, &pExchangeOptionSelfCloseActionField_IPAddress, &pExchangeOptionSelfCloseActionField_IPAddress_len
		, &pExchangeOptionSelfCloseActionField_ExchangeInstID, &pExchangeOptionSelfCloseActionField_ExchangeInstID_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeOptionSelfCloseActionField_ExchangeID != NULL) {
		if(pExchangeOptionSelfCloseActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeOptionSelfCloseActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeOptionSelfCloseActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID != NULL) {
		if(pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseSysID, pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(self->data.OptionSelfCloseSysID) );
		pExchangeOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pExchangeOptionSelfCloseActionField_ActionFlag;

	//TThostFtdcDateType char[9]
	if(pExchangeOptionSelfCloseActionField_ActionDate != NULL) {
		if(pExchangeOptionSelfCloseActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pExchangeOptionSelfCloseActionField_ActionDate, sizeof(self->data.ActionDate) );
		pExchangeOptionSelfCloseActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOptionSelfCloseActionField_ActionTime != NULL) {
		if(pExchangeOptionSelfCloseActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pExchangeOptionSelfCloseActionField_ActionTime, sizeof(self->data.ActionTime) );
		pExchangeOptionSelfCloseActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeOptionSelfCloseActionField_TraderID != NULL) {
		if(pExchangeOptionSelfCloseActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeOptionSelfCloseActionField_TraderID, sizeof(self->data.TraderID) );
		pExchangeOptionSelfCloseActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeOptionSelfCloseActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID != NULL) {
		if(pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
			PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_len, (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID));
			return -1;
		}
		strncpy(self->data.OptionSelfCloseLocalID, pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, sizeof(self->data.OptionSelfCloseLocalID) );
		pExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOptionSelfCloseActionField_ActionLocalID != NULL) {
		if(pExchangeOptionSelfCloseActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExchangeOptionSelfCloseActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExchangeOptionSelfCloseActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeOptionSelfCloseActionField_ParticipantID != NULL) {
		if(pExchangeOptionSelfCloseActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeOptionSelfCloseActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeOptionSelfCloseActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeOptionSelfCloseActionField_ClientID != NULL) {
		if(pExchangeOptionSelfCloseActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeOptionSelfCloseActionField_ClientID, sizeof(self->data.ClientID) );
		pExchangeOptionSelfCloseActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeOptionSelfCloseActionField_BusinessUnit != NULL) {
		if(pExchangeOptionSelfCloseActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeOptionSelfCloseActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeOptionSelfCloseActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pExchangeOptionSelfCloseActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pExchangeOptionSelfCloseActionField_UserID != NULL) {
		if(pExchangeOptionSelfCloseActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pExchangeOptionSelfCloseActionField_UserID, sizeof(self->data.UserID) );
		pExchangeOptionSelfCloseActionField_UserID = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pExchangeOptionSelfCloseActionField_BranchID != NULL) {
		if(pExchangeOptionSelfCloseActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeOptionSelfCloseActionField_BranchID, sizeof(self->data.BranchID) );
		pExchangeOptionSelfCloseActionField_BranchID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeOptionSelfCloseActionField_reserve1 != NULL) {
		if(pExchangeOptionSelfCloseActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeOptionSelfCloseActionField_reserve1, sizeof(self->data.reserve1) );
		pExchangeOptionSelfCloseActionField_reserve1 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeOptionSelfCloseActionField_MacAddress != NULL) {
		if(pExchangeOptionSelfCloseActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeOptionSelfCloseActionField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeOptionSelfCloseActionField_MacAddress = NULL;
	}

	//TThostFtdcOldExchangeInstIDType char[31]
	if(pExchangeOptionSelfCloseActionField_reserve2 != NULL) {
		if(pExchangeOptionSelfCloseActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pExchangeOptionSelfCloseActionField_reserve2, sizeof(self->data.reserve2) );
		pExchangeOptionSelfCloseActionField_reserve2 = NULL;
	}

	//TThostFtdcOptSelfCloseFlagType char
	self->data.OptSelfCloseFlag = pExchangeOptionSelfCloseActionField_OptSelfCloseFlag;

	//TThostFtdcIPAddressType char[33]
	if(pExchangeOptionSelfCloseActionField_IPAddress != NULL) {
		if(pExchangeOptionSelfCloseActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeOptionSelfCloseActionField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeOptionSelfCloseActionField_IPAddress = NULL;
	}

	//TThostFtdcExchangeInstIDType char[81]
	if(pExchangeOptionSelfCloseActionField_ExchangeInstID != NULL) {
		if(pExchangeOptionSelfCloseActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", pExchangeOptionSelfCloseActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
			return -1;
		}
		strncpy(self->data.ExchangeInstID, pExchangeOptionSelfCloseActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
		pExchangeOptionSelfCloseActionField_ExchangeInstID = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeOptionSelfCloseActionField_dealloc(PyCThostFtdcExchangeOptionSelfCloseActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_repr(PyCThostFtdcExchangeOptionSelfCloseActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "OptionSelfCloseSysID", self->data.OptionSelfCloseSysID 
		, "ActionFlag", self->data.ActionFlag
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OptionSelfCloseLocalID", self->data.OptionSelfCloseLocalID 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "UserID", self->data.UserID 
		, "BranchID", self->data.BranchID 
		, "reserve1", self->data.reserve1 
		, "MacAddress", self->data.MacAddress 
		, "reserve2", self->data.reserve2 
		, "OptSelfCloseFlag", self->data.OptSelfCloseFlag
		, "IPAddress", self->data.IPAddress 
		, "ExchangeInstID", self->data.ExchangeInstID 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseSysID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionFlag(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionDate(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionTime(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_TraderID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_InstallID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OptionSelfCloseLocalID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ClientID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OrderActionStatus(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_UserID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_BranchID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve1(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_MacAddress(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve2(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OptSelfCloseFlag), 1);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_IPAddress(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeInstID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseSysID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseSysID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseSysID, buf, sizeof(self->data.OptionSelfCloseSysID));
	return 0;
}

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionFlag(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionDate(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionTime(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_TraderID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_InstallID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OptionSelfCloseLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OptionSelfCloseLocalID, buf, sizeof(self->data.OptionSelfCloseLocalID));
	return 0;
}

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionLocalID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ParticipantID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ClientID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_BusinessUnit(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OrderActionStatus(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_UserID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_BranchID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve1(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_MacAddress(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve2(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptSelfCloseFlag(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_IPAddress(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeInstID(PyCThostFtdcExchangeOptionSelfCloseActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeOptionSelfCloseActionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OptionSelfCloseSysID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseSysID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseSysID, (char *)"OptionSelfCloseSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionDate, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionTime, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_TraderID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_InstallID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OptionSelfCloseLocalID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptionSelfCloseLocalID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptionSelfCloseLocalID, (char *)"OptionSelfCloseLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ClientID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_UserID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_BranchID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve1, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_MacAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_reserve2, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"OptSelfCloseFlag", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_OptSelfCloseFlag, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_OptSelfCloseFlag, (char *)"OptSelfCloseFlag", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_IPAddress, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"ExchangeInstID", (getter)PyCThostFtdcExchangeOptionSelfCloseActionField_get_ExchangeInstID, (setter)PyCThostFtdcExchangeOptionSelfCloseActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOptionSelfCloseActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOptionSelfCloseActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOptionSelfCloseActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOptionSelfCloseActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOptionSelfCloseActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOptionSelfCloseActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOptionSelfCloseActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOptionSelfCloseActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOptionSelfCloseActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOptionSelfCloseActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOptionSelfCloseActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOptionSelfCloseActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOptionSelfCloseActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOptionSelfCloseActionField", (PyObject *)&PyCThostFtdcExchangeOptionSelfCloseActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOptionSelfCloseActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeOptionSelfCloseActionFieldType);
		return -1;
    }

    return 0;
}
