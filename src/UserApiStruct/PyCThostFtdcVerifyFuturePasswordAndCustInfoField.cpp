
#include "PyCThostFtdcVerifyFuturePasswordAndCustInfoField.h"



static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self = (PyCThostFtdcVerifyFuturePasswordAndCustInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_init(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "AccountID", "Password", "CurrencyID", "LongCustomerName",  NULL};

	//TThostFtdcIndividualNameType char[51]
	const char *pVerifyFuturePasswordAndCustInfoField_CustomerName = NULL;
	Py_ssize_t pVerifyFuturePasswordAndCustInfoField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pVerifyFuturePasswordAndCustInfoField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo = NULL;
	Py_ssize_t pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pVerifyFuturePasswordAndCustInfoField_CustType = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pVerifyFuturePasswordAndCustInfoField_AccountID = NULL;
	Py_ssize_t pVerifyFuturePasswordAndCustInfoField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pVerifyFuturePasswordAndCustInfoField_Password = NULL;
	Py_ssize_t pVerifyFuturePasswordAndCustInfoField_Password_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pVerifyFuturePasswordAndCustInfoField_CurrencyID = NULL;
	Py_ssize_t pVerifyFuturePasswordAndCustInfoField_CurrencyID_len = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pVerifyFuturePasswordAndCustInfoField_LongCustomerName = NULL;
	Py_ssize_t pVerifyFuturePasswordAndCustInfoField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#cy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#cs#s#s#s#", (char **)kwlist
#endif

		, &pVerifyFuturePasswordAndCustInfoField_CustomerName, &pVerifyFuturePasswordAndCustInfoField_CustomerName_len
		, &pVerifyFuturePasswordAndCustInfoField_IdCardType
		, &pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, &pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len
		, &pVerifyFuturePasswordAndCustInfoField_CustType
		, &pVerifyFuturePasswordAndCustInfoField_AccountID, &pVerifyFuturePasswordAndCustInfoField_AccountID_len
		, &pVerifyFuturePasswordAndCustInfoField_Password, &pVerifyFuturePasswordAndCustInfoField_Password_len
		, &pVerifyFuturePasswordAndCustInfoField_CurrencyID, &pVerifyFuturePasswordAndCustInfoField_CurrencyID_len
		, &pVerifyFuturePasswordAndCustInfoField_LongCustomerName, &pVerifyFuturePasswordAndCustInfoField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcIndividualNameType char[51]
	if(pVerifyFuturePasswordAndCustInfoField_CustomerName != NULL) {
		if(pVerifyFuturePasswordAndCustInfoField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordAndCustInfoField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pVerifyFuturePasswordAndCustInfoField_CustomerName, sizeof(self->data.CustomerName) );
		pVerifyFuturePasswordAndCustInfoField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pVerifyFuturePasswordAndCustInfoField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo != NULL) {
		if(pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pVerifyFuturePasswordAndCustInfoField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pVerifyFuturePasswordAndCustInfoField_CustType;

	//TThostFtdcAccountIDType char[13]
	if(pVerifyFuturePasswordAndCustInfoField_AccountID != NULL) {
		if(pVerifyFuturePasswordAndCustInfoField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordAndCustInfoField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pVerifyFuturePasswordAndCustInfoField_AccountID, sizeof(self->data.AccountID) );
		pVerifyFuturePasswordAndCustInfoField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pVerifyFuturePasswordAndCustInfoField_Password != NULL) {
		if(pVerifyFuturePasswordAndCustInfoField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
			PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordAndCustInfoField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
			return -1;
		}
		strncpy(self->data.Password, pVerifyFuturePasswordAndCustInfoField_Password, sizeof(self->data.Password) );
		pVerifyFuturePasswordAndCustInfoField_Password = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pVerifyFuturePasswordAndCustInfoField_CurrencyID != NULL) {
		if(pVerifyFuturePasswordAndCustInfoField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordAndCustInfoField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pVerifyFuturePasswordAndCustInfoField_CurrencyID, sizeof(self->data.CurrencyID) );
		pVerifyFuturePasswordAndCustInfoField_CurrencyID = NULL;
	}

	//TThostFtdcLongIndividualNameType char[161]
	if(pVerifyFuturePasswordAndCustInfoField_LongCustomerName != NULL) {
		if(pVerifyFuturePasswordAndCustInfoField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pVerifyFuturePasswordAndCustInfoField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pVerifyFuturePasswordAndCustInfoField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pVerifyFuturePasswordAndCustInfoField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcVerifyFuturePasswordAndCustInfoField_dealloc(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_repr(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:c,s:s,s:s,s:s,s:s}"
#endif

		, "CustomerName", self->data.CustomerName 
		, "IdCardType", self->data.IdCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "CustType", self->data.CustType
		, "AccountID", self->data.AccountID 
		, "Password", self->data.Password 
		, "CurrencyID", self->data.CurrencyID 
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyFuturePasswordAndCustInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdCardType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdentifiedCardNo(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_AccountID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_Password(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.Password);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CurrencyID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_LongCustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CustomerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
		PyErr_SetString(PyExc_ValueError, "CustomerName must be less than 51 bytes");
		return -1;
	}
	strncpy(self->data.CustomerName, buf, sizeof(self->data.CustomerName));
	return 0;
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdCardType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "IdCardType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.IdCardType)) {
		PyErr_SetString(PyExc_ValueError, "IdCardType must be less than 1 bytes");
		return -1;
	}
	self->data.IdCardType = *buf;
	return 0;
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdentifiedCardNo(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustType(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CustType Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CustType)) {
		PyErr_SetString(PyExc_ValueError, "CustType must be less than 1 bytes");
		return -1;
	}
	self->data.CustType = *buf;
	return 0;
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_AccountID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
		PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
		return -1;
	}
	strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
	return 0;
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_Password(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CurrencyID(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
		PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
		return -1;
	}
	strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
	return 0;
}

static int PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_LongCustomerName(PyCThostFtdcVerifyFuturePasswordAndCustInfoField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "LongCustomerName Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
		PyErr_SetString(PyExc_ValueError, "LongCustomerName must be less than 161 bytes");
		return -1;
	}
	strncpy(self->data.LongCustomerName, buf, sizeof(self->data.LongCustomerName));
	return 0;
}



static PyGetSetDef PyCThostFtdcVerifyFuturePasswordAndCustInfoField_getset[] = {
	 {(char *)"CustomerName", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustomerName, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdCardType, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_IdentifiedCardNo, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CustType, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_AccountID, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"Password", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_Password, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_Password, (char *)"Password", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_CurrencyID, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_get_LongCustomerName, (setter)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcVerifyFuturePasswordAndCustInfoField",	/* tp_name */
	sizeof(PyCThostFtdcVerifyFuturePasswordAndCustInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_repr,   /* tp_repr */
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
	"CThostFtdcVerifyFuturePasswordAndCustInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcVerifyFuturePasswordAndCustInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcVerifyFuturePasswordAndCustInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcVerifyFuturePasswordAndCustInfoField_new,       /* tp_new */
};

int PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcVerifyFuturePasswordAndCustInfoField  */
	if (PyType_Ready(&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcVerifyFuturePasswordAndCustInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcVerifyFuturePasswordAndCustInfoField", (PyObject *)&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyFuturePasswordAndCustInfoField to module");
        Py_DECREF(&PyCThostFtdcVerifyFuturePasswordAndCustInfoFieldType);
		return -1;
    }

    return 0;
}
