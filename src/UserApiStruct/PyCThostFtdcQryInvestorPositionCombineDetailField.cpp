
#include "PyCThostFtdcQryInvestorPositionCombineDetailField.h"

///查询组合持仓明细

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInvestorPositionCombineDetailField *self = (PyCThostFtdcQryInvestorPositionCombineDetailField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInvestorPositionCombineDetailField_init(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "ExchangeID", "InvestUnitID", "CombInstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInvestorPositionCombineDetailField_BrokerID = NULL;
    Py_ssize_t QryInvestorPositionCombineDetailField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInvestorPositionCombineDetailField_InvestorID = NULL;
    Py_ssize_t QryInvestorPositionCombineDetailField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryInvestorPositionCombineDetailField_reserve1 = NULL;
    Py_ssize_t QryInvestorPositionCombineDetailField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInvestorPositionCombineDetailField_ExchangeID = NULL;
    Py_ssize_t QryInvestorPositionCombineDetailField_ExchangeID_len = 0;
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    const char *QryInvestorPositionCombineDetailField_InvestUnitID = NULL;
    Py_ssize_t QryInvestorPositionCombineDetailField_InvestUnitID_len = 0;
            
    ///组合持仓合约编码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInvestorPositionCombineDetailField_CombInstrumentID = NULL;
    Py_ssize_t QryInvestorPositionCombineDetailField_CombInstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryInvestorPositionCombineDetailField_BrokerID, &QryInvestorPositionCombineDetailField_BrokerID_len 
        , &QryInvestorPositionCombineDetailField_InvestorID, &QryInvestorPositionCombineDetailField_InvestorID_len 
        , &QryInvestorPositionCombineDetailField_reserve1, &QryInvestorPositionCombineDetailField_reserve1_len 
        , &QryInvestorPositionCombineDetailField_ExchangeID, &QryInvestorPositionCombineDetailField_ExchangeID_len 
        , &QryInvestorPositionCombineDetailField_InvestUnitID, &QryInvestorPositionCombineDetailField_InvestUnitID_len 
        , &QryInvestorPositionCombineDetailField_CombInstrumentID, &QryInvestorPositionCombineDetailField_CombInstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInvestorPositionCombineDetailField_BrokerID != NULL ) {
        if(QryInvestorPositionCombineDetailField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInvestorPositionCombineDetailField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInvestorPositionCombineDetailField_BrokerID, QryInvestorPositionCombineDetailField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInvestorPositionCombineDetailField_BrokerID, sizeof(self->data.BrokerID) );
        QryInvestorPositionCombineDetailField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInvestorPositionCombineDetailField_InvestorID != NULL ) {
        if(QryInvestorPositionCombineDetailField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInvestorPositionCombineDetailField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInvestorPositionCombineDetailField_InvestorID, QryInvestorPositionCombineDetailField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInvestorPositionCombineDetailField_InvestorID, sizeof(self->data.InvestorID) );
        QryInvestorPositionCombineDetailField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryInvestorPositionCombineDetailField_reserve1 != NULL ) {
        if(QryInvestorPositionCombineDetailField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryInvestorPositionCombineDetailField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryInvestorPositionCombineDetailField_reserve1, QryInvestorPositionCombineDetailField_reserve1_len);        
        strncpy(self->data.reserve1, QryInvestorPositionCombineDetailField_reserve1, sizeof(self->data.reserve1) );
        QryInvestorPositionCombineDetailField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInvestorPositionCombineDetailField_ExchangeID != NULL ) {
        if(QryInvestorPositionCombineDetailField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInvestorPositionCombineDetailField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInvestorPositionCombineDetailField_ExchangeID, QryInvestorPositionCombineDetailField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInvestorPositionCombineDetailField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInvestorPositionCombineDetailField_ExchangeID = NULL;
    }
            
    ///投资单元代码
    // TThostFtdcInvestUnitIDType char[17]
    if( QryInvestorPositionCombineDetailField_InvestUnitID != NULL ) {
        if(QryInvestorPositionCombineDetailField_InvestUnitID_len > (Py_ssize_t)sizeof(self->data.InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is %zd)", QryInvestorPositionCombineDetailField_InvestUnitID_len, (Py_ssize_t)sizeof(self->data.InvestUnitID));
            return -1;
        }
        // memset(self->data.InvestUnitID, 0, sizeof(self->data.InvestUnitID));
        // memcpy(self->data.InvestUnitID, QryInvestorPositionCombineDetailField_InvestUnitID, QryInvestorPositionCombineDetailField_InvestUnitID_len);        
        strncpy(self->data.InvestUnitID, QryInvestorPositionCombineDetailField_InvestUnitID, sizeof(self->data.InvestUnitID) );
        QryInvestorPositionCombineDetailField_InvestUnitID = NULL;
    }
            
    ///组合持仓合约编码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInvestorPositionCombineDetailField_CombInstrumentID != NULL ) {
        if(QryInvestorPositionCombineDetailField_CombInstrumentID_len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
            PyErr_Format(PyExc_ValueError, "CombInstrumentID too long: length=%zd (max allowed is %zd)", QryInvestorPositionCombineDetailField_CombInstrumentID_len, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
            return -1;
        }
        // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
        // memcpy(self->data.CombInstrumentID, QryInvestorPositionCombineDetailField_CombInstrumentID, QryInvestorPositionCombineDetailField_CombInstrumentID_len);        
        strncpy(self->data.CombInstrumentID, QryInvestorPositionCombineDetailField_CombInstrumentID, sizeof(self->data.CombInstrumentID) );
        QryInvestorPositionCombineDetailField_CombInstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInvestorPositionCombineDetailField_dealloc(PyCThostFtdcQryInvestorPositionCombineDetailField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_repr(PyCThostFtdcQryInvestorPositionCombineDetailField *self) {

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
        ,"CombInstrumentID", self->data.CombInstrumentID//, (Py_ssize_t)sizeof(self->data.CombInstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInvestorPositionCombineDetailField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_BrokerID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_BrokerID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestorID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestorID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_reserve1(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_reserve1(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_ExchangeID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_ExchangeID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestUnitID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestUnitID, (Py_ssize_t)sizeof(self->data.InvestUnitID));
    return PyBytes_FromString(self->data.InvestUnitID);
}

///投资单元代码
// TThostFtdcInvestUnitIDType char[17]
static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestUnitID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
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
            
///组合持仓合约编码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryInvestorPositionCombineDetailField_get_CombInstrumentID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CombInstrumentID, (Py_ssize_t)sizeof(self->data.CombInstrumentID));
    return PyBytes_FromString(self->data.CombInstrumentID);
}

///组合持仓合约编码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInvestorPositionCombineDetailField_set_CombInstrumentID(PyCThostFtdcQryInvestorPositionCombineDetailField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CombInstrumentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CombInstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "CombInstrumentID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.CombInstrumentID, 0, sizeof(self->data.CombInstrumentID));
    // memcpy(self->data.CombInstrumentID, buf, len);
    strncpy(self->data.CombInstrumentID, buf, sizeof(self->data.CombInstrumentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryInvestorPositionCombineDetailField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_BrokerID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestorID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_reserve1, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_ExchangeID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///投资单元代码 
    {(char *)"InvestUnitID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_InvestUnitID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_InvestUnitID, (char *)"InvestUnitID", NULL},
    ///组合持仓合约编码 
    {(char *)"CombInstrumentID", (getter)PyCThostFtdcQryInvestorPositionCombineDetailField_get_CombInstrumentID, (setter)PyCThostFtdcQryInvestorPositionCombineDetailField_set_CombInstrumentID, (char *)"CombInstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInvestorPositionCombineDetailFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInvestorPositionCombineDetailField",	/* tp_name */
	sizeof(PyCThostFtdcQryInvestorPositionCombineDetailField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInvestorPositionCombineDetailField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInvestorPositionCombineDetailField_repr,   /* tp_repr */
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
	"CThostFtdcQryInvestorPositionCombineDetailField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInvestorPositionCombineDetailField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInvestorPositionCombineDetailField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInvestorPositionCombineDetailField_new,       /* tp_new */
};

int PyCThostFtdcQryInvestorPositionCombineDetailFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInvestorPositionCombineDetailField  */
	if (PyType_Ready(&PyCThostFtdcQryInvestorPositionCombineDetailFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInvestorPositionCombineDetailField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInvestorPositionCombineDetailFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInvestorPositionCombineDetailField", (PyObject *)&PyCThostFtdcQryInvestorPositionCombineDetailFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInvestorPositionCombineDetailField to module");
        Py_DECREF(&PyCThostFtdcQryInvestorPositionCombineDetailFieldType);
		return -1;
    }

    return 0;
}
