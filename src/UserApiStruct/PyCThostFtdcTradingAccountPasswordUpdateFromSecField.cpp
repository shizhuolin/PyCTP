
#include "PyCThostFtdcTradingAccountPasswordUpdateFromSecField.h"

///来自次席的资金账户口令变更

static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self = (PyCThostFtdcTradingAccountPasswordUpdateFromSecField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_init(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AccountID", "OldPassword", "NewPassword", "CurrencyID", "FromSec",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *TradingAccountPasswordUpdateFromSecField_BrokerID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateFromSecField_BrokerID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *TradingAccountPasswordUpdateFromSecField_AccountID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateFromSecField_AccountID_len = 0;
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    const char *TradingAccountPasswordUpdateFromSecField_OldPassword = NULL;
    Py_ssize_t TradingAccountPasswordUpdateFromSecField_OldPassword_len = 0;
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    const char *TradingAccountPasswordUpdateFromSecField_NewPassword = NULL;
    Py_ssize_t TradingAccountPasswordUpdateFromSecField_NewPassword_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *TradingAccountPasswordUpdateFromSecField_CurrencyID = NULL;
    Py_ssize_t TradingAccountPasswordUpdateFromSecField_CurrencyID_len = 0;
            
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    int TradingAccountPasswordUpdateFromSecField_FromSec = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#i", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#i", (char **)kwlist
#endif

        , &TradingAccountPasswordUpdateFromSecField_BrokerID, &TradingAccountPasswordUpdateFromSecField_BrokerID_len 
        , &TradingAccountPasswordUpdateFromSecField_AccountID, &TradingAccountPasswordUpdateFromSecField_AccountID_len 
        , &TradingAccountPasswordUpdateFromSecField_OldPassword, &TradingAccountPasswordUpdateFromSecField_OldPassword_len 
        , &TradingAccountPasswordUpdateFromSecField_NewPassword, &TradingAccountPasswordUpdateFromSecField_NewPassword_len 
        , &TradingAccountPasswordUpdateFromSecField_CurrencyID, &TradingAccountPasswordUpdateFromSecField_CurrencyID_len 
        , &TradingAccountPasswordUpdateFromSecField_FromSec 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( TradingAccountPasswordUpdateFromSecField_BrokerID != NULL ) {
        if(TradingAccountPasswordUpdateFromSecField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateFromSecField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, TradingAccountPasswordUpdateFromSecField_BrokerID, TradingAccountPasswordUpdateFromSecField_BrokerID_len);        
        strncpy(self->data.BrokerID, TradingAccountPasswordUpdateFromSecField_BrokerID, sizeof(self->data.BrokerID) );
        TradingAccountPasswordUpdateFromSecField_BrokerID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( TradingAccountPasswordUpdateFromSecField_AccountID != NULL ) {
        if(TradingAccountPasswordUpdateFromSecField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateFromSecField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, TradingAccountPasswordUpdateFromSecField_AccountID, TradingAccountPasswordUpdateFromSecField_AccountID_len);        
        strncpy(self->data.AccountID, TradingAccountPasswordUpdateFromSecField_AccountID, sizeof(self->data.AccountID) );
        TradingAccountPasswordUpdateFromSecField_AccountID = NULL;
    }
            
    ///原来的口令
    // TThostFtdcPasswordType char[41]
    if( TradingAccountPasswordUpdateFromSecField_OldPassword != NULL ) {
        if(TradingAccountPasswordUpdateFromSecField_OldPassword_len > (Py_ssize_t)sizeof(self->data.OldPassword)) {
            PyErr_Format(PyExc_ValueError, "OldPassword too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateFromSecField_OldPassword_len, (Py_ssize_t)sizeof(self->data.OldPassword));
            return -1;
        }
        // memset(self->data.OldPassword, 0, sizeof(self->data.OldPassword));
        // memcpy(self->data.OldPassword, TradingAccountPasswordUpdateFromSecField_OldPassword, TradingAccountPasswordUpdateFromSecField_OldPassword_len);        
        strncpy(self->data.OldPassword, TradingAccountPasswordUpdateFromSecField_OldPassword, sizeof(self->data.OldPassword) );
        TradingAccountPasswordUpdateFromSecField_OldPassword = NULL;
    }
            
    ///新的口令
    // TThostFtdcPasswordType char[41]
    if( TradingAccountPasswordUpdateFromSecField_NewPassword != NULL ) {
        if(TradingAccountPasswordUpdateFromSecField_NewPassword_len > (Py_ssize_t)sizeof(self->data.NewPassword)) {
            PyErr_Format(PyExc_ValueError, "NewPassword too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateFromSecField_NewPassword_len, (Py_ssize_t)sizeof(self->data.NewPassword));
            return -1;
        }
        // memset(self->data.NewPassword, 0, sizeof(self->data.NewPassword));
        // memcpy(self->data.NewPassword, TradingAccountPasswordUpdateFromSecField_NewPassword, TradingAccountPasswordUpdateFromSecField_NewPassword_len);        
        strncpy(self->data.NewPassword, TradingAccountPasswordUpdateFromSecField_NewPassword, sizeof(self->data.NewPassword) );
        TradingAccountPasswordUpdateFromSecField_NewPassword = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( TradingAccountPasswordUpdateFromSecField_CurrencyID != NULL ) {
        if(TradingAccountPasswordUpdateFromSecField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", TradingAccountPasswordUpdateFromSecField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, TradingAccountPasswordUpdateFromSecField_CurrencyID, TradingAccountPasswordUpdateFromSecField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, TradingAccountPasswordUpdateFromSecField_CurrencyID, sizeof(self->data.CurrencyID) );
        TradingAccountPasswordUpdateFromSecField_CurrencyID = NULL;
    }
            
    ///次席的交易中心代码
    // TThostFtdcDRIdentityIDType int
    self->data.FromSec = TradingAccountPasswordUpdateFromSecField_FromSec;
        

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

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"OldPassword", self->data.OldPassword//, (Py_ssize_t)sizeof(self->data.OldPassword) 
        ,"NewPassword", self->data.NewPassword//, (Py_ssize_t)sizeof(self->data.NewPassword) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"FromSec", self->data.FromSec 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcTradingAccountPasswordUpdateFromSecField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_BrokerID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_AccountID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_AccountID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OldPassword, (Py_ssize_t)sizeof(self->data.OldPassword));
    return PyBytes_FromString(self->data.OldPassword);
}

///原来的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_OldPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.NewPassword, (Py_ssize_t)sizeof(self->data.NewPassword));
    return PyBytes_FromString(self->data.NewPassword);
}

///新的口令
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_NewPassword(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_CurrencyID(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
            
///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static PyObject *PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_FromSec(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FromSec);
#else
    return PyInt_FromLong(self->data.FromSec);
#endif
}

///次席的交易中心代码
// TThostFtdcDRIdentityIDType int
static int PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_FromSec(PyCThostFtdcTradingAccountPasswordUpdateFromSecField *self, PyObject* val, void *closure) {
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
        PyErr_SetString(PyExc_OverflowError, "the FromSec value out of range for C int");
        return -1;
    }
    self->data.FromSec = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcTradingAccountPasswordUpdateFromSecField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_BrokerID, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_AccountID, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_AccountID, (char *)"AccountID", NULL},
    ///原来的口令 
    {(char *)"OldPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_OldPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_OldPassword, (char *)"OldPassword", NULL},
    ///新的口令 
    {(char *)"NewPassword", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_NewPassword, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_NewPassword, (char *)"NewPassword", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_get_CurrencyID, (setter)PyCThostFtdcTradingAccountPasswordUpdateFromSecField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///次席的交易中心代码 
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
