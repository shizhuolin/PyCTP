
#include "PyCThostFtdcQryInstrumentTradingRightField.h"

///查询合约交易权限

static PyObject *PyCThostFtdcQryInstrumentTradingRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInstrumentTradingRightField *self = (PyCThostFtdcQryInstrumentTradingRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInstrumentTradingRightField_init(PyCThostFtdcQryInstrumentTradingRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryInstrumentTradingRightField_BrokerID = NULL;
    Py_ssize_t QryInstrumentTradingRightField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryInstrumentTradingRightField_InvestorID = NULL;
    Py_ssize_t QryInstrumentTradingRightField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryInstrumentTradingRightField_reserve1 = NULL;
    Py_ssize_t QryInstrumentTradingRightField_reserve1_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryInstrumentTradingRightField_InstrumentID = NULL;
    Py_ssize_t QryInstrumentTradingRightField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryInstrumentTradingRightField_BrokerID, &QryInstrumentTradingRightField_BrokerID_len 
        , &QryInstrumentTradingRightField_InvestorID, &QryInstrumentTradingRightField_InvestorID_len 
        , &QryInstrumentTradingRightField_reserve1, &QryInstrumentTradingRightField_reserve1_len 
        , &QryInstrumentTradingRightField_InstrumentID, &QryInstrumentTradingRightField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryInstrumentTradingRightField_BrokerID != NULL ) {
        if(QryInstrumentTradingRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryInstrumentTradingRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryInstrumentTradingRightField_BrokerID, QryInstrumentTradingRightField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryInstrumentTradingRightField_BrokerID, sizeof(self->data.BrokerID) );
        QryInstrumentTradingRightField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryInstrumentTradingRightField_InvestorID != NULL ) {
        if(QryInstrumentTradingRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryInstrumentTradingRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryInstrumentTradingRightField_InvestorID, QryInstrumentTradingRightField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryInstrumentTradingRightField_InvestorID, sizeof(self->data.InvestorID) );
        QryInstrumentTradingRightField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryInstrumentTradingRightField_reserve1 != NULL ) {
        if(QryInstrumentTradingRightField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryInstrumentTradingRightField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryInstrumentTradingRightField_reserve1, QryInstrumentTradingRightField_reserve1_len);        
        strncpy(self->data.reserve1, QryInstrumentTradingRightField_reserve1, sizeof(self->data.reserve1) );
        QryInstrumentTradingRightField_reserve1 = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryInstrumentTradingRightField_InstrumentID != NULL ) {
        if(QryInstrumentTradingRightField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryInstrumentTradingRightField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryInstrumentTradingRightField_InstrumentID, QryInstrumentTradingRightField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryInstrumentTradingRightField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryInstrumentTradingRightField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInstrumentTradingRightField_dealloc(PyCThostFtdcQryInstrumentTradingRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInstrumentTradingRightField_repr(PyCThostFtdcQryInstrumentTradingRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentTradingRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryInstrumentTradingRightField_get_BrokerID(PyCThostFtdcQryInstrumentTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryInstrumentTradingRightField_set_BrokerID(PyCThostFtdcQryInstrumentTradingRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentTradingRightField_get_InvestorID(PyCThostFtdcQryInstrumentTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryInstrumentTradingRightField_set_InvestorID(PyCThostFtdcQryInstrumentTradingRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentTradingRightField_get_reserve1(PyCThostFtdcQryInstrumentTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryInstrumentTradingRightField_set_reserve1(PyCThostFtdcQryInstrumentTradingRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryInstrumentTradingRightField_get_InstrumentID(PyCThostFtdcQryInstrumentTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryInstrumentTradingRightField_set_InstrumentID(PyCThostFtdcQryInstrumentTradingRightField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInstrumentTradingRightField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryInstrumentTradingRightField_get_BrokerID, (setter)PyCThostFtdcQryInstrumentTradingRightField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryInstrumentTradingRightField_get_InvestorID, (setter)PyCThostFtdcQryInstrumentTradingRightField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryInstrumentTradingRightField_get_reserve1, (setter)PyCThostFtdcQryInstrumentTradingRightField_set_reserve1, (char *)"reserve1", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryInstrumentTradingRightField_get_InstrumentID, (setter)PyCThostFtdcQryInstrumentTradingRightField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInstrumentTradingRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInstrumentTradingRightField",	/* tp_name */
	sizeof(PyCThostFtdcQryInstrumentTradingRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInstrumentTradingRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInstrumentTradingRightField_repr,   /* tp_repr */
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
	"CThostFtdcQryInstrumentTradingRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInstrumentTradingRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInstrumentTradingRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInstrumentTradingRightField_new,       /* tp_new */
};

int PyCThostFtdcQryInstrumentTradingRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInstrumentTradingRightField  */
	if (PyType_Ready(&PyCThostFtdcQryInstrumentTradingRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInstrumentTradingRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInstrumentTradingRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentTradingRightField", (PyObject *)&PyCThostFtdcQryInstrumentTradingRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentTradingRightField to module");
        Py_DECREF(&PyCThostFtdcQryInstrumentTradingRightFieldType);
		return -1;
    }

    return 0;
}
