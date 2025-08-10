
#include "PyCThostFtdcTradingAccountPasswordUpdateField.h"

///资金账户口令变更域

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordUpdateField *self = (PyCThostFtdcTradingAccountPasswordUpdateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordUpdateField_init(PyCThostFtdcTradingAccountPasswordUpdateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "OldPassword", "NewPassword", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingAccountPasswordUpdateField_BrokerID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *TradingAccountPasswordUpdateField_AccountID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateField_AccountID_len = 0;
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    const char *TradingAccountPasswordUpdateField_OldPassword = NULL;
    Py_ssize_t TradingAccountPasswordUpdateField_OldPassword_len = 0;
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    const char *TradingAccountPasswordUpdateField_NewPassword = NULL;
    Py_ssize_t TradingAccountPasswordUpdateField_NewPassword_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *TradingAccountPasswordUpdateField_CurrencyID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

        , &TradingAccountPasswordUpdateField_BrokerID, &TradingAccountPasswordUpdateField_BrokerID_len 
        , &TradingAccountPasswordUpdateField_AccountID, &TradingAccountPasswordUpdateField_AccountID_len 
        , &TradingAccountPasswordUpdateField_OldPassword, &TradingAccountPasswordUpdateField_OldPassword_len 
        , &TradingAccountPasswordUpdateField_NewPassword, &TradingAccountPasswordUpdateField_NewPassword_len 
        , &TradingAccountPasswordUpdateField_CurrencyID, &TradingAccountPasswordUpdateField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingAccountPasswordUpdateField_BrokerID != NULL ) {
        if(TradingAccountPasswordUpdateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingAccountPasswordUpdateField_BrokerID, TradingAccountPasswordUpdateField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingAccountPasswordUpdateField_BrokerID, sizeof(self->data.BrokerID) );
        TradingAccountPasswordUpdateField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( TradingAccountPasswordUpdateField_AccountID != NULL ) {
        if(TradingAccountPasswordUpdateField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, TradingAccountPasswordUpdateField_AccountID, TradingAccountPasswordUpdateField_AccountID_len);        
        strncpy(self->data.AccountID, TradingAccountPasswordUpdateField_AccountID, sizeof(self->data.AccountID) );
        TradingAccountPasswordUpdateField_AccountID = NULL;
    }
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    if( TradingAccountPasswordUpdateField_OldPassword != NULL ) {
        if(TradingAccountPasswordUpdateField_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateField_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
            return -1;
        }
        // memset(self->data.OldPassword, 0, sizeof(self->data.OldPassword));
        // memcpy(self->data.OldPassword, TradingAccountPasswordUpdateField_OldPassword, TradingAccountPasswordUpdateField_OldPassword_len);        
        strncpy(self->data.OldPassword, TradingAccountPasswordUpdateField_OldPassword, sizeof(self->data.OldPassword) );
        TradingAccountPasswordUpdateField_OldPassword = NULL;
    }
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    if( TradingAccountPasswordUpdateField_NewPassword != NULL ) {
        if(TradingAccountPasswordUpdateField_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateField_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
            return -1;
        }
        // memset(self->data.NewPassword, 0, sizeof(self->data.NewPassword));
        // memcpy(self->data.NewPassword, TradingAccountPasswordUpdateField_NewPassword, TradingAccountPasswordUpdateField_NewPassword_len);        
        strncpy(self->data.NewPassword, TradingAccountPasswordUpdateField_NewPassword, sizeof(self->data.NewPassword) );
        TradingAccountPasswordUpdateField_NewPassword = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( TradingAccountPasswordUpdateField_CurrencyID != NULL ) {
        if(TradingAccountPasswordUpdateField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, TradingAccountPasswordUpdateField_CurrencyID, TradingAccountPasswordUpdateField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, TradingAccountPasswordUpdateField_CurrencyID, sizeof(self->data.CurrencyID) );
        TradingAccountPasswordUpdateField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcTradingAccountPasswordUpdateField_dealloc(PyCThostFtdcTradingAccountPasswordUpdateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_repr(PyCThostFtdcTradingAccountPasswordUpdateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"OldPassword", self->data.OldPassword//, (Py_ssize_t)sizeof(self->data.OldPassword) 
        ,"NewPassword", self->data.NewPassword//, (Py_ssize_t)sizeof(self->data.NewPassword) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingAccountPasswordUpdateField_set_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_AccountID(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTradingAccountPasswordUpdateField_set_AccountID(PyCThostFtdcTradingAccountPasswordUpdateField *self, PyObject* val, void *closure) {
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
            
///原来的口令
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OldPassword, (Py_ssize_t)sizeof(self->data.OldPassword));
    return PyBytes_FromString(self->data.OldPassword);
}

///原来的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTradingAccountPasswordUpdateField_set_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateField *self, PyObject* val, void *closure) {
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
    // memset(self->data.OldPassword, 0, sizeof(self->data.OldPassword));
    // memcpy(self->data.OldPassword, buf, len);
    strncpy(self->data.OldPassword, buf, sizeof(self->data.OldPassword));
    return 0;
}
            
///新的口令
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewPassword, (Py_ssize_t)sizeof(self->data.NewPassword));
    return PyBytes_FromString(self->data.NewPassword);
}

///新的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTradingAccountPasswordUpdateField_set_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateField *self, PyObject* val, void *closure) {
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
    // memset(self->data.NewPassword, 0, sizeof(self->data.NewPassword));
    // memcpy(self->data.NewPassword, buf, len);
    strncpy(self->data.NewPassword, buf, sizeof(self->data.NewPassword));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateField_get_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcTradingAccountPasswordUpdateField_set_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_AccountID, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_AccountID, (char *)"AccountID", NULL},
    ///原来的口令 
    {(char *)"OldPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_OldPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_OldPassword, (char *)"OldPassword", NULL},
    ///新的口令 
    {(char *)"NewPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_NewPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_NewPassword, (char *)"NewPassword", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountPasswordUpdateField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountPasswordUpdateField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcTradingAccountPasswordUpdateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcTradingAccountPasswordUpdateField",	/* tp_name */
	sizeof(PyCThostFtdcTradingAccountPasswordUpdateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcTradingAccountPasswordUpdateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcTradingAccountPasswordUpdateField_repr,   /* tp_repr */
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
	"CThostFtdcTradingAccountPasswordUpdateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcTradingAccountPasswordUpdateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcTradingAccountPasswordUpdateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcTradingAccountPasswordUpdateField_new,       /* tp_new */
};

int PyCThostFtdcTradingAccountPasswordUpdateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcTradingAccountPasswordUpdateField  */
	if (PyType_Ready(&PyCThostFtdcTradingAccountPasswordUpdateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcTradingAccountPasswordUpdateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcTradingAccountPasswordUpdateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcTradingAccountPasswordUpdateField", (PyObject *)&PyCThostFtdcTradingAccountPasswordUpdateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcTradingAccountPasswordUpdateField to module");
        Py_DECREF(&PyCThostFtdcTradingAccountPasswordUpdateFieldType);
		return -1;
    }

    return 0;
}
