
#include "PyCThostFtdcTradingAccountPasswordField.h"

///资金账户口令域

static PyObject *PyCThostFtdcTradingAccountPasswordField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordField *self = (PyCThostFtdcTradingAccountPasswordField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordField_init(PyCThostFtdcTradingAccountPasswordField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "Password", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingAccountPasswordField_BrokerID = NULL;
    Py_ssize_t TradingAccountPasswordField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *TradingAccountPasswordField_AccountID = NULL;
    Py_ssize_t TradingAccountPasswordField_AccountID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *TradingAccountPasswordField_Password = NULL;
    Py_ssize_t TradingAccountPasswordField_Password_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *TradingAccountPasswordField_CurrencyID = NULL;
    Py_ssize_t TradingAccountPasswordField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &TradingAccountPasswordField_BrokerID, &TradingAccountPasswordField_BrokerID_len 
        , &TradingAccountPasswordField_AccountID, &TradingAccountPasswordField_AccountID_len 
        , &TradingAccountPasswordField_Password, &TradingAccountPasswordField_Password_len 
        , &TradingAccountPasswordField_CurrencyID, &TradingAccountPasswordField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingAccountPasswordField_BrokerID != NULL ) {
        if(TradingAccountPasswordField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingAccountPasswordField_BrokerID, TradingAccountPasswordField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingAccountPasswordField_BrokerID, sizeof(self->data.BrokerID) );
        TradingAccountPasswordField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( TradingAccountPasswordField_AccountID != NULL ) {
        if(TradingAccountPasswordField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, TradingAccountPasswordField_AccountID, TradingAccountPasswordField_AccountID_len);        
        strncpy(self->data.AccountID, TradingAccountPasswordField_AccountID, sizeof(self->data.AccountID) );
        TradingAccountPasswordField_AccountID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( TradingAccountPasswordField_Password != NULL ) {
        if(TradingAccountPasswordField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", TradingAccountPasswordField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, TradingAccountPasswordField_Password, TradingAccountPasswordField_Password_len);        
        strncpy(self->data.Password, TradingAccountPasswordField_Password, sizeof(self->data.Password) );
        TradingAccountPasswordField_Password = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( TradingAccountPasswordField_CurrencyID != NULL ) {
        if(TradingAccountPasswordField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, TradingAccountPasswordField_CurrencyID, TradingAccountPasswordField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, TradingAccountPasswordField_CurrencyID, sizeof(self->data.CurrencyID) );
        TradingAccountPasswordField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradingAccountPasswordField_dealloc(PyCThostFtdcTradingAccountPasswordField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountPasswordField_repr(PyCThostFtdcTradingAccountPasswordField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingAccountPasswordField_get_BrokerID(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingAccountPasswordField_set_BrokerID(PyCThostFtdcTradingAccountPasswordField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountPasswordField_get_AccountID(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTradingAccountPasswordField_set_AccountID(PyCThostFtdcTradingAccountPasswordField *self, PyObject* val, void *closure) {
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
            
///密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcTradingAccountPasswordField_get_Password(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTradingAccountPasswordField_set_Password(PyCThostFtdcTradingAccountPasswordField *self, PyObject* val, void *closure) {
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
    // memset(self->data.Password, 0, sizeof(self->data.Password));
    // memcpy(self->data.Password, buf, len);
    strncpy(self->data.Password, buf, sizeof(self->data.Password));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcTradingAccountPasswordField_get_CurrencyID(PyCThostFtdcTradingAccountPasswordField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcTradingAccountPasswordField_set_CurrencyID(PyCThostFtdcTradingAccountPasswordField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTradingAccountPasswordField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordField_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountPasswordField_get_AccountID, (setter)PyCThostFtdcTradingAccountPasswordField_set_AccountID, (char *)"AccountID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcTradingAccountPasswordField_get_Password, (setter)PyCThostFtdcTradingAccountPasswordField_set_Password, (char *)"Password", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountPasswordField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountPasswordField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountPasswordFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountPasswordField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountPasswordField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountPasswordField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountPasswordField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountPasswordField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountPasswordField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountPasswordField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountPasswordField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountPasswordFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountPasswordField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountPasswordFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountPasswordField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountPasswordFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordField", (PyObject *)&PyCThostFtdcTradingAccountPasswordFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountPasswordFieldType);
		return -1;
    }

    return 0;
}
