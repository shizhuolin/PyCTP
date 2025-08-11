
#include "PyCThostFtdcLinkManField.h"



static PyObject *PyCThostFtdcLinkManField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLinkManField *self = (PyCThostFtdcLinkManField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcLinkManField_init(PyCThostFtdcLinkManField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "PersonType", "IdentifiedCardType", "IdentifiedCardNo", "PersonName", "Telephone", "Address", "ZipCode", "Priority", "UOAZipCode", "PersonFullName",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pLinkManField_BrokerID = NULL;
	Py_ssize_t pLinkManField_BrokerID_len = 0;

	//TThostFtdcInvestorIDType char[13]
	const char *pLinkManField_InvestorID = NULL;
	Py_ssize_t pLinkManField_InvestorID_len = 0;

	//TThostFtdcPersonTypeType char
	char pLinkManField_PersonType = 0;

	//TThostFtdcIdCardTypeType char
	char pLinkManField_IdentifiedCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pLinkManField_IdentifiedCardNo = NULL;
	Py_ssize_t pLinkManField_IdentifiedCardNo_len = 0;

	//TThostFtdcPartyNameType char[81]
	const char *pLinkManField_PersonName = NULL;
	Py_ssize_t pLinkManField_PersonName_len = 0;

	//TThostFtdcTelephoneType char[41]
	const char *pLinkManField_Telephone = NULL;
	Py_ssize_t pLinkManField_Telephone_len = 0;

	//TThostFtdcAddressType char[101]
	const char *pLinkManField_Address = NULL;
	Py_ssize_t pLinkManField_Address_len = 0;

	//TThostFtdcZipCodeType char[7]
	const char *pLinkManField_ZipCode = NULL;
	Py_ssize_t pLinkManField_ZipCode_len = 0;

	//TThostFtdcPriorityType int
	int pLinkManField_Priority = 0;

	//TThostFtdcUOAZipCodeType char[11]
	const char *pLinkManField_UOAZipCode = NULL;
	Py_ssize_t pLinkManField_UOAZipCode_len = 0;

	//TThostFtdcInvestorFullNameType char[101]
	const char *pLinkManField_PersonFullName = NULL;
	Py_ssize_t pLinkManField_PersonFullName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#ccy#y#y#y#y#iy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ccs#s#s#s#s#is#s#", (char **)kwlist
#endif

		, &pLinkManField_BrokerID, &pLinkManField_BrokerID_len
		, &pLinkManField_InvestorID, &pLinkManField_InvestorID_len
		, &pLinkManField_PersonType
		, &pLinkManField_IdentifiedCardType
		, &pLinkManField_IdentifiedCardNo, &pLinkManField_IdentifiedCardNo_len
		, &pLinkManField_PersonName, &pLinkManField_PersonName_len
		, &pLinkManField_Telephone, &pLinkManField_Telephone_len
		, &pLinkManField_Address, &pLinkManField_Address_len
		, &pLinkManField_ZipCode, &pLinkManField_ZipCode_len
		, &pLinkManField_Priority
		, &pLinkManField_UOAZipCode, &pLinkManField_UOAZipCode_len
		, &pLinkManField_PersonFullName, &pLinkManField_PersonFullName_len


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pLinkManField_BrokerID != NULL) {
		if(pLinkManField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pLinkManField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pLinkManField_BrokerID, sizeof(self->data.BrokerID) );
		pLinkManField_BrokerID = NULL;
	}

	//TThostFtdcInvestorIDType char[13]
	if(pLinkManField_InvestorID != NULL) {
		if(pLinkManField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
			PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", pLinkManField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
			return -1;
		}
		strncpy(self->data.InvestorID, pLinkManField_InvestorID, sizeof(self->data.InvestorID) );
		pLinkManField_InvestorID = NULL;
	}

	//TThostFtdcPersonTypeType char
	self->data.PersonType = pLinkManField_PersonType;

	//TThostFtdcIdCardTypeType char
	self->data.IdentifiedCardType = pLinkManField_IdentifiedCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pLinkManField_IdentifiedCardNo != NULL) {
		if(pLinkManField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pLinkManField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pLinkManField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pLinkManField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcPartyNameType char[81]
	if(pLinkManField_PersonName != NULL) {
		if(pLinkManField_PersonName_len > (Py_ssize_t)sizeof(self->data.PersonName)) {
			PyErr_Format(PyExc_ValueError, "PersonName too long: length=%zd (max allowed is %zd)", pLinkManField_PersonName_len, (Py_ssize_t)sizeof(self->data.PersonName));
			return -1;
		}
		strncpy(self->data.PersonName, pLinkManField_PersonName, sizeof(self->data.PersonName) );
		pLinkManField_PersonName = NULL;
	}

	//TThostFtdcTelephoneType char[41]
	if(pLinkManField_Telephone != NULL) {
		if(pLinkManField_Telephone_len > (Py_ssize_t)sizeof(self->data.Telephone)) {
			PyErr_Format(PyExc_ValueError, "Telephone too long: length=%zd (max allowed is %zd)", pLinkManField_Telephone_len, (Py_ssize_t)sizeof(self->data.Telephone));
			return -1;
		}
		strncpy(self->data.Telephone, pLinkManField_Telephone, sizeof(self->data.Telephone) );
		pLinkManField_Telephone = NULL;
	}

	//TThostFtdcAddressType char[101]
	if(pLinkManField_Address != NULL) {
		if(pLinkManField_Address_len > (Py_ssize_t)sizeof(self->data.Address)) {
			PyErr_Format(PyExc_ValueError, "Address too long: length=%zd (max allowed is %zd)", pLinkManField_Address_len, (Py_ssize_t)sizeof(self->data.Address));
			return -1;
		}
		strncpy(self->data.Address, pLinkManField_Address, sizeof(self->data.Address) );
		pLinkManField_Address = NULL;
	}

	//TThostFtdcZipCodeType char[7]
	if(pLinkManField_ZipCode != NULL) {
		if(pLinkManField_ZipCode_len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
			PyErr_Format(PyExc_ValueError, "ZipCode too long: length=%zd (max allowed is %zd)", pLinkManField_ZipCode_len, (Py_ssize_t)sizeof(self->data.ZipCode));
			return -1;
		}
		strncpy(self->data.ZipCode, pLinkManField_ZipCode, sizeof(self->data.ZipCode) );
		pLinkManField_ZipCode = NULL;
	}

	//TThostFtdcPriorityType int
	self->data.Priority = pLinkManField_Priority;

	//TThostFtdcUOAZipCodeType char[11]
	if(pLinkManField_UOAZipCode != NULL) {
		if(pLinkManField_UOAZipCode_len > (Py_ssize_t)sizeof(self->data.UOAZipCode)) {
			PyErr_Format(PyExc_ValueError, "UOAZipCode too long: length=%zd (max allowed is %zd)", pLinkManField_UOAZipCode_len, (Py_ssize_t)sizeof(self->data.UOAZipCode));
			return -1;
		}
		strncpy(self->data.UOAZipCode, pLinkManField_UOAZipCode, sizeof(self->data.UOAZipCode) );
		pLinkManField_UOAZipCode = NULL;
	}

	//TThostFtdcInvestorFullNameType char[101]
	if(pLinkManField_PersonFullName != NULL) {
		if(pLinkManField_PersonFullName_len > (Py_ssize_t)sizeof(self->data.PersonFullName)) {
			PyErr_Format(PyExc_ValueError, "PersonFullName too long: length=%zd (max allowed is %zd)", pLinkManField_PersonFullName_len, (Py_ssize_t)sizeof(self->data.PersonFullName));
			return -1;
		}
		strncpy(self->data.PersonFullName, pLinkManField_PersonFullName, sizeof(self->data.PersonFullName) );
		pLinkManField_PersonFullName = NULL;
	}



    return 0;
}

static void PyCThostFtdcLinkManField_dealloc(PyCThostFtdcLinkManField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLinkManField_repr(PyCThostFtdcLinkManField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:c,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "InvestorID", self->data.InvestorID 
		, "PersonType", self->data.PersonType
		, "IdentifiedCardType", self->data.IdentifiedCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "PersonName", self->data.PersonName 
		, "Telephone", self->data.Telephone 
		, "Address", self->data.Address 
		, "ZipCode", self->data.ZipCode 
		, "Priority", self->data.Priority
		, "UOAZipCode", self->data.UOAZipCode 
		, "PersonFullName", self->data.PersonFullName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLinkManField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcLinkManField_get_BrokerID(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcLinkManField_get_InvestorID(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.InvestorID);
}

static PyObject *PyCThostFtdcLinkManField_get_PersonType(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.PersonType), 1);
}

static PyObject *PyCThostFtdcLinkManField_get_IdentifiedCardType(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdentifiedCardType), 1);
}

static PyObject *PyCThostFtdcLinkManField_get_IdentifiedCardNo(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcLinkManField_get_PersonName(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.PersonName);
}

static PyObject *PyCThostFtdcLinkManField_get_Telephone(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.Telephone);
}

static PyObject *PyCThostFtdcLinkManField_get_Address(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.Address);
}

static PyObject *PyCThostFtdcLinkManField_get_ZipCode(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.ZipCode);
}

static PyObject *PyCThostFtdcLinkManField_get_Priority(PyCThostFtdcLinkManField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.Priority);
#else 
	return PyInt_FromLong(self->data.Priority);
#endif 
}

static PyObject *PyCThostFtdcLinkManField_get_UOAZipCode(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.UOAZipCode);
}

static PyObject *PyCThostFtdcLinkManField_get_PersonFullName(PyCThostFtdcLinkManField *self, void *closure) {
	return PyBytes_FromString(self->data.PersonFullName);
}

static int PyCThostFtdcLinkManField_set_BrokerID(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLinkManField_set_InvestorID(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLinkManField_set_PersonType(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PersonType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PersonType)) {
		PyErr_SetString(PyExc_ValueError, "PersonType must be less than 1 bytes");
		return -1;
	}
	self->data.PersonType = *buf;
	return 0;
}

static int PyCThostFtdcLinkManField_set_IdentifiedCardType(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLinkManField_set_IdentifiedCardNo(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLinkManField_set_PersonName(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PersonName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PersonName)) {
		PyErr_SetString(PyExc_ValueError, "PersonName must be less than 81 bytes");
		return -1;
	}
	strncpy(self->data.PersonName, buf, sizeof(self->data.PersonName));
	return 0;
}

static int PyCThostFtdcLinkManField_set_Telephone(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLinkManField_set_Address(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcLinkManField_set_ZipCode(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "ZipCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.ZipCode)) {
		PyErr_SetString(PyExc_ValueError, "ZipCode must be less than 7 bytes");
		return -1;
	}
	strncpy(self->data.ZipCode, buf, sizeof(self->data.ZipCode));
	return 0;
}

static int PyCThostFtdcLinkManField_set_Priority(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Priority Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "Priority Expected int"); 
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
    self->data.Priority = (int)buf; 
    return 0; 
}

static int PyCThostFtdcLinkManField_set_UOAZipCode(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "UOAZipCode Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.UOAZipCode)) {
		PyErr_SetString(PyExc_ValueError, "UOAZipCode must be less than 11 bytes");
		return -1;
	}
	strncpy(self->data.UOAZipCode, buf, sizeof(self->data.UOAZipCode));
	return 0;
}

static int PyCThostFtdcLinkManField_set_PersonFullName(PyCThostFtdcLinkManField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "PersonFullName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.PersonFullName)) {
		PyErr_SetString(PyExc_ValueError, "PersonFullName must be less than 101 bytes");
		return -1;
	}
	strncpy(self->data.PersonFullName, buf, sizeof(self->data.PersonFullName));
	return 0;
}



static PyGetSetDef PyCThostFtdcLinkManField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcLinkManField_get_BrokerID, (setter)PyCThostFtdcLinkManField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"InvestorID", (getter)PyCThostFtdcLinkManField_get_InvestorID, (setter)PyCThostFtdcLinkManField_set_InvestorID, (char *)"InvestorID", NULL},
	 {(char *)"PersonType", (getter)PyCThostFtdcLinkManField_get_PersonType, (setter)PyCThostFtdcLinkManField_set_PersonType, (char *)"PersonType", NULL},
	 {(char *)"IdentifiedCardType", (getter)PyCThostFtdcLinkManField_get_IdentifiedCardType, (setter)PyCThostFtdcLinkManField_set_IdentifiedCardType, (char *)"IdentifiedCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcLinkManField_get_IdentifiedCardNo, (setter)PyCThostFtdcLinkManField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"PersonName", (getter)PyCThostFtdcLinkManField_get_PersonName, (setter)PyCThostFtdcLinkManField_set_PersonName, (char *)"PersonName", NULL},
	 {(char *)"Telephone", (getter)PyCThostFtdcLinkManField_get_Telephone, (setter)PyCThostFtdcLinkManField_set_Telephone, (char *)"Telephone", NULL},
	 {(char *)"Address", (getter)PyCThostFtdcLinkManField_get_Address, (setter)PyCThostFtdcLinkManField_set_Address, (char *)"Address", NULL},
	 {(char *)"ZipCode", (getter)PyCThostFtdcLinkManField_get_ZipCode, (setter)PyCThostFtdcLinkManField_set_ZipCode, (char *)"ZipCode", NULL},
	 {(char *)"Priority", (getter)PyCThostFtdcLinkManField_get_Priority, (setter)PyCThostFtdcLinkManField_set_Priority, (char *)"Priority", NULL},
	 {(char *)"UOAZipCode", (getter)PyCThostFtdcLinkManField_get_UOAZipCode, (setter)PyCThostFtdcLinkManField_set_UOAZipCode, (char *)"UOAZipCode", NULL},
	 {(char *)"PersonFullName", (getter)PyCThostFtdcLinkManField_get_PersonFullName, (setter)PyCThostFtdcLinkManField_set_PersonFullName, (char *)"PersonFullName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLinkManFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLinkManField",	/* tp_name */
	sizeof(PyCThostFtdcLinkManField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLinkManField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLinkManField_repr,   /* tp_repr */
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
	"CThostFtdcLinkManField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLinkManField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLinkManField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLinkManField_new,       /* tp_new */
};

int PyCThostFtdcLinkManFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLinkManField  */
	if (PyType_Ready(&PyCThostFtdcLinkManFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLinkManField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLinkManFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLinkManField", (PyObject *)&PyCThostFtdcLinkManFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLinkManField to module");
        Py_DECREF(&PyCThostFtdcLinkManFieldType);
		return -1;
    }

    return 0;
}
