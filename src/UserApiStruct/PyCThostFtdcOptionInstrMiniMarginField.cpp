
#include "PyCThostFtdcOptionInstrMiniMarginField.h"

///当前期权合约最小保证金

static PyObject *PyCThostFtdcOptionInstrMiniMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcOptionInstrMiniMarginField *self = (PyCThostFtdcOptionInstrMiniMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcOptionInstrMiniMarginField_init(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "InvestorRange", "BrokerID", "InvestorID", "MinMargin", "ValueMethod", "IsRelative", "InstrumentID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *OptionInstrMiniMarginField_reserve1 = NULL;
    Py_ssize_t OptionInstrMiniMarginField_reserve1_len = 0;
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    char OptionInstrMiniMarginField_InvestorRange = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *OptionInstrMiniMarginField_BrokerID = NULL;
    Py_ssize_t OptionInstrMiniMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *OptionInstrMiniMarginField_InvestorID = NULL;
    Py_ssize_t OptionInstrMiniMarginField_InvestorID_len = 0;
            
    ///单位（手）期权合约最小保证金
    // TThostFtdcMoneyType double
    double OptionInstrMiniMarginField_MinMargin = 0.0;
        
    ///取值方式
    // TThostFtdcValueMethodType char
    char OptionInstrMiniMarginField_ValueMethod = 0;
            
    ///是否跟随交易所收取
    // TThostFtdcBoolType int
    int OptionInstrMiniMarginField_IsRelative = 0;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *OptionInstrMiniMarginField_InstrumentID = NULL;
    Py_ssize_t OptionInstrMiniMarginField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#dciy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#dcis#", (char **)kwlist
#endif

        , &OptionInstrMiniMarginField_reserve1, &OptionInstrMiniMarginField_reserve1_len 
        , &OptionInstrMiniMarginField_InvestorRange 
        , &OptionInstrMiniMarginField_BrokerID, &OptionInstrMiniMarginField_BrokerID_len 
        , &OptionInstrMiniMarginField_InvestorID, &OptionInstrMiniMarginField_InvestorID_len 
        , &OptionInstrMiniMarginField_MinMargin 
        , &OptionInstrMiniMarginField_ValueMethod 
        , &OptionInstrMiniMarginField_IsRelative 
        , &OptionInstrMiniMarginField_InstrumentID, &OptionInstrMiniMarginField_InstrumentID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( OptionInstrMiniMarginField_reserve1 != NULL ) {
        if(OptionInstrMiniMarginField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", OptionInstrMiniMarginField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, OptionInstrMiniMarginField_reserve1, OptionInstrMiniMarginField_reserve1_len);        
        strncpy(self->data.reserve1, OptionInstrMiniMarginField_reserve1, sizeof(self->data.reserve1) );
        OptionInstrMiniMarginField_reserve1 = NULL;
    }
            
    ///投资者范围
    // TThostFtdcInvestorRangeType char
    self->data.InvestorRange = OptionInstrMiniMarginField_InvestorRange;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( OptionInstrMiniMarginField_BrokerID != NULL ) {
        if(OptionInstrMiniMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", OptionInstrMiniMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, OptionInstrMiniMarginField_BrokerID, OptionInstrMiniMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, OptionInstrMiniMarginField_BrokerID, sizeof(self->data.BrokerID) );
        OptionInstrMiniMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( OptionInstrMiniMarginField_InvestorID != NULL ) {
        if(OptionInstrMiniMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", OptionInstrMiniMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, OptionInstrMiniMarginField_InvestorID, OptionInstrMiniMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, OptionInstrMiniMarginField_InvestorID, sizeof(self->data.InvestorID) );
        OptionInstrMiniMarginField_InvestorID = NULL;
    }
            
    ///单位（手）期权合约最小保证金
    // TThostFtdcMoneyType double
    self->data.MinMargin = OptionInstrMiniMarginField_MinMargin;
        
    ///取值方式
    // TThostFtdcValueMethodType char
    self->data.ValueMethod = OptionInstrMiniMarginField_ValueMethod;
            
    ///是否跟随交易所收取
    // TThostFtdcBoolType int
    self->data.IsRelative = OptionInstrMiniMarginField_IsRelative;
        
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( OptionInstrMiniMarginField_InstrumentID != NULL ) {
        if(OptionInstrMiniMarginField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", OptionInstrMiniMarginField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, OptionInstrMiniMarginField_InstrumentID, OptionInstrMiniMarginField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, OptionInstrMiniMarginField_InstrumentID, sizeof(self->data.InstrumentID) );
        OptionInstrMiniMarginField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcOptionInstrMiniMarginField_dealloc(PyCThostFtdcOptionInstrMiniMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcOptionInstrMiniMarginField_repr(PyCThostFtdcOptionInstrMiniMarginField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y,s:d,s:c,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s,s:d,s:c,s:i,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestorRange", self->data.InvestorRange 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"MinMargin", self->data.MinMargin 
        ,"ValueMethod", self->data.ValueMethod 
        ,"IsRelative", self->data.IsRelative 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionInstrMiniMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_reserve1(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcOptionInstrMiniMarginField_set_reserve1(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_InvestorRange(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.InvestorRange), 1);
}

///投资者范围
// TThostFtdcInvestorRangeType char
static int PyCThostFtdcOptionInstrMiniMarginField_set_InvestorRange(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_BrokerID(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcOptionInstrMiniMarginField_set_BrokerID(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_InvestorID(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcOptionInstrMiniMarginField_set_InvestorID(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
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
            
///单位（手）期权合约最小保证金
// TThostFtdcMoneyType double
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_MinMargin(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
    return PyFloat_FromDouble(self->data.MinMargin);
}

///单位（手）期权合约最小保证金
// TThostFtdcMoneyType double
static int PyCThostFtdcOptionInstrMiniMarginField_set_MinMargin(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MinMargin Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.MinMargin = buf;
    return 0;
}
        
///取值方式
// TThostFtdcValueMethodType char
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_ValueMethod(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ValueMethod), 1);
}

///取值方式
// TThostFtdcValueMethodType char
static int PyCThostFtdcOptionInstrMiniMarginField_set_ValueMethod(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ValueMethod Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ValueMethod)) {
        PyErr_SetString(PyExc_ValueError, "ValueMethod must be equal 1 bytes");
        return -1;
    }
    self->data.ValueMethod = *buf;
    return 0;
}
            
///是否跟随交易所收取
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_IsRelative(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsRelative);
#else
    return PyInt_FromLong(self->data.IsRelative);
#endif
}

///是否跟随交易所收取
// TThostFtdcBoolType int
static int PyCThostFtdcOptionInstrMiniMarginField_set_IsRelative(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsRelative Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsRelative value out of range for C int");
        return -1;
    }
    self->data.IsRelative = (int)buf;
    return 0;
}
        
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcOptionInstrMiniMarginField_get_InstrumentID(PyCThostFtdcOptionInstrMiniMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcOptionInstrMiniMarginField_set_InstrumentID(PyCThostFtdcOptionInstrMiniMarginField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcOptionInstrMiniMarginField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_reserve1, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_reserve1, (char *)"reserve1", NULL},
    ///投资者范围 
    {(char *)"InvestorRange", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_InvestorRange, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_InvestorRange, (char *)"InvestorRange", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_BrokerID, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_InvestorID, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///单位（手）期权合约最小保证金 
    {(char *)"MinMargin", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_MinMargin, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_MinMargin, (char *)"MinMargin", NULL},
    ///取值方式 
    {(char *)"ValueMethod", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_ValueMethod, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_ValueMethod, (char *)"ValueMethod", NULL},
    ///是否跟随交易所收取 
    {(char *)"IsRelative", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_IsRelative, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_IsRelative, (char *)"IsRelative", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcOptionInstrMiniMarginField_get_InstrumentID, (setter)PyCThostFtdcOptionInstrMiniMarginField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcOptionInstrMiniMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcOptionInstrMiniMarginField",	/* tp_name */
	sizeof(PyCThostFtdcOptionInstrMiniMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcOptionInstrMiniMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcOptionInstrMiniMarginField_repr,   /* tp_repr */
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
	"CThostFtdcOptionInstrMiniMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcOptionInstrMiniMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcOptionInstrMiniMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcOptionInstrMiniMarginField_new,       /* tp_new */
};

int PyCThostFtdcOptionInstrMiniMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcOptionInstrMiniMarginField  */
	if (PyType_Ready(&PyCThostFtdcOptionInstrMiniMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcOptionInstrMiniMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcOptionInstrMiniMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcOptionInstrMiniMarginField", (PyObject *)&PyCThostFtdcOptionInstrMiniMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionInstrMiniMarginField to module");
        Py_DECREF(&PyCThostFtdcOptionInstrMiniMarginFieldType);
		return -1;
    }

    return 0;
}
