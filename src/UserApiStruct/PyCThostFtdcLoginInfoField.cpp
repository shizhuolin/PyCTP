
#include "PyCThostFtdcLoginInfoField.h"



static PyObject *PyCThostFtdcLoginInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLoginInfoField *self = (PyCThostFtdcLoginInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcLoginInfoField_init(PyCThostFtdcLoginInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID", "SessionID", "BrokerID", "UserID", "LoginDate", "LoginTime", "reserve1", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "SystemName", "PasswordDeprecated", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "MacAddress", "OneTimePassword", "INETime", "IsQryControl", "LoginRemark", "Password", "IPAddress",  NULL};

	//TThostFtdcFrontIDType int
	int pLoginInfoField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pLoginInfoField_SessionID = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pLoginInfoField_BrokerID = NULL;
	Py_ssize_t pLoginInfoField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pLoginInfoField_UserID = NULL;
	Py_ssize_t pLoginInfoField_UserID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pLoginInfoField_LoginDate = NULL;
	Py_ssize_t pLoginInfoField_LoginDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pLoginInfoField_LoginTime = NULL;
	Py_ssize_t pLoginInfoField_LoginTime_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pLoginInfoField_reserve1 = NULL;
	Py_ssize_t pLoginInfoField_reserve1_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pLoginInfoField_UserProductInfo = NULL;
	Py_ssize_t pLoginInfoField_UserProductInfo_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pLoginInfoField_InterfaceProductInfo = NULL;
	Py_ssize_t pLoginInfoField_InterfaceProductInfo_len = 0;

	//TThostFtdcProtocolInfoType char[11]
	const char *pLoginInfoField_ProtocolInfo = NULL;
	Py_ssize_t pLoginInfoField_ProtocolInfo_len = 0;

	//TThostFtdcSystemNameType char[41]
	const char *pLoginInfoField_SystemName = NULL;
	Py_ssize_t pLoginInfoField_SystemName_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pLoginInfoField_PasswordDeprecated = NULL;
	Py_ssize_t pLoginInfoField_PasswordDeprecated_len = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pLoginInfoField_MaxOrderRef = NULL;
	Py_ssize_t pLoginInfoField_MaxOrderRef_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pLoginInfoField_SHFETime = NULL;
	Py_ssize_t pLoginInfoField_SHFETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pLoginInfoField_DCETime = NULL;
	Py_ssize_t pLoginInfoField_DCETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pLoginInfoField_CZCETime = NULL;
	Py_ssize_t pLoginInfoField_CZCETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pLoginInfoField_FFEXTime = NULL;
	Py_ssize_t pLoginInfoField_FFEXTime_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pLoginInfoField_MacAddress = NULL;
	Py_ssize_t pLoginInfoField_MacAddress_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pLoginInfoField_OneTimePassword = NULL;
	Py_ssize_t pLoginInfoField_OneTimePassword_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pLoginInfoField_INETime = NULL;
	Py_ssize_t pLoginInfoField_INETime_len = 0;

	//TThostFtdcBoolType int
	int pLoginInfoField_IsQryControl = 0;

	//TThostFtdcLoginRemarkType char[36]
	const char *pLoginInfoField_LoginRemark = NULL;
	Py_ssize_t pLoginInfoField_LoginRemark_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pLoginInfoField_Password = NULL;
	Py_ssize_t pLoginInfoField_Password_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pLoginInfoField_IPAddress = NULL;
	Py_ssize_t pLoginInfoField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#s#s#s#s#s#s#s#s#s#s#s#s#s#s#s#s#s#is#s#s#", (char **)kwlist
#endif

		, &pLoginInfoField_FrontID
		, &pLoginInfoField_SessionID
		, &pLoginInfoField_BrokerID, &pLoginInfoField_BrokerID_len
		, &pLoginInfoField_UserID, &pLoginInfoField_UserID_len
		, &pLoginInfoField_LoginDate, &pLoginInfoField_LoginDate_len
		, &pLoginInfoField_LoginTime, &pLoginInfoField_LoginTime_len
		, &pLoginInfoField_reserve1, &pLoginInfoField_reserve1_len
		, &pLoginInfoField_UserProductInfo, &pLoginInfoField_UserProductInfo_len
		, &pLoginInfoField_InterfaceProductInfo, &pLoginInfoField_InterfaceProductInfo_len
		, &pLoginInfoField_ProtocolInfo, &pLoginInfoField_ProtocolInfo_len
		, &pLoginInfoField_SystemName, &pLoginInfoField_SystemName_len
		, &pLoginInfoField_PasswordDeprecated, &pLoginInfoField_PasswordDeprecated_len
		, &pLoginInfoField_MaxOrderRef, &pLoginInfoField_MaxOrderRef_len
		, &pLoginInfoField_SHFETime, &pLoginInfoField_SHFETime_len
		, &pLoginInfoField_DCETime, &pLoginInfoField_DCETime_len
		, &pLoginInfoField_CZCETime, &pLoginInfoField_CZCETime_len
		, &pLoginInfoField_FFEXTime, &pLoginInfoField_FFEXTime_len
		, &pLoginInfoField_MacAddress, &pLoginInfoField_MacAddress_len
		, &pLoginInfoField_OneTimePassword, &pLoginInfoField_OneTimePassword_len
		, &pLoginInfoField_INETime, &pLoginInfoField_INETime_len
		, &pLoginInfoField_IsQryControl
		, &pLoginInfoField_LoginRemark, &pLoginInfoField_LoginRemark_len
		, &pLoginInfoField_Password, &pLoginInfoField_Password_len
		, &pLoginInfoField_IPAddress, &pLoginInfoField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcFrontIDType int
	self->data.FrontID = pLoginInfoField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pLoginInfoField_SessionID;

	//TThostFtdcBrokerIDType char[11]
	if(pLoginInfoField_BrokerID != NULL) {
		if(pLoginInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pLoginInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pLoginInfoField_BrokerID, sizeof(self->data.BrokerID) );
		pLoginInfoField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pLoginInfoField_UserID != NULL) {
		if(pLoginInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pLoginInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pLoginInfoField_UserID, sizeof(self->data.UserID) );
		pLoginInfoField_UserID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pLoginInfoField_LoginDate != NULL) {
		if(pLoginInfoField_LoginDate_len > (Py_ssize_t)sizeof(self->data.LoginDate)) {
			PyErr_Format(PyExc_ValueError, "LoginDate too long: length=%zd (max allowed is %zd)", pLoginInfoField_LoginDate_len, (Py_ssize_t)sizeof(self->data.LoginDate));
			return -1;
		}
		strncpy(self->data.LoginDate, pLoginInfoField_LoginDate, sizeof(self->data.LoginDate) );
		pLoginInfoField_LoginDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pLoginInfoField_LoginTime != NULL) {
		if(pLoginInfoField_LoginTime_len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
			PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is %zd)", pLoginInfoField_LoginTime_len, (Py_ssize_t)sizeof(self->data.LoginTime));
			return -1;
		}
		strncpy(self->data.LoginTime, pLoginInfoField_LoginTime, sizeof(self->data.LoginTime) );
		pLoginInfoField_LoginTime = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pLoginInfoField_reserve1 != NULL) {
		if(pLoginInfoField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pLoginInfoField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pLoginInfoField_reserve1, sizeof(self->data.reserve1) );
		pLoginInfoField_reserve1 = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pLoginInfoField_UserProductInfo != NULL) {
		if(pLoginInfoField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pLoginInfoField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pLoginInfoField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pLoginInfoField_UserProductInfo = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pLoginInfoField_InterfaceProductInfo != NULL) {
		if(pLoginInfoField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
			PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", pLoginInfoField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
			return -1;
		}
		strncpy(self->data.InterfaceProductInfo, pLoginInfoField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
		pLoginInfoField_InterfaceProductInfo = NULL;
	}

	//TThostFtdcProtocolInfoType char[11]
	if(pLoginInfoField_ProtocolInfo != NULL) {
		if(pLoginInfoField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
			PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", pLoginInfoField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
			return -1;
		}
		strncpy(self->data.ProtocolInfo, pLoginInfoField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
		pLoginInfoField_ProtocolInfo = NULL;
	}

	//TThostFtdcSystemNameType char[41]
	if(pLoginInfoField_SystemName != NULL) {
		if(pLoginInfoField_SystemName_len > (Py_ssize_t)sizeof(self->data.SystemName)) {
			PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is %zd)", pLoginInfoField_SystemName_len, (Py_ssize_t)sizeof(self->data.SystemName));
			return -1;
		}
		strncpy(self->data.SystemName, pLoginInfoField_SystemName, sizeof(self->data.SystemName) );
		pLoginInfoField_SystemName = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pLoginInfoField_PasswordDeprecated != NULL) {
		if(pLoginInfoField_PasswordDeprecated_len > (Py_ssize_t)sizeof(self->data.PasswordDeprecated)) {
			PyErr_Format(PyExc_ValueError, "PasswordDeprecated too long: length=%zd (max allowed is %zd)", pLoginInfoField_PasswordDeprecated_len, (Py_ssize_t)sizeof(self->data.PasswordDeprecated));
			return -1;
		}
		strncpy(self->data.PasswordDeprecated, pLoginInfoField_PasswordDeprecated, sizeof(self->data.PasswordDeprecated) );
		pLoginInfoField_PasswordDeprecated = NULL;
	}

	//TThostFtdcOrderRefType char[13]
	if(pLoginInfoField_MaxOrderRef != NULL) {
		if(pLoginInfoField_MaxOrderRef_len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
			PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is %zd)", pLoginInfoField_MaxOrderRef_len, (Py_ssize_t)sizeof(self->data.MaxOrderRef));
			return -1;
		}
		strncpy(self->data.MaxOrderRef, pLoginInfoField_MaxOrderRef, sizeof(self->data.MaxOrderRef) );
		pLoginInfoField_MaxOrderRef = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pLoginInfoField_SHFETime != NULL) {
		if(pLoginInfoField_SHFETime_len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
			PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is %zd)", pLoginInfoField_SHFETime_len, (Py_ssize_t)sizeof(self->data.SHFETime));
			return -1;
		}
		strncpy(self->data.SHFETime, pLoginInfoField_SHFETime, sizeof(self->data.SHFETime) );
		pLoginInfoField_SHFETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pLoginInfoField_DCETime != NULL) {
		if(pLoginInfoField_DCETime_len > (Py_ssize_t)sizeof(self->data.DCETime)) {
			PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is %zd)", pLoginInfoField_DCETime_len, (Py_ssize_t)sizeof(self->data.DCETime));
			return -1;
		}
		strncpy(self->data.DCETime, pLoginInfoField_DCETime, sizeof(self->data.DCETime) );
		pLoginInfoField_DCETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pLoginInfoField_CZCETime != NULL) {
		if(pLoginInfoField_CZCETime_len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
			PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is %zd)", pLoginInfoField_CZCETime_len, (Py_ssize_t)sizeof(self->data.CZCETime));
			return -1;
		}
		strncpy(self->data.CZCETime, pLoginInfoField_CZCETime, sizeof(self->data.CZCETime) );
		pLoginInfoField_CZCETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pLoginInfoField_FFEXTime != NULL) {
		if(pLoginInfoField_FFEXTime_len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
			PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is %zd)", pLoginInfoField_FFEXTime_len, (Py_ssize_t)sizeof(self->data.FFEXTime));
			return -1;
		}
		strncpy(self->data.FFEXTime, pLoginInfoField_FFEXTime, sizeof(self->data.FFEXTime) );
		pLoginInfoField_FFEXTime = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pLoginInfoField_MacAddress != NULL) {
		if(pLoginInfoField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pLoginInfoField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pLoginInfoField_MacAddress, sizeof(self->data.MacAddress) );
		pLoginInfoField_MacAddress = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pLoginInfoField_OneTimePassword != NULL) {
		if(pLoginInfoField_OneTimePassword_len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
			PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is %zd)", pLoginInfoField_OneTimePassword_len, (Py_ssize_t)sizeof(self->data.OneTimePassword));
			return -1;
		}
		strncpy(self->data.OneTimePassword, pLoginInfoField_OneTimePassword, sizeof(self->data.OneTimePassword) );
		pLoginInfoField_OneTimePassword = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pLoginInfoField_INETime != NULL) {
		if(pLoginInfoField_INETime_len > (Py_ssize_t)sizeof(self->data.INETime)) {
			PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is %zd)", pLoginInfoField_INETime_len, (Py_ssize_t)sizeof(self->data.INETime));
			return -1;
		}
		strncpy(self->data.INETime, pLoginInfoField_INETime, sizeof(self->data.INETime) );
		pLoginInfoField_INETime = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsQryControl = pLoginInfoField_IsQryControl;

	//TThostFtdcLoginRemarkType char[36]
	if(pLoginInfoField_LoginRemark != NULL) {
		if(pLoginInfoField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
			PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", pLoginInfoField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
			return -1;
		}
		strncpy(self->data.LoginRemark, pLoginInfoField_LoginRemark, sizeof(self->data.LoginRemark) );
		pLoginInfoField_LoginRemark = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pLoginInfoField_Password != NULL) {
		if(pLoginInfoField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pLoginInfoField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pLoginInfoField_Password, sizeof(self->data.Password) );
		pLoginInfoField_Password = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pLoginInfoField_IPAddress != NULL) {
		if(pLoginInfoField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pLoginInfoField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pLoginInfoField_IPAddress, sizeof(self->data.IPAddress) );
		pLoginInfoField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcLoginInfoField_dealloc(PyCThostFtdcLoginInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLoginInfoField_repr(PyCThostFtdcLoginInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s}"
#endif

		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "LoginDate", self->data.LoginDate 
		, "LoginTime", self->data.LoginTime 
		, "reserve1", self->data.reserve1 
		, "UserProductInfo", self->data.UserProductInfo 
		, "InterfaceProductInfo", self->data.InterfaceProductInfo 
		, "ProtocolInfo", self->data.ProtocolInfo 
		, "SystemName", self->data.SystemName 
		, "PasswordDeprecated", self->data.PasswordDeprecated 
		, "MaxOrderRef", self->data.MaxOrderRef 
		, "SHFETime", self->data.SHFETime 
		, "DCETime", self->data.DCETime 
		, "CZCETime", self->data.CZCETime 
		, "FFEXTime", self->data.FFEXTime 
		, "MacAddress", self->data.MacAddress 
		, "OneTimePassword", self->data.OneTimePassword 
		, "INETime", self->data.INETime 
		, "IsQryControl", self->data.IsQryControl
		, "LoginRemark", self->data.LoginRemark 
		, "Password", self->data.Password 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcLoginInfoField_get_FrontID(PyCThostFtdcLoginInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcLoginInfoField_get_SessionID(PyCThostFtdcLoginInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcLoginInfoField_get_BrokerID(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcLoginInfoField_get_UserID(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcLoginInfoField_get_LoginDate(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginDate);
}

static PyObject *PyCThostFtdcLoginInfoField_get_LoginTime(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginTime);
}

static PyObject *PyCThostFtdcLoginInfoField_get_reserve1(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcLoginInfoField_get_UserProductInfo(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcLoginInfoField_get_InterfaceProductInfo(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.InterfaceProductInfo);
}

static PyObject *PyCThostFtdcLoginInfoField_get_ProtocolInfo(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.ProtocolInfo);
}

static PyObject *PyCThostFtdcLoginInfoField_get_SystemName(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.SystemName);
}

static PyObject *PyCThostFtdcLoginInfoField_get_PasswordDeprecated(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.PasswordDeprecated);
}

static PyObject *PyCThostFtdcLoginInfoField_get_MaxOrderRef(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.MaxOrderRef);
}

static PyObject *PyCThostFtdcLoginInfoField_get_SHFETime(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.SHFETime);
}

static PyObject *PyCThostFtdcLoginInfoField_get_DCETime(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.DCETime);
}

static PyObject *PyCThostFtdcLoginInfoField_get_CZCETime(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CZCETime);
}

static PyObject *PyCThostFtdcLoginInfoField_get_FFEXTime(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.FFEXTime);
}

static PyObject *PyCThostFtdcLoginInfoField_get_MacAddress(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcLoginInfoField_get_OneTimePassword(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.OneTimePassword);
}

static PyObject *PyCThostFtdcLoginInfoField_get_INETime(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.INETime);
}

static PyObject *PyCThostFtdcLoginInfoField_get_IsQryControl(PyCThostFtdcLoginInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsQryControl);
#else 
	return PyInt_FromLong(self->data.IsQryControl);
#endif 
}

static PyObject *PyCThostFtdcLoginInfoField_get_LoginRemark(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginRemark);
}

static PyObject *PyCThostFtdcLoginInfoField_get_Password(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcLoginInfoField_get_IPAddress(PyCThostFtdcLoginInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcLoginInfoField_set_FrontID(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_SessionID(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_BrokerID(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_UserID(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_LoginDate(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LoginDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LoginDate)) {
		PyErr_SetString(PyExc_ValueError, "LoginDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.LoginDate, buf, sizeof(self->data.LoginDate));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_LoginTime(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LoginTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
		PyErr_SetString(PyExc_ValueError, "LoginTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.LoginTime, buf, sizeof(self->data.LoginTime));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_reserve1(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_UserProductInfo(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_InterfaceProductInfo(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_ProtocolInfo(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_SystemName(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SystemName)) {
		PyErr_SetString(PyExc_ValueError, "SystemName must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.SystemName, buf, sizeof(self->data.SystemName));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_PasswordDeprecated(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PasswordDeprecated Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PasswordDeprecated)) {
		PyErr_SetString(PyExc_ValueError, "PasswordDeprecated must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.PasswordDeprecated, buf, sizeof(self->data.PasswordDeprecated));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_MaxOrderRef(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MaxOrderRef Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
		PyErr_SetString(PyExc_ValueError, "MaxOrderRef must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.MaxOrderRef, buf, sizeof(self->data.MaxOrderRef));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_SHFETime(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SHFETime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
		PyErr_SetString(PyExc_ValueError, "SHFETime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.SHFETime, buf, sizeof(self->data.SHFETime));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_DCETime(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "DCETime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.DCETime)) {
		PyErr_SetString(PyExc_ValueError, "DCETime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.DCETime, buf, sizeof(self->data.DCETime));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_CZCETime(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CZCETime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
		PyErr_SetString(PyExc_ValueError, "CZCETime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.CZCETime, buf, sizeof(self->data.CZCETime));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_FFEXTime(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "FFEXTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
		PyErr_SetString(PyExc_ValueError, "FFEXTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.FFEXTime, buf, sizeof(self->data.FFEXTime));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_MacAddress(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_OneTimePassword(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_INETime(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "INETime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.INETime)) {
		PyErr_SetString(PyExc_ValueError, "INETime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.INETime, buf, sizeof(self->data.INETime));
	return 0;
}

static int PyCThostFtdcLoginInfoField_set_IsQryControl(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsQryControl Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsQryControl Expected int"); 
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
    self->data.IsQryControl = (int)buf; 
    return 0; 
}

static int PyCThostFtdcLoginInfoField_set_LoginRemark(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_Password(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLoginInfoField_set_IPAddress(PyCThostFtdcLoginInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcLoginInfoField_getset[] = {
	 {(char *)"FrontID", (getter)PyCThostFtdcLoginInfoField_get_FrontID, (setter)PyCThostFtdcLoginInfoField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcLoginInfoField_get_SessionID, (setter)PyCThostFtdcLoginInfoField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcLoginInfoField_get_BrokerID, (setter)PyCThostFtdcLoginInfoField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcLoginInfoField_get_UserID, (setter)PyCThostFtdcLoginInfoField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"LoginDate", (getter)PyCThostFtdcLoginInfoField_get_LoginDate, (setter)PyCThostFtdcLoginInfoField_set_LoginDate, (char *)"LoginDate", NULL},
	 {(char *)"LoginTime", (getter)PyCThostFtdcLoginInfoField_get_LoginTime, (setter)PyCThostFtdcLoginInfoField_set_LoginTime, (char *)"LoginTime", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcLoginInfoField_get_reserve1, (setter)PyCThostFtdcLoginInfoField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcLoginInfoField_get_UserProductInfo, (setter)PyCThostFtdcLoginInfoField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcLoginInfoField_get_InterfaceProductInfo, (setter)PyCThostFtdcLoginInfoField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
	 {(char *)"ProtocolInfo", (getter)PyCThostFtdcLoginInfoField_get_ProtocolInfo, (setter)PyCThostFtdcLoginInfoField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
	 {(char *)"SystemName", (getter)PyCThostFtdcLoginInfoField_get_SystemName, (setter)PyCThostFtdcLoginInfoField_set_SystemName, (char *)"SystemName", NULL},
	 {(char *)"PasswordDeprecated", (getter)PyCThostFtdcLoginInfoField_get_PasswordDeprecated, (setter)PyCThostFtdcLoginInfoField_set_PasswordDeprecated, (char *)"PasswordDeprecated", NULL},
	 {(char *)"MaxOrderRef", (getter)PyCThostFtdcLoginInfoField_get_MaxOrderRef, (setter)PyCThostFtdcLoginInfoField_set_MaxOrderRef, (char *)"MaxOrderRef", NULL},
	 {(char *)"SHFETime", (getter)PyCThostFtdcLoginInfoField_get_SHFETime, (setter)PyCThostFtdcLoginInfoField_set_SHFETime, (char *)"SHFETime", NULL},
	 {(char *)"DCETime", (getter)PyCThostFtdcLoginInfoField_get_DCETime, (setter)PyCThostFtdcLoginInfoField_set_DCETime, (char *)"DCETime", NULL},
	 {(char *)"CZCETime", (getter)PyCThostFtdcLoginInfoField_get_CZCETime, (setter)PyCThostFtdcLoginInfoField_set_CZCETime, (char *)"CZCETime", NULL},
	 {(char *)"FFEXTime", (getter)PyCThostFtdcLoginInfoField_get_FFEXTime, (setter)PyCThostFtdcLoginInfoField_set_FFEXTime, (char *)"FFEXTime", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcLoginInfoField_get_MacAddress, (setter)PyCThostFtdcLoginInfoField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"OneTimePassword", (getter)PyCThostFtdcLoginInfoField_get_OneTimePassword, (setter)PyCThostFtdcLoginInfoField_set_OneTimePassword, (char *)"OneTimePassword", NULL},
	 {(char *)"INETime", (getter)PyCThostFtdcLoginInfoField_get_INETime, (setter)PyCThostFtdcLoginInfoField_set_INETime, (char *)"INETime", NULL},
	 {(char *)"IsQryControl", (getter)PyCThostFtdcLoginInfoField_get_IsQryControl, (setter)PyCThostFtdcLoginInfoField_set_IsQryControl, (char *)"IsQryControl", NULL},
	 {(char *)"LoginRemark", (getter)PyCThostFtdcLoginInfoField_get_LoginRemark, (setter)PyCThostFtdcLoginInfoField_set_LoginRemark, (char *)"LoginRemark", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcLoginInfoField_get_Password, (setter)PyCThostFtdcLoginInfoField_set_Password, (char *)"Password", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcLoginInfoField_get_IPAddress, (setter)PyCThostFtdcLoginInfoField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLoginInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLoginInfoField",	/* tp_name */
	sizeof(PyCThostFtdcLoginInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLoginInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLoginInfoField_repr,   /* tp_repr */
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
	"CThostFtdcLoginInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLoginInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLoginInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLoginInfoField_new,       /* tp_new */
};

int PyCThostFtdcLoginInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLoginInfoField  */
	if (PyType_Ready(&PyCThostFtdcLoginInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLoginInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLoginInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLoginInfoField", (PyObject *)&PyCThostFtdcLoginInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoginInfoField to module");
        Py_DECREF(&PyCThostFtdcLoginInfoFieldType);
		return -1;
    }

    return 0;
}
