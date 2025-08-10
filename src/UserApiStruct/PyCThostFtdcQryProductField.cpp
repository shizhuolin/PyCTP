
#include "PyCThostFtdcQryProductField.h"

///查询产品

static PyObject *PyCThostFtdcQryProductField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryProductField *self = (PyCThostFtdcQryProductField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryProductField_init(PyCThostFtdcQryProductField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"reserve1", "ProductClass", "ExchangeID", "ProductID",  NULL};


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    const char *QryProductField_reserve1 = NULL;
    Py_ssize_t QryProductField_reserve1_len = 0;
            
    ///产品类型
    // TThostFtdcProductClassType char
    char QryProductField_ProductClass = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryProductField_ExchangeID = NULL;
    Py_ssize_t QryProductField_ExchangeID_len = 0;
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    const char *QryProductField_ProductID = NULL;
    Py_ssize_t QryProductField_ProductID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#cs#s#", (char **)kwlist
#endif

        , &QryProductField_reserve1, &QryProductField_reserve1_len 
        , &QryProductField_ProductClass 
        , &QryProductField_ExchangeID, &QryProductField_ExchangeID_len 
        , &QryProductField_ProductID, &QryProductField_ProductID_len 


    )) {
        return -1;
    }


    ///保留的无效字段
    // TThostFtdcOldInstrumentIDType char[31]
    if( QryProductField_reserve1 != NULL ) {
        if(QryProductField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryProductField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryProductField_reserve1, QryProductField_reserve1_len);        
        strncpy(self->data.reserve1, QryProductField_reserve1, sizeof(self->data.reserve1) );
        QryProductField_reserve1 = NULL;
    }
            
    ///产品类型
    // TThostFtdcProductClassType char
    self->data.ProductClass = QryProductField_ProductClass;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryProductField_ExchangeID != NULL ) {
        if(QryProductField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryProductField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryProductField_ExchangeID, QryProductField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryProductField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryProductField_ExchangeID = NULL;
    }
            
    ///产品代码
    // TThostFtdcInstrumentIDType char[81]
    if( QryProductField_ProductID != NULL ) {
        if(QryProductField_ProductID_len > (Py_ssize_t)sizeof(self->data.ProductID)) {
            PyErr_Format(PyExc_ValueError, "ProductID too long: length=%zd (max allowed is %zd)", QryProductField_ProductID_len, (Py_ssize_t)sizeof(self->data.ProductID));
            return -1;
        }
        // memset(self->data.ProductID, 0, sizeof(self->data.ProductID));
        // memcpy(self->data.ProductID, QryProductField_ProductID, QryProductField_ProductID_len);        
        strncpy(self->data.ProductID, QryProductField_ProductID, sizeof(self->data.ProductID) );
        QryProductField_ProductID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryProductField_dealloc(PyCThostFtdcQryProductField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryProductField_repr(PyCThostFtdcQryProductField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:c,s:s,s:s}"
#endif

        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ProductClass", self->data.ProductClass 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"ProductID", self->data.ProductID//, (Py_ssize_t)sizeof(self->data.ProductID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryProductField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static PyObject *PyCThostFtdcQryProductField_get_reserve1(PyCThostFtdcQryProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldInstrumentIDType char[31]
static int PyCThostFtdcQryProductField_set_reserve1(PyCThostFtdcQryProductField *self, PyObject* val, void *closure) {
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
            
///产品类型
// TThostFtdcProductClassType char
static PyObject *PyCThostFtdcQryProductField_get_ProductClass(PyCThostFtdcQryProductField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.ProductClass), 1);
}

///产品类型
// TThostFtdcProductClassType char
static int PyCThostFtdcQryProductField_set_ProductClass(PyCThostFtdcQryProductField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProductClass Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProductClass)) {
        PyErr_SetString(PyExc_ValueError, "ProductClass must be equal 1 bytes");
        return -1;
    }
    self->data.ProductClass = *buf;
    return 0;
}
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryProductField_get_ExchangeID(PyCThostFtdcQryProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryProductField_set_ExchangeID(PyCThostFtdcQryProductField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryProductField_get_ProductID(PyCThostFtdcQryProductField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProductID, (Py_ssize_t)sizeof(self->data.ProductID));
    return PyBytes_FromString(self->data.ProductID);
}

///产品代码
// TThostFtdcInstrumentIDType char[81]
static int PyCThostFtdcQryProductField_set_ProductID(PyCThostFtdcQryProductField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryProductField_getset[] = {
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryProductField_get_reserve1, (setter)PyCThostFtdcQryProductField_set_reserve1, (char *)"reserve1", NULL},
    ///产品类型 
    {(char *)"ProductClass", (getter)PyCThostFtdcQryProductField_get_ProductClass, (setter)PyCThostFtdcQryProductField_set_ProductClass, (char *)"ProductClass", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryProductField_get_ExchangeID, (setter)PyCThostFtdcQryProductField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///产品代码 
    {(char *)"ProductID", (getter)PyCThostFtdcQryProductField_get_ProductID, (setter)PyCThostFtdcQryProductField_set_ProductID, (char *)"ProductID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryProductFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryProductField",	/* tp_name */
	sizeof(PyCThostFtdcQryProductField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryProductField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryProductField_repr,   /* tp_repr */
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
	"CThostFtdcQryProductField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryProductField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryProductField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryProductField_new,       /* tp_new */
};

int PyCThostFtdcQryProductFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryProductField  */
	if (PyType_Ready(&PyCThostFtdcQryProductFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryProductField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryProductFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryProductField", (PyObject *)&PyCThostFtdcQryProductFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryProductField to module");
        Py_DECREF(&PyCThostFtdcQryProductFieldType);
		return -1;
    }

    return 0;
}
