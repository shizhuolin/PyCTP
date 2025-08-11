
#include "PyCThostFtdcParkedOrderActionField.h"



static PyObject *PyCThostFtdcParkedOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcParkedOrderActionField *self = (PyCThostFtdcParkedOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcParkedOrderActionField_init(PyCThostFtdcParkedOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "UserID", "reserve1", "ParkedOrderActionID", "UserType", "Status", "ErrorID", "ErrorMsg", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pParkedOrderActionField_BrokerID = NULL;
	Py_ssize_t pParkedOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pParkedOrderActionField_InvestorID = NULL;
	Py_ssize_t pParkedOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pParkedOrderActionField_OrderActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pParkedOrderActionField_OrderRef = NULL;
	Py_ssize_t pParkedOrderActionField_OrderRef_len = 0;

	//TThostFtdcRequestIDType int
	int pParkedOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pParkedOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pParkedOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pParkedOrderActionField_ExchangeID = NULL;
	Py_ssize_t pParkedOrderActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pParkedOrderActionField_OrderSysID = NULL;
	Py_ssize_t pParkedOrderActionField_OrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pParkedOrderActionField_ActionFlag = 0;

	//TThostFtdcPriceType double
	double pParkedOrderActionField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pParkedOrderActionField_VolumeChange = 0;

	//TThostFtdcUserIDType char[16]
	const char *pParkedOrderActionField_UserID = NULL;
	Py_ssize_t pParkedOrderActionField_UserID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pParkedOrderActionField_reserve1 = NULL;
	Py_ssize_t pParkedOrderActionField_reserve1_len = 0;

	//TThostFtdcParkedOrderActionIDType char[13]
	const char *pParkedOrderActionField_ParkedOrderActionID = NULL;
	Py_ssize_t pParkedOrderActionField_ParkedOrderActionID_len = 0;

	//TThostFtdcUserTypeType char
	char pParkedOrderActionField_UserType = 0;

	//TThostFtdcParkedOrderStatusType char
	char pParkedOrderActionField_Status = 0;

	//TThostFtdcErrorIDType int
	int pParkedOrderActionField_ErrorID = 0;

	//TThostFtdcErrorMsgType char[81]
	const char *pParkedOrderActionField_ErrorMsg = NULL;
	Py_ssize_t pParkedOrderActionField_ErrorMsg_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pParkedOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pParkedOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pParkedOrderActionField_reserve2 = NULL;
	Py_ssize_t pParkedOrderActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pParkedOrderActionField_MacAddress = NULL;
	Py_ssize_t pParkedOrderActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pParkedOrderActionField_InstrumentID = NULL;
	Py_ssize_t pParkedOrderActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pParkedOrderActionField_IPAddress = NULL;
	Py_ssize_t pParkedOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#cciy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cdis#s#s#ccis#s#s#s#s#s#", (char **)kwlist
#endif

		, &pParkedOrderActionField_BrokerID, &pParkedOrderActionField_BrokerID_len
		, &pParkedOrderActionField_InvestorID, &pParkedOrderActionField_InvestorID_len
		, &pParkedOrderActionField_OrderActionRef
		, &pParkedOrderActionField_OrderRef, &pParkedOrderActionField_OrderRef_len
		, &pParkedOrderActionField_RequestID
		, &pParkedOrderActionField_FrontID
		, &pParkedOrderActionField_SessionID
		, &pParkedOrderActionField_ExchangeID, &pParkedOrderActionField_ExchangeID_len
		, &pParkedOrderActionField_OrderSysID, &pParkedOrderActionField_OrderSysID_len
		, &pParkedOrderActionField_ActionFlag
		, &pParkedOrderActionField_LimitPrice
		, &pParkedOrderActionField_VolumeChange
		, &pParkedOrderActionField_UserID, &pParkedOrderActionField_UserID_len
		, &pParkedOrderActionField_reserve1, &pParkedOrderActionField_reserve1_len
		, &pParkedOrderActionField_ParkedOrderActionID, &pParkedOrderActionField_ParkedOrderActionID_len
		, &pParkedOrderActionField_UserType
		, &pParkedOrderActionField_Status
		, &pParkedOrderActionField_ErrorID
		, &pParkedOrderActionField_ErrorMsg, &pParkedOrderActionField_ErrorMsg_len
		, &pParkedOrderActionField_InvestUnitID, &pParkedOrderActionField_InvestUnitID_len
		, &pParkedOrderActionField_reserve2, &pParkedOrderActionField_reserve2_len
		, &pParkedOrderActionField_MacAddress, &pParkedOrderActionField_MacAddress_len
		, &pParkedOrderActionField_InstrumentID, &pParkedOrderActionField_InstrumentID_len
		, &pParkedOrderActionField_IPAddress, &pParkedOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pParkedOrderActionField_BrokerID != NULL) {
		if(pParkedOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pParkedOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pParkedOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pParkedOrderActionField_InvestorID != NULL) {
		if(pParkedOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pParkedOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pParkedOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OrderActionRef = pParkedOrderActionField_OrderActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pParkedOrderActionField_OrderRef != NULL) {
		if(pParkedOrderActionField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pParkedOrderActionField_OrderRef, sizeof(self->data.OrderRef) );
		pParkedOrderActionField_OrderRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pParkedOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pParkedOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pParkedOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pParkedOrderActionField_ExchangeID != NULL) {
		if(pParkedOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pParkedOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pParkedOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pParkedOrderActionField_OrderSysID != NULL) {
		if(pParkedOrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pParkedOrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
		pParkedOrderActionField_OrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pParkedOrderActionField_ActionFlag;

	//TThostFtdcPriceType double
	self->data.LimitPrice = pParkedOrderActionField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeChange = pParkedOrderActionField_VolumeChange;

	//TThostFtdcUserIDType char[16]
	if(pParkedOrderActionField_UserID != NULL) {
		if(pParkedOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pParkedOrderActionField_UserID, sizeof(self->data.UserID) );
		pParkedOrderActionField_UserID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pParkedOrderActionField_reserve1 != NULL) {
		if(pParkedOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pParkedOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pParkedOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcParkedOrderActionIDType char[13]
	if(pParkedOrderActionField_ParkedOrderActionID != NULL) {
		if(pParkedOrderActionField_ParkedOrderActionID_len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
			PyErr_Format(PyExc_ValueError, "ParkedOrderActionID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_ParkedOrderActionID_len, (Py_ssize_t)sizeof(self->data.ParkedOrderActionID));
			return -1;
		}
		strncpy(self->data.ParkedOrderActionID, pParkedOrderActionField_ParkedOrderActionID, sizeof(self->data.ParkedOrderActionID) );
		pParkedOrderActionField_ParkedOrderActionID = NULL;
	}

	//TThostFtdcUserTypeType char
	self->data.UserType = pParkedOrderActionField_UserType;

	//TThostFtdcParkedOrderStatusType char
	self->data.Status = pParkedOrderActionField_Status;

	//TThostFtdcErrorIDType int
	self->data.ErrorID = pParkedOrderActionField_ErrorID;

	//TThostFtdcErrorMsgType char[81]
	if(pParkedOrderActionField_ErrorMsg != NULL) {
		if(pParkedOrderActionField_ErrorMsg_len > (Py_ssize_t)sizeof(self->data.ErrorMsg)) {
			PyErr_Format(PyExc_ValueError, "ErrorMsg too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_ErrorMsg_len, (Py_ssize_t)sizeof(self->data.ErrorMsg));
			return -1;
		}
		strncpy(self->data.ErrorMsg, pParkedOrderActionField_ErrorMsg, sizeof(self->data.ErrorMsg) );
		pParkedOrderActionField_ErrorMsg = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pParkedOrderActionField_InvestUnitID != NULL) {
		if(pParkedOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pParkedOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pParkedOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pParkedOrderActionField_reserve2 != NULL) {
		if(pParkedOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pParkedOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pParkedOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pParkedOrderActionField_MacAddress != NULL) {
		if(pParkedOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pParkedOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pParkedOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pParkedOrderActionField_InstrumentID != NULL) {
		if(pParkedOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pParkedOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pParkedOrderActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pParkedOrderActionField_IPAddress != NULL) {
		if(pParkedOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pParkedOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pParkedOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pParkedOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcParkedOrderActionField_dealloc(PyCThostFtdcParkedOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcParkedOrderActionField_repr(PyCThostFtdcParkedOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:c,s:c,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:c,s:c,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OrderActionRef", self->data.OrderActionRef
		, "OrderRef", self->data.OrderRef 
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "OrderSysID", self->data.OrderSysID 
		, "ActionFlag", self->data.ActionFlag
		, "LimitPrice", self->data.LimitPrice
		, "VolumeChange", self->data.VolumeChange
		, "UserID", self->data.UserID 
		, "reserve1", self->data.reserve1 
		, "ParkedOrderActionID", self->data.ParkedOrderActionID 
		, "UserType", self->data.UserType
		, "Status", self->data.Status
		, "ErrorID", self->data.ErrorID
		, "ErrorMsg", self->data.ErrorMsg 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcParkedOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_BrokerID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_InvestorID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_OrderActionRef(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderActionRef);
#else 
	return PyInt_FromLong(self->data.OrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_OrderRef(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_RequestID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_FrontID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_SessionID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_ExchangeID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_OrderSysID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_ActionFlag(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_LimitPrice(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_VolumeChange(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeChange);
#else 
	return PyInt_FromLong(self->data.VolumeChange);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_UserID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_reserve1(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_ParkedOrderActionID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ParkedOrderActionID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_UserType(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.UserType), 1);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_Status(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.Status), 1);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_ErrorID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ErrorID);
#else 
	return PyInt_FromLong(self->data.ErrorID);
#endif 
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_ErrorMsg(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ErrorMsg);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_InvestUnitID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_reserve2(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_MacAddress(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_InstrumentID(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcParkedOrderActionField_get_IPAddress(PyCThostFtdcParkedOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcParkedOrderActionField_set_BrokerID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_InvestorID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_OrderActionRef(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "OrderActionRef Expected int"); 
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
    self->data.OrderActionRef = (int)buf; 
    return 0; 
}

static int PyCThostFtdcParkedOrderActionField_set_OrderRef(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
		PyErr_SetString(PyExc_ValueError, "OrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderRef, buf, sizeof(self->data.OrderRef));
	return 0;
}

static int PyCThostFtdcParkedOrderActionField_set_RequestID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_FrontID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int"); 
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
    self->data.FrontID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcParkedOrderActionField_set_SessionID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int"); 
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
    self->data.SessionID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcParkedOrderActionField_set_ExchangeID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_OrderSysID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_ActionFlag(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_LimitPrice(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_VolumeChange(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_UserID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_reserve1(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_ParkedOrderActionID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ParkedOrderActionID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ParkedOrderActionID)) {
		PyErr_SetString(PyExc_ValueError, "ParkedOrderActionID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.ParkedOrderActionID, buf, sizeof(self->data.ParkedOrderActionID));
	return 0;
}

static int PyCThostFtdcParkedOrderActionField_set_UserType(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserType)) {
		PyErr_SetString(PyExc_ValueError, "UserType must be less than 1 bytes");
		return -1;
	}
	self->data.UserType = *buf;
	return 0;
}

static int PyCThostFtdcParkedOrderActionField_set_Status(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Status Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Status)) {
		PyErr_SetString(PyExc_ValueError, "Status must be less than 1 bytes");
		return -1;
	}
	self->data.Status = *buf;
	return 0;
}

static int PyCThostFtdcParkedOrderActionField_set_ErrorID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_ErrorMsg(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_InvestUnitID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_reserve2(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_MacAddress(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_InstrumentID(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcParkedOrderActionField_set_IPAddress(PyCThostFtdcParkedOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcParkedOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcParkedOrderActionField_get_BrokerID, (setter)PyCThostFtdcParkedOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcParkedOrderActionField_get_InvestorID, (setter)PyCThostFtdcParkedOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OrderActionRef", (getter)PyCThostFtdcParkedOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcParkedOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcParkedOrderActionField_get_OrderRef, (setter)PyCThostFtdcParkedOrderActionField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcParkedOrderActionField_get_RequestID, (setter)PyCThostFtdcParkedOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcParkedOrderActionField_get_FrontID, (setter)PyCThostFtdcParkedOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcParkedOrderActionField_get_SessionID, (setter)PyCThostFtdcParkedOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcParkedOrderActionField_get_ExchangeID, (setter)PyCThostFtdcParkedOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcParkedOrderActionField_get_OrderSysID, (setter)PyCThostFtdcParkedOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcParkedOrderActionField_get_ActionFlag, (setter)PyCThostFtdcParkedOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcParkedOrderActionField_get_LimitPrice, (setter)PyCThostFtdcParkedOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeChange", (getter)PyCThostFtdcParkedOrderActionField_get_VolumeChange, (setter)PyCThostFtdcParkedOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcParkedOrderActionField_get_UserID, (setter)PyCThostFtdcParkedOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcParkedOrderActionField_get_reserve1, (setter)PyCThostFtdcParkedOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"ParkedOrderActionID", (getter)PyCThostFtdcParkedOrderActionField_get_ParkedOrderActionID, (setter)PyCThostFtdcParkedOrderActionField_set_ParkedOrderActionID, (char *)"ParkedOrderActionID", NULL},
	 {(char *)"UserType", (getter)PyCThostFtdcParkedOrderActionField_get_UserType, (setter)PyCThostFtdcParkedOrderActionField_set_UserType, (char *)"UserType", NULL},
	 {(char *)"Status", (getter)PyCThostFtdcParkedOrderActionField_get_Status, (setter)PyCThostFtdcParkedOrderActionField_set_Status, (char *)"Status", NULL},
	 {(char *)"ErrorID", (getter)PyCThostFtdcParkedOrderActionField_get_ErrorID, (setter)PyCThostFtdcParkedOrderActionField_set_ErrorID, (char *)"ErrorID", NULL},
	 {(char *)"ErrorMsg", (getter)PyCThostFtdcParkedOrderActionField_get_ErrorMsg, (setter)PyCThostFtdcParkedOrderActionField_set_ErrorMsg, (char *)"ErrorMsg", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcParkedOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcParkedOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcParkedOrderActionField_get_reserve2, (setter)PyCThostFtdcParkedOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcParkedOrderActionField_get_MacAddress, (setter)PyCThostFtdcParkedOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcParkedOrderActionField_get_InstrumentID, (setter)PyCThostFtdcParkedOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcParkedOrderActionField_get_IPAddress, (setter)PyCThostFtdcParkedOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcParkedOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcParkedOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcParkedOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcParkedOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcParkedOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcParkedOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcParkedOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcParkedOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcParkedOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcParkedOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcParkedOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcParkedOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcParkedOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcParkedOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcParkedOrderActionField", (PyObject *)&PyCThostFtdcParkedOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcParkedOrderActionField to module");
        Py_DECREF(&PyCThostFtdcParkedOrderActionFieldType);
		return -1;
    }

    return 0;
}
