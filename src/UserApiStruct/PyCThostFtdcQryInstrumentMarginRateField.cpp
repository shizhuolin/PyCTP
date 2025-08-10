
#include "PyCThostFtdcQryInstrumentMarginRateField.h"

///查询合约保证金率

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInstrumentMarginRateField *self = (PyCThostFtdcQryInstrumentMarginRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInstrumentMarginRateField_init(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "HedgeFlag", "ExchangeID", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInstrumentMarginRateField_BrokerID = NULL;
    Py_ssize_t QryInstrumentMarginRateField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInstrumentMarginRateField_InvestorID = NULL;
    Py_ssize_t QryInstrumentMarginRateField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryInstrumentMarginRateField_reserve1 = NULL;
    Py_ssize_t QryInstrumentMarginRateField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char QryInstrumentMarginRateField_HedgeFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInstrumentMarginRateField_ExchangeID = NULL;
    Py_ssize_t QryInstrumentMarginRateField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryInstrumentMarginRateField_InvestUnitID = NULL;
    Py_ssize_t QryInstrumentMarginRateField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInstrumentMarginRateField_InstrumentID = NULL;
    Py_ssize_t QryInstrumentMarginRateField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#s#s#", (char **)kwlist
#endif

        , &QryInstrumentMarginRateField_BrokerID, &QryInstrumentMarginRateField_BrokerID_len 
        , &QryInstrumentMarginRateField_InvestorID, &QryInstrumentMarginRateField_InvestorID_len 
        , &QryInstrumentMarginRateField_reserve1, &QryInstrumentMarginRateField_reserve1_len 
        , &QryInstrumentMarginRateField_HedgeFlag 
        , &QryInstrumentMarginRateField_ExchangeID, &QryInstrumentMarginRateField_ExchangeID_len 
        , &QryInstrumentMarginRateField_InvestUnitID, &QryInstrumentMarginRateField_InvestUnitID_len 
        , &QryInstrumentMarginRateField_InstrumentID, &QryInstrumentMarginRateField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInstrumentMarginRateField_BrokerID != NULL ) {
        if(QryInstrumentMarginRateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInstrumentMarginRateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInstrumentMarginRateField_BrokerID, QryInstrumentMarginRateField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInstrumentMarginRateField_BrokerID, sizeof(self->data.BrokerID) );
        QryInstrumentMarginRateField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInstrumentMarginRateField_InvestorID != NULL ) {
        if(QryInstrumentMarginRateField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInstrumentMarginRateField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInstrumentMarginRateField_InvestorID, QryInstrumentMarginRateField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInstrumentMarginRateField_InvestorID, sizeof(self->data.InvestorID) );
        QryInstrumentMarginRateField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryInstrumentMarginRateField_reserve1 != NULL ) {
        if(QryInstrumentMarginRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryInstrumentMarginRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryInstrumentMarginRateField_reserve1, QryInstrumentMarginRateField_reserve1_len);        
        strncpy(self->data.reserve1, QryInstrumentMarginRateField_reserve1, sizeof(self->data.reserve1) );
        QryInstrumentMarginRateField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = QryInstrumentMarginRateField_HedgeFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInstrumentMarginRateField_ExchangeID != NULL ) {
        if(QryInstrumentMarginRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInstrumentMarginRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInstrumentMarginRateField_ExchangeID, QryInstrumentMarginRateField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInstrumentMarginRateField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInstrumentMarginRateField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryInstrumentMarginRateField_InvestUnitID != NULL ) {
        if(QryInstrumentMarginRateField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryInstrumentMarginRateField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryInstrumentMarginRateField_InvestUnitID, QryInstrumentMarginRateField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryInstrumentMarginRateField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryInstrumentMarginRateField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInstrumentMarginRateField_InstrumentID != NULL ) {
        if(QryInstrumentMarginRateField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryInstrumentMarginRateField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryInstrumentMarginRateField_InstrumentID, QryInstrumentMarginRateField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryInstrumentMarginRateField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryInstrumentMarginRateField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInstrumentMarginRateField_dealloc(PyCThostFtdcQryInstrumentMarginRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInstrumentMarginRateField_repr(PyCThostFtdcQryInstrumentMarginRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentMarginRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_BrokerID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInstrumentMarginRateField_set_BrokerID(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_InvestorID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInstrumentMarginRateField_set_InvestorID(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_reserve1(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryInstrumentMarginRateField_set_reserve1(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_HedgeFlag(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQryInstrumentMarginRateField_set_HedgeFlag(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_ExchangeID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInstrumentMarginRateField_set_ExchangeID(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_InvestUnitID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryInstrumentMarginRateField_set_InvestUnitID(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentMarginRateField_get_InstrumentID(PyCThostFtdcQryInstrumentMarginRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInstrumentMarginRateField_set_InstrumentID(PyCThostFtdcQryInstrumentMarginRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInstrumentMarginRateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_BrokerID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_InvestorID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_reserve1, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_HedgeFlag, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_ExchangeID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_InvestUnitID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryInstrumentMarginRateField_get_InstrumentID, (setter)PyCThostFtdcQryInstrumentMarginRateField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInstrumentMarginRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInstrumentMarginRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryInstrumentMarginRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInstrumentMarginRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInstrumentMarginRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryInstrumentMarginRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInstrumentMarginRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInstrumentMarginRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInstrumentMarginRateField_new,       /* tp_new */
};

int PyCThostFtdcQryInstrumentMarginRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInstrumentMarginRateField  */
	if (PyType_Ready(&PyCThostFtdcQryInstrumentMarginRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInstrumentMarginRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInstrumentMarginRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentMarginRateField", (PyObject *)&PyCThostFtdcQryInstrumentMarginRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentMarginRateField to module");
        Py_DECREF(&PyCThostFtdcQryInstrumentMarginRateFieldType);
		return -1;
    }

    return 0;
}
