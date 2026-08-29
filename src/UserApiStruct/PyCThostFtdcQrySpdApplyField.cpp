
#include "PyCThostFtdcQrySpdApplyField.h"

///套利套保申请查询

static PyObject *PyCThostFtdcQrySpdApplyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySpdApplyField *self = (PyCThostFtdcQrySpdApplyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcQrySpdApplyField_init(PyCThostFtdcQrySpdApplyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID", "OrderSysID", "FirstLegInstrumentID", "SecondLegInstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QrySpdApplyField_BrokerID = NULL;
    Py_ssize_t QrySpdApplyField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QrySpdApplyField_InvestorID = NULL;
    Py_ssize_t QrySpdApplyField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QrySpdApplyField_ExchangeID = NULL;
    Py_ssize_t QrySpdApplyField_ExchangeID_len = 0;
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    const char *QrySpdApplyField_OrderSysID = NULL;
    Py_ssize_t QrySpdApplyField_OrderSysID_len = 0;
            
    ///第一腿合约编码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QrySpdApplyField_FirstLegInstrumentID = NULL;
    Py_ssize_t QrySpdApplyField_FirstLegInstrumentID_len = 0;
            
    ///第二腿合约编码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QrySpdApplyField_SecondLegInstrumentID = NULL;
    Py_ssize_t QrySpdApplyField_SecondLegInstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QrySpdApplyField_BrokerID, &QrySpdApplyField_BrokerID_len 
        , &QrySpdApplyField_InvestorID, &QrySpdApplyField_InvestorID_len 
        , &QrySpdApplyField_ExchangeID, &QrySpdApplyField_ExchangeID_len 
        , &QrySpdApplyField_OrderSysID, &QrySpdApplyField_OrderSysID_len 
        , &QrySpdApplyField_FirstLegInstrumentID, &QrySpdApplyField_FirstLegInstrumentID_len 
        , &QrySpdApplyField_SecondLegInstrumentID, &QrySpdApplyField_SecondLegInstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QrySpdApplyField_BrokerID != NULL ) {
        if(QrySpdApplyField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QrySpdApplyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QrySpdApplyField_BrokerID, QrySpdApplyField_BrokerID_len);        
        strncpy(self->data.BrokerID, QrySpdApplyField_BrokerID, sizeof(self->data.BrokerID) );
        QrySpdApplyField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QrySpdApplyField_InvestorID != NULL ) {
        if(QrySpdApplyField_InvestorID_len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QrySpdApplyField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QrySpdApplyField_InvestorID, QrySpdApplyField_InvestorID_len);        
        strncpy(self->data.InvestorID, QrySpdApplyField_InvestorID, sizeof(self->data.InvestorID) );
        QrySpdApplyField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QrySpdApplyField_ExchangeID != NULL ) {
        if(QrySpdApplyField_ExchangeID_len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QrySpdApplyField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QrySpdApplyField_ExchangeID, QrySpdApplyField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QrySpdApplyField_ExchangeID, sizeof(self->data.ExchangeID) );
        QrySpdApplyField_ExchangeID = NULL;
    }
            
    ///报单编号
    // TThostFtdcOrderSysIDType char[21]
    if( QrySpdApplyField_OrderSysID != NULL ) {
        if(QrySpdApplyField_OrderSysID_len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
            PyErr_Format(PyExc_ValueError, "OrderSysID too long: length=%zd (max allowed is %zd)", QrySpdApplyField_OrderSysID_len, (Py_ssize_t)sizeof(self->data.OrderSysID));
            return -1;
        }
        // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
        // memcpy(self->data.OrderSysID, QrySpdApplyField_OrderSysID, QrySpdApplyField_OrderSysID_len);        
        strncpy(self->data.OrderSysID, QrySpdApplyField_OrderSysID, sizeof(self->data.OrderSysID) );
        QrySpdApplyField_OrderSysID = NULL;
    }
            
    ///第一腿合约编码
    // TThostFtdcExchangeInstIDType char[81]
    if( QrySpdApplyField_FirstLegInstrumentID != NULL ) {
        if(QrySpdApplyField_FirstLegInstrumentID_len >= (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "FirstLegInstrumentID too long: length=%zd (max allowed is %zd)", QrySpdApplyField_FirstLegInstrumentID_len, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID));
            return -1;
        }
        // memset(self->data.FirstLegInstrumentID, 0, sizeof(self->data.FirstLegInstrumentID));
        // memcpy(self->data.FirstLegInstrumentID, QrySpdApplyField_FirstLegInstrumentID, QrySpdApplyField_FirstLegInstrumentID_len);        
        strncpy(self->data.FirstLegInstrumentID, QrySpdApplyField_FirstLegInstrumentID, sizeof(self->data.FirstLegInstrumentID) );
        QrySpdApplyField_FirstLegInstrumentID = NULL;
    }
            
    ///第二腿合约编码
    // TThostFtdcExchangeInstIDType char[81]
    if( QrySpdApplyField_SecondLegInstrumentID != NULL ) {
        if(QrySpdApplyField_SecondLegInstrumentID_len >= (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "SecondLegInstrumentID too long: length=%zd (max allowed is %zd)", QrySpdApplyField_SecondLegInstrumentID_len, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID));
            return -1;
        }
        // memset(self->data.SecondLegInstrumentID, 0, sizeof(self->data.SecondLegInstrumentID));
        // memcpy(self->data.SecondLegInstrumentID, QrySpdApplyField_SecondLegInstrumentID, QrySpdApplyField_SecondLegInstrumentID_len);        
        strncpy(self->data.SecondLegInstrumentID, QrySpdApplyField_SecondLegInstrumentID, sizeof(self->data.SecondLegInstrumentID) );
        QrySpdApplyField_SecondLegInstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySpdApplyField_dealloc(PyCThostFtdcQrySpdApplyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySpdApplyField_repr(PyCThostFtdcQrySpdApplyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"OrderSysID", self->data.OrderSysID//, (Py_ssize_t)sizeof(self->data.OrderSysID) 
        ,"FirstLegInstrumentID", self->data.FirstLegInstrumentID//, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID) 
        ,"SecondLegInstrumentID", self->data.SecondLegInstrumentID//, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySpdApplyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQrySpdApplyField_get_BrokerID(PyCThostFtdcQrySpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQrySpdApplyField_set_BrokerID(PyCThostFtdcQrySpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
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
static PyObject *PyCThostFtdcQrySpdApplyField_get_InvestorID(PyCThostFtdcQrySpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQrySpdApplyField_set_InvestorID(PyCThostFtdcQrySpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.InvestorID)) {
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
static PyObject *PyCThostFtdcQrySpdApplyField_get_ExchangeID(PyCThostFtdcQrySpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQrySpdApplyField_set_ExchangeID(PyCThostFtdcQrySpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
    // memcpy(self->data.ExchangeID, buf, len);
    strncpy(self->data.ExchangeID, buf, sizeof(self->data.ExchangeID));
    return 0;
}
            
///报单编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcQrySpdApplyField_get_OrderSysID(PyCThostFtdcQrySpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OrderSysID, (Py_ssize_t)sizeof(self->data.OrderSysID));
    return PyBytes_FromString(self->data.OrderSysID);
}

///报单编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcQrySpdApplyField_set_OrderSysID(PyCThostFtdcQrySpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OrderSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.OrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "OrderSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.OrderSysID, 0, sizeof(self->data.OrderSysID));
    // memcpy(self->data.OrderSysID, buf, len);
    strncpy(self->data.OrderSysID, buf, sizeof(self->data.OrderSysID));
    return 0;
}
            
///第一腿合约编码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcQrySpdApplyField_get_FirstLegInstrumentID(PyCThostFtdcQrySpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FirstLegInstrumentID, (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID));
    return PyBytes_FromString(self->data.FirstLegInstrumentID);
}

///第一腿合约编码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQrySpdApplyField_set_FirstLegInstrumentID(PyCThostFtdcQrySpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FirstLegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.FirstLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "FirstLegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.FirstLegInstrumentID, 0, sizeof(self->data.FirstLegInstrumentID));
    // memcpy(self->data.FirstLegInstrumentID, buf, len);
    strncpy(self->data.FirstLegInstrumentID, buf, sizeof(self->data.FirstLegInstrumentID));
    return 0;
}
            
///第二腿合约编码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcQrySpdApplyField_get_SecondLegInstrumentID(PyCThostFtdcQrySpdApplyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SecondLegInstrumentID, (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID));
    return PyBytes_FromString(self->data.SecondLegInstrumentID);
}

///第二腿合约编码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQrySpdApplyField_set_SecondLegInstrumentID(PyCThostFtdcQrySpdApplyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecondLegInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.SecondLegInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "SecondLegInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.SecondLegInstrumentID, 0, sizeof(self->data.SecondLegInstrumentID));
    // memcpy(self->data.SecondLegInstrumentID, buf, len);
    strncpy(self->data.SecondLegInstrumentID, buf, sizeof(self->data.SecondLegInstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQrySpdApplyField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQrySpdApplyField_get_BrokerID, (setter)PyCThostFtdcQrySpdApplyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQrySpdApplyField_get_InvestorID, (setter)PyCThostFtdcQrySpdApplyField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQrySpdApplyField_get_ExchangeID, (setter)PyCThostFtdcQrySpdApplyField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///报单编号 
    {(char *)"OrderSysID", (getter)PyCThostFtdcQrySpdApplyField_get_OrderSysID, (setter)PyCThostFtdcQrySpdApplyField_set_OrderSysID, (char *)"OrderSysID", NULL},
    ///第一腿合约编码 
    {(char *)"FirstLegInstrumentID", (getter)PyCThostFtdcQrySpdApplyField_get_FirstLegInstrumentID, (setter)PyCThostFtdcQrySpdApplyField_set_FirstLegInstrumentID, (char *)"FirstLegInstrumentID", NULL},
    ///第二腿合约编码 
    {(char *)"SecondLegInstrumentID", (getter)PyCThostFtdcQrySpdApplyField_get_SecondLegInstrumentID, (setter)PyCThostFtdcQrySpdApplyField_set_SecondLegInstrumentID, (char *)"SecondLegInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySpdApplyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySpdApplyField",	/* tp_name */
	sizeof(PyCThostFtdcQrySpdApplyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySpdApplyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySpdApplyField_repr,   /* tp_repr */
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
	"CThostFtdcQrySpdApplyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySpdApplyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySpdApplyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySpdApplyField_new,       /* tp_new */
};

int PyCThostFtdcQrySpdApplyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySpdApplyField  */
	if (PyType_Ready(&PyCThostFtdcQrySpdApplyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySpdApplyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySpdApplyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySpdApplyField", (PyObject *)&PyCThostFtdcQrySpdApplyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySpdApplyField to module");
        Py_DECREF(&PyCThostFtdcQrySpdApplyFieldType);
		return -1;
    }

    return 0;
}
