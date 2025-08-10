
#include "PyCThostFtdcOptionInstrTradingRightField.h"

///投资者期权合约交易权限

static PyObject *PyCThostFtdcOptionInstrTradingRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrTradingRightField *self = (PyCThostFtdcOptionInstrTradingRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrTradingRightField_init(PyCThostFtdcOptionInstrTradingRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "Direction", "TradingRight", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OptionInstrTradingRightField_reserve1 = NULL;
    Py_ssize_t OptionInstrTradingRightField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char OptionInstrTradingRightField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OptionInstrTradingRightField_BrokerID = NULL;
    Py_ssize_t OptionInstrTradingRightField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OptionInstrTradingRightField_InvestorID = NULL;
    Py_ssize_t OptionInstrTradingRightField_InvestorID_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char OptionInstrTradingRightField_Direction = 0;
            
    ///交易权限
    // TThostFtdcTradingRightType char
    char OptionInstrTradingRightField_TradingRight = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OptionInstrTradingRightField_InstrumentID = NULL;
    Py_ssize_t OptionInstrTradingRightField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#ccy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#ccs#", (char **)kwlist
#endif

        , &OptionInstrTradingRightField_reserve1, &OptionInstrTradingRightField_reserve1_len 
        , &OptionInstrTradingRightField_InvestorRange 
        , &OptionInstrTradingRightField_BrokerID, &OptionInstrTradingRightField_BrokerID_len 
        , &OptionInstrTradingRightField_InvestorID, &OptionInstrTradingRightField_InvestorID_len 
        , &OptionInstrTradingRightField_Direction 
        , &OptionInstrTradingRightField_TradingRight 
        , &OptionInstrTradingRightField_InstrumentID, &OptionInstrTradingRightField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OptionInstrTradingRightField_reserve1 != NULL ) {
        if(OptionInstrTradingRightField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OptionInstrTradingRightField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OptionInstrTradingRightField_reserve1, OptionInstrTradingRightField_reserve1_len);        
        strncpy(self->data.reserve1, OptionInstrTradingRightField_reserve1, sizeof(self->data.reserve1) );
        OptionInstrTradingRightField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = OptionInstrTradingRightField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OptionInstrTradingRightField_BrokerID != NULL ) {
        if(OptionInstrTradingRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OptionInstrTradingRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OptionInstrTradingRightField_BrokerID, OptionInstrTradingRightField_BrokerID_len);        
        strncpy(self->data.BrokerID, OptionInstrTradingRightField_BrokerID, sizeof(self->data.BrokerID) );
        OptionInstrTradingRightField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OptionInstrTradingRightField_InvestorID != NULL ) {
        if(OptionInstrTradingRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OptionInstrTradingRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OptionInstrTradingRightField_InvestorID, OptionInstrTradingRightField_InvestorID_len);        
        strncpy(self->data.InvestorID, OptionInstrTradingRightField_InvestorID, sizeof(self->data.InvestorID) );
        OptionInstrTradingRightField_InvestorID = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = OptionInstrTradingRightField_Direction;
            
    ///交易权限
    // TThostFtdcTradingRightType char
    self->data.TradingRight = OptionInstrTradingRightField_TradingRight;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OptionInstrTradingRightField_InstrumentID != NULL ) {
        if(OptionInstrTradingRightField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OptionInstrTradingRightField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OptionInstrTradingRightField_InstrumentID, OptionInstrTradingRightField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OptionInstrTradingRightField_InstrumentID, sizeof(self->data.InstrumentID) );
        OptionInstrTradingRightField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcOptionInstrTradingRightField_dealloc(PyCThostFtdcOptionInstrTradingRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrTradingRightField_repr(PyCThostFtdcOptionInstrTradingRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:c,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:c,s:c,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"Direction", self->data.Direction 
        ,"TradingRight", self->data.TradingRight 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrTradingRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcOptionInstrTradingRightField_get_reserve1(PyCThostFtdcOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOptionInstrTradingRightField_set_reserve1(PyCThostFtdcOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
            
///投资者范围
// TThostFtdcInvestorRangeType char
static PyObject *PyCThostFtdcOptionInstrTradingRightField_get_InvestorRange(PyCThostFtdcOptionInstrTradingRightField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcOptionInstrTradingRightField_set_InvestorRange(PyCThostFtdcOptionInstrTradingRightField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestorRange Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestorRange)) {
        PyErr_SetString(PyExc_ValueError, "InvestorRange must be equal 1 bytes");
        return -1;
    }
    self->data.InvestorRange = *buf;
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcOptionInstrTradingRightField_get_BrokerID(PyCThostFtdcOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOptionInstrTradingRightField_set_BrokerID(PyCThostFtdcOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrTradingRightField_get_InvestorID(PyCThostFtdcOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOptionInstrTradingRightField_set_InvestorID(PyCThostFtdcOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcOptionInstrTradingRightField_get_Direction(PyCThostFtdcOptionInstrTradingRightField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcOptionInstrTradingRightField_set_Direction(PyCThostFtdcOptionInstrTradingRightField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///交易权限
// TThostFtdcTradingRightType char
static PyObject *PyCThostFtdcOptionInstrTradingRightField_get_TradingRight(PyCThostFtdcOptionInstrTradingRightField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradingRight), 1);
}

///交易权限
// TThostFtdcTradingRightType char
static int PyCThostFtdcOptionInstrTradingRightField_set_TradingRight(PyCThostFtdcOptionInstrTradingRightField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingRight Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingRight)) {
        PyErr_SetString(PyExc_ValueError, "TradingRight must be equal 1 bytes");
        return -1;
    }
    self->data.TradingRight = *buf;
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOptionInstrTradingRightField_get_InstrumentID(PyCThostFtdcOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOptionInstrTradingRightField_set_InstrumentID(PyCThostFtdcOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcOptionInstrTradingRightField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrTradingRightField_get_reserve1, (setter)PyCThostFtdcOptionInstrTradingRightField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcOptionInstrTradingRightField_get_InvestorRange, (setter)PyCThostFtdcOptionInstrTradingRightField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrTradingRightField_get_BrokerID, (setter)PyCThostFtdcOptionInstrTradingRightField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrTradingRightField_get_InvestorID, (setter)PyCThostFtdcOptionInstrTradingRightField_set_InvestorID, (char *)"InvestorID", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcOptionInstrTradingRightField_get_Direction, (setter)PyCThostFtdcOptionInstrTradingRightField_set_Direction, (char *)"Direction", NULL},
    ///交易权限 
    {(char *)"TradingRight", (getter)PyCThostFtdcOptionInstrTradingRightField_get_TradingRight, (setter)PyCThostFtdcOptionInstrTradingRightField_set_TradingRight, (char *)"TradingRight", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrTradingRightField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrTradingRightField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrTradingRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrTradingRightField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrTradingRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrTradingRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrTradingRightField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrTradingRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrTradingRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrTradingRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrTradingRightField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrTradingRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrTradingRightField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrTradingRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrTradingRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrTradingRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrTradingRightField", (PyObject *)&PyCThostFtdcOptionInstrTradingRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrTradingRightField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrTradingRightFieldType);
		return -1;
    }

    return 0;
}
