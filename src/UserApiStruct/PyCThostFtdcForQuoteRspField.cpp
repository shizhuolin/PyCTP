
#include "PyCThostFtdcForQuoteRspField.h"

///发给做市商的询价请求

static PyObject *PyCThostFtdcForQuoteRspField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcForQuoteRspField *self = (PyCThostFtdcForQuoteRspField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcForQuoteRspField_init(PyCThostFtdcForQuoteRspField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "reserve1", "ForQuoteSysID", "ForQuoteTime", "ActionDay", "ExchangeID", "InstrumentID",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *ForQuoteRspField_TradingDay = NULL;
    Py_ssize_t ForQuoteRspField_TradingDay_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *ForQuoteRspField_reserve1 = NULL;
    Py_ssize_t ForQuoteRspField_reserve1_len = 0;
            
    ///询价编号
    // TThostFtdcOrderSysIDType char[21]
    const char *ForQuoteRspField_ForQuoteSysID = NULL;
    Py_ssize_t ForQuoteRspField_ForQuoteSysID_len = 0;
            
    ///询价时间
    // TThostFtdcTimeType char[9]
    const char *ForQuoteRspField_ForQuoteTime = NULL;
    Py_ssize_t ForQuoteRspField_ForQuoteTime_len = 0;
            
    ///业务日期
    // TThostFtdcDateType char[9]
    const char *ForQuoteRspField_ActionDay = NULL;
    Py_ssize_t ForQuoteRspField_ActionDay_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *ForQuoteRspField_ExchangeID = NULL;
    Py_ssize_t ForQuoteRspField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *ForQuoteRspField_InstrumentID = NULL;
    Py_ssize_t ForQuoteRspField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &ForQuoteRspField_TradingDay, &ForQuoteRspField_TradingDay_len 
        , &ForQuoteRspField_reserve1, &ForQuoteRspField_reserve1_len 
        , &ForQuoteRspField_ForQuoteSysID, &ForQuoteRspField_ForQuoteSysID_len 
        , &ForQuoteRspField_ForQuoteTime, &ForQuoteRspField_ForQuoteTime_len 
        , &ForQuoteRspField_ActionDay, &ForQuoteRspField_ActionDay_len 
        , &ForQuoteRspField_ExchangeID, &ForQuoteRspField_ExchangeID_len 
        , &ForQuoteRspField_InstrumentID, &ForQuoteRspField_InstrumentID_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( ForQuoteRspField_TradingDay != NULL ) {
        if(ForQuoteRspField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ForQuoteRspField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ForQuoteRspField_TradingDay, ForQuoteRspField_TradingDay_len);        
        strncpy(self->data.TradingDay, ForQuoteRspField_TradingDay, sizeof(self->data.TradingDay) );
        ForQuoteRspField_TradingDay = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( ForQuoteRspField_reserve1 != NULL ) {
        if(ForQuoteRspField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ForQuoteRspField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ForQuoteRspField_reserve1, ForQuoteRspField_reserve1_len);        
        strncpy(self->data.reserve1, ForQuoteRspField_reserve1, sizeof(self->data.reserve1) );
        ForQuoteRspField_reserve1 = NULL;
    }
            
    ///询价编号
    // TThostFtdcOrderSysIDType char[21]
    if( ForQuoteRspField_ForQuoteSysID != NULL ) {
        if(ForQuoteRspField_ForQuoteSysID_len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is %zd)", ForQuoteRspField_ForQuoteSysID_len, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
            return -1;
        }
        // memset(self->data.ForQuoteSysID, 0, sizeof(self->data.ForQuoteSysID));
        // memcpy(self->data.ForQuoteSysID, ForQuoteRspField_ForQuoteSysID, ForQuoteRspField_ForQuoteSysID_len);        
        strncpy(self->data.ForQuoteSysID, ForQuoteRspField_ForQuoteSysID, sizeof(self->data.ForQuoteSysID) );
        ForQuoteRspField_ForQuoteSysID = NULL;
    }
            
    ///询价时间
    // TThostFtdcTimeType char[9]
    if( ForQuoteRspField_ForQuoteTime != NULL ) {
        if(ForQuoteRspField_ForQuoteTime_len > (Py_ssize_t)sizeof(self->data.ForQuoteTime)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteTime too long: length=%zd (max allowed is %zd)", ForQuoteRspField_ForQuoteTime_len, (Py_ssize_t)sizeof(self->data.ForQuoteTime));
            return -1;
        }
        // memset(self->data.ForQuoteTime, 0, sizeof(self->data.ForQuoteTime));
        // memcpy(self->data.ForQuoteTime, ForQuoteRspField_ForQuoteTime, ForQuoteRspField_ForQuoteTime_len);        
        strncpy(self->data.ForQuoteTime, ForQuoteRspField_ForQuoteTime, sizeof(self->data.ForQuoteTime) );
        ForQuoteRspField_ForQuoteTime = NULL;
    }
            
    ///业务日期
    // TThostFtdcDateType char[9]
    if( ForQuoteRspField_ActionDay != NULL ) {
        if(ForQuoteRspField_ActionDay_len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
            PyErr_Format(PyExc_ValueError, "ActionDay too long: length=%zd (max allowed is %zd)", ForQuoteRspField_ActionDay_len, (Py_ssize_t)sizeof(self->data.ActionDay));
            return -1;
        }
        // memset(self->data.ActionDay, 0, sizeof(self->data.ActionDay));
        // memcpy(self->data.ActionDay, ForQuoteRspField_ActionDay, ForQuoteRspField_ActionDay_len);        
        strncpy(self->data.ActionDay, ForQuoteRspField_ActionDay, sizeof(self->data.ActionDay) );
        ForQuoteRspField_ActionDay = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( ForQuoteRspField_ExchangeID != NULL ) {
        if(ForQuoteRspField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", ForQuoteRspField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, ForQuoteRspField_ExchangeID, ForQuoteRspField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, ForQuoteRspField_ExchangeID, sizeof(self->data.ExchangeID) );
        ForQuoteRspField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( ForQuoteRspField_InstrumentID != NULL ) {
        if(ForQuoteRspField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", ForQuoteRspField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, ForQuoteRspField_InstrumentID, ForQuoteRspField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, ForQuoteRspField_InstrumentID, sizeof(self->data.InstrumentID) );
        ForQuoteRspField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcForQuoteRspField_dealloc(PyCThostFtdcForQuoteRspField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcForQuoteRspField_repr(PyCThostFtdcForQuoteRspField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ForQuoteSysID", self->data.ForQuoteSysID//, (Py_ssize_t)sizeof(self->data.ForQuoteSysID) 
        ,"ForQuoteTime", self->data.ForQuoteTime//, (Py_ssize_t)sizeof(self->data.ForQuoteTime) 
        ,"ActionDay", self->data.ActionDay//, (Py_ssize_t)sizeof(self->data.ActionDay) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcForQuoteRspField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcForQuoteRspField_get_TradingDay(PyCThostFtdcForQuoteRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcForQuoteRspField_set_TradingDay(PyCThostFtdcForQuoteRspField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcForQuoteRspField_get_reserve1(PyCThostFtdcForQuoteRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcForQuoteRspField_set_reserve1(PyCThostFtdcForQuoteRspField *self, PyObject* val, void *closure) {
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
            
///询价编号
// TThostFtdcOrderSysIDType char[21]
static PyObject *PyCThostFtdcForQuoteRspField_get_ForQuoteSysID(PyCThostFtdcForQuoteRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteSysID, (Py_ssize_t)sizeof(self->data.ForQuoteSysID));
    return PyBytes_FromString(self->data.ForQuoteSysID);
}

///询价编号
// TThostFtdcOrderSysIDType char[21]
static int PyCThostFtdcForQuoteRspField_set_ForQuoteSysID(PyCThostFtdcForQuoteRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteSysID, 0, sizeof(self->data.ForQuoteSysID));
    // memcpy(self->data.ForQuoteSysID, buf, len);
    strncpy(self->data.ForQuoteSysID, buf, sizeof(self->data.ForQuoteSysID));
    return 0;
}
            
///询价时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcForQuoteRspField_get_ForQuoteTime(PyCThostFtdcForQuoteRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ForQuoteTime, (Py_ssize_t)sizeof(self->data.ForQuoteTime));
    return PyBytes_FromString(self->data.ForQuoteTime);
}

///询价时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcForQuoteRspField_set_ForQuoteTime(PyCThostFtdcForQuoteRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ForQuoteTime)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ForQuoteTime, 0, sizeof(self->data.ForQuoteTime));
    // memcpy(self->data.ForQuoteTime, buf, len);
    strncpy(self->data.ForQuoteTime, buf, sizeof(self->data.ForQuoteTime));
    return 0;
}
            
///业务日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcForQuoteRspField_get_ActionDay(PyCThostFtdcForQuoteRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ActionDay, (Py_ssize_t)sizeof(self->data.ActionDay));
    return PyBytes_FromString(self->data.ActionDay);
}

///业务日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcForQuoteRspField_set_ActionDay(PyCThostFtdcForQuoteRspField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ActionDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ActionDay)) {
        PyErr_SetString(PyExc_ValueError, "ActionDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ActionDay, 0, sizeof(self->data.ActionDay));
    // memcpy(self->data.ActionDay, buf, len);
    strncpy(self->data.ActionDay, buf, sizeof(self->data.ActionDay));
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcForQuoteRspField_get_ExchangeID(PyCThostFtdcForQuoteRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcForQuoteRspField_set_ExchangeID(PyCThostFtdcForQuoteRspField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcForQuoteRspField_get_InstrumentID(PyCThostFtdcForQuoteRspField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcForQuoteRspField_set_InstrumentID(PyCThostFtdcForQuoteRspField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcForQuoteRspField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcForQuoteRspField_get_TradingDay, (setter)PyCThostFtdcForQuoteRspField_set_TradingDay, (char *)"TradingDay", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcForQuoteRspField_get_reserve1, (setter)PyCThostFtdcForQuoteRspField_set_reserve1, (char *)"reserve1", NULL},
    ///询价编号 
    {(char *)"ForQuoteSysID", (getter)PyCThostFtdcForQuoteRspField_get_ForQuoteSysID, (setter)PyCThostFtdcForQuoteRspField_set_ForQuoteSysID, (char *)"ForQuoteSysID", NULL},
    ///询价时间 
    {(char *)"ForQuoteTime", (getter)PyCThostFtdcForQuoteRspField_get_ForQuoteTime, (setter)PyCThostFtdcForQuoteRspField_set_ForQuoteTime, (char *)"ForQuoteTime", NULL},
    ///业务日期 
    {(char *)"ActionDay", (getter)PyCThostFtdcForQuoteRspField_get_ActionDay, (setter)PyCThostFtdcForQuoteRspField_set_ActionDay, (char *)"ActionDay", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcForQuoteRspField_get_ExchangeID, (setter)PyCThostFtdcForQuoteRspField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcForQuoteRspField_get_InstrumentID, (setter)PyCThostFtdcForQuoteRspField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcForQuoteRspFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcForQuoteRspField",	/* tp_name */
	sizeof(PyCThostFtdcForQuoteRspField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcForQuoteRspField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcForQuoteRspField_repr,   /* tp_repr */
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
	"CThostFtdcForQuoteRspField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcForQuoteRspField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcForQuoteRspField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcForQuoteRspField_new,       /* tp_new */
};

int PyCThostFtdcForQuoteRspFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcForQuoteRspField  */
	if (PyType_Ready(&PyCThostFtdcForQuoteRspFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcForQuoteRspField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcForQuoteRspFieldType);
    if( PyModule_AddObject(module, "CThostFtdcForQuoteRspField", (PyObject *)&PyCThostFtdcForQuoteRspFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcForQuoteRspField to module");
        Py_DECREF(&PyCThostFtdcForQuoteRspFieldType);
		return -1;
    }

    return 0;
}
