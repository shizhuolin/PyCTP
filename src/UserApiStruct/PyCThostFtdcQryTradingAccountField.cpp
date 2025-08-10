
#include "PyCThostFtdcQryTradingAccountField.h"

///查询资金账户

static PyObject *PyCThostFtdcQryTradingAccountField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTradingAccountField *self = (PyCThostFtdcQryTradingAccountField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryTradingAccountField_init(PyCThostFtdcQryTradingAccountField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "CurrencyID", "BizType", "AccountID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryTradingAccountField_BrokerID = NULL;
    Py_ssize_t QryTradingAccountField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryTradingAccountField_InvestorID = NULL;
    Py_ssize_t QryTradingAccountField_InvestorID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *QryTradingAccountField_CurrencyID = NULL;
    Py_ssize_t QryTradingAccountField_CurrencyID_len = 0;
            
    ///业务类型
    // TThostFtdcBizTypeType char
    char QryTradingAccountField_BizType = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *QryTradingAccountField_AccountID = NULL;
    Py_ssize_t QryTradingAccountField_AccountID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#", (char **)kwlist
#endif

        , &QryTradingAccountField_BrokerID, &QryTradingAccountField_BrokerID_len 
        , &QryTradingAccountField_InvestorID, &QryTradingAccountField_InvestorID_len 
        , &QryTradingAccountField_CurrencyID, &QryTradingAccountField_CurrencyID_len 
        , &QryTradingAccountField_BizType 
        , &QryTradingAccountField_AccountID, &QryTradingAccountField_AccountID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryTradingAccountField_BrokerID != NULL ) {
        if(QryTradingAccountField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryTradingAccountField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryTradingAccountField_BrokerID, QryTradingAccountField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryTradingAccountField_BrokerID, sizeof(self->data.BrokerID) );
        QryTradingAccountField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryTradingAccountField_InvestorID != NULL ) {
        if(QryTradingAccountField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryTradingAccountField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryTradingAccountField_InvestorID, QryTradingAccountField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryTradingAccountField_InvestorID, sizeof(self->data.InvestorID) );
        QryTradingAccountField_InvestorID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( QryTradingAccountField_CurrencyID != NULL ) {
        if(QryTradingAccountField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", QryTradingAccountField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, QryTradingAccountField_CurrencyID, QryTradingAccountField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, QryTradingAccountField_CurrencyID, sizeof(self->data.CurrencyID) );
        QryTradingAccountField_CurrencyID = NULL;
    }
            
    ///业务类型
    // TThostFtdcBizTypeType char
    self->data.BizType = QryTradingAccountField_BizType;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( QryTradingAccountField_AccountID != NULL ) {
        if(QryTradingAccountField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", QryTradingAccountField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, QryTradingAccountField_AccountID, QryTradingAccountField_AccountID_len);        
        strncpy(self->data.AccountID, QryTradingAccountField_AccountID, sizeof(self->data.AccountID) );
        QryTradingAccountField_AccountID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryTradingAccountField_dealloc(PyCThostFtdcQryTradingAccountField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTradingAccountField_repr(PyCThostFtdcQryTradingAccountField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"BizType", self->data.BizType 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingAccountField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryTradingAccountField_get_BrokerID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryTradingAccountField_set_BrokerID(PyCThostFtdcQryTradingAccountField *self, PyObject* val, void *closure) {
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
            
///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcQryTradingAccountField_get_InvestorID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryTradingAccountField_set_InvestorID(PyCThostFtdcQryTradingAccountField *self, PyObject* val, void *closure) {
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
    // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
    // memcpy(self->data.InvestorID, buf, len);
    strncpy(self->data.InvestorID, buf, sizeof(self->data.InvestorID));
    return 0;
}
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcQryTradingAccountField_get_CurrencyID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQryTradingAccountField_set_CurrencyID(PyCThostFtdcQryTradingAccountField *self, PyObject* val, void *closure) {
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
            
///业务类型
// TThostFtdcBizTypeType char
static PyObject *PyCThostFtdcQryTradingAccountField_get_BizType(PyCThostFtdcQryTradingAccountField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.BizType), 1);
}

///业务类型
// TThostFtdcBizTypeType char
static int PyCThostFtdcQryTradingAccountField_set_BizType(PyCThostFtdcQryTradingAccountField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BizType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BizType)) {
        PyErr_SetString(PyExc_ValueError, "BizType must be equal 1 bytes");
        return -1;
    }
    self->data.BizType = *buf;
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcQryTradingAccountField_get_AccountID(PyCThostFtdcQryTradingAccountField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcQryTradingAccountField_set_AccountID(PyCThostFtdcQryTradingAccountField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryTradingAccountField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryTradingAccountField_get_BrokerID, (setter)PyCThostFtdcQryTradingAccountField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryTradingAccountField_get_InvestorID, (setter)PyCThostFtdcQryTradingAccountField_set_InvestorID, (char *)"InvestorID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcQryTradingAccountField_get_CurrencyID, (setter)PyCThostFtdcQryTradingAccountField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///业务类型 
    {(char *)"BizType", (getter)PyCThostFtdcQryTradingAccountField_get_BizType, (setter)PyCThostFtdcQryTradingAccountField_set_BizType, (char *)"BizType", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcQryTradingAccountField_get_AccountID, (setter)PyCThostFtdcQryTradingAccountField_set_AccountID, (char *)"AccountID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTradingAccountFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTradingAccountField",	/* tp_name */
	sizeof(PyCThostFtdcQryTradingAccountField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTradingAccountField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTradingAccountField_repr,   /* tp_repr */
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
	"CThostFtdcQryTradingAccountField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTradingAccountField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTradingAccountField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTradingAccountField_new,       /* tp_new */
};

int PyCThostFtdcQryTradingAccountFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTradingAccountField  */
	if (PyType_Ready(&PyCThostFtdcQryTradingAccountFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTradingAccountField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTradingAccountFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTradingAccountField", (PyObject *)&PyCThostFtdcQryTradingAccountFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingAccountField to module");
        Py_DECREF(&PyCThostFtdcQryTradingAccountFieldType);
		return -1;
    }

    return 0;
}
