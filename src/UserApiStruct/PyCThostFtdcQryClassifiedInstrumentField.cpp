
#include "PyCThostFtdcQryClassifiedInstrumentField.h"

///查询分类合约

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryClassifiedInstrumentField *self = (PyCThostFtdcQryClassifiedInstrumentField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryClassifiedInstrumentField_init(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"InstrumentID", "ExchangeID", "ExchangeInstID", "ProductID", "TradingType", "ClassType",  NULL};


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryClassifiedInstrumentField_InstrumentID = NULL;
    Py_ssize_t QryClassifiedInstrumentField_InstrumentID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryClassifiedInstrumentField_ExchangeID = NULL;
    Py_ssize_t QryClassifiedInstrumentField_ExchangeID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QryClassifiedInstrumentField_ExchangeInstID = NULL;
    Py_ssize_t QryClassifiedInstrumentField_ExchangeInstID_len = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryClassifiedInstrumentField_ProductID = NULL;
    Py_ssize_t QryClassifiedInstrumentField_ProductID_len = 0;
            
    ///合约交易状态
    // TThostFtdcTradingTypeType char
    char QryClassifiedInstrumentField_TradingType = 0;
            
    ///合约分类类型
    // TThostFtdcClassTypeType char
    char QryClassifiedInstrumentField_ClassType = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#cc", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#cc", (char **)kwlist
#endif

        , &QryClassifiedInstrumentField_InstrumentID, &QryClassifiedInstrumentField_InstrumentID_len 
        , &QryClassifiedInstrumentField_ExchangeID, &QryClassifiedInstrumentField_ExchangeID_len 
        , &QryClassifiedInstrumentField_ExchangeInstID, &QryClassifiedInstrumentField_ExchangeInstID_len 
        , &QryClassifiedInstrumentField_ProductID, &QryClassifiedInstrumentField_ProductID_len 
        , &QryClassifiedInstrumentField_TradingType 
        , &QryClassifiedInstrumentField_ClassType 


    )) {
        return -1;
    }


    ///合约代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryClassifiedInstrumentField_InstrumentID != NULL ) {
        if(QryClassifiedInstrumentField_InstrumentID_len > (Py_ssize_t)sizeof(self->data.InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is %zd)", QryClassifiedInstrumentField_InstrumentID_len, (Py_ssize_t)sizeof(self->data.InstrumentID));
            return -1;
        }
        // memset(self->data.InstrumentID, 0, sizeof(self->data.InstrumentID));
        // memcpy(self->data.InstrumentID, QryClassifiedInstrumentField_InstrumentID, QryClassifiedInstrumentField_InstrumentID_len);        
        strncpy(self->data.InstrumentID, QryClassifiedInstrumentField_InstrumentID, sizeof(self->data.InstrumentID) );
        QryClassifiedInstrumentField_InstrumentID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryClassifiedInstrumentField_ExchangeID != NULL ) {
        if(QryClassifiedInstrumentField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryClassifiedInstrumentField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryClassifiedInstrumentField_ExchangeID, QryClassifiedInstrumentField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryClassifiedInstrumentField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryClassifiedInstrumentField_ExchangeID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( QryClassifiedInstrumentField_ExchangeInstID != NULL ) {
        if(QryClassifiedInstrumentField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", QryClassifiedInstrumentField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, QryClassifiedInstrumentField_ExchangeInstID, QryClassifiedInstrumentField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, QryClassifiedInstrumentField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        QryClassifiedInstrumentField_ExchangeInstID = NULL;
    }
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryClassifiedInstrumentField_ProductID != NULL ) {
        if(QryClassifiedInstrumentField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", QryClassifiedInstrumentField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, QryClassifiedInstrumentField_ProductID, QryClassifiedInstrumentField_ProductID_len);        
        strncpy(self->data.ProductID, QryClassifiedInstrumentField_ProductID, sizeof(self->data.ProductID) );
        QryClassifiedInstrumentField_ProductID = NULL;
    }
            
    ///合约交易状态
    // TThostFtdcTradingTypeType char
    self->data.TradingType = QryClassifiedInstrumentField_TradingType;
            
    ///合约分类类型
    // TThostFtdcClassTypeType char
    self->data.ClassType = QryClassifiedInstrumentField_ClassType;
            

    return 0;
}

static void PyCThostFtdcQryClassifiedInstrumentField_dealloc(PyCThostFtdcQryClassifiedInstrumentField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryClassifiedInstrumentField_repr(PyCThostFtdcQryClassifiedInstrumentField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c,s:c}"
#endif

        ,"InstrumentID", self->data.InstrumentID//, (Py_ssize_t)sizeof(self->data.InstrumentID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 
        ,"TradingType", self->data.TradingType 
        ,"ClassType", self->data.ClassType 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryClassifiedInstrumentField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///合约代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_InstrumentID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InstrumentID, (Py_ssize_t)sizeof(self->data.InstrumentID));
    return PyBytes_FromString(self->data.InstrumentID);
}

///合约代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryClassifiedInstrumentField_set_InstrumentID(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeID(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeInstID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeInstID(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
    // memcpy(self->data.ExchangeInstID, buf, len);
    strncpy(self->data.ExchangeInstID, buf, sizeof(self->data.ExchangeInstID));
    return 0;
}
            
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ProductID(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryClassifiedInstrumentField_set_ProductID(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductID)) {
        PyErr_SetString(PyExc_ValueError, "ProductID must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
    // memcpy(self->data.ProductID, buf, len);
    strncpy(self->data.ProductID, buf, sizeof(self->data.ProductID));
    return 0;
}
            
///合约交易状态
// TThostFtdcTradingTypeType char
static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_TradingType(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.TradingType), 1);
}

///合约交易状态
// TThostFtdcTradingTypeType char
static int PyCThostFtdcQryClassifiedInstrumentField_set_TradingType(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingType)) {
        PyErr_SetString(PyExc_ValueError, "TradingType must be equal 1 bytes");
        return -1;
    }
    self->data.TradingType = *buf;
    return 0;
}
            
///合约分类类型
// TThostFtdcClassTypeType char
static PyObject *PyCThostFtdcQryClassifiedInstrumentField_get_ClassType(PyCThostFtdcQryClassifiedInstrumentField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ClassType), 1);
}

///合约分类类型
// TThostFtdcClassTypeType char
static int PyCThostFtdcQryClassifiedInstrumentField_set_ClassType(PyCThostFtdcQryClassifiedInstrumentField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClassType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClassType)) {
        PyErr_SetString(PyExc_ValueError, "ClassType must be equal 1 bytes");
        return -1;
    }
    self->data.ClassType = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQryClassifiedInstrumentField_getset[] = {
    ///合约代码 
    {(char *)"InstrumentID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_InstrumentID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_InstrumentID, (char *)"InstrumentID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ExchangeInstID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ProductID, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ProductID, (char *)"ProductID", NULL},
    ///合约交易状态 
    {(char *)"TradingType", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_TradingType, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_TradingType, (char *)"TradingType", NULL},
    ///合约分类类型 
    {(char *)"ClassType", (getter)PyCThostFtdcQryClassifiedInstrumentField_get_ClassType, (setter)PyCThostFtdcQryClassifiedInstrumentField_set_ClassType, (char *)"ClassType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryClassifiedInstrumentFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryClassifiedInstrumentField",	/* tp_name */
	sizeof(PyCThostFtdcQryClassifiedInstrumentField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryClassifiedInstrumentField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryClassifiedInstrumentField_repr,   /* tp_repr */
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
	"CThostFtdcQryClassifiedInstrumentField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryClassifiedInstrumentField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryClassifiedInstrumentField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryClassifiedInstrumentField_new,       /* tp_new */
};

int PyCThostFtdcQryClassifiedInstrumentFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryClassifiedInstrumentField  */
	if (PyType_Ready(&PyCThostFtdcQryClassifiedInstrumentFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryClassifiedInstrumentField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryClassifiedInstrumentFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryClassifiedInstrumentField", (PyObject *)&PyCThostFtdcQryClassifiedInstrumentFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryClassifiedInstrumentField to module");
        Py_DECREF(&PyCThostFtdcQryClassifiedInstrumentFieldType);
		return -1;
    }

    return 0;
}
