
#include "PyCThostFtdcPortfTradeParamSettingField.h"

///组保交易参数设置

static PyObject *PyCThostFtdcPortfTradeParamSettingField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcPortfTradeParamSettingField *self = (PyCThostFtdcPortfTradeParamSettingField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcPortfTradeParamSettingField_init(PyCThostFtdcPortfTradeParamSettingField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "InvestorID", "Portfolio", "IsActionVerify", "IsCloseVerify",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *PortfTradeParamSettingField_ExchangeID = NULL;
    Py_ssize_t PortfTradeParamSettingField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *PortfTradeParamSettingField_BrokerID = NULL;
    Py_ssize_t PortfTradeParamSettingField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *PortfTradeParamSettingField_InvestorID = NULL;
    Py_ssize_t PortfTradeParamSettingField_InvestorID_len = 0;
            
    ///新型组保算法
    // TThostFtdcPortfolioType char
    char PortfTradeParamSettingField_Portfolio = 0;
            
    ///撤单是否验资
    // TThostFtdcBoolType int
    int PortfTradeParamSettingField_IsActionVerify = 0;
        
    ///平仓是否验资
    // TThostFtdcBoolType int
    int PortfTradeParamSettingField_IsCloseVerify = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cii", (char **)kwlist
#endif

        , &PortfTradeParamSettingField_ExchangeID, &PortfTradeParamSettingField_ExchangeID_len 
        , &PortfTradeParamSettingField_BrokerID, &PortfTradeParamSettingField_BrokerID_len 
        , &PortfTradeParamSettingField_InvestorID, &PortfTradeParamSettingField_InvestorID_len 
        , &PortfTradeParamSettingField_Portfolio 
        , &PortfTradeParamSettingField_IsActionVerify 
        , &PortfTradeParamSettingField_IsCloseVerify 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( PortfTradeParamSettingField_ExchangeID != NULL ) {
        if(PortfTradeParamSettingField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", PortfTradeParamSettingField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, PortfTradeParamSettingField_ExchangeID, PortfTradeParamSettingField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, PortfTradeParamSettingField_ExchangeID, sizeof(self->data.ExchangeID) );
        PortfTradeParamSettingField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( PortfTradeParamSettingField_BrokerID != NULL ) {
        if(PortfTradeParamSettingField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", PortfTradeParamSettingField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, PortfTradeParamSettingField_BrokerID, PortfTradeParamSettingField_BrokerID_len);        
        strncpy(self->data.BrokerID, PortfTradeParamSettingField_BrokerID, sizeof(self->data.BrokerID) );
        PortfTradeParamSettingField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( PortfTradeParamSettingField_InvestorID != NULL ) {
        if(PortfTradeParamSettingField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", PortfTradeParamSettingField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, PortfTradeParamSettingField_InvestorID, PortfTradeParamSettingField_InvestorID_len);        
        strncpy(self->data.InvestorID, PortfTradeParamSettingField_InvestorID, sizeof(self->data.InvestorID) );
        PortfTradeParamSettingField_InvestorID = NULL;
    }
            
    ///新型组保算法
    // TThostFtdcPortfolioType char
    self->data.Portfolio = PortfTradeParamSettingField_Portfolio;
            
    ///撤单是否验资
    // TThostFtdcBoolType int
    self->data.IsActionVerify = PortfTradeParamSettingField_IsActionVerify;
        
    ///平仓是否验资
    // TThostFtdcBoolType int
    self->data.IsCloseVerify = PortfTradeParamSettingField_IsCloseVerify;
        

    return 0;
}

static void PyCThostFtdcPortfTradeParamSettingField_dealloc(PyCThostFtdcPortfTradeParamSettingField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcPortfTradeParamSettingField_repr(PyCThostFtdcPortfTradeParamSettingField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:i,s:i}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"Portfolio", self->data.Portfolio 
        ,"IsActionVerify", self->data.IsActionVerify 
        ,"IsCloseVerify", self->data.IsCloseVerify 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcPortfTradeParamSettingField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcPortfTradeParamSettingField_get_ExchangeID(PyCThostFtdcPortfTradeParamSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcPortfTradeParamSettingField_set_ExchangeID(PyCThostFtdcPortfTradeParamSettingField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcPortfTradeParamSettingField_get_BrokerID(PyCThostFtdcPortfTradeParamSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcPortfTradeParamSettingField_set_BrokerID(PyCThostFtdcPortfTradeParamSettingField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcPortfTradeParamSettingField_get_InvestorID(PyCThostFtdcPortfTradeParamSettingField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcPortfTradeParamSettingField_set_InvestorID(PyCThostFtdcPortfTradeParamSettingField *self, PyObject* val, void *closure) {
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
            
///新型组保算法
// TThostFtdcPortfolioType char
static PyObject *PyCThostFtdcPortfTradeParamSettingField_get_Portfolio(PyCThostFtdcPortfTradeParamSettingField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Portfolio), 1);
}

///新型组保算法
// TThostFtdcPortfolioType char
static int PyCThostFtdcPortfTradeParamSettingField_set_Portfolio(PyCThostFtdcPortfTradeParamSettingField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Portfolio Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Portfolio)) {
        PyErr_SetString(PyExc_ValueError, "Portfolio must be equal 1 bytes");
        return -1;
    }
    self->data.Portfolio = *buf;
    return 0;
}
            
///撤单是否验资
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcPortfTradeParamSettingField_get_IsActionVerify(PyCThostFtdcPortfTradeParamSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActionVerify);
#else
    return PyInt_FromLong(self->data.IsActionVerify);
#endif
}

///撤单是否验资
// TThostFtdcBoolType int
static int PyCThostFtdcPortfTradeParamSettingField_set_IsActionVerify(PyCThostFtdcPortfTradeParamSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActionVerify Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActionVerify Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActionVerify value out of range for C int");
        return -1;
    }
    self->data.IsActionVerify = (int)buf;
    return 0;
}
        
///平仓是否验资
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcPortfTradeParamSettingField_get_IsCloseVerify(PyCThostFtdcPortfTradeParamSettingField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsCloseVerify);
#else
    return PyInt_FromLong(self->data.IsCloseVerify);
#endif
}

///平仓是否验资
// TThostFtdcBoolType int
static int PyCThostFtdcPortfTradeParamSettingField_set_IsCloseVerify(PyCThostFtdcPortfTradeParamSettingField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsCloseVerify Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsCloseVerify Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsCloseVerify value out of range for C int");
        return -1;
    }
    self->data.IsCloseVerify = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcPortfTradeParamSettingField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcPortfTradeParamSettingField_get_ExchangeID, (setter)PyCThostFtdcPortfTradeParamSettingField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcPortfTradeParamSettingField_get_BrokerID, (setter)PyCThostFtdcPortfTradeParamSettingField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcPortfTradeParamSettingField_get_InvestorID, (setter)PyCThostFtdcPortfTradeParamSettingField_set_InvestorID, (char *)"InvestorID", NULL},
    ///新型组保算法 
    {(char *)"Portfolio", (getter)PyCThostFtdcPortfTradeParamSettingField_get_Portfolio, (setter)PyCThostFtdcPortfTradeParamSettingField_set_Portfolio, (char *)"Portfolio", NULL},
    ///撤单是否验资 
    {(char *)"IsActionVerify", (getter)PyCThostFtdcPortfTradeParamSettingField_get_IsActionVerify, (setter)PyCThostFtdcPortfTradeParamSettingField_set_IsActionVerify, (char *)"IsActionVerify", NULL},
    ///平仓是否验资 
    {(char *)"IsCloseVerify", (getter)PyCThostFtdcPortfTradeParamSettingField_get_IsCloseVerify, (setter)PyCThostFtdcPortfTradeParamSettingField_set_IsCloseVerify, (char *)"IsCloseVerify", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcPortfTradeParamSettingFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcPortfTradeParamSettingField",	/* tp_name */
	sizeof(PyCThostFtdcPortfTradeParamSettingField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcPortfTradeParamSettingField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcPortfTradeParamSettingField_repr,   /* tp_repr */
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
	"CThostFtdcPortfTradeParamSettingField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcPortfTradeParamSettingField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcPortfTradeParamSettingField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcPortfTradeParamSettingField_new,       /* tp_new */
};

int PyCThostFtdcPortfTradeParamSettingFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcPortfTradeParamSettingField  */
	if (PyType_Ready(&PyCThostFtdcPortfTradeParamSettingFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcPortfTradeParamSettingField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcPortfTradeParamSettingFieldType);
    if( PyModule_AddObject(module, "CThostFtdcPortfTradeParamSettingField", (PyObject *)&PyCThostFtdcPortfTradeParamSettingFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcPortfTradeParamSettingField to module");
        Py_DECREF(&PyCThostFtdcPortfTradeParamSettingFieldType);
		return -1;
    }

    return 0;
}
