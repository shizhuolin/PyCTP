
#include "PyCThostFtdcAppAuthenticationCodeField.h"

///App客户端认证码

static PyObject *PyCThostFtdcAppAuthenticationCodeField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcAppAuthenticationCodeField *self = (PyCThostFtdcAppAuthenticationCodeField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcAppAuthenticationCodeField_init(PyCThostFtdcAppAuthenticationCodeField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "AppID", "AuthCode", "PreAuthCode", "AppType",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *AppAuthenticationCodeField_BrokerID = NULL;
    Py_ssize_t AppAuthenticationCodeField_BrokerID_len = 0;
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *AppAuthenticationCodeField_AppID = NULL;
    Py_ssize_t AppAuthenticationCodeField_AppID_len = 0;
            
    ///认证码
    // TThostFtdcAuthCodeType char[17]
    const char *AppAuthenticationCodeField_AuthCode = NULL;
    Py_ssize_t AppAuthenticationCodeField_AuthCode_len = 0;
            
    ///旧认证码
    // TThostFtdcAuthCodeType char[17]
    const char *AppAuthenticationCodeField_PreAuthCode = NULL;
    Py_ssize_t AppAuthenticationCodeField_PreAuthCode_len = 0;
            
    ///App类型
    // TThostFtdcAppTypeType char
    char AppAuthenticationCodeField_AppType = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#c", (char **)kwlist
#endif

        , &AppAuthenticationCodeField_BrokerID, &AppAuthenticationCodeField_BrokerID_len 
        , &AppAuthenticationCodeField_AppID, &AppAuthenticationCodeField_AppID_len 
        , &AppAuthenticationCodeField_AuthCode, &AppAuthenticationCodeField_AuthCode_len 
        , &AppAuthenticationCodeField_PreAuthCode, &AppAuthenticationCodeField_PreAuthCode_len 
        , &AppAuthenticationCodeField_AppType 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( AppAuthenticationCodeField_BrokerID != NULL ) {
        if(AppAuthenticationCodeField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", AppAuthenticationCodeField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, AppAuthenticationCodeField_BrokerID, AppAuthenticationCodeField_BrokerID_len);        
        strncpy(self->data.BrokerID, AppAuthenticationCodeField_BrokerID, sizeof(self->data.BrokerID) );
        AppAuthenticationCodeField_BrokerID = NULL;
    }
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( AppAuthenticationCodeField_AppID != NULL ) {
        if(AppAuthenticationCodeField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", AppAuthenticationCodeField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
            return -1;
        }
        // memset(self->data.AppID, 0, sizeof(self->data.AppID));
        // memcpy(self->data.AppID, AppAuthenticationCodeField_AppID, AppAuthenticationCodeField_AppID_len);        
        strncpy(self->data.AppID, AppAuthenticationCodeField_AppID, sizeof(self->data.AppID) );
        AppAuthenticationCodeField_AppID = NULL;
    }
            
    ///认证码
    // TThostFtdcAuthCodeType char[17]
    if( AppAuthenticationCodeField_AuthCode != NULL ) {
        if(AppAuthenticationCodeField_AuthCode_len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
            PyErr_Format(PyExc_ValueError, "AuthCode too long: length=%zd (max allowed is %zd)", AppAuthenticationCodeField_AuthCode_len, (Py_ssize_t)sizeof(self->data.AuthCode));
            return -1;
        }
        // memset(self->data.AuthCode, 0, sizeof(self->data.AuthCode));
        // memcpy(self->data.AuthCode, AppAuthenticationCodeField_AuthCode, AppAuthenticationCodeField_AuthCode_len);        
        strncpy(self->data.AuthCode, AppAuthenticationCodeField_AuthCode, sizeof(self->data.AuthCode) );
        AppAuthenticationCodeField_AuthCode = NULL;
    }
            
    ///旧认证码
    // TThostFtdcAuthCodeType char[17]
    if( AppAuthenticationCodeField_PreAuthCode != NULL ) {
        if(AppAuthenticationCodeField_PreAuthCode_len > (Py_ssize_t)sizeof(self->data.PreAuthCode)) {
            PyErr_Format(PyExc_ValueError, "PreAuthCode too long: length=%zd (max allowed is %zd)", AppAuthenticationCodeField_PreAuthCode_len, (Py_ssize_t)sizeof(self->data.PreAuthCode));
            return -1;
        }
        // memset(self->data.PreAuthCode, 0, sizeof(self->data.PreAuthCode));
        // memcpy(self->data.PreAuthCode, AppAuthenticationCodeField_PreAuthCode, AppAuthenticationCodeField_PreAuthCode_len);        
        strncpy(self->data.PreAuthCode, AppAuthenticationCodeField_PreAuthCode, sizeof(self->data.PreAuthCode) );
        AppAuthenticationCodeField_PreAuthCode = NULL;
    }
            
    ///App类型
    // TThostFtdcAppTypeType char
    self->data.AppType = AppAuthenticationCodeField_AppType;
            

    return 0;
}

static void PyCThostFtdcAppAuthenticationCodeField_dealloc(PyCThostFtdcAppAuthenticationCodeField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcAppAuthenticationCodeField_repr(PyCThostFtdcAppAuthenticationCodeField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"AppID", self->data.AppID//, (Py_ssize_t)sizeof(self->data.AppID) 
        ,"AuthCode", self->data.AuthCode//, (Py_ssize_t)sizeof(self->data.AuthCode) 
        ,"PreAuthCode", self->data.PreAuthCode//, (Py_ssize_t)sizeof(self->data.PreAuthCode) 
        ,"AppType", self->data.AppType 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcAppAuthenticationCodeField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcAppAuthenticationCodeField_get_BrokerID(PyCThostFtdcAppAuthenticationCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcAppAuthenticationCodeField_set_BrokerID(PyCThostFtdcAppAuthenticationCodeField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcAppAuthenticationCodeField_get_AppID(PyCThostFtdcAppAuthenticationCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AppID, (Py_ssize_t)sizeof(self->data.AppID));
    return PyBytes_FromString(self->data.AppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcAppAuthenticationCodeField_set_AppID(PyCThostFtdcAppAuthenticationCodeField *self, PyObject* val, void *closure) {
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
            
///认证码
// TThostFtdcAuthCodeType char[17]
static PyObject *PyCThostFtdcAppAuthenticationCodeField_get_AuthCode(PyCThostFtdcAppAuthenticationCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AuthCode, (Py_ssize_t)sizeof(self->data.AuthCode));
    return PyBytes_FromString(self->data.AuthCode);
}

///认证码
// TThostFtdcAuthCodeType char[17]
static int PyCThostFtdcAppAuthenticationCodeField_set_AuthCode(PyCThostFtdcAppAuthenticationCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AuthCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
        PyErr_SetString(PyExc_ValueError, "AuthCode must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.AuthCode, 0, sizeof(self->data.AuthCode));
    // memcpy(self->data.AuthCode, buf, len);
    strncpy(self->data.AuthCode, buf, sizeof(self->data.AuthCode));
    return 0;
}
            
///旧认证码
// TThostFtdcAuthCodeType char[17]
static PyObject *PyCThostFtdcAppAuthenticationCodeField_get_PreAuthCode(PyCThostFtdcAppAuthenticationCodeField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.PreAuthCode, (Py_ssize_t)sizeof(self->data.PreAuthCode));
    return PyBytes_FromString(self->data.PreAuthCode);
}

///旧认证码
// TThostFtdcAuthCodeType char[17]
static int PyCThostFtdcAppAuthenticationCodeField_set_PreAuthCode(PyCThostFtdcAppAuthenticationCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PreAuthCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PreAuthCode)) {
        PyErr_SetString(PyExc_ValueError, "PreAuthCode must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.PreAuthCode, 0, sizeof(self->data.PreAuthCode));
    // memcpy(self->data.PreAuthCode, buf, len);
    strncpy(self->data.PreAuthCode, buf, sizeof(self->data.PreAuthCode));
    return 0;
}
            
///App类型
// TThostFtdcAppTypeType char
static PyObject *PyCThostFtdcAppAuthenticationCodeField_get_AppType(PyCThostFtdcAppAuthenticationCodeField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AppType), 1);
}

///App类型
// TThostFtdcAppTypeType char
static int PyCThostFtdcAppAuthenticationCodeField_set_AppType(PyCThostFtdcAppAuthenticationCodeField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AppType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AppType)) {
        PyErr_SetString(PyExc_ValueError, "AppType must be equal 1 bytes");
        return -1;
    }
    self->data.AppType = *buf;
    return 0;
}
            

static PyGetSetDef PyCThostFtdcAppAuthenticationCodeField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcAppAuthenticationCodeField_get_BrokerID, (setter)PyCThostFtdcAppAuthenticationCodeField_set_BrokerID, (char *)"BrokerID", NULL},
    ///App代码 
    {(char *)"AppID", (getter)PyCThostFtdcAppAuthenticationCodeField_get_AppID, (setter)PyCThostFtdcAppAuthenticationCodeField_set_AppID, (char *)"AppID", NULL},
    ///认证码 
    {(char *)"AuthCode", (getter)PyCThostFtdcAppAuthenticationCodeField_get_AuthCode, (setter)PyCThostFtdcAppAuthenticationCodeField_set_AuthCode, (char *)"AuthCode", NULL},
    ///旧认证码 
    {(char *)"PreAuthCode", (getter)PyCThostFtdcAppAuthenticationCodeField_get_PreAuthCode, (setter)PyCThostFtdcAppAuthenticationCodeField_set_PreAuthCode, (char *)"PreAuthCode", NULL},
    ///App类型 
    {(char *)"AppType", (getter)PyCThostFtdcAppAuthenticationCodeField_get_AppType, (setter)PyCThostFtdcAppAuthenticationCodeField_set_AppType, (char *)"AppType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcAppAuthenticationCodeFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcAppAuthenticationCodeField",	/* tp_name */
	sizeof(PyCThostFtdcAppAuthenticationCodeField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcAppAuthenticationCodeField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcAppAuthenticationCodeField_repr,   /* tp_repr */
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
	"CThostFtdcAppAuthenticationCodeField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcAppAuthenticationCodeField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcAppAuthenticationCodeField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcAppAuthenticationCodeField_new,       /* tp_new */
};

int PyCThostFtdcAppAuthenticationCodeFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcAppAuthenticationCodeField  */
	if (PyType_Ready(&PyCThostFtdcAppAuthenticationCodeFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcAppAuthenticationCodeField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcAppAuthenticationCodeFieldType);
    if( PyModule_AddObject(module, "CThostFtdcAppAuthenticationCodeField", (PyObject *)&PyCThostFtdcAppAuthenticationCodeFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcAppAuthenticationCodeField to module");
        Py_DECREF(&PyCThostFtdcAppAuthenticationCodeFieldType);
		return -1;
    }

    return 0;
}
