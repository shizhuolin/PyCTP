
#include "PyCThostFtdcCFMMCTradingAccountKeyField.h"

///保证金监管系统经纪公司资金账户密钥

static PyObject *PyCThostFtdcCFMMCTradingAccountKeyField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcCFMMCTradingAccountKeyField *self = (PyCThostFtdcCFMMCTradingAccountKeyField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcCFMMCTradingAccountKeyField_init(PyCThostFtdcCFMMCTradingAccountKeyField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "ParticipantID", "AccountID", "KeyID", "CurrentKey",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *CFMMCTradingAccountKeyField_BrokerID = NULL;
    Py_ssize_t CFMMCTradingAccountKeyField_BrokerID_len = 0;
            
    ///经纪公司统一编码
    // TThostFtdcParticipantIDType char[11]
    const char *CFMMCTradingAccountKeyField_ParticipantID = NULL;
    Py_ssize_t CFMMCTradingAccountKeyField_ParticipantID_len = 0;
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    const char *CFMMCTradingAccountKeyField_AccountID = NULL;
    Py_ssize_t CFMMCTradingAccountKeyField_AccountID_len = 0;
            
    ///密钥编号
    // TThostFtdcSequenceNoType int
    int CFMMCTradingAccountKeyField_KeyID = 0;
        
    ///动态密钥
    // TThostFtdcCFMMCKeyType char[21]
    const char *CFMMCTradingAccountKeyField_CurrentKey = NULL;
    Py_ssize_t CFMMCTradingAccountKeyField_CurrentKey_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#is#", (char **)kwlist
#endif

        , &CFMMCTradingAccountKeyField_BrokerID, &CFMMCTradingAccountKeyField_BrokerID_len 
        , &CFMMCTradingAccountKeyField_ParticipantID, &CFMMCTradingAccountKeyField_ParticipantID_len 
        , &CFMMCTradingAccountKeyField_AccountID, &CFMMCTradingAccountKeyField_AccountID_len 
        , &CFMMCTradingAccountKeyField_KeyID 
        , &CFMMCTradingAccountKeyField_CurrentKey, &CFMMCTradingAccountKeyField_CurrentKey_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( CFMMCTradingAccountKeyField_BrokerID != NULL ) {
        if(CFMMCTradingAccountKeyField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", CFMMCTradingAccountKeyField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, CFMMCTradingAccountKeyField_BrokerID, CFMMCTradingAccountKeyField_BrokerID_len);        
        strncpy(self->data.BrokerID, CFMMCTradingAccountKeyField_BrokerID, sizeof(self->data.BrokerID) );
        CFMMCTradingAccountKeyField_BrokerID = NULL;
    }
            
    ///经纪公司统一编码
    // TThostFtdcParticipantIDType char[11]
    if( CFMMCTradingAccountKeyField_ParticipantID != NULL ) {
        if(CFMMCTradingAccountKeyField_ParticipantID_len > (Py_ssize_t)sizeof(self->data.ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is %zd)", CFMMCTradingAccountKeyField_ParticipantID_len, (Py_ssize_t)sizeof(self->data.ParticipantID));
            return -1;
        }
        // memset(self->data.ParticipantID, 0, sizeof(self->data.ParticipantID));
        // memcpy(self->data.ParticipantID, CFMMCTradingAccountKeyField_ParticipantID, CFMMCTradingAccountKeyField_ParticipantID_len);        
        strncpy(self->data.ParticipantID, CFMMCTradingAccountKeyField_ParticipantID, sizeof(self->data.ParticipantID) );
        CFMMCTradingAccountKeyField_ParticipantID = NULL;
    }
            
    ///投资者帐号
    // TThostFtdcAccountIDType char[13]
    if( CFMMCTradingAccountKeyField_AccountID != NULL ) {
        if(CFMMCTradingAccountKeyField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", CFMMCTradingAccountKeyField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, CFMMCTradingAccountKeyField_AccountID, CFMMCTradingAccountKeyField_AccountID_len);        
        strncpy(self->data.AccountID, CFMMCTradingAccountKeyField_AccountID, sizeof(self->data.AccountID) );
        CFMMCTradingAccountKeyField_AccountID = NULL;
    }
            
    ///密钥编号
    // TThostFtdcSequenceNoType int
    self->data.KeyID = CFMMCTradingAccountKeyField_KeyID;
        
    ///动态密钥
    // TThostFtdcCFMMCKeyType char[21]
    if( CFMMCTradingAccountKeyField_CurrentKey != NULL ) {
        if(CFMMCTradingAccountKeyField_CurrentKey_len > (Py_ssize_t)sizeof(self->data.CurrentKey)) {
            PyErr_Format(PyExc_ValueError, "CurrentKey too long: length=%zd (max allowed is %zd)", CFMMCTradingAccountKeyField_CurrentKey_len, (Py_ssize_t)sizeof(self->data.CurrentKey));
            return -1;
        }
        // memset(self->data.CurrentKey, 0, sizeof(self->data.CurrentKey));
        // memcpy(self->data.CurrentKey, CFMMCTradingAccountKeyField_CurrentKey, CFMMCTradingAccountKeyField_CurrentKey_len);        
        strncpy(self->data.CurrentKey, CFMMCTradingAccountKeyField_CurrentKey, sizeof(self->data.CurrentKey) );
        CFMMCTradingAccountKeyField_CurrentKey = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcCFMMCTradingAccountKeyField_dealloc(PyCThostFtdcCFMMCTradingAccountKeyField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcCFMMCTradingAccountKeyField_repr(PyCThostFtdcCFMMCTradingAccountKeyField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:i,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"ParticipantID", self->data.ParticipantID//, (Py_ssize_t)sizeof(self->data.ParticipantID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"KeyID", self->data.KeyID 
        ,"CurrentKey", self->data.CurrentKey//, (Py_ssize_t)sizeof(self->data.CurrentKey) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcCFMMCTradingAccountKeyField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyField_get_BrokerID(PyCThostFtdcCFMMCTradingAccountKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcCFMMCTradingAccountKeyField_set_BrokerID(PyCThostFtdcCFMMCTradingAccountKeyField *self, PyObject* val, void *closure) {
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
            
///经纪公司统一编码
// TThostFtdcParticipantIDType char[11]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyField_get_ParticipantID(PyCThostFtdcCFMMCTradingAccountKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ParticipantID, (Py_ssize_t)sizeof(self->data.ParticipantID));
    return PyBytes_FromString(self->data.ParticipantID);
}

///经纪公司统一编码
// TThostFtdcParticipantIDType char[11]
static int PyCThostFtdcCFMMCTradingAccountKeyField_set_ParticipantID(PyCThostFtdcCFMMCTradingAccountKeyField *self, PyObject* val, void *closure) {
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
            
///投资者帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyField_get_AccountID(PyCThostFtdcCFMMCTradingAccountKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///投资者帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcCFMMCTradingAccountKeyField_set_AccountID(PyCThostFtdcCFMMCTradingAccountKeyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
    // memcpy(self->data.AccountID, buf, len);
    strncpy(self->data.AccountID, buf, sizeof(self->data.AccountID));
    return 0;
}
            
///密钥编号
// TThostFtdcSequenceNoType int
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyField_get_KeyID(PyCThostFtdcCFMMCTradingAccountKeyField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.KeyID);
#else
    return PyInt_FromLong(self->data.KeyID);
#endif
}

///密钥编号
// TThostFtdcSequenceNoType int
static int PyCThostFtdcCFMMCTradingAccountKeyField_set_KeyID(PyCThostFtdcCFMMCTradingAccountKeyField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "KeyID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "KeyID Expected int");
#endif
        return -1;
    }
#if PY_MAJOR_VERSION >= 3
    const long buf = PyLong_AsLong(val);
#else
    const long buf = PyInt_AsLong(val);
#endif
    if (buf == -1 && PyErr_Occurred()) {
        return -1;
    }
    if (buf < INT_MIN || buf > INT_MAX) {
        PyErr_SetString(PyExc_OverflowError, "the KeyID value out of range for C int");
        return -1;
    }
    self->data.KeyID = (int)buf;
    return 0;
}
        
///动态密钥
// TThostFtdcCFMMCKeyType char[21]
static PyObject *PyCThostFtdcCFMMCTradingAccountKeyField_get_CurrentKey(PyCThostFtdcCFMMCTradingAccountKeyField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrentKey, (Py_ssize_t)sizeof(self->data.CurrentKey));
    return PyBytes_FromString(self->data.CurrentKey);
}

///动态密钥
// TThostFtdcCFMMCKeyType char[21]
static int PyCThostFtdcCFMMCTradingAccountKeyField_set_CurrentKey(PyCThostFtdcCFMMCTradingAccountKeyField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrentKey Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrentKey)) {
        PyErr_SetString(PyExc_ValueError, "CurrentKey must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.CurrentKey, 0, sizeof(self->data.CurrentKey));
    // memcpy(self->data.CurrentKey, buf, len);
    strncpy(self->data.CurrentKey, buf, sizeof(self->data.CurrentKey));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcCFMMCTradingAccountKeyField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcCFMMCTradingAccountKeyField_get_BrokerID, (setter)PyCThostFtdcCFMMCTradingAccountKeyField_set_BrokerID, (char *)"BrokerID", NULL},
    ///经纪公司统一编码 
    {(char *)"ParticipantID", (getter)PyCThostFtdcCFMMCTradingAccountKeyField_get_ParticipantID, (setter)PyCThostFtdcCFMMCTradingAccountKeyField_set_ParticipantID, (char *)"ParticipantID", NULL},
    ///投资者帐号 
    {(char *)"AccountID", (getter)PyCThostFtdcCFMMCTradingAccountKeyField_get_AccountID, (setter)PyCThostFtdcCFMMCTradingAccountKeyField_set_AccountID, (char *)"AccountID", NULL},
    ///密钥编号 
    {(char *)"KeyID", (getter)PyCThostFtdcCFMMCTradingAccountKeyField_get_KeyID, (setter)PyCThostFtdcCFMMCTradingAccountKeyField_set_KeyID, (char *)"KeyID", NULL},
    ///动态密钥 
    {(char *)"CurrentKey", (getter)PyCThostFtdcCFMMCTradingAccountKeyField_get_CurrentKey, (setter)PyCThostFtdcCFMMCTradingAccountKeyField_set_CurrentKey, (char *)"CurrentKey", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcCFMMCTradingAccountKeyFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcCFMMCTradingAccountKeyField",	/* tp_name */
	sizeof(PyCThostFtdcCFMMCTradingAccountKeyField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcCFMMCTradingAccountKeyField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcCFMMCTradingAccountKeyField_repr,   /* tp_repr */
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
	"CThostFtdcCFMMCTradingAccountKeyField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcCFMMCTradingAccountKeyField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcCFMMCTradingAccountKeyField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcCFMMCTradingAccountKeyField_new,       /* tp_new */
};

int PyCThostFtdcCFMMCTradingAccountKeyFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcCFMMCTradingAccountKeyField  */
	if (PyType_Ready(&PyCThostFtdcCFMMCTradingAccountKeyFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcCFMMCTradingAccountKeyField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcCFMMCTradingAccountKeyFieldType);
    if( PyModule_AddObject(module, "CThostFtdcCFMMCTradingAccountKeyField", (PyObject *)&PyCThostFtdcCFMMCTradingAccountKeyFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcCFMMCTradingAccountKeyField to module");
        Py_DECREF(&PyCThostFtdcCFMMCTradingAccountKeyFieldType);
		return -1;
    }

    return 0;
}
