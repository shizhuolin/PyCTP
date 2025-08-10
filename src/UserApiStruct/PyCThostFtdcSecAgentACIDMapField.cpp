
#include "PyCThostFtdcSecAgentACIDMapField.h"

///二级代理操作员银期权限

static PyObject *PyCThostFtdcSecAgentACIDMapField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcSecAgentACIDMapField *self = (PyCThostFtdcSecAgentACIDMapField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcSecAgentACIDMapField_init(PyCThostFtdcSecAgentACIDMapField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "AccountID", "CurrencyID", "BrokerSecAgentID",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *SecAgentACIDMapField_BrokerID = NULL;
    Py_ssize_t SecAgentACIDMapField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *SecAgentACIDMapField_UserID = NULL;
    Py_ssize_t SecAgentACIDMapField_UserID_len = 0;
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    const char *SecAgentACIDMapField_AccountID = NULL;
    Py_ssize_t SecAgentACIDMapField_AccountID_len = 0;
            
    ///币种
    // TThostFtdcCurrencyIDType char[4]
    const char *SecAgentACIDMapField_CurrencyID = NULL;
    Py_ssize_t SecAgentACIDMapField_CurrencyID_len = 0;
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    const char *SecAgentACIDMapField_BrokerSecAgentID = NULL;
    Py_ssize_t SecAgentACIDMapField_BrokerSecAgentID_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#", (char **)kwlist
#endif

        , &SecAgentACIDMapField_BrokerID, &SecAgentACIDMapField_BrokerID_len 
        , &SecAgentACIDMapField_UserID, &SecAgentACIDMapField_UserID_len 
        , &SecAgentACIDMapField_AccountID, &SecAgentACIDMapField_AccountID_len 
        , &SecAgentACIDMapField_CurrencyID, &SecAgentACIDMapField_CurrencyID_len 
        , &SecAgentACIDMapField_BrokerSecAgentID, &SecAgentACIDMapField_BrokerSecAgentID_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( SecAgentACIDMapField_BrokerID != NULL ) {
        if(SecAgentACIDMapField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", SecAgentACIDMapField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, SecAgentACIDMapField_BrokerID, SecAgentACIDMapField_BrokerID_len);        
        strncpy(self->data.BrokerID, SecAgentACIDMapField_BrokerID, sizeof(self->data.BrokerID) );
        SecAgentACIDMapField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( SecAgentACIDMapField_UserID != NULL ) {
        if(SecAgentACIDMapField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", SecAgentACIDMapField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, SecAgentACIDMapField_UserID, SecAgentACIDMapField_UserID_len);        
        strncpy(self->data.UserID, SecAgentACIDMapField_UserID, sizeof(self->data.UserID) );
        SecAgentACIDMapField_UserID = NULL;
    }
            
    ///资金账户
    // TThostFtdcAccountIDType char[13]
    if( SecAgentACIDMapField_AccountID != NULL ) {
        if(SecAgentACIDMapField_AccountID_len > (Py_ssize_t)sizeof(self->data.AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is %zd)", SecAgentACIDMapField_AccountID_len, (Py_ssize_t)sizeof(self->data.AccountID));
            return -1;
        }
        // memset(self->data.AccountID, 0, sizeof(self->data.AccountID));
        // memcpy(self->data.AccountID, SecAgentACIDMapField_AccountID, SecAgentACIDMapField_AccountID_len);        
        strncpy(self->data.AccountID, SecAgentACIDMapField_AccountID, sizeof(self->data.AccountID) );
        SecAgentACIDMapField_AccountID = NULL;
    }
            
    ///币种
    // TThostFtdcCurrencyIDType char[4]
    if( SecAgentACIDMapField_CurrencyID != NULL ) {
        if(SecAgentACIDMapField_CurrencyID_len > (Py_ssize_t)sizeof(self->data.CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is %zd)", SecAgentACIDMapField_CurrencyID_len, (Py_ssize_t)sizeof(self->data.CurrencyID));
            return -1;
        }
        // memset(self->data.CurrencyID, 0, sizeof(self->data.CurrencyID));
        // memcpy(self->data.CurrencyID, SecAgentACIDMapField_CurrencyID, SecAgentACIDMapField_CurrencyID_len);        
        strncpy(self->data.CurrencyID, SecAgentACIDMapField_CurrencyID, sizeof(self->data.CurrencyID) );
        SecAgentACIDMapField_CurrencyID = NULL;
    }
            
    ///境外中介机构资金帐号
    // TThostFtdcAccountIDType char[13]
    if( SecAgentACIDMapField_BrokerSecAgentID != NULL ) {
        if(SecAgentACIDMapField_BrokerSecAgentID_len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
            PyErr_Format(PyExc_ValueError, "BrokerSecAgentID too long: length=%zd (max allowed is %zd)", SecAgentACIDMapField_BrokerSecAgentID_len, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
            return -1;
        }
        // memset(self->data.BrokerSecAgentID, 0, sizeof(self->data.BrokerSecAgentID));
        // memcpy(self->data.BrokerSecAgentID, SecAgentACIDMapField_BrokerSecAgentID, SecAgentACIDMapField_BrokerSecAgentID_len);        
        strncpy(self->data.BrokerSecAgentID, SecAgentACIDMapField_BrokerSecAgentID, sizeof(self->data.BrokerSecAgentID) );
        SecAgentACIDMapField_BrokerSecAgentID = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcSecAgentACIDMapField_dealloc(PyCThostFtdcSecAgentACIDMapField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcSecAgentACIDMapField_repr(PyCThostFtdcSecAgentACIDMapField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"AccountID", self->data.AccountID//, (Py_ssize_t)sizeof(self->data.AccountID) 
        ,"CurrencyID", self->data.CurrencyID//, (Py_ssize_t)sizeof(self->data.CurrencyID) 
        ,"BrokerSecAgentID", self->data.BrokerSecAgentID//, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcSecAgentACIDMapField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcSecAgentACIDMapField_get_BrokerID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcSecAgentACIDMapField_set_BrokerID(PyCThostFtdcSecAgentACIDMapField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSecAgentACIDMapField_get_UserID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcSecAgentACIDMapField_set_UserID(PyCThostFtdcSecAgentACIDMapField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSecAgentACIDMapField_get_AccountID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AccountID, (Py_ssize_t)sizeof(self->data.AccountID));
    return PyBytes_FromString(self->data.AccountID);
}

///资金账户
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSecAgentACIDMapField_set_AccountID(PyCThostFtdcSecAgentACIDMapField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcSecAgentACIDMapField_get_CurrencyID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CurrencyID, (Py_ssize_t)sizeof(self->data.CurrencyID));
    return PyBytes_FromString(self->data.CurrencyID);
}

///币种
// TThostFtdcCurrencyIDType char[4]
static int PyCThostFtdcSecAgentACIDMapField_set_CurrencyID(PyCThostFtdcSecAgentACIDMapField *self, PyObject* val, void *closure) {
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
            
///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static PyObject *PyCThostFtdcSecAgentACIDMapField_get_BrokerSecAgentID(PyCThostFtdcSecAgentACIDMapField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerSecAgentID, (Py_ssize_t)sizeof(self->data.BrokerSecAgentID));
    return PyBytes_FromString(self->data.BrokerSecAgentID);
}

///境外中介机构资金帐号
// TThostFtdcAccountIDType char[13]
static int PyCThostFtdcSecAgentACIDMapField_set_BrokerSecAgentID(PyCThostFtdcSecAgentACIDMapField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerSecAgentID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerSecAgentID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerSecAgentID must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.BrokerSecAgentID, 0, sizeof(self->data.BrokerSecAgentID));
    // memcpy(self->data.BrokerSecAgentID, buf, len);
    strncpy(self->data.BrokerSecAgentID, buf, sizeof(self->data.BrokerSecAgentID));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcSecAgentACIDMapField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcSecAgentACIDMapField_get_BrokerID, (setter)PyCThostFtdcSecAgentACIDMapField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcSecAgentACIDMapField_get_UserID, (setter)PyCThostFtdcSecAgentACIDMapField_set_UserID, (char *)"UserID", NULL},
    ///资金账户 
    {(char *)"AccountID", (getter)PyCThostFtdcSecAgentACIDMapField_get_AccountID, (setter)PyCThostFtdcSecAgentACIDMapField_set_AccountID, (char *)"AccountID", NULL},
    ///币种 
    {(char *)"CurrencyID", (getter)PyCThostFtdcSecAgentACIDMapField_get_CurrencyID, (setter)PyCThostFtdcSecAgentACIDMapField_set_CurrencyID, (char *)"CurrencyID", NULL},
    ///境外中介机构资金帐号 
    {(char *)"BrokerSecAgentID", (getter)PyCThostFtdcSecAgentACIDMapField_get_BrokerSecAgentID, (setter)PyCThostFtdcSecAgentACIDMapField_set_BrokerSecAgentID, (char *)"BrokerSecAgentID", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcSecAgentACIDMapFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcSecAgentACIDMapField",	/* tp_name */
	sizeof(PyCThostFtdcSecAgentACIDMapField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcSecAgentACIDMapField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcSecAgentACIDMapField_repr,   /* tp_repr */
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
	"CThostFtdcSecAgentACIDMapField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcSecAgentACIDMapField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcSecAgentACIDMapField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcSecAgentACIDMapField_new,       /* tp_new */
};

int PyCThostFtdcSecAgentACIDMapFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcSecAgentACIDMapField  */
	if (PyType_Ready(&PyCThostFtdcSecAgentACIDMapFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcSecAgentACIDMapField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcSecAgentACIDMapFieldType);
    if( PyModule_AddObject(module, "CThostFtdcSecAgentACIDMapField", (PyObject *)&PyCThostFtdcSecAgentACIDMapFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcSecAgentACIDMapField to module");
        Py_DECREF(&PyCThostFtdcSecAgentACIDMapFieldType);
		return -1;
    }

    return 0;
}
