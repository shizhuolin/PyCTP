
#include "PyCThostFtdcQryProductExchRateField.h"

///产品报价汇率查询

static PyObject *PyCThostFtdcQryProductExchRateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryProductExchRateField *self = (PyCThostFtdcQryProductExchRateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryProductExchRateField_init(PyCThostFtdcQryProductExchRateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ExchangeID", "ProductID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryProductExchRateField_reserve1 = NULL;
    Py_ssize_t QryProductExchRateField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryProductExchRateField_ExchangeID = NULL;
    Py_ssize_t QryProductExchRateField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryProductExchRateField_ProductID = NULL;
    Py_ssize_t QryProductExchRateField_ProductID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryProductExchRateField_reserve1, &QryProductExchRateField_reserve1_len 
        , &QryProductExchRateField_ExchangeID, &QryProductExchRateField_ExchangeID_len 
        , &QryProductExchRateField_ProductID, &QryProductExchRateField_ProductID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryProductExchRateField_reserve1 != NULL ) {
        if(QryProductExchRateField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryProductExchRateField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryProductExchRateField_reserve1, QryProductExchRateField_reserve1_len);        
        strncpy(self->data.reserve1, QryProductExchRateField_reserve1, sizeof(self->data.reserve1) );
        QryProductExchRateField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryProductExchRateField_ExchangeID != NULL ) {
        if(QryProductExchRateField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryProductExchRateField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryProductExchRateField_ExchangeID, QryProductExchRateField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryProductExchRateField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryProductExchRateField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryProductExchRateField_ProductID != NULL ) {
        if(QryProductExchRateField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", QryProductExchRateField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, QryProductExchRateField_ProductID, QryProductExchRateField_ProductID_len);        
        strncpy(self->data.ProductID, QryProductExchRateField_ProductID, sizeof(self->data.ProductID) );
        QryProductExchRateField_ProductID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryProductExchRateField_dealloc(PyCThostFtdcQryProductExchRateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryProductExchRateField_repr(PyCThostFtdcQryProductExchRateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductExchRateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcQryProductExchRateField_get_reserve1(PyCThostFtdcQryProductExchRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryProductExchRateField_set_reserve1(PyCThostFtdcQryProductExchRateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryProductExchRateField_get_ExchangeID(PyCThostFtdcQryProductExchRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryProductExchRateField_set_ExchangeID(PyCThostFtdcQryProductExchRateField *self, PyObject* val, void *closure) {
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
            
///产品代码
// TThostFtdcInstrumentIDType char[81]
static PyObject *PyCThostFtdcQryProductExchRateField_get_ProductID(PyCThostFtdcQryProductExchRateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryProductExchRateField_set_ProductID(PyCThostFtdcQryProductExchRateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryProductExchRateField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryProductExchRateField_get_reserve1, (setter)PyCThostFtdcQryProductExchRateField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryProductExchRateField_get_ExchangeID, (setter)PyCThostFtdcQryProductExchRateField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcQryProductExchRateField_get_ProductID, (setter)PyCThostFtdcQryProductExchRateField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryProductExchRateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryProductExchRateField",	/* tp_name */
	sizeof(PyCThostFtdcQryProductExchRateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryProductExchRateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryProductExchRateField_repr,   /* tp_repr */
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
	"CThostFtdcQryProductExchRateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryProductExchRateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryProductExchRateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryProductExchRateField_new,       /* tp_new */
};

int PyCThostFtdcQryProductExchRateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryProductExchRateField  */
	if (PyType_Ready(&PyCThostFtdcQryProductExchRateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryProductExchRateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryProductExchRateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryProductExchRateField", (PyObject *)&PyCThostFtdcQryProductExchRateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryProductExchRateField to module");
        Py_DECREF(&PyCThostFtdcQryProductExchRateFieldType);
		return -1;
    }

    return 0;
}
