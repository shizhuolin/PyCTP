
#include "PyCThostFtdcManualSyncBrokerUserOTPField.h"

///手工同步用户动态令牌

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcManualSyncBrokerUserOTPField *self = (PyCThostFtdcManualSyncBrokerUserOTPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcManualSyncBrokerUserOTPField_init(PyCThostFtdcManualSyncBrokerUserOTPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "OTPType", "FirstOTP", "SecondOTP",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ManualSyncBrokerUserOTPField_BrokerID = NULL;
    Py_ssize_t ManualSyncBrokerUserOTPField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ManualSyncBrokerUserOTPField_UserID = NULL;
    Py_ssize_t ManualSyncBrokerUserOTPField_UserID_len = 0;
            
    ///动态令牌类型
    // TThostFtdcOTPTypeType char
    char ManualSyncBrokerUserOTPField_OTPType = 0;
            
    ///第一个动态密码
    // TThostFtdcPasswordType char[41]
    const char *ManualSyncBrokerUserOTPField_FirstOTP = NULL;
    Py_ssize_t ManualSyncBrokerUserOTPField_FirstOTP_len = 0;
            
    ///第二个动态密码
    // TThostFtdcPasswordType char[41]
    const char *ManualSyncBrokerUserOTPField_SecondOTP = NULL;
    Py_ssize_t ManualSyncBrokerUserOTPField_SecondOTP_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#cs#s#", (char **)kwlist
#endif

        , &ManualSyncBrokerUserOTPField_BrokerID, &ManualSyncBrokerUserOTPField_BrokerID_len 
        , &ManualSyncBrokerUserOTPField_UserID, &ManualSyncBrokerUserOTPField_UserID_len 
        , &ManualSyncBrokerUserOTPField_OTPType 
        , &ManualSyncBrokerUserOTPField_FirstOTP, &ManualSyncBrokerUserOTPField_FirstOTP_len 
        , &ManualSyncBrokerUserOTPField_SecondOTP, &ManualSyncBrokerUserOTPField_SecondOTP_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ManualSyncBrokerUserOTPField_BrokerID != NULL ) {
        if(ManualSyncBrokerUserOTPField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ManualSyncBrokerUserOTPField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ManualSyncBrokerUserOTPField_BrokerID, ManualSyncBrokerUserOTPField_BrokerID_len);        
        strncpy(self->data.BrokerID, ManualSyncBrokerUserOTPField_BrokerID, sizeof(self->data.BrokerID) );
        ManualSyncBrokerUserOTPField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ManualSyncBrokerUserOTPField_UserID != NULL ) {
        if(ManualSyncBrokerUserOTPField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ManualSyncBrokerUserOTPField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ManualSyncBrokerUserOTPField_UserID, ManualSyncBrokerUserOTPField_UserID_len);        
        strncpy(self->data.UserID, ManualSyncBrokerUserOTPField_UserID, sizeof(self->data.UserID) );
        ManualSyncBrokerUserOTPField_UserID = NULL;
    }
            
    ///动态令牌类型
    // TThostFtdcOTPTypeType char
    self->data.OTPType = ManualSyncBrokerUserOTPField_OTPType;
            
    ///第一个动态密码
    // TThostFtdcPasswordType char[41]
    if( ManualSyncBrokerUserOTPField_FirstOTP != NULL ) {
        if(ManualSyncBrokerUserOTPField_FirstOTP_len > (Py_ssize_t)sizeof(self->data.FirstOTP)) {
            PyErr_Format(PyExc_ValueError, "FirstOTP too long: length=%zd (max allowed is %zd)", ManualSyncBrokerUserOTPField_FirstOTP_len, (Py_ssize_t)sizeof(self->data.FirstOTP));
            return -1;
        }
        // memset(self->data.FirstOTP, 0, sizeof(self->data.FirstOTP));
        // memcpy(self->data.FirstOTP, ManualSyncBrokerUserOTPField_FirstOTP, ManualSyncBrokerUserOTPField_FirstOTP_len);        
        strncpy(self->data.FirstOTP, ManualSyncBrokerUserOTPField_FirstOTP, sizeof(self->data.FirstOTP) );
        ManualSyncBrokerUserOTPField_FirstOTP = NULL;
    }
            
    ///第二个动态密码
    // TThostFtdcPasswordType char[41]
    if( ManualSyncBrokerUserOTPField_SecondOTP != NULL ) {
        if(ManualSyncBrokerUserOTPField_SecondOTP_len > (Py_ssize_t)sizeof(self->data.SecondOTP)) {
            PyErr_Format(PyExc_ValueError, "SecondOTP too long: length=%zd (max allowed is %zd)", ManualSyncBrokerUserOTPField_SecondOTP_len, (Py_ssize_t)sizeof(self->data.SecondOTP));
            return -1;
        }
        // memset(self->data.SecondOTP, 0, sizeof(self->data.SecondOTP));
        // memcpy(self->data.SecondOTP, ManualSyncBrokerUserOTPField_SecondOTP, ManualSyncBrokerUserOTPField_SecondOTP_len);        
        strncpy(self->data.SecondOTP, ManualSyncBrokerUserOTPField_SecondOTP, sizeof(self->data.SecondOTP) );
        ManualSyncBrokerUserOTPField_SecondOTP = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcManualSyncBrokerUserOTPField_dealloc(PyCThostFtdcManualSyncBrokerUserOTPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_repr(PyCThostFtdcManualSyncBrokerUserOTPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:c,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"OTPType", self->data.OTPType 
        ,"FirstOTP", self->data.FirstOTP//, (Py_ssize_t)sizeof(self->data.FirstOTP) 
        ,"SecondOTP", self->data.SecondOTP//, (Py_ssize_t)sizeof(self->data.SecondOTP) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcManualSyncBrokerUserOTPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_BrokerID(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcManualSyncBrokerUserOTPField_set_BrokerID(PyCThostFtdcManualSyncBrokerUserOTPField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_UserID(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcManualSyncBrokerUserOTPField_set_UserID(PyCThostFtdcManualSyncBrokerUserOTPField *self, PyObject* val, void *closure) {
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
            
///动态令牌类型
// TThostFtdcOTPTypeType char
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_OTPType(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OTPType), 1);
}

///动态令牌类型
// TThostFtdcOTPTypeType char
static int PyCThostFtdcManualSyncBrokerUserOTPField_set_OTPType(PyCThostFtdcManualSyncBrokerUserOTPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OTPType Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OTPType)) {
        PyErr_SetString(PyExc_ValueError, "OTPType must be equal 1 bytes");
        return -1;
    }
    self->data.OTPType = *buf;
    return 0;
}
            
///第一个动态密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_FirstOTP(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FirstOTP, (Py_ssize_t)sizeof(self->data.FirstOTP));
    return PyBytes_FromString(self->data.FirstOTP);
}

///第一个动态密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcManualSyncBrokerUserOTPField_set_FirstOTP(PyCThostFtdcManualSyncBrokerUserOTPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FirstOTP Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FirstOTP)) {
        PyErr_SetString(PyExc_ValueError, "FirstOTP must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.FirstOTP, 0, sizeof(self->data.FirstOTP));
    // memcpy(self->data.FirstOTP, buf, len);
    strncpy(self->data.FirstOTP, buf, sizeof(self->data.FirstOTP));
    return 0;
}
            
///第二个动态密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcManualSyncBrokerUserOTPField_get_SecondOTP(PyCThostFtdcManualSyncBrokerUserOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SecondOTP, (Py_ssize_t)sizeof(self->data.SecondOTP));
    return PyBytes_FromString(self->data.SecondOTP);
}

///第二个动态密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcManualSyncBrokerUserOTPField_set_SecondOTP(PyCThostFtdcManualSyncBrokerUserOTPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SecondOTP Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SecondOTP)) {
        PyErr_SetString(PyExc_ValueError, "SecondOTP must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.SecondOTP, 0, sizeof(self->data.SecondOTP));
    // memcpy(self->data.SecondOTP, buf, len);
    strncpy(self->data.SecondOTP, buf, sizeof(self->data.SecondOTP));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcManualSyncBrokerUserOTPField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_BrokerID, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_UserID, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_UserID, (char *)"UserID", NULL},
    ///动态令牌类型 
    {(char *)"OTPType", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_OTPType, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_OTPType, (char *)"OTPType", NULL},
    ///第一个动态密码 
    {(char *)"FirstOTP", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_FirstOTP, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_FirstOTP, (char *)"FirstOTP", NULL},
    ///第二个动态密码 
    {(char *)"SecondOTP", (getter)PyCThostFtdcManualSyncBrokerUserOTPField_get_SecondOTP, (setter)PyCThostFtdcManualSyncBrokerUserOTPField_set_SecondOTP, (char *)"SecondOTP", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcManualSyncBrokerUserOTPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcManualSyncBrokerUserOTPField",	/* tp_name */
	sizeof(PyCThostFtdcManualSyncBrokerUserOTPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcManualSyncBrokerUserOTPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcManualSyncBrokerUserOTPField_repr,   /* tp_repr */
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
	"CThostFtdcManualSyncBrokerUserOTPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcManualSyncBrokerUserOTPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcManualSyncBrokerUserOTPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcManualSyncBrokerUserOTPField_new,       /* tp_new */
};

int PyCThostFtdcManualSyncBrokerUserOTPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcManualSyncBrokerUserOTPField  */
	if (PyType_Ready(&PyCThostFtdcManualSyncBrokerUserOTPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcManualSyncBrokerUserOTPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcManualSyncBrokerUserOTPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcManualSyncBrokerUserOTPField", (PyObject *)&PyCThostFtdcManualSyncBrokerUserOTPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcManualSyncBrokerUserOTPField to module");
        Py_DECREF(&PyCThostFtdcManualSyncBrokerUserOTPFieldType);
		return -1;
    }

    return 0;
}
