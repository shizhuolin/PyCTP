
#include "PyCThostFtdcUserSessionField.h"



static PyObject *PyCThostFtdcUserSessionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserSessionField *self = (PyCThostFtdcUserSessionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcUserSessionField_init(PyCThostFtdcUserSessionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID", "SessionID", "BrokerID", "UserID", "LoginDate", "LoginTime", "reserve1", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "LoginRemark", "IPAddress",  NULL};

	//TThostFtdcFrontIDType int
	int pUserSessionField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pUserSessionField_SessionID = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pUserSessionField_BrokerID = NULL;
	Py_ssize_t pUserSessionField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pUserSessionField_UserID = NULL;
	Py_ssize_t pUserSessionField_UserID_len = 0;

	//TThostFtdcDateType char[9]
	const char *pUserSessionField_LoginDate = NULL;
	Py_ssize_t pUserSessionField_LoginDate_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pUserSessionField_LoginTime = NULL;
	Py_ssize_t pUserSessionField_LoginTime_len = 0;

	//TThostFtdcOldIPAddressType char[16]
	const char *pUserSessionField_reserve1 = NULL;
	Py_ssize_t pUserSessionField_reserve1_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pUserSessionField_UserProductInfo = NULL;
	Py_ssize_t pUserSessionField_UserProductInfo_len = 0;

	//TThostFtdcProductInfoType char[11]
	const char *pUserSessionField_InterfaceProductInfo = NULL;
	Py_ssize_t pUserSessionField_InterfaceProductInfo_len = 0;

	//TThostFtdcProtocolInfoType char[11]
	const char *pUserSessionField_ProtocolInfo = NULL;
	Py_ssize_t pUserSessionField_ProtocolInfo_len = 0;

	//TThostFtdcMacAddressType char[21]
	const char *pUserSessionField_MacAddress = NULL;
	Py_ssize_t pUserSessionField_MacAddress_len = 0;

	//TThostFtdcLoginRemarkType char[36]
	const char *pUserSessionField_LoginRemark = NULL;
	Py_ssize_t pUserSessionField_LoginRemark_len = 0;

	//TThostFtdcIPAddressType char[33]
	const char *pUserSessionField_IPAddress = NULL;
	Py_ssize_t pUserSessionField_IPAddress_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#s#s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pUserSessionField_FrontID
		, &pUserSessionField_SessionID
		, &pUserSessionField_BrokerID, &pUserSessionField_BrokerID_len
		, &pUserSessionField_UserID, &pUserSessionField_UserID_len
		, &pUserSessionField_LoginDate, &pUserSessionField_LoginDate_len
		, &pUserSessionField_LoginTime, &pUserSessionField_LoginTime_len
		, &pUserSessionField_reserve1, &pUserSessionField_reserve1_len
		, &pUserSessionField_UserProductInfo, &pUserSessionField_UserProductInfo_len
		, &pUserSessionField_InterfaceProductInfo, &pUserSessionField_InterfaceProductInfo_len
		, &pUserSessionField_ProtocolInfo, &pUserSessionField_ProtocolInfo_len
		, &pUserSessionField_MacAddress, &pUserSessionField_MacAddress_len
		, &pUserSessionField_LoginRemark, &pUserSessionField_LoginRemark_len
		, &pUserSessionField_IPAddress, &pUserSessionField_IPAddress_len


    )) {
        return -1;
    }

	//TThostFtdcFrontIDType int
	self->data.FrontID = pUserSessionField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pUserSessionField_SessionID;

	//TThostFtdcBrokerIDType char[11]
	if(pUserSessionField_BrokerID != NULL) {
		if(pUserSessionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pUserSessionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pUserSessionField_BrokerID, sizeof(self->data.BrokerID) );
		pUserSessionField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pUserSessionField_UserID != NULL) {
		if(pUserSessionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pUserSessionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pUserSessionField_UserID, sizeof(self->data.UserID) );
		pUserSessionField_UserID = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pUserSessionField_LoginDate != NULL) {
		if(pUserSessionField_LoginDate_len > (Py_ssize_t)sizeof(self->data.LoginDate)) {
			PyErr_Format(PyExc_ValueError, "LoginDate too long: length=%zd (max allowed is %zd)", pUserSessionField_LoginDate_len, (Py_ssize_t)sizeof(self->data.LoginDate));
			return -1;
		}
		strncpy(self->data.LoginDate, pUserSessionField_LoginDate, sizeof(self->data.LoginDate) );
		pUserSessionField_LoginDate = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pUserSessionField_LoginTime != NULL) {
		if(pUserSessionField_LoginTime_len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
			PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is %zd)", pUserSessionField_LoginTime_len, (Py_ssize_t)sizeof(self->data.LoginTime));
			return -1;
		}
		strncpy(self->data.LoginTime, pUserSessionField_LoginTime, sizeof(self->data.LoginTime) );
		pUserSessionField_LoginTime = NULL;
	}

	//TThostFtdcOldIPAddressType char[16]
	if(pUserSessionField_reserve1 != NULL) {
		if(pUserSessionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
			PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", pUserSessionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
			return -1;
		}
		strncpy(self->data.reserve1, pUserSessionField_reserve1, sizeof(self->data.reserve1) );
		pUserSessionField_reserve1 = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pUserSessionField_UserProductInfo != NULL) {
		if(pUserSessionField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
			PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", pUserSessionField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
			return -1;
		}
		strncpy(self->data.UserProductInfo, pUserSessionField_UserProductInfo, sizeof(self->data.UserProductInfo) );
		pUserSessionField_UserProductInfo = NULL;
	}

	//TThostFtdcProductInfoType char[11]
	if(pUserSessionField_InterfaceProductInfo != NULL) {
		if(pUserSessionField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
			PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", pUserSessionField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
			return -1;
		}
		strncpy(self->data.InterfaceProductInfo, pUserSessionField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
		pUserSessionField_InterfaceProductInfo = NULL;
	}

	//TThostFtdcProtocolInfoType char[11]
	if(pUserSessionField_ProtocolInfo != NULL) {
		if(pUserSessionField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
			PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", pUserSessionField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
			return -1;
		}
		strncpy(self->data.ProtocolInfo, pUserSessionField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
		pUserSessionField_ProtocolInfo = NULL;
	}

	//TThostFtdcMacAddressType char[21]
	if(pUserSessionField_MacAddress != NULL) {
		if(pUserSessionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
			PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", pUserSessionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
			return -1;
		}
		strncpy(self->data.MacAddress, pUserSessionField_MacAddress, sizeof(self->data.MacAddress) );
		pUserSessionField_MacAddress = NULL;
	}

	//TThostFtdcLoginRemarkType char[36]
	if(pUserSessionField_LoginRemark != NULL) {
		if(pUserSessionField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
			PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", pUserSessionField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
			return -1;
		}
		strncpy(self->data.LoginRemark, pUserSessionField_LoginRemark, sizeof(self->data.LoginRemark) );
		pUserSessionField_LoginRemark = NULL;
	}

	//TThostFtdcIPAddressType char[33]
	if(pUserSessionField_IPAddress != NULL) {
		if(pUserSessionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
			PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", pUserSessionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
			return -1;
		}
		strncpy(self->data.IPAddress, pUserSessionField_IPAddress, sizeof(self->data.IPAddress) );
		pUserSessionField_IPAddress = NULL;
	}



    return 0;
}

static void PyCThostFtdcUserSessionField_dealloc(PyCThostFtdcUserSessionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserSessionField_repr(PyCThostFtdcUserSessionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
		, "MacAddress", self->data.MacAddress 
		, "LoginRemark", self->data.LoginRemark 
		, "IPAddress", self->data.IPAddress 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSessionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcUserSessionField_get_FrontID(PyCThostFtdcUserSessionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcUserSessionField_get_SessionID(PyCThostFtdcUserSessionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcUserSessionField_get_BrokerID(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcUserSessionField_get_UserID(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcUserSessionField_get_LoginDate(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginDate);
}

static PyObject *PyCThostFtdcUserSessionField_get_LoginTime(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginTime);
}

static PyObject *PyCThostFtdcUserSessionField_get_reserve1(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.reserve1);
}

static PyObject *PyCThostFtdcUserSessionField_get_UserProductInfo(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.UserProductInfo);
}

static PyObject *PyCThostFtdcUserSessionField_get_InterfaceProductInfo(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.InterfaceProductInfo);
}

static PyObject *PyCThostFtdcUserSessionField_get_ProtocolInfo(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.ProtocolInfo);
}

static PyObject *PyCThostFtdcUserSessionField_get_MacAddress(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.MacAddress);
}

static PyObject *PyCThostFtdcUserSessionField_get_LoginRemark(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginRemark);
}

static PyObject *PyCThostFtdcUserSessionField_get_IPAddress(PyCThostFtdcUserSessionField *self, void *closure) {
	return PyBytes_FromString(self->data.IPAddress);
}

static int PyCThostFtdcUserSessionField_set_FrontID(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_SessionID(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_BrokerID(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_UserID(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_LoginDate(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_LoginTime(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_reserve1(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_UserProductInfo(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_InterfaceProductInfo(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_ProtocolInfo(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_MacAddress(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_LoginRemark(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcUserSessionField_set_IPAddress(PyCThostFtdcUserSessionField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcUserSessionField_getset[] = {
	 {(char *)"FrontID", (getter)PyCThostFtdcUserSessionField_get_FrontID, (setter)PyCThostFtdcUserSessionField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcUserSessionField_get_SessionID, (setter)PyCThostFtdcUserSessionField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcUserSessionField_get_BrokerID, (setter)PyCThostFtdcUserSessionField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcUserSessionField_get_UserID, (setter)PyCThostFtdcUserSessionField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"LoginDate", (getter)PyCThostFtdcUserSessionField_get_LoginDate, (setter)PyCThostFtdcUserSessionField_set_LoginDate, (char *)"LoginDate", NULL},
	 {(char *)"LoginTime", (getter)PyCThostFtdcUserSessionField_get_LoginTime, (setter)PyCThostFtdcUserSessionField_set_LoginTime, (char *)"LoginTime", NULL},
	 {(char *)"reserve1", (getter)PyCThostFtdcUserSessionField_get_reserve1, (setter)PyCThostFtdcUserSessionField_set_reserve1, (char *)"reserve1", NULL},
	 {(char *)"UserProductInfo", (getter)PyCThostFtdcUserSessionField_get_UserProductInfo, (setter)PyCThostFtdcUserSessionField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
	 {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcUserSessionField_get_InterfaceProductInfo, (setter)PyCThostFtdcUserSessionField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
	 {(char *)"ProtocolInfo", (getter)PyCThostFtdcUserSessionField_get_ProtocolInfo, (setter)PyCThostFtdcUserSessionField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
	 {(char *)"MacAddress", (getter)PyCThostFtdcUserSessionField_get_MacAddress, (setter)PyCThostFtdcUserSessionField_set_MacAddress, (char *)"MacAddress", NULL},
	 {(char *)"LoginRemark", (getter)PyCThostFtdcUserSessionField_get_LoginRemark, (setter)PyCThostFtdcUserSessionField_set_LoginRemark, (char *)"LoginRemark", NULL},
	 {(char *)"IPAddress", (getter)PyCThostFtdcUserSessionField_get_IPAddress, (setter)PyCThostFtdcUserSessionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserSessionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserSessionField",	/* tp_name */
	sizeof(PyCThostFtdcUserSessionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserSessionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserSessionField_repr,   /* tp_repr */
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
	"CThostFtdcUserSessionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserSessionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserSessionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserSessionField_new,       /* tp_new */
};

int PyCThostFtdcUserSessionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserSessionField  */
	if (PyType_Ready(&PyCThostFtdcUserSessionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserSessionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserSessionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserSessionField", (PyObject *)&PyCThostFtdcUserSessionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserSessionField to module");
        Py_DECREF(&PyCThostFtdcUserSessionFieldType);
		return -1;
    }

    return 0;
}
