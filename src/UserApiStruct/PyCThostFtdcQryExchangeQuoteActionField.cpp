
#include "PyCThostFtdcQryExchangeQuoteActionField.h"

///交易所报价操作查询

static PyObject *PyCThostFtdcQryExchangeQuoteActionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryExchangeQuoteActionField *self = (PyCThostFtdcQryExchangeQuoteActionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryExchangeQuoteActionField_init(PyCThostFtdcQryExchangeQuoteActionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ParticipantID", "ClientID", "ExchangeID", "TraderID",  NULL};


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QryExchangeQuoteActionField_ParticipantID = NULL;
    Py_ssize_t QryExchangeQuoteActionField_ParticipantID_len = 0;
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    const char *QryExchangeQuoteActionField_ClientID = NULL;
    Py_ssize_t QryExchangeQuoteActionField_ClientID_len = 0;
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryExchangeQuoteActionField_ExchangeID = NULL;
    Py_ssize_t QryExchangeQuoteActionField_ExchangeID_len = 0;
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    const char *QryExchangeQuoteActionField_TraderID = NULL;
    Py_ssize_t QryExchangeQuoteActionField_TraderID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QryExchangeQuoteActionField_ParticipantID, &QryExchangeQuoteActionField_ParticipantID_len 
        , &QryExchangeQuoteActionField_ClientID, &QryExchangeQuoteActionField_ClientID_len 
        , &QryExchangeQuoteActionField_ExchangeID, &QryExchangeQuoteActionField_ExchangeID_len 
        , &QryExchangeQuoteActionField_TraderID, &QryExchangeQuoteActionField_TraderID_len 


    )) {
        return -1;
    }


    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QryExchangeQuoteActionField_ParticipantID != NULL ) {
        if(QryExchangeQuoteActionField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteActionField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QryExchangeQuoteActionField_ParticipantID, QryExchangeQuoteActionField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QryExchangeQuoteActionField_ParticipantID, sizeof(self->data.ParticipantID) );
        QryExchangeQuoteActionField_ParticipantID = NULL;
    }
            
    ///客户代码
    // TThostFtdcClientIDType char[11]
    if( QryExchangeQuoteActionField_ClientID != NULL ) {
        if(QryExchangeQuoteActionField_ClientID_len > (Py_ssize_t)sizeof(self->data.ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteActionField_ClientID_len, (Py_ssize_t)sizeof(self->data.ClientID));
            return -1;
        }
        // memset(self->data.ClientID, 0, sizeof(self->data.ClientID));
        // memcpy(self->data.ClientID, QryExchangeQuoteActionField_ClientID, QryExchangeQuoteActionField_ClientID_len);        
        strncpy(self->data.ClientID, QryExchangeQuoteActionField_ClientID, sizeof(self->data.ClientID) );
        QryExchangeQuoteActionField_ClientID = NULL;
    }
            
    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryExchangeQuoteActionField_ExchangeID != NULL ) {
        if(QryExchangeQuoteActionField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteActionField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryExchangeQuoteActionField_ExchangeID, QryExchangeQuoteActionField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryExchangeQuoteActionField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryExchangeQuoteActionField_ExchangeID = NULL;
    }
            
    ///交易所交易员代码
    // TThostFtdcTraderIDType char[21]
    if( QryExchangeQuoteActionField_TraderID != NULL ) {
        if(QryExchangeQuoteActionField_TraderID_len > (Py_ssize_t)sizeof(self->data.TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is %zd)", QryExchangeQuoteActionField_TraderID_len, (Py_ssize_t)sizeof(self->data.TraderID));
            return -1;
        }
        // memset(self->data.TraderID, 0, sizeof(self->data.TraderID));
        // memcpy(self->data.TraderID, QryExchangeQuoteActionField_TraderID, QryExchangeQuoteActionField_TraderID_len);        
        strncpy(self->data.TraderID, QryExchangeQuoteActionField_TraderID, sizeof(self->data.TraderID) );
        QryExchangeQuoteActionField_TraderID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryExchangeQuoteActionField_dealloc(PyCThostFtdcQryExchangeQuoteActionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryExchangeQuoteActionField_repr(PyCThostFtdcQryExchangeQuoteActionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"ClientID", self->data.ClientID//, (Py_ssize_t)sizeof(self->data.ClientID) 
        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"TraderID", self->data.TraderID//, (Py_ssize_t)sizeof(self->data.TraderID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryExchangeQuoteActionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_ParticipantID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQryExchangeQuoteActionField_set_ParticipantID(PyCThostFtdcQryExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_ClientID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientID, (Py_ssize_t)sizeof(self->data.ClientID));
    return PyBytes_FromString(self->data.ClientID);
}

///客户代码
// TThostFtdcClientIDType char[11]
static int PyCThostFtdcQryExchangeQuoteActionField_set_ClientID(PyCThostFtdcQryExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
            
///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_ExchangeID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryExchangeQuoteActionField_set_ExchangeID(PyCThostFtdcQryExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcQryExchangeQuoteActionField_get_TraderID(PyCThostFtdcQryExchangeQuoteActionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TraderID, (Py_ssize_t)sizeof(self->data.TraderID));
    return PyBytes_FromString(self->data.TraderID);
}

///交易所交易员代码
// TThostFtdcTraderIDType char[21]
static int PyCThostFtdcQryExchangeQuoteActionField_set_TraderID(PyCThostFtdcQryExchangeQuoteActionField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryExchangeQuoteActionField_getset[] = {
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_ParticipantID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///客户代码 
    {(char *)"ClientID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_ClientID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_ClientID, (char *)"ClientID", NULL},
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_ExchangeID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///交易所交易员代码 
    {(char *)"TraderID", (getter)PyCThostFtdcQryExchangeQuoteActionField_get_TraderID, (setter)PyCThostFtdcQryExchangeQuoteActionField_set_TraderID, (char *)"TraderID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryExchangeQuoteActionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryExchangeQuoteActionField",	/* tp_name */
	sizeof(PyCThostFtdcQryExchangeQuoteActionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryExchangeQuoteActionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryExchangeQuoteActionField_repr,   /* tp_repr */
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
	"CThostFtdcQryExchangeQuoteActionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryExchangeQuoteActionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryExchangeQuoteActionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryExchangeQuoteActionField_new,       /* tp_new */
};

int PyCThostFtdcQryExchangeQuoteActionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryExchangeQuoteActionField  */
	if (PyType_Ready(&PyCThostFtdcQryExchangeQuoteActionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryExchangeQuoteActionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryExchangeQuoteActionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryExchangeQuoteActionField", (PyObject *)&PyCThostFtdcQryExchangeQuoteActionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryExchangeQuoteActionField to module");
        Py_DECREF(&PyCThostFtdcQryExchangeQuoteActionFieldType);
		return -1;
    }

    return 0;
}
