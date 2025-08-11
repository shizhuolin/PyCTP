
#include "PyCThostFtdcInvestorField.h"



static PyObject *PyCThostFtdcInvestorField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcInvestorField *self = (PyCThostFtdcInvestorField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcInvestorField_init(PyCThostFtdcInvestorField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "InvestorGroupID", "InvestorName", "IdentifiedCardType", "IdentifiedCardNo", "IsActive", "Telephone", "Address", "OpenDate", "Mobile", "CommModelID", "MarginModelID", "IsOrderFreq", "IsOpenVolLimit",  NULL};

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorField_InvestorID = NULL;
	Py_ssize_t pInvestorField_InvestorID_len = 0;

	//TThostFtdcBrokerIDType char[11]
	const char *pInvestorField_BrokerID = NULL;
	Py_ssize_t pInvestorField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorField_InvestorGroupID = NULL;
	Py_ssize_t pInvestorField_InvestorGroupID_len = 0;

	//TThostFtdcPartyNameType char[81]
	const char *pInvestorField_InvestorName = NULL;
	Py_ssize_t pInvestorField_InvestorName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pInvestorField_IdentifiedCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pInvestorField_IdentifiedCardNo = NULL;
	Py_ssize_t pInvestorField_IdentifiedCardNo_len = 0;

	//TThostFtdcBoolType int
	int pInvestorField_IsActive = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pInvestorField_Telephone = NULL;
	Py_ssize_t pInvestorField_Telephone_len = 0;

	//TThostFtdcAddressType char[101]
	const char *pInvestorField_Address = NULL;
	Py_ssize_t pInvestorField_Address_len = 0;

	//TThostFtdcDateType char[9]
	const char *pInvestorField_OpenDate = NULL;
	Py_ssize_t pInvestorField_OpenDate_len = 0;

	//TThostFtdcMobileType char[41]
	const char *pInvestorField_Mobile = NULL;
	Py_ssize_t pInvestorField_Mobile_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorField_CommModelID = NULL;
	Py_ssize_t pInvestorField_CommModelID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pInvestorField_MarginModelID = NULL;
	Py_ssize_t pInvestorField_MarginModelID_len = 0;

	//TThostFtdcEnumBoolType char
	char pInvestorField_IsOrderFreq = 0;

	//TThostFtdcEnumBoolType char
	char pInvestorField_IsOpenVolLimit = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#iy#y#y#y#y#y#cc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cs#is#s#s#s#s#s#cc", (char **)kwlist
#endif

		, &pInvestorField_InvestorID, &pInvestorField_InvestorID_len
		, &pInvestorField_BrokerID, &pInvestorField_BrokerID_len
		, &pInvestorField_InvestorGroupID, &pInvestorField_InvestorGroupID_len
		, &pInvestorField_InvestorName, &pInvestorField_InvestorName_len
		, &pInvestorField_IdentifiedCardType
		, &pInvestorField_IdentifiedCardNo, &pInvestorField_IdentifiedCardNo_len
		, &pInvestorField_IsActive
		, &pInvestorField_Telephone, &pInvestorField_Telephone_len
		, &pInvestorField_Address, &pInvestorField_Address_len
		, &pInvestorField_OpenDate, &pInvestorField_OpenDate_len
		, &pInvestorField_Mobile, &pInvestorField_Mobile_len
		, &pInvestorField_CommModelID, &pInvestorField_CommModelID_len
		, &pInvestorField_MarginModelID, &pInvestorField_MarginModelID_len
		, &pInvestorField_IsOrderFreq
		, &pInvestorField_IsOpenVolLimit


    )) {
        return -1;
    }

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorField_InvestorID != NULL) {
		if(pInvestorField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pInvestorField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pInvestorField_InvestorID, sizeof(self->data.InvestorID) );
		pInvestorField_InvestorID = NULL;
	}

	//TThostFtdcBrokerIDType char[11]
	if(pInvestorField_BrokerID != NULL) {
		if(pInvestorField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pInvestorField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pInvestorField_BrokerID, sizeof(self->data.BrokerID) );
		pInvestorField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorField_InvestorGroupID != NULL) {
		if(pInvestorField_InvestorGroupID_len > (Py_ssize_t)sizeof(self->data.InvestorGroupID)) {
			PyErr_Format(PyExc_ValueError, "InvestorGroupID too long: length=%zd (max allowed is %zd)", pInvestorField_InvestorGroupID_len, (Py_ssize_t)sizeof(self->data.InvestorGroupID));
			return -1;
		}
		strncpy(self->data.InvestorGroupID, pInvestorField_InvestorGroupID, sizeof(self->data.InvestorGroupID) );
		pInvestorField_InvestorGroupID = NULL;
	}

	//TThostFtdcPartyNameType char[81]
	if(pInvestorField_InvestorName != NULL) {
		if(pInvestorField_InvestorName_len > (Py_ssize_t)sizeof(self->data.InvestorName)) {
			PyErr_Format(PyExc_ValueError, "InvestorName too long: length=%zd (max allowed is %zd)", pInvestorField_InvestorName_len, (Py_ssize_t)sizeof(self->data.InvestorName));
			return -1;
		}
		strncpy(self->data.InvestorName, pInvestorField_InvestorName, sizeof(self->data.InvestorName) );
		pInvestorField_InvestorName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdentifiedCardType = pInvestorField_IdentifiedCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pInvestorField_IdentifiedCardNo != NULL) {
		if(pInvestorField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pInvestorField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pInvestorField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pInvestorField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcBoolType int
	self->data.IsActive = pInvestorField_IsActive;

	//TThostFtdcTelephoneType char[41]
	if(pInvestorField_Telephone != NULL) {
		if(pInvestorField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pInvestorField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pInvestorField_Telephone, sizeof(self->data.Telephone) );
		pInvestorField_Telephone = NULL;
	}

	//TThostFtdcAddressType char[101]
	if(pInvestorField_Address != NULL) {
		if(pInvestorField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pInvestorField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pInvestorField_Address, sizeof(self->data.Address) );
		pInvestorField_Address = NULL;
	}

	//TThostFtdcDateType char[9]
	if(pInvestorField_OpenDate != NULL) {
		if(pInvestorField_OpenDate_len > (Py_ssize_t)sizeof(self->data.OpenDate)) {
			PyErr_Format(PyExc_ValueError, "OpenDate too long: length=%zd (max allowed is %zd)", pInvestorField_OpenDate_len, (Py_ssize_t)sizeof(self->data.OpenDate));
			return -1;
		}
		strncpy(self->data.OpenDate, pInvestorField_OpenDate, sizeof(self->data.OpenDate) );
		pInvestorField_OpenDate = NULL;
	}

	//TThostFtdcMobileType char[41]
	if(pInvestorField_Mobile != NULL) {
		if(pInvestorField_Mobile_len > (Py_ssize_t)sizeof(self->data.Mobile)) {
			PyErr_Format(PyExc_ValueError, "Mobile too long: length=%zd (max allowed is %zd)", pInvestorField_Mobile_len, (Py_ssize_t)sizeof(self->data.Mobile));
			return -1;
		}
		strncpy(self->data.Mobile, pInvestorField_Mobile, sizeof(self->data.Mobile) );
		pInvestorField_Mobile = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorField_CommModelID != NULL) {
		if(pInvestorField_CommModelID_len > (Py_ssize_t)sizeof(self->data.CommModelID)) {
			PyErr_Format(PyExc_ValueError, "CommModelID too long: length=%zd (max allowed is %zd)", pInvestorField_CommModelID_len, (Py_ssize_t)sizeof(self->data.CommModelID));
			return -1;
		}
		strncpy(self->data.CommModelID, pInvestorField_CommModelID, sizeof(self->data.CommModelID) );
		pInvestorField_CommModelID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pInvestorField_MarginModelID != NULL) {
		if(pInvestorField_MarginModelID_len > (Py_ssize_t)sizeof(self->data.MarginModelID)) {
			PyErr_Format(PyExc_ValueError, "MarginModelID too long: length=%zd (max allowed is %zd)", pInvestorField_MarginModelID_len, (Py_ssize_t)sizeof(self->data.MarginModelID));
			return -1;
		}
		strncpy(self->data.MarginModelID, pInvestorField_MarginModelID, sizeof(self->data.MarginModelID) );
		pInvestorField_MarginModelID = NULL;
	}

	//TThostFtdcEnumBoolType char
	self->data.IsOrderFreq = pInvestorField_IsOrderFreq;

	//TThostFtdcEnumBoolType char
	self->data.IsOpenVolLimit = pInvestorField_IsOpenVolLimit;



    return 0;
}

static void PyCThostFtdcInvestorField_dealloc(PyCThostFtdcInvestorField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcInvestorField_repr(PyCThostFtdcInvestorField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcInvestorField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcInvestorField_get_InvestorID(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcInvestorField_get_BrokerID(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcInvestorField_get_InvestorGroupID(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorGroupID);
}

static PyObject *PyCThostFtdcInvestorField_get_InvestorName(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorName);
}

static PyObject *PyCThostFtdcInvestorField_get_IdentifiedCardType(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdentifiedCardType), 1);
}

static PyObject *PyCThostFtdcInvestorField_get_IdentifiedCardNo(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcInvestorField_get_IsActive(PyCThostFtdcInvestorField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.IsActive);
#else 
	return PyInt_FromLong(self->data.IsActive);
#endif 
}

static PyObject *PyCThostFtdcInvestorField_get_Telephone(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcInvestorField_get_Address(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcInvestorField_get_OpenDate(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.OpenDate);
}

static PyObject *PyCThostFtdcInvestorField_get_Mobile(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.Mobile);
}

static PyObject *PyCThostFtdcInvestorField_get_CommModelID(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.CommModelID);
}

static PyObject *PyCThostFtdcInvestorField_get_MarginModelID(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromString(self->data.MarginModelID);
}

static PyObject *PyCThostFtdcInvestorField_get_IsOrderFreq(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IsOrderFreq), 1);
}

static PyObject *PyCThostFtdcInvestorField_get_IsOpenVolLimit(PyCThostFtdcInvestorField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IsOpenVolLimit), 1);
}

static int PyCThostFtdcInvestorField_set_InvestorID(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_BrokerID(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_InvestorGroupID(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_InvestorName(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_IdentifiedCardType(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_IdentifiedCardNo(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_IsActive(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_Telephone(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_Address(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_OpenDate(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_Mobile(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_CommModelID(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_MarginModelID(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_IsOrderFreq(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcInvestorField_set_IsOpenVolLimit(PyCThostFtdcInvestorField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcInvestorField_getset[] = {
	 {(char *)"InvestorID", (getter)PyCThostFtdcInvestorField_get_InvestorID, (setter)PyCThostFtdcInvestorField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"BrokerID", (getter)PyCThostFtdcInvestorField_get_BrokerID, (setter)PyCThostFtdcInvestorField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorGroupID", (getter)PyCThostFtdcInvestorField_get_InvestorGroupID, (setter)PyCThostFtdcInvestorField_set_InvestorGroupID, (char *)"InvestorGroupID", NULL},
	 {(char *)"InvestorName", (getter)PyCThostFtdcInvestorField_get_InvestorName, (setter)PyCThostFtdcInvestorField_set_InvestorName, (char *)"InvestorName", NULL},
	 {(char *)"IdentifiedCardType", (getter)PyCThostFtdcInvestorField_get_IdentifiedCardType, (setter)PyCThostFtdcInvestorField_set_IdentifiedCardType, (char *)"IdentifiedCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcInvestorField_get_IdentifiedCardNo, (setter)PyCThostFtdcInvestorField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"IsActive", (getter)PyCThostFtdcInvestorField_get_IsActive, (setter)PyCThostFtdcInvestorField_set_IsActive, (char *)"IsActive", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcInvestorField_get_Telephone, (setter)PyCThostFtdcInvestorField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcInvestorField_get_Address, (setter)PyCThostFtdcInvestorField_set_Address, (char *)"Address", NULL},
	 {(char *)"OpenDate", (getter)PyCThostFtdcInvestorField_get_OpenDate, (setter)PyCThostFtdcInvestorField_set_OpenDate, (char *)"OpenDate", NULL},
	 {(char *)"Mobile", (getter)PyCThostFtdcInvestorField_get_Mobile, (setter)PyCThostFtdcInvestorField_set_Mobile, (char *)"Mobile", NULL},
	 {(char *)"CommModelID", (getter)PyCThostFtdcInvestorField_get_CommModelID, (setter)PyCThostFtdcInvestorField_set_CommModelID, (char *)"CommModelID", NULL},
	 {(char *)"MarginModelID", (getter)PyCThostFtdcInvestorField_get_MarginModelID, (setter)PyCThostFtdcInvestorField_set_MarginModelID, (char *)"MarginModelID", NULL},
	 {(char *)"IsOrderFreq", (getter)PyCThostFtdcInvestorField_get_IsOrderFreq, (setter)PyCThostFtdcInvestorField_set_IsOrderFreq, (char *)"IsOrderFreq", NULL},
	 {(char *)"IsOpenVolLimit", (getter)PyCThostFtdcInvestorField_get_IsOpenVolLimit, (setter)PyCThostFtdcInvestorField_set_IsOpenVolLimit, (char *)"IsOpenVolLimit", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcInvestorFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcInvestorField",	/* tp_name */
	sizeof(PyCThostFtdcInvestorField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcInvestorField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcInvestorField_repr,   /* tp_repr */
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
	"CThostFtdcInvestorField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcInvestorField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcInvestorField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcInvestorField_new,       /* tp_new */
};

int PyCThostFtdcInvestorFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcInvestorField  */
	if (PyType_Ready(&PyCThostFtdcInvestorFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcInvestorField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcInvestorFieldType);
    if( PyModule_AddObject(module, "CThostFtdcInvestorField", (PyObject *)&PyCThostFtdcInvestorFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcInvestorField to module");
        Py_DECREF(&PyCThostFtdcInvestorFieldType);
		return -1;
    }

    return 0;
}
