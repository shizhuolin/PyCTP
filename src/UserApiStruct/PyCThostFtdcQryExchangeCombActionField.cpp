
#include "PyCThostFtdcQryExchangeCombActionField.h"

///交易所申请组合查询

static PyObject *PyCThostFtdcQryExchangeCombActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeCombActionField *self = (PyCThostFtdcQryExchangeCombActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeCombActionField_init(PyCThostFtdcQryExchangeCombActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QryExchangeCombActionField_ParticipantID = NULL;
    Py_ssize_t QryExchangeCombActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QryExchangeCombActionField_ClientID = NULL;
    Py_ssize_t QryExchangeCombActionField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *QryExchangeCombActionField_reserve1 = NULL;
    Py_ssize_t QryExchangeCombActionField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeCombActionField_ExchangeID = NULL;
    Py_ssize_t QryExchangeCombActionField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QryExchangeCombActionField_TraderID = NULL;
    Py_ssize_t QryExchangeCombActionField_TraderID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QryExchangeCombActionField_ExchangeInstID = NULL;
    Py_ssize_t QryExchangeCombActionField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryExchangeCombActionField_ParticipantID, &QryExchangeCombActionField_ParticipantID_len 
        , &QryExchangeCombActionField_ClientID, &QryExchangeCombActionField_ClientID_len 
        , &QryExchangeCombActionField_reserve1, &QryExchangeCombActionField_reserve1_len 
        , &QryExchangeCombActionField_ExchangeID, &QryExchangeCombActionField_ExchangeID_len 
        , &QryExchangeCombActionField_TraderID, &QryExchangeCombActionField_TraderID_len 
        , &QryExchangeCombActionField_ExchangeInstID, &QryExchangeCombActionField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QryExchangeCombActionField_ParticipantID != NULL ) {
        if(QryExchangeCombActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QryExchangeCombActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QryExchangeCombActionField_ParticipantID, QryExchangeCombActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QryExchangeCombActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        QryExchangeCombActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QryExchangeCombActionField_ClientID != NULL ) {
        if(QryExchangeCombActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QryExchangeCombActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QryExchangeCombActionField_ClientID, QryExchangeCombActionField_ClientID_len);        
        strncpy(self->data.ClientID, QryExchangeCombActionField_ClientID, sizeof(self->data.ClientID) );
        QryExchangeCombActionField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( QryExchangeCombActionField_reserve1 != NULL ) {
        if(QryExchangeCombActionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryExchangeCombActionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryExchangeCombActionField_reserve1, QryExchangeCombActionField_reserve1_len);        
        strncpy(self->data.reserve1, QryExchangeCombActionField_reserve1, sizeof(self->data.reserve1) );
        QryExchangeCombActionField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeCombActionField_ExchangeID != NULL ) {
        if(QryExchangeCombActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeCombActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeCombActionField_ExchangeID, QryExchangeCombActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeCombActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeCombActionField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QryExchangeCombActionField_TraderID != NULL ) {
        if(QryExchangeCombActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QryExchangeCombActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QryExchangeCombActionField_TraderID, QryExchangeCombActionField_TraderID_len);        
        strncpy(self->data.TraderID, QryExchangeCombActionField_TraderID, sizeof(self->data.TraderID) );
        QryExchangeCombActionField_TraderID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( QryExchangeCombActionField_ExchangeInstID != NULL ) {
        if(QryExchangeCombActionField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", QryExchangeCombActionField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, QryExchangeCombActionField_ExchangeInstID, QryExchangeCombActionField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, QryExchangeCombActionField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        QryExchangeCombActionField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeCombActionField_dealloc(PyCThostFtdcQryExchangeCombActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeCombActionField_repr(PyCThostFtdcQryExchangeCombActionField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeCombActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ParticipantID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQryExchangeCombActionField_set_ParticipantID(PyCThostFtdcQryExchangeCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ClientID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQryExchangeCombActionField_set_ClientID(PyCThostFtdcQryExchangeCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeCombActionField_get_reserve1(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcQryExchangeCombActionField_set_reserve1(PyCThostFtdcQryExchangeCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ExchangeID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeCombActionField_set_ExchangeID(PyCThostFtdcQryExchangeCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeCombActionField_get_TraderID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQryExchangeCombActionField_set_TraderID(PyCThostFtdcQryExchangeCombActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeCombActionField_get_ExchangeInstID(PyCThostFtdcQryExchangeCombActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQryExchangeCombActionField_set_ExchangeInstID(PyCThostFtdcQryExchangeCombActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeCombActionField_getset[] = {
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ClientID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeCombActionField_get_reserve1, (setter)PyCThostFtdcQryExchangeCombActionField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeCombActionField_get_TraderID, (setter)PyCThostFtdcQryExchangeCombActionField_set_TraderID, (char *)"TraderID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeCombActionField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeCombActionField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeCombActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeCombActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeCombActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeCombActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeCombActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeCombActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeCombActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeCombActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeCombActionField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeCombActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeCombActionField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeCombActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeCombActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeCombActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeCombActionField", (PyObject *)&PyCThostFtdcQryExchangeCombActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeCombActionField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeCombActionFieldType);
		return -1;
    }

    return 0;
}
