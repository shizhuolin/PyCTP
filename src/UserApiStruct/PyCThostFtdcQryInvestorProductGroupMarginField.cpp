
#include "PyCThostFtdcQryInvestorProductGroupMarginField.h"

///查询投资者品种/跨品种保证金

static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorProductGroupMarginField *self = (PyCThostFtdcQryInvestorProductGroupMarginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorProductGroupMarginField_init(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "HedgeFlag", "ExchangeID", "InvestUnitID", "ProductGroupID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorProductGroupMarginField_BrokerID = NULL;
    Py_ssize_t QryInvestorProductGroupMarginField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorProductGroupMarginField_InvestorID = NULL;
    Py_ssize_t QryInvestorProductGroupMarginField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryInvestorProductGroupMarginField_reserve1 = NULL;
    Py_ssize_t QryInvestorProductGroupMarginField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char QryInvestorProductGroupMarginField_HedgeFlag = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInvestorProductGroupMarginField_ExchangeID = NULL;
    Py_ssize_t QryInvestorProductGroupMarginField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryInvestorProductGroupMarginField_InvestUnitID = NULL;
    Py_ssize_t QryInvestorProductGroupMarginField_InvestUnitID_len = 0;
            
    ///品种/跨品种标示
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInvestorProductGroupMarginField_ProductGroupID = NULL;
    Py_ssize_t QryInvestorProductGroupMarginField_ProductGroupID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#s#s#", (char **)kwlist
#endif

        , &QryInvestorProductGroupMarginField_BrokerID, &QryInvestorProductGroupMarginField_BrokerID_len 
        , &QryInvestorProductGroupMarginField_InvestorID, &QryInvestorProductGroupMarginField_InvestorID_len 
        , &QryInvestorProductGroupMarginField_reserve1, &QryInvestorProductGroupMarginField_reserve1_len 
        , &QryInvestorProductGroupMarginField_HedgeFlag 
        , &QryInvestorProductGroupMarginField_ExchangeID, &QryInvestorProductGroupMarginField_ExchangeID_len 
        , &QryInvestorProductGroupMarginField_InvestUnitID, &QryInvestorProductGroupMarginField_InvestUnitID_len 
        , &QryInvestorProductGroupMarginField_ProductGroupID, &QryInvestorProductGroupMarginField_ProductGroupID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorProductGroupMarginField_BrokerID != NULL ) {
        if(QryInvestorProductGroupMarginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorProductGroupMarginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorProductGroupMarginField_BrokerID, QryInvestorProductGroupMarginField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorProductGroupMarginField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorProductGroupMarginField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorProductGroupMarginField_InvestorID != NULL ) {
        if(QryInvestorProductGroupMarginField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorProductGroupMarginField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorProductGroupMarginField_InvestorID, QryInvestorProductGroupMarginField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorProductGroupMarginField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorProductGroupMarginField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryInvestorProductGroupMarginField_reserve1 != NULL ) {
        if(QryInvestorProductGroupMarginField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryInvestorProductGroupMarginField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryInvestorProductGroupMarginField_reserve1, QryInvestorProductGroupMarginField_reserve1_len);        
        strncpy(self->data.reserve1, QryInvestorProductGroupMarginField_reserve1, sizeof(self->data.reserve1) );
        QryInvestorProductGroupMarginField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = QryInvestorProductGroupMarginField_HedgeFlag;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInvestorProductGroupMarginField_ExchangeID != NULL ) {
        if(QryInvestorProductGroupMarginField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInvestorProductGroupMarginField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInvestorProductGroupMarginField_ExchangeID, QryInvestorProductGroupMarginField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInvestorProductGroupMarginField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInvestorProductGroupMarginField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryInvestorProductGroupMarginField_InvestUnitID != NULL ) {
        if(QryInvestorProductGroupMarginField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryInvestorProductGroupMarginField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryInvestorProductGroupMarginField_InvestUnitID, QryInvestorProductGroupMarginField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryInvestorProductGroupMarginField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryInvestorProductGroupMarginField_InvestUnitID = NULL;
    }
            
    ///品种/跨品种标示
    // TThostFtdcInstrumentIDType char[81]
    if( QryInvestorProductGroupMarginField_ProductGroupID != NULL ) {
        if(QryInvestorProductGroupMarginField_ProductGroupID_len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
            PyErr_Format(PyExc_ValueError, "ProductGroupID too long: length=%zd (max allowed is %zd)", QryInvestorProductGroupMarginField_ProductGroupID_len, (Py_ssize_t)sizeof(self->data.ProductGroupID));
            return -1;
        }
        // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
        // memcpy(self->data.ProductGroupID, QryInvestorProductGroupMarginField_ProductGroupID, QryInvestorProductGroupMarginField_ProductGroupID_len);        
        strncpy(self->data.ProductGroupID, QryInvestorProductGroupMarginField_ProductGroupID, sizeof(self->data.ProductGroupID) );
        QryInvestorProductGroupMarginField_ProductGroupID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorProductGroupMarginField_dealloc(PyCThostFtdcQryInvestorProductGroupMarginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_repr(PyCThostFtdcQryInvestorProductGroupMarginField *self) {

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
        ,"ProductGroupID", self->data.ProductGroupID//, (Py_ssize_t)sizeof(self->data.ProductGroupID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorProductGroupMarginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_get_BrokerID(PyCThostFtdcQryInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorProductGroupMarginField_set_BrokerID(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_get_InvestorID(PyCThostFtdcQryInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorProductGroupMarginField_set_InvestorID(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_get_reserve1(PyCThostFtdcQryInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryInvestorProductGroupMarginField_set_reserve1(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_get_HedgeFlag(PyCThostFtdcQryInvestorProductGroupMarginField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQryInvestorProductGroupMarginField_set_HedgeFlag(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_get_ExchangeID(PyCThostFtdcQryInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInvestorProductGroupMarginField_set_ExchangeID(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_get_InvestUnitID(PyCThostFtdcQryInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryInvestorProductGroupMarginField_set_InvestUnitID(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
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
            
///品种/跨品种标示
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryInvestorProductGroupMarginField_get_ProductGroupID(PyCThostFtdcQryInvestorProductGroupMarginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductGroupID, (Py_ssize_t)sizeof(self->data.ProductGroupID));
    return PyBytes_FromString(self->data.ProductGroupID);
}

///品种/跨品种标示
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInvestorProductGroupMarginField_set_ProductGroupID(PyCThostFtdcQryInvestorProductGroupMarginField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductGroupID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductGroupID)) {
        PyErr_SetString(PyExc_ValueError, "ProductGroupID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductGroupID, 0, sizeof(self->data.ProductGroupID));
    // memcpy(self->data.ProductGroupID, buf, len);
    strncpy(self->data.ProductGroupID, buf, sizeof(self->data.ProductGroupID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryInvestorProductGroupMarginField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorProductGroupMarginField_get_BrokerID, (setter)PyCThostFtdcQryInvestorProductGroupMarginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorProductGroupMarginField_get_InvestorID, (setter)PyCThostFtdcQryInvestorProductGroupMarginField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryInvestorProductGroupMarginField_get_reserve1, (setter)PyCThostFtdcQryInvestorProductGroupMarginField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcQryInvestorProductGroupMarginField_get_HedgeFlag, (setter)PyCThostFtdcQryInvestorProductGroupMarginField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorProductGroupMarginField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorProductGroupMarginField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInvestorProductGroupMarginField_get_InvestUnitID, (setter)PyCThostFtdcQryInvestorProductGroupMarginField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///品种/跨品种标示 
    {(char *)"ProductGroupID", (getter)PyCThostFtdcQryInvestorProductGroupMarginField_get_ProductGroupID, (setter)PyCThostFtdcQryInvestorProductGroupMarginField_set_ProductGroupID, (char *)"ProductGroupID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorProductGroupMarginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorProductGroupMarginField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorProductGroupMarginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorProductGroupMarginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorProductGroupMarginField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorProductGroupMarginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorProductGroupMarginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorProductGroupMarginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorProductGroupMarginField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorProductGroupMarginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorProductGroupMarginField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorProductGroupMarginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorProductGroupMarginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorProductGroupMarginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorProductGroupMarginField", (PyObject *)&PyCThostFtdcQryInvestorProductGroupMarginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorProductGroupMarginField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorProductGroupMarginFieldType);
		return -1;
    }

    return 0;
}
