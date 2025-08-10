
#include "PyCThostFtdcQryOptionInstrTradingRightField.h"

///查询期权合约交易权限

static PyObject *PyCThostFtdcQryOptionInstrTradingRightField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryOptionInstrTradingRightField *self = (PyCThostFtdcQryOptionInstrTradingRightField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryOptionInstrTradingRightField_init(PyCThostFtdcQryOptionInstrTradingRightField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "InvestorID", "reserve1", "Direction", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryOptionInstrTradingRightField_BrokerID = NULL;
    Py_ssize_t QryOptionInstrTradingRightField_BrokerID_len = 0;
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    const char *QryOptionInstrTradingRightField_InvestorID = NULL;
    Py_ssize_t QryOptionInstrTradingRightField_InvestorID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryOptionInstrTradingRightField_reserve1 = NULL;
    Py_ssize_t QryOptionInstrTradingRightField_reserve1_len = 0;
            
    ///买卖方向
    // TThostFtdcDirectionType char
    char QryOptionInstrTradingRightField_Direction = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryOptionInstrTradingRightField_InstrumentID = NULL;
    Py_ssize_t QryOptionInstrTradingRightField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#cs#", (char **)kwlist
#endif

        , &QryOptionInstrTradingRightField_BrokerID, &QryOptionInstrTradingRightField_BrokerID_len 
        , &QryOptionInstrTradingRightField_InvestorID, &QryOptionInstrTradingRightField_InvestorID_len 
        , &QryOptionInstrTradingRightField_reserve1, &QryOptionInstrTradingRightField_reserve1_len 
        , &QryOptionInstrTradingRightField_Direction 
        , &QryOptionInstrTradingRightField_InstrumentID, &QryOptionInstrTradingRightField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryOptionInstrTradingRightField_BrokerID != NULL ) {
        if(QryOptionInstrTradingRightField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradingRightField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryOptionInstrTradingRightField_BrokerID, QryOptionInstrTradingRightField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryOptionInstrTradingRightField_BrokerID, sizeof(self->data.BrokerID) );
        QryOptionInstrTradingRightField_BrokerID = NULL;
    }
            
    ///投资者代码
    // TThostFtdcInvestorIDType char[13]
    if( QryOptionInstrTradingRightField_InvestorID != NULL ) {
        if(QryOptionInstrTradingRightField_InvestorID_len > (Py_ssize_t)sizeof(self->data.InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradingRightField_InvestorID_len, (Py_ssize_t)sizeof(self->data.InvestorID));
            return -1;
        }
        // memset(self->data.InvestorID, 0, sizeof(self->data.InvestorID));
        // memcpy(self->data.InvestorID, QryOptionInstrTradingRightField_InvestorID, QryOptionInstrTradingRightField_InvestorID_len);        
        strncpy(self->data.InvestorID, QryOptionInstrTradingRightField_InvestorID, sizeof(self->data.InvestorID) );
        QryOptionInstrTradingRightField_InvestorID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryOptionInstrTradingRightField_reserve1 != NULL ) {
        if(QryOptionInstrTradingRightField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryOptionInstrTradingRightField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryOptionInstrTradingRightField_reserve1, QryOptionInstrTradingRightField_reserve1_len);        
        strncpy(self->data.reserve1, QryOptionInstrTradingRightField_reserve1, sizeof(self->data.reserve1) );
        QryOptionInstrTradingRightField_reserve1 = NULL;
    }
            
    ///买卖方向
    // TThostFtdcDirectionType char
    self->data.Direction = QryOptionInstrTradingRightField_Direction;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryOptionInstrTradingRightField_InstrumentID != NULL ) {
        if(QryOptionInstrTradingRightField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryOptionInstrTradingRightField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryOptionInstrTradingRightField_InstrumentID, QryOptionInstrTradingRightField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryOptionInstrTradingRightField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryOptionInstrTradingRightField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryOptionInstrTradingRightField_dealloc(PyCThostFtdcQryOptionInstrTradingRightField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryOptionInstrTradingRightField_repr(PyCThostFtdcQryOptionInstrTradingRightField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"InvestorID", self->data.InvestorID//, (Py_ssize_t)sizeof(self->data.InvestorID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"Direction", self->data.Direction 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryOptionInstrTradingRightField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryOptionInstrTradingRightField_get_BrokerID(PyCThostFtdcQryOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryOptionInstrTradingRightField_set_BrokerID(PyCThostFtdcQryOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionInstrTradingRightField_get_InvestorID(PyCThostFtdcQryOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InvestorID, (Py_ssize_t)sizeof(self->data.InvestorID));
    return PyBytes_FromString(self->data.InvestorID);
}

///投资者代码
// TThostFtdcInvestorIDType char[13]
static int PyCThostFtdcQryOptionInstrTradingRightField_set_InvestorID(PyCThostFtdcQryOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryOptionInstrTradingRightField_get_reserve1(PyCThostFtdcQryOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryOptionInstrTradingRightField_set_reserve1(PyCThostFtdcQryOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
            
///买卖方向
// TThostFtdcDirectionType char
static PyObject *PyCThostFtdcQryOptionInstrTradingRightField_get_Direction(PyCThostFtdcQryOptionInstrTradingRightField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.Direction), 1);
}

///买卖方向
// TThostFtdcDirectionType char
static int PyCThostFtdcQryOptionInstrTradingRightField_set_Direction(PyCThostFtdcQryOptionInstrTradingRightField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Direction Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Direction)) {
        PyErr_SetString(PyExc_ValueError, "Direction must be equal 1 bytes");
        return -1;
    }
    self->data.Direction = *buf;
    return 0;
}
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryOptionInstrTradingRightField_get_InstrumentID(PyCThostFtdcQryOptionInstrTradingRightField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryOptionInstrTradingRightField_set_InstrumentID(PyCThostFtdcQryOptionInstrTradingRightField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryOptionInstrTradingRightField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryOptionInstrTradingRightField_get_BrokerID, (setter)PyCThostFtdcQryOptionInstrTradingRightField_set_BrokerID, (char *)"BrokerID", NULL},
    ///投资者代码 
    {(char *)"InvestorID", (getter)PyCThostFtdcQryOptionInstrTradingRightField_get_InvestorID, (setter)PyCThostFtdcQryOptionInstrTradingRightField_set_InvestorID, (char *)"InvestorID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryOptionInstrTradingRightField_get_reserve1, (setter)PyCThostFtdcQryOptionInstrTradingRightField_set_reserve1, (char *)"reserve1", NULL},
    ///买卖方向 
    {(char *)"Direction", (getter)PyCThostFtdcQryOptionInstrTradingRightField_get_Direction, (setter)PyCThostFtdcQryOptionInstrTradingRightField_set_Direction, (char *)"Direction", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryOptionInstrTradingRightField_get_InstrumentID, (setter)PyCThostFtdcQryOptionInstrTradingRightField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryOptionInstrTradingRightFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryOptionInstrTradingRightField",	/* tp_name */
	sizeof(PyCThostFtdcQryOptionInstrTradingRightField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryOptionInstrTradingRightField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryOptionInstrTradingRightField_repr,   /* tp_repr */
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
	"CThostFtdcQryOptionInstrTradingRightField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryOptionInstrTradingRightField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryOptionInstrTradingRightField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryOptionInstrTradingRightField_new,       /* tp_new */
};

int PyCThostFtdcQryOptionInstrTradingRightFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryOptionInstrTradingRightField  */
	if (PyType_Ready(&PyCThostFtdcQryOptionInstrTradingRightFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryOptionInstrTradingRightField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryOptionInstrTradingRightFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryOptionInstrTradingRightField", (PyObject *)&PyCThostFtdcQryOptionInstrTradingRightFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryOptionInstrTradingRightField to module");
        Py_DECREF(&PyCThostFtdcQryOptionInstrTradingRightFieldType);
		return -1;
    }

    return 0;
}
