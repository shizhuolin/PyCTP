
#include "PyCThostFtdcAuthUserIDField.h"

///终端用户绑定信息

static PyObject *PyCThostFtdcAuthUserIDField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAuthUserIDField *self = (PyCThostFtdcAuthUserIDField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcAuthUserIDField_init(PyCThostFtdcAuthUserIDField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AppID", "UserID", "AuthType",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *AuthUserIDField_BrokerID = NULL;
    Py_ssize_t AuthUserIDField_BrokerID_len = 0;
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *AuthUserIDField_AppID = NULL;
    Py_ssize_t AuthUserIDField_AppID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *AuthUserIDField_UserID = NULL;
    Py_ssize_t AuthUserIDField_UserID_len = 0;
            
    ///校验类型
    // TThostFtdcAuthTypeType char
    char AuthUserIDField_AuthType = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#c", (char **)kwlist
#endif

        , &AuthUserIDField_BrokerID, &AuthUserIDField_BrokerID_len 
        , &AuthUserIDField_AppID, &AuthUserIDField_AppID_len 
        , &AuthUserIDField_UserID, &AuthUserIDField_UserID_len 
        , &AuthUserIDField_AuthType 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( AuthUserIDField_BrokerID != NULL ) {
        if(AuthUserIDField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", AuthUserIDField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, AuthUserIDField_BrokerID, AuthUserIDField_BrokerID_len);        
        strncpy(self->data.BrokerID, AuthUserIDField_BrokerID, sizeof(self->data.BrokerID) );
        AuthUserIDField_BrokerID = NULL;
    }
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( AuthUserIDField_AppID != NULL ) {
        if(AuthUserIDField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", AuthUserIDField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
            return -1;
        }
        // memset(self->data.AppID, 0, sizeof(self->data.AppID));
        // memcpy(self->data.AppID, AuthUserIDField_AppID, AuthUserIDField_AppID_len);        
        strncpy(self->data.AppID, AuthUserIDField_AppID, sizeof(self->data.AppID) );
        AuthUserIDField_AppID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( AuthUserIDField_UserID != NULL ) {
        if(AuthUserIDField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", AuthUserIDField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, AuthUserIDField_UserID, AuthUserIDField_UserID_len);        
        strncpy(self->data.UserID, AuthUserIDField_UserID, sizeof(self->data.UserID) );
        AuthUserIDField_UserID = NULL;
    }
            
    ///校验类型
    // TThostFtdcAuthTypeType char
    self->data.AuthType = AuthUserIDField_AuthType;
            

    return 0;
}

static void PyCThostFtdcAuthUserIDField_dealloc(PyCThostFtdcAuthUserIDField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAuthUserIDField_repr(PyCThostFtdcAuthUserIDField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AppID", self->data.AppID//, (Py_ssize_t)sizeof(self->data.AppID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"AuthType", self->data.AuthType 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAuthUserIDField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcAuthUserIDField_get_BrokerID(PyCThostFtdcAuthUserIDField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcAuthUserIDField_set_BrokerID(PyCThostFtdcAuthUserIDField *self, PyObject* val, void *closure) {
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
            
///App代码
// TThostFtdcAppIDType char[33]
static PyObject *PyCThostFtdcAuthUserIDField_get_AppID(PyCThostFtdcAuthUserIDField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AppID, (Py_ssize_t)sizeof(self->data.AppID));
    return PyBytes_FromString(self->data.AppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcAuthUserIDField_set_AppID(PyCThostFtdcAuthUserIDField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.AppID, 0, sizeof(self->data.AppID));
    // memcpy(self->data.AppID, buf, len);
    strncpy(self->data.AppID, buf, sizeof(self->data.AppID));
    return 0;
}
            
///用户代码
// TThostFtdcUserIDType char[16]
static PyObject *PyCThostFtdcAuthUserIDField_get_UserID(PyCThostFtdcAuthUserIDField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcAuthUserIDField_set_UserID(PyCThostFtdcAuthUserIDField *self, PyObject* val, void *closure) {
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
            
///校验类型
// TThostFtdcAuthTypeType char
static PyObject *PyCThostFtdcAuthUserIDField_get_AuthType(PyCThostFtdcAuthUserIDField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AuthType), 1);
}

///校验类型
// TThostFtdcAuthTypeType char
static int PyCThostFtdcAuthUserIDField_set_AuthType(PyCThostFtdcAuthUserIDField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AuthType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AuthType)) {
        PyErr_SetString(PyExc_ValueError, "AuthType must be equal 1 bytes");
        return -1;
    }
    self->data.AuthType = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcAuthUserIDField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcAuthUserIDField_get_BrokerID, (setter)PyCThostFtdcAuthUserIDField_set_BrokerID, (char *)"BrokerID", NULL},
    ///App代码 
    {(char *)"AppID", (getter)PyCThostFtdcAuthUserIDField_get_AppID, (setter)PyCThostFtdcAuthUserIDField_set_AppID, (char *)"AppID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcAuthUserIDField_get_UserID, (setter)PyCThostFtdcAuthUserIDField_set_UserID, (char *)"UserID", NULL},
    ///校验类型 
    {(char *)"AuthType", (getter)PyCThostFtdcAuthUserIDField_get_AuthType, (setter)PyCThostFtdcAuthUserIDField_set_AuthType, (char *)"AuthType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAuthUserIDFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAuthUserIDField",	/* tp_name */
	sizeof(PyCThostFtdcAuthUserIDField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAuthUserIDField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAuthUserIDField_repr,   /* tp_repr */
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
	"CThostFtdcAuthUserIDField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAuthUserIDField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAuthUserIDField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAuthUserIDField_new,       /* tp_new */
};

int PyCThostFtdcAuthUserIDFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAuthUserIDField  */
	if (PyType_Ready(&PyCThostFtdcAuthUserIDFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAuthUserIDField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAuthUserIDFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAuthUserIDField", (PyObject *)&PyCThostFtdcAuthUserIDFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAuthUserIDField to module");
        Py_DECREF(&PyCThostFtdcAuthUserIDFieldType);
		return -1;
    }

    return 0;
}
