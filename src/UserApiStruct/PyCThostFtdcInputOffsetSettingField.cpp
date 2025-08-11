
#include "PyCThostFtdcInputOffsetSettingField.h"



static PyObject *PyCThostFtdcInputOffsetSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInputOffsetSettingField *self = (PyCThostFtdcInputOffsetSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInputOffsetSettingField_init(PyCThostFtdcInputOffsetSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "InstrumentID", "UnderlyingInstrID", "ProductID", "OffsetType", "Volume", "IsOffset", "RequestID", "UserID", "ExchangeID", "IPAddress", "MacAddress",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pInputOffsetSettingField_BrokerID = NULL;
	Py_ssize_t pInputOffsetSettingField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInputOffsetSettingField_InvestorID = NULL;
	Py_ssize_t pInputOffsetSettingField_InvestorID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputOffsetSettingField_InstrumentID = NULL;
	Py_ssize_t pInputOffsetSettingField_InstrumentID_len = 0;

	//TThostFtdcInstrumentIDType char[81]
	const char *pInputOffsetSettingField_UnderlyingInstrID = NULL;
	Py_ssize_t pInputOffsetSettingField_UnderlyingInstrID_len = 0;

	//TThostFtdcProductIDType char[41]
	const char *pInputOffsetSettingField_ProductID = NULL;
	Py_ssize_t pInputOffsetSettingField_ProductID_len = 0;

	//TThostFtdcOffsetTypeType char
	char pInputOffsetSettingField_OffsetType = 0;

	//TThostFtdcVolumeType int
	int pInputOffsetSettingField_Volume = 0;

	//TThostFtdcBoolType int
	int pInputOffsetSettingField_IsOffset = 0;

	//TThostFtdcRequestIDType int
	int pInputOffsetSettingField_RequestID = 0;

	//TThostFtdcUserIDType char[16]
	const char *pInputOffsetSettingField_UserID = NULL;
	Py_ssize_t pInputOffsetSettingField_UserID_len = 0;

	//TThostFtdcExchangeIDType char[9]
	const char *pInputOffsetSettingField_ExchangeID = NULL;
	Py_ssize_t pInputOffsetSettingField_ExchangeID_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pInputOffsetSettingField_IPAddress = NULL;
	Py_ssize_t pInputOffsetSettingField_IPAddress_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pInputOffsetSettingField_MacAddress = NULL;
	Py_ssize_t pInputOffsetSettingField_MacAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ciiiy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#ciiis#s#s#s#", (char **)kwlist
#endif

		, &pInputOffsetSettingField_BrokerID, &pInputOffsetSettingField_BrokerID_len
		, &pInputOffsetSettingField_InvestorID, &pInputOffsetSettingField_InvestorID_len
		, &pInputOffsetSettingField_InstrumentID, &pInputOffsetSettingField_InstrumentID_len
		, &pInputOffsetSettingField_UnderlyingInstrID, &pInputOffsetSettingField_UnderlyingInstrID_len
		, &pInputOffsetSettingField_ProductID, &pInputOffsetSettingField_ProductID_len
		, &pInputOffsetSettingField_OffsetType
		, &pInputOffsetSettingField_Volume
		, &pInputOffsetSettingField_IsOffset
		, &pInputOffsetSettingField_RequestID
		, &pInputOffsetSettingField_UserID, &pInputOffsetSettingField_UserID_len
		, &pInputOffsetSettingField_ExchangeID, &pInputOffsetSettingField_ExchangeID_len
		, &pInputOffsetSettingField_IPAddress, &pInputOffsetSettingField_IPAddress_len
		, &pInputOffsetSettingField_MacAddress, &pInputOffsetSettingField_MacAddress_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pInputOffsetSettingField_BrokerID != NULL) {
		if(pInputOffsetSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInputOffsetSettingField_BrokerID, sizeof(self->data.BrokerID) );
		pInputOffsetSettingField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInputOffsetSettingField_InvestorID != NULL) {
		if(pInputOffsetSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInputOffsetSettingField_InvestorID, sizeof(self->data.InvestorID) );
		pInputOffsetSettingField_InvestorID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputOffsetSettingField_InstrumentID != NULL) {
		if(pInputOffsetSettingField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
			PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
			return -1;
		}
		strncpy(self->data.InstrumentID, pInputOffsetSettingField_InstrumentID, sizeof(self->data.InstrumentID) );
		pInputOffsetSettingField_InstrumentID = NULL;
	}

	//TThostFtdcInstrumentIDType char[81]
	if(pInputOffsetSettingField_UnderlyingInstrID != NULL) {
		if(pInputOffsetSettingField_UnderlyingInstrID_len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
			PyErr_Format(PyExc_ValueError, "UnderlyingInstrID too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_UnderlyingInstrID_len, (Py_ssize_t)sizeof(self->data.UnderlyingInstrID));
			return -1;
		}
		strncpy(self->data.UnderlyingInstrID, pInputOffsetSettingField_UnderlyingInstrID, sizeof(self->data.UnderlyingInstrID) );
		pInputOffsetSettingField_UnderlyingInstrID = NULL;
	}

	//TThostFtdcProductIDType char[41]
	if(pInputOffsetSettingField_ProductID != NULL) {
		if(pInputOffsetSettingField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
			PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
			return -1;
		}
		strncpy(self->data.ProductID, pInputOffsetSettingField_ProductID, sizeof(self->data.ProductID) );
		pInputOffsetSettingField_ProductID = NULL;
	}

	//TThostFtdcOffsetTypeType char
	self->data.OffsetType = pInputOffsetSettingField_OffsetType;

	//TThostFtdcVolumeType int
	self->data.Volume = pInputOffsetSettingField_Volume;

	//TThostFtdcBoolType int
	self->data.IsOffset = pInputOffsetSettingField_IsOffset;

	//TThostFtdcRequestIDType int
	self->data.RequestID = pInputOffsetSettingField_RequestID;

	//TThostFtdcUserIDType char[16]
	if(pInputOffsetSettingField_UserID != NULL) {
		if(pInputOffsetSettingField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pInputOffsetSettingField_UserID, sizeof(self->data.UserID) );
		pInputOffsetSettingField_UserID = NULL;
	}

	//TThostFtdcExchangeIDType char[9]
	if(pInputOffsetSettingField_ExchangeID != NULL) {
		if(pInputOffsetSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
			PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
			return -1;
		}
		strncpy(self->data.ExchangeID, pInputOffsetSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
		pInputOffsetSettingField_ExchangeID = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pInputOffsetSettingField_IPAddress != NULL) {
		if(pInputOffsetSettingField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pInputOffsetSettingField_IPAddress, sizeof(self->data.IPAddress) );
		pInputOffsetSettingField_IPAddress = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pInputOffsetSettingField_MacAddress != NULL) {
		if(pInputOffsetSettingField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pInputOffsetSettingField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pInputOffsetSettingField_MacAddress, sizeof(self->data.MacAddress) );
		pInputOffsetSettingField_MacAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcInputOffsetSettingField_dealloc(PyCThostFtdcInputOffsetSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_repr(PyCThostFtdcInputOffsetSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:c,s:i,s:i,s:i,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:c,s:i,s:i,s:i,s:s,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "InstrumentID", self->data.InstrumentID 
		, "UnderlyingInstrID", self->data.UnderlyingInstrID 
		, "ProductID", self->data.ProductID 
		, "OffsetType", self->data.OffsetType
		, "Volume", self->data.Volume
		, "IsOffset", self->data.IsOffset
		, "RequestID", self->data.RequestID
		, "UserID", self->data.UserID 
		, "ExchangeID", self->data.ExchangeID 
		, "IPAddress", self->data.IPAddress 
		, "MacAddress", self->data.MacAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInputOffsetSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_BrokerID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_InvestorID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_InstrumentID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.InstrumentID);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_UnderlyingInstrID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.UnderlyingInstrID);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_ProductID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ProductID);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_OffsetType(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.OffsetType), 1);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_Volume(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Volume);
#else 
	return PyInt_FromLong(self->data.Volume);
#endif 
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_IsOffset(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsOffset);
#else 
	return PyInt_FromLong(self->data.IsOffset);
#endif 
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_RequestID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.RequestID);
#else 
	return PyInt_FromLong(self->data.RequestID);
#endif 
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_UserID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_ExchangeID(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.ExchangeID);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_IPAddress(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static PyObject *PyCThostFtdcInputOffsetSettingField_get_MacAddress(PyCThostFtdcInputOffsetSettingField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static int PyCThostFtdcInputOffsetSettingField_set_BrokerID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_InvestorID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_InstrumentID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_UnderlyingInstrID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UnderlyingInstrID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UnderlyingInstrID)) {
		PyErr_SetString(PyExc_ValueError, "UnderlyingInstrID must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.UnderlyingInstrID, buf, sizeof(self->data.UnderlyingInstrID));
	return 0;
}

static int PyCThostFtdcInputOffsetSettingField_set_ProductID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
		PyErr_SetString(PyExc_ValueError, "ProductID must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
	return 0;
}

static int PyCThostFtdcInputOffsetSettingField_set_OffsetType(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OffsetType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OffsetType)) {
		PyErr_SetString(PyExc_ValueError, "OffsetType must be less than 1 bytes");
		return -1;
	}
	self->data.OffsetType = *buf;
	return 0;
}

static int PyCThostFtdcInputOffsetSettingField_set_Volume(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_IsOffset(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsOffset Expected int"); 
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
    self->data.IsOffset = (int)buf; 
    return 0; 
}

static int PyCThostFtdcInputOffsetSettingField_set_RequestID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_UserID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_ExchangeID(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_IPAddress(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInputOffsetSettingField_set_MacAddress(PyCThostFtdcInputOffsetSettingField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInputOffsetSettingField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcInputOffsetSettingField_get_BrokerID, (setter)PyCThostFtdcInputOffsetSettingField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcInputOffsetSettingField_get_InvestorID, (setter)PyCThostFtdcInputOffsetSettingField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"InstrumentID", (getter)PyCThostFtdcInputOffsetSettingField_get_InstrumentID, (setter)PyCThostFtdcInputOffsetSettingField_set_InstrumentID, (char *)"InstrumentID", NULL},
	 {(char *)"UnderlyingInstrID", (getter)PyCThostFtdcInputOffsetSettingField_get_UnderlyingInstrID, (setter)PyCThostFtdcInputOffsetSettingField_set_UnderlyingInstrID, (char *)"UnderlyingInstrID", NULL},
	 {(char *)"ProductID", (getter)PyCThostFtdcInputOffsetSettingField_get_ProductID, (setter)PyCThostFtdcInputOffsetSettingField_set_ProductID, (char *)"ProductID", NULL},
	 {(char *)"OffsetType", (getter)PyCThostFtdcInputOffsetSettingField_get_OffsetType, (setter)PyCThostFtdcInputOffsetSettingField_set_OffsetType, (char *)"OffsetType", NULL},
	 {(char *)"Volume", (getter)PyCThostFtdcInputOffsetSettingField_get_Volume, (setter)PyCThostFtdcInputOffsetSettingField_set_Volume, (char *)"Volume", NULL},
	 {(char *)"IsOffset", (getter)PyCThostFtdcInputOffsetSettingField_get_IsOffset, (setter)PyCThostFtdcInputOffsetSettingField_set_IsOffset, (char *)"IsOffset", NULL},
	 {(char *)"RequestID", (getter)PyCThostFtdcInputOffsetSettingField_get_RequestID, (setter)PyCThostFtdcInputOffsetSettingField_set_RequestID, (char *)"RequestID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcInputOffsetSettingField_get_UserID, (setter)PyCThostFtdcInputOffsetSettingField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"ExchangeID", (getter)PyCThostFtdcInputOffsetSettingField_get_ExchangeID, (setter)PyCThostFtdcInputOffsetSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcInputOffsetSettingField_get_IPAddress, (setter)PyCThostFtdcInputOffsetSettingField_set_IPAddress, (char *)"IPAddress", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcInputOffsetSettingField_get_MacAddress, (setter)PyCThostFtdcInputOffsetSettingField_set_MacAddress, (char *)"MacAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInputOffsetSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInputOffsetSettingField",	/* tp_name */
	sizeof(PyCThostFtdcInputOffsetSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInputOffsetSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInputOffsetSettingField_repr,   /* tp_repr */
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
	"CThostFtdcInputOffsetSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInputOffsetSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInputOffsetSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInputOffsetSettingField_new,       /* tp_new */
};

int PyCThostFtdcInputOffsetSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInputOffsetSettingField  */
	if (PyType_Ready(&PyCThostFtdcInputOffsetSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInputOffsetSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInputOffsetSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInputOffsetSettingField", (PyObject *)&PyCThostFtdcInputOffsetSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInputOffsetSettingField to module");
        Py_DECREF(&PyCThostFtdcInputOffsetSettingFieldType);
		return -1;
    }

    return 0;
}
