
#include "PyCThostFtdcQryEWarrantOffsetField.h"

///查询仓单折抵信息

static PyObject *PyCThostFtdcQryEWarrantOffsetField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryEWarrantOffsetField *self = (PyCThostFtdcQryEWarrantOffsetField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryEWarrantOffsetField_init(PyCThostFtdcQryEWarrantOffsetField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "ExchangeID", "reserve1", "InvestUnitID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryEWarrantOffsetField_BrokerID = NULL;
    Py_ssize_t QryEWarrantOffsetField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryEWarrantOffsetField_InvestorID = NULL;
    Py_ssize_t QryEWarrantOffsetField_InvestorID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryEWarrantOffsetField_ExchangeID = NULL;
    Py_ssize_t QryEWarrantOffsetField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryEWarrantOffsetField_reserve1 = NULL;
    Py_ssize_t QryEWarrantOffsetField_reserve1_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryEWarrantOffsetField_InvestUnitID = NULL;
    Py_ssize_t QryEWarrantOffsetField_InvestUnitID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryEWarrantOffsetField_InstrumentID = NULL;
    Py_ssize_t QryEWarrantOffsetField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryEWarrantOffsetField_BrokerID, &QryEWarrantOffsetField_BrokerID_len 
        , &QryEWarrantOffsetField_InvestorID, &QryEWarrantOffsetField_InvestorID_len 
        , &QryEWarrantOffsetField_ExchangeID, &QryEWarrantOffsetField_ExchangeID_len 
        , &QryEWarrantOffsetField_reserve1, &QryEWarrantOffsetField_reserve1_len 
        , &QryEWarrantOffsetField_InvestUnitID, &QryEWarrantOffsetField_InvestUnitID_len 
        , &QryEWarrantOffsetField_InstrumentID, &QryEWarrantOffsetField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryEWarrantOffsetField_BrokerID != NULL ) {
        if(QryEWarrantOffsetField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryEWarrantOffsetField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryEWarrantOffsetField_BrokerID, QryEWarrantOffsetField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryEWarrantOffsetField_BrokerID, sizeof(self->data.BrokerID) );
        QryEWarrantOffsetField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryEWarrantOffsetField_InvestorID != NULL ) {
        if(QryEWarrantOffsetField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryEWarrantOffsetField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryEWarrantOffsetField_InvestorID, QryEWarrantOffsetField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryEWarrantOffsetField_InvestorID, sizeof(self->data.InvestorID) );
        QryEWarrantOffsetField_InvestorID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryEWarrantOffsetField_ExchangeID != NULL ) {
        if(QryEWarrantOffsetField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryEWarrantOffsetField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryEWarrantOffsetField_ExchangeID, QryEWarrantOffsetField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryEWarrantOffsetField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryEWarrantOffsetField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryEWarrantOffsetField_reserve1 != NULL ) {
        if(QryEWarrantOffsetField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryEWarrantOffsetField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryEWarrantOffsetField_reserve1, QryEWarrantOffsetField_reserve1_len);        
        strncpy(self->data.reserve1, QryEWarrantOffsetField_reserve1, sizeof(self->data.reserve1) );
        QryEWarrantOffsetField_reserve1 = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryEWarrantOffsetField_InvestUnitID != NULL ) {
        if(QryEWarrantOffsetField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryEWarrantOffsetField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryEWarrantOffsetField_InvestUnitID, QryEWarrantOffsetField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryEWarrantOffsetField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryEWarrantOffsetField_InvestUnitID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryEWarrantOffsetField_InstrumentID != NULL ) {
        if(QryEWarrantOffsetField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryEWarrantOffsetField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryEWarrantOffsetField_InstrumentID, QryEWarrantOffsetField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryEWarrantOffsetField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryEWarrantOffsetField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryEWarrantOffsetField_dealloc(PyCThostFtdcQryEWarrantOffsetField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryEWarrantOffsetField_repr(PyCThostFtdcQryEWarrantOffsetField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InvestUnitID", self->data.InvestUnitID//, (Py_ssize_t)sizeof(self->data.InvestUnitID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryEWarrantOffsetField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_BrokerID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryEWarrantOffsetField_set_BrokerID(PyCThostFtdcQryEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_InvestorID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryEWarrantOffsetField_set_InvestorID(PyCThostFtdcQryEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_ExchangeID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryEWarrantOffsetField_set_ExchangeID(PyCThostFtdcQryEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_reserve1(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryEWarrantOffsetField_set_reserve1(PyCThostFtdcQryEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            
///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_InvestUnitID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryEWarrantOffsetField_set_InvestUnitID(PyCThostFtdcQryEWarrantOffsetField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryEWarrantOffsetField_get_InstrumentID(PyCThostFtdcQryEWarrantOffsetField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryEWarrantOffsetField_set_InstrumentID(PyCThostFtdcQryEWarrantOffsetField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryEWarrantOffsetField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_BrokerID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_InvestorID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_InvestorID, (char *)"InvestorID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_ExchangeID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryEWarrantOffsetField_get_reserve1, (setter)PyCThostFtdcQryEWarrantOffsetField_set_reserve1, (char *)"reserve1", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_InvestUnitID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryEWarrantOffsetField_get_InstrumentID, (setter)PyCThostFtdcQryEWarrantOffsetField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryEWarrantOffsetFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryEWarrantOffsetField",	/* tp_name */
	sizeof(PyCThostFtdcQryEWarrantOffsetField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryEWarrantOffsetField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryEWarrantOffsetField_repr,   /* tp_repr */
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
	"CThostFtdcQryEWarrantOffsetField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryEWarrantOffsetField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryEWarrantOffsetField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryEWarrantOffsetField_new,       /* tp_new */
};

int PyCThostFtdcQryEWarrantOffsetFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryEWarrantOffsetField  */
	if (PyType_Ready(&PyCThostFtdcQryEWarrantOffsetFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryEWarrantOffsetField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryEWarrantOffsetFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryEWarrantOffsetField", (PyObject *)&PyCThostFtdcQryEWarrantOffsetFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryEWarrantOffsetField to module");
        Py_DECREF(&PyCThostFtdcQryEWarrantOffsetFieldType);
		return -1;
    }

    return 0;
}
