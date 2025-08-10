
#include "PyCThostFtdcSyncingTradingCodeField.h"

///正在同步中的交易代码

static PyObject *PyCThostFtdcSyncingTradingCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSyncingTradingCodeField *self = (PyCThostFtdcSyncingTradingCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSyncingTradingCodeField_init(PyCThostFtdcSyncingTradingCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InvestorID", "BrokerID", "ExchangeID", "ClientID", "IsActive", "ClientIDType",  NULL};


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *SyncingTradingCodeField_InvestorID = NULL;
    Py_ssize_t SyncingTradingCodeField_InvestorID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SyncingTradingCodeField_BrokerID = NULL;
    Py_ssize_t SyncingTradingCodeField_BrokerID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *SyncingTradingCodeField_ExchangeID = NULL;
    Py_ssize_t SyncingTradingCodeField_ExchangeID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *SyncingTradingCodeField_ClientID = NULL;
    Py_ssize_t SyncingTradingCodeField_ClientID_len = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int SyncingTradingCodeField_IsActive = 0;
        
    ///交易编码类型
    // TThostFtdcClientIDTypeType char
    char SyncingTradingCodeField_ClientIDType = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#ic", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#ic", (char **)kwlist
#endif

        , &SyncingTradingCodeField_InvestorID, &SyncingTradingCodeField_InvestorID_len 
        , &SyncingTradingCodeField_BrokerID, &SyncingTradingCodeField_BrokerID_len 
        , &SyncingTradingCodeField_ExchangeID, &SyncingTradingCodeField_ExchangeID_len 
        , &SyncingTradingCodeField_ClientID, &SyncingTradingCodeField_ClientID_len 
        , &SyncingTradingCodeField_IsActive 
        , &SyncingTradingCodeField_ClientIDType 


    )) {
        return -1;
    }


    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( SyncingTradingCodeField_InvestorID != NULL ) {
        if(SyncingTradingCodeField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", SyncingTradingCodeField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, SyncingTradingCodeField_InvestorID, SyncingTradingCodeField_InvestorID_len);        
        strncpy(self->data.InvestorID, SyncingTradingCodeField_InvestorID, sizeof(self->data.InvestorID) );
        SyncingTradingCodeField_InvestorID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SyncingTradingCodeField_BrokerID != NULL ) {
        if(SyncingTradingCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SyncingTradingCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SyncingTradingCodeField_BrokerID, SyncingTradingCodeField_BrokerID_len);        
        strncpy(self->data.BrokerID, SyncingTradingCodeField_BrokerID, sizeof(self->data.BrokerID) );
        SyncingTradingCodeField_BrokerID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( SyncingTradingCodeField_ExchangeID != NULL ) {
        if(SyncingTradingCodeField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", SyncingTradingCodeField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, SyncingTradingCodeField_ExchangeID, SyncingTradingCodeField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, SyncingTradingCodeField_ExchangeID, sizeof(self->data.ExchangeID) );
        SyncingTradingCodeField_ExchangeID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( SyncingTradingCodeField_ClientID != NULL ) {
        if(SyncingTradingCodeField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", SyncingTradingCodeField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, SyncingTradingCodeField_ClientID, SyncingTradingCodeField_ClientID_len);        
        strncpy(self->data.ClientID, SyncingTradingCodeField_ClientID, sizeof(self->data.ClientID) );
        SyncingTradingCodeField_ClientID = NULL;
    }
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = SyncingTradingCodeField_IsActive;
        
    ///交易编码类型
    // TThostFtdcClientIDTypeType char
    self->data.ClientIDType = SyncingTradingCodeField_ClientIDType;
            

    return 0;
}

static void PyCThostFtdcSyncingTradingCodeField_dealloc(PyCThostFtdcSyncingTradingCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSyncingTradingCodeField_repr(PyCThostFtdcSyncingTradingCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:i,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:i,s:c}"
#endif

        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"IsActive", self->data.IsActive 
        ,"ClientIDType", self->data.ClientIDType 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSyncingTradingCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///投资者代码
// TThostFtdcInvestorIDType char[13]
static PyObject *PyCThostFtdcSyncingTradingCodeField_get_InvestorID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcSyncingTradingCodeField_set_InvestorID(PyCThostFtdcSyncingTradingCodeField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSyncingTradingCodeField_get_BrokerID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSyncingTradingCodeField_set_BrokerID(PyCThostFtdcSyncingTradingCodeField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcSyncingTradingCodeField_get_ExchangeID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcSyncingTradingCodeField_set_ExchangeID(PyCThostFtdcSyncingTradingCodeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSyncingTradingCodeField_get_ClientID(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcSyncingTradingCodeField_set_ClientID(PyCThostFtdcSyncingTradingCodeField *self, PyObject* val, void *closure) {
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
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcSyncingTradingCodeField_get_IsActive(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcSyncingTradingCodeField_set_IsActive(PyCThostFtdcSyncingTradingCodeField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActive value out of range for C int");
        return -1;
    }
    self->data.IsActive = (int)buf;
    return 0;
}
        
///交易编码类型
// TThostFtdcClientIDTypeType char
static PyObject *PyCThostFtdcSyncingTradingCodeField_get_ClientIDType(PyCThostFtdcSyncingTradingCodeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ClientIDType), 1);
}

///交易编码类型
// TThostFtdcClientIDTypeType char
static int PyCThostFtdcSyncingTradingCodeField_set_ClientIDType(PyCThostFtdcSyncingTradingCodeField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcSyncingTradingCodeField_getset[] = {
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcSyncingTradingCodeField_get_InvestorID, (setter)PyCThostFtdcSyncingTradingCodeField_set_InvestorID, (char *)"InvestorID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSyncingTradingCodeField_get_BrokerID, (setter)PyCThostFtdcSyncingTradingCodeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcSyncingTradingCodeField_get_ExchangeID, (setter)PyCThostFtdcSyncingTradingCodeField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcSyncingTradingCodeField_get_ClientID, (setter)PyCThostFtdcSyncingTradingCodeField_set_ClientID, (char *)"ClientID", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcSyncingTradingCodeField_get_IsActive, (setter)PyCThostFtdcSyncingTradingCodeField_set_IsActive, (char *)"IsActive", NULL},
    ///交易编码类型 
    {(char *)"ClientIDType", (getter)PyCThostFtdcSyncingTradingCodeField_get_ClientIDType, (setter)PyCThostFtdcSyncingTradingCodeField_set_ClientIDType, (char *)"ClientIDType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSyncingTradingCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSyncingTradingCodeField",	/* tp_name */
	sizeof(PyCThostFtdcSyncingTradingCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSyncingTradingCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSyncingTradingCodeField_repr,   /* tp_repr */
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
	"CThostFtdcSyncingTradingCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSyncingTradingCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSyncingTradingCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSyncingTradingCodeField_new,       /* tp_new */
};

int PyCThostFtdcSyncingTradingCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSyncingTradingCodeField  */
	if (PyType_Ready(&PyCThostFtdcSyncingTradingCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSyncingTradingCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSyncingTradingCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSyncingTradingCodeField", (PyObject *)&PyCThostFtdcSyncingTradingCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSyncingTradingCodeField to module");
        Py_DECREF(&PyCThostFtdcSyncingTradingCodeFieldType);
		return -1;
    }

    return 0;
}
