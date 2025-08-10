
#include "PyCThostFtdcQryExchangeMarginRateField.h"

///查询交易所保证金率

static PyObject *PyCThostFtdcQryExchangeMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeMarginRateField *self = (PyCThostFtdcQryExchangeMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeMarginRateField_init(PyCThostFtdcQryExchangeMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "HedgeFlag", "ExchangeID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryExchangeMarginRateField_BrokerID = NULL;
    Py_ssize_t QryExchangeMarginRateField_BrokerID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryExchangeMarginRateField_reserve1 = NULL;
    Py_ssize_t QryExchangeMarginRateField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char QryExchangeMarginRateField_HedgeFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeMarginRateField_ExchangeID = NULL;
    Py_ssize_t QryExchangeMarginRateField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryExchangeMarginRateField_InstrumentID = NULL;
    Py_ssize_t QryExchangeMarginRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#", (char **)kwlist
#endif

        , &QryExchangeMarginRateField_BrokerID, &QryExchangeMarginRateField_BrokerID_len 
        , &QryExchangeMarginRateField_reserve1, &QryExchangeMarginRateField_reserve1_len 
        , &QryExchangeMarginRateField_HedgeFlag 
        , &QryExchangeMarginRateField_ExchangeID, &QryExchangeMarginRateField_ExchangeID_len 
        , &QryExchangeMarginRateField_InstrumentID, &QryExchangeMarginRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryExchangeMarginRateField_BrokerID != NULL ) {
        if(QryExchangeMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryExchangeMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryExchangeMarginRateField_BrokerID, QryExchangeMarginRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryExchangeMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
        QryExchangeMarginRateField_BrokerID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryExchangeMarginRateField_reserve1 != NULL ) {
        if(QryExchangeMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryExchangeMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryExchangeMarginRateField_reserve1, QryExchangeMarginRateField_reserve1_len);        
        strncpy(self->data.reserve1, QryExchangeMarginRateField_reserve1, sizeof(self->data.reserve1) );
        QryExchangeMarginRateField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = QryExchangeMarginRateField_HedgeFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeMarginRateField_ExchangeID != NULL ) {
        if(QryExchangeMarginRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeMarginRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeMarginRateField_ExchangeID, QryExchangeMarginRateField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeMarginRateField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeMarginRateField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryExchangeMarginRateField_InstrumentID != NULL ) {
        if(QryExchangeMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryExchangeMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryExchangeMarginRateField_InstrumentID, QryExchangeMarginRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryExchangeMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryExchangeMarginRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeMarginRateField_dealloc(PyCThostFtdcQryExchangeMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeMarginRateField_repr(PyCThostFtdcQryExchangeMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryExchangeMarginRateField_get_BrokerID(PyCThostFtdcQryExchangeMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryExchangeMarginRateField_set_BrokerID(PyCThostFtdcQryExchangeMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeMarginRateField_get_reserve1(PyCThostFtdcQryExchangeMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryExchangeMarginRateField_set_reserve1(PyCThostFtdcQryExchangeMarginRateField *self, PyObject* val, void *closure) {
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
            
///投机套保标志
// TThostFtdcHedgeFlagType char
static PyObject *PyCThostFtdcQryExchangeMarginRateField_get_HedgeFlag(PyCThostFtdcQryExchangeMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQryExchangeMarginRateField_set_HedgeFlag(PyCThostFtdcQryExchangeMarginRateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    self->data.HedgeFlag = *buf;
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryExchangeMarginRateField_get_ExchangeID(PyCThostFtdcQryExchangeMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeMarginRateField_set_ExchangeID(PyCThostFtdcQryExchangeMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeMarginRateField_get_InstrumentID(PyCThostFtdcQryExchangeMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryExchangeMarginRateField_set_InstrumentID(PyCThostFtdcQryExchangeMarginRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeMarginRateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryExchangeMarginRateField_get_BrokerID, (setter)PyCThostFtdcQryExchangeMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeMarginRateField_get_reserve1, (setter)PyCThostFtdcQryExchangeMarginRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcQryExchangeMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcQryExchangeMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeMarginRateField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeMarginRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryExchangeMarginRateField_get_InstrumentID, (setter)PyCThostFtdcQryExchangeMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeMarginRateField", (PyObject *)&PyCThostFtdcQryExchangeMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeMarginRateField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeMarginRateFieldType);
		return -1;
    }

    return 0;
}
