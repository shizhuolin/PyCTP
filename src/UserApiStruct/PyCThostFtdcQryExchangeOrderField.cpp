
#include "PyCThostFtdcQryExchangeOrderField.h"

///查询交易所报单

static PyObject *PyCThostFtdcQryExchangeOrderField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeOrderField *self = (PyCThostFtdcQryExchangeOrderField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeOrderField_init(PyCThostFtdcQryExchangeOrderField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "reserve1", "ExchangeID", "TraderID", "ExchangeInstID",  NULL};


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QryExchangeOrderField_ParticipantID = NULL;
    Py_ssize_t QryExchangeOrderField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QryExchangeOrderField_ClientID = NULL;
    Py_ssize_t QryExchangeOrderField_ClientID_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    const char *QryExchangeOrderField_reserve1 = NULL;
    Py_ssize_t QryExchangeOrderField_reserve1_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeOrderField_ExchangeID = NULL;
    Py_ssize_t QryExchangeOrderField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QryExchangeOrderField_TraderID = NULL;
    Py_ssize_t QryExchangeOrderField_TraderID_len = 0;
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    const char *QryExchangeOrderField_ExchangeInstID = NULL;
    Py_ssize_t QryExchangeOrderField_ExchangeInstID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#", (char **)kwlist
#endif

        , &QryExchangeOrderField_ParticipantID, &QryExchangeOrderField_ParticipantID_len 
        , &QryExchangeOrderField_ClientID, &QryExchangeOrderField_ClientID_len 
        , &QryExchangeOrderField_reserve1, &QryExchangeOrderField_reserve1_len 
        , &QryExchangeOrderField_ExchangeID, &QryExchangeOrderField_ExchangeID_len 
        , &QryExchangeOrderField_TraderID, &QryExchangeOrderField_TraderID_len 
        , &QryExchangeOrderField_ExchangeInstID, &QryExchangeOrderField_ExchangeInstID_len 


    )) {
        return -1;
    }


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QryExchangeOrderField_ParticipantID != NULL ) {
        if(QryExchangeOrderField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QryExchangeOrderField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QryExchangeOrderField_ParticipantID, QryExchangeOrderField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QryExchangeOrderField_ParticipantID, sizeof(self->data.ParticipantID) );
        QryExchangeOrderField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QryExchangeOrderField_ClientID != NULL ) {
        if(QryExchangeOrderField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QryExchangeOrderField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QryExchangeOrderField_ClientID, QryExchangeOrderField_ClientID_len);        
        strncpy(self->data.ClientID, QryExchangeOrderField_ClientID, sizeof(self->data.ClientID) );
        QryExchangeOrderField_ClientID = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldExchangeInstIDType char[31]
    if( QryExchangeOrderField_reserve1 != NULL ) {
        if(QryExchangeOrderField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", QryExchangeOrderField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, QryExchangeOrderField_reserve1, QryExchangeOrderField_reserve1_len);        
        strncpy(self->data.reserve1, QryExchangeOrderField_reserve1, sizeof(self->data.reserve1) );
        QryExchangeOrderField_reserve1 = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeOrderField_ExchangeID != NULL ) {
        if(QryExchangeOrderField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeOrderField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeOrderField_ExchangeID, QryExchangeOrderField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeOrderField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeOrderField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QryExchangeOrderField_TraderID != NULL ) {
        if(QryExchangeOrderField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QryExchangeOrderField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QryExchangeOrderField_TraderID, QryExchangeOrderField_TraderID_len);        
        strncpy(self->data.TraderID, QryExchangeOrderField_TraderID, sizeof(self->data.TraderID) );
        QryExchangeOrderField_TraderID = NULL;
    }
            
    ///合约在交易所的代码
    // TThostFtdcExchangeInstIDType char[81]
    if( QryExchangeOrderField_ExchangeInstID != NULL ) {
        if(QryExchangeOrderField_ExchangeInstID_len > (Py_ssize_t)sizeof(self->data.ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is %zd)", QryExchangeOrderField_ExchangeInstID_len, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
            return -1;
        }
        // memset(self->data.ExchangeInstID, 0, sizeof(self->data.ExchangeInstID));
        // memcpy(self->data.ExchangeInstID, QryExchangeOrderField_ExchangeInstID, QryExchangeOrderField_ExchangeInstID_len);        
        strncpy(self->data.ExchangeInstID, QryExchangeOrderField_ExchangeInstID, sizeof(self->data.ExchangeInstID) );
        QryExchangeOrderField_ExchangeInstID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeOrderField_dealloc(PyCThostFtdcQryExchangeOrderField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeOrderField_repr(PyCThostFtdcQryExchangeOrderField *self) {

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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeOrderField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQryExchangeOrderField_get_ParticipantID(PyCThostFtdcQryExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQryExchangeOrderField_set_ParticipantID(PyCThostFtdcQryExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeOrderField_get_ClientID(PyCThostFtdcQryExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQryExchangeOrderField_set_ClientID(PyCThostFtdcQryExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeOrderField_get_reserve1(PyCThostFtdcQryExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldExchangeInstIDType char[31]
static int PyCThostFtdcQryExchangeOrderField_set_reserve1(PyCThostFtdcQryExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeOrderField_get_ExchangeID(PyCThostFtdcQryExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeOrderField_set_ExchangeID(PyCThostFtdcQryExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeOrderField_get_TraderID(PyCThostFtdcQryExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQryExchangeOrderField_set_TraderID(PyCThostFtdcQryExchangeOrderField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeOrderField_get_ExchangeInstID(PyCThostFtdcQryExchangeOrderField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeInstID, (Py_ssize_t)sizeof(self->data.ExchangeInstID));
    return PyBytes_FromString(self->data.ExchangeInstID);
}

///合约在交易所的代码
// TThostFtdcExchangeInstIDType char[81]
static int PyCThostFtdcQryExchangeOrderField_set_ExchangeInstID(PyCThostFtdcQryExchangeOrderField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeOrderField_getset[] = {
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeOrderField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeOrderField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeOrderField_get_ClientID, (setter)PyCThostFtdcQryExchangeOrderField_set_ClientID, (char *)"ClientID", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcQryExchangeOrderField_get_reserve1, (setter)PyCThostFtdcQryExchangeOrderField_set_reserve1, (char *)"reserve1", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeOrderField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeOrderField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeOrderField_get_TraderID, (setter)PyCThostFtdcQryExchangeOrderField_set_TraderID, (char *)"TraderID", NULL},
    ///合约在交易所的代码 
    {(char *)"ExchangeInstID", (getter)PyCThostFtdcQryExchangeOrderField_get_ExchangeInstID, (setter)PyCThostFtdcQryExchangeOrderField_set_ExchangeInstID, (char *)"ExchangeInstID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeOrderFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeOrderField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeOrderField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeOrderField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeOrderField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeOrderField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeOrderField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeOrderField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeOrderField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeOrderFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeOrderField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeOrderFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeOrderField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeOrderFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeOrderField", (PyObject *)&PyCThostFtdcQryExchangeOrderFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeOrderField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeOrderFieldType);
		return -1;
    }

    return 0;
}
