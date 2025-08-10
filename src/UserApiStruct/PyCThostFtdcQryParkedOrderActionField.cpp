
#include "PyCThostFtdcQryParkedOrderActionField.h"

///查询预埋撤单

static PyObject *PyCThostFtdcQryParkedOrderActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryParkedOrderActionField *self = (PyCThostFtdcQryParkedOrderActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryParkedOrderActionField_init(PyCThostFtdcQryParkedOrderActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryParkedOrderActionField_BrokerID = NULL;
    Py_ssize_t QryParkedOrderActionField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryParkedOrderActionField_InvestorID = NULL;
    Py_ssize_t QryParkedOrderActionField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryParkedOrderActionField_reserve1 = NULL;
    Py_ssize_t QryParkedOrderActionField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryParkedOrderActionField_ExchangeID = NULL;
    Py_ssize_t QryParkedOrderActionField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryParkedOrderActionField_InvestUnitID = NULL;
    Py_ssize_t QryParkedOrderActionField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryParkedOrderActionField_InstrumentID = NULL;
    Py_ssize_t QryParkedOrderActionField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryParkedOrderActionField_BrokerID, &QryParkedOrderActionField_BrokerID_len 
        , &QryParkedOrderActionField_InvestorID, &QryParkedOrderActionField_InvestorID_len 
        , &QryParkedOrderActionField_reserve1, &QryParkedOrderActionField_reserve1_len 
        , &QryParkedOrderActionField_ExchangeID, &QryParkedOrderActionField_ExchangeID_len 
        , &QryParkedOrderActionField_InvestUnitID, &QryParkedOrderActionField_InvestUnitID_len 
        , &QryParkedOrderActionField_InstrumentID, &QryParkedOrderActionField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryParkedOrderActionField_BrokerID != NULL ) {
        if(QryParkedOrderActionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryParkedOrderActionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryParkedOrderActionField_BrokerID, QryParkedOrderActionField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryParkedOrderActionField_BrokerID, sizeof(self->data.BrokerID) );
        QryParkedOrderActionField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryParkedOrderActionField_InvestorID != NULL ) {
        if(QryParkedOrderActionField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryParkedOrderActionField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryParkedOrderActionField_InvestorID, QryParkedOrderActionField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryParkedOrderActionField_InvestorID, sizeof(self->data.InvestorID) );
        QryParkedOrderActionField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryParkedOrderActionField_reserve1 != NULL ) {
        if(QryParkedOrderActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryParkedOrderActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryParkedOrderActionField_reserve1, QryParkedOrderActionField_reserve1_len);        
        strncpy(self->data.reserve1, QryParkedOrderActionField_reserve1, sizeof(self->data.reserve1) );
        QryParkedOrderActionField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryParkedOrderActionField_ExchangeID != NULL ) {
        if(QryParkedOrderActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryParkedOrderActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryParkedOrderActionField_ExchangeID, QryParkedOrderActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryParkedOrderActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryParkedOrderActionField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryParkedOrderActionField_InvestUnitID != NULL ) {
        if(QryParkedOrderActionField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryParkedOrderActionField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryParkedOrderActionField_InvestUnitID, QryParkedOrderActionField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryParkedOrderActionField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryParkedOrderActionField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryParkedOrderActionField_InstrumentID != NULL ) {
        if(QryParkedOrderActionField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryParkedOrderActionField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryParkedOrderActionField_InstrumentID, QryParkedOrderActionField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryParkedOrderActionField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryParkedOrderActionField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryParkedOrderActionField_dealloc(PyCThostFtdcQryParkedOrderActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryParkedOrderActionField_repr(PyCThostFtdcQryParkedOrderActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryParkedOrderActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryParkedOrderActionField_get_BrokerID(PyCThostFtdcQryParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryParkedOrderActionField_set_BrokerID(PyCThostFtdcQryParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryParkedOrderActionField_get_InvestorID(PyCThostFtdcQryParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryParkedOrderActionField_set_InvestorID(PyCThostFtdcQryParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryParkedOrderActionField_get_reserve1(PyCThostFtdcQryParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryParkedOrderActionField_set_reserve1(PyCThostFtdcQryParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryParkedOrderActionField_get_ExchangeID(PyCThostFtdcQryParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryParkedOrderActionField_set_ExchangeID(PyCThostFtdcQryParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryParkedOrderActionField_get_InvestUnitID(PyCThostFtdcQryParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryParkedOrderActionField_set_InvestUnitID(PyCThostFtdcQryParkedOrderActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryParkedOrderActionField_get_InstrumentID(PyCThostFtdcQryParkedOrderActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryParkedOrderActionField_set_InstrumentID(PyCThostFtdcQryParkedOrderActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryParkedOrderActionField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryParkedOrderActionField_get_BrokerID, (setter)PyCThostFtdcQryParkedOrderActionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryParkedOrderActionField_get_InvestorID, (setter)PyCThostFtdcQryParkedOrderActionField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryParkedOrderActionField_get_reserve1, (setter)PyCThostFtdcQryParkedOrderActionField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryParkedOrderActionField_get_ExchangeID, (setter)PyCThostFtdcQryParkedOrderActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryParkedOrderActionField_get_InvestUnitID, (setter)PyCThostFtdcQryParkedOrderActionField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryParkedOrderActionField_get_InstrumentID, (setter)PyCThostFtdcQryParkedOrderActionField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryParkedOrderActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryParkedOrderActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryParkedOrderActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryParkedOrderActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryParkedOrderActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryParkedOrderActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryParkedOrderActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryParkedOrderActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryParkedOrderActionField_new,       /* tp_new */
};

int PyCThostFtdcQryParkedOrderActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryParkedOrderActionField  */
	if (PyType_Ready(&PyCThostFtdcQryParkedOrderActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryParkedOrderActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryParkedOrderActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryParkedOrderActionField", (PyObject *)&PyCThostFtdcQryParkedOrderActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryParkedOrderActionField to module");
        Py_DECREF(&PyCThostFtdcQryParkedOrderActionFieldType);
		return -1;
    }

    return 0;
}
