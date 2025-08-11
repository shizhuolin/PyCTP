
#include "PyCThostFtdcExchangeQuoteActionField.h"



static PyObject *PyCThostFtdcExchangeQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeQuoteActionField *self = (PyCThostFtdcExchangeQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeQuoteActionField_init(PyCThostFtdcExchangeQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "QuoteSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "QuoteLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "reserve1", "MacAddress", "IPAddress",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeQuoteActionField_ExchangeID = NULL;
	Py_ssize_t pExchangeQuoteActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pExchangeQuoteActionField_QuoteSysID = NULL;
	Py_ssize_t pExchangeQuoteActionField_QuoteSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pExchangeQuoteActionField_ActionFlag = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeQuoteActionField_ActionDate = NULL;
	Py_ssize_t pExchangeQuoteActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeQuoteActionField_ActionTime = NULL;
	Py_ssize_t pExchangeQuoteActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeQuoteActionField_TraderID = NULL;
	Py_ssize_t pExchangeQuoteActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeQuoteActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeQuoteActionField_QuoteLocalID = NULL;
	Py_ssize_t pExchangeQuoteActionField_QuoteLocalID_len = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeQuoteActionField_ActionLocalID = NULL;
	Py_ssize_t pExchangeQuoteActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeQuoteActionField_ParticipantID = NULL;
	Py_ssize_t pExchangeQuoteActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeQuoteActionField_ClientID = NULL;
	Py_ssize_t pExchangeQuoteActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeQuoteActionField_BusinessUnit = NULL;
	Py_ssize_t pExchangeQuoteActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pExchangeQuoteActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExchangeQuoteActionField_UserID = NULL;
	Py_ssize_t pExchangeQuoteActionField_UserID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeQuoteActionField_reserve1 = NULL;
	Py_ssize_t pExchangeQuoteActionField_reserve1_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeQuoteActionField_MacAddress = NULL;
	Py_ssize_t pExchangeQuoteActionField_MacAddress_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeQuoteActionField_IPAddress = NULL;
	Py_ssize_t pExchangeQuoteActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#s#is#s#s#s#s#cs#s#s#s#", (char **)kwlist
#endif

		, &pExchangeQuoteActionField_ExchangeID, &pExchangeQuoteActionField_ExchangeID_len
		, &pExchangeQuoteActionField_QuoteSysID, &pExchangeQuoteActionField_QuoteSysID_len
		, &pExchangeQuoteActionField_ActionFlag
		, &pExchangeQuoteActionField_ActionDate, &pExchangeQuoteActionField_ActionDate_len
		, &pExchangeQuoteActionField_ActionTime, &pExchangeQuoteActionField_ActionTime_len
		, &pExchangeQuoteActionField_TraderID, &pExchangeQuoteActionField_TraderID_len
		, &pExchangeQuoteActionField_InstallID
		, &pExchangeQuoteActionField_QuoteLocalID, &pExchangeQuoteActionField_QuoteLocalID_len
		, &pExchangeQuoteActionField_ActionLocalID, &pExchangeQuoteActionField_ActionLocalID_len
		, &pExchangeQuoteActionField_ParticipantID, &pExchangeQuoteActionField_ParticipantID_len
		, &pExchangeQuoteActionField_ClientID, &pExchangeQuoteActionField_ClientID_len
		, &pExchangeQuoteActionField_BusinessUnit, &pExchangeQuoteActionField_BusinessUnit_len
		, &pExchangeQuoteActionField_OrderActionStatus
		, &pExchangeQuoteActionField_UserID, &pExchangeQuoteActionField_UserID_len
		, &pExchangeQuoteActionField_reserve1, &pExchangeQuoteActionField_reserve1_len
		, &pExchangeQuoteActionField_MacAddress, &pExchangeQuoteActionField_MacAddress_len
		, &pExchangeQuoteActionField_IPAddress, &pExchangeQuoteActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeQuoteActionField_ExchangeID != NULL) {
		if(pExchangeQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeQuoteActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pExchangeQuoteActionField_QuoteSysID != NULL) {
		if(pExchangeQuoteActionField_QuoteSysID_len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
			PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_QuoteSysID_len, (Py_ssize_t)sizeof(self->data.QuoteSysID));
			return -1;
		}
		strncpy(self->data.QuoteSysID, pExchangeQuoteActionField_QuoteSysID, sizeof(self->data.QuoteSysID) );
		pExchangeQuoteActionField_QuoteSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pExchangeQuoteActionField_ActionFlag;

	//TThostFtdcDateType char[9]
	if(pExchangeQuoteActionField_ActionDate != NULL) {
		if(pExchangeQuoteActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pExchangeQuoteActionField_ActionDate, sizeof(self->data.ActionDate) );
		pExchangeQuoteActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeQuoteActionField_ActionTime != NULL) {
		if(pExchangeQuoteActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pExchangeQuoteActionField_ActionTime, sizeof(self->data.ActionTime) );
		pExchangeQuoteActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeQuoteActionField_TraderID != NULL) {
		if(pExchangeQuoteActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeQuoteActionField_TraderID, sizeof(self->data.TraderID) );
		pExchangeQuoteActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeQuoteActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeQuoteActionField_QuoteLocalID != NULL) {
		if(pExchangeQuoteActionField_QuoteLocalID_len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
			PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_QuoteLocalID_len, (Py_ssize_t)sizeof(self->data.QuoteLocalID));
			return -1;
		}
		strncpy(self->data.QuoteLocalID, pExchangeQuoteActionField_QuoteLocalID, sizeof(self->data.QuoteLocalID) );
		pExchangeQuoteActionField_QuoteLocalID = NULL;
	}

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeQuoteActionField_ActionLocalID != NULL) {
		if(pExchangeQuoteActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExchangeQuoteActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExchangeQuoteActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeQuoteActionField_ParticipantID != NULL) {
		if(pExchangeQuoteActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeQuoteActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeQuoteActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeQuoteActionField_ClientID != NULL) {
		if(pExchangeQuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeQuoteActionField_ClientID, sizeof(self->data.ClientID) );
		pExchangeQuoteActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeQuoteActionField_BusinessUnit != NULL) {
		if(pExchangeQuoteActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeQuoteActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeQuoteActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pExchangeQuoteActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pExchangeQuoteActionField_UserID != NULL) {
		if(pExchangeQuoteActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pExchangeQuoteActionField_UserID, sizeof(self->data.UserID) );
		pExchangeQuoteActionField_UserID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeQuoteActionField_reserve1 != NULL) {
		if(pExchangeQuoteActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeQuoteActionField_reserve1, sizeof(self->data.reserve1) );
		pExchangeQuoteActionField_reserve1 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeQuoteActionField_MacAddress != NULL) {
		if(pExchangeQuoteActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeQuoteActionField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeQuoteActionField_MacAddress = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeQuoteActionField_IPAddress != NULL) {
		if(pExchangeQuoteActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeQuoteActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeQuoteActionField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeQuoteActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeQuoteActionField_dealloc(PyCThostFtdcExchangeQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_repr(PyCThostFtdcExchangeQuoteActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "QuoteSysID", self->data.QuoteSysID 
		, "ActionFlag", self->data.ActionFlag
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
		, "QuoteLocalID", self->data.QuoteLocalID 
		, "ActionLocalID", self->data.ActionLocalID 
		, "ParticipantID", self->data.ParticipantID 
		, "ClientID", self->data.ClientID 
		, "BusinessUnit", self->data.BusinessUnit 
		, "OrderActionStatus", self->data.OrderActionStatus
		, "UserID", self->data.UserID 
		, "reserve1", self->data.reserve1 
		, "MacAddress", self->data.MacAddress 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ExchangeID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_QuoteSysID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteSysID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionFlag(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionDate(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionTime(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_TraderID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_InstallID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_QuoteLocalID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.QuoteLocalID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ActionLocalID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ParticipantID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_ClientID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_BusinessUnit(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_OrderActionStatus(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_UserID(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_reserve1(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_MacAddress(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeQuoteActionField_get_IPAddress(PyCThostFtdcExchangeQuoteActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeQuoteActionField_set_ExchangeID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_QuoteSysID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteSysID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 21 bytes");
		return -1;
	}
	strncpy(self->data.QuoteSysID, buf, sizeof(self->data.QuoteSysID));
	return 0;
}

static int PyCThostFtdcExchangeQuoteActionField_set_ActionFlag(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_ActionDate(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_ActionTime(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_TraderID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_InstallID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_QuoteLocalID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.QuoteLocalID)) {
		PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.QuoteLocalID, buf, sizeof(self->data.QuoteLocalID));
	return 0;
}

static int PyCThostFtdcExchangeQuoteActionField_set_ActionLocalID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_ParticipantID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_ClientID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_BusinessUnit(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_OrderActionStatus(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_UserID(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_reserve1(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_MacAddress(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeQuoteActionField_set_IPAddress(PyCThostFtdcExchangeQuoteActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeQuoteActionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"QuoteSysID", (getter)PyCThostFtdcExchangeQuoteActionField_get_QuoteSysID, (setter)PyCThostFtdcExchangeQuoteActionField_set_QuoteSysID, (char *)"QuoteSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionFlag, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionDate, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionTime, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeQuoteActionField_get_TraderID, (setter)PyCThostFtdcExchangeQuoteActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeQuoteActionField_get_InstallID, (setter)PyCThostFtdcExchangeQuoteActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"QuoteLocalID", (getter)PyCThostFtdcExchangeQuoteActionField_get_QuoteLocalID, (setter)PyCThostFtdcExchangeQuoteActionField_set_QuoteLocalID, (char *)"QuoteLocalID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeQuoteActionField_get_ClientID, (setter)PyCThostFtdcExchangeQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeQuoteActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeQuoteActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeQuoteActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeQuoteActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcExchangeQuoteActionField_get_UserID, (setter)PyCThostFtdcExchangeQuoteActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeQuoteActionField_get_reserve1, (setter)PyCThostFtdcExchangeQuoteActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeQuoteActionField_get_MacAddress, (setter)PyCThostFtdcExchangeQuoteActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeQuoteActionField_get_IPAddress, (setter)PyCThostFtdcExchangeQuoteActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeQuoteActionField", (PyObject *)&PyCThostFtdcExchangeQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeQuoteActionFieldType);
		return -1;
    }

    return 0;
}
