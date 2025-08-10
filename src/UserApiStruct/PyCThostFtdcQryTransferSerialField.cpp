
#include "PyCThostFtdcQryTransferSerialField.h"

///请求查询转帐流水

static PyObject *PyCThostFtdcQryTransferSerialField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTransferSerialField *self = (PyCThostFtdcQryTransferSerialField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryTransferSerialField_init(PyCThostFtdcQryTransferSerialField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "BankID", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryTransferSerialField_BrokerID = NULL;
    Py_ssize_t QryTransferSerialField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *QryTransferSerialField_AccountID = NULL;
    Py_ssize_t QryTransferSerialField_AccountID_len = 0;
            
    ///银行编码
    // TThostFtdcBankIDType char[4]
    const char *QryTransferSerialField_BankID = NULL;
    Py_ssize_t QryTransferSerialField_BankID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *QryTransferSerialField_CurrencyID = NULL;
    Py_ssize_t QryTransferSerialField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryTransferSerialField_BrokerID, &QryTransferSerialField_BrokerID_len 
        , &QryTransferSerialField_AccountID, &QryTransferSerialField_AccountID_len 
        , &QryTransferSerialField_BankID, &QryTransferSerialField_BankID_len 
        , &QryTransferSerialField_CurrencyID, &QryTransferSerialField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryTransferSerialField_BrokerID != NULL ) {
        if(QryTransferSerialField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryTransferSerialField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryTransferSerialField_BrokerID, QryTransferSerialField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryTransferSerialField_BrokerID, sizeof(self->data.BrokerID) );
        QryTransferSerialField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( QryTransferSerialField_AccountID != NULL ) {
        if(QryTransferSerialField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", QryTransferSerialField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, QryTransferSerialField_AccountID, QryTransferSerialField_AccountID_len);        
        strncpy(self->data.AccountID, QryTransferSerialField_AccountID, sizeof(self->data.AccountID) );
        QryTransferSerialField_AccountID = NULL;
    }
            
    ///银行编码
    // TThostFtdcBankIDType char[4]
    if( QryTransferSerialField_BankID != NULL ) {
        if(QryTransferSerialField_BankID_len > (Py_ssize_t)sizeof(self->data.BankID)) {
            PyErr_Format(PyExc_ValueError, "BankID too long: length=%zd (max allowed is %zd)", QryTransferSerialField_BankID_len, (Py_ssize_t)sizeof(self->data.BankID));
            return -1;
        }
        // memset(self->data.BankID, 0, sizeof(self->data.BankID));
        // memcpy(self->data.BankID, QryTransferSerialField_BankID, QryTransferSerialField_BankID_len);        
        strncpy(self->data.BankID, QryTransferSerialField_BankID, sizeof(self->data.BankID) );
        QryTransferSerialField_BankID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( QryTransferSerialField_CurrencyID != NULL ) {
        if(QryTransferSerialField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", QryTransferSerialField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, QryTransferSerialField_CurrencyID, QryTransferSerialField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, QryTransferSerialField_CurrencyID, sizeof(self->data.CurrencyID) );
        QryTransferSerialField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryTransferSerialField_dealloc(PyCThostFtdcQryTransferSerialField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTransferSerialField_repr(PyCThostFtdcQryTransferSerialField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"BankID", self->data.BankID//, (Py_ssize_t)sizeof(self->data.BankID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTransferSerialField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryTransferSerialField_get_BrokerID(PyCThostFtdcQryTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryTransferSerialField_set_BrokerID(PyCThostFtdcQryTransferSerialField *self, PyObject* val, void *closure) {
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
    // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
    // memcpy(self->data.BrokerID, buf, len);
    strncpy(self->data.BrokerID, buf, sizeof(self->data.BrokerID));
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcQryTransferSerialField_get_AccountID(PyCThostFtdcQryTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcQryTransferSerialField_set_AccountID(PyCThostFtdcQryTransferSerialField *self, PyObject* val, void *closure) {
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
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///银行编码
// TThostFtdcBankIDType char[4]
static PyObject *PyCThostFtdcQryTransferSerialField_get_BankID(PyCThostFtdcQryTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BankID, (Py_ssize_t)sizeof(self->data.BankID));
    return PyBytes_FromString(self->data.BankID);
}

///银行编码
// TThostFtdcBankIDType char[4]
static int PyCThostFtdcQryTransferSerialField_set_BankID(PyCThostFtdcQryTransferSerialField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BankID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BankID)) {
        PyErr_SetString(PyExc_ValueError, "BankID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.BankID, 0, sizeof(self->data.BankID));
    // memcpy(self->data.BankID, buf, len);
    strncpy(self->data.BankID, buf, sizeof(self->data.BankID));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcQryTransferSerialField_get_CurrencyID(PyCThostFtdcQryTransferSerialField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQryTransferSerialField_set_CurrencyID(PyCThostFtdcQryTransferSerialField *self, PyObject* val, void *closure) {
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
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryTransferSerialField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryTransferSerialField_get_BrokerID, (setter)PyCThostFtdcQryTransferSerialField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcQryTransferSerialField_get_AccountID, (setter)PyCThostFtdcQryTransferSerialField_set_AccountID, (char *)"AccountID", NULL},
    ///银行编码 
    {(char *)"BankID", (getter)PyCThostFtdcQryTransferSerialField_get_BankID, (setter)PyCThostFtdcQryTransferSerialField_set_BankID, (char *)"BankID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcQryTransferSerialField_get_CurrencyID, (setter)PyCThostFtdcQryTransferSerialField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTransferSerialFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTransferSerialField",	/* tp_name */
	sizeof(PyCThostFtdcQryTransferSerialField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTransferSerialField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTransferSerialField_repr,   /* tp_repr */
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
	"CThostFtdcQryTransferSerialField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTransferSerialField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTransferSerialField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTransferSerialField_new,       /* tp_new */
};

int PyCThostFtdcQryTransferSerialFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTransferSerialField  */
	if (PyType_Ready(&PyCThostFtdcQryTransferSerialFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTransferSerialField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTransferSerialFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTransferSerialField", (PyObject *)&PyCThostFtdcQryTransferSerialFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTransferSerialField to module");
        Py_DECREF(&PyCThostFtdcQryTransferSerialFieldType);
		return -1;
    }

    return 0;
}
