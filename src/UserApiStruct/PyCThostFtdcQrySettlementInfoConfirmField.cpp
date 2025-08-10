
#include "PyCThostFtdcQrySettlementInfoConfirmField.h"

///查询结算信息确认域

static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySettlementInfoConfirmField *self = (PyCThostFtdcQrySettlementInfoConfirmField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySettlementInfoConfirmField_init(PyCThostFtdcQrySettlementInfoConfirmField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "AccountID", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QrySettlementInfoConfirmField_BrokerID = NULL;
    Py_ssize_t QrySettlementInfoConfirmField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QrySettlementInfoConfirmField_InvestorID = NULL;
    Py_ssize_t QrySettlementInfoConfirmField_InvestorID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *QrySettlementInfoConfirmField_AccountID = NULL;
    Py_ssize_t QrySettlementInfoConfirmField_AccountID_len = 0;
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    const char *QrySettlementInfoConfirmField_CurrencyID = NULL;
    Py_ssize_t QrySettlementInfoConfirmField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QrySettlementInfoConfirmField_BrokerID, &QrySettlementInfoConfirmField_BrokerID_len 
        , &QrySettlementInfoConfirmField_InvestorID, &QrySettlementInfoConfirmField_InvestorID_len 
        , &QrySettlementInfoConfirmField_AccountID, &QrySettlementInfoConfirmField_AccountID_len 
        , &QrySettlementInfoConfirmField_CurrencyID, &QrySettlementInfoConfirmField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QrySettlementInfoConfirmField_BrokerID != NULL ) {
        if(QrySettlementInfoConfirmField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QrySettlementInfoConfirmField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QrySettlementInfoConfirmField_BrokerID, QrySettlementInfoConfirmField_BrokerID_len);        
        strncpy(self->data.BrokerID, QrySettlementInfoConfirmField_BrokerID, sizeof(self->data.BrokerID) );
        QrySettlementInfoConfirmField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QrySettlementInfoConfirmField_InvestorID != NULL ) {
        if(QrySettlementInfoConfirmField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QrySettlementInfoConfirmField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QrySettlementInfoConfirmField_InvestorID, QrySettlementInfoConfirmField_InvestorID_len);        
        strncpy(self->data.InvestorID, QrySettlementInfoConfirmField_InvestorID, sizeof(self->data.InvestorID) );
        QrySettlementInfoConfirmField_InvestorID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( QrySettlementInfoConfirmField_AccountID != NULL ) {
        if(QrySettlementInfoConfirmField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", QrySettlementInfoConfirmField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, QrySettlementInfoConfirmField_AccountID, QrySettlementInfoConfirmField_AccountID_len);        
        strncpy(self->data.AccountID, QrySettlementInfoConfirmField_AccountID, sizeof(self->data.AccountID) );
        QrySettlementInfoConfirmField_AccountID = NULL;
    }
            
    ///币种代码
    // TThostFtdcCurrencyIDType char[4]
    if( QrySettlementInfoConfirmField_CurrencyID != NULL ) {
        if(QrySettlementInfoConfirmField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", QrySettlementInfoConfirmField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, QrySettlementInfoConfirmField_CurrencyID, QrySettlementInfoConfirmField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, QrySettlementInfoConfirmField_CurrencyID, sizeof(self->data.CurrencyID) );
        QrySettlementInfoConfirmField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySettlementInfoConfirmField_dealloc(PyCThostFtdcQrySettlementInfoConfirmField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_repr(PyCThostFtdcQrySettlementInfoConfirmField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySettlementInfoConfirmField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_BrokerID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQrySettlementInfoConfirmField_set_BrokerID(PyCThostFtdcQrySettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_InvestorID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQrySettlementInfoConfirmField_set_InvestorID(PyCThostFtdcQrySettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_AccountID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcQrySettlementInfoConfirmField_set_AccountID(PyCThostFtdcQrySettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQrySettlementInfoConfirmField_get_CurrencyID(PyCThostFtdcQrySettlementInfoConfirmField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种代码
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQrySettlementInfoConfirmField_set_CurrencyID(PyCThostFtdcQrySettlementInfoConfirmField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQrySettlementInfoConfirmField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_BrokerID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_InvestorID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_InvestorID, (char *)"InvestorID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_AccountID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_AccountID, (char *)"AccountID", NULL},
    ///币种代码 
    {(char *)"CurrencyID", (getter)PyCThostFtdcQrySettlementInfoConfirmField_get_CurrencyID, (setter)PyCThostFtdcQrySettlementInfoConfirmField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySettlementInfoConfirmFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySettlementInfoConfirmField",	/* tp_name */
	sizeof(PyCThostFtdcQrySettlementInfoConfirmField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySettlementInfoConfirmField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySettlementInfoConfirmField_repr,   /* tp_repr */
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
	"CThostFtdcQrySettlementInfoConfirmField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySettlementInfoConfirmField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySettlementInfoConfirmField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySettlementInfoConfirmField_new,       /* tp_new */
};

int PyCThostFtdcQrySettlementInfoConfirmFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySettlementInfoConfirmField  */
	if (PyType_Ready(&PyCThostFtdcQrySettlementInfoConfirmFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySettlementInfoConfirmField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySettlementInfoConfirmFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySettlementInfoConfirmField", (PyObject *)&PyCThostFtdcQrySettlementInfoConfirmFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySettlementInfoConfirmField to module");
        Py_DECREF(&PyCThostFtdcQrySettlementInfoConfirmFieldType);
		return -1;
    }

    return 0;
}
