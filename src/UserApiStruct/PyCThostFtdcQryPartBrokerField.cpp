
#include "PyCThostFtdcQryPartBrokerField.h"

///查询经纪公司会员代码

static PyObject *PyCThostFtdcQryPartBrokerField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQryPartBrokerField *self = (PyCThostFtdcQryPartBrokerField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQryPartBrokerField_init(PyCThostFtdcQryPartBrokerField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"ExchangeID", "BrokerID", "ParticipantID",  NULL};


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    const char *QryPartBrokerField_ExchangeID = NULL;
    Py_ssize_t QryPartBrokerField_ExchangeID_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QryPartBrokerField_BrokerID = NULL;
    Py_ssize_t QryPartBrokerField_BrokerID_len = 0;
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    const char *QryPartBrokerField_ParticipantID = NULL;
    Py_ssize_t QryPartBrokerField_ParticipantID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#", (char **)kwlist
#endif

        , &QryPartBrokerField_ExchangeID, &QryPartBrokerField_ExchangeID_len 
        , &QryPartBrokerField_BrokerID, &QryPartBrokerField_BrokerID_len 
        , &QryPartBrokerField_ParticipantID, &QryPartBrokerField_ParticipantID_len 


    )) {
        return -1;
    }


    ///交易所代码
    // TThostFtdcExchangeIDType char[9]
    if( QryPartBrokerField_ExchangeID != NULL ) {
        if(QryPartBrokerField_ExchangeID_len > (Py_ssize_t)sizeof(self->data.ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is %zd)", QryPartBrokerField_ExchangeID_len, (Py_ssize_t)sizeof(self->data.ExchangeID));
            return -1;
        }
        // memset(self->data.ExchangeID, 0, sizeof(self->data.ExchangeID));
        // memcpy(self->data.ExchangeID, QryPartBrokerField_ExchangeID, QryPartBrokerField_ExchangeID_len);        
        strncpy(self->data.ExchangeID, QryPartBrokerField_ExchangeID, sizeof(self->data.ExchangeID) );
        QryPartBrokerField_ExchangeID = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QryPartBrokerField_BrokerID != NULL ) {
        if(QryPartBrokerField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QryPartBrokerField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QryPartBrokerField_BrokerID, QryPartBrokerField_BrokerID_len);        
        strncpy(self->data.BrokerID, QryPartBrokerField_BrokerID, sizeof(self->data.BrokerID) );
        QryPartBrokerField_BrokerID = NULL;
    }
            
    ///会员代码
    // TThostFtdcParticipantIDType char[11]
    if( QryPartBrokerField_ParticipantID != NULL ) {
        if(QryPartBrokerField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", QryPartBrokerField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, QryPartBrokerField_ParticipantID, QryPartBrokerField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, QryPartBrokerField_ParticipantID, sizeof(self->data.ParticipantID) );
        QryPartBrokerField_ParticipantID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQryPartBrokerField_dealloc(PyCThostFtdcQryPartBrokerField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQryPartBrokerField_repr(PyCThostFtdcQryPartBrokerField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s}"
#endif

        ,"ExchangeID", self->data.ExchangeID//, (Py_ssize_t)sizeof(self->data.ExchangeID) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQryPartBrokerField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易所代码
// TThostFtdcExchangeIDType char[9]
static PyObject *PyCThostFtdcQryPartBrokerField_get_ExchangeID(PyCThostFtdcQryPartBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ExchangeID, (Py_ssize_t)sizeof(self->data.ExchangeID));
    return PyBytes_FromString(self->data.ExchangeID);
}

///交易所代码
// TThostFtdcExchangeIDType char[9]
static int PyCThostFtdcQryPartBrokerField_set_ExchangeID(PyCThostFtdcQryPartBrokerField *self, PyObject* val, void *closure) {
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
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQryPartBrokerField_get_BrokerID(PyCThostFtdcQryPartBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQryPartBrokerField_set_BrokerID(PyCThostFtdcQryPartBrokerField *self, PyObject* val, void *closure) {
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
            
///会员代码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcQryPartBrokerField_get_ParticipantID(PyCThostFtdcQryPartBrokerField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///会员代码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcQryPartBrokerField_set_ParticipantID(PyCThostFtdcQryPartBrokerField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcQryPartBrokerField_getset[] = {
    ///交易所代码 
    {(char *)"ExchangeID", (getter)PyCThostFtdcQryPartBrokerField_get_ExchangeID, (setter)PyCThostFtdcQryPartBrokerField_set_ExchangeID, (char *)"ExchangeID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQryPartBrokerField_get_BrokerID, (setter)PyCThostFtdcQryPartBrokerField_set_BrokerID, (char *)"BrokerID", NULL},
    ///会员代码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcQryPartBrokerField_get_ParticipantID, (setter)PyCThostFtdcQryPartBrokerField_set_ParticipantID, (char *)"ParticipantID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQryPartBrokerFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQryPartBrokerField",	/* tp_name */
	sizeof(PyCThostFtdcQryPartBrokerField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQryPartBrokerField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQryPartBrokerField_repr,   /* tp_repr */
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
	"CThostFtdcQryPartBrokerField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQryPartBrokerField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQryPartBrokerField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQryPartBrokerField_new,       /* tp_new */
};

int PyCThostFtdcQryPartBrokerFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQryPartBrokerField  */
	if (PyType_Ready(&PyCThostFtdcQryPartBrokerFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQryPartBrokerField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQryPartBrokerFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQryPartBrokerField", (PyObject *)&PyCThostFtdcQryPartBrokerFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQryPartBrokerField to module");
        Py_DECREF(&PyCThostFtdcQryPartBrokerFieldType);
		return -1;
    }

    return 0;
}
