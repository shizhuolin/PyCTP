
#include "PyCThostFtdcReqUserLoginField.h"



static PyObject *PyCThostFtdcReqUserLoginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginField *self = (PyCThostFtdcReqUserLoginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginField_init(PyCThostFtdcReqUserLoginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "OneTimePassword", "reserve1", "LoginRemark", "ClientIPPort", "ClientIPAddress",  NULL};

	//TThostFtdcDateType char[9]
	const char *pReqUserLoginField_TradingDay = NULL;
	Py_ssize_t pReqUserLoginField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqUserLoginField_BrokerID = NULL;
	Py_ssize_t pReqUserLoginField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqUserLoginField_UserID = NULL;
	Py_ssize_t pReqUserLoginField_UserID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginField_Password = NULL;
	Py_ssize_t pReqUserLoginField_Password_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginField_UserProductInfo = NULL;
	Py_ssize_t pReqUserLoginField_UserProductInfo_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginField_InterfaceProductInfo = NULL;
	Py_ssize_t pReqUserLoginField_InterfaceProductInfo_len = 0;

	//TThostFtdcProtocolInfoType char[11]
	const char *pReqUserLoginField_ProtocolInfo = NULL;
	Py_ssize_t pReqUserLoginField_ProtocolInfo_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pReqUserLoginField_MacAddress = NULL;
	Py_ssize_t pReqUserLoginField_MacAddress_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginField_OneTimePassword = NULL;
	Py_ssize_t pReqUserLoginField_OneTimePassword_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pReqUserLoginField_reserve1 = NULL;
	Py_ssize_t pReqUserLoginField_reserve1_len = 0;

	//TThostFtdcLoginRemarkType char[36]
	const char *pReqUserLoginField_LoginRemark = NULL;
	Py_ssize_t pReqUserLoginField_LoginRemark_len = 0;

	//TThostFtdcIPPortType int
	int pReqUserLoginField_ClientIPPort = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pReqUserLoginField_ClientIPAddress = NULL;
	Py_ssize_t pReqUserLoginField_ClientIPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

		, &pReqUserLoginField_TradingDay, &pReqUserLoginField_TradingDay_len
		, &pReqUserLoginField_BrokerID, &pReqUserLoginField_BrokerID_len
		, &pReqUserLoginField_UserID, &pReqUserLoginField_UserID_len
		, &pReqUserLoginField_Password, &pReqUserLoginField_Password_len
		, &pReqUserLoginField_UserProductInfo, &pReqUserLoginField_UserProductInfo_len
		, &pReqUserLoginField_InterfaceProductInfo, &pReqUserLoginField_InterfaceProductInfo_len
		, &pReqUserLoginField_ProtocolInfo, &pReqUserLoginField_ProtocolInfo_len
		, &pReqUserLoginField_MacAddress, &pReqUserLoginField_MacAddress_len
		, &pReqUserLoginField_OneTimePassword, &pReqUserLoginField_OneTimePassword_len
		, &pReqUserLoginField_reserve1, &pReqUserLoginField_reserve1_len
		, &pReqUserLoginField_LoginRemark, &pReqUserLoginField_LoginRemark_len
		, &pReqUserLoginField_ClientIPPort
		, &pReqUserLoginField_ClientIPAddress, &pReqUserLoginField_ClientIPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pReqUserLoginField_TradingDay != NULL) {
		if(pReqUserLoginField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqUserLoginField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqUserLoginField_TradingDay, sizeof(self->data.TradingDay) );
		pReqUserLoginField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqUserLoginField_BrokerID != NULL) {
		if(pReqUserLoginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqUserLoginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqUserLoginField_BrokerID, sizeof(self->data.BrokerID) );
		pReqUserLoginField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pReqUserLoginField_UserID != NULL) {
		if(pReqUserLoginField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqUserLoginField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqUserLoginField_UserID, sizeof(self->data.UserID) );
		pReqUserLoginField_UserID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginField_Password != NULL) {
		if(pReqUserLoginField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqUserLoginField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqUserLoginField_Password, sizeof(self->data.Password) );
		pReqUserLoginField_Password = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginField_UserProductInfo != NULL) {
		if(pReqUserLoginField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pReqUserLoginField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pReqUserLoginField_UserProductInfo = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginField_InterfaceProductInfo != NULL) {
		if(pReqUserLoginField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
			PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
			return -1;
		}
		strncpy(self->data.InterfaceProductInfo, pReqUserLoginField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
		pReqUserLoginField_InterfaceProductInfo = NULL;
	}

	//TThostFtdcProtocolInfoType char[11]
	if(pReqUserLoginField_ProtocolInfo != NULL) {
		if(pReqUserLoginField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
			PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
			return -1;
		}
		strncpy(self->data.ProtocolInfo, pReqUserLoginField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
		pReqUserLoginField_ProtocolInfo = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pReqUserLoginField_MacAddress != NULL) {
		if(pReqUserLoginField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pReqUserLoginField_MacAddress, sizeof(self->data.MacAddress) );
		pReqUserLoginField_MacAddress = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginField_OneTimePassword != NULL) {
		if(pReqUserLoginField_OneTimePassword_len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
			PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is %zd)", pReqUserLoginField_OneTimePassword_len, (Py_ssize_t)sizeof(self->data.OneTimePassword));
			return -1;
		}
		strncpy(self->data.OneTimePassword, pReqUserLoginField_OneTimePassword, sizeof(self->data.OneTimePassword) );
		pReqUserLoginField_OneTimePassword = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pReqUserLoginField_reserve1 != NULL) {
		if(pReqUserLoginField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pReqUserLoginField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pReqUserLoginField_reserve1, sizeof(self->data.reserve1) );
		pReqUserLoginField_reserve1 = NULL;
	}

	//TThostFtdcLoginRemarkType char[36]
	if(pReqUserLoginField_LoginRemark != NULL) {
		if(pReqUserLoginField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
			PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", pReqUserLoginField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
			return -1;
		}
		strncpy(self->data.LoginRemark, pReqUserLoginField_LoginRemark, sizeof(self->data.LoginRemark) );
		pReqUserLoginField_LoginRemark = NULL;
	}

	//TThostFtdcIPPortType int
	self->data.ClientIPPort = pReqUserLoginField_ClientIPPort;

	//TThostFtdcIPAddressType char[33]
	if(pReqUserLoginField_ClientIPAddress != NULL) {
		if(pReqUserLoginField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
			PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
			return -1;
		}
		strncpy(self->data.ClientIPAddress, pReqUserLoginField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
		pReqUserLoginField_ClientIPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqUserLoginField_dealloc(PyCThostFtdcReqUserLoginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginField_repr(PyCThostFtdcReqUserLoginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "Password", self->data.Password 
		, "UserProductInfo", self->data.UserProductInfo 
		, "InterfaceProductInfo", self->data.InterfaceProductInfo 
		, "ProtocolInfo", self->data.ProtocolInfo 
		, "MacAddress", self->data.MacAddress 
		, "OneTimePassword", self->data.OneTimePassword 
		, "reserve1", self->data.reserve1 
		, "LoginRemark", self->data.LoginRemark 
		, "ClientIPPort", self->data.ClientIPPort
		, "ClientIPAddress", self->data.ClientIPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_TradingDay(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_BrokerID(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_UserID(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_Password(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_UserProductInfo(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.InterfaceProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_ProtocolInfo(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.ProtocolInfo);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_MacAddress(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_OneTimePassword(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.OneTimePassword);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_reserve1(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_LoginRemark(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginRemark);
}

static PyObject *PyCThostFtdcReqUserLoginField_get_ClientIPPort(PyCThostFtdcReqUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientIPPort);
#else 
	return PyInt_FromLong(self->data.ClientIPPort);
#endif 
}

static PyObject *PyCThostFtdcReqUserLoginField_get_ClientIPAddress(PyCThostFtdcReqUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginField_set_TradingDay(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginField_set_BrokerID(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginField_set_UserID(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginField_set_Password(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Password)) {
		PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Password, buf, sizeof(self->data.Password));
	return 0;
}

static int PyCThostFtdcReqUserLoginField_set_UserProductInfo(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
		PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
	return 0;
}

static int PyCThostFtdcReqUserLoginField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
		PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.InterfaceProductInfo, buf, sizeof(self->data.InterfaceProductInfo));
	return 0;
}

static int PyCThostFtdcReqUserLoginField_set_ProtocolInfo(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
		PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.ProtocolInfo, buf, sizeof(self->data.ProtocolInfo));
	return 0;
}

static int PyCThostFtdcReqUserLoginField_set_MacAddress(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginField_set_OneTimePassword(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OneTimePassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
		PyErr_SetString(PyExc_ValueError, "OneTimePassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.OneTimePassword, buf, sizeof(self->data.OneTimePassword));
	return 0;
}

static int PyCThostFtdcReqUserLoginField_set_reserve1(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginField_set_LoginRemark(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
		PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 36 bytes");
		return -1;
	}
	strncpy(self->data.LoginRemark, buf, sizeof(self->data.LoginRemark));
	return 0;
}

static int PyCThostFtdcReqUserLoginField_set_ClientIPPort(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPPort Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "ClientIPPort Expected int"); 
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
    self->data.ClientIPPort = (int)buf; 
    return 0; 
}

static int PyCThostFtdcReqUserLoginField_set_ClientIPAddress(PyCThostFtdcReqUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
		PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.ClientIPAddress, buf, sizeof(self->data.ClientIPAddress));
	return 0;
}



static PyGetSetDef PyCThostFtdcReqUserLoginField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginField_get_UserID, (setter)PyCThostFtdcReqUserLoginField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqUserLoginField_get_Password, (setter)PyCThostFtdcReqUserLoginField_set_Password, (char *)"Password", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
	 {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"OneTimePassword", (getter)PyCThostFtdcReqUserLoginField_get_OneTimePassword, (setter)PyCThostFtdcReqUserLoginField_set_OneTimePassword, (char *)"OneTimePassword", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginField_get_reserve1, (setter)PyCThostFtdcReqUserLoginField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginField_set_LoginRemark, (char *)"LoginRemark", NULL},
	 {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
	 {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginField", (PyObject *)&PyCThostFtdcReqUserLoginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginFieldType);
		return -1;
    }

    return 0;
}
