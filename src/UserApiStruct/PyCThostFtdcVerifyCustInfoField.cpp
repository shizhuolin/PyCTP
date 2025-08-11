
#include "PyCThostFtdcVerifyCustInfoField.h"



static PyObject *PyCThostFtdcVerifyCustInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcVerifyCustInfoField *self = (PyCThostFtdcVerifyCustInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcVerifyCustInfoField_init(PyCThostFtdcVerifyCustInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"CustomerName", "IdCardType", "IdentifiedCardNo", "CustType", "LongCustomerName",  NULL};

	//TThostFtdcIndividualNameType char[51]
	const char *pVerifyCustInfoField_CustomerName = NULL;
	Py_ssize_t pVerifyCustInfoField_CustomerName_len = 0;

	//TThostFtdcIdCardTypeType char
	char pVerifyCustInfoField_IdCardType = 0;

	//TThostFtdcIdentifiedCardNoType char[51]
	const char *pVerifyCustInfoField_IdentifiedCardNo = NULL;
	Py_ssize_t pVerifyCustInfoField_IdentifiedCardNo_len = 0;

	//TThostFtdcCustTypeType char
	char pVerifyCustInfoField_CustType = 0;

	//TThostFtdcLongIndividualNameType char[161]
	const char *pVerifyCustInfoField_LongCustomerName = NULL;
	Py_ssize_t pVerifyCustInfoField_LongCustomerName_len = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#cs#", (char **)kwlist
#endif

		, &pVerifyCustInfoField_CustomerName, &pVerifyCustInfoField_CustomerName_len
		, &pVerifyCustInfoField_IdCardType
		, &pVerifyCustInfoField_IdentifiedCardNo, &pVerifyCustInfoField_IdentifiedCardNo_len
		, &pVerifyCustInfoField_CustType
		, &pVerifyCustInfoField_LongCustomerName, &pVerifyCustInfoField_LongCustomerName_len


    )) {
        return -1;
    }

	//TThostFtdcIndividualNameType char[51]
	if(pVerifyCustInfoField_CustomerName != NULL) {
		if(pVerifyCustInfoField_CustomerName_len > (Py_ssize_t)sizeof(self->data.CustomerName)) {
			PyErr_Format(PyExc_ValueError, "CustomerName too long: length=%zd (max allowed is %zd)", pVerifyCustInfoField_CustomerName_len, (Py_ssize_t)sizeof(self->data.CustomerName));
			return -1;
		}
		strncpy(self->data.CustomerName, pVerifyCustInfoField_CustomerName, sizeof(self->data.CustomerName) );
		pVerifyCustInfoField_CustomerName = NULL;
	}

	//TThostFtdcIdCardTypeType char
	self->data.IdCardType = pVerifyCustInfoField_IdCardType;

	//TThostFtdcIdentifiedCardNoType char[51]
	if(pVerifyCustInfoField_IdentifiedCardNo != NULL) {
		if(pVerifyCustInfoField_IdentifiedCardNo_len > (Py_ssize_t)sizeof(self->data.IdentifiedCardNo)) {
			PyErr_Format(PyExc_ValueError, "IdentifiedCardNo too long: length=%zd (max allowed is %zd)", pVerifyCustInfoField_IdentifiedCardNo_len, (Py_ssize_t)sizeof(self->data.IdentifiedCardNo));
			return -1;
		}
		strncpy(self->data.IdentifiedCardNo, pVerifyCustInfoField_IdentifiedCardNo, sizeof(self->data.IdentifiedCardNo) );
		pVerifyCustInfoField_IdentifiedCardNo = NULL;
	}

	//TThostFtdcCustTypeType char
	self->data.CustType = pVerifyCustInfoField_CustType;

	//TThostFtdcLongIndividualNameType char[161]
	if(pVerifyCustInfoField_LongCustomerName != NULL) {
		if(pVerifyCustInfoField_LongCustomerName_len > (Py_ssize_t)sizeof(self->data.LongCustomerName)) {
			PyErr_Format(PyExc_ValueError, "LongCustomerName too long: length=%zd (max allowed is %zd)", pVerifyCustInfoField_LongCustomerName_len, (Py_ssize_t)sizeof(self->data.LongCustomerName));
			return -1;
		}
		strncpy(self->data.LongCustomerName, pVerifyCustInfoField_LongCustomerName, sizeof(self->data.LongCustomerName) );
		pVerifyCustInfoField_LongCustomerName = NULL;
	}



    return 0;
}

static void PyCThostFtdcVerifyCustInfoField_dealloc(PyCThostFtdcVerifyCustInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcVerifyCustInfoField_repr(PyCThostFtdcVerifyCustInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:c,s:s}"
#endif

		, "CustomerName", self->data.CustomerName 
		, "IdCardType", self->data.IdCardType
		, "IdentifiedCardNo", self->data.IdentifiedCardNo 
		, "CustType", self->data.CustType
		, "LongCustomerName", self->data.LongCustomerName 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcVerifyCustInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcVerifyCustInfoField_get_CustomerName(PyCThostFtdcVerifyCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.CustomerName);
}

static PyObject *PyCThostFtdcVerifyCustInfoField_get_IdCardType(PyCThostFtdcVerifyCustInfoField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.IdCardType), 1);
}

static PyObject *PyCThostFtdcVerifyCustInfoField_get_IdentifiedCardNo(PyCThostFtdcVerifyCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.IdentifiedCardNo);
}

static PyObject *PyCThostFtdcVerifyCustInfoField_get_CustType(PyCThostFtdcVerifyCustInfoField *self, void *closure) {
	return PyBytes_FromStringAndSize(&(self->data.CustType), 1);
}

static PyObject *PyCThostFtdcVerifyCustInfoField_get_LongCustomerName(PyCThostFtdcVerifyCustInfoField *self, void *closure) {
	return PyBytes_FromString(self->data.LongCustomerName);
}

static int PyCThostFtdcVerifyCustInfoField_set_CustomerName(PyCThostFtdcVerifyCustInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyCustInfoField_set_IdCardType(PyCThostFtdcVerifyCustInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyCustInfoField_set_IdentifiedCardNo(PyCThostFtdcVerifyCustInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyCustInfoField_set_CustType(PyCThostFtdcVerifyCustInfoField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcVerifyCustInfoField_set_LongCustomerName(PyCThostFtdcVerifyCustInfoField* self, PyObject* val, void *closure) {
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



static PyGetSetDef PyCThostFtdcVerifyCustInfoField_getset[] = {
	 {(char *)"CustomerName", (getter)PyCThostFtdcVerifyCustInfoField_get_CustomerName, (setter)PyCThostFtdcVerifyCustInfoField_set_CustomerName, (char *)"CustomerName", NULL},
	 {(char *)"IdCardType", (getter)PyCThostFtdcVerifyCustInfoField_get_IdCardType, (setter)PyCThostFtdcVerifyCustInfoField_set_IdCardType, (char *)"IdCardType", NULL},
	 {(char *)"IdentifiedCardNo", (getter)PyCThostFtdcVerifyCustInfoField_get_IdentifiedCardNo, (setter)PyCThostFtdcVerifyCustInfoField_set_IdentifiedCardNo, (char *)"IdentifiedCardNo", NULL},
	 {(char *)"CustType", (getter)PyCThostFtdcVerifyCustInfoField_get_CustType, (setter)PyCThostFtdcVerifyCustInfoField_set_CustType, (char *)"CustType", NULL},
	 {(char *)"LongCustomerName", (getter)PyCThostFtdcVerifyCustInfoField_get_LongCustomerName, (setter)PyCThostFtdcVerifyCustInfoField_set_LongCustomerName, (char *)"LongCustomerName", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcVerifyCustInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcVerifyCustInfoField",	/* tp_name */
	sizeof(PyCThostFtdcVerifyCustInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcVerifyCustInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcVerifyCustInfoField_repr,   /* tp_repr */
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
	"CThostFtdcVerifyCustInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcVerifyCustInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcVerifyCustInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcVerifyCustInfoField_new,       /* tp_new */
};

int PyCThostFtdcVerifyCustInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcVerifyCustInfoField  */
	if (PyType_Ready(&PyCThostFtdcVerifyCustInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcVerifyCustInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcVerifyCustInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcVerifyCustInfoField", (PyObject *)&PyCThostFtdcVerifyCustInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcVerifyCustInfoField to module");
        Py_DECREF(&PyCThostFtdcVerifyCustInfoFieldType);
		return -1;
    }

    return 0;
}
