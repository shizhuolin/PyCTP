
#include "PyCThostFtdcQryTradingCodeField.h"

///查询交易编码

static PyObject *PyCThostFtdcQryTradingCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryTradingCodeField *self = (PyCThostFtdcQryTradingCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryTradingCodeField_init(PyCThostFtdcQryTradingCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID", "ClientID", "ClientIDType", "InvestUnitID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryTradingCodeField_BrokerID = NULL;
    Py_ssize_t QryTradingCodeField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryTradingCodeField_InvestorID = NULL;
    Py_ssize_t QryTradingCodeField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryTradingCodeField_ExchangeID = NULL;
    Py_ssize_t QryTradingCodeField_ExchangeID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QryTradingCodeField_ClientID = NULL;
    Py_ssize_t QryTradingCodeField_ClientID_len = 0;
            
    ///交易编码类型
    // TThostFtdcClientIDTypeType char
    char QryTradingCodeField_ClientIDType = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryTradingCodeField_InvestUnitID = NULL;
    Py_ssize_t QryTradingCodeField_InvestUnitID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cs#", (char **)kwlist
#endif

        , &QryTradingCodeField_BrokerID, &QryTradingCodeField_BrokerID_len 
        , &QryTradingCodeField_InvestorID, &QryTradingCodeField_InvestorID_len 
        , &QryTradingCodeField_ExchangeID, &QryTradingCodeField_ExchangeID_len 
        , &QryTradingCodeField_ClientID, &QryTradingCodeField_ClientID_len 
        , &QryTradingCodeField_ClientIDType 
        , &QryTradingCodeField_InvestUnitID, &QryTradingCodeField_InvestUnitID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryTradingCodeField_BrokerID != NULL ) {
        if(QryTradingCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryTradingCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryTradingCodeField_BrokerID, QryTradingCodeField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryTradingCodeField_BrokerID, sizeof(self->data.BrokerID) );
        QryTradingCodeField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryTradingCodeField_InvestorID != NULL ) {
        if(QryTradingCodeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryTradingCodeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryTradingCodeField_InvestorID, QryTradingCodeField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryTradingCodeField_InvestorID, sizeof(self->data.InvestorID) );
        QryTradingCodeField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryTradingCodeField_ExchangeID != NULL ) {
        if(QryTradingCodeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryTradingCodeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryTradingCodeField_ExchangeID, QryTradingCodeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryTradingCodeField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryTradingCodeField_ExchangeID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QryTradingCodeField_ClientID != NULL ) {
        if(QryTradingCodeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QryTradingCodeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QryTradingCodeField_ClientID, QryTradingCodeField_ClientID_len);        
        strncpy(self->data.ClientID, QryTradingCodeField_ClientID, sizeof(self->data.ClientID) );
        QryTradingCodeField_ClientID = NULL;
    }
            
    ///交易编码类型
    // TThostFtdcClientIDTypeType char
    self->data.ClientIDType = QryTradingCodeField_ClientIDType;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryTradingCodeField_InvestUnitID != NULL ) {
        if(QryTradingCodeField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryTradingCodeField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryTradingCodeField_InvestUnitID, QryTradingCodeField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryTradingCodeField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryTradingCodeField_InvestUnitID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryTradingCodeField_dealloc(PyCThostFtdcQryTradingCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryTradingCodeField_repr(PyCThostFtdcQryTradingCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"ClientIDType", self->data.ClientIDType 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryTradingCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryTradingCodeField_get_BrokerID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryTradingCodeField_set_BrokerID(PyCThostFtdcQryTradingCodeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryTradingCodeField_get_InvestorID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryTradingCodeField_set_InvestorID(PyCThostFtdcQryTradingCodeField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryTradingCodeField_get_ExchangeID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryTradingCodeField_set_ExchangeID(PyCThostFtdcQryTradingCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcQryTradingCodeField_get_ClientID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQryTradingCodeField_set_ClientID(PyCThostFtdcQryTradingCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///交易编码类型
// TThostFtdcClientIDTypeType char
static PyObject *PyCThostFtdcQryTradingCodeField_get_ClientIDType(PyCThostFtdcQryTradingCodeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ClientIDType), 1);
}

///交易编码类型
// TThostFtdcClientIDTypeType char
static int PyCThostFtdcQryTradingCodeField_set_ClientIDType(PyCThostFtdcQryTradingCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientIDType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientIDType)) {
        PyErr_SetString(PyExc_ValueError, "ClientIDType must be equal 1 bytes");
        return -1;
    }
    self->data.ClientIDType = *buf;
    return 0;
}
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQryTradingCodeField_get_InvestUnitID(PyCThostFtdcQryTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryTradingCodeField_set_InvestUnitID(PyCThostFtdcQryTradingCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryTradingCodeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryTradingCodeField_get_BrokerID, (setter)PyCThostFtdcQryTradingCodeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryTradingCodeField_get_InvestorID, (setter)PyCThostFtdcQryTradingCodeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryTradingCodeField_get_ExchangeID, (setter)PyCThostFtdcQryTradingCodeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQryTradingCodeField_get_ClientID, (setter)PyCThostFtdcQryTradingCodeField_set_ClientID, (char *)"ClientID", NULL},
    ///交易编码类型 
    {(char *)"ClientIDType", (getter)PyCThostFtdcQryTradingCodeField_get_ClientIDType, (setter)PyCThostFtdcQryTradingCodeField_set_ClientIDType, (char *)"ClientIDType", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryTradingCodeField_get_InvestUnitID, (setter)PyCThostFtdcQryTradingCodeField_set_InvestUnitID, (char *)"InvestUnitID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryTradingCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryTradingCodeField",	/* tp_name */
	sizeof(PyCThostFtdcQryTradingCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryTradingCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryTradingCodeField_repr,   /* tp_repr */
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
	"CThostFtdcQryTradingCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryTradingCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryTradingCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryTradingCodeField_new,       /* tp_new */
};

int PyCThostFtdcQryTradingCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryTradingCodeField  */
	if (PyType_Ready(&PyCThostFtdcQryTradingCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryTradingCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryTradingCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryTradingCodeField", (PyObject *)&PyCThostFtdcQryTradingCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryTradingCodeField to module");
        Py_DECREF(&PyCThostFtdcQryTradingCodeFieldType);
		return -1;
    }

    return 0;
}
