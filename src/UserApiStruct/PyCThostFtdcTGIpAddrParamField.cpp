
#include "PyCThostFtdcTGIpAddrParamField.h"



static PyObject *PyCThostFtdcTGIpAddrParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTGIpAddrParamField *self = (PyCThostFtdcTGIpAddrParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTGIpAddrParamField_init(PyCThostFtdcTGIpAddrParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "Address", "DRIdentityID", "DRIdentityName", "AddrSrvMode", "AddrVer", "AddrNo", "AddrName", "IsSM", "IsLocalAddr", "Remark", "Site", "NetOperator",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTGIpAddrParamField_BrokerID = NULL;
	Py_ssize_t pTGIpAddrParamField_BrokerID_len = 0;

	//TThostFtdcUserIDType char[16]
	const char *pTGIpAddrParamField_UserID = NULL;
	Py_ssize_t pTGIpAddrParamField_UserID_len = 0;

	//TThostFtdcIpAddrType char[129]
	const char *pTGIpAddrParamField_Address = NULL;
	Py_ssize_t pTGIpAddrParamField_Address_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pTGIpAddrParamField_DRIdentityID = 0;

	//TThostFtdcDRIdentityNameType char[65]
	const char *pTGIpAddrParamField_DRIdentityName = NULL;
	Py_ssize_t pTGIpAddrParamField_DRIdentityName_len = 0;

	//TThostFtdcAddrSrvModeType char
	char pTGIpAddrParamField_AddrSrvMode = 0;

	//TThostFtdcAddrVerType char
	char pTGIpAddrParamField_AddrVer = 0;

	//TThostFtdcCommonIntType int
	int pTGIpAddrParamField_AddrNo = 0;

	//TThostFtdcAddrNameType char[65]
	const char *pTGIpAddrParamField_AddrName = NULL;
	Py_ssize_t pTGIpAddrParamField_AddrName_len = 0;

	//TThostFtdcBoolType int
	int pTGIpAddrParamField_IsSM = 0;

	//TThostFtdcBoolType int
	int pTGIpAddrParamField_IsLocalAddr = 0;

	//TThostFtdcAddrRemarkType char[161]
	const char *pTGIpAddrParamField_Remark = NULL;
	Py_ssize_t pTGIpAddrParamField_Remark_len = 0;

	//TThostFtdcSiteType char[51]
	const char *pTGIpAddrParamField_Site = NULL;
	Py_ssize_t pTGIpAddrParamField_Site_len = 0;

	//TThostFtdcNetOperatorType char[9]
	const char *pTGIpAddrParamField_NetOperator = NULL;
	Py_ssize_t pTGIpAddrParamField_NetOperator_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#cciy#iiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#ccis#iis#s#s#", (char **)kwlist
#endif

		, &pTGIpAddrParamField_BrokerID, &pTGIpAddrParamField_BrokerID_len
		, &pTGIpAddrParamField_UserID, &pTGIpAddrParamField_UserID_len
		, &pTGIpAddrParamField_Address, &pTGIpAddrParamField_Address_len
		, &pTGIpAddrParamField_DRIdentityID
		, &pTGIpAddrParamField_DRIdentityName, &pTGIpAddrParamField_DRIdentityName_len
		, &pTGIpAddrParamField_AddrSrvMode
		, &pTGIpAddrParamField_AddrVer
		, &pTGIpAddrParamField_AddrNo
		, &pTGIpAddrParamField_AddrName, &pTGIpAddrParamField_AddrName_len
		, &pTGIpAddrParamField_IsSM
		, &pTGIpAddrParamField_IsLocalAddr
		, &pTGIpAddrParamField_Remark, &pTGIpAddrParamField_Remark_len
		, &pTGIpAddrParamField_Site, &pTGIpAddrParamField_Site_len
		, &pTGIpAddrParamField_NetOperator, &pTGIpAddrParamField_NetOperator_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTGIpAddrParamField_BrokerID != NULL) {
		if(pTGIpAddrParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTGIpAddrParamField_BrokerID, sizeof(self->data.BrokerID) );
		pTGIpAddrParamField_BrokerID = NULL;
	}

	//TThostFtdcUserIDType char[16]
	if(pTGIpAddrParamField_UserID != NULL) {
		if(pTGIpAddrParamField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
			PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
			return -1;
		}
		strncpy(self->data.UserID, pTGIpAddrParamField_UserID, sizeof(self->data.UserID) );
		pTGIpAddrParamField_UserID = NULL;
	}

	//TThostFtdcIpAddrType char[129]
	if(pTGIpAddrParamField_Address != NULL) {
		if(pTGIpAddrParamField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pTGIpAddrParamField_Address, sizeof(self->data.Address) );
		pTGIpAddrParamField_Address = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pTGIpAddrParamField_DRIdentityID;

	//TThostFtdcDRIdentityNameType char[65]
	if(pTGIpAddrParamField_DRIdentityName != NULL) {
		if(pTGIpAddrParamField_DRIdentityName_len > (Py_ssize_t)sizeof(self->data.DRIdentityName)) {
			PyErr_Format(PyExc_ValueError, "DRIdentityName too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_DRIdentityName_len, (Py_ssize_t)sizeof(self->data.DRIdentityName));
			return -1;
		}
		strncpy(self->data.DRIdentityName, pTGIpAddrParamField_DRIdentityName, sizeof(self->data.DRIdentityName) );
		pTGIpAddrParamField_DRIdentityName = NULL;
	}

	//TThostFtdcAddrSrvModeType char
	self->data.AddrSrvMode = pTGIpAddrParamField_AddrSrvMode;

	//TThostFtdcAddrVerType char
	self->data.AddrVer = pTGIpAddrParamField_AddrVer;

	//TThostFtdcCommonIntType int
	self->data.AddrNo = pTGIpAddrParamField_AddrNo;

	//TThostFtdcAddrNameType char[65]
	if(pTGIpAddrParamField_AddrName != NULL) {
		if(pTGIpAddrParamField_AddrName_len > (Py_ssize_t)sizeof(self->data.AddrName)) {
			PyErr_Format(PyExc_ValueError, "AddrName too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_AddrName_len, (Py_ssize_t)sizeof(self->data.AddrName));
			return -1;
		}
		strncpy(self->data.AddrName, pTGIpAddrParamField_AddrName, sizeof(self->data.AddrName) );
		pTGIpAddrParamField_AddrName = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSM = pTGIpAddrParamField_IsSM;

	//TThostFtdcBoolType int
	self->data.IsLocalAddr = pTGIpAddrParamField_IsLocalAddr;

	//TThostFtdcAddrRemarkType char[161]
	if(pTGIpAddrParamField_Remark != NULL) {
		if(pTGIpAddrParamField_Remark_len > (Py_ssize_t)sizeof(self->data.Remark)) {
			PyErr_Format(PyExc_ValueError, "Remark too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_Remark_len, (Py_ssize_t)sizeof(self->data.Remark));
			return -1;
		}
		strncpy(self->data.Remark, pTGIpAddrParamField_Remark, sizeof(self->data.Remark) );
		pTGIpAddrParamField_Remark = NULL;
	}

	//TThostFtdcSiteType char[51]
	if(pTGIpAddrParamField_Site != NULL) {
		if(pTGIpAddrParamField_Site_len > (Py_ssize_t)sizeof(self->data.Site)) {
			PyErr_Format(PyExc_ValueError, "Site too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_Site_len, (Py_ssize_t)sizeof(self->data.Site));
			return -1;
		}
		strncpy(self->data.Site, pTGIpAddrParamField_Site, sizeof(self->data.Site) );
		pTGIpAddrParamField_Site = NULL;
	}

	//TThostFtdcNetOperatorType char[9]
	if(pTGIpAddrParamField_NetOperator != NULL) {
		if(pTGIpAddrParamField_NetOperator_len > (Py_ssize_t)sizeof(self->data.NetOperator)) {
			PyErr_Format(PyExc_ValueError, "NetOperator too long: length=%zd (max allowed is %zd)", pTGIpAddrParamField_NetOperator_len, (Py_ssize_t)sizeof(self->data.NetOperator));
			return -1;
		}
		strncpy(self->data.NetOperator, pTGIpAddrParamField_NetOperator, sizeof(self->data.NetOperator) );
		pTGIpAddrParamField_NetOperator = NULL;
	}



    return 0;
}

static void PyCThostFtdcTGIpAddrParamField_dealloc(PyCThostFtdcTGIpAddrParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_repr(PyCThostFtdcTGIpAddrParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y,s:c,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s,s:c,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "UserID", self->data.UserID 
		, "Address", self->data.Address 
		, "DRIdentityID", self->data.DRIdentityID
		, "DRIdentityName", self->data.DRIdentityName 
		, "AddrSrvMode", self->data.AddrSrvMode
		, "AddrVer", self->data.AddrVer
		, "AddrNo", self->data.AddrNo
		, "AddrName", self->data.AddrName 
		, "IsSM", self->data.IsSM
		, "IsLocalAddr", self->data.IsLocalAddr
		, "Remark", self->data.Remark 
		, "Site", self->data.Site 
		, "NetOperator", self->data.NetOperator 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTGIpAddrParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_BrokerID(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_UserID(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.UserID);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_Address(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_DRIdentityID(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_DRIdentityName(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.DRIdentityName);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrSrvMode(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AddrSrvMode), 1);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrVer(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AddrVer), 1);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrNo(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AddrNo);
#else 
	return PyInt_FromLong(self->data.AddrNo);
#endif 
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_AddrName(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.AddrName);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_IsSM(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSM);
#else 
	return PyInt_FromLong(self->data.IsSM);
#endif 
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_IsLocalAddr(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsLocalAddr);
#else 
	return PyInt_FromLong(self->data.IsLocalAddr);
#endif 
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_Remark(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Remark);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_Site(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Site);
}

static PyObject *PyCThostFtdcTGIpAddrParamField_get_NetOperator(PyCThostFtdcTGIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.NetOperator);
}

static int PyCThostFtdcTGIpAddrParamField_set_BrokerID(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTGIpAddrParamField_set_UserID(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTGIpAddrParamField_set_Address(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Address)) {
		PyErr_SetString(PyExc_ValueError, "Address must be less than 129 bytes");
		return -1;
	}
	strncpy(self->data.Address, buf, sizeof(self->data.Address));
	return 0;
}

static int PyCThostFtdcTGIpAddrParamField_set_DRIdentityID(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "DRIdentityID Expected int"); 
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
    self->data.DRIdentityID = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTGIpAddrParamField_set_DRIdentityName(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "DRIdentityName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.DRIdentityName)) {
		PyErr_SetString(PyExc_ValueError, "DRIdentityName must be less than 65 bytes");
		return -1;
	}
	strncpy(self->data.DRIdentityName, buf, sizeof(self->data.DRIdentityName));
	return 0;
}

static int PyCThostFtdcTGIpAddrParamField_set_AddrSrvMode(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AddrSrvMode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AddrSrvMode)) {
		PyErr_SetString(PyExc_ValueError, "AddrSrvMode must be less than 1 bytes");
		return -1;
	}
	self->data.AddrSrvMode = *buf;
	return 0;
}

static int PyCThostFtdcTGIpAddrParamField_set_AddrVer(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AddrVer Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AddrVer)) {
		PyErr_SetString(PyExc_ValueError, "AddrVer must be less than 1 bytes");
		return -1;
	}
	self->data.AddrVer = *buf;
	return 0;
}

static int PyCThostFtdcTGIpAddrParamField_set_AddrNo(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AddrNo Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "AddrNo Expected int"); 
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
    self->data.AddrNo = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTGIpAddrParamField_set_AddrName(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AddrName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AddrName)) {
		PyErr_SetString(PyExc_ValueError, "AddrName must be less than 65 bytes");
		return -1;
	}
	strncpy(self->data.AddrName, buf, sizeof(self->data.AddrName));
	return 0;
}

static int PyCThostFtdcTGIpAddrParamField_set_IsSM(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsSM Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsSM Expected int"); 
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
    self->data.IsSM = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTGIpAddrParamField_set_IsLocalAddr(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsLocalAddr Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsLocalAddr Expected int"); 
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
    self->data.IsLocalAddr = (int)buf; 
    return 0; 
}

static int PyCThostFtdcTGIpAddrParamField_set_Remark(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Remark Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Remark)) {
		PyErr_SetString(PyExc_ValueError, "Remark must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.Remark, buf, sizeof(self->data.Remark));
	return 0;
}

static int PyCThostFtdcTGIpAddrParamField_set_Site(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Site Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Site)) {
		PyErr_SetString(PyExc_ValueError, "Site must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.Site, buf, sizeof(self->data.Site));
	return 0;
}

static int PyCThostFtdcTGIpAddrParamField_set_NetOperator(PyCThostFtdcTGIpAddrParamField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NetOperator Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NetOperator)) {
		PyErr_SetString(PyExc_ValueError, "NetOperator must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.NetOperator, buf, sizeof(self->data.NetOperator));
	return 0;
}



static PyGetSetDef PyCThostFtdcTGIpAddrParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTGIpAddrParamField_get_BrokerID, (setter)PyCThostFtdcTGIpAddrParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"UserID", (getter)PyCThostFtdcTGIpAddrParamField_get_UserID, (setter)PyCThostFtdcTGIpAddrParamField_set_UserID, (char *)"UserID", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcTGIpAddrParamField_get_Address, (setter)PyCThostFtdcTGIpAddrParamField_set_Address, (char *)"Address", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcTGIpAddrParamField_get_DRIdentityID, (setter)PyCThostFtdcTGIpAddrParamField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"DRIdentityName", (getter)PyCThostFtdcTGIpAddrParamField_get_DRIdentityName, (setter)PyCThostFtdcTGIpAddrParamField_set_DRIdentityName, (char *)"DRIdentityName", NULL},
	 {(char *)"AddrSrvMode", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrSrvMode, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrSrvMode, (char *)"AddrSrvMode", NULL},
	 {(char *)"AddrVer", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrVer, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrVer, (char *)"AddrVer", NULL},
	 {(char *)"AddrNo", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrNo, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrNo, (char *)"AddrNo", NULL},
	 {(char *)"AddrName", (getter)PyCThostFtdcTGIpAddrParamField_get_AddrName, (setter)PyCThostFtdcTGIpAddrParamField_set_AddrName, (char *)"AddrName", NULL},
	 {(char *)"IsSM", (getter)PyCThostFtdcTGIpAddrParamField_get_IsSM, (setter)PyCThostFtdcTGIpAddrParamField_set_IsSM, (char *)"IsSM", NULL},
	 {(char *)"IsLocalAddr", (getter)PyCThostFtdcTGIpAddrParamField_get_IsLocalAddr, (setter)PyCThostFtdcTGIpAddrParamField_set_IsLocalAddr, (char *)"IsLocalAddr", NULL},
	 {(char *)"Remark", (getter)PyCThostFtdcTGIpAddrParamField_get_Remark, (setter)PyCThostFtdcTGIpAddrParamField_set_Remark, (char *)"Remark", NULL},
	 {(char *)"Site", (getter)PyCThostFtdcTGIpAddrParamField_get_Site, (setter)PyCThostFtdcTGIpAddrParamField_set_Site, (char *)"Site", NULL},
	 {(char *)"NetOperator", (getter)PyCThostFtdcTGIpAddrParamField_get_NetOperator, (setter)PyCThostFtdcTGIpAddrParamField_set_NetOperator, (char *)"NetOperator", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTGIpAddrParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTGIpAddrParamField",	/* tp_name */
	sizeof(PyCThostFtdcTGIpAddrParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTGIpAddrParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTGIpAddrParamField_repr,   /* tp_repr */
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
	"CThostFtdcTGIpAddrParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTGIpAddrParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTGIpAddrParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTGIpAddrParamField_new,       /* tp_new */
};

int PyCThostFtdcTGIpAddrParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTGIpAddrParamField  */
	if (PyType_Ready(&PyCThostFtdcTGIpAddrParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTGIpAddrParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTGIpAddrParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTGIpAddrParamField", (PyObject *)&PyCThostFtdcTGIpAddrParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTGIpAddrParamField to module");
        Py_DECREF(&PyCThostFtdcTGIpAddrParamFieldType);
		return -1;
    }

    return 0;
}
