
#include "PyCThostFtdcQryCombInstrumentGuardField.h"

///组合合约安全系数查询

static PyObject *PyCThostFtdcQryCombInstrumentGuardField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryCombInstrumentGuardField *self = (PyCThostFtdcQryCombInstrumentGuardField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryCombInstrumentGuardField_init(PyCThostFtdcQryCombInstrumentGuardField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "reserve1", "ExchangeID", "InstrumentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryCombInstrumentGuardField_BrokerID = NULL;
    Py_ssize_t QryCombInstrumentGuardField_BrokerID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryCombInstrumentGuardField_reserve1 = NULL;
    Py_ssize_t QryCombInstrumentGuardField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryCombInstrumentGuardField_ExchangeID = NULL;
    Py_ssize_t QryCombInstrumentGuardField_ExchangeID_len = 0;
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryCombInstrumentGuardField_InstrumentID = NULL;
    Py_ssize_t QryCombInstrumentGuardField_InstrumentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryCombInstrumentGuardField_BrokerID, &QryCombInstrumentGuardField_BrokerID_len 
        , &QryCombInstrumentGuardField_reserve1, &QryCombInstrumentGuardField_reserve1_len 
        , &QryCombInstrumentGuardField_ExchangeID, &QryCombInstrumentGuardField_ExchangeID_len 
        , &QryCombInstrumentGuardField_InstrumentID, &QryCombInstrumentGuardField_InstrumentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryCombInstrumentGuardField_BrokerID != NULL ) {
        if(QryCombInstrumentGuardField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryCombInstrumentGuardField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryCombInstrumentGuardField_BrokerID, QryCombInstrumentGuardField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryCombInstrumentGuardField_BrokerID, sizeof(self->data.BrokerID) );
        QryCombInstrumentGuardField_BrokerID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryCombInstrumentGuardField_reserve1 != NULL ) {
        if(QryCombInstrumentGuardField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryCombInstrumentGuardField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryCombInstrumentGuardField_reserve1, QryCombInstrumentGuardField_reserve1_len);        
        strncpy(self->data.reserve1, QryCombInstrumentGuardField_reserve1, sizeof(self->data.reserve1) );
        QryCombInstrumentGuardField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryCombInstrumentGuardField_ExchangeID != NULL ) {
        if(QryCombInstrumentGuardField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryCombInstrumentGuardField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryCombInstrumentGuardField_ExchangeID, QryCombInstrumentGuardField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryCombInstrumentGuardField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryCombInstrumentGuardField_ExchangeID = NULL;
    }
            
    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryCombInstrumentGuardField_InstrumentID != NULL ) {
        if(QryCombInstrumentGuardField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryCombInstrumentGuardField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryCombInstrumentGuardField_InstrumentID, QryCombInstrumentGuardField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryCombInstrumentGuardField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryCombInstrumentGuardField_InstrumentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryCombInstrumentGuardField_dealloc(PyCThostFtdcQryCombInstrumentGuardField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryCombInstrumentGuardField_repr(PyCThostFtdcQryCombInstrumentGuardField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryCombInstrumentGuardField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_BrokerID(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryCombInstrumentGuardField_set_BrokerID(PyCThostFtdcQryCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_reserve1(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryCombInstrumentGuardField_set_reserve1(PyCThostFtdcQryCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_ExchangeID(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryCombInstrumentGuardField_set_ExchangeID(PyCThostFtdcQryCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
            
///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryCombInstrumentGuardField_get_InstrumentID(PyCThostFtdcQryCombInstrumentGuardField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryCombInstrumentGuardField_set_InstrumentID(PyCThostFtdcQryCombInstrumentGuardField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryCombInstrumentGuardField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_BrokerID, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_BrokerID, (char *)"BrokerID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_reserve1, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_ExchangeID, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryCombInstrumentGuardField_get_InstrumentID, (setter)PyCThostFtdcQryCombInstrumentGuardField_set_InstrumentID, (char *)"InstrumentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryCombInstrumentGuardFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryCombInstrumentGuardField",	/* tp_name */
	sizeof(PyCThostFtdcQryCombInstrumentGuardField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryCombInstrumentGuardField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryCombInstrumentGuardField_repr,   /* tp_repr */
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
	"CThostFtdcQryCombInstrumentGuardField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryCombInstrumentGuardField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryCombInstrumentGuardField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryCombInstrumentGuardField_new,       /* tp_new */
};

int PyCThostFtdcQryCombInstrumentGuardFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryCombInstrumentGuardField  */
	if (PyType_Ready(&PyCThostFtdcQryCombInstrumentGuardFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryCombInstrumentGuardField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryCombInstrumentGuardFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryCombInstrumentGuardField", (PyObject *)&PyCThostFtdcQryCombInstrumentGuardFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryCombInstrumentGuardField to module");
        Py_DECREF(&PyCThostFtdcQryCombInstrumentGuardFieldType);
		return -1;
    }

    return 0;
}
