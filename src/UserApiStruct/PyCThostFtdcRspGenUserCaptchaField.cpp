
#include "PyCThostFtdcRspGenUserCaptchaField.h"

///生成的图片验证码信息

static PyObject *PyCThostFtdcRspGenUserCaptchaField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcRspGenUserCaptchaField *self = (PyCThostFtdcRspGenUserCaptchaField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcRspGenUserCaptchaField_init(PyCThostFtdcRspGenUserCaptchaField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "CaptchaInfoLen", "CaptchaInfo",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *RspGenUserCaptchaField_BrokerID = NULL;
    Py_ssize_t RspGenUserCaptchaField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *RspGenUserCaptchaField_UserID = NULL;
    Py_ssize_t RspGenUserCaptchaField_UserID_len = 0;
            
    ///图片信息长度
    // TThostFtdcCaptchaInfoLenType int
    int RspGenUserCaptchaField_CaptchaInfoLen = 0;
        
    ///图片信息
    // TThostFtdcCaptchaInfoType char[2561]
    const char *RspGenUserCaptchaField_CaptchaInfo = NULL;
    Py_ssize_t RspGenUserCaptchaField_CaptchaInfo_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#", (char **)kwlist
#endif

        , &RspGenUserCaptchaField_BrokerID, &RspGenUserCaptchaField_BrokerID_len 
        , &RspGenUserCaptchaField_UserID, &RspGenUserCaptchaField_UserID_len 
        , &RspGenUserCaptchaField_CaptchaInfoLen 
        , &RspGenUserCaptchaField_CaptchaInfo, &RspGenUserCaptchaField_CaptchaInfo_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( RspGenUserCaptchaField_BrokerID != NULL ) {
        if(RspGenUserCaptchaField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", RspGenUserCaptchaField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, RspGenUserCaptchaField_BrokerID, RspGenUserCaptchaField_BrokerID_len);        
        strncpy(self->data.BrokerID, RspGenUserCaptchaField_BrokerID, sizeof(self->data.BrokerID) );
        RspGenUserCaptchaField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( RspGenUserCaptchaField_UserID != NULL ) {
        if(RspGenUserCaptchaField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", RspGenUserCaptchaField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, RspGenUserCaptchaField_UserID, RspGenUserCaptchaField_UserID_len);        
        strncpy(self->data.UserID, RspGenUserCaptchaField_UserID, sizeof(self->data.UserID) );
        RspGenUserCaptchaField_UserID = NULL;
    }
            
    ///图片信息长度
    // TThostFtdcCaptchaInfoLenType int
    self->data.CaptchaInfoLen = RspGenUserCaptchaField_CaptchaInfoLen;
        
    ///图片信息
    // TThostFtdcCaptchaInfoType char[2561]
    if( RspGenUserCaptchaField_CaptchaInfo != NULL ) {
        if(RspGenUserCaptchaField_CaptchaInfo_len > (Py_ssize_t)sizeof(self->data.CaptchaInfo)) {
            PyErr_Format(PyExc_ValueError, "CaptchaInfo too long: length=%zd (max allowed is %zd)", RspGenUserCaptchaField_CaptchaInfo_len, (Py_ssize_t)sizeof(self->data.CaptchaInfo));
            return -1;
        }
        // memset(self->data.CaptchaInfo, 0, sizeof(self->data.CaptchaInfo));
        // memcpy(self->data.CaptchaInfo, RspGenUserCaptchaField_CaptchaInfo, RspGenUserCaptchaField_CaptchaInfo_len);        
        strncpy(self->data.CaptchaInfo, RspGenUserCaptchaField_CaptchaInfo, sizeof(self->data.CaptchaInfo) );
        RspGenUserCaptchaField_CaptchaInfo = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcRspGenUserCaptchaField_dealloc(PyCThostFtdcRspGenUserCaptchaField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcRspGenUserCaptchaField_repr(PyCThostFtdcRspGenUserCaptchaField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"CaptchaInfoLen", self->data.CaptchaInfoLen 
        ,"CaptchaInfo", self->data.CaptchaInfo//, (Py_ssize_t)sizeof(self->data.CaptchaInfo) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcRspGenUserCaptchaField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcRspGenUserCaptchaField_get_BrokerID(PyCThostFtdcRspGenUserCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcRspGenUserCaptchaField_set_BrokerID(PyCThostFtdcRspGenUserCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcRspGenUserCaptchaField_get_UserID(PyCThostFtdcRspGenUserCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcRspGenUserCaptchaField_set_UserID(PyCThostFtdcRspGenUserCaptchaField *self, PyObject* val, void *closure) {
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
            
///图片信息长度
// TThostFtdcCaptchaInfoLenType int
static PyObject *PyCThostFtdcRspGenUserCaptchaField_get_CaptchaInfoLen(PyCThostFtdcRspGenUserCaptchaField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.CaptchaInfoLen);
#else
    return PyInt_FromLong(self->data.CaptchaInfoLen);
#endif
}

///图片信息长度
// TThostFtdcCaptchaInfoLenType int
static int PyCThostFtdcRspGenUserCaptchaField_set_CaptchaInfoLen(PyCThostFtdcRspGenUserCaptchaField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CaptchaInfoLen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CaptchaInfoLen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the CaptchaInfoLen value out of range for C int");
        return -1;
    }
    self->data.CaptchaInfoLen = (int)buf;
    return 0;
}
        
///图片信息
// TThostFtdcCaptchaInfoType char[2561]
static PyObject *PyCThostFtdcRspGenUserCaptchaField_get_CaptchaInfo(PyCThostFtdcRspGenUserCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CaptchaInfo, (Py_ssize_t)sizeof(self->data.CaptchaInfo));
    return PyBytes_FromString(self->data.CaptchaInfo);
}

///图片信息
// TThostFtdcCaptchaInfoType char[2561]
static int PyCThostFtdcRspGenUserCaptchaField_set_CaptchaInfo(PyCThostFtdcRspGenUserCaptchaField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CaptchaInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CaptchaInfo)) {
        PyErr_SetString(PyExc_ValueError, "CaptchaInfo must be less than 2561 bytes");
        return -1;
    }
    // memset(self->data.CaptchaInfo, 0, sizeof(self->data.CaptchaInfo));
    // memcpy(self->data.CaptchaInfo, buf, len);
    strncpy(self->data.CaptchaInfo, buf, sizeof(self->data.CaptchaInfo));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcRspGenUserCaptchaField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcRspGenUserCaptchaField_get_BrokerID, (setter)PyCThostFtdcRspGenUserCaptchaField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcRspGenUserCaptchaField_get_UserID, (setter)PyCThostFtdcRspGenUserCaptchaField_set_UserID, (char *)"UserID", NULL},
    ///图片信息长度 
    {(char *)"CaptchaInfoLen", (getter)PyCThostFtdcRspGenUserCaptchaField_get_CaptchaInfoLen, (setter)PyCThostFtdcRspGenUserCaptchaField_set_CaptchaInfoLen, (char *)"CaptchaInfoLen", NULL},
    ///图片信息 
    {(char *)"CaptchaInfo", (getter)PyCThostFtdcRspGenUserCaptchaField_get_CaptchaInfo, (setter)PyCThostFtdcRspGenUserCaptchaField_set_CaptchaInfo, (char *)"CaptchaInfo", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcRspGenUserCaptchaFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcRspGenUserCaptchaField",	/* tp_name */
	sizeof(PyCThostFtdcRspGenUserCaptchaField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcRspGenUserCaptchaField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcRspGenUserCaptchaField_repr,   /* tp_repr */
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
	"CThostFtdcRspGenUserCaptchaField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcRspGenUserCaptchaField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcRspGenUserCaptchaField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcRspGenUserCaptchaField_new,       /* tp_new */
};

int PyCThostFtdcRspGenUserCaptchaFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcRspGenUserCaptchaField  */
	if (PyType_Ready(&PyCThostFtdcRspGenUserCaptchaFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcRspGenUserCaptchaField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcRspGenUserCaptchaFieldType);
    if( PyModule_AddObject(module, "CThostFtdcRspGenUserCaptchaField", (PyObject *)&PyCThostFtdcRspGenUserCaptchaFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcRspGenUserCaptchaField to module");
        Py_DECREF(&PyCThostFtdcRspGenUserCaptchaFieldType);
		return -1;
    }

    return 0;
}
