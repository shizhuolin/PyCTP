
#include "PyCThostFtdcExchangeOrderActionField.h"



static PyObject *PyCThostFtdcExchangeOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeOrderActionField *self = (PyCThostFtdcExchangeOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeOrderActionField_init(PyCThostFtdcExchangeOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "ActionDate", "ActionTime", "TraderID", "InstallID", "OrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "BranchID", "reserve1", "MacAddress", "IPAddress",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeOrderActionField_ExchangeID = NULL;
	Py_ssize_t pExchangeOrderActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeOrderActionField_OrderSysID = NULL;
	Py_ssize_t pExchangeOrderActionField_OrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pExchangeOrderActionField_ActionFlag = 0;

	//TThostFtdcPriceType double
	double pExchangeOrderActionField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pExchangeOrderActionField_VolumeChange = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeOrderActionField_ActionDate = NULL;
	Py_ssize_t pExchangeOrderActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeOrderActionField_ActionTime = NULL;
	Py_ssize_t pExchangeOrderActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeOrderActionField_TraderID = NULL;
	Py_ssize_t pExchangeOrderActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeOrderActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOrderActionField_OrderLocalID = NULL;
	Py_ssize_t pExchangeOrderActionField_OrderLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeOrderActionField_ActionLocalID = NULL;
	Py_ssize_t pExchangeOrderActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeOrderActionField_ParticipantID = NULL;
	Py_ssize_t pExchangeOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeOrderActionField_ClientID = NULL;
	Py_ssize_t pExchangeOrderActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeOrderActionField_BusinessUnit = NULL;
	Py_ssize_t pExchangeOrderActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pExchangeOrderActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExchangeOrderActionField_UserID = NULL;
	Py_ssize_t pExchangeOrderActionField_UserID_len = 0;

	//TThostFtdcBranchIDType char[9]
	const char *pExchangeOrderActionField_BranchID = NULL;
	Py_ssize_t pExchangeOrderActionField_BranchID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeOrderActionField_reserve1 = NULL;
	Py_ssize_t pExchangeOrderActionField_reserve1_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeOrderActionField_MacAddress = NULL;
	Py_ssize_t pExchangeOrderActionField_MacAddress_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeOrderActionField_IPAddress = NULL;
	Py_ssize_t pExchangeOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cdiy#y#y#iy#y#y#y#y#cy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cdis#s#s#is#s#s#s#s#cs#s#s#s#s#", (char **)kwlist
#endif

		, &pExchangeOrderActionField_ExchangeID, &pExchangeOrderActionField_ExchangeID_len
		, &pExchangeOrderActionField_OrderSysID, &pExchangeOrderActionField_OrderSysID_len
		, &pExchangeOrderActionField_ActionFlag
		, &pExchangeOrderActionField_LimitPrice
		, &pExchangeOrderActionField_VolumeChange
		, &pExchangeOrderActionField_ActionDate, &pExchangeOrderActionField_ActionDate_len
		, &pExchangeOrderActionField_ActionTime, &pExchangeOrderActionField_ActionTime_len
		, &pExchangeOrderActionField_TraderID, &pExchangeOrderActionField_TraderID_len
		, &pExchangeOrderActionField_InstallID
		, &pExchangeOrderActionField_OrderLocalID, &pExchangeOrderActionField_OrderLocalID_len
		, &pExchangeOrderActionField_ActionLocalID, &pExchangeOrderActionField_ActionLocalID_len
		, &pExchangeOrderActionField_ParticipantID, &pExchangeOrderActionField_ParticipantID_len
		, &pExchangeOrderActionField_ClientID, &pExchangeOrderActionField_ClientID_len
		, &pExchangeOrderActionField_BusinessUnit, &pExchangeOrderActionField_BusinessUnit_len
		, &pExchangeOrderActionField_OrderActionStatus
		, &pExchangeOrderActionField_UserID, &pExchangeOrderActionField_UserID_len
		, &pExchangeOrderActionField_BranchID, &pExchangeOrderActionField_BranchID_len
		, &pExchangeOrderActionField_reserve1, &pExchangeOrderActionField_reserve1_len
		, &pExchangeOrderActionField_MacAddress, &pExchangeOrderActionField_MacAddress_len
		, &pExchangeOrderActionField_IPAddress, &pExchangeOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeOrderActionField_ExchangeID != NULL) {
		if(pExchangeOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeOrderActionField_OrderSysID != NULL) {
		if(pExchangeOrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pExchangeOrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
		pExchangeOrderActionField_OrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pExchangeOrderActionField_ActionFlag;

	//TThostFtdcPriceType double
	self->data.LimitPrice = pExchangeOrderActionField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeChange = pExchangeOrderActionField_VolumeChange;

	//TThostFtdcDateType char[9]
	if(pExchangeOrderActionField_ActionDate != NULL) {
		if(pExchangeOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pExchangeOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
		pExchangeOrderActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeOrderActionField_ActionTime != NULL) {
		if(pExchangeOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pExchangeOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
		pExchangeOrderActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeOrderActionField_TraderID != NULL) {
		if(pExchangeOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pExchangeOrderActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeOrderActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOrderActionField_OrderLocalID != NULL) {
		if(pExchangeOrderActionField_OrderLocalID_len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
			PyErr_Format(PyExc_ValueError, "OrderLocalID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_OrderLocalID_len, (Py_ssize_t)sizeof(self->data.OrderLocalID));
			return -1;
		}
		strncpy(self->data.OrderLocalID, pExchangeOrderActionField_OrderLocalID, sizeof(self->data.OrderLocalID) );
		pExchangeOrderActionField_OrderLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeOrderActionField_ActionLocalID != NULL) {
		if(pExchangeOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExchangeOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExchangeOrderActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeOrderActionField_ParticipantID != NULL) {
		if(pExchangeOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeOrderActionField_ClientID != NULL) {
		if(pExchangeOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pExchangeOrderActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeOrderActionField_BusinessUnit != NULL) {
		if(pExchangeOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeOrderActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pExchangeOrderActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pExchangeOrderActionField_UserID != NULL) {
		if(pExchangeOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pExchangeOrderActionField_UserID, sizeof(self->data.UserID) );
		pExchangeOrderActionField_UserID = NULL;
	}

	//TThostFtdcBranchIDType char[9]
	if(pExchangeOrderActionField_BranchID != NULL) {
		if(pExchangeOrderActionField_BranchID_len > (Py_ssize_t)sizeof(self->data.BranchID)) {
			PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_BranchID_len, (Py_ssize_t)sizeof(self->data.BranchID));
			return -1;
		}
		strncpy(self->data.BranchID, pExchangeOrderActionField_BranchID, sizeof(self->data.BranchID) );
		pExchangeOrderActionField_BranchID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeOrderActionField_reserve1 != NULL) {
		if(pExchangeOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pExchangeOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeOrderActionField_MacAddress != NULL) {
		if(pExchangeOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeOrderActionField_IPAddress != NULL) {
		if(pExchangeOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeOrderActionField_dealloc(PyCThostFtdcExchangeOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_repr(PyCThostFtdcExchangeOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "OrderSysID", self->data.OrderSysID 
		, "ActionFlag", self->data.ActionFlag
		, "LimitPrice", self->data.LimitPrice
		, "VolumeChange", self->data.VolumeChange
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "OrderLocalID", self->data.OrderLocalID 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "UserID", self->data.UserID 
		, "BranchID", self->data.BranchID 
		, "reserve1", self->data.reserve1 
		, "MacAddress", self->data.MacAddress 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_ExchangeID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_OrderSysID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionFlag(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_LimitPrice(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_VolumeChange(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeChange);
#else 
	return PyInt_FromLong(self->data.VolumeChange);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionDate(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionTime(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_TraderID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_InstallID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_OrderLocalID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderLocalID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_ActionLocalID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_ParticipantID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_ClientID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_BusinessUnit(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_OrderActionStatus(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_UserID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_BranchID(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BranchID);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_reserve1(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_MacAddress(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeOrderActionField_get_IPAddress(PyCThostFtdcExchangeOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeOrderActionField_set_ExchangeID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_OrderSysID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
		PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
	return 0;
}

static int PyCThostFtdcExchangeOrderActionField_set_ActionFlag(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_LimitPrice(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LimitPrice Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.LimitPrice = buf;
    return 0;
}

static int PyCThostFtdcExchangeOrderActionField_set_VolumeChange(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "VolumeChange Expected int"); 
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
    self->data.VolumeChange = (int)buf; 
    return 0; 
}

static int PyCThostFtdcExchangeOrderActionField_set_ActionDate(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_ActionTime(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_TraderID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_InstallID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_OrderLocalID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderLocalID)) {
		PyErr_SetString(PyExc_ValueError, "OrderLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderLocalID, buf, sizeof(self->data.OrderLocalID));
	return 0;
}

static int PyCThostFtdcExchangeOrderActionField_set_ActionLocalID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_ParticipantID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_ClientID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_BusinessUnit(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_OrderActionStatus(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_UserID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_BranchID(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_reserve1(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_MacAddress(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeOrderActionField_set_IPAddress(PyCThostFtdcExchangeOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeOrderActionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcExchangeOrderActionField_get_OrderSysID, (setter)PyCThostFtdcExchangeOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcExchangeOrderActionField_get_LimitPrice, (setter)PyCThostFtdcExchangeOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeChange", (getter)PyCThostFtdcExchangeOrderActionField_get_VolumeChange, (setter)PyCThostFtdcExchangeOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionDate, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionTime, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeOrderActionField_get_TraderID, (setter)PyCThostFtdcExchangeOrderActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeOrderActionField_get_InstallID, (setter)PyCThostFtdcExchangeOrderActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"OrderLocalID", (getter)PyCThostFtdcExchangeOrderActionField_get_OrderLocalID, (setter)PyCThostFtdcExchangeOrderActionField_set_OrderLocalID, (char *)"OrderLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeOrderActionField_get_ClientID, (setter)PyCThostFtdcExchangeOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcExchangeOrderActionField_get_UserID, (setter)PyCThostFtdcExchangeOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"BranchID", (getter)PyCThostFtdcExchangeOrderActionField_get_BranchID, (setter)PyCThostFtdcExchangeOrderActionField_set_BranchID, (char *)"BranchID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeOrderActionField_get_reserve1, (setter)PyCThostFtdcExchangeOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeOrderActionField_get_MacAddress, (setter)PyCThostFtdcExchangeOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeOrderActionField_get_IPAddress, (setter)PyCThostFtdcExchangeOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeOrderActionField", (PyObject *)&PyCThostFtdcExchangeOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeOrderActionFieldType);
		return -1;
    }

    return 0;
}
