
#include "PyCThostFtdcReqUserLoginWithTextField.h"



static PyObject *PyCThostFtdcReqUserLoginWithTextField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginWithTextField *self = (PyCThostFtdcReqUserLoginWithTextField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginWithTextField_init(PyCThostFtdcReqUserLoginWithTextField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "Text", "ClientIPPort", "ClientIPAddress",  NULL};

	//TThostFtdcDateType char[9]
	const char *pReqUserLoginWithTextField_TradingDay = NULL;
	Py_ssize_t pReqUserLoginWithTextField_TradingDay_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pReqUserLoginWithTextField_BrokerID = NULL;
	Py_ssize_t pReqUserLoginWithTextField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pReqUserLoginWithTextField_UserID = NULL;
	Py_ssize_t pReqUserLoginWithTextField_UserID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginWithTextField_Password = NULL;
	Py_ssize_t pReqUserLoginWithTextField_Password_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginWithTextField_UserProductInfo = NULL;
	Py_ssize_t pReqUserLoginWithTextField_UserProductInfo_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pReqUserLoginWithTextField_InterfaceProductInfo = NULL;
	Py_ssize_t pReqUserLoginWithTextField_InterfaceProductInfo_len = 0;

	//TThostFtdcProtocolInfoType char[11]
	const char *pReqUserLoginWithTextField_ProtocolInfo = NULL;
	Py_ssize_t pReqUserLoginWithTextField_ProtocolInfo_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pReqUserLoginWithTextField_MacAddress = NULL;
	Py_ssize_t pReqUserLoginWithTextField_MacAddress_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pReqUserLoginWithTextField_reserve1 = NULL;
	Py_ssize_t pReqUserLoginWithTextField_reserve1_len = 0;

	//TThostFtdcLoginRemarkType char[36]
	const char *pReqUserLoginWithTextField_LoginRemark = NULL;
	Py_ssize_t pReqUserLoginWithTextField_LoginRemark_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pReqUserLoginWithTextField_Text = NULL;
	Py_ssize_t pReqUserLoginWithTextField_Text_len = 0;

	//TThostFtdcIPPortType int
	int pReqUserLoginWithTextField_ClientIPPort = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pReqUserLoginWithTextField_ClientIPAddress = NULL;
	Py_ssize_t pReqUserLoginWithTextField_ClientIPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

		, &pReqUserLoginWithTextField_TradingDay, &pReqUserLoginWithTextField_TradingDay_len
		, &pReqUserLoginWithTextField_BrokerID, &pReqUserLoginWithTextField_BrokerID_len
		, &pReqUserLoginWithTextField_UserID, &pReqUserLoginWithTextField_UserID_len
		, &pReqUserLoginWithTextField_Password, &pReqUserLoginWithTextField_Password_len
		, &pReqUserLoginWithTextField_UserProductInfo, &pReqUserLoginWithTextField_UserProductInfo_len
		, &pReqUserLoginWithTextField_InterfaceProductInfo, &pReqUserLoginWithTextField_InterfaceProductInfo_len
		, &pReqUserLoginWithTextField_ProtocolInfo, &pReqUserLoginWithTextField_ProtocolInfo_len
		, &pReqUserLoginWithTextField_MacAddress, &pReqUserLoginWithTextField_MacAddress_len
		, &pReqUserLoginWithTextField_reserve1, &pReqUserLoginWithTextField_reserve1_len
		, &pReqUserLoginWithTextField_LoginRemark, &pReqUserLoginWithTextField_LoginRemark_len
		, &pReqUserLoginWithTextField_Text, &pReqUserLoginWithTextField_Text_len
		, &pReqUserLoginWithTextField_ClientIPPort
		, &pReqUserLoginWithTextField_ClientIPAddress, &pReqUserLoginWithTextField_ClientIPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pReqUserLoginWithTextField_TradingDay != NULL) {
		if(pReqUserLoginWithTextField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pReqUserLoginWithTextField_TradingDay, sizeof(self->data.TradingDay) );
		pReqUserLoginWithTextField_TradingDay = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pReqUserLoginWithTextField_BrokerID != NULL) {
		if(pReqUserLoginWithTextField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pReqUserLoginWithTextField_BrokerID, sizeof(self->data.BrokerID) );
		pReqUserLoginWithTextField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pReqUserLoginWithTextField_UserID != NULL) {
		if(pReqUserLoginWithTextField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pReqUserLoginWithTextField_UserID, sizeof(self->data.UserID) );
		pReqUserLoginWithTextField_UserID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginWithTextField_Password != NULL) {
		if(pReqUserLoginWithTextField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pReqUserLoginWithTextField_Password, sizeof(self->data.Password) );
		pReqUserLoginWithTextField_Password = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginWithTextField_UserProductInfo != NULL) {
		if(pReqUserLoginWithTextField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pReqUserLoginWithTextField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pReqUserLoginWithTextField_UserProductInfo = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pReqUserLoginWithTextField_InterfaceProductInfo != NULL) {
		if(pReqUserLoginWithTextField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
			PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
			return -1;
		}
		strncpy(self->data.InterfaceProductInfo, pReqUserLoginWithTextField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
		pReqUserLoginWithTextField_InterfaceProductInfo = NULL;
	}

	//TThostFtdcProtocolInfoType char[11]
	if(pReqUserLoginWithTextField_ProtocolInfo != NULL) {
		if(pReqUserLoginWithTextField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
			PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
			return -1;
		}
		strncpy(self->data.ProtocolInfo, pReqUserLoginWithTextField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
		pReqUserLoginWithTextField_ProtocolInfo = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pReqUserLoginWithTextField_MacAddress != NULL) {
		if(pReqUserLoginWithTextField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pReqUserLoginWithTextField_MacAddress, sizeof(self->data.MacAddress) );
		pReqUserLoginWithTextField_MacAddress = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pReqUserLoginWithTextField_reserve1 != NULL) {
		if(pReqUserLoginWithTextField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pReqUserLoginWithTextField_reserve1, sizeof(self->data.reserve1) );
		pReqUserLoginWithTextField_reserve1 = NULL;
	}

	//TThostFtdcLoginRemarkType char[36]
	if(pReqUserLoginWithTextField_LoginRemark != NULL) {
		if(pReqUserLoginWithTextField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
			PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
			return -1;
		}
		strncpy(self->data.LoginRemark, pReqUserLoginWithTextField_LoginRemark, sizeof(self->data.LoginRemark) );
		pReqUserLoginWithTextField_LoginRemark = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pReqUserLoginWithTextField_Text != NULL) {
		if(pReqUserLoginWithTextField_Text_len > (Py_ssize_t)sizeof(self->data.Text)) {
			PyErr_Format(PyExc_ValueError, "Text too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_Text_len, (Py_ssize_t)sizeof(self->data.Text));
			return -1;
		}
		strncpy(self->data.Text, pReqUserLoginWithTextField_Text, sizeof(self->data.Text) );
		pReqUserLoginWithTextField_Text = NULL;
	}

	//TThostFtdcIPPortType int
	self->data.ClientIPPort = pReqUserLoginWithTextField_ClientIPPort;

	//TThostFtdcIPAddressType char[33]
	if(pReqUserLoginWithTextField_ClientIPAddress != NULL) {
		if(pReqUserLoginWithTextField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
			PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", pReqUserLoginWithTextField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
			return -1;
		}
		strncpy(self->data.ClientIPAddress, pReqUserLoginWithTextField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
		pReqUserLoginWithTextField_ClientIPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcReqUserLoginWithTextField_dealloc(PyCThostFtdcReqUserLoginWithTextField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_repr(PyCThostFtdcReqUserLoginWithTextField *self) {

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
		, "Text", self->data.Text 
		, "ClientIPPort", self->data.ClientIPPort
		, "ClientIPAddress", self->data.ClientIPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithTextField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_TradingDay(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_BrokerID(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_UserID(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_Password(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_UserProductInfo(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.InterfaceProductInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_ProtocolInfo(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.ProtocolInfo);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_MacAddress(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_reserve1(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_LoginRemark(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginRemark);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_Text(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.Text);
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_ClientIPPort(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.ClientIPPort);
#else 
	return PyInt_FromLong(self->data.ClientIPPort);
#endif 
}

static PyObject *PyCThostFtdcReqUserLoginWithTextField_get_ClientIPAddress(PyCThostFtdcReqUserLoginWithTextField *self, void *closure) {
	return PyBytes_FromString(self->data.ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginWithTextField_set_TradingDay(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_BrokerID(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_UserID(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_Password(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_UserProductInfo(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_ProtocolInfo(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_MacAddress(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_reserve1(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_LoginRemark(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_Text(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Text Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Text)) {
		PyErr_SetString(PyExc_ValueError, "Text must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Text, buf, sizeof(self->data.Text));
	return 0;
}

static int PyCThostFtdcReqUserLoginWithTextField_set_ClientIPPort(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcReqUserLoginWithTextField_set_ClientIPAddress(PyCThostFtdcReqUserLoginWithTextField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcReqUserLoginWithTextField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginWithTextField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginWithTextField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginWithTextField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginWithTextField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginWithTextField_get_UserID, (setter)PyCThostFtdcReqUserLoginWithTextField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcReqUserLoginWithTextField_get_Password, (setter)PyCThostFtdcReqUserLoginWithTextField_set_Password, (char *)"Password", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginWithTextField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginWithTextField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginWithTextField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginWithTextField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
	 {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginWithTextField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginWithTextField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginWithTextField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginWithTextField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginWithTextField_get_reserve1, (setter)PyCThostFtdcReqUserLoginWithTextField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginWithTextField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginWithTextField_set_LoginRemark, (char *)"LoginRemark", NULL},
	 {(char *)"Text", (getter)PyCThostFtdcReqUserLoginWithTextField_get_Text, (setter)PyCThostFtdcReqUserLoginWithTextField_set_Text, (char *)"Text", NULL},
	 {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginWithTextField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginWithTextField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
	 {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginWithTextField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginWithTextField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginWithTextFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginWithTextField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginWithTextField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginWithTextField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginWithTextField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginWithTextField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginWithTextField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginWithTextField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginWithTextField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginWithTextFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginWithTextField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginWithTextFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginWithTextField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginWithTextFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithTextField", (PyObject *)&PyCThostFtdcReqUserLoginWithTextFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithTextField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginWithTextFieldType);
		return -1;
    }

    return 0;
}
