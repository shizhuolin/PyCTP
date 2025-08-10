
#include "PyCThostFtdcQryExchangeExecOrderField.h"

///交易所执行宣告查询

static PyObject *PyCThostFtdcQryExchangeExecOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeExecOrderField *self = (PyCThostFtdcQryExchangeExecOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeExecOrderField_init(PyCThostFtdcQryExchangeExecOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QryExchangeExecOrderField_ParticipantID = NULL;
    Py_ssize_t QryExchangeExecOrderField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QryExchangeExecOrderField_ClientID = NULL;
    Py_ssize_t QryExchangeExecOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *QryExchangeExecOrderField_reserve1 = NULL;
    Py_ssize_t QryExchangeExecOrderField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeExecOrderField_ExchangeID = NULL;
    Py_ssize_t QryExchangeExecOrderField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QryExchangeExecOrderField_TraderID = NULL;
    Py_ssize_t QryExchangeExecOrderField_TraderID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QryExchangeExecOrderField_ExchangeInstID = NULL;
    Py_ssize_t QryExchangeExecOrderField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryExchangeExecOrderField_ParticipantID, &QryExchangeExecOrderField_ParticipantID_len 
        , &QryExchangeExecOrderField_ClientID, &QryExchangeExecOrderField_ClientID_len 
        , &QryExchangeExecOrderField_reserve1, &QryExchangeExecOrderField_reserve1_len 
        , &QryExchangeExecOrderField_ExchangeID, &QryExchangeExecOrderField_ExchangeID_len 
        , &QryExchangeExecOrderField_TraderID, &QryExchangeExecOrderField_TraderID_len 
        , &QryExchangeExecOrderField_ExchangeInstID, &QryExchangeExecOrderField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QryExchangeExecOrderField_ParticipantID != NULL ) {
        if(QryExchangeExecOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QryExchangeExecOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QryExchangeExecOrderField_ParticipantID, QryExchangeExecOrderField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QryExchangeExecOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
        QryExchangeExecOrderField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QryExchangeExecOrderField_ClientID != NULL ) {
        if(QryExchangeExecOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QryExchangeExecOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QryExchangeExecOrderField_ClientID, QryExchangeExecOrderField_ClientID_len);        
        strncpy(self->data.ClientID, QryExchangeExecOrderField_ClientID, sizeof(self->data.ClientID) );
        QryExchangeExecOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( QryExchangeExecOrderField_reserve1 != NULL ) {
        if(QryExchangeExecOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryExchangeExecOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryExchangeExecOrderField_reserve1, QryExchangeExecOrderField_reserve1_len);        
        strncpy(self->data.reserve1, QryExchangeExecOrderField_reserve1, sizeof(self->data.reserve1) );
        QryExchangeExecOrderField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeExecOrderField_ExchangeID != NULL ) {
        if(QryExchangeExecOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeExecOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeExecOrderField_ExchangeID, QryExchangeExecOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeExecOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeExecOrderField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QryExchangeExecOrderField_TraderID != NULL ) {
        if(QryExchangeExecOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QryExchangeExecOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QryExchangeExecOrderField_TraderID, QryExchangeExecOrderField_TraderID_len);        
        strncpy(self->data.TraderID, QryExchangeExecOrderField_TraderID, sizeof(self->data.TraderID) );
        QryExchangeExecOrderField_TraderID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( QryExchangeExecOrderField_ExchangeInstID != NULL ) {
        if(QryExchangeExecOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", QryExchangeExecOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, QryExchangeExecOrderField_ExchangeInstID, QryExchangeExecOrderField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, QryExchangeExecOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        QryExchangeExecOrderField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeExecOrderField_dealloc(PyCThostFtdcQryExchangeExecOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeExecOrderField_repr(PyCThostFtdcQryExchangeExecOrderField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeExecOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ParticipantID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQryExchangeExecOrderField_set_ParticipantID(PyCThostFtdcQryExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ClientID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQryExchangeExecOrderField_set_ClientID(PyCThostFtdcQryExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_reserve1(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcQryExchangeExecOrderField_set_reserve1(PyCThostFtdcQryExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ExchangeID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeExecOrderField_set_ExchangeID(PyCThostFtdcQryExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_TraderID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQryExchangeExecOrderField_set_TraderID(PyCThostFtdcQryExchangeExecOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeExecOrderField_get_ExchangeInstID(PyCThostFtdcQryExchangeExecOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQryExchangeExecOrderField_set_ExchangeInstID(PyCThostFtdcQryExchangeExecOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeExecOrderField_getset[] = {
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ClientID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeExecOrderField_get_reserve1, (setter)PyCThostFtdcQryExchangeExecOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_TraderID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_TraderID, (char *)"TraderID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeExecOrderField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeExecOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeExecOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeExecOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeExecOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeExecOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeExecOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeExecOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeExecOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeExecOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeExecOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeExecOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeExecOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeExecOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeExecOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeExecOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeExecOrderField", (PyObject *)&PyCThostFtdcQryExchangeExecOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeExecOrderField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeExecOrderFieldType);
		return -1;
    }

    return 0;
}
