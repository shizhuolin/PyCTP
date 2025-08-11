
#include "PyCThostFtdcIpAddrParamField.h"



static PyObject *PyCThostFtdcIpAddrParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcIpAddrParamField *self = (PyCThostFtdcIpAddrParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcIpAddrParamField_init(PyCThostFtdcIpAddrParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "Address", "DRIdentityID", "DRIdentityName", "AddrSrvMode", "AddrVer", "AddrNo", "AddrName", "IsSM", "IsLocalAddr", "Remark", "Site", "NetOperator",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pIpAddrParamField_BrokerID = NULL;
	Py_ssize_t pIpAddrParamField_BrokerID_len = 0;

	//TThostFtdcIpAddrType char[129]
	const char *pIpAddrParamField_Address = NULL;
	Py_ssize_t pIpAddrParamField_Address_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pIpAddrParamField_DRIdentityID = 0;

	//TThostFtdcDRIdentityNameType char[65]
	const char *pIpAddrParamField_DRIdentityName = NULL;
	Py_ssize_t pIpAddrParamField_DRIdentityName_len = 0;

	//TThostFtdcAddrSrvModeType char
	char pIpAddrParamField_AddrSrvMode = 0;

	//TThostFtdcAddrVerType char
	char pIpAddrParamField_AddrVer = 0;

	//TThostFtdcCommonIntType int
	int pIpAddrParamField_AddrNo = 0;

	//TThostFtdcAddrNameType char[65]
	const char *pIpAddrParamField_AddrName = NULL;
	Py_ssize_t pIpAddrParamField_AddrName_len = 0;

	//TThostFtdcBoolType int
	int pIpAddrParamField_IsSM = 0;

	//TThostFtdcBoolType int
	int pIpAddrParamField_IsLocalAddr = 0;

	//TThostFtdcAddrRemarkType char[161]
	const char *pIpAddrParamField_Remark = NULL;
	Py_ssize_t pIpAddrParamField_Remark_len = 0;

	//TThostFtdcSiteType char[51]
	const char *pIpAddrParamField_Site = NULL;
	Py_ssize_t pIpAddrParamField_Site_len = 0;

	//TThostFtdcNetOperatorType char[9]
	const char *pIpAddrParamField_NetOperator = NULL;
	Py_ssize_t pIpAddrParamField_NetOperator_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#cciy#iiy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#ccis#iis#s#s#", (char **)kwlist
#endif

		, &pIpAddrParamField_BrokerID, &pIpAddrParamField_BrokerID_len
		, &pIpAddrParamField_Address, &pIpAddrParamField_Address_len
		, &pIpAddrParamField_DRIdentityID
		, &pIpAddrParamField_DRIdentityName, &pIpAddrParamField_DRIdentityName_len
		, &pIpAddrParamField_AddrSrvMode
		, &pIpAddrParamField_AddrVer
		, &pIpAddrParamField_AddrNo
		, &pIpAddrParamField_AddrName, &pIpAddrParamField_AddrName_len
		, &pIpAddrParamField_IsSM
		, &pIpAddrParamField_IsLocalAddr
		, &pIpAddrParamField_Remark, &pIpAddrParamField_Remark_len
		, &pIpAddrParamField_Site, &pIpAddrParamField_Site_len
		, &pIpAddrParamField_NetOperator, &pIpAddrParamField_NetOperator_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pIpAddrParamField_BrokerID != NULL) {
		if(pIpAddrParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pIpAddrParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pIpAddrParamField_BrokerID, sizeof(self->data.BrokerID) );
		pIpAddrParamField_BrokerID = NULL;
	}

	//TThostFtdcIpAddrType char[129]
	if(pIpAddrParamField_Address != NULL) {
		if(pIpAddrParamField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pIpAddrParamField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pIpAddrParamField_Address, sizeof(self->data.Address) );
		pIpAddrParamField_Address = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.DRIdentityID = pIpAddrParamField_DRIdentityID;

	//TThostFtdcDRIdentityNameType char[65]
	if(pIpAddrParamField_DRIdentityName != NULL) {
		if(pIpAddrParamField_DRIdentityName_len > (Py_ssize_t)sizeof(self->data.DRIdentityName)) {
			PyErr_Format(PyExc_ValueError, "DRIdentityName too long: length=%zd (max allowed is %zd)", pIpAddrParamField_DRIdentityName_len, (Py_ssize_t)sizeof(self->data.DRIdentityName));
			return -1;
		}
		strncpy(self->data.DRIdentityName, pIpAddrParamField_DRIdentityName, sizeof(self->data.DRIdentityName) );
		pIpAddrParamField_DRIdentityName = NULL;
	}

	//TThostFtdcAddrSrvModeType char
	self->data.AddrSrvMode = pIpAddrParamField_AddrSrvMode;

	//TThostFtdcAddrVerType char
	self->data.AddrVer = pIpAddrParamField_AddrVer;

	//TThostFtdcCommonIntType int
	self->data.AddrNo = pIpAddrParamField_AddrNo;

	//TThostFtdcAddrNameType char[65]
	if(pIpAddrParamField_AddrName != NULL) {
		if(pIpAddrParamField_AddrName_len > (Py_ssize_t)sizeof(self->data.AddrName)) {
			PyErr_Format(PyExc_ValueError, "AddrName too long: length=%zd (max allowed is %zd)", pIpAddrParamField_AddrName_len, (Py_ssize_t)sizeof(self->data.AddrName));
			return -1;
		}
		strncpy(self->data.AddrName, pIpAddrParamField_AddrName, sizeof(self->data.AddrName) );
		pIpAddrParamField_AddrName = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsSM = pIpAddrParamField_IsSM;

	//TThostFtdcBoolType int
	self->data.IsLocalAddr = pIpAddrParamField_IsLocalAddr;

	//TThostFtdcAddrRemarkType char[161]
	if(pIpAddrParamField_Remark != NULL) {
		if(pIpAddrParamField_Remark_len > (Py_ssize_t)sizeof(self->data.Remark)) {
			PyErr_Format(PyExc_ValueError, "Remark too long: length=%zd (max allowed is %zd)", pIpAddrParamField_Remark_len, (Py_ssize_t)sizeof(self->data.Remark));
			return -1;
		}
		strncpy(self->data.Remark, pIpAddrParamField_Remark, sizeof(self->data.Remark) );
		pIpAddrParamField_Remark = NULL;
	}

	//TThostFtdcSiteType char[51]
	if(pIpAddrParamField_Site != NULL) {
		if(pIpAddrParamField_Site_len > (Py_ssize_t)sizeof(self->data.Site)) {
			PyErr_Format(PyExc_ValueError, "Site too long: length=%zd (max allowed is %zd)", pIpAddrParamField_Site_len, (Py_ssize_t)sizeof(self->data.Site));
			return -1;
		}
		strncpy(self->data.Site, pIpAddrParamField_Site, sizeof(self->data.Site) );
		pIpAddrParamField_Site = NULL;
	}

	//TThostFtdcNetOperatorType char[9]
	if(pIpAddrParamField_NetOperator != NULL) {
		if(pIpAddrParamField_NetOperator_len > (Py_ssize_t)sizeof(self->data.NetOperator)) {
			PyErr_Format(PyExc_ValueError, "NetOperator too long: length=%zd (max allowed is %zd)", pIpAddrParamField_NetOperator_len, (Py_ssize_t)sizeof(self->data.NetOperator));
			return -1;
		}
		strncpy(self->data.NetOperator, pIpAddrParamField_NetOperator, sizeof(self->data.NetOperator) );
		pIpAddrParamField_NetOperator = NULL;
	}



    return 0;
}

static void PyCThostFtdcIpAddrParamField_dealloc(PyCThostFtdcIpAddrParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcIpAddrParamField_repr(PyCThostFtdcIpAddrParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:c,s:c,s:i,s:y,s:i,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:c,s:c,s:i,s:s,s:i,s:i,s:s,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcIpAddrParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_BrokerID(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_Address(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_DRIdentityID(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.DRIdentityID);
#else 
	return PyInt_FromLong(self->data.DRIdentityID);
#endif 
}

static PyObject *PyCThostFtdcIpAddrParamField_get_DRIdentityName(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.DRIdentityName);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_AddrSrvMode(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AddrSrvMode), 1);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_AddrVer(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.AddrVer), 1);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_AddrNo(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.AddrNo);
#else 
	return PyInt_FromLong(self->data.AddrNo);
#endif 
}

static PyObject *PyCThostFtdcIpAddrParamField_get_AddrName(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.AddrName);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_IsSM(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsSM);
#else 
	return PyInt_FromLong(self->data.IsSM);
#endif 
}

static PyObject *PyCThostFtdcIpAddrParamField_get_IsLocalAddr(PyCThostFtdcIpAddrParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsLocalAddr);
#else 
	return PyInt_FromLong(self->data.IsLocalAddr);
#endif 
}

static PyObject *PyCThostFtdcIpAddrParamField_get_Remark(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Remark);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_Site(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.Site);
}

static PyObject *PyCThostFtdcIpAddrParamField_get_NetOperator(PyCThostFtdcIpAddrParamField *self, void *closure) {
	return PyBytes_FromString(self->data.NetOperator);
}

static int PyCThostFtdcIpAddrParamField_set_BrokerID(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_Address(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_DRIdentityID(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_DRIdentityName(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_AddrSrvMode(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_AddrVer(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_AddrNo(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_AddrName(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_IsSM(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_IsLocalAddr(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_Remark(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_Site(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcIpAddrParamField_set_NetOperator(PyCThostFtdcIpAddrParamField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcIpAddrParamField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcIpAddrParamField_get_BrokerID, (setter)PyCThostFtdcIpAddrParamField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcIpAddrParamField_get_Address, (setter)PyCThostFtdcIpAddrParamField_set_Address, (char *)"Address", NULL},
	 {(char *)"DRIdentityID", (getter)PyCThostFtdcIpAddrParamField_get_DRIdentityID, (setter)PyCThostFtdcIpAddrParamField_set_DRIdentityID, (char *)"DRIdentityID", NULL},
	 {(char *)"DRIdentityName", (getter)PyCThostFtdcIpAddrParamField_get_DRIdentityName, (setter)PyCThostFtdcIpAddrParamField_set_DRIdentityName, (char *)"DRIdentityName", NULL},
	 {(char *)"AddrSrvMode", (getter)PyCThostFtdcIpAddrParamField_get_AddrSrvMode, (setter)PyCThostFtdcIpAddrParamField_set_AddrSrvMode, (char *)"AddrSrvMode", NULL},
	 {(char *)"AddrVer", (getter)PyCThostFtdcIpAddrParamField_get_AddrVer, (setter)PyCThostFtdcIpAddrParamField_set_AddrVer, (char *)"AddrVer", NULL},
	 {(char *)"AddrNo", (getter)PyCThostFtdcIpAddrParamField_get_AddrNo, (setter)PyCThostFtdcIpAddrParamField_set_AddrNo, (char *)"AddrNo", NULL},
	 {(char *)"AddrName", (getter)PyCThostFtdcIpAddrParamField_get_AddrName, (setter)PyCThostFtdcIpAddrParamField_set_AddrName, (char *)"AddrName", NULL},
	 {(char *)"IsSM", (getter)PyCThostFtdcIpAddrParamField_get_IsSM, (setter)PyCThostFtdcIpAddrParamField_set_IsSM, (char *)"IsSM", NULL},
	 {(char *)"IsLocalAddr", (getter)PyCThostFtdcIpAddrParamField_get_IsLocalAddr, (setter)PyCThostFtdcIpAddrParamField_set_IsLocalAddr, (char *)"IsLocalAddr", NULL},
	 {(char *)"Remark", (getter)PyCThostFtdcIpAddrParamField_get_Remark, (setter)PyCThostFtdcIpAddrParamField_set_Remark, (char *)"Remark", NULL},
	 {(char *)"Site", (getter)PyCThostFtdcIpAddrParamField_get_Site, (setter)PyCThostFtdcIpAddrParamField_set_Site, (char *)"Site", NULL},
	 {(char *)"NetOperator", (getter)PyCThostFtdcIpAddrParamField_get_NetOperator, (setter)PyCThostFtdcIpAddrParamField_set_NetOperator, (char *)"NetOperator", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcIpAddrParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcIpAddrParamField",	/* tp_name */
	sizeof(PyCThostFtdcIpAddrParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcIpAddrParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcIpAddrParamField_repr,   /* tp_repr */
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
	"CThostFtdcIpAddrParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcIpAddrParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcIpAddrParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcIpAddrParamField_new,       /* tp_new */
};

int PyCThostFtdcIpAddrParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcIpAddrParamField  */
	if (PyType_Ready(&PyCThostFtdcIpAddrParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcIpAddrParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcIpAddrParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcIpAddrParamField", (PyObject *)&PyCThostFtdcIpAddrParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcIpAddrParamField to module");
        Py_DECREF(&PyCThostFtdcIpAddrParamFieldType);
		return -1;
    }

    return 0;
}
