
#include "PyCThostFtdcSyncingInvestorField.h"



static PyObject *PyCThostFtdcSyncingInvestorField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingInvestorField *self = (PyCThostFtdcSyncingInvestorField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingInvestorField_init(PyCThostFtdcSyncingInvestorField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "InvestorGroupID", "InvestorName", "IdentifiedCardType", "IdentifiedCardNo", "IsActive", "Telephone", "Address", "OpenDate", "Mobile", "CommModelID", "MarginModelID", "IsOrderFreq", "IsOpenVolLimit",  NULL};

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInvestorField_InvestorID = NULL;
	Py_ssize_t pSyncingInvestorField_InvestorID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pSyncingInvestorField_BrokerID = NULL;
	Py_ssize_t pSyncingInvestorField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInvestorField_InvestorGroupID = NULL;
	Py_ssize_t pSyncingInvestorField_InvestorGroupID_len = 0;

	//TThostFtdcPartyNameType char[81]
	const char *pSyncingInvestorField_InvestorName = NULL;
	Py_ssize_t pSyncingInvestorField_InvestorName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pSyncingInvestorField_IdentifiedCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pSyncingInvestorField_IdentifiedCardNo = NULL;
	Py_ssize_t pSyncingInvestorField_IdentifiedCardNo_len = 0;

	//TThostFtdcBoolType int
	int pSyncingInvestorField_IsActive = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pSyncingInvestorField_Telephone = NULL;
	Py_ssize_t pSyncingInvestorField_Telephone_len = 0;

	//TThostFtdcAddressType char[101]
	const char *pSyncingInvestorField_Address = NULL;
	Py_ssize_t pSyncingInvestorField_Address_len = 0;

	//TThostFtdcDateType char[9]
	const char *pSyncingInvestorField_OpenDate = NULL;
	Py_ssize_t pSyncingInvestorField_OpenDate_len = 0;

	//TThostFtdcMobileType char[41]
	const char *pSyncingInvestorField_Mobile = NULL;
	Py_ssize_t pSyncingInvestorField_Mobile_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInvestorField_CommModelID = NULL;
	Py_ssize_t pSyncingInvestorField_CommModelID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pSyncingInvestorField_MarginModelID = NULL;
	Py_ssize_t pSyncingInvestorField_MarginModelID_len = 0;

	//TThostFtdcEnumBoolType char
	char pSyncingInvestorField_IsOrderFreq = 0;

	//TThostFtdcEnumBoolType char
	char pSyncingInvestorField_IsOpenVolLimit = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#iy#y#y#y#y#y#cc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cs#is#s#s#s#s#s#cc", (char **)kwlist
#endif

		, &pSyncingInvestorField_InvestorID, &pSyncingInvestorField_InvestorID_len
		, &pSyncingInvestorField_BrokerID, &pSyncingInvestorField_BrokerID_len
		, &pSyncingInvestorField_InvestorGroupID, &pSyncingInvestorField_InvestorGroupID_len
		, &pSyncingInvestorField_InvestorName, &pSyncingInvestorField_InvestorName_len
		, &pSyncingInvestorField_IdentifiedCardType
		, &pSyncingInvestorField_IdentifiedCardNo, &pSyncingInvestorField_IdentifiedCardNo_len
		, &pSyncingInvestorField_IsActive
		, &pSyncingInvestorField_Telephone, &pSyncingInvestorField_Telephone_len
		, &pSyncingInvestorField_Address, &pSyncingInvestorField_Address_len
		, &pSyncingInvestorField_OpenDate, &pSyncingInvestorField_OpenDate_len
		, &pSyncingInvestorField_Mobile, &pSyncingInvestorField_Mobile_len
		, &pSyncingInvestorField_CommModelID, &pSyncingInvestorField_CommModelID_len
		, &pSyncingInvestorField_MarginModelID, &pSyncingInvestorField_MarginModelID_len
		, &pSyncingInvestorField_IsOrderFreq
		, &pSyncingInvestorField_IsOpenVolLimit


    )) {
        return -1;
    }

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInvestorField_InvestorID != NULL) {
		if(pSyncingInvestorField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pSyncingInvestorField_InvestorID, sizeof(self->data.InvestorID) );
		pSyncingInvestorField_InvestorID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pSyncingInvestorField_BrokerID != NULL) {
		if(pSyncingInvestorField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pSyncingInvestorField_BrokerID, sizeof(self->data.BrokerID) );
		pSyncingInvestorField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInvestorField_InvestorGroupID != NULL) {
		if(pSyncingInvestorField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
			PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
			return -1;
		}
		strncpy(self->data.InvestorGroupID, pSyncingInvestorField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
		pSyncingInvestorField_InvestorGroupID = NULL;
	}

	//TThostFtdcPartyNameType char[81]
	if(pSyncingInvestorField_InvestorName != NULL) {
		if(pSyncingInvestorField_InvestorName_len > (Py_ssize_t)sizeof(self->data.InvestorName)) {
			PyErr_Format(PyExc_ValueError, "InvestorName too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_InvestorName_len, (Py_ssize_t)sizeof(self->data.InvestorName));
			return -1;
		}
		strncpy(self->data.InvestorName, pSyncingInvestorField_InvestorName, sizeof(self->data.InvestorName) );
		pSyncingInvestorField_InvestorName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdentifiedCardType = pSyncingInvestorField_IdentifiedCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pSyncingInvestorField_IdentifiedCardNo != NULL) {
		if(pSyncingInvestorField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pSyncingInvestorField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pSyncingInvestorField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pSyncingInvestorField_IsActive;

	//TThostFtdcTelephoneType char[41]
	if(pSyncingInvestorField_Telephone != NULL) {
		if(pSyncingInvestorField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pSyncingInvestorField_Telephone, sizeof(self->data.Telephone) );
		pSyncingInvestorField_Telephone = NULL;
	}

	//TThostFtdcAddressType char[101]
	if(pSyncingInvestorField_Address != NULL) {
		if(pSyncingInvestorField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pSyncingInvestorField_Address, sizeof(self->data.Address) );
		pSyncingInvestorField_Address = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pSyncingInvestorField_OpenDate != NULL) {
		if(pSyncingInvestorField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pSyncingInvestorField_OpenDate, sizeof(self->data.OpenDate) );
		pSyncingInvestorField_OpenDate = NULL;
	}

	//TThostFtdcMobileType char[41]
	if(pSyncingInvestorField_Mobile != NULL) {
		if(pSyncingInvestorField_Mobile_len > (Py_ssize_t)sizeof(self->data.Mobile)) {
			PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_Mobile_len, (Py_ssize_t)sizeof(self->data.Mobile));
			return -1;
		}
		strncpy(self->data.Mobile, pSyncingInvestorField_Mobile, sizeof(self->data.Mobile) );
		pSyncingInvestorField_Mobile = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInvestorField_CommModelID != NULL) {
		if(pSyncingInvestorField_CommModelID_len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
			PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_CommModelID_len, (Py_ssize_t)sizeof(self->data.CommModelID));
			return -1;
		}
		strncpy(self->data.CommModelID, pSyncingInvestorField_CommModelID, sizeof(self->data.CommModelID) );
		pSyncingInvestorField_CommModelID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pSyncingInvestorField_MarginModelID != NULL) {
		if(pSyncingInvestorField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
			PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", pSyncingInvestorField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
			return -1;
		}
		strncpy(self->data.MarginModelID, pSyncingInvestorField_MarginModelID, sizeof(self->data.MarginModelID) );
		pSyncingInvestorField_MarginModelID = NULL;
	}

	//TThostFtdcEnumBoolType char
	self->data.IsOrderFreq = pSyncingInvestorField_IsOrderFreq;

	//TThostFtdcEnumBoolType char
	self->data.IsOpenVolLimit = pSyncingInvestorField_IsOpenVolLimit;



    return 0;
}

static void PyCThostFtdcSyncingInvestorField_dealloc(PyCThostFtdcSyncingInvestorField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingInvestorField_repr(PyCThostFtdcSyncingInvestorField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:s,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:c,s:c}"
#endif

		, "InvestorID", self->data.InvestorID 
		, "BrokerID", self->data.BrokerID 
		, "InvestorGroupID", self->data.InvestorGroupID 
		, "InvestorName", self->data.InvestorName 
		, "IdentifiedCardType", self->data.IdentifiedCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "IsActive", self->data.IsActive
		, "Telephone", self->data.Telephone 
		, "Address", self->data.Address 
		, "OpenDate", self->data.OpenDate 
		, "Mobile", self->data.Mobile 
		, "CommModelID", self->data.CommModelID 
		, "MarginModelID", self->data.MarginModelID 
		, "IsOrderFreq", self->data.IsOrderFreq
		, "IsOpenVolLimit", self->data.IsOpenVolLimit


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingInvestorField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_InvestorID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_BrokerID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_InvestorGroupID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorGroupID);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_InvestorName(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorName);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_IdentifiedCardType(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdentifiedCardType), 1);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_IdentifiedCardNo(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_IsActive(PyCThostFtdcSyncingInvestorField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_Telephone(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_Address(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_OpenDate(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_Mobile(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.Mobile);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_CommModelID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.CommModelID);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_MarginModelID(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.MarginModelID);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_IsOrderFreq(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IsOrderFreq), 1);
}

static PyObject *PyCThostFtdcSyncingInvestorField_get_IsOpenVolLimit(PyCThostFtdcSyncingInvestorField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IsOpenVolLimit), 1);
}

static int PyCThostFtdcSyncingInvestorField_set_InvestorID(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_BrokerID(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcSyncingInvestorField_set_InvestorGroupID(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorGroupID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
		PyErr_SetString(PyExc_ValueError, "InvestorGroupID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.InvestorGroupID, buf, sizeof(self->data.InvestorGroupID));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_InvestorName(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "InvestorName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.InvestorName)) {
		PyErr_SetString(PyExc_ValueError, "InvestorName must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.InvestorName, buf, sizeof(self->data.InvestorName));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_IdentifiedCardType(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IdentifiedCardType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IdentifiedCardType)) {
		PyErr_SetString(PyExc_ValueError, "IdentifiedCardType must be less than 1 bytes");
		return -1;
	}
	self->data.IdentifiedCardType = *buf;
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_IdentifiedCardNo(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IdentifiedCardNo Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
		PyErr_SetString(PyExc_ValueError, "IdentifiedCardNo must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.IdentifiedCardNo, buf, sizeof(self->data.IdentifiedCardNo));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_IsActive(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int"); 
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
    self->data.IsActive = (int)buf; 
    return 0; 
}

static int PyCThostFtdcSyncingInvestorField_set_Telephone(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Telephone Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Telephone)) {
		PyErr_SetString(PyExc_ValueError, "Telephone must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Telephone, buf, sizeof(self->data.Telephone));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_Address(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Address Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Address)) {
		PyErr_SetString(PyExc_ValueError, "Address must be less than 101 bytes");
		return -1;
	}
	strncpy(self->data.Address, buf, sizeof(self->data.Address));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_OpenDate(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OpenDate Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
		PyErr_SetString(PyExc_ValueError, "OpenDate must be less than 9 bytes");
		return -1;
	}
	strncpy(self->data.OpenDate, buf, sizeof(self->data.OpenDate));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_Mobile(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "Mobile Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.Mobile)) {
		PyErr_SetString(PyExc_ValueError, "Mobile must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.Mobile, buf, sizeof(self->data.Mobile));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_CommModelID(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CommModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
		PyErr_SetString(PyExc_ValueError, "CommModelID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.CommModelID, buf, sizeof(self->data.CommModelID));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_MarginModelID(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "MarginModelID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
		PyErr_SetString(PyExc_ValueError, "MarginModelID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.MarginModelID, buf, sizeof(self->data.MarginModelID));
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_IsOrderFreq(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IsOrderFreq Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IsOrderFreq)) {
		PyErr_SetString(PyExc_ValueError, "IsOrderFreq must be less than 1 bytes");
		return -1;
	}
	self->data.IsOrderFreq = *buf;
	return 0;
}

static int PyCThostFtdcSyncingInvestorField_set_IsOpenVolLimit(PyCThostFtdcSyncingInvestorField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IsOpenVolLimit Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IsOpenVolLimit)) {
		PyErr_SetString(PyExc_ValueError, "IsOpenVolLimit must be less than 1 bytes");
		return -1;
	}
	self->data.IsOpenVolLimit = *buf;
	return 0;
}



static PyGetSetDef PyCThostFtdcSyncingInvestorField_getset[] = {
	 {(char *)"InvestorID", (getter)PyCThostFtdcSyncingInvestorField_get_InvestorID, (setter)PyCThostFtdcSyncingInvestorField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcSyncingInvestorField_get_BrokerID, (setter)PyCThostFtdcSyncingInvestorField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorGroupID", (getter)PyCThostFtdcSyncingInvestorField_get_InvestorGroupID, (setter)PyCThostFtdcSyncingInvestorField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
	 {(char *)"InvestorName", (getter)PyCThostFtdcSyncingInvestorField_get_InvestorName, (setter)PyCThostFtdcSyncingInvestorField_set_InvestorName, (char *)"InvestorName", NULL},
	 {(char *)"IdentifiedCardType", (getter)PyCThostFtdcSyncingInvestorField_get_IdentifiedCardType, (setter)PyCThostFtdcSyncingInvestorField_set_IdentifiedCardType, (char *)"IdentifiedCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcSyncingInvestorField_get_IdentifiedCardNo, (setter)PyCThostFtdcSyncingInvestorField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcSyncingInvestorField_get_IsActive, (setter)PyCThostFtdcSyncingInvestorField_set_IsActive, (char *)"IsActive", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcSyncingInvestorField_get_Telephone, (setter)PyCThostFtdcSyncingInvestorField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcSyncingInvestorField_get_Address, (setter)PyCThostFtdcSyncingInvestorField_set_Address, (char *)"Address", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcSyncingInvestorField_get_OpenDate, (setter)PyCThostFtdcSyncingInvestorField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"Mobile", (getter)PyCThostFtdcSyncingInvestorField_get_Mobile, (setter)PyCThostFtdcSyncingInvestorField_set_Mobile, (char *)"Mobile", NULL},
	 {(char *)"CommModelID", (getter)PyCThostFtdcSyncingInvestorField_get_CommModelID, (setter)PyCThostFtdcSyncingInvestorField_set_CommModelID, (char *)"CommModelID", NULL},
	 {(char *)"MarginModelID", (getter)PyCThostFtdcSyncingInvestorField_get_MarginModelID, (setter)PyCThostFtdcSyncingInvestorField_set_MarginModelID, (char *)"MarginModelID", NULL},
	 {(char *)"IsOrderFreq", (getter)PyCThostFtdcSyncingInvestorField_get_IsOrderFreq, (setter)PyCThostFtdcSyncingInvestorField_set_IsOrderFreq, (char *)"IsOrderFreq", NULL},
	 {(char *)"IsOpenVolLimit", (getter)PyCThostFtdcSyncingInvestorField_get_IsOpenVolLimit, (setter)PyCThostFtdcSyncingInvestorField_set_IsOpenVolLimit, (char *)"IsOpenVolLimit", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingInvestorFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingInvestorField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingInvestorField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingInvestorField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingInvestorField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingInvestorField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingInvestorField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingInvestorField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingInvestorField_new,       /* tp_new */
};

int PyCThostFtdcSyncingInvestorFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingInvestorField  */
	if (PyType_Ready(&PyCThostFtdcSyncingInvestorFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingInvestorField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingInvestorFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingInvestorField", (PyObject *)&PyCThostFtdcSyncingInvestorFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingInvestorField to module");
        Py_DECREF(&PyCThostFtdcSyncingInvestorFieldType);
		return -1;
    }

    return 0;
}
