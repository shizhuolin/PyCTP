
#include "PyCThostFtdcTradingAccountPasswordUpdateFromSecField.h"



static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self = (PyCThostFtdcTradingAccountPasswordUpdateFromSecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_init(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "OldPassword", "NewPassword", "CurrencyID", "FromSec",  NULL};

	//TThostFtdcBrokerIDType char[11]
	const char *pTradingAccountPasswordUpdateFromSecField_BrokerID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateFromSecField_BrokerID_len = 0;

	//TThostFtdcAccountIDType char[13]
	const char *pTradingAccountPasswordUpdateFromSecField_AccountID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateFromSecField_AccountID_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTradingAccountPasswordUpdateFromSecField_OldPassword = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateFromSecField_OldPassword_len = 0;

	//TThostFtdcPasswordType char[41]
	const char *pTradingAccountPasswordUpdateFromSecField_NewPassword = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateFromSecField_NewPassword_len = 0;

	//TThostFtdcCurrencyIDType char[4]
	const char *pTradingAccountPasswordUpdateFromSecField_CurrencyID = NULL;
	Py_ssize_t pTradingAccountPasswordUpdateFromSecField_CurrencyID_len = 0;

	//TThostFtdcDRIdentityIDType int
	int pTradingAccountPasswordUpdateFromSecField_FromSec = 0;



#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#i", (char **)kwlist
#endif

		, &pTradingAccountPasswordUpdateFromSecField_BrokerID, &pTradingAccountPasswordUpdateFromSecField_BrokerID_len
		, &pTradingAccountPasswordUpdateFromSecField_AccountID, &pTradingAccountPasswordUpdateFromSecField_AccountID_len
		, &pTradingAccountPasswordUpdateFromSecField_OldPassword, &pTradingAccountPasswordUpdateFromSecField_OldPassword_len
		, &pTradingAccountPasswordUpdateFromSecField_NewPassword, &pTradingAccountPasswordUpdateFromSecField_NewPassword_len
		, &pTradingAccountPasswordUpdateFromSecField_CurrencyID, &pTradingAccountPasswordUpdateFromSecField_CurrencyID_len
		, &pTradingAccountPasswordUpdateFromSecField_FromSec


    )) {
        return -1;
    }

	//TThostFtdcBrokerIDType char[11]
	if(pTradingAccountPasswordUpdateFromSecField_BrokerID != NULL) {
		if(pTradingAccountPasswordUpdateFromSecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
			PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateFromSecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
			return -1;
		}
		strncpy(self->data.BrokerID, pTradingAccountPasswordUpdateFromSecField_BrokerID, sizeof(self->data.BrokerID) );
		pTradingAccountPasswordUpdateFromSecField_BrokerID = NULL;
	}

	//TThostFtdcAccountIDType char[13]
	if(pTradingAccountPasswordUpdateFromSecField_AccountID != NULL) {
		if(pTradingAccountPasswordUpdateFromSecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
			PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateFromSecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
			return -1;
		}
		strncpy(self->data.AccountID, pTradingAccountPasswordUpdateFromSecField_AccountID, sizeof(self->data.AccountID) );
		pTradingAccountPasswordUpdateFromSecField_AccountID = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTradingAccountPasswordUpdateFromSecField_OldPassword != NULL) {
		if(pTradingAccountPasswordUpdateFromSecField_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
			PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateFromSecField_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
			return -1;
		}
		strncpy(self->data.OldPassword, pTradingAccountPasswordUpdateFromSecField_OldPassword, sizeof(self->data.OldPassword) );
		pTradingAccountPasswordUpdateFromSecField_OldPassword = NULL;
	}

	//TThostFtdcPasswordType char[41]
	if(pTradingAccountPasswordUpdateFromSecField_NewPassword != NULL) {
		if(pTradingAccountPasswordUpdateFromSecField_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
			PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateFromSecField_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
			return -1;
		}
		strncpy(self->data.NewPassword, pTradingAccountPasswordUpdateFromSecField_NewPassword, sizeof(self->data.NewPassword) );
		pTradingAccountPasswordUpdateFromSecField_NewPassword = NULL;
	}

	//TThostFtdcCurrencyIDType char[4]
	if(pTradingAccountPasswordUpdateFromSecField_CurrencyID != NULL) {
		if(pTradingAccountPasswordUpdateFromSecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
			PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", pTradingAccountPasswordUpdateFromSecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
			return -1;
		}
		strncpy(self->data.CurrencyID, pTradingAccountPasswordUpdateFromSecField_CurrencyID, sizeof(self->data.CurrencyID) );
		pTradingAccountPasswordUpdateFromSecField_CurrencyID = NULL;
	}

	//TThostFtdcDRIdentityIDType int
	self->data.FromSec = pTradingAccountPasswordUpdateFromSecField_FromSec;



    return 0;
}

static void PyCThostFtdcTradingAccountPasswordUpdateFromSecField_dealloc(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_repr(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i}"
#endif

		, "BrokerID", self->data.BrokerID 
		, "AccountID", self->data.AccountID 
		, "OldPassword", self->data.OldPassword 
		, "NewPassword", self->data.NewPassword 
		, "CurrencyID", self->data.CurrencyID 
		, "FromSec", self->data.FromSec


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateFromSecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
	return PyBytes_FromString(self->data.BrokerID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_AccountID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
	return PyBytes_FromString(self->data.AccountID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
	return PyBytes_FromString(self->data.OldPassword);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
	return PyBytes_FromString(self->data.NewPassword);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
	return PyBytes_FromString(self->data.CurrencyID);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_FromSec(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3 
	return PyLong_FromLong(self->data.FromSec);
#else 
	return PyInt_FromLong(self->data.FromSec);
#endif 
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_AccountID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "OldPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
		PyErr_SetString(PyExc_ValueError, "OldPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.OldPassword, buf, sizeof(self->data.OldPassword));
	return 0;
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField* self, PyObject* val, void *closure) {
	if (!PyBytes_Check(val)) {
		PyErr_SetString(PyExc_TypeError, "NewPassword Expected bytes");
		return -1;
	}
	const char *buf = PyBytes_AsString(val);
	Py_ssize_t len = PyBytes_Size(val);
	if (len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
		PyErr_SetString(PyExc_ValueError, "NewPassword must be less than 41 bytes");
		return -1;
	}
	strncpy(self->data.NewPassword, buf, sizeof(self->data.NewPassword));
	return 0;
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField* self, PyObject* val, void *closure) {
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

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_FromSec(PyCThostFtdcTradingAccountPasswordUpdateFromSecField* self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FromSec Expected long");
#else 
    if (!PyInt_Check(val)) { 
        PyErr_SetString(PyExc_TypeError, "FromSec Expected int"); 
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
    self->data.FromSec = (int)buf; 
    return 0; 
}



static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateFromSecField_getset[] = {
	 {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_BrokerID, (char *)"BrokerID", NULL},
	 {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_AccountID, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_AccountID, (char *)"AccountID", NULL},
	 {(char *)"OldPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_OldPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_OldPassword, (char *)"OldPassword", NULL},
	 {(char *)"NewPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_NewPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_NewPassword, (char *)"NewPassword", NULL},
	 {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_CurrencyID, (char *)"CurrencyID", NULL},
	 {(char *)"FromSec", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_FromSec, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_FromSec, (char *)"FromSec", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountPasswordUpdateFromSecField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountPasswordUpdateFromSecField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountPasswordUpdateFromSecField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountPasswordUpdateFromSecField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountPasswordUpdateFromSecField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountPasswordUpdateFromSecField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountPasswordUpdateFromSecField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateFromSecField", (PyObject *)&PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateFromSecField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountPasswordUpdateFromSecFieldType);
		return -1;
    }

    return 0;
}
