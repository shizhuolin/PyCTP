
#include "PyCThostFtdcQryInvestorPositionDetailField.h"

///查询投资者持仓明细

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorPositionDetailField *self = (PyCThostFtdcQryInvestorPositionDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorPositionDetailField_init(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorPositionDetailField_BrokerID = NULL;
    Py_ssize_t QryInvestorPositionDetailField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorPositionDetailField_InvestorID = NULL;
    Py_ssize_t QryInvestorPositionDetailField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryInvestorPositionDetailField_reserve1 = NULL;
    Py_ssize_t QryInvestorPositionDetailField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInvestorPositionDetailField_ExchangeID = NULL;
    Py_ssize_t QryInvestorPositionDetailField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryInvestorPositionDetailField_InvestUnitID = NULL;
    Py_ssize_t QryInvestorPositionDetailField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInvestorPositionDetailField_InstrumentID = NULL;
    Py_ssize_t QryInvestorPositionDetailField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryInvestorPositionDetailField_BrokerID, &QryInvestorPositionDetailField_BrokerID_len 
        , &QryInvestorPositionDetailField_InvestorID, &QryInvestorPositionDetailField_InvestorID_len 
        , &QryInvestorPositionDetailField_reserve1, &QryInvestorPositionDetailField_reserve1_len 
        , &QryInvestorPositionDetailField_ExchangeID, &QryInvestorPositionDetailField_ExchangeID_len 
        , &QryInvestorPositionDetailField_InvestUnitID, &QryInvestorPositionDetailField_InvestUnitID_len 
        , &QryInvestorPositionDetailField_InstrumentID, &QryInvestorPositionDetailField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorPositionDetailField_BrokerID != NULL ) {
        if(QryInvestorPositionDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorPositionDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorPositionDetailField_BrokerID, QryInvestorPositionDetailField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorPositionDetailField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorPositionDetailField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorPositionDetailField_InvestorID != NULL ) {
        if(QryInvestorPositionDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorPositionDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorPositionDetailField_InvestorID, QryInvestorPositionDetailField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorPositionDetailField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorPositionDetailField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryInvestorPositionDetailField_reserve1 != NULL ) {
        if(QryInvestorPositionDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryInvestorPositionDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryInvestorPositionDetailField_reserve1, QryInvestorPositionDetailField_reserve1_len);        
        strncpy(self->data.reserve1, QryInvestorPositionDetailField_reserve1, sizeof(self->data.reserve1) );
        QryInvestorPositionDetailField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInvestorPositionDetailField_ExchangeID != NULL ) {
        if(QryInvestorPositionDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInvestorPositionDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInvestorPositionDetailField_ExchangeID, QryInvestorPositionDetailField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInvestorPositionDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInvestorPositionDetailField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryInvestorPositionDetailField_InvestUnitID != NULL ) {
        if(QryInvestorPositionDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryInvestorPositionDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryInvestorPositionDetailField_InvestUnitID, QryInvestorPositionDetailField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryInvestorPositionDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryInvestorPositionDetailField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInvestorPositionDetailField_InstrumentID != NULL ) {
        if(QryInvestorPositionDetailField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryInvestorPositionDetailField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryInvestorPositionDetailField_InstrumentID, QryInvestorPositionDetailField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryInvestorPositionDetailField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryInvestorPositionDetailField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorPositionDetailField_dealloc(PyCThostFtdcQryInvestorPositionDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorPositionDetailField_repr(PyCThostFtdcQryInvestorPositionDetailField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_BrokerID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorPositionDetailField_set_BrokerID(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_InvestorID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorPositionDetailField_set_InvestorID(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_reserve1(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryInvestorPositionDetailField_set_reserve1(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_ExchangeID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInvestorPositionDetailField_set_ExchangeID(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_InvestUnitID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryInvestorPositionDetailField_set_InvestUnitID(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
    // memcpy(self->data.InvestUnitID, buf, len);
    strncpy(self->data.InvestUnitID, buf, sizeof(self->data.InvestUnitID));
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryInvestorPositionDetailField_get_InstrumentID(PyCThostFtdcQryInvestorPositionDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInvestorPositionDetailField_set_InstrumentID(PyCThostFtdcQryInvestorPositionDetailField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInvestorPositionDetailField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_BrokerID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_InvestorID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_reserve1, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_InvestUnitID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryInvestorPositionDetailField_get_InstrumentID, (setter)PyCThostFtdcQryInvestorPositionDetailField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorPositionDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorPositionDetailField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorPositionDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorPositionDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorPositionDetailField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorPositionDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorPositionDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorPositionDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorPositionDetailField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorPositionDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorPositionDetailField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorPositionDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorPositionDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorPositionDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionDetailField", (PyObject *)&PyCThostFtdcQryInvestorPositionDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionDetailField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorPositionDetailFieldType);
		return -1;
    }

    return 0;
}
