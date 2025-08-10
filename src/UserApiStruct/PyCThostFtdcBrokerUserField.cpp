
#include "PyCThostFtdcBrokerUserField.h"

///经纪公司用户

static PyObject *PyCThostFtdcBrokerUserField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserField *self = (PyCThostFtdcBrokerUserField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserField_init(PyCThostFtdcBrokerUserField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "UserName", "UserType", "IsActive", "IsUsingOTP", "IsAuthForce",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerUserField_BrokerID = NULL;
    Py_ssize_t BrokerUserField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *BrokerUserField_UserID = NULL;
    Py_ssize_t BrokerUserField_UserID_len = 0;
            
    ///用户名称
    // TThostFtdcUserNameType char[81]
    const char *BrokerUserField_UserName = NULL;
    Py_ssize_t BrokerUserField_UserName_len = 0;
            
    ///用户类型
    // TThostFtdcUserTypeType char
    char BrokerUserField_UserType = 0;
            
    ///是否活跃
    // TThostFtdcBoolType int
    int BrokerUserField_IsActive = 0;
        
    ///是否使用令牌
    // TThostFtdcBoolType int
    int BrokerUserField_IsUsingOTP = 0;
        
    ///是否强制终端认证
    // TThostFtdcBoolType int
    int BrokerUserField_IsAuthForce = 0;
        

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#ciii", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#ciii", (char **)kwlist
#endif

        , &BrokerUserField_BrokerID, &BrokerUserField_BrokerID_len 
        , &BrokerUserField_UserID, &BrokerUserField_UserID_len 
        , &BrokerUserField_UserName, &BrokerUserField_UserName_len 
        , &BrokerUserField_UserType 
        , &BrokerUserField_IsActive 
        , &BrokerUserField_IsUsingOTP 
        , &BrokerUserField_IsAuthForce 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerUserField_BrokerID != NULL ) {
        if(BrokerUserField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerUserField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerUserField_BrokerID, BrokerUserField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerUserField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerUserField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( BrokerUserField_UserID != NULL ) {
        if(BrokerUserField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", BrokerUserField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, BrokerUserField_UserID, BrokerUserField_UserID_len);        
        strncpy(self->data.UserID, BrokerUserField_UserID, sizeof(self->data.UserID) );
        BrokerUserField_UserID = NULL;
    }
            
    ///用户名称
    // TThostFtdcUserNameType char[81]
    if( BrokerUserField_UserName != NULL ) {
        if(BrokerUserField_UserName_len > (Py_ssize_t)sizeof(self->data.UserName)) {
            PyErr_Format(PyExc_ValueError, "UserName too long: length=%zd (max allowed is %zd)", BrokerUserField_UserName_len, (Py_ssize_t)sizeof(self->data.UserName));
            return -1;
        }
        // memset(self->data.UserName, 0, sizeof(self->data.UserName));
        // memcpy(self->data.UserName, BrokerUserField_UserName, BrokerUserField_UserName_len);        
        strncpy(self->data.UserName, BrokerUserField_UserName, sizeof(self->data.UserName) );
        BrokerUserField_UserName = NULL;
    }
            
    ///用户类型
    // TThostFtdcUserTypeType char
    self->data.UserType = BrokerUserField_UserType;
            
    ///是否活跃
    // TThostFtdcBoolType int
    self->data.IsActive = BrokerUserField_IsActive;
        
    ///是否使用令牌
    // TThostFtdcBoolType int
    self->data.IsUsingOTP = BrokerUserField_IsUsingOTP;
        
    ///是否强制终端认证
    // TThostFtdcBoolType int
    self->data.IsAuthForce = BrokerUserField_IsAuthForce;
        

    return 0;
}

static void PyCThostFtdcBrokerUserField_dealloc(PyCThostFtdcBrokerUserField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserField_repr(PyCThostFtdcBrokerUserField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:c,s:i,s:i,s:i}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:c,s:i,s:i,s:i}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"UserName", self->data.UserName//, (Py_ssize_t)sizeof(self->data.UserName) 
        ,"UserType", self->data.UserType 
        ,"IsActive", self->data.IsActive 
        ,"IsUsingOTP", self->data.IsUsingOTP 
        ,"IsAuthForce", self->data.IsAuthForce 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerUserField_get_BrokerID(PyCThostFtdcBrokerUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerUserField_set_BrokerID(PyCThostFtdcBrokerUserField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBrokerUserField_get_UserID(PyCThostFtdcBrokerUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcBrokerUserField_set_UserID(PyCThostFtdcBrokerUserField *self, PyObject* val, void *closure) {
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
            
///用户名称
// TThostFtdcUserNameType char[81]
static PyObject *PyCThostFtdcBrokerUserField_get_UserName(PyCThostFtdcBrokerUserField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserName, (Py_ssize_t)sizeof(self->data.UserName));
    return PyBytes_FromString(self->data.UserName);
}

///用户名称
// TThostFtdcUserNameType char[81]
static int PyCThostFtdcBrokerUserField_set_UserName(PyCThostFtdcBrokerUserField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserName)) {
        PyErr_SetString(PyExc_ValueError, "UserName must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.UserName, 0, sizeof(self->data.UserName));
    // memcpy(self->data.UserName, buf, len);
    strncpy(self->data.UserName, buf, sizeof(self->data.UserName));
    return 0;
}
            
///用户类型
// TThostFtdcUserTypeType char
static PyObject *PyCThostFtdcBrokerUserField_get_UserType(PyCThostFtdcBrokerUserField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.UserType), 1);
}

///用户类型
// TThostFtdcUserTypeType char
static int PyCThostFtdcBrokerUserField_set_UserType(PyCThostFtdcBrokerUserField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.UserType)) {
        PyErr_SetString(PyExc_ValueError, "UserType must be equal 1 bytes");
        return -1;
    }
    self->data.UserType = *buf;
    return 0;
}
            
///是否活跃
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcBrokerUserField_get_IsActive(PyCThostFtdcBrokerUserField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsActive);
#else
    return PyInt_FromLong(self->data.IsActive);
#endif
}

///是否活跃
// TThostFtdcBoolType int
static int PyCThostFtdcBrokerUserField_set_IsActive(PyCThostFtdcBrokerUserField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsActive Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsActive value out of range for C int");
        return -1;
    }
    self->data.IsActive = (int)buf;
    return 0;
}
        
///是否使用令牌
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcBrokerUserField_get_IsUsingOTP(PyCThostFtdcBrokerUserField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsUsingOTP);
#else
    return PyInt_FromLong(self->data.IsUsingOTP);
#endif
}

///是否使用令牌
// TThostFtdcBoolType int
static int PyCThostFtdcBrokerUserField_set_IsUsingOTP(PyCThostFtdcBrokerUserField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsUsingOTP Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsUsingOTP Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsUsingOTP value out of range for C int");
        return -1;
    }
    self->data.IsUsingOTP = (int)buf;
    return 0;
}
        
///是否强制终端认证
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcBrokerUserField_get_IsAuthForce(PyCThostFtdcBrokerUserField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsAuthForce);
#else
    return PyInt_FromLong(self->data.IsAuthForce);
#endif
}

///是否强制终端认证
// TThostFtdcBoolType int
static int PyCThostFtdcBrokerUserField_set_IsAuthForce(PyCThostFtdcBrokerUserField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAuthForce Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsAuthForce Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsAuthForce value out of range for C int");
        return -1;
    }
    self->data.IsAuthForce = (int)buf;
    return 0;
}
        

static PyGetSetDef PyCThostFtdcBrokerUserField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserField_get_BrokerID, (setter)PyCThostFtdcBrokerUserField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcBrokerUserField_get_UserID, (setter)PyCThostFtdcBrokerUserField_set_UserID, (char *)"UserID", NULL},
    ///用户名称 
    {(char *)"UserName", (getter)PyCThostFtdcBrokerUserField_get_UserName, (setter)PyCThostFtdcBrokerUserField_set_UserName, (char *)"UserName", NULL},
    ///用户类型 
    {(char *)"UserType", (getter)PyCThostFtdcBrokerUserField_get_UserType, (setter)PyCThostFtdcBrokerUserField_set_UserType, (char *)"UserType", NULL},
    ///是否活跃 
    {(char *)"IsActive", (getter)PyCThostFtdcBrokerUserField_get_IsActive, (setter)PyCThostFtdcBrokerUserField_set_IsActive, (char *)"IsActive", NULL},
    ///是否使用令牌 
    {(char *)"IsUsingOTP", (getter)PyCThostFtdcBrokerUserField_get_IsUsingOTP, (setter)PyCThostFtdcBrokerUserField_set_IsUsingOTP, (char *)"IsUsingOTP", NULL},
    ///是否强制终端认证 
    {(char *)"IsAuthForce", (getter)PyCThostFtdcBrokerUserField_get_IsAuthForce, (setter)PyCThostFtdcBrokerUserField_set_IsAuthForce, (char *)"IsAuthForce", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserField", (PyObject *)&PyCThostFtdcBrokerUserFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserFieldType);
		return -1;
    }

    return 0;
}
