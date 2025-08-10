
#include "PyCThostFtdcQryInstrumentStatusField.h"

///查询合约状态

static PyObject *PyCThostFtdcQryInstrumentStatusField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryInstrumentStatusField *self = (PyCThostFtdcQryInstrumentStatusField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryInstrumentStatusField_init(PyCThostFtdcQryInstrumentStatusField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "reserve1", "ExchangeInstID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryInstrumentStatusField_ExchangeID = NULL;
    Py_ssize_t QryInstrumentStatusField_ExchangeID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *QryInstrumentStatusField_reserve1 = NULL;
    Py_ssize_t QryInstrumentStatusField_reserve1_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QryInstrumentStatusField_ExchangeInstID = NULL;
    Py_ssize_t QryInstrumentStatusField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryInstrumentStatusField_ExchangeID, &QryInstrumentStatusField_ExchangeID_len 
        , &QryInstrumentStatusField_reserve1, &QryInstrumentStatusField_reserve1_len 
        , &QryInstrumentStatusField_ExchangeInstID, &QryInstrumentStatusField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryInstrumentStatusField_ExchangeID != NULL ) {
        if(QryInstrumentStatusField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryInstrumentStatusField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryInstrumentStatusField_ExchangeID, QryInstrumentStatusField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryInstrumentStatusField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryInstrumentStatusField_ExchangeID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( QryInstrumentStatusField_reserve1 != NULL ) {
        if(QryInstrumentStatusField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryInstrumentStatusField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryInstrumentStatusField_reserve1, QryInstrumentStatusField_reserve1_len);        
        strncpy(self->data.reserve1, QryInstrumentStatusField_reserve1, sizeof(self->data.reserve1) );
        QryInstrumentStatusField_reserve1 = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( QryInstrumentStatusField_ExchangeInstID != NULL ) {
        if(QryInstrumentStatusField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", QryInstrumentStatusField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, QryInstrumentStatusField_ExchangeInstID, QryInstrumentStatusField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, QryInstrumentStatusField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        QryInstrumentStatusField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryInstrumentStatusField_dealloc(PyCThostFtdcQryInstrumentStatusField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryInstrumentStatusField_repr(PyCThostFtdcQryInstrumentStatusField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryInstrumentStatusField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryInstrumentStatusField_get_ExchangeID(PyCThostFtdcQryInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryInstrumentStatusField_set_ExchangeID(PyCThostFtdcQryInstrumentStatusField *self, PyObject* val, void *closure) {
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
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcQryInstrumentStatusField_get_reserve1(PyCThostFtdcQryInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcQryInstrumentStatusField_set_reserve1(PyCThostFtdcQryInstrumentStatusField *self, PyObject* val, void *closure) {
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
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcQryInstrumentStatusField_get_ExchangeInstID(PyCThostFtdcQryInstrumentStatusField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQryInstrumentStatusField_set_ExchangeInstID(PyCThostFtdcQryInstrumentStatusField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryInstrumentStatusField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryInstrumentStatusField_get_ExchangeID, (setter)PyCThostFtdcQryInstrumentStatusField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryInstrumentStatusField_get_reserve1, (setter)PyCThostFtdcQryInstrumentStatusField_set_reserve1, (char *)"reserve1", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryInstrumentStatusField_get_ExchangeInstID, (setter)PyCThostFtdcQryInstrumentStatusField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryInstrumentStatusFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryInstrumentStatusField",	/* tp_name */
	sizeof(PyCThostFtdcQryInstrumentStatusField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryInstrumentStatusField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryInstrumentStatusField_repr,   /* tp_repr */
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
	"CThostFtdcQryInstrumentStatusField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryInstrumentStatusField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryInstrumentStatusField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryInstrumentStatusField_new,       /* tp_new */
};

int PyCThostFtdcQryInstrumentStatusFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryInstrumentStatusField  */
	if (PyType_Ready(&PyCThostFtdcQryInstrumentStatusFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryInstrumentStatusField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryInstrumentStatusFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryInstrumentStatusField", (PyObject *)&PyCThostFtdcQryInstrumentStatusFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryInstrumentStatusField to module");
        Py_DECREF(&PyCThostFtdcQryInstrumentStatusFieldType);
		return -1;
    }

    return 0;
}
