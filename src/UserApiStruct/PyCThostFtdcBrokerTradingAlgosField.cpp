
#include "PyCThostFtdcBrokerTradingAlgosField.h"

///经纪公司交易算法

static PyObject *PyCThostFtdcBrokerTradingAlgosField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerTradingAlgosField *self = (PyCThostFtdcBrokerTradingAlgosField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerTradingAlgosField_init(PyCThostFtdcBrokerTradingAlgosField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ExchangeID", "reserve1", "HandlePositionAlgoID", "FindMarginRateAlgoID", "HandleTradingAccountAlgoID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerTradingAlgosField_BrokerID = NULL;
    Py_ssize_t BrokerTradingAlgosField_BrokerID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *BrokerTradingAlgosField_ExchangeID = NULL;
    Py_ssize_t BrokerTradingAlgosField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *BrokerTradingAlgosField_reserve1 = NULL;
    Py_ssize_t BrokerTradingAlgosField_reserve1_len = 0;
            
    ///持仓处理算法编号
    // TThostFtdcHandlePositionAlgoIDType char
    char BrokerTradingAlgosField_HandlePositionAlgoID = 0;
            
    ///寻找保证金率算法编号
    // TThostFtdcFindMarginRateAlgoIDType char
    char BrokerTradingAlgosField_FindMarginRateAlgoID = 0;
            
    ///资金处理算法编号
    // TThostFtdcHandleTradingAccountAlgoIDType char
    char BrokerTradingAlgosField_HandleTradingAccountAlgoID = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *BrokerTradingAlgosField_InstrumentID = NULL;
    Py_ssize_t BrokerTradingAlgosField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cccy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cccs#", (char **)kwlist
#endif

        , &BrokerTradingAlgosField_BrokerID, &BrokerTradingAlgosField_BrokerID_len 
        , &BrokerTradingAlgosField_ExchangeID, &BrokerTradingAlgosField_ExchangeID_len 
        , &BrokerTradingAlgosField_reserve1, &BrokerTradingAlgosField_reserve1_len 
        , &BrokerTradingAlgosField_HandlePositionAlgoID 
        , &BrokerTradingAlgosField_FindMarginRateAlgoID 
        , &BrokerTradingAlgosField_HandleTradingAccountAlgoID 
        , &BrokerTradingAlgosField_InstrumentID, &BrokerTradingAlgosField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerTradingAlgosField_BrokerID != NULL ) {
        if(BrokerTradingAlgosField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerTradingAlgosField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerTradingAlgosField_BrokerID, BrokerTradingAlgosField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerTradingAlgosField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerTradingAlgosField_BrokerID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( BrokerTradingAlgosField_ExchangeID != NULL ) {
        if(BrokerTradingAlgosField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", BrokerTradingAlgosField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, BrokerTradingAlgosField_ExchangeID, BrokerTradingAlgosField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, BrokerTradingAlgosField_ExchangeID, sizeof(self->data.ExchangeID) );
        BrokerTradingAlgosField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( BrokerTradingAlgosField_reserve1 != NULL ) {
        if(BrokerTradingAlgosField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", BrokerTradingAlgosField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, BrokerTradingAlgosField_reserve1, BrokerTradingAlgosField_reserve1_len);        
        strncpy(self->data.reserve1, BrokerTradingAlgosField_reserve1, sizeof(self->data.reserve1) );
        BrokerTradingAlgosField_reserve1 = NULL;
    }
            
    ///持仓处理算法编号
    // TThostFtdcHandlePositionAlgoIDType char
    self->data.HandlePositionAlgoID = BrokerTradingAlgosField_HandlePositionAlgoID;
            
    ///寻找保证金率算法编号
    // TThostFtdcFindMarginRateAlgoIDType char
    self->data.FindMarginRateAlgoID = BrokerTradingAlgosField_FindMarginRateAlgoID;
            
    ///资金处理算法编号
    // TThostFtdcHandleTradingAccountAlgoIDType char
    self->data.HandleTradingAccountAlgoID = BrokerTradingAlgosField_HandleTradingAccountAlgoID;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( BrokerTradingAlgosField_InstrumentID != NULL ) {
        if(BrokerTradingAlgosField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", BrokerTradingAlgosField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, BrokerTradingAlgosField_InstrumentID, BrokerTradingAlgosField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, BrokerTradingAlgosField_InstrumentID, sizeof(self->data.InstrumentID) );
        BrokerTradingAlgosField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcBrokerTradingAlgosField_dealloc(PyCThostFtdcBrokerTradingAlgosField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerTradingAlgosField_repr(PyCThostFtdcBrokerTradingAlgosField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:c,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:c,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HandlePositionAlgoID", self->data.HandlePositionAlgoID 
        ,"FindMarginRateAlgoID", self->data.FindMarginRateAlgoID 
        ,"HandleTradingAccountAlgoID", self->data.HandleTradingAccountAlgoID 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerTradingAlgosField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_BrokerID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerTradingAlgosField_set_BrokerID(PyCThostFtdcBrokerTradingAlgosField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_ExchangeID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcBrokerTradingAlgosField_set_ExchangeID(PyCThostFtdcBrokerTradingAlgosField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_reserve1(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcBrokerTradingAlgosField_set_reserve1(PyCThostFtdcBrokerTradingAlgosField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 31 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///持仓处理算法编号
// TThostFtdcHandlePositionAlgoIDType char
static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_HandlePositionAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HandlePositionAlgoID), 1);
}

///持仓处理算法编号
// TThostFtdcHandlePositionAlgoIDType char
static int PyCThostFtdcBrokerTradingAlgosField_set_HandlePositionAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HandlePositionAlgoID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HandlePositionAlgoID)) {
        PyErr_SetString(PyExc_ValueError, "HandlePositionAlgoID must be equal 1 bytes");
        return -1;
    }
    self->data.HandlePositionAlgoID = *buf;
    return 0;
}
            
///寻找保证金率算法编号
// TThostFtdcFindMarginRateAlgoIDType char
static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_FindMarginRateAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.FindMarginRateAlgoID), 1);
}

///寻找保证金率算法编号
// TThostFtdcFindMarginRateAlgoIDType char
static int PyCThostFtdcBrokerTradingAlgosField_set_FindMarginRateAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FindMarginRateAlgoID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FindMarginRateAlgoID)) {
        PyErr_SetString(PyExc_ValueError, "FindMarginRateAlgoID must be equal 1 bytes");
        return -1;
    }
    self->data.FindMarginRateAlgoID = *buf;
    return 0;
}
            
///资金处理算法编号
// TThostFtdcHandleTradingAccountAlgoIDType char
static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_HandleTradingAccountAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HandleTradingAccountAlgoID), 1);
}

///资金处理算法编号
// TThostFtdcHandleTradingAccountAlgoIDType char
static int PyCThostFtdcBrokerTradingAlgosField_set_HandleTradingAccountAlgoID(PyCThostFtdcBrokerTradingAlgosField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HandleTradingAccountAlgoID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HandleTradingAccountAlgoID)) {
        PyErr_SetString(PyExc_ValueError, "HandleTradingAccountAlgoID must be equal 1 bytes");
        return -1;
    }
    self->data.HandleTradingAccountAlgoID = *buf;
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcBrokerTradingAlgosField_get_InstrumentID(PyCThostFtdcBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcBrokerTradingAlgosField_set_InstrumentID(PyCThostFtdcBrokerTradingAlgosField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
    // memcpy(self->data.InstrumentID, buf, len);
    strncpy(self->data.InstrumentID, buf, sizeof(self->data.InstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcBrokerTradingAlgosField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_BrokerID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_BrokerID, (char *)"BrokerID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_ExchangeID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcBrokerTradingAlgosField_get_reserve1, (setter)PyCThostFtdcBrokerTradingAlgosField_set_reserve1, (char *)"reserve1", NULL},
    ///持仓处理算法编号 
    {(char *)"HandlePositionAlgoID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_HandlePositionAlgoID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_HandlePositionAlgoID, (char *)"HandlePositionAlgoID", NULL},
    ///寻找保证金率算法编号 
    {(char *)"FindMarginRateAlgoID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_FindMarginRateAlgoID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_FindMarginRateAlgoID, (char *)"FindMarginRateAlgoID", NULL},
    ///资金处理算法编号 
    {(char *)"HandleTradingAccountAlgoID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_HandleTradingAccountAlgoID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_HandleTradingAccountAlgoID, (char *)"HandleTradingAccountAlgoID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcBrokerTradingAlgosField_get_InstrumentID, (setter)PyCThostFtdcBrokerTradingAlgosField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerTradingAlgosFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerTradingAlgosField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerTradingAlgosField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerTradingAlgosField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerTradingAlgosField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerTradingAlgosField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerTradingAlgosField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerTradingAlgosField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerTradingAlgosField_new,       /* tp_new */
};

int PyCThostFtdcBrokerTradingAlgosFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerTradingAlgosField  */
	if (PyType_Ready(&PyCThostFtdcBrokerTradingAlgosFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerTradingAlgosField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerTradingAlgosFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerTradingAlgosField", (PyObject *)&PyCThostFtdcBrokerTradingAlgosFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerTradingAlgosField to module");
        Py_DECREF(&PyCThostFtdcBrokerTradingAlgosFieldType);
		return -1;
    }

    return 0;
}
