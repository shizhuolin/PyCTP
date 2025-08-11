
#include "PyCThostFtdcReqUserLoginWithCaptchaField.h"



static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginWithCaptchaField *self = (PyCThostFtdcReqUserLoginWithCaptchaField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginWithCaptchaField_init(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "Captcha", "ClientIPPort", "ClientIPAddress",  NULL};

	//TThostFtdcDateType char[9]
	const char *pReqUserLoginWithCaptchaField_TradingDay = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqUserLoginWithCaptchaField_BrokerID = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqUserLoginWithCaptchaField_UserID = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_UserID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginWithCaptchaField_Password = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_Password_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginWithCaptchaField_UserProductInfo = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_UserProductInfo_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginWithCaptchaField_InterfaceProductInfo = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_InterfaceProductInfo_len = 0;

	//TThostFtdcProtocolInfoType char[11]
	const char *pReqUserLoginWithCaptchaField_ProtocolInfo = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_ProtocolInfo_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pReqUserLoginWithCaptchaField_MacAddress = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_MacAddress_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pReqUserLoginWithCaptchaField_reserve1 = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_reserve1_len = 0;

	//TThostFtdcLoginRemarkType char[36]
	const char *pReqUserLoginWithCaptchaField_LoginRemark = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_LoginRemark_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginWithCaptchaField_Captcha = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_Captcha_len = 0;

	//TThostFtdcIPPortType int
	int pReqUserLoginWithCaptchaField_ClientIPPort = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pReqUserLoginWithCaptchaField_ClientIPAddress = NULL;
	Py_ssize_t pReqUserLoginWithCaptchaField_ClientIPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

		, &pReqUserLoginWithCaptchaField_TradingDay, &pReqUserLoginWithCaptchaField_TradingDay_len
		, &pReqUserLoginWithCaptchaField_BrokerID, &pReqUserLoginWithCaptchaField_BrokerID_len
		, &pReqUserLoginWithCaptchaField_UserID, &pReqUserLoginWithCaptchaField_UserID_len
		, &pReqUserLoginWithCaptchaField_Password, &pReqUserLoginWithCaptchaField_Password_len
		, &pReqUserLoginWithCaptchaField_UserProductInfo, &pReqUserLoginWithCaptchaField_UserProductInfo_len
		, &pReqUserLoginWithCaptchaField_InterfaceProductInfo, &pReqUserLoginWithCaptchaField_InterfaceProductInfo_len
		, &pReqUserLoginWithCaptchaField_ProtocolInfo, &pReqUserLoginWithCaptchaField_ProtocolInfo_len
		, &pReqUserLoginWithCaptchaField_MacAddress, &pReqUserLoginWithCaptchaField_MacAddress_len
		, &pReqUserLoginWithCaptchaField_reserve1, &pReqUserLoginWithCaptchaField_reserve1_len
		, &pReqUserLoginWithCaptchaField_LoginRemark, &pReqUserLoginWithCaptchaField_LoginRemark_len
		, &pReqUserLoginWithCaptchaField_Captcha, &pReqUserLoginWithCaptchaField_Captcha_len
		, &pReqUserLoginWithCaptchaField_ClientIPPort
		, &pReqUserLoginWithCaptchaField_ClientIPAddress, &pReqUserLoginWithCaptchaField_ClientIPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pReqUserLoginWithCaptchaField_TradingDay != NULL) {
		if(pReqUserLoginWithCaptchaField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqUserLoginWithCaptchaField_TradingDay, sizeof(self->data.TradingDay) );
		pReqUserLoginWithCaptchaField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqUserLoginWithCaptchaField_BrokerID != NULL) {
		if(pReqUserLoginWithCaptchaField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqUserLoginWithCaptchaField_BrokerID, sizeof(self->data.BrokerID) );
		pReqUserLoginWithCaptchaField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pReqUserLoginWithCaptchaField_UserID != NULL) {
		if(pReqUserLoginWithCaptchaField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqUserLoginWithCaptchaField_UserID, sizeof(self->data.UserID) );
		pReqUserLoginWithCaptchaField_UserID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginWithCaptchaField_Password != NULL) {
		if(pReqUserLoginWithCaptchaField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqUserLoginWithCaptchaField_Password, sizeof(self->data.Password) );
		pReqUserLoginWithCaptchaField_Password = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginWithCaptchaField_UserProductInfo != NULL) {
		if(pReqUserLoginWithCaptchaField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pReqUserLoginWithCaptchaField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pReqUserLoginWithCaptchaField_UserProductInfo = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginWithCaptchaField_InterfaceProductInfo != NULL) {
		if(pReqUserLoginWithCaptchaField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
			PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
			return -1;
		}
		strncpy(self->data.InterfaceProductInfo, pReqUserLoginWithCaptchaField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
		pReqUserLoginWithCaptchaField_InterfaceProductInfo = NULL;
	}

	//TThostFtdcProtocolInfoType char[11]
	if(pReqUserLoginWithCaptchaField_ProtocolInfo != NULL) {
		if(pReqUserLoginWithCaptchaField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
			PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
			return -1;
		}
		strncpy(self->data.ProtocolInfo, pReqUserLoginWithCaptchaField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
		pReqUserLoginWithCaptchaField_ProtocolInfo = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pReqUserLoginWithCaptchaField_MacAddress != NULL) {
		if(pReqUserLoginWithCaptchaField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pReqUserLoginWithCaptchaField_MacAddress, sizeof(self->data.MacAddress) );
		pReqUserLoginWithCaptchaField_MacAddress = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pReqUserLoginWithCaptchaField_reserve1 != NULL) {
		if(pReqUserLoginWithCaptchaField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pReqUserLoginWithCaptchaField_reserve1, sizeof(self->data.reserve1) );
		pReqUserLoginWithCaptchaField_reserve1 = NULL;
	}

	//TThostFtdcLoginRemarkType char[36]
	if(pReqUserLoginWithCaptchaField_LoginRemark != NULL) {
		if(pReqUserLoginWithCaptchaField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
			PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
			return -1;
		}
		strncpy(self->data.LoginRemark, pReqUserLoginWithCaptchaField_LoginRemark, sizeof(self->data.LoginRemark) );
		pReqUserLoginWithCaptchaField_LoginRemark = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginWithCaptchaField_Captcha != NULL) {
		if(pReqUserLoginWithCaptchaField_Captcha_len > (Py_ssize_t)sizeof(self->data.Captcha)) {
			PyErr_Format(PyExc_ValueError, "Captcha too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_Captcha_len, (Py_ssize_t)sizeof(self->data.Captcha));
			return -1;
		}
		strncpy(self->data.Captcha, pReqUserLoginWithCaptchaField_Captcha, sizeof(self->data.Captcha) );
		pReqUserLoginWithCaptchaField_Captcha = NULL;
	}

	//TThostFtdcIPPortType int
	self->data.ClientIPPort = pReqUserLoginWithCaptchaField_ClientIPPort;

	//TThostFtdcIPAddressType char[33]
	if(pReqUserLoginWithCaptchaField_ClientIPAddress != NULL) {
		if(pReqUserLoginWithCaptchaField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
			PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginWithCaptchaField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
			return -1;
		}
		strncpy(self->data.ClientIPAddress, pReqUserLoginWithCaptchaField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
		pReqUserLoginWithCaptchaField_ClientIPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqUserLoginWithCaptchaField_dealloc(PyCThostFtdcReqUserLoginWithCaptchaField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_repr(PyCThostFtdcReqUserLoginWithCaptchaField *self) {

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
		, "Captcha", self->data.Captcha 
		, "ClientIPPort", self->data.ClientIPPort
		, "ClientIPAddress", self->data.ClientIPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithCaptchaField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_TradingDay(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_BrokerID(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_UserID(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_Password(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_UserProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.InterfaceProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_ProtocolInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.ProtocolInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_MacAddress(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_reserve1(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_LoginRemark(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginRemark);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_Captcha(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.Captcha);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPPort(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientIPPort);
#else 
	return PyInt_FromLong(self->data.ClientIPPort);
#endif 
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPAddress(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_TradingDay(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_BrokerID(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_UserID(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_Password(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_UserProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_ProtocolInfo(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_MacAddress(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_reserve1(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_LoginRemark(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_Captcha(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Captcha Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Captcha)) {
		PyErr_SetString(PyExc_ValueError, "Captcha must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Captcha, buf, sizeof(self->data.Captcha));
	return 0;
}

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPPort(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPAddress(PyCThostFtdcReqUserLoginWithCaptchaField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqUserLoginWithCaptchaField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_UserID, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_Password, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_Password, (char *)"Password", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
	 {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_reserve1, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_LoginRemark, (char *)"LoginRemark", NULL},
	 {(char *)"Captcha", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_Captcha, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_Captcha, (char *)"Captcha", NULL},
	 {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
	 {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginWithCaptchaFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginWithCaptchaField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginWithCaptchaField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginWithCaptchaField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginWithCaptchaField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginWithCaptchaField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginWithCaptchaField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginWithCaptchaField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginWithCaptchaField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginWithCaptchaFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginWithCaptchaField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginWithCaptchaFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginWithCaptchaField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginWithCaptchaFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithCaptchaField", (PyObject *)&PyCThostFtdcReqUserLoginWithCaptchaFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithCaptchaField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginWithCaptchaFieldType);
		return -1;
    }

    return 0;
}
