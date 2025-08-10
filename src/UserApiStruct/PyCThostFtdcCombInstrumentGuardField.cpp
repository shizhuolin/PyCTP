
#include "PyCThostFtdcCombInstrumentGuardField.h"

///组合合约安全系数

static PyObject *PyCThostFtdcCombInstrumentGuardField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCombInstrumentGuardField *self = (PyCThostFtdcCombInstrumentGuardField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCombInstrumentGuardField_init(PyCThostFtdcCombInstrumentGuardField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "GuarantRatio", "ExchangeID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *CombInstrumentGuardField_BrokerID = NULL;
    Py_ssize_t CombInstrumentGuardField_BrokerID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *CombInstrumentGuardField_reserve1 = NULL;
    Py_ssize_t CombInstrumentGuardField_reserve1_len = 0;
            
    ///
    // TThostFtdcRatioType double
    double CombInstrumentGuardField_GuarantRatio = 0.0;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *CombInstrumentGuardField_ExchangeID = NULL;
    Py_ssize_t CombInstrumentGuardField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *CombInstrumentGuardField_InstrumentID = NULL;
    Py_ssize_t CombInstrumentGuardField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#dy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#ds#s#", (char **)kwlist
#endif

        , &CombInstrumentGuardField_BrokerID, &CombInstrumentGuardField_BrokerID_len 
        , &CombInstrumentGuardField_reserve1, &CombInstrumentGuardField_reserve1_len 
        , &CombInstrumentGuardField_GuarantRatio 
        , &CombInstrumentGuardField_ExchangeID, &CombInstrumentGuardField_ExchangeID_len 
        , &CombInstrumentGuardField_InstrumentID, &CombInstrumentGuardField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( CombInstrumentGuardField_BrokerID != NULL ) {
        if(CombInstrumentGuardField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", CombInstrumentGuardField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, CombInstrumentGuardField_BrokerID, CombInstrumentGuardField_BrokerID_len);        
        strncpy(self->data.BrokerID, CombInstrumentGuardField_BrokerID, sizeof(self->data.BrokerID) );
        CombInstrumentGuardField_BrokerID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( CombInstrumentGuardField_reserve1 != NULL ) {
        if(CombInstrumentGuardField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", CombInstrumentGuardField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, CombInstrumentGuardField_reserve1, CombInstrumentGuardField_reserve1_len);        
        strncpy(self->data.reserve1, CombInstrumentGuardField_reserve1, sizeof(self->data.reserve1) );
        CombInstrumentGuardField_reserve1 = NULL;
    }
            
    ///
    // TThostFtdcRatioType double
    self->data.GuarantRatio = CombInstrumentGuardField_GuarantRatio;
        
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( CombInstrumentGuardField_ExchangeID != NULL ) {
        if(CombInstrumentGuardField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", CombInstrumentGuardField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, CombInstrumentGuardField_ExchangeID, CombInstrumentGuardField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, CombInstrumentGuardField_ExchangeID, sizeof(self->data.ExchangeID) );
        CombInstrumentGuardField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( CombInstrumentGuardField_InstrumentID != NULL ) {
        if(CombInstrumentGuardField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", CombInstrumentGuardField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, CombInstrumentGuardField_InstrumentID, CombInstrumentGuardField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, CombInstrumentGuardField_InstrumentID, sizeof(self->data.InstrumentID) );
        CombInstrumentGuardField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcCombInstrumentGuardField_dealloc(PyCThostFtdcCombInstrumentGuardField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCombInstrumentGuardField_repr(PyCThostFtdcCombInstrumentGuardField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:d,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:d,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"GuarantRatio", self->data.GuarantRatio 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCombInstrumentGuardField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcCombInstrumentGuardField_get_BrokerID(PyCThostFtdcCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcCombInstrumentGuardField_set_BrokerID(PyCThostFtdcCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcCombInstrumentGuardField_get_reserve1(PyCThostFtdcCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcCombInstrumentGuardField_set_reserve1(PyCThostFtdcCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
            
///
// TThostFtdcRatioType double
static PyObject *PyCThostFtdcCombInstrumentGuardField_get_GuarantRatio(PyCThostFtdcCombInstrumentGuardField *self, void *closure) {
    return PyFloat_FromDouble(self->data.GuarantRatio);
}

///
// TThostFtdcRatioType double
static int PyCThostFtdcCombInstrumentGuardField_set_GuarantRatio(PyCThostFtdcCombInstrumentGuardField *self, PyObject* val, void *closure) {
    if (!PyFloat_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "GuarantRatio Expected float");
        return -1;
    }
    const double buf = PyFloat_AsDouble(val);
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    self->data.GuarantRatio = buf;
    return 0;
}
        
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcCombInstrumentGuardField_get_ExchangeID(PyCThostFtdcCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcCombInstrumentGuardField_set_ExchangeID(PyCThostFtdcCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcCombInstrumentGuardField_get_InstrumentID(PyCThostFtdcCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcCombInstrumentGuardField_set_InstrumentID(PyCThostFtdcCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcCombInstrumentGuardField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcCombInstrumentGuardField_get_BrokerID, (setter)PyCThostFtdcCombInstrumentGuardField_set_BrokerID, (char *)"BrokerID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcCombInstrumentGuardField_get_reserve1, (setter)PyCThostFtdcCombInstrumentGuardField_set_reserve1, (char *)"reserve1", NULL},
    /// 
    {(char *)"GuarantRatio", (getter)PyCThostFtdcCombInstrumentGuardField_get_GuarantRatio, (setter)PyCThostFtdcCombInstrumentGuardField_set_GuarantRatio, (char *)"GuarantRatio", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcCombInstrumentGuardField_get_ExchangeID, (setter)PyCThostFtdcCombInstrumentGuardField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcCombInstrumentGuardField_get_InstrumentID, (setter)PyCThostFtdcCombInstrumentGuardField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCombInstrumentGuardFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCombInstrumentGuardField",	/* tp_name */
	sizeof(PyCThostFtdcCombInstrumentGuardField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCombInstrumentGuardField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCombInstrumentGuardField_repr,   /* tp_repr */
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
	"CThostFtdcCombInstrumentGuardField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCombInstrumentGuardField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCombInstrumentGuardField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCombInstrumentGuardField_new,       /* tp_new */
};

int PyCThostFtdcCombInstrumentGuardFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCombInstrumentGuardField  */
	if (PyType_Ready(&PyCThostFtdcCombInstrumentGuardFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCombInstrumentGuardField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCombInstrumentGuardFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCombInstrumentGuardField", (PyObject *)&PyCThostFtdcCombInstrumentGuardFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCombInstrumentGuardField to module");
        Py_DECREF(&PyCThostFtdcCombInstrumentGuardFieldType);
		return -1;
    }

    return 0;
}
