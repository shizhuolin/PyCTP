
#include "PyCThostFtdcReqUserLoginWithOTPField.h"



static PyObject *PyCThostFtdcReqUserLoginWithOTPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginWithOTPField *self = (PyCThostFtdcReqUserLoginWithOTPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginWithOTPField_init(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "OTPPassword", "ClientIPPort", "ClientIPAddress",  NULL};

	//TThostFtdcDateType char[9]
	const char *pReqUserLoginWithOTPField_TradingDay = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqUserLoginWithOTPField_BrokerID = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqUserLoginWithOTPField_UserID = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_UserID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginWithOTPField_Password = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_Password_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginWithOTPField_UserProductInfo = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_UserProductInfo_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginWithOTPField_InterfaceProductInfo = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_InterfaceProductInfo_len = 0;

	//TThostFtdcProtocolInfoType char[11]
	const char *pReqUserLoginWithOTPField_ProtocolInfo = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_ProtocolInfo_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pReqUserLoginWithOTPField_MacAddress = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_MacAddress_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pReqUserLoginWithOTPField_reserve1 = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_reserve1_len = 0;

	//TThostFtdcLoginRemarkType char[36]
	const char *pReqUserLoginWithOTPField_LoginRemark = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_LoginRemark_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginWithOTPField_OTPPassword = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_OTPPassword_len = 0;

	//TThostFtdcIPPortType int
	int pReqUserLoginWithOTPField_ClientIPPort = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pReqUserLoginWithOTPField_ClientIPAddress = NULL;
	Py_ssize_t pReqUserLoginWithOTPField_ClientIPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

		, &pReqUserLoginWithOTPField_TradingDay, &pReqUserLoginWithOTPField_TradingDay_len
		, &pReqUserLoginWithOTPField_BrokerID, &pReqUserLoginWithOTPField_BrokerID_len
		, &pReqUserLoginWithOTPField_UserID, &pReqUserLoginWithOTPField_UserID_len
		, &pReqUserLoginWithOTPField_Password, &pReqUserLoginWithOTPField_Password_len
		, &pReqUserLoginWithOTPField_UserProductInfo, &pReqUserLoginWithOTPField_UserProductInfo_len
		, &pReqUserLoginWithOTPField_InterfaceProductInfo, &pReqUserLoginWithOTPField_InterfaceProductInfo_len
		, &pReqUserLoginWithOTPField_ProtocolInfo, &pReqUserLoginWithOTPField_ProtocolInfo_len
		, &pReqUserLoginWithOTPField_MacAddress, &pReqUserLoginWithOTPField_MacAddress_len
		, &pReqUserLoginWithOTPField_reserve1, &pReqUserLoginWithOTPField_reserve1_len
		, &pReqUserLoginWithOTPField_LoginRemark, &pReqUserLoginWithOTPField_LoginRemark_len
		, &pReqUserLoginWithOTPField_OTPPassword, &pReqUserLoginWithOTPField_OTPPassword_len
		, &pReqUserLoginWithOTPField_ClientIPPort
		, &pReqUserLoginWithOTPField_ClientIPAddress, &pReqUserLoginWithOTPField_ClientIPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pReqUserLoginWithOTPField_TradingDay != NULL) {
		if(pReqUserLoginWithOTPField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqUserLoginWithOTPField_TradingDay, sizeof(self->data.TradingDay) );
		pReqUserLoginWithOTPField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqUserLoginWithOTPField_BrokerID != NULL) {
		if(pReqUserLoginWithOTPField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqUserLoginWithOTPField_BrokerID, sizeof(self->data.BrokerID) );
		pReqUserLoginWithOTPField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pReqUserLoginWithOTPField_UserID != NULL) {
		if(pReqUserLoginWithOTPField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqUserLoginWithOTPField_UserID, sizeof(self->data.UserID) );
		pReqUserLoginWithOTPField_UserID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginWithOTPField_Password != NULL) {
		if(pReqUserLoginWithOTPField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqUserLoginWithOTPField_Password, sizeof(self->data.Password) );
		pReqUserLoginWithOTPField_Password = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginWithOTPField_UserProductInfo != NULL) {
		if(pReqUserLoginWithOTPField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pReqUserLoginWithOTPField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pReqUserLoginWithOTPField_UserProductInfo = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginWithOTPField_InterfaceProductInfo != NULL) {
		if(pReqUserLoginWithOTPField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
			PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
			return -1;
		}
		strncpy(self->data.InterfaceProductInfo, pReqUserLoginWithOTPField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
		pReqUserLoginWithOTPField_InterfaceProductInfo = NULL;
	}

	//TThostFtdcProtocolInfoType char[11]
	if(pReqUserLoginWithOTPField_ProtocolInfo != NULL) {
		if(pReqUserLoginWithOTPField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
			PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
			return -1;
		}
		strncpy(self->data.ProtocolInfo, pReqUserLoginWithOTPField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
		pReqUserLoginWithOTPField_ProtocolInfo = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pReqUserLoginWithOTPField_MacAddress != NULL) {
		if(pReqUserLoginWithOTPField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pReqUserLoginWithOTPField_MacAddress, sizeof(self->data.MacAddress) );
		pReqUserLoginWithOTPField_MacAddress = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pReqUserLoginWithOTPField_reserve1 != NULL) {
		if(pReqUserLoginWithOTPField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pReqUserLoginWithOTPField_reserve1, sizeof(self->data.reserve1) );
		pReqUserLoginWithOTPField_reserve1 = NULL;
	}

	//TThostFtdcLoginRemarkType char[36]
	if(pReqUserLoginWithOTPField_LoginRemark != NULL) {
		if(pReqUserLoginWithOTPField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
			PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
			return -1;
		}
		strncpy(self->data.LoginRemark, pReqUserLoginWithOTPField_LoginRemark, sizeof(self->data.LoginRemark) );
		pReqUserLoginWithOTPField_LoginRemark = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginWithOTPField_OTPPassword != NULL) {
		if(pReqUserLoginWithOTPField_OTPPassword_len > (Py_ssize_t)sizeof(self->data.OTPPassword)) {
			PyErr_Format(PyExc_ValueError, "OTPPassword too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_OTPPassword_len, (Py_ssize_t)sizeof(self->data.OTPPassword));
			return -1;
		}
		strncpy(self->data.OTPPassword, pReqUserLoginWithOTPField_OTPPassword, sizeof(self->data.OTPPassword) );
		pReqUserLoginWithOTPField_OTPPassword = NULL;
	}

	//TThostFtdcIPPortType int
	self->data.ClientIPPort = pReqUserLoginWithOTPField_ClientIPPort;

	//TThostFtdcIPAddressType char[33]
	if(pReqUserLoginWithOTPField_ClientIPAddress != NULL) {
		if(pReqUserLoginWithOTPField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
			PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginWithOTPField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
			return -1;
		}
		strncpy(self->data.ClientIPAddress, pReqUserLoginWithOTPField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
		pReqUserLoginWithOTPField_ClientIPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqUserLoginWithOTPField_dealloc(PyCThostFtdcReqUserLoginWithOTPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_repr(PyCThostFtdcReqUserLoginWithOTPField *self) {

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
		, "reserve1", self->data.reserve1 
		, "LoginRemark", self->data.LoginRemark 
		, "OTPPassword", self->data.OTPPassword 
		, "ClientIPPort", self->data.ClientIPPort
		, "ClientIPAddress", self->data.ClientIPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithOTPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_TradingDay(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_BrokerID(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_UserID(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_Password(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_UserProductInfo(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.InterfaceProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_ProtocolInfo(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.ProtocolInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_MacAddress(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_reserve1(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_LoginRemark(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginRemark);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_OTPPassword(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.OTPPassword);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPPort(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientIPPort);
#else 
	return PyInt_FromLong(self->data.ClientIPPort);
#endif 
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPAddress(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginWithOTPField_set_TradingDay(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_BrokerID(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_UserID(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_Password(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_UserProductInfo(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_ProtocolInfo(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_MacAddress(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_reserve1(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_LoginRemark(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_OTPPassword(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OTPPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OTPPassword)) {
		PyErr_SetString(PyExc_ValueError, "OTPPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.OTPPassword, buf, sizeof(self->data.OTPPassword));
	return 0;
}

static int PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPPort(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPAddress(PyCThostFtdcReqUserLoginWithOTPField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqUserLoginWithOTPField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_UserID, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_Password, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_Password, (char *)"Password", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
	 {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_reserve1, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_LoginRemark, (char *)"LoginRemark", NULL},
	 {(char *)"OTPPassword", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_OTPPassword, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_OTPPassword, (char *)"OTPPassword", NULL},
	 {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
	 {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginWithOTPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginWithOTPField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginWithOTPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginWithOTPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginWithOTPField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginWithOTPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginWithOTPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginWithOTPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginWithOTPField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginWithOTPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginWithOTPField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginWithOTPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginWithOTPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginWithOTPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithOTPField", (PyObject *)&PyCThostFtdcReqUserLoginWithOTPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithOTPField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginWithOTPFieldType);
		return -1;
    }

    return 0;
}
