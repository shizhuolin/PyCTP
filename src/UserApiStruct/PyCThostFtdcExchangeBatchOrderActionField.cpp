
#include "PyCThostFtdcExchangeBatchOrderActionField.h"



static PyObject *PyCThostFtdcExchangeBatchOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcExchangeBatchOrderActionField *self = (PyCThostFtdcExchangeBatchOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcExchangeBatchOrderActionField_init(PyCThostFtdcExchangeBatchOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "ActionDate", "ActionTime", "TraderID", "InstallID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "reserve1", "MacAddress", "IPAddress",  NULL};

	//TThostFtdcExchangeIDType char[9]
	const char *pExchangeBatchOrderActionField_ExchangeID = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_ExchangeID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pExchangeBatchOrderActionField_ActionDate = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_ActionDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pExchangeBatchOrderActionField_ActionTime = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_ActionTime_len = 0;

	//TThostFtdcTraderIDType char[21]
	const char *pExchangeBatchOrderActionField_TraderID = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_TraderID_len = 0;

	//TThostFtdcInstallIDType int
	int pExchangeBatchOrderActionField_InstallID = 0;

	//TThostFtdcOrderLocalIDType char[13]
	const char *pExchangeBatchOrderActionField_ActionLocalID = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_ActionLocalID_len = 0;

	//TThostFtdcParticipantIDType char[11]
	const char *pExchangeBatchOrderActionField_ParticipantID = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_ParticipantID_len = 0;

	//TThostFtdcClientIDType char[11]
	const char *pExchangeBatchOrderActionField_ClientID = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_ClientID_len = 0;

	//TThostFtdcBusinessUnitType char[21]
	const char *pExchangeBatchOrderActionField_BusinessUnit = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_BusinessUnit_len = 0;

	//TThostFtdcOrderActionStatusType char
	char pExchangeBatchOrderActionField_OrderActionStatus = 0;

	//TThostFtdcUserIDType char[16]
	const char *pExchangeBatchOrderActionField_UserID = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_UserID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pExchangeBatchOrderActionField_reserve1 = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_reserve1_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pExchangeBatchOrderActionField_MacAddress = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_MacAddress_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pExchangeBatchOrderActionField_IPAddress = NULL;
	Py_ssize_t pExchangeBatchOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#iy#y#y#y#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#is#s#s#s#cs#s#s#s#", (char **)kwlist
#endif

		, &pExchangeBatchOrderActionField_ExchangeID, &pExchangeBatchOrderActionField_ExchangeID_len
		, &pExchangeBatchOrderActionField_ActionDate, &pExchangeBatchOrderActionField_ActionDate_len
		, &pExchangeBatchOrderActionField_ActionTime, &pExchangeBatchOrderActionField_ActionTime_len
		, &pExchangeBatchOrderActionField_TraderID, &pExchangeBatchOrderActionField_TraderID_len
		, &pExchangeBatchOrderActionField_InstallID
		, &pExchangeBatchOrderActionField_ActionLocalID, &pExchangeBatchOrderActionField_ActionLocalID_len
		, &pExchangeBatchOrderActionField_ParticipantID, &pExchangeBatchOrderActionField_ParticipantID_len
		, &pExchangeBatchOrderActionField_ClientID, &pExchangeBatchOrderActionField_ClientID_len
		, &pExchangeBatchOrderActionField_BusinessUnit, &pExchangeBatchOrderActionField_BusinessUnit_len
		, &pExchangeBatchOrderActionField_OrderActionStatus
		, &pExchangeBatchOrderActionField_UserID, &pExchangeBatchOrderActionField_UserID_len
		, &pExchangeBatchOrderActionField_reserve1, &pExchangeBatchOrderActionField_reserve1_len
		, &pExchangeBatchOrderActionField_MacAddress, &pExchangeBatchOrderActionField_MacAddress_len
		, &pExchangeBatchOrderActionField_IPAddress, &pExchangeBatchOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcExchangeIDType char[9]
	if(pExchangeBatchOrderActionField_ExchangeID != NULL) {
		if(pExchangeBatchOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pExchangeBatchOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pExchangeBatchOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pExchangeBatchOrderActionField_ActionDate != NULL) {
		if(pExchangeBatchOrderActionField_ActionDate_len > (Py_ssize_t)sizeof(self->data.ActionDate)) {
			PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_ActionDate_len, (Py_ssize_t)sizeof(self->data.ActionDate));
			return -1;
		}
		strncpy(self->data.ActionDate, pExchangeBatchOrderActionField_ActionDate, sizeof(self->data.ActionDate) );
		pExchangeBatchOrderActionField_ActionDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pExchangeBatchOrderActionField_ActionTime != NULL) {
		if(pExchangeBatchOrderActionField_ActionTime_len > (Py_ssize_t)sizeof(self->data.ActionTime)) {
			PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_ActionTime_len, (Py_ssize_t)sizeof(self->data.ActionTime));
			return -1;
		}
		strncpy(self->data.ActionTime, pExchangeBatchOrderActionField_ActionTime, sizeof(self->data.ActionTime) );
		pExchangeBatchOrderActionField_ActionTime = NULL;
	}

	//TThostFtdcTraderIDType char[21]
	if(pExchangeBatchOrderActionField_TraderID != NULL) {
		if(pExchangeBatchOrderActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
			PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
			return -1;
		}
		strncpy(self->data.TraderID, pExchangeBatchOrderActionField_TraderID, sizeof(self->data.TraderID) );
		pExchangeBatchOrderActionField_TraderID = NULL;
	}

	//TThostFtdcInstallIDType int
	self->data.InstallID = pExchangeBatchOrderActionField_InstallID;

	//TThostFtdcOrderLocalIDType char[13]
	if(pExchangeBatchOrderActionField_ActionLocalID != NULL) {
		if(pExchangeBatchOrderActionField_ActionLocalID_len > (Py_ssize_t)sizeof(self->data.ActionLocalID)) {
			PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_ActionLocalID_len, (Py_ssize_t)sizeof(self->data.ActionLocalID));
			return -1;
		}
		strncpy(self->data.ActionLocalID, pExchangeBatchOrderActionField_ActionLocalID, sizeof(self->data.ActionLocalID) );
		pExchangeBatchOrderActionField_ActionLocalID = NULL;
	}

	//TThostFtdcParticipantIDType char[11]
	if(pExchangeBatchOrderActionField_ParticipantID != NULL) {
		if(pExchangeBatchOrderActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
			PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
			return -1;
		}
		strncpy(self->data.ParticipantID, pExchangeBatchOrderActionField_ParticipantID, sizeof(self->data.ParticipantID) );
		pExchangeBatchOrderActionField_ParticipantID = NULL;
	}

	//TThostFtdcClientIDType char[11]
	if(pExchangeBatchOrderActionField_ClientID != NULL) {
		if(pExchangeBatchOrderActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
			PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
			return -1;
		}
		strncpy(self->data.ClientID, pExchangeBatchOrderActionField_ClientID, sizeof(self->data.ClientID) );
		pExchangeBatchOrderActionField_ClientID = NULL;
	}

	//TThostFtdcBusinessUnitType char[21]
	if(pExchangeBatchOrderActionField_BusinessUnit != NULL) {
		if(pExchangeBatchOrderActionField_BusinessUnit_len > (Py_ssize_t)sizeof(self->data.BusinessUnit)) {
			PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_BusinessUnit_len, (Py_ssize_t)sizeof(self->data.BusinessUnit));
			return -1;
		}
		strncpy(self->data.BusinessUnit, pExchangeBatchOrderActionField_BusinessUnit, sizeof(self->data.BusinessUnit) );
		pExchangeBatchOrderActionField_BusinessUnit = NULL;
	}

	//TThostFtdcOrderActionStatusType char
	self->data.OrderActionStatus = pExchangeBatchOrderActionField_OrderActionStatus;

	//TThostFtdcUserIDType char[16]
	if(pExchangeBatchOrderActionField_UserID != NULL) {
		if(pExchangeBatchOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pExchangeBatchOrderActionField_UserID, sizeof(self->data.UserID) );
		pExchangeBatchOrderActionField_UserID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pExchangeBatchOrderActionField_reserve1 != NULL) {
		if(pExchangeBatchOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pExchangeBatchOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pExchangeBatchOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pExchangeBatchOrderActionField_MacAddress != NULL) {
		if(pExchangeBatchOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pExchangeBatchOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pExchangeBatchOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pExchangeBatchOrderActionField_IPAddress != NULL) {
		if(pExchangeBatchOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pExchangeBatchOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pExchangeBatchOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pExchangeBatchOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcExchangeBatchOrderActionField_dealloc(PyCThostFtdcExchangeBatchOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_repr(PyCThostFtdcExchangeBatchOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

		, "ExchangeID", self->data.ExchangeID 
		, "ActionDate", self->data.ActionDate 
		, "ActionTime", self->data.ActionTime 
		, "TraderID", self->data.TraderID 
		, "InstallID", self->data.InstallID
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeBatchOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ExchangeID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ActionDate(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionDate);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ActionTime(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionTime);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_TraderID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.TraderID);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_InstallID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.InstallID);
#else 
	return PyInt_FromLong(self->data.InstallID);
#endif 
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ActionLocalID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ActionLocalID);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ParticipantID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParticipantID);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_ClientID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientID);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_BusinessUnit(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BusinessUnit);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_OrderActionStatus(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OrderActionStatus), 1);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_UserID(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_reserve1(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_MacAddress(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcExchangeBatchOrderActionField_get_IPAddress(PyCThostFtdcExchangeBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcExchangeBatchOrderActionField_set_ExchangeID(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_ActionDate(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_ActionTime(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_TraderID(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_InstallID(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_ActionLocalID(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_ParticipantID(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_ClientID(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_BusinessUnit(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_OrderActionStatus(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_UserID(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_reserve1(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_MacAddress(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcExchangeBatchOrderActionField_set_IPAddress(PyCThostFtdcExchangeBatchOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcExchangeBatchOrderActionField_getset[] = {
	 {(char *)"ExchangeID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ExchangeID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"ActionDate", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ActionDate, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ActionDate, (char *)"ActionDate", NULL},
	 {(char *)"ActionTime", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ActionTime, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ActionTime, (char *)"ActionTime", NULL},
	 {(char *)"TraderID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_TraderID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_TraderID, (char *)"TraderID", NULL},
	 {(char *)"InstallID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_InstallID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_InstallID, (char *)"InstallID", NULL},
	 {(char *)"ActionLocalID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ActionLocalID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ActionLocalID, (char *)"ActionLocalID", NULL},
	 {(char *)"ParticipantID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ParticipantID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
	 {(char *)"ClientID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_ClientID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_ClientID, (char *)"ClientID", NULL},
	 {(char *)"BusinessUnit", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_BusinessUnit, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_BusinessUnit, (char *)"BusinessUnit", NULL},
	 {(char *)"OrderActionStatus", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_OrderActionStatus, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_OrderActionStatus, (char *)"OrderActionStatus", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_UserID, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_reserve1, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_MacAddress, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcExchangeBatchOrderActionField_get_IPAddress, (setter)PyCThostFtdcExchangeBatchOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcExchangeBatchOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcExchangeBatchOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcExchangeBatchOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcExchangeBatchOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcExchangeBatchOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcExchangeBatchOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcExchangeBatchOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcExchangeBatchOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcExchangeBatchOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcExchangeBatchOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcExchangeBatchOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcExchangeBatchOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcExchangeBatchOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcExchangeBatchOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcExchangeBatchOrderActionField", (PyObject *)&PyCThostFtdcExchangeBatchOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeBatchOrderActionField to module");
        Py_DECREF(&PyCThostFtdcExchangeBatchOrderActionFieldType);
		return -1;
    }

    return 0;
}
