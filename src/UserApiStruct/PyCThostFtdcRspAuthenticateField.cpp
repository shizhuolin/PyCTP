
#include "PyCThostFtdcRspAuthenticateField.h"

///客户端认证响应

static PyObject *PyCThostFtdcRspAuthenticateField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspAuthenticateField *self = (PyCThostFtdcRspAuthenticateField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspAuthenticateField_init(PyCThostFtdcRspAuthenticateField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserProductInfo", "AppID", "AppType",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspAuthenticateField_BrokerID = NULL;
    Py_ssize_t RspAuthenticateField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *RspAuthenticateField_UserID = NULL;
    Py_ssize_t RspAuthenticateField_UserID_len = 0;
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *RspAuthenticateField_UserProductInfo = NULL;
    Py_ssize_t RspAuthenticateField_UserProductInfo_len = 0;
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *RspAuthenticateField_AppID = NULL;
    Py_ssize_t RspAuthenticateField_AppID_len = 0;
            
    ///App类型
    // TThostFtdcAppTypeType char
    char RspAuthenticateField_AppType = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#c", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#c", (char **)kwlist
#endif

        , &RspAuthenticateField_BrokerID, &RspAuthenticateField_BrokerID_len 
        , &RspAuthenticateField_UserID, &RspAuthenticateField_UserID_len 
        , &RspAuthenticateField_UserProductInfo, &RspAuthenticateField_UserProductInfo_len 
        , &RspAuthenticateField_AppID, &RspAuthenticateField_AppID_len 
        , &RspAuthenticateField_AppType 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RspAuthenticateField_BrokerID != NULL ) {
        if(RspAuthenticateField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspAuthenticateField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspAuthenticateField_BrokerID, RspAuthenticateField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspAuthenticateField_BrokerID, sizeof(self->data.BrokerID) );
        RspAuthenticateField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( RspAuthenticateField_UserID != NULL ) {
        if(RspAuthenticateField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspAuthenticateField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspAuthenticateField_UserID, RspAuthenticateField_UserID_len);        
        strncpy(self->data.UserID, RspAuthenticateField_UserID, sizeof(self->data.UserID) );
        RspAuthenticateField_UserID = NULL;
    }
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( RspAuthenticateField_UserProductInfo != NULL ) {
        if(RspAuthenticateField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", RspAuthenticateField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, RspAuthenticateField_UserProductInfo, RspAuthenticateField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, RspAuthenticateField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        RspAuthenticateField_UserProductInfo = NULL;
    }
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( RspAuthenticateField_AppID != NULL ) {
        if(RspAuthenticateField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", RspAuthenticateField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
            return -1;
        }
        // memset(self->data.AppID, 0, sizeof(self->data.AppID));
        // memcpy(self->data.AppID, RspAuthenticateField_AppID, RspAuthenticateField_AppID_len);        
        strncpy(self->data.AppID, RspAuthenticateField_AppID, sizeof(self->data.AppID) );
        RspAuthenticateField_AppID = NULL;
    }
            
    ///App类型
    // TThostFtdcAppTypeType char
    self->data.AppType = RspAuthenticateField_AppType;
            

    return 0;
}

static void PyCThostFtdcRspAuthenticateField_dealloc(PyCThostFtdcRspAuthenticateField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspAuthenticateField_repr(PyCThostFtdcRspAuthenticateField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"AppID", self->data.AppID//, (Py_ssize_t)sizeof(self->data.AppID) 
        ,"AppType", self->data.AppType 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspAuthenticateField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcRspAuthenticateField_get_BrokerID(PyCThostFtdcRspAuthenticateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspAuthenticateField_set_BrokerID(PyCThostFtdcRspAuthenticateField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspAuthenticateField_get_UserID(PyCThostFtdcRspAuthenticateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspAuthenticateField_set_UserID(PyCThostFtdcRspAuthenticateField *self, PyObject* val, void *closure) {
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
            
///用户端产品信息
// TThostFtdcProductInfoType char[11]
static PyObject *PyCThostFtdcRspAuthenticateField_get_UserProductInfo(PyCThostFtdcRspAuthenticateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcRspAuthenticateField_set_UserProductInfo(PyCThostFtdcRspAuthenticateField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
    // memcpy(self->data.UserProductInfo, buf, len);
    strncpy(self->data.UserProductInfo, buf, sizeof(self->data.UserProductInfo));
    return 0;
}
            
///App代码
// TThostFtdcAppIDType char[33]
static PyObject *PyCThostFtdcRspAuthenticateField_get_AppID(PyCThostFtdcRspAuthenticateField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AppID, (Py_ssize_t)sizeof(self->data.AppID));
    return PyBytes_FromString(self->data.AppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcRspAuthenticateField_set_AppID(PyCThostFtdcRspAuthenticateField *self, PyObject* val, void *closure) {
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
            
///App类型
// TThostFtdcAppTypeType char
static PyObject *PyCThostFtdcRspAuthenticateField_get_AppType(PyCThostFtdcRspAuthenticateField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.AppType), 1);
}

///App类型
// TThostFtdcAppTypeType char
static int PyCThostFtdcRspAuthenticateField_set_AppType(PyCThostFtdcRspAuthenticateField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcRspAuthenticateField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspAuthenticateField_get_BrokerID, (setter)PyCThostFtdcRspAuthenticateField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcRspAuthenticateField_get_UserID, (setter)PyCThostFtdcRspAuthenticateField_set_UserID, (char *)"UserID", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcRspAuthenticateField_get_UserProductInfo, (setter)PyCThostFtdcRspAuthenticateField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///App代码 
    {(char *)"AppID", (getter)PyCThostFtdcRspAuthenticateField_get_AppID, (setter)PyCThostFtdcRspAuthenticateField_set_AppID, (char *)"AppID", NULL},
    ///App类型 
    {(char *)"AppType", (getter)PyCThostFtdcRspAuthenticateField_get_AppType, (setter)PyCThostFtdcRspAuthenticateField_set_AppType, (char *)"AppType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspAuthenticateFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspAuthenticateField",	/* tp_name */
	sizeof(PyCThostFtdcRspAuthenticateField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspAuthenticateField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspAuthenticateField_repr,   /* tp_repr */
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
	"CThostFtdcRspAuthenticateField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspAuthenticateField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspAuthenticateField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspAuthenticateField_new,       /* tp_new */
};

int PyCThostFtdcRspAuthenticateFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspAuthenticateField  */
	if (PyType_Ready(&PyCThostFtdcRspAuthenticateFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspAuthenticateField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspAuthenticateFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspAuthenticateField", (PyObject *)&PyCThostFtdcRspAuthenticateFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspAuthenticateField to module");
        Py_DECREF(&PyCThostFtdcRspAuthenticateFieldType);
		return -1;
    }

    return 0;
}
