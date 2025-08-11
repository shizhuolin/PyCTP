
#include "PyCThostFtdcRspUserLogin2Field.h"



static PyObject *PyCThostFtdcRspUserLogin2Field_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspUserLogin2Field *self = (PyCThostFtdcRspUserLogin2Field *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcRspUserLogin2Field_init(PyCThostFtdcRspUserLogin2Field *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "LoginTime", "BrokerID", "UserID", "SystemName", "FrontID", "SessionID", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "INETime", "RandomString",  NULL};

	//TThostFtdcDateType char[9]
	const char *pRspUserLogin2Field_TradingDay = NULL;
	Py_ssize_t pRspUserLogin2Field_TradingDay_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLogin2Field_LoginTime = NULL;
	Py_ssize_t pRspUserLogin2Field_LoginTime_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pRspUserLogin2Field_BrokerID = NULL;
	Py_ssize_t pRspUserLogin2Field_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pRspUserLogin2Field_UserID = NULL;
	Py_ssize_t pRspUserLogin2Field_UserID_len = 0;

	//TThostFtdcSystemNameType char[41]
	const char *pRspUserLogin2Field_SystemName = NULL;
	Py_ssize_t pRspUserLogin2Field_SystemName_len = 0;

	//TThostFtdcFrontIDType int
	int pRspUserLogin2Field_FrontID = 0;

	//TThostFtdcSessionIDType int
	int pRspUserLogin2Field_SessionID = 0;

	//TThostFtdcOrderRefType char[13]
	const char *pRspUserLogin2Field_MaxOrderRef = NULL;
	Py_ssize_t pRspUserLogin2Field_MaxOrderRef_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLogin2Field_SHFETime = NULL;
	Py_ssize_t pRspUserLogin2Field_SHFETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLogin2Field_DCETime = NULL;
	Py_ssize_t pRspUserLogin2Field_DCETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLogin2Field_CZCETime = NULL;
	Py_ssize_t pRspUserLogin2Field_CZCETime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLogin2Field_FFEXTime = NULL;
	Py_ssize_t pRspUserLogin2Field_FFEXTime_len = 0;

	//TThostFtdcTimeType char[9]
	const char *pRspUserLogin2Field_INETime = NULL;
	Py_ssize_t pRspUserLogin2Field_INETime_len = 0;

	//TThostFtdcRandomStringType char[17]
	const char *pRspUserLogin2Field_RandomString = NULL;
	Py_ssize_t pRspUserLogin2Field_RandomString_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iis#s#s#s#s#s#s#", (char **)kwlist
#endif

		, &pRspUserLogin2Field_TradingDay, &pRspUserLogin2Field_TradingDay_len
		, &pRspUserLogin2Field_LoginTime, &pRspUserLogin2Field_LoginTime_len
		, &pRspUserLogin2Field_BrokerID, &pRspUserLogin2Field_BrokerID_len
		, &pRspUserLogin2Field_UserID, &pRspUserLogin2Field_UserID_len
		, &pRspUserLogin2Field_SystemName, &pRspUserLogin2Field_SystemName_len
		, &pRspUserLogin2Field_FrontID
		, &pRspUserLogin2Field_SessionID
		, &pRspUserLogin2Field_MaxOrderRef, &pRspUserLogin2Field_MaxOrderRef_len
		, &pRspUserLogin2Field_SHFETime, &pRspUserLogin2Field_SHFETime_len
		, &pRspUserLogin2Field_DCETime, &pRspUserLogin2Field_DCETime_len
		, &pRspUserLogin2Field_CZCETime, &pRspUserLogin2Field_CZCETime_len
		, &pRspUserLogin2Field_FFEXTime, &pRspUserLogin2Field_FFEXTime_len
		, &pRspUserLogin2Field_INETime, &pRspUserLogin2Field_INETime_len
		, &pRspUserLogin2Field_RandomString, &pRspUserLogin2Field_RandomString_len


    )) {
        return -1;
    }

	//TThostFtdcDateType char[9]
	if(pRspUserLogin2Field_TradingDay != NULL) {
		if(pRspUserLogin2Field_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
			PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
			return -1;
		}
		strncpy(self->data.TradingDay, pRspUserLogin2Field_TradingDay, sizeof(self->data.TradingDay) );
		pRspUserLogin2Field_TradingDay = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLogin2Field_LoginTime != NULL) {
		if(pRspUserLogin2Field_LoginTime_len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
			PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_LoginTime_len, (Py_ssize_t)sizeof(self->data.LoginTime));
			return -1;
		}
		strncpy(self->data.LoginTime, pRspUserLogin2Field_LoginTime, sizeof(self->data.LoginTime) );
		pRspUserLogin2Field_LoginTime = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pRspUserLogin2Field_BrokerID != NULL) {
		if(pRspUserLogin2Field_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pRspUserLogin2Field_BrokerID, sizeof(self->data.BrokerID) );
		pRspUserLogin2Field_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pRspUserLogin2Field_UserID != NULL) {
		if(pRspUserLogin2Field_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pRspUserLogin2Field_UserID, sizeof(self->data.UserID) );
		pRspUserLogin2Field_UserID = NULL;
	}

	//TThostFtdcSystemNameType char[41]
	if(pRspUserLogin2Field_SystemName != NULL) {
		if(pRspUserLogin2Field_SystemName_len > (Py_ssize_t)sizeof(self->data.SystemName)) {
			PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_SystemName_len, (Py_ssize_t)sizeof(self->data.SystemName));
			return -1;
		}
		strncpy(self->data.SystemName, pRspUserLogin2Field_SystemName, sizeof(self->data.SystemName) );
		pRspUserLogin2Field_SystemName = NULL;
	}

	//TThostFtdcFrontIDType int
	self->data.FrontID = pRspUserLogin2Field_FrontID;

	//TThostFtdcSessionIDType int
	self->data.SessionID = pRspUserLogin2Field_SessionID;

	//TThostFtdcOrderRefType char[13]
	if(pRspUserLogin2Field_MaxOrderRef != NULL) {
		if(pRspUserLogin2Field_MaxOrderRef_len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
			PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_MaxOrderRef_len, (Py_ssize_t)sizeof(self->data.MaxOrderRef));
			return -1;
		}
		strncpy(self->data.MaxOrderRef, pRspUserLogin2Field_MaxOrderRef, sizeof(self->data.MaxOrderRef) );
		pRspUserLogin2Field_MaxOrderRef = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLogin2Field_SHFETime != NULL) {
		if(pRspUserLogin2Field_SHFETime_len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
			PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_SHFETime_len, (Py_ssize_t)sizeof(self->data.SHFETime));
			return -1;
		}
		strncpy(self->data.SHFETime, pRspUserLogin2Field_SHFETime, sizeof(self->data.SHFETime) );
		pRspUserLogin2Field_SHFETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLogin2Field_DCETime != NULL) {
		if(pRspUserLogin2Field_DCETime_len > (Py_ssize_t)sizeof(self->data.DCETime)) {
			PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_DCETime_len, (Py_ssize_t)sizeof(self->data.DCETime));
			return -1;
		}
		strncpy(self->data.DCETime, pRspUserLogin2Field_DCETime, sizeof(self->data.DCETime) );
		pRspUserLogin2Field_DCETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLogin2Field_CZCETime != NULL) {
		if(pRspUserLogin2Field_CZCETime_len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
			PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_CZCETime_len, (Py_ssize_t)sizeof(self->data.CZCETime));
			return -1;
		}
		strncpy(self->data.CZCETime, pRspUserLogin2Field_CZCETime, sizeof(self->data.CZCETime) );
		pRspUserLogin2Field_CZCETime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLogin2Field_FFEXTime != NULL) {
		if(pRspUserLogin2Field_FFEXTime_len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
			PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_FFEXTime_len, (Py_ssize_t)sizeof(self->data.FFEXTime));
			return -1;
		}
		strncpy(self->data.FFEXTime, pRspUserLogin2Field_FFEXTime, sizeof(self->data.FFEXTime) );
		pRspUserLogin2Field_FFEXTime = NULL;
	}

	//TThostFtdcTimeType char[9]
	if(pRspUserLogin2Field_INETime != NULL) {
		if(pRspUserLogin2Field_INETime_len > (Py_ssize_t)sizeof(self->data.INETime)) {
			PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_INETime_len, (Py_ssize_t)sizeof(self->data.INETime));
			return -1;
		}
		strncpy(self->data.INETime, pRspUserLogin2Field_INETime, sizeof(self->data.INETime) );
		pRspUserLogin2Field_INETime = NULL;
	}

	//TThostFtdcRandomStringType char[17]
	if(pRspUserLogin2Field_RandomString != NULL) {
		if(pRspUserLogin2Field_RandomString_len > (Py_ssize_t)sizeof(self->data.RandomString)) {
			PyErr_Format(PyExc_ValueError, "RandomString too long: length=%zd (max allowed is %zd)", pRspUserLogin2Field_RandomString_len, (Py_ssize_t)sizeof(self->data.RandomString));
			return -1;
		}
		strncpy(self->data.RandomString, pRspUserLogin2Field_RandomString, sizeof(self->data.RandomString) );
		pRspUserLogin2Field_RandomString = NULL;
	}



    return 0;
}

static void PyCThostFtdcRspUserLogin2Field_dealloc(PyCThostFtdcRspUserLogin2Field *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_repr(PyCThostFtdcRspUserLogin2Field *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
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
		, "RandomString", self->data.RandomString 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspUserLogin2Field representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_TradingDay(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.TradingDay);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_LoginTime(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.LoginTime);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_BrokerID(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_UserID(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_SystemName(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.SystemName);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_FrontID(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FrontID);
#else 
	return PyInt_FromLong(self->data.FrontID);
#endif 
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_SessionID(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.SessionID);
#else 
	return PyInt_FromLong(self->data.SessionID);
#endif 
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_MaxOrderRef(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.MaxOrderRef);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_SHFETime(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.SHFETime);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_DCETime(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.DCETime);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_CZCETime(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.CZCETime);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_FFEXTime(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.FFEXTime);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_INETime(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.INETime);
}

static PyObject *PyCThostFtdcRspUserLogin2Field_get_RandomString(PyCThostFtdcRspUserLogin2Field *self, void *closure) {
	return PyBytes_FromString(self->data.RandomString);
}

static int PyCThostFtdcRspUserLogin2Field_set_TradingDay(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_LoginTime(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_BrokerID(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_UserID(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_SystemName(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_FrontID(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_SessionID(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_MaxOrderRef(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_SHFETime(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_DCETime(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_CZCETime(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_FFEXTime(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_INETime(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcRspUserLogin2Field_set_RandomString(PyCThostFtdcRspUserLogin2Field* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "RandomString Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.RandomString)) {
		PyErr_SetString(PyExc_ValueError, "RandomString must be less than 17 bytes");
		return -1;
	}
	strncpy(self->data.RandomString, buf, sizeof(self->data.RandomString));
	return 0;
}



static PyGetSetDef PyCThostFtdcRspUserLogin2Field_getset[] = {
	 {(char *)"TradingDay", (getter)PyCThostFtdcRspUserLogin2Field_get_TradingDay, (setter)PyCThostFtdcRspUserLogin2Field_set_TradingDay, (char *)"TradingDay", NULL},
	 {(char *)"LoginTime", (getter)PyCThostFtdcRspUserLogin2Field_get_LoginTime, (setter)PyCThostFtdcRspUserLogin2Field_set_LoginTime, (char *)"LoginTime", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcRspUserLogin2Field_get_BrokerID, (setter)PyCThostFtdcRspUserLogin2Field_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcRspUserLogin2Field_get_UserID, (setter)PyCThostFtdcRspUserLogin2Field_set_UserID, (char *)"UserID", NULL},
	 {(char *)"SystemName", (getter)PyCThostFtdcRspUserLogin2Field_get_SystemName, (setter)PyCThostFtdcRspUserLogin2Field_set_SystemName, (char *)"SystemName", NULL},
	 {(char *)"FrontID", (getter)PyCThostFtdcRspUserLogin2Field_get_FrontID, (setter)PyCThostFtdcRspUserLogin2Field_set_FrontID, (char *)"FrontID", NULL},
	 {(char *)"SessionID", (getter)PyCThostFtdcRspUserLogin2Field_get_SessionID, (setter)PyCThostFtdcRspUserLogin2Field_set_SessionID, (char *)"SessionID", NULL},
	 {(char *)"MaxOrderRef", (getter)PyCThostFtdcRspUserLogin2Field_get_MaxOrderRef, (setter)PyCThostFtdcRspUserLogin2Field_set_MaxOrderRef, (char *)"MaxOrderRef", NULL},
	 {(char *)"SHFETime", (getter)PyCThostFtdcRspUserLogin2Field_get_SHFETime, (setter)PyCThostFtdcRspUserLogin2Field_set_SHFETime, (char *)"SHFETime", NULL},
	 {(char *)"DCETime", (getter)PyCThostFtdcRspUserLogin2Field_get_DCETime, (setter)PyCThostFtdcRspUserLogin2Field_set_DCETime, (char *)"DCETime", NULL},
	 {(char *)"CZCETime", (getter)PyCThostFtdcRspUserLogin2Field_get_CZCETime, (setter)PyCThostFtdcRspUserLogin2Field_set_CZCETime, (char *)"CZCETime", NULL},
	 {(char *)"FFEXTime", (getter)PyCThostFtdcRspUserLogin2Field_get_FFEXTime, (setter)PyCThostFtdcRspUserLogin2Field_set_FFEXTime, (char *)"FFEXTime", NULL},
	 {(char *)"INETime", (getter)PyCThostFtdcRspUserLogin2Field_get_INETime, (setter)PyCThostFtdcRspUserLogin2Field_set_INETime, (char *)"INETime", NULL},
	 {(char *)"RandomString", (getter)PyCThostFtdcRspUserLogin2Field_get_RandomString, (setter)PyCThostFtdcRspUserLogin2Field_set_RandomString, (char *)"RandomString", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspUserLogin2FieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspUserLogin2Field",	/* tp_name */
	sizeof(PyCThostFtdcRspUserLogin2Field),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspUserLogin2Field_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspUserLogin2Field_repr,   /* tp_repr */
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
	"CThostFtdcRspUserLogin2Field",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspUserLogin2Field_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspUserLogin2Field_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspUserLogin2Field_new,       /* tp_new */
};

int PyCThostFtdcRspUserLogin2FieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspUserLogin2Field  */
	if (PyType_Ready(&PyCThostFtdcRspUserLogin2FieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspUserLogin2Field");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspUserLogin2FieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspUserLogin2Field", (PyObject *)&PyCThostFtdcRspUserLogin2FieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspUserLogin2Field to module");
        Py_DECREF(&PyCThostFtdcRspUserLogin2FieldType);
		return -1;
    }

    return 0;
}
