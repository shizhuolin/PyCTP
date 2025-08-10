
#include "PyCThostFtdcQryExchangeMarginRateAdjustField.h"

///查询交易所调整保证金率

static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeMarginRateAdjustField *self = (PyCThostFtdcQryExchangeMarginRateAdjustField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeMarginRateAdjustField_init(PyCThostFtdcQryExchangeMarginRateAdjustField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "HedgeFlag", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryExchangeMarginRateAdjustField_BrokerID = NULL;
    Py_ssize_t QryExchangeMarginRateAdjustField_BrokerID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryExchangeMarginRateAdjustField_reserve1 = NULL;
    Py_ssize_t QryExchangeMarginRateAdjustField_reserve1_len = 0;
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    char QryExchangeMarginRateAdjustField_HedgeFlag = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryExchangeMarginRateAdjustField_InstrumentID = NULL;
    Py_ssize_t QryExchangeMarginRateAdjustField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#", (char **)kwlist
#endif

        , &QryExchangeMarginRateAdjustField_BrokerID, &QryExchangeMarginRateAdjustField_BrokerID_len 
        , &QryExchangeMarginRateAdjustField_reserve1, &QryExchangeMarginRateAdjustField_reserve1_len 
        , &QryExchangeMarginRateAdjustField_HedgeFlag 
        , &QryExchangeMarginRateAdjustField_InstrumentID, &QryExchangeMarginRateAdjustField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryExchangeMarginRateAdjustField_BrokerID != NULL ) {
        if(QryExchangeMarginRateAdjustField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryExchangeMarginRateAdjustField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryExchangeMarginRateAdjustField_BrokerID, QryExchangeMarginRateAdjustField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryExchangeMarginRateAdjustField_BrokerID, sizeof(self->data.BrokerID) );
        QryExchangeMarginRateAdjustField_BrokerID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryExchangeMarginRateAdjustField_reserve1 != NULL ) {
        if(QryExchangeMarginRateAdjustField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryExchangeMarginRateAdjustField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryExchangeMarginRateAdjustField_reserve1, QryExchangeMarginRateAdjustField_reserve1_len);        
        strncpy(self->data.reserve1, QryExchangeMarginRateAdjustField_reserve1, sizeof(self->data.reserve1) );
        QryExchangeMarginRateAdjustField_reserve1 = NULL;
    }
            
    ///投机套保标志
    // TThostFtdcHedgeFlagType char
    self->data.HedgeFlag = QryExchangeMarginRateAdjustField_HedgeFlag;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryExchangeMarginRateAdjustField_InstrumentID != NULL ) {
        if(QryExchangeMarginRateAdjustField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryExchangeMarginRateAdjustField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryExchangeMarginRateAdjustField_InstrumentID, QryExchangeMarginRateAdjustField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryExchangeMarginRateAdjustField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryExchangeMarginRateAdjustField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeMarginRateAdjustField_dealloc(PyCThostFtdcQryExchangeMarginRateAdjustField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustField_repr(PyCThostFtdcQryExchangeMarginRateAdjustField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"HedgeFlag", self->data.HedgeFlag 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeMarginRateAdjustField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustField_get_BrokerID(PyCThostFtdcQryExchangeMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryExchangeMarginRateAdjustField_set_BrokerID(PyCThostFtdcQryExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustField_get_reserve1(PyCThostFtdcQryExchangeMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryExchangeMarginRateAdjustField_set_reserve1(PyCThostFtdcQryExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustField_get_HedgeFlag(PyCThostFtdcQryExchangeMarginRateAdjustField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.HedgeFlag), 1);
}

///投机套保标志
// TThostFtdcHedgeFlagType char
static int PyCThostFtdcQryExchangeMarginRateAdjustField_set_HedgeFlag(PyCThostFtdcQryExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryExchangeMarginRateAdjustField_get_InstrumentID(PyCThostFtdcQryExchangeMarginRateAdjustField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryExchangeMarginRateAdjustField_set_InstrumentID(PyCThostFtdcQryExchangeMarginRateAdjustField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeMarginRateAdjustField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryExchangeMarginRateAdjustField_get_BrokerID, (setter)PyCThostFtdcQryExchangeMarginRateAdjustField_set_BrokerID, (char *)"BrokerID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeMarginRateAdjustField_get_reserve1, (setter)PyCThostFtdcQryExchangeMarginRateAdjustField_set_reserve1, (char *)"reserve1", NULL},
    ///投机套保标志 
    {(char *)"HedgeFlag", (getter)PyCThostFtdcQryExchangeMarginRateAdjustField_get_HedgeFlag, (setter)PyCThostFtdcQryExchangeMarginRateAdjustField_set_HedgeFlag, (char *)"HedgeFlag", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryExchangeMarginRateAdjustField_get_InstrumentID, (setter)PyCThostFtdcQryExchangeMarginRateAdjustField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeMarginRateAdjustFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeMarginRateAdjustField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeMarginRateAdjustField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeMarginRateAdjustField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeMarginRateAdjustField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeMarginRateAdjustField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeMarginRateAdjustField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeMarginRateAdjustField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeMarginRateAdjustField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeMarginRateAdjustFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeMarginRateAdjustField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeMarginRateAdjustFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeMarginRateAdjustField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeMarginRateAdjustFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeMarginRateAdjustField", (PyObject *)&PyCThostFtdcQryExchangeMarginRateAdjustFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeMarginRateAdjustField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeMarginRateAdjustFieldType);
		return -1;
    }

    return 0;
}
