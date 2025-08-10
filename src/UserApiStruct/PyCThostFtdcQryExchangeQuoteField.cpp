
#include "PyCThostFtdcQryExchangeQuoteField.h"

///交易所报价查询

static PyObject *PyCThostFtdcQryExchangeQuoteField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeQuoteField *self = (PyCThostFtdcQryExchangeQuoteField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeQuoteField_init(PyCThostFtdcQryExchangeQuoteField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QryExchangeQuoteField_ParticipantID = NULL;
    Py_ssize_t QryExchangeQuoteField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QryExchangeQuoteField_ClientID = NULL;
    Py_ssize_t QryExchangeQuoteField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *QryExchangeQuoteField_reserve1 = NULL;
    Py_ssize_t QryExchangeQuoteField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeQuoteField_ExchangeID = NULL;
    Py_ssize_t QryExchangeQuoteField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QryExchangeQuoteField_TraderID = NULL;
    Py_ssize_t QryExchangeQuoteField_TraderID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QryExchangeQuoteField_ExchangeInstID = NULL;
    Py_ssize_t QryExchangeQuoteField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryExchangeQuoteField_ParticipantID, &QryExchangeQuoteField_ParticipantID_len 
        , &QryExchangeQuoteField_ClientID, &QryExchangeQuoteField_ClientID_len 
        , &QryExchangeQuoteField_reserve1, &QryExchangeQuoteField_reserve1_len 
        , &QryExchangeQuoteField_ExchangeID, &QryExchangeQuoteField_ExchangeID_len 
        , &QryExchangeQuoteField_TraderID, &QryExchangeQuoteField_TraderID_len 
        , &QryExchangeQuoteField_ExchangeInstID, &QryExchangeQuoteField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QryExchangeQuoteField_ParticipantID != NULL ) {
        if(QryExchangeQuoteField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QryExchangeQuoteField_ParticipantID, QryExchangeQuoteField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QryExchangeQuoteField_ParticipantID, sizeof(self->data.ParticipantID) );
        QryExchangeQuoteField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QryExchangeQuoteField_ClientID != NULL ) {
        if(QryExchangeQuoteField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QryExchangeQuoteField_ClientID, QryExchangeQuoteField_ClientID_len);        
        strncpy(self->data.ClientID, QryExchangeQuoteField_ClientID, sizeof(self->data.ClientID) );
        QryExchangeQuoteField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( QryExchangeQuoteField_reserve1 != NULL ) {
        if(QryExchangeQuoteField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryExchangeQuoteField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryExchangeQuoteField_reserve1, QryExchangeQuoteField_reserve1_len);        
        strncpy(self->data.reserve1, QryExchangeQuoteField_reserve1, sizeof(self->data.reserve1) );
        QryExchangeQuoteField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeQuoteField_ExchangeID != NULL ) {
        if(QryExchangeQuoteField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeQuoteField_ExchangeID, QryExchangeQuoteField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeQuoteField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeQuoteField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QryExchangeQuoteField_TraderID != NULL ) {
        if(QryExchangeQuoteField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QryExchangeQuoteField_TraderID, QryExchangeQuoteField_TraderID_len);        
        strncpy(self->data.TraderID, QryExchangeQuoteField_TraderID, sizeof(self->data.TraderID) );
        QryExchangeQuoteField_TraderID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( QryExchangeQuoteField_ExchangeInstID != NULL ) {
        if(QryExchangeQuoteField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, QryExchangeQuoteField_ExchangeInstID, QryExchangeQuoteField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, QryExchangeQuoteField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        QryExchangeQuoteField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeQuoteField_dealloc(PyCThostFtdcQryExchangeQuoteField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeQuoteField_repr(PyCThostFtdcQryExchangeQuoteField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 
        ,"ExchangeInstID", self->data.ExchangeInstID//, (Py_ssize_t)sizeof(self->data.ExchangeInstID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeQuoteField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ParticipantID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQryExchangeQuoteField_set_ParticipantID(PyCThostFtdcQryExchangeQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
    // memcpy(self->data.ParticipantID, buf, len);
    strncpy(self->data.ParticipantID, buf, sizeof(self->data.ParticipantID));
    return 0;
}
            
///客户代码
// TThostFtdcClientIDType char[11]
static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ClientID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQryExchangeQuoteField_set_ClientID(PyCThostFtdcQryExchangeQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
    // memcpy(self->data.ClientID, buf, len);
    strncpy(self->data.ClientID, buf, sizeof(self->data.ClientID));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static PyObject *PyCThostFtdcQryExchangeQuoteField_get_reserve1(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcQryExchangeQuoteField_set_reserve1(PyCThostFtdcQryExchangeQuoteField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ExchangeID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeQuoteField_set_ExchangeID(PyCThostFtdcQryExchangeQuoteField *self, PyObject* val, void *closure) {
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
            
///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static PyObject *PyCThostFtdcQryExchangeQuoteField_get_TraderID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQryExchangeQuoteField_set_TraderID(PyCThostFtdcQryExchangeQuoteField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
    // memcpy(self->data.TraderID, buf, len);
    strncpy(self->data.TraderID, buf, sizeof(self->data.TraderID));
    return 0;
}
            
///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static PyObject *PyCThostFtdcQryExchangeQuoteField_get_ExchangeInstID(PyCThostFtdcQryExchangeQuoteField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQryExchangeQuoteField_set_ExchangeInstID(PyCThostFtdcQryExchangeQuoteField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeQuoteField_getset[] = {
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ClientID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeQuoteField_get_reserve1, (setter)PyCThostFtdcQryExchangeQuoteField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeQuoteField_get_TraderID, (setter)PyCThostFtdcQryExchangeQuoteField_set_TraderID, (char *)"TraderID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeQuoteField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeQuoteField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeQuoteFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeQuoteField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeQuoteField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeQuoteField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeQuoteField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeQuoteField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeQuoteField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeQuoteField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeQuoteField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeQuoteFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeQuoteField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeQuoteFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeQuoteField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeQuoteFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeQuoteField", (PyObject *)&PyCThostFtdcQryExchangeQuoteFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeQuoteField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeQuoteFieldType);
		return -1;
    }

    return 0;
}
