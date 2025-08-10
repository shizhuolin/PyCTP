
#include "PyCThostFtdcQrySettlementInfoField.h"

///查询投资者结算结果

static PyObject *PyCThostFtdcQrySettlementInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySettlementInfoField *self = (PyCThostFtdcQrySettlementInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySettlementInfoField_init(PyCThostFtdcQrySettlementInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "TradingDay", "AccountID", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QrySettlementInfoField_BrokerID = NULL;
    Py_ssize_t QrySettlementInfoField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QrySettlementInfoField_InvestorID = NULL;
    Py_ssize_t QrySettlementInfoField_InvestorID_len = 0;
            
    ///交易日
    // TThostFtdcDateType char[9]
    const char *QrySettlementInfoField_TradingDay = NULL;
    Py_ssize_t QrySettlementInfoField_TradingDay_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *QrySettlementInfoField_AccountID = NULL;
    Py_ssize_t QrySettlementInfoField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *QrySettlementInfoField_CurrencyID = NULL;
    Py_ssize_t QrySettlementInfoField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

        , &QrySettlementInfoField_BrokerID, &QrySettlementInfoField_BrokerID_len 
        , &QrySettlementInfoField_InvestorID, &QrySettlementInfoField_InvestorID_len 
        , &QrySettlementInfoField_TradingDay, &QrySettlementInfoField_TradingDay_len 
        , &QrySettlementInfoField_AccountID, &QrySettlementInfoField_AccountID_len 
        , &QrySettlementInfoField_CurrencyID, &QrySettlementInfoField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QrySettlementInfoField_BrokerID != NULL ) {
        if(QrySettlementInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QrySettlementInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QrySettlementInfoField_BrokerID, QrySettlementInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, QrySettlementInfoField_BrokerID, sizeof(self->data.BrokerID) );
        QrySettlementInfoField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QrySettlementInfoField_InvestorID != NULL ) {
        if(QrySettlementInfoField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QrySettlementInfoField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QrySettlementInfoField_InvestorID, QrySettlementInfoField_InvestorID_len);        
        strncpy(self->data.InvestorID, QrySettlementInfoField_InvestorID, sizeof(self->data.InvestorID) );
        QrySettlementInfoField_InvestorID = NULL;
    }
            
    ///交易日
    // TThostFtdcDateType char[9]
    if( QrySettlementInfoField_TradingDay != NULL ) {
        if(QrySettlementInfoField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", QrySettlementInfoField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, QrySettlementInfoField_TradingDay, QrySettlementInfoField_TradingDay_len);        
        strncpy(self->data.TradingDay, QrySettlementInfoField_TradingDay, sizeof(self->data.TradingDay) );
        QrySettlementInfoField_TradingDay = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( QrySettlementInfoField_AccountID != NULL ) {
        if(QrySettlementInfoField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", QrySettlementInfoField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, QrySettlementInfoField_AccountID, QrySettlementInfoField_AccountID_len);        
        strncpy(self->data.AccountID, QrySettlementInfoField_AccountID, sizeof(self->data.AccountID) );
        QrySettlementInfoField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( QrySettlementInfoField_CurrencyID != NULL ) {
        if(QrySettlementInfoField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", QrySettlementInfoField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, QrySettlementInfoField_CurrencyID, QrySettlementInfoField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, QrySettlementInfoField_CurrencyID, sizeof(self->data.CurrencyID) );
        QrySettlementInfoField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySettlementInfoField_dealloc(PyCThostFtdcQrySettlementInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySettlementInfoField_repr(PyCThostFtdcQrySettlementInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQrySettlementInfoField_get_BrokerID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQrySettlementInfoField_set_BrokerID(PyCThostFtdcQrySettlementInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQrySettlementInfoField_get_InvestorID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQrySettlementInfoField_set_InvestorID(PyCThostFtdcQrySettlementInfoField *self, PyObject* val, void *closure) {
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
            
///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcQrySettlementInfoField_get_TradingDay(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcQrySettlementInfoField_set_TradingDay(PyCThostFtdcQrySettlementInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcQrySettlementInfoField_get_AccountID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcQrySettlementInfoField_set_AccountID(PyCThostFtdcQrySettlementInfoField *self, PyObject* val, void *closure) {
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
            
///币种代码
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcQrySettlementInfoField_get_CurrencyID(PyCThostFtdcQrySettlementInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQrySettlementInfoField_set_CurrencyID(PyCThostFtdcQrySettlementInfoField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySettlementInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQrySettlementInfoField_get_BrokerID, (setter)PyCThostFtdcQrySettlementInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQrySettlementInfoField_get_InvestorID, (setter)PyCThostFtdcQrySettlementInfoField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcQrySettlementInfoField_get_TradingDay, (setter)PyCThostFtdcQrySettlementInfoField_set_TradingDay, (char *)"TradingDay", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcQrySettlementInfoField_get_AccountID, (setter)PyCThostFtdcQrySettlementInfoField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcQrySettlementInfoField_get_CurrencyID, (setter)PyCThostFtdcQrySettlementInfoField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySettlementInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySettlementInfoField",	/* tp_name */
	sizeof(PyCThostFtdcQrySettlementInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySettlementInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySettlementInfoField_repr,   /* tp_repr */
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
	"CThostFtdcQrySettlementInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySettlementInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySettlementInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySettlementInfoField_new,       /* tp_new */
};

int PyCThostFtdcQrySettlementInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySettlementInfoField  */
	if (PyType_Ready(&PyCThostFtdcQrySettlementInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySettlementInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySettlementInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySettlementInfoField", (PyObject *)&PyCThostFtdcQrySettlementInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySettlementInfoField to module");
        Py_DECREF(&PyCThostFtdcQrySettlementInfoFieldType);
		return -1;
    }

    return 0;
}
