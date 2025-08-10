
#include "PyCThostFtdcQryBrokerTradingAlgosField.h"

///查询经纪公司交易算法

static PyObject *PyCThostFtdcQryBrokerTradingAlgosField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryBrokerTradingAlgosField *self = (PyCThostFtdcQryBrokerTradingAlgosField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryBrokerTradingAlgosField_init(PyCThostFtdcQryBrokerTradingAlgosField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ExchangeID", "reserve1", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryBrokerTradingAlgosField_BrokerID = NULL;
    Py_ssize_t QryBrokerTradingAlgosField_BrokerID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryBrokerTradingAlgosField_ExchangeID = NULL;
    Py_ssize_t QryBrokerTradingAlgosField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryBrokerTradingAlgosField_reserve1 = NULL;
    Py_ssize_t QryBrokerTradingAlgosField_reserve1_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryBrokerTradingAlgosField_InstrumentID = NULL;
    Py_ssize_t QryBrokerTradingAlgosField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryBrokerTradingAlgosField_BrokerID, &QryBrokerTradingAlgosField_BrokerID_len 
        , &QryBrokerTradingAlgosField_ExchangeID, &QryBrokerTradingAlgosField_ExchangeID_len 
        , &QryBrokerTradingAlgosField_reserve1, &QryBrokerTradingAlgosField_reserve1_len 
        , &QryBrokerTradingAlgosField_InstrumentID, &QryBrokerTradingAlgosField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryBrokerTradingAlgosField_BrokerID != NULL ) {
        if(QryBrokerTradingAlgosField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryBrokerTradingAlgosField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryBrokerTradingAlgosField_BrokerID, QryBrokerTradingAlgosField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryBrokerTradingAlgosField_BrokerID, sizeof(self->data.BrokerID) );
        QryBrokerTradingAlgosField_BrokerID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryBrokerTradingAlgosField_ExchangeID != NULL ) {
        if(QryBrokerTradingAlgosField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryBrokerTradingAlgosField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryBrokerTradingAlgosField_ExchangeID, QryBrokerTradingAlgosField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryBrokerTradingAlgosField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryBrokerTradingAlgosField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryBrokerTradingAlgosField_reserve1 != NULL ) {
        if(QryBrokerTradingAlgosField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryBrokerTradingAlgosField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryBrokerTradingAlgosField_reserve1, QryBrokerTradingAlgosField_reserve1_len);        
        strncpy(self->data.reserve1, QryBrokerTradingAlgosField_reserve1, sizeof(self->data.reserve1) );
        QryBrokerTradingAlgosField_reserve1 = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryBrokerTradingAlgosField_InstrumentID != NULL ) {
        if(QryBrokerTradingAlgosField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryBrokerTradingAlgosField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryBrokerTradingAlgosField_InstrumentID, QryBrokerTradingAlgosField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryBrokerTradingAlgosField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryBrokerTradingAlgosField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryBrokerTradingAlgosField_dealloc(PyCThostFtdcQryBrokerTradingAlgosField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryBrokerTradingAlgosField_repr(PyCThostFtdcQryBrokerTradingAlgosField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryBrokerTradingAlgosField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryBrokerTradingAlgosField_get_BrokerID(PyCThostFtdcQryBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryBrokerTradingAlgosField_set_BrokerID(PyCThostFtdcQryBrokerTradingAlgosField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryBrokerTradingAlgosField_get_ExchangeID(PyCThostFtdcQryBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryBrokerTradingAlgosField_set_ExchangeID(PyCThostFtdcQryBrokerTradingAlgosField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryBrokerTradingAlgosField_get_reserve1(PyCThostFtdcQryBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryBrokerTradingAlgosField_set_reserve1(PyCThostFtdcQryBrokerTradingAlgosField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryBrokerTradingAlgosField_get_InstrumentID(PyCThostFtdcQryBrokerTradingAlgosField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryBrokerTradingAlgosField_set_InstrumentID(PyCThostFtdcQryBrokerTradingAlgosField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryBrokerTradingAlgosField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryBrokerTradingAlgosField_get_BrokerID, (setter)PyCThostFtdcQryBrokerTradingAlgosField_set_BrokerID, (char *)"BrokerID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryBrokerTradingAlgosField_get_ExchangeID, (setter)PyCThostFtdcQryBrokerTradingAlgosField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryBrokerTradingAlgosField_get_reserve1, (setter)PyCThostFtdcQryBrokerTradingAlgosField_set_reserve1, (char *)"reserve1", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryBrokerTradingAlgosField_get_InstrumentID, (setter)PyCThostFtdcQryBrokerTradingAlgosField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryBrokerTradingAlgosFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryBrokerTradingAlgosField",	/* tp_name */
	sizeof(PyCThostFtdcQryBrokerTradingAlgosField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryBrokerTradingAlgosField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryBrokerTradingAlgosField_repr,   /* tp_repr */
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
	"CThostFtdcQryBrokerTradingAlgosField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryBrokerTradingAlgosField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryBrokerTradingAlgosField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryBrokerTradingAlgosField_new,       /* tp_new */
};

int PyCThostFtdcQryBrokerTradingAlgosFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryBrokerTradingAlgosField  */
	if (PyType_Ready(&PyCThostFtdcQryBrokerTradingAlgosFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryBrokerTradingAlgosField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryBrokerTradingAlgosFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryBrokerTradingAlgosField", (PyObject *)&PyCThostFtdcQryBrokerTradingAlgosFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryBrokerTradingAlgosField to module");
        Py_DECREF(&PyCThostFtdcQryBrokerTradingAlgosFieldType);
		return -1;
    }

    return 0;
}
