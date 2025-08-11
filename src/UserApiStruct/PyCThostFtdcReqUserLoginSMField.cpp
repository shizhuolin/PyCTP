
#include "PyCThostFtdcReqUserLoginSMField.h"



static PyObject *PyCThostFtdcReqUserLoginSMField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginSMField *self = (PyCThostFtdcReqUserLoginSMField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginSMField_init(PyCThostFtdcReqUserLoginSMField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "OneTimePassword", "reserve1", "LoginRemark", "ClientIPPort", "ClientIPAddress", "BrokerName", "AuthCode", "AppID", "PIN",  NULL};

	//TThostFtdcDateType char[9]
	const char *pReqUserLoginSMField_TradingDay = NULL;
	Py_ssize_t pReqUserLoginSMField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqUserLoginSMField_BrokerID = NULL;
	Py_ssize_t pReqUserLoginSMField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqUserLoginSMField_UserID = NULL;
	Py_ssize_t pReqUserLoginSMField_UserID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginSMField_Password = NULL;
	Py_ssize_t pReqUserLoginSMField_Password_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginSMField_UserProductInfo = NULL;
	Py_ssize_t pReqUserLoginSMField_UserProductInfo_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginSMField_InterfaceProductInfo = NULL;
	Py_ssize_t pReqUserLoginSMField_InterfaceProductInfo_len = 0;

	//TThostFtdcProtocolInfoType char[11]
	const char *pReqUserLoginSMField_ProtocolInfo = NULL;
	Py_ssize_t pReqUserLoginSMField_ProtocolInfo_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pReqUserLoginSMField_MacAddress = NULL;
	Py_ssize_t pReqUserLoginSMField_MacAddress_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginSMField_OneTimePassword = NULL;
	Py_ssize_t pReqUserLoginSMField_OneTimePassword_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pReqUserLoginSMField_reserve1 = NULL;
	Py_ssize_t pReqUserLoginSMField_reserve1_len = 0;

	//TThostFtdcLoginRemarkType char[36]
	const char *pReqUserLoginSMField_LoginRemark = NULL;
	Py_ssize_t pReqUserLoginSMField_LoginRemark_len = 0;

	//TThostFtdcIPPortType int
	int pReqUserLoginSMField_ClientIPPort = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pReqUserLoginSMField_ClientIPAddress = NULL;
	Py_ssize_t pReqUserLoginSMField_ClientIPAddress_len = 0;

	//TThostFtdcBrokerNameType char[81]
	const char *pReqUserLoginSMField_BrokerName = NULL;
	Py_ssize_t pReqUserLoginSMField_BrokerName_len = 0;

	//TThostFtdcAuthCodeType char[17]
	const char *pReqUserLoginSMField_AuthCode = NULL;
	Py_ssize_t pReqUserLoginSMField_AuthCode_len = 0;

	//TThostFtdcAppIDType char[33]
	const char *pReqUserLoginSMField_AppID = NULL;
	Py_ssize_t pReqUserLoginSMField_AppID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginSMField_PIN = NULL;
	Py_ssize_t pReqUserLoginSMField_PIN_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#s#s#s#s#", (char **)kwlist
#endif

		, &pReqUserLoginSMField_TradingDay, &pReqUserLoginSMField_TradingDay_len
		, &pReqUserLoginSMField_BrokerID, &pReqUserLoginSMField_BrokerID_len
		, &pReqUserLoginSMField_UserID, &pReqUserLoginSMField_UserID_len
		, &pReqUserLoginSMField_Password, &pReqUserLoginSMField_Password_len
		, &pReqUserLoginSMField_UserProductInfo, &pReqUserLoginSMField_UserProductInfo_len
		, &pReqUserLoginSMField_InterfaceProductInfo, &pReqUserLoginSMField_InterfaceProductInfo_len
		, &pReqUserLoginSMField_ProtocolInfo, &pReqUserLoginSMField_ProtocolInfo_len
		, &pReqUserLoginSMField_MacAddress, &pReqUserLoginSMField_MacAddress_len
		, &pReqUserLoginSMField_OneTimePassword, &pReqUserLoginSMField_OneTimePassword_len
		, &pReqUserLoginSMField_reserve1, &pReqUserLoginSMField_reserve1_len
		, &pReqUserLoginSMField_LoginRemark, &pReqUserLoginSMField_LoginRemark_len
		, &pReqUserLoginSMField_ClientIPPort
		, &pReqUserLoginSMField_ClientIPAddress, &pReqUserLoginSMField_ClientIPAddress_len
		, &pReqUserLoginSMField_BrokerName, &pReqUserLoginSMField_BrokerName_len
		, &pReqUserLoginSMField_AuthCode, &pReqUserLoginSMField_AuthCode_len
		, &pReqUserLoginSMField_AppID, &pReqUserLoginSMField_AppID_len
		, &pReqUserLoginSMField_PIN, &pReqUserLoginSMField_PIN_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pReqUserLoginSMField_TradingDay != NULL) {
		if(pReqUserLoginSMField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqUserLoginSMField_TradingDay, sizeof(self->data.TradingDay) );
		pReqUserLoginSMField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqUserLoginSMField_BrokerID != NULL) {
		if(pReqUserLoginSMField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqUserLoginSMField_BrokerID, sizeof(self->data.BrokerID) );
		pReqUserLoginSMField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pReqUserLoginSMField_UserID != NULL) {
		if(pReqUserLoginSMField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqUserLoginSMField_UserID, sizeof(self->data.UserID) );
		pReqUserLoginSMField_UserID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginSMField_Password != NULL) {
		if(pReqUserLoginSMField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqUserLoginSMField_Password, sizeof(self->data.Password) );
		pReqUserLoginSMField_Password = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginSMField_UserProductInfo != NULL) {
		if(pReqUserLoginSMField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pReqUserLoginSMField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pReqUserLoginSMField_UserProductInfo = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginSMField_InterfaceProductInfo != NULL) {
		if(pReqUserLoginSMField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
			PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
			return -1;
		}
		strncpy(self->data.InterfaceProductInfo, pReqUserLoginSMField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
		pReqUserLoginSMField_InterfaceProductInfo = NULL;
	}

	//TThostFtdcProtocolInfoType char[11]
	if(pReqUserLoginSMField_ProtocolInfo != NULL) {
		if(pReqUserLoginSMField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
			PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
			return -1;
		}
		strncpy(self->data.ProtocolInfo, pReqUserLoginSMField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
		pReqUserLoginSMField_ProtocolInfo = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pReqUserLoginSMField_MacAddress != NULL) {
		if(pReqUserLoginSMField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pReqUserLoginSMField_MacAddress, sizeof(self->data.MacAddress) );
		pReqUserLoginSMField_MacAddress = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginSMField_OneTimePassword != NULL) {
		if(pReqUserLoginSMField_OneTimePassword_len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
			PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_OneTimePassword_len, (Py_ssize_t)sizeof(self->data.OneTimePassword));
			return -1;
		}
		strncpy(self->data.OneTimePassword, pReqUserLoginSMField_OneTimePassword, sizeof(self->data.OneTimePassword) );
		pReqUserLoginSMField_OneTimePassword = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pReqUserLoginSMField_reserve1 != NULL) {
		if(pReqUserLoginSMField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pReqUserLoginSMField_reserve1, sizeof(self->data.reserve1) );
		pReqUserLoginSMField_reserve1 = NULL;
	}

	//TThostFtdcLoginRemarkType char[36]
	if(pReqUserLoginSMField_LoginRemark != NULL) {
		if(pReqUserLoginSMField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
			PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
			return -1;
		}
		strncpy(self->data.LoginRemark, pReqUserLoginSMField_LoginRemark, sizeof(self->data.LoginRemark) );
		pReqUserLoginSMField_LoginRemark = NULL;
	}

	//TThostFtdcIPPortType int
	self->data.ClientIPPort = pReqUserLoginSMField_ClientIPPort;

	//TThostFtdcIPAddressType char[33]
	if(pReqUserLoginSMField_ClientIPAddress != NULL) {
		if(pReqUserLoginSMField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
			PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
			return -1;
		}
		strncpy(self->data.ClientIPAddress, pReqUserLoginSMField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
		pReqUserLoginSMField_ClientIPAddress = NULL;
	}

	//TThostFtdcBrokerNameType char[81]
	if(pReqUserLoginSMField_BrokerName != NULL) {
		if(pReqUserLoginSMField_BrokerName_len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
			PyErr_Format(PyExc_ValueError, "BrokerName too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_BrokerName_len, (Py_ssize_t)sizeof(self->data.BrokerName));
			return -1;
		}
		strncpy(self->data.BrokerName, pReqUserLoginSMField_BrokerName, sizeof(self->data.BrokerName) );
		pReqUserLoginSMField_BrokerName = NULL;
	}

	//TThostFtdcAuthCodeType char[17]
	if(pReqUserLoginSMField_AuthCode != NULL) {
		if(pReqUserLoginSMField_AuthCode_len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
			PyErr_Format(PyExc_ValueError, "AuthCode too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_AuthCode_len, (Py_ssize_t)sizeof(self->data.AuthCode));
			return -1;
		}
		strncpy(self->data.AuthCode, pReqUserLoginSMField_AuthCode, sizeof(self->data.AuthCode) );
		pReqUserLoginSMField_AuthCode = NULL;
	}

	//TThostFtdcAppIDType char[33]
	if(pReqUserLoginSMField_AppID != NULL) {
		if(pReqUserLoginSMField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
			PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
			return -1;
		}
		strncpy(self->data.AppID, pReqUserLoginSMField_AppID, sizeof(self->data.AppID) );
		pReqUserLoginSMField_AppID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginSMField_PIN != NULL) {
		if(pReqUserLoginSMField_PIN_len > (Py_ssize_t)sizeof(self->data.PIN)) {
			PyErr_Format(PyExc_ValueError, "PIN too long: length=%zd (max allowed is %zd)", pReqUserLoginSMField_PIN_len, (Py_ssize_t)sizeof(self->data.PIN));
			return -1;
		}
		strncpy(self->data.PIN, pReqUserLoginSMField_PIN, sizeof(self->data.PIN) );
		pReqUserLoginSMField_PIN = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqUserLoginSMField_dealloc(PyCThostFtdcReqUserLoginSMField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_repr(PyCThostFtdcReqUserLoginSMField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s}"
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
		, "BrokerName", self->data.BrokerName 
		, "AuthCode", self->data.AuthCode 
		, "AppID", self->data.AppID 
		, "PIN", self->data.PIN 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginSMField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_TradingDay(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_BrokerID(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_UserID(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_Password(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_UserProductInfo(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.InterfaceProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_ProtocolInfo(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.ProtocolInfo);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_MacAddress(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_OneTimePassword(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.OneTimePassword);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_reserve1(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_LoginRemark(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginRemark);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_ClientIPPort(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientIPPort);
#else 
	return PyInt_FromLong(self->data.ClientIPPort);
#endif 
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_ClientIPAddress(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientIPAddress);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_BrokerName(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerName);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_AuthCode(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.AuthCode);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_AppID(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.AppID);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_get_PIN(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
	return PyBytes_FromString(self->data.PIN);
}

static int PyCThostFtdcReqUserLoginSMField_set_TradingDay(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_BrokerID(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_UserID(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_Password(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_UserProductInfo(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_ProtocolInfo(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_MacAddress(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_OneTimePassword(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_reserve1(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_LoginRemark(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_ClientIPPort(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_ClientIPAddress(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginSMField_set_BrokerName(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "BrokerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
		PyErr_SetString(PyExc_ValueError, "BrokerName must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.BrokerName, buf, sizeof(self->data.BrokerName));
	return 0;
}

static int PyCThostFtdcReqUserLoginSMField_set_AuthCode(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AuthCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
		PyErr_SetString(PyExc_ValueError, "AuthCode must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.AuthCode, buf, sizeof(self->data.AuthCode));
	return 0;
}

static int PyCThostFtdcReqUserLoginSMField_set_AppID(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AppID)) {
		PyErr_SetString(PyExc_ValueError, "AppID must be less than 33 bytes");
		return -1;
	}
	strncpy(self->data.AppID, buf, sizeof(self->data.AppID));
	return 0;
}

static int PyCThostFtdcReqUserLoginSMField_set_PIN(PyCThostFtdcReqUserLoginSMField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PIN Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PIN)) {
		PyErr_SetString(PyExc_ValueError, "PIN must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.PIN, buf, sizeof(self->data.PIN));
	return 0;
}



static PyGetSetDef PyCThostFtdcReqUserLoginSMField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginSMField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginSMField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginSMField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginSMField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginSMField_get_UserID, (setter)PyCThostFtdcReqUserLoginSMField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqUserLoginSMField_get_Password, (setter)PyCThostFtdcReqUserLoginSMField_set_Password, (char *)"Password", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginSMField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginSMField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginSMField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginSMField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
	 {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginSMField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginSMField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginSMField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginSMField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"OneTimePassword", (getter)PyCThostFtdcReqUserLoginSMField_get_OneTimePassword, (setter)PyCThostFtdcReqUserLoginSMField_set_OneTimePassword, (char *)"OneTimePassword", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginSMField_get_reserve1, (setter)PyCThostFtdcReqUserLoginSMField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginSMField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginSMField_set_LoginRemark, (char *)"LoginRemark", NULL},
	 {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginSMField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginSMField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
	 {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginSMField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginSMField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},
	 {(char *)"BrokerName", (getter)PyCThostFtdcReqUserLoginSMField_get_BrokerName, (setter)PyCThostFtdcReqUserLoginSMField_set_BrokerName, (char *)"BrokerName", NULL},
	 {(char *)"AuthCode", (getter)PyCThostFtdcReqUserLoginSMField_get_AuthCode, (setter)PyCThostFtdcReqUserLoginSMField_set_AuthCode, (char *)"AuthCode", NULL},
	 {(char *)"AppID", (getter)PyCThostFtdcReqUserLoginSMField_get_AppID, (setter)PyCThostFtdcReqUserLoginSMField_set_AppID, (char *)"AppID", NULL},
	 {(char *)"PIN", (getter)PyCThostFtdcReqUserLoginSMField_get_PIN, (setter)PyCThostFtdcReqUserLoginSMField_set_PIN, (char *)"PIN", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginSMFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginSMField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginSMField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginSMField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginSMField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginSMField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginSMField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginSMField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginSMField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginSMFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginSMField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginSMFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginSMField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginSMFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginSMField", (PyObject *)&PyCThostFtdcReqUserLoginSMFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginSMField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginSMFieldType);
		return -1;
    }

    return 0;
}
