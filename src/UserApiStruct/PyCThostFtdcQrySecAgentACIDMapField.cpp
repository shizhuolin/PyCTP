
#include "PyCThostFtdcQrySecAgentACIDMapField.h"

///二级代理操作员银期权限查询

static PyObject *PyCThostFtdcQrySecAgentACIDMapField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcQrySecAgentACIDMapField *self = (PyCThostFtdcQrySecAgentACIDMapField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcQrySecAgentACIDMapField_init(PyCThostFtdcQrySecAgentACIDMapField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "AccountID", "CurrencyID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *QrySecAgentACIDMapField_BrokerID = NULL;
    Py_ssize_t QrySecAgentACIDMapField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *QrySecAgentACIDMapField_UserID = NULL;
    Py_ssize_t QrySecAgentACIDMapField_UserID_len = 0;
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    const char *QrySecAgentACIDMapField_AccountID = NULL;
    Py_ssize_t QrySecAgentACIDMapField_AccountID_len = 0;
            
    ///币种
    // TThostFtdcCurrencyIDType char[4]
    const char *QrySecAgentACIDMapField_CurrencyID = NULL;
    Py_ssize_t QrySecAgentACIDMapField_CurrencyID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#", (char **)kwlist
#endif

        , &QrySecAgentACIDMapField_BrokerID, &QrySecAgentACIDMapField_BrokerID_len 
        , &QrySecAgentACIDMapField_UserID, &QrySecAgentACIDMapField_UserID_len 
        , &QrySecAgentACIDMapField_AccountID, &QrySecAgentACIDMapField_AccountID_len 
        , &QrySecAgentACIDMapField_CurrencyID, &QrySecAgentACIDMapField_CurrencyID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( QrySecAgentACIDMapField_BrokerID != NULL ) {
        if(QrySecAgentACIDMapField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", QrySecAgentACIDMapField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, QrySecAgentACIDMapField_BrokerID, QrySecAgentACIDMapField_BrokerID_len);        
        strncpy(self->data.BrokerID, QrySecAgentACIDMapField_BrokerID, sizeof(self->data.BrokerID) );
        QrySecAgentACIDMapField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( QrySecAgentACIDMapField_UserID != NULL ) {
        if(QrySecAgentACIDMapField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", QrySecAgentACIDMapField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, QrySecAgentACIDMapField_UserID, QrySecAgentACIDMapField_UserID_len);        
        strncpy(self->data.UserID, QrySecAgentACIDMapField_UserID, sizeof(self->data.UserID) );
        QrySecAgentACIDMapField_UserID = NULL;
    }
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    if( QrySecAgentACIDMapField_AccountID != NULL ) {
        if(QrySecAgentACIDMapField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", QrySecAgentACIDMapField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, QrySecAgentACIDMapField_AccountID, QrySecAgentACIDMapField_AccountID_len);        
        strncpy(self->data.AccountID, QrySecAgentACIDMapField_AccountID, sizeof(self->data.AccountID) );
        QrySecAgentACIDMapField_AccountID = NULL;
    }
            
    ///币种
    // TThostFtdcCurrencyIDType char[4]
    if( QrySecAgentACIDMapField_CurrencyID != NULL ) {
        if(QrySecAgentACIDMapField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", QrySecAgentACIDMapField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, QrySecAgentACIDMapField_CurrencyID, QrySecAgentACIDMapField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, QrySecAgentACIDMapField_CurrencyID, sizeof(self->data.CurrencyID) );
        QrySecAgentACIDMapField_CurrencyID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcQrySecAgentACIDMapField_dealloc(PyCThostFtdcQrySecAgentACIDMapField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcQrySecAgentACIDMapField_repr(PyCThostFtdcQrySecAgentACIDMapField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQrySecAgentACIDMapField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_BrokerID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcQrySecAgentACIDMapField_set_BrokerID(PyCThostFtdcQrySecAgentACIDMapField *self, PyObject* val, void *closure) {
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
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_UserID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcQrySecAgentACIDMapField_set_UserID(PyCThostFtdcQrySecAgentACIDMapField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///资金账户
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_AccountID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcQrySecAgentACIDMapField_set_AccountID(PyCThostFtdcQrySecAgentACIDMapField *self, PyObject* val, void *closure) {
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
            
///币种
// TThostFtdcCurrencyIDType char[4]
static PyObject *PyCThostFtdcQrySecAgentACIDMapField_get_CurrencyID(PyCThostFtdcQrySecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcQrySecAgentACIDMapField_set_CurrencyID(PyCThostFtdcQrySecAgentACIDMapField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 4 bytes");
        return -1;
    }
    // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
    // memcpy(self->data.CurrencyID, buf, len);
    strncpy(self->data.CurrencyID, buf, sizeof(self->data.CurrencyID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcQrySecAgentACIDMapField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_BrokerID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_UserID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_UserID, (char *)"UserID", NULL},
    ///资金账户 
    {(char *)"AccountID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_AccountID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_AccountID, (char *)"AccountID", NULL},
    ///币种 
    {(char *)"CurrencyID", (getter)PyCThostFtdcQrySecAgentACIDMapField_get_CurrencyID, (setter)PyCThostFtdcQrySecAgentACIDMapField_set_CurrencyID, (char *)"CurrencyID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcQrySecAgentACIDMapFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcQrySecAgentACIDMapField",	/* tp_name */
	sizeof(PyCThostFtdcQrySecAgentACIDMapField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcQrySecAgentACIDMapField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcQrySecAgentACIDMapField_repr,   /* tp_repr */
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
	"CThostFtdcQrySecAgentACIDMapField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcQrySecAgentACIDMapField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcQrySecAgentACIDMapField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcQrySecAgentACIDMapField_new,       /* tp_new */
};

int PyCThostFtdcQrySecAgentACIDMapFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcQrySecAgentACIDMapField  */
	if (PyType_Ready(&PyCThostFtdcQrySecAgentACIDMapFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcQrySecAgentACIDMapField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcQrySecAgentACIDMapFieldType);
    if( PyModule_AddObject(module, "CThostFtdcQrySecAgentACIDMapField", (PyObject *)&PyCThostFtdcQrySecAgentACIDMapFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQrySecAgentACIDMapField to module");
        Py_DECREF(&PyCThostFtdcQrySecAgentACIDMapFieldType);
		return -1;
    }

    return 0;
}
