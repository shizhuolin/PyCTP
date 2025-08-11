
#include "PyCThostFtdcInputBatchOrderActionField.h"



static PyObject *PyCThostFtdcInputBatchOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputBatchOrderActionField *self = (PyCThostFtdcInputBatchOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputBatchOrderActionField_init(PyCThostFtdcInputBatchOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "OrderActionRef", "RequestID", "FrontID", "SessionID", "ExchangeID", "UserID", "InvestUnitID", "reserve1", "MacAddress", "IPAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputBatchOrderActionField_BrokerID = NULL;
	Py_ssize_t pInputBatchOrderActionField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputBatchOrderActionField_InvestorID = NULL;
	Py_ssize_t pInputBatchOrderActionField_InvestorID_len = 0;

	//TThostFtdcOrderActionRefType int
	int pInputBatchOrderActionField_OrderActionRef = 0;

	//TThostFtdcRequestIDType int
	int pInputBatchOrderActionField_RequestID = 0;

	//TThostFtdcFrontIDType int
	int pInputBatchOrderActionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pInputBatchOrderActionField_SessionID = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputBatchOrderActionField_ExchangeID = NULL;
	Py_ssize_t pInputBatchOrderActionField_ExchangeID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputBatchOrderActionField_UserID = NULL;
	Py_ssize_t pInputBatchOrderActionField_UserID_len = 0;

	//TThostFtdcInvestUnitIDType char[17]
	const char *pInputBatchOrderActionField_InvestUnitID = NULL;
	Py_ssize_t pInputBatchOrderActionField_InvestUnitID_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pInputBatchOrderActionField_reserve1 = NULL;
	Py_ssize_t pInputBatchOrderActionField_reserve1_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputBatchOrderActionField_MacAddress = NULL;
	Py_ssize_t pInputBatchOrderActionField_MacAddress_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputBatchOrderActionField_IPAddress = NULL;
	Py_ssize_t pInputBatchOrderActionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iiiiy#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#iiiis#s#s#s#s#s#", (char **)kwlist
#endif

		, &pInputBatchOrderActionField_BrokerID, &pInputBatchOrderActionField_BrokerID_len
		, &pInputBatchOrderActionField_InvestorID, &pInputBatchOrderActionField_InvestorID_len
		, &pInputBatchOrderActionField_OrderActionRef
		, &pInputBatchOrderActionField_RequestID
		, &pInputBatchOrderActionField_FrontID
		, &pInputBatchOrderActionField_SessionID
		, &pInputBatchOrderActionField_ExchangeID, &pInputBatchOrderActionField_ExchangeID_len
		, &pInputBatchOrderActionField_UserID, &pInputBatchOrderActionField_UserID_len
		, &pInputBatchOrderActionField_InvestUnitID, &pInputBatchOrderActionField_InvestUnitID_len
		, &pInputBatchOrderActionField_reserve1, &pInputBatchOrderActionField_reserve1_len
		, &pInputBatchOrderActionField_MacAddress, &pInputBatchOrderActionField_MacAddress_len
		, &pInputBatchOrderActionField_IPAddress, &pInputBatchOrderActionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputBatchOrderActionField_BrokerID != NULL) {
		if(pInputBatchOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputBatchOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
		pInputBatchOrderActionField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputBatchOrderActionField_InvestorID != NULL) {
		if(pInputBatchOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputBatchOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
		pInputBatchOrderActionField_InvestorID = NULL;
	}

	//TThostFtdcOrderActionRefType int
	self->data.OrderActionRef = pInputBatchOrderActionField_OrderActionRef;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputBatchOrderActionField_RequestID;

	//TThostFtdcFrontIDType int
	self->data.FrontID = pInputBatchOrderActionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pInputBatchOrderActionField_SessionID;

	//TThostFtdcExchangeIDType char[9]
	if(pInputBatchOrderActionField_ExchangeID != NULL) {
		if(pInputBatchOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputBatchOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputBatchOrderActionField_ExchangeID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pInputBatchOrderActionField_UserID != NULL) {
		if(pInputBatchOrderActionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputBatchOrderActionField_UserID, sizeof(self->data.UserID) );
		pInputBatchOrderActionField_UserID = NULL;
	}

	//TThostFtdcInvestUnitIDType char[17]
	if(pInputBatchOrderActionField_InvestUnitID != NULL) {
		if(pInputBatchOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
			PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
			return -1;
		}
		strncpy(self->data.InvestUnitID, pInputBatchOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
		pInputBatchOrderActionField_InvestUnitID = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pInputBatchOrderActionField_reserve1 != NULL) {
		if(pInputBatchOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pInputBatchOrderActionField_reserve1, sizeof(self->data.reserve1) );
		pInputBatchOrderActionField_reserve1 = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputBatchOrderActionField_MacAddress != NULL) {
		if(pInputBatchOrderActionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputBatchOrderActionField_MacAddress, sizeof(self->data.MacAddress) );
		pInputBatchOrderActionField_MacAddress = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputBatchOrderActionField_IPAddress != NULL) {
		if(pInputBatchOrderActionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputBatchOrderActionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputBatchOrderActionField_IPAddress, sizeof(self->data.IPAddress) );
		pInputBatchOrderActionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputBatchOrderActionField_dealloc(PyCThostFtdcInputBatchOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_repr(PyCThostFtdcInputBatchOrderActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:i,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:i,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "OrderActionRef", self->data.OrderActionRef
		, "RequestID", self->data.RequestID
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "ExchangeID", self->data.ExchangeID 
		, "UserID", self->data.UserID 
		, "InvestUnitID", self->data.InvestUnitID 
		, "reserve1", self->data.reserve1 
		, "MacAddress", self->data.MacAddress 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputBatchOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_BrokerID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_InvestorID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_OrderActionRef(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.OrderActionRef);
#else 
	return PyInt_FromLong(self->data.OrderActionRef);
#endif 
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_RequestID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_FrontID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_SessionID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_ExchangeID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_UserID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_InvestUnitID(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestUnitID);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_reserve1(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_MacAddress(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcInputBatchOrderActionField_get_IPAddress(PyCThostFtdcInputBatchOrderActionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcInputBatchOrderActionField_set_BrokerID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_InvestorID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_OrderActionRef(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_RequestID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_FrontID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_SessionID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_ExchangeID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_UserID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_InvestUnitID(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_reserve1(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_MacAddress(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputBatchOrderActionField_set_IPAddress(PyCThostFtdcInputBatchOrderActionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInputBatchOrderActionField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputBatchOrderActionField_get_BrokerID, (setter)PyCThostFtdcInputBatchOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputBatchOrderActionField_get_InvestorID, (setter)PyCThostFtdcInputBatchOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"OrderActionRef", (getter)PyCThostFtdcInputBatchOrderActionField_get_OrderActionRef, (setter)PyCThostFtdcInputBatchOrderActionField_set_OrderActionRef, (char *)"OrderActionRef", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputBatchOrderActionField_get_RequestID, (setter)PyCThostFtdcInputBatchOrderActionField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcInputBatchOrderActionField_get_FrontID, (setter)PyCThostFtdcInputBatchOrderActionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcInputBatchOrderActionField_get_SessionID, (setter)PyCThostFtdcInputBatchOrderActionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputBatchOrderActionField_get_ExchangeID, (setter)PyCThostFtdcInputBatchOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputBatchOrderActionField_get_UserID, (setter)PyCThostFtdcInputBatchOrderActionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"InvestUnitID", (getter)PyCThostFtdcInputBatchOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcInputBatchOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcInputBatchOrderActionField_get_reserve1, (setter)PyCThostFtdcInputBatchOrderActionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputBatchOrderActionField_get_MacAddress, (setter)PyCThostFtdcInputBatchOrderActionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputBatchOrderActionField_get_IPAddress, (setter)PyCThostFtdcInputBatchOrderActionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputBatchOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputBatchOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcInputBatchOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputBatchOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputBatchOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcInputBatchOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputBatchOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputBatchOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputBatchOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcInputBatchOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputBatchOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcInputBatchOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputBatchOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputBatchOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputBatchOrderActionField", (PyObject *)&PyCThostFtdcInputBatchOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputBatchOrderActionField to module");
        Py_DECREF(&PyCThostFtdcInputBatchOrderActionFieldType);
		return -1;
    }

    return 0;
}
