
#include "PyCThostFtdcInputOrderActionField.h"



static PyObject *PyCThostFtdcInputOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOrderActionField *self = (PyCThostFtdcInputOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputOrderActionField_init(PyCThostFtdcInputOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "OrderRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "OrderSysID", "ActionFlag", "LimitPrice", "VolumeChange", "UserID", "reserve1", "InvestUnitID", "reserve2", "MacAddress", "InstrumentID", "IPAddress", "OrderMemo", "SessionReqSeq",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputOrderActionField_BrokerID = NULL;
	Py_ssize_t pInputOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputOrderActionField_InvestorID = NULL;
	Py_ssize_t pInputOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pInputOrderActionField_OrderActionRef = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pInputOrderActionField_OrderRef = NULL;
	Py_ssize_t pInputOrderActionField_OrderRef_len = 0;

	//TThostFtdcRequestIDType int
	int pInputOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pInputOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pInputOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputOrderActionField_ExchangeID = NULL;
	Py_ssize_t pInputOrderActionField_ExchangeID_len = 0;

	//TThostFtdcOrderSysIDType char[21]
	const char *pInputOrderActionField_OrderSysID = NULL;
	Py_ssize_t pInputOrderActionField_OrderSysID_len = 0;

	//TThostFtdcActionFlagType char
	char pInputOrderActionField_ActionFlag = 0;

	//TThostFtdcPriceType double
	double pInputOrderActionField_LimitPrice = 0.0;

	//TThostFtdcVolumeType int
	int pInputOrderActionField_VolumeChange = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputOrderActionField_UserID = NULL;
	Py_ssize_t pInputOrderActionField_UserID_len = 0;

	//TThostFtdcOldInstrumentIDType char[31]
	const char *pInputOrderActionField_reserve1 = NULL;
	Py_ssize_t pInputOrderActionField_reserve1_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pInputOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputOrderActionField_reserve2 = NULL;
	Py_ssize_t pInputOrderActionField_reserve2_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputOrderActionField_MacAddress = NULL;
	Py_ssize_t pInputOrderActionField_MacAddress_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputOrderActionField_InstrumentID = NULL;
	Py_ssize_t pInputOrderActionField_InstrumentID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputOrderActionField_IPAddress = NULL;
	Py_ssize_t pInputOrderActionField_IPAddress_len = 0;

	//TThostFtdcOrderMemoType char[13]
	const char *pInputOrderActionField_OrderMemo = NULL;
	Py_ssize_t pInputOrderActionField_OrderMemo_len = 0;

	//TThostFtdcSequenceNo12Type int
	int pInputOrderActionField_SessionReqSeq = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iiiy#y#cdiy#y#y#y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#iiis#s#cdis#s#s#s#s#s#s#s#i", (char **)kwlist
#endif

		, &pInputOrderActionField_BrokerID, &pInputOrderActionField_BrokerID_len
		, &pInputOrderActionField_InvestorID, &pInputOrderActionField_InvestorID_len
		, &pInputOrderActionField_OrderActionRef
		, &pInputOrderActionField_OrderRef, &pInputOrderActionField_OrderRef_len
		, &pInputOrderActionField_RequestID
		, &pInputOrderActionField_FrontID
		, &pInputOrderActionField_SessionID
		, &pInputOrderActionField_ExchangeID, &pInputOrderActionField_ExchangeID_len
		, &pInputOrderActionField_OrderSysID, &pInputOrderActionField_OrderSysID_len
		, &pInputOrderActionField_ActionFlag
		, &pInputOrderActionField_LimitPrice
		, &pInputOrderActionField_VolumeChange
		, &pInputOrderActionField_UserID, &pInputOrderActionField_UserID_len
		, &pInputOrderActionField_reserve1, &pInputOrderActionField_reserve1_len
		, &pInputOrderActionField_InvestUnitID, &pInputOrderActionField_InvestUnitID_len
		, &pInputOrderActionField_reserve2, &pInputOrderActionField_reserve2_len
		, &pInputOrderActionField_MacAddress, &pInputOrderActionField_MacAddress_len
		, &pInputOrderActionField_InstrumentID, &pInputOrderActionField_InstrumentID_len
		, &pInputOrderActionField_IPAddress, &pInputOrderActionField_IPAddress_len
		, &pInputOrderActionField_OrderMemo, &pInputOrderActionField_OrderMemo_len
		, &pInputOrderActionField_SessionReqSeq


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputOrderActionField_BrokerID != NULL) {
		if(pInputOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pInputOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputOrderActionField_InvestorID != NULL) {
		if(pInputOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pInputOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OrderActionRef = pInputOrderActionField_OrderActionRef;

	//TThostFtdcOrderRefType char[13]
	if(pInputOrderActionField_OrderRef != NULL) {
		if(pInputOrderActionField_OrderRef_len > (Py_ssize_t)sizeof(self->data.OrderRef)) {
			PyErr_Format(PyExc_ValueError, "OrderRef too long: length=%zd (max allowed is %zd)", pInputOrderActionField_OrderRef_len, (Py_ssize_t)sizeof(self->data.OrderRef));
			return -1;
		}
		strncpy(self->data.OrderRef, pInputOrderActionField_OrderRef, sizeof(self->data.OrderRef) );
		pInputOrderActionField_OrderRef = NULL;
	}

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pInputOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pInputOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pInputOrderActionField_ExchangeID != NULL) {
		if(pInputOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcOrderSysIDType char[21]
	if(pInputOrderActionField_OrderSysID != NULL) {
		if(pInputOrderActionField_OrderSysID_len > (Py_ssize_t)sizeof(self->data.OrderSysID)) {
			PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", pInputOrderActionField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
			return -1;
		}
		strncpy(self->data.OrderSysID, pInputOrderActionField_OrderSysID, sizeof(self->data.OrderSysID) );
		pInputOrderActionField_OrderSysID = NULL;
	}

	//TThostFtdcActionFlagType char
	self->data.ActionFlag = pInputOrderActionField_ActionFlag;

	//TThostFtdcPriceType double
	self->data.LimitPrice = pInputOrderActionField_LimitPrice;
	//TThostFtdcVolumeType int
	self->data.VolumeChange = pInputOrderActionField_VolumeChange;

	//TThostFtdcUserIDType char[16]
	if(pInputOrderActionField_UserID != NULL) {
		if(pInputOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputOrderActionField_UserID, sizeof(self->data.UserID) );
		pInputOrderActionField_UserID = NULL;
	}

	//TThostFtdcOldInstrumentIDType char[31]
	if(pInputOrderActionField_reserve1 != NULL) {
		if(pInputOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pInputOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputOrderActionField_InvestUnitID != NULL) {
		if(pInputOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputOrderActionField_reserve2 != NULL) {
		if(pInputOrderActionField_reserve2_len > (Py_ssize_t)sizeof(self->data.reserve2)) {
			PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is %zd)", pInputOrderActionField_reserve2_len, (Py_ssize_t)sizeof(self->data.reserve2));
			return -1;
		}
		strncpy(self->data.reserve2, pInputOrderActionField_reserve2, sizeof(self->data.reserve2) );
		pInputOrderActionField_reserve2 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputOrderActionField_MacAddress != NULL) {
		if(pInputOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pInputOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputOrderActionField_InstrumentID != NULL) {
		if(pInputOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputOrderActionField_InstrumentID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputOrderActionField_IPAddress != NULL) {
		if(pInputOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pInputOrderActionField_IPAddress = NULL;
	}

	//TThostFtdcOrderMemoType char[13]
	if(pInputOrderActionField_OrderMemo != NULL) {
		if(pInputOrderActionField_OrderMemo_len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
			PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is %zd)", pInputOrderActionField_OrderMemo_len, (Py_ssize_t)sizeof(self->data.OrderMemo));
			return -1;
		}
		strncpy(self->data.OrderMemo, pInputOrderActionField_OrderMemo, sizeof(self->data.OrderMemo) );
		pInputOrderActionField_OrderMemo = NULL;
	}

	//TThostFtdcSequenceNo12Type int
	self->data.SessionReqSeq = pInputOrderActionField_SessionReqSeq;



    return 0;
}

static void PyCThostFtdcInputOrderActionField_dealloc(PyCThostFtdcInputOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOrderActionField_repr(PyCThostFtdcInputOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:i,s:i,s:y,s:y,s:c,s:d,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:i,s:i,s:s,s:s,s:c,s:d,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i}"
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
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve2", self->data.reserve2 
		, "MacAddress", self->data.MacAddress 
		, "InstrumentID", self->data.InstrumentID 
		, "IPAddress", self->data.IPAddress 
		, "OrderMemo", self->data.OrderMemo 
		, "SessionReqSeq", self->data.SessionReqSeq


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_BrokerID(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_InvestorID(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_OrderActionRef(PyCThostFtdcInputOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderActionRef);
#else 
	return PyInt_FromLong(self->data.OrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcInputOrderActionField_get_OrderRef(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderRef);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_RequestID(PyCThostFtdcInputOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputOrderActionField_get_FrontID(PyCThostFtdcInputOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcInputOrderActionField_get_SessionID(PyCThostFtdcInputOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcInputOrderActionField_get_ExchangeID(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_OrderSysID(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderSysID);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_ActionFlag(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.ActionFlag), 1);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_LimitPrice(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyFloat_FromDouble(self->data.LimitPrice);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_VolumeChange(PyCThostFtdcInputOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.VolumeChange);
#else 
	return PyInt_FromLong(self->data.VolumeChange);
#endif 
}

static PyObject *PyCThostFtdcInputOrderActionField_get_UserID(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_reserve1(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_InvestUnitID(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_reserve2(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve2);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_MacAddress(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_InstrumentID(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_IPAddress(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_OrderMemo(PyCThostFtdcInputOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.OrderMemo);
}

static PyObject *PyCThostFtdcInputOrderActionField_get_SessionReqSeq(PyCThostFtdcInputOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionReqSeq);
#else 
	return PyInt_FromLong(self->data.SessionReqSeq);
#endif 
}

static int PyCThostFtdcInputOrderActionField_set_BrokerID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_InvestorID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_OrderActionRef(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_OrderRef(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_RequestID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_FrontID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_SessionID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_ExchangeID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_OrderSysID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_ActionFlag(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_LimitPrice(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_VolumeChange(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_UserID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_reserve1(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_InvestUnitID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_reserve2(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_MacAddress(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_InstrumentID(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_IPAddress(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOrderActionField_set_OrderMemo(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OrderMemo)) {
		PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.OrderMemo, buf, sizeof(self->data.OrderMemo));
	return 0;
}

static int PyCThostFtdcInputOrderActionField_set_SessionReqSeq(PyCThostFtdcInputOrderActionField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "SessionReqSeq Expected int"); 
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
    self->data.SessionReqSeq = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcInputOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputOrderActionField_get_BrokerID, (setter)PyCThostFtdcInputOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputOrderActionField_get_InvestorID, (setter)PyCThostFtdcInputOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OrderActionRef", (getter)PyCThostFtdcInputOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcInputOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
	 {(char *)"OrderRef", (getter)PyCThostFtdcInputOrderActionField_get_OrderRef, (setter)PyCThostFtdcInputOrderActionField_set_OrderRef, (char *)"OrderRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputOrderActionField_get_RequestID, (setter)PyCThostFtdcInputOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcInputOrderActionField_get_FrontID, (setter)PyCThostFtdcInputOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcInputOrderActionField_get_SessionID, (setter)PyCThostFtdcInputOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputOrderActionField_get_ExchangeID, (setter)PyCThostFtdcInputOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"OrderSysID", (getter)PyCThostFtdcInputOrderActionField_get_OrderSysID, (setter)PyCThostFtdcInputOrderActionField_set_OrderSysID, (char *)"OrderSysID", NULL},
	 {(char *)"ActionFlag", (getter)PyCThostFtdcInputOrderActionField_get_ActionFlag, (setter)PyCThostFtdcInputOrderActionField_set_ActionFlag, (char *)"ActionFlag", NULL},
	 {(char *)"LimitPrice", (getter)PyCThostFtdcInputOrderActionField_get_LimitPrice, (setter)PyCThostFtdcInputOrderActionField_set_LimitPrice, (char *)"LimitPrice", NULL},
	 {(char *)"VolumeChange", (getter)PyCThostFtdcInputOrderActionField_get_VolumeChange, (setter)PyCThostFtdcInputOrderActionField_set_VolumeChange, (char *)"VolumeChange", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputOrderActionField_get_UserID, (setter)PyCThostFtdcInputOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputOrderActionField_get_reserve1, (setter)PyCThostFtdcInputOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcInputOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve2", (getter)PyCThostFtdcInputOrderActionField_get_reserve2, (setter)PyCThostFtdcInputOrderActionField_set_reserve2, (char *)"reserve2", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputOrderActionField_get_MacAddress, (setter)PyCThostFtdcInputOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputOrderActionField_get_InstrumentID, (setter)PyCThostFtdcInputOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputOrderActionField_get_IPAddress, (setter)PyCThostFtdcInputOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"OrderMemo", (getter)PyCThostFtdcInputOrderActionField_get_OrderMemo, (setter)PyCThostFtdcInputOrderActionField_set_OrderMemo, (char *)"OrderMemo", NULL},
	 {(char *)"SessionReqSeq", (getter)PyCThostFtdcInputOrderActionField_get_SessionReqSeq, (setter)PyCThostFtdcInputOrderActionField_set_SessionReqSeq, (char *)"SessionReqSeq", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcInputOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcInputOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOrderActionField", (PyObject *)&PyCThostFtdcInputOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOrderActionField to module");
        Py_DECREF(&PyCThostFtdcInputOrderActionFieldType);
		return -1;
    }

    return 0;
}
