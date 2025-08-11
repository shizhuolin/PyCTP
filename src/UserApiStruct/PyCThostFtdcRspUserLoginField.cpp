
#include "PyCThostFtdcRspUserLoginField.h"



static PyObject *PyCThostFtdcRspUserLoginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspUserLoginField *self = (PyCThostFtdcRspUserLoginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspUserLoginField_init(PyCThostFtdcRspUserLoginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "LoginTime", "BrokerID", "UserID", "SystemName", "FrontID", "SessionID", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "INETime", "SysVersion", "GFEXTime", "LoginDRIdentityID", "UserDRIdentityID", "LastLoginTime", "ReserveInfo",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRspUserLoginField_TradingDay = NULL;
	Py_ssize_t pRspUserLoginField_TradingDay_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLoginField_LoginTime = NULL;
	Py_ssize_t pRspUserLoginField_LoginTime_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspUserLoginField_BrokerID = NULL;
	Py_ssize_t pRspUserLoginField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspUserLoginField_UserID = NULL;
	Py_ssize_t pRspUserLoginField_UserID_len = 0;

	//TThostFtdcSystemNameType char[41]
	const char *pRspUserLoginField_SystemName = NULL;
	Py_ssize_t pRspUserLoginField_SystemName_len = 0;

	//TThostFtdcFrontIDType int
	int pRspUserLoginField_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pRspUserLoginField_SessionID = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pRspUserLoginField_MaxOrderRef = NULL;
	Py_ssize_t pRspUserLoginField_MaxOrderRef_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLoginField_SHFETime = NULL;
	Py_ssize_t pRspUserLoginField_SHFETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLoginField_DCETime = NULL;
	Py_ssize_t pRspUserLoginField_DCETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLoginField_CZCETime = NULL;
	Py_ssize_t pRspUserLoginField_CZCETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLoginField_FFEXTime = NULL;
	Py_ssize_t pRspUserLoginField_FFEXTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLoginField_INETime = NULL;
	Py_ssize_t pRspUserLoginField_INETime_len = 0;

	//TThostFtdcSysVersionType char[41]
	const char *pRspUserLoginField_SysVersion = NULL;
	Py_ssize_t pRspUserLoginField_SysVersion_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLoginField_GFEXTime = NULL;
	Py_ssize_t pRspUserLoginField_GFEXTime_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pRspUserLoginField_LoginDRIdentityID = 0;

	//TThostFtdcDRIdentityIDType int
	int pRspUserLoginField_UserDRIdentityID = 0;

	//TThostFtdcDateTimeType char[17]
	const char *pRspUserLoginField_LastLoginTime = NULL;
	Py_ssize_t pRspUserLoginField_LastLoginTime_len = 0;

	//TThostFtdcReserveInfoType char[65]
	const char *pRspUserLoginField_ReserveInfo = NULL;
	Py_ssize_t pRspUserLoginField_ReserveInfo_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#y#y#y#y#y#y#y#iiy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#s#s#s#s#s#s#s#iis#s#", (char **)kwlist
#endif

		, &pRspUserLoginField_TradingDay, &pRspUserLoginField_TradingDay_len
		, &pRspUserLoginField_LoginTime, &pRspUserLoginField_LoginTime_len
		, &pRspUserLoginField_BrokerID, &pRspUserLoginField_BrokerID_len
		, &pRspUserLoginField_UserID, &pRspUserLoginField_UserID_len
		, &pRspUserLoginField_SystemName, &pRspUserLoginField_SystemName_len
		, &pRspUserLoginField_FrontID
		, &pRspUserLoginField_SessionID
		, &pRspUserLoginField_MaxOrderRef, &pRspUserLoginField_MaxOrderRef_len
		, &pRspUserLoginField_SHFETime, &pRspUserLoginField_SHFETime_len
		, &pRspUserLoginField_DCETime, &pRspUserLoginField_DCETime_len
		, &pRspUserLoginField_CZCETime, &pRspUserLoginField_CZCETime_len
		, &pRspUserLoginField_FFEXTime, &pRspUserLoginField_FFEXTime_len
		, &pRspUserLoginField_INETime, &pRspUserLoginField_INETime_len
		, &pRspUserLoginField_SysVersion, &pRspUserLoginField_SysVersion_len
		, &pRspUserLoginField_GFEXTime, &pRspUserLoginField_GFEXTime_len
		, &pRspUserLoginField_LoginDRIdentityID
		, &pRspUserLoginField_UserDRIdentityID
		, &pRspUserLoginField_LastLoginTime, &pRspUserLoginField_LastLoginTime_len
		, &pRspUserLoginField_ReserveInfo, &pRspUserLoginField_ReserveInfo_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRspUserLoginField_TradingDay != NULL) {
		if(pRspUserLoginField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspUserLoginField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspUserLoginField_TradingDay, sizeof(self->data.TradingDay) );
		pRspUserLoginField_TradingDay = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLoginField_LoginTime != NULL) {
		if(pRspUserLoginField_LoginTime_len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
			PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_LoginTime_len, (Py_ssize_t)sizeof(self->data.LoginTime));
			return -1;
		}
		strncpy(self->data.LoginTime, pRspUserLoginField_LoginTime, sizeof(self->data.LoginTime) );
		pRspUserLoginField_LoginTime = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspUserLoginField_BrokerID != NULL) {
		if(pRspUserLoginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspUserLoginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspUserLoginField_BrokerID, sizeof(self->data.BrokerID) );
		pRspUserLoginField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pRspUserLoginField_UserID != NULL) {
		if(pRspUserLoginField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspUserLoginField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspUserLoginField_UserID, sizeof(self->data.UserID) );
		pRspUserLoginField_UserID = NULL;
	}

	//TThostFtdcSystemNameType char[41]
	if(pRspUserLoginField_SystemName != NULL) {
		if(pRspUserLoginField_SystemName_len > (Py_ssize_t)sizeof(self->data.SystemName)) {
			PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is %zd)", pRspUserLoginField_SystemName_len, (Py_ssize_t)sizeof(self->data.SystemName));
			return -1;
		}
		strncpy(self->data.SystemName, pRspUserLoginField_SystemName, sizeof(self->data.SystemName) );
		pRspUserLoginField_SystemName = NULL;
	}

	//TThostFtdcFrontIDType int
	self->data.FrontID = pRspUserLoginField_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspUserLoginField_SessionID;

	//TThostFtdcOrderRefType char[13]
	if(pRspUserLoginField_MaxOrderRef != NULL) {
		if(pRspUserLoginField_MaxOrderRef_len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
			PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is %zd)", pRspUserLoginField_MaxOrderRef_len, (Py_ssize_t)sizeof(self->data.MaxOrderRef));
			return -1;
		}
		strncpy(self->data.MaxOrderRef, pRspUserLoginField_MaxOrderRef, sizeof(self->data.MaxOrderRef) );
		pRspUserLoginField_MaxOrderRef = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLoginField_SHFETime != NULL) {
		if(pRspUserLoginField_SHFETime_len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
			PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_SHFETime_len, (Py_ssize_t)sizeof(self->data.SHFETime));
			return -1;
		}
		strncpy(self->data.SHFETime, pRspUserLoginField_SHFETime, sizeof(self->data.SHFETime) );
		pRspUserLoginField_SHFETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLoginField_DCETime != NULL) {
		if(pRspUserLoginField_DCETime_len > (Py_ssize_t)sizeof(self->data.DCETime)) {
			PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_DCETime_len, (Py_ssize_t)sizeof(self->data.DCETime));
			return -1;
		}
		strncpy(self->data.DCETime, pRspUserLoginField_DCETime, sizeof(self->data.DCETime) );
		pRspUserLoginField_DCETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLoginField_CZCETime != NULL) {
		if(pRspUserLoginField_CZCETime_len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
			PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_CZCETime_len, (Py_ssize_t)sizeof(self->data.CZCETime));
			return -1;
		}
		strncpy(self->data.CZCETime, pRspUserLoginField_CZCETime, sizeof(self->data.CZCETime) );
		pRspUserLoginField_CZCETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLoginField_FFEXTime != NULL) {
		if(pRspUserLoginField_FFEXTime_len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
			PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_FFEXTime_len, (Py_ssize_t)sizeof(self->data.FFEXTime));
			return -1;
		}
		strncpy(self->data.FFEXTime, pRspUserLoginField_FFEXTime, sizeof(self->data.FFEXTime) );
		pRspUserLoginField_FFEXTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLoginField_INETime != NULL) {
		if(pRspUserLoginField_INETime_len > (Py_ssize_t)sizeof(self->data.INETime)) {
			PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_INETime_len, (Py_ssize_t)sizeof(self->data.INETime));
			return -1;
		}
		strncpy(self->data.INETime, pRspUserLoginField_INETime, sizeof(self->data.INETime) );
		pRspUserLoginField_INETime = NULL;
	}

	//TThostFtdcSysVersionType char[41]
	if(pRspUserLoginField_SysVersion != NULL) {
		if(pRspUserLoginField_SysVersion_len > (Py_ssize_t)sizeof(self->data.SysVersion)) {
			PyErr_Format(PyExc_ValueError, "SysVersion too long: length=%zd (max allowed is %zd)", pRspUserLoginField_SysVersion_len, (Py_ssize_t)sizeof(self->data.SysVersion));
			return -1;
		}
		strncpy(self->data.SysVersion, pRspUserLoginField_SysVersion, sizeof(self->data.SysVersion) );
		pRspUserLoginField_SysVersion = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLoginField_GFEXTime != NULL) {
		if(pRspUserLoginField_GFEXTime_len > (Py_ssize_t)sizeof(self->data.GFEXTime)) {
			PyErr_Format(PyExc_ValueError, "GFEXTime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_GFEXTime_len, (Py_ssize_t)sizeof(self->data.GFEXTime));
			return -1;
		}
		strncpy(self->data.GFEXTime, pRspUserLoginField_GFEXTime, sizeof(self->data.GFEXTime) );
		pRspUserLoginField_GFEXTime = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.LoginDRIdentityID = pRspUserLoginField_LoginDRIdentityID;

	//TThostFtdcDRIdentityIDType int
	self->data.UserDRIdentityID = pRspUserLoginField_UserDRIdentityID;

	//TThostFtdcDateTimeType char[17]
	if(pRspUserLoginField_LastLoginTime != NULL) {
		if(pRspUserLoginField_LastLoginTime_len > (Py_ssize_t)sizeof(self->data.LastLoginTime)) {
			PyErr_Format(PyExc_ValueError, "LastLoginTime too long: length=%zd (max allowed is %zd)", pRspUserLoginField_LastLoginTime_len, (Py_ssize_t)sizeof(self->data.LastLoginTime));
			return -1;
		}
		strncpy(self->data.LastLoginTime, pRspUserLoginField_LastLoginTime, sizeof(self->data.LastLoginTime) );
		pRspUserLoginField_LastLoginTime = NULL;
	}

	//TThostFtdcReserveInfoType char[65]
	if(pRspUserLoginField_ReserveInfo != NULL) {
		if(pRspUserLoginField_ReserveInfo_len > (Py_ssize_t)sizeof(self->data.ReserveInfo)) {
			PyErr_Format(PyExc_ValueError, "ReserveInfo too long: length=%zd (max allowed is %zd)", pRspUserLoginField_ReserveInfo_len, (Py_ssize_t)sizeof(self->data.ReserveInfo));
			return -1;
		}
		strncpy(self->data.ReserveInfo, pRspUserLoginField_ReserveInfo, sizeof(self->data.ReserveInfo) );
		pRspUserLoginField_ReserveInfo = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspUserLoginField_dealloc(PyCThostFtdcRspUserLoginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspUserLoginField_repr(PyCThostFtdcRspUserLoginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:s}"
#endif

		, "TradingDay", self->data.TradingDay 
		, "LoginTime", self->data.LoginTime 
		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "SystemName", self->data.SystemName 
		, "FrontID", self->data.FrontID
		, "SessionID", self->data.SessionID
		, "MaxOrderRef", self->data.MaxOrderRef 
		, "SHFETime", self->data.SHFETime 
		, "DCETime", self->data.DCETime 
		, "CZCETime", self->data.CZCETime 
		, "FFEXTime", self->data.FFEXTime 
		, "INETime", self->data.INETime 
		, "SysVersion", self->data.SysVersion 
		, "GFEXTime", self->data.GFEXTime 
		, "LoginDRIdentityID", self->data.LoginDRIdentityID
		, "UserDRIdentityID", self->data.UserDRIdentityID
		, "LastLoginTime", self->data.LastLoginTime 
		, "ReserveInfo", self->data.ReserveInfo 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserLoginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_TradingDay(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_LoginTime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.LoginTime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_BrokerID(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_UserID(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_SystemName(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.SystemName);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_FrontID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcRspUserLoginField_get_SessionID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspUserLoginField_get_MaxOrderRef(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.MaxOrderRef);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_SHFETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.SHFETime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_DCETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.DCETime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_CZCETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.CZCETime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_FFEXTime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.FFEXTime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_INETime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.INETime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_SysVersion(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.SysVersion);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_GFEXTime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.GFEXTime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_LoginDRIdentityID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.LoginDRIdentityID);
#else 
	return PyInt_FromLong(self->data.LoginDRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcRspUserLoginField_get_UserDRIdentityID(PyCThostFtdcRspUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.UserDRIdentityID);
#else 
	return PyInt_FromLong(self->data.UserDRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcRspUserLoginField_get_LastLoginTime(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.LastLoginTime);
}

static PyObject *PyCThostFtdcRspUserLoginField_get_ReserveInfo(PyCThostFtdcRspUserLoginField *self, void *closure) {
	return PyBytes_FromString(self->data.ReserveInfo);
}

static int PyCThostFtdcRspUserLoginField_set_TradingDay(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_LoginTime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_BrokerID(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_UserID(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_SystemName(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_FrontID(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_SessionID(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_MaxOrderRef(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_SHFETime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_DCETime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_CZCETime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_FFEXTime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_INETime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLoginField_set_SysVersion(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "SysVersion Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.SysVersion)) {
		PyErr_SetString(PyExc_ValueError, "SysVersion must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.SysVersion, buf, sizeof(self->data.SysVersion));
	return 0;
}

static int PyCThostFtdcRspUserLoginField_set_GFEXTime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "GFEXTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.GFEXTime)) {
		PyErr_SetString(PyExc_ValueError, "GFEXTime must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.GFEXTime, buf, sizeof(self->data.GFEXTime));
	return 0;
}

static int PyCThostFtdcRspUserLoginField_set_LoginDRIdentityID(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginDRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "LoginDRIdentityID Expected int"); 
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
    self->data.LoginDRIdentityID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspUserLoginField_set_UserDRIdentityID(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserDRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "UserDRIdentityID Expected int"); 
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
    self->data.UserDRIdentityID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcRspUserLoginField_set_LastLoginTime(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LastLoginTime Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LastLoginTime)) {
		PyErr_SetString(PyExc_ValueError, "LastLoginTime must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.LastLoginTime, buf, sizeof(self->data.LastLoginTime));
	return 0;
}

static int PyCThostFtdcRspUserLoginField_set_ReserveInfo(PyCThostFtdcRspUserLoginField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ReserveInfo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ReserveInfo)) {
		PyErr_SetString(PyExc_ValueError, "ReserveInfo must be less than 65 bytes");
		return -1;
	}
	strncpy(self->data.ReserveInfo, buf, sizeof(self->data.ReserveInfo));
	return 0;
}



static PyGetSetDef PyCThostFtdcRspUserLoginField_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspUserLoginField_get_TradingDay, (setter)PyCThostFtdcRspUserLoginField_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"LoginTime", (getter)PyCThostFtdcRspUserLoginField_get_LoginTime, (setter)PyCThostFtdcRspUserLoginField_set_LoginTime, (char *)"LoginTime", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspUserLoginField_get_BrokerID, (setter)PyCThostFtdcRspUserLoginField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspUserLoginField_get_UserID, (setter)PyCThostFtdcRspUserLoginField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"SystemName", (getter)PyCThostFtdcRspUserLoginField_get_SystemName, (setter)PyCThostFtdcRspUserLoginField_set_SystemName, (char *)"SystemName", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcRspUserLoginField_get_FrontID, (setter)PyCThostFtdcRspUserLoginField_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspUserLoginField_get_SessionID, (setter)PyCThostFtdcRspUserLoginField_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"MaxOrderRef", (getter)PyCThostFtdcRspUserLoginField_get_MaxOrderRef, (setter)PyCThostFtdcRspUserLoginField_set_MaxOrderRef, (char *)"MaxOrderRef", NULL},
	 {(char *)"SHFETime", (getter)PyCThostFtdcRspUserLoginField_get_SHFETime, (setter)PyCThostFtdcRspUserLoginField_set_SHFETime, (char *)"SHFETime", NULL},
	 {(char *)"DCETime", (getter)PyCThostFtdcRspUserLoginField_get_DCETime, (setter)PyCThostFtdcRspUserLoginField_set_DCETime, (char *)"DCETime", NULL},
	 {(char *)"CZCETime", (getter)PyCThostFtdcRspUserLoginField_get_CZCETime, (setter)PyCThostFtdcRspUserLoginField_set_CZCETime, (char *)"CZCETime", NULL},
	 {(char *)"FFEXTime", (getter)PyCThostFtdcRspUserLoginField_get_FFEXTime, (setter)PyCThostFtdcRspUserLoginField_set_FFEXTime, (char *)"FFEXTime", NULL},
	 {(char *)"INETime", (getter)PyCThostFtdcRspUserLoginField_get_INETime, (setter)PyCThostFtdcRspUserLoginField_set_INETime, (char *)"INETime", NULL},
	 {(char *)"SysVersion", (getter)PyCThostFtdcRspUserLoginField_get_SysVersion, (setter)PyCThostFtdcRspUserLoginField_set_SysVersion, (char *)"SysVersion", NULL},
	 {(char *)"GFEXTime", (getter)PyCThostFtdcRspUserLoginField_get_GFEXTime, (setter)PyCThostFtdcRspUserLoginField_set_GFEXTime, (char *)"GFEXTime", NULL},
	 {(char *)"LoginDRIdentityID", (getter)PyCThostFtdcRspUserLoginField_get_LoginDRIdentityID, (setter)PyCThostFtdcRspUserLoginField_set_LoginDRIdentityID, (char *)"LoginDRIdentityID", NULL},
	 {(char *)"UserDRIdentityID", (getter)PyCThostFtdcRspUserLoginField_get_UserDRIdentityID, (setter)PyCThostFtdcRspUserLoginField_set_UserDRIdentityID, (char *)"UserDRIdentityID", NULL},
	 {(char *)"LastLoginTime", (getter)PyCThostFtdcRspUserLoginField_get_LastLoginTime, (setter)PyCThostFtdcRspUserLoginField_set_LastLoginTime, (char *)"LastLoginTime", NULL},
	 {(char *)"ReserveInfo", (getter)PyCThostFtdcRspUserLoginField_get_ReserveInfo, (setter)PyCThostFtdcRspUserLoginField_set_ReserveInfo, (char *)"ReserveInfo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspUserLoginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspUserLoginField",	/* tp_name */
	sizeof(PyCThostFtdcRspUserLoginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspUserLoginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspUserLoginField_repr,   /* tp_repr */
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
	"CThostFtdcRspUserLoginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspUserLoginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspUserLoginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspUserLoginField_new,       /* tp_new */
};

int PyCThostFtdcRspUserLoginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspUserLoginField  */
	if (PyType_Ready(&PyCThostFtdcRspUserLoginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspUserLoginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspUserLoginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspUserLoginField", (PyObject *)&PyCThostFtdcRspUserLoginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspUserLoginField to module");
        Py_DECREF(&PyCThostFtdcRspUserLoginFieldType);
		return -1;
    }

    return 0;
}
