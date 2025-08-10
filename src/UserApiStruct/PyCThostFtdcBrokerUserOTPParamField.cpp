
#include "PyCThostFtdcBrokerUserOTPParamField.h"

///用户动态令牌参数

static PyObject *PyCThostFtdcBrokerUserOTPParamField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcBrokerUserOTPParamField *self = (PyCThostFtdcBrokerUserOTPParamField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcBrokerUserOTPParamField_init(PyCThostFtdcBrokerUserOTPParamField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "OTPVendorsID", "SerialNumber", "AuthKey", "LastDrift", "LastSuccess", "OTPType",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *BrokerUserOTPParamField_BrokerID = NULL;
    Py_ssize_t BrokerUserOTPParamField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *BrokerUserOTPParamField_UserID = NULL;
    Py_ssize_t BrokerUserOTPParamField_UserID_len = 0;
            
    ///动态令牌提供商
    // TThostFtdcOTPVendorsIDType char[2]
    const char *BrokerUserOTPParamField_OTPVendorsID = NULL;
    Py_ssize_t BrokerUserOTPParamField_OTPVendorsID_len = 0;
            
    ///动态令牌序列号
    // TThostFtdcSerialNumberType char[17]
    const char *BrokerUserOTPParamField_SerialNumber = NULL;
    Py_ssize_t BrokerUserOTPParamField_SerialNumber_len = 0;
            
    ///令牌密钥
    // TThostFtdcAuthKeyType char[41]
    const char *BrokerUserOTPParamField_AuthKey = NULL;
    Py_ssize_t BrokerUserOTPParamField_AuthKey_len = 0;
            
    ///漂移值
    // TThostFtdcLastDriftType int
    int BrokerUserOTPParamField_LastDrift = 0;
        
    ///成功值
    // TThostFtdcLastSuccessType int
    int BrokerUserOTPParamField_LastSuccess = 0;
        
    ///动态令牌类型
    // TThostFtdcOTPTypeType char
    char BrokerUserOTPParamField_OTPType = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iic", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#iic", (char **)kwlist
#endif

        , &BrokerUserOTPParamField_BrokerID, &BrokerUserOTPParamField_BrokerID_len 
        , &BrokerUserOTPParamField_UserID, &BrokerUserOTPParamField_UserID_len 
        , &BrokerUserOTPParamField_OTPVendorsID, &BrokerUserOTPParamField_OTPVendorsID_len 
        , &BrokerUserOTPParamField_SerialNumber, &BrokerUserOTPParamField_SerialNumber_len 
        , &BrokerUserOTPParamField_AuthKey, &BrokerUserOTPParamField_AuthKey_len 
        , &BrokerUserOTPParamField_LastDrift 
        , &BrokerUserOTPParamField_LastSuccess 
        , &BrokerUserOTPParamField_OTPType 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( BrokerUserOTPParamField_BrokerID != NULL ) {
        if(BrokerUserOTPParamField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", BrokerUserOTPParamField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, BrokerUserOTPParamField_BrokerID, BrokerUserOTPParamField_BrokerID_len);        
        strncpy(self->data.BrokerID, BrokerUserOTPParamField_BrokerID, sizeof(self->data.BrokerID) );
        BrokerUserOTPParamField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( BrokerUserOTPParamField_UserID != NULL ) {
        if(BrokerUserOTPParamField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", BrokerUserOTPParamField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, BrokerUserOTPParamField_UserID, BrokerUserOTPParamField_UserID_len);        
        strncpy(self->data.UserID, BrokerUserOTPParamField_UserID, sizeof(self->data.UserID) );
        BrokerUserOTPParamField_UserID = NULL;
    }
            
    ///动态令牌提供商
    // TThostFtdcOTPVendorsIDType char[2]
    if( BrokerUserOTPParamField_OTPVendorsID != NULL ) {
        if(BrokerUserOTPParamField_OTPVendorsID_len > (Py_ssize_t)sizeof(self->data.OTPVendorsID)) {
            PyErr_Format(PyExc_ValueError, "OTPVendorsID too long: length=%zd (max allowed is %zd)", BrokerUserOTPParamField_OTPVendorsID_len, (Py_ssize_t)sizeof(self->data.OTPVendorsID));
            return -1;
        }
        // memset(self->data.OTPVendorsID, 0, sizeof(self->data.OTPVendorsID));
        // memcpy(self->data.OTPVendorsID, BrokerUserOTPParamField_OTPVendorsID, BrokerUserOTPParamField_OTPVendorsID_len);        
        strncpy(self->data.OTPVendorsID, BrokerUserOTPParamField_OTPVendorsID, sizeof(self->data.OTPVendorsID) );
        BrokerUserOTPParamField_OTPVendorsID = NULL;
    }
            
    ///动态令牌序列号
    // TThostFtdcSerialNumberType char[17]
    if( BrokerUserOTPParamField_SerialNumber != NULL ) {
        if(BrokerUserOTPParamField_SerialNumber_len > (Py_ssize_t)sizeof(self->data.SerialNumber)) {
            PyErr_Format(PyExc_ValueError, "SerialNumber too long: length=%zd (max allowed is %zd)", BrokerUserOTPParamField_SerialNumber_len, (Py_ssize_t)sizeof(self->data.SerialNumber));
            return -1;
        }
        // memset(self->data.SerialNumber, 0, sizeof(self->data.SerialNumber));
        // memcpy(self->data.SerialNumber, BrokerUserOTPParamField_SerialNumber, BrokerUserOTPParamField_SerialNumber_len);        
        strncpy(self->data.SerialNumber, BrokerUserOTPParamField_SerialNumber, sizeof(self->data.SerialNumber) );
        BrokerUserOTPParamField_SerialNumber = NULL;
    }
            
    ///令牌密钥
    // TThostFtdcAuthKeyType char[41]
    if( BrokerUserOTPParamField_AuthKey != NULL ) {
        if(BrokerUserOTPParamField_AuthKey_len > (Py_ssize_t)sizeof(self->data.AuthKey)) {
            PyErr_Format(PyExc_ValueError, "AuthKey too long: length=%zd (max allowed is %zd)", BrokerUserOTPParamField_AuthKey_len, (Py_ssize_t)sizeof(self->data.AuthKey));
            return -1;
        }
        // memset(self->data.AuthKey, 0, sizeof(self->data.AuthKey));
        // memcpy(self->data.AuthKey, BrokerUserOTPParamField_AuthKey, BrokerUserOTPParamField_AuthKey_len);        
        strncpy(self->data.AuthKey, BrokerUserOTPParamField_AuthKey, sizeof(self->data.AuthKey) );
        BrokerUserOTPParamField_AuthKey = NULL;
    }
            
    ///漂移值
    // TThostFtdcLastDriftType int
    self->data.LastDrift = BrokerUserOTPParamField_LastDrift;
        
    ///成功值
    // TThostFtdcLastSuccessType int
    self->data.LastSuccess = BrokerUserOTPParamField_LastSuccess;
        
    ///动态令牌类型
    // TThostFtdcOTPTypeType char
    self->data.OTPType = BrokerUserOTPParamField_OTPType;
            

    return 0;
}

static void PyCThostFtdcBrokerUserOTPParamField_dealloc(PyCThostFtdcBrokerUserOTPParamField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcBrokerUserOTPParamField_repr(PyCThostFtdcBrokerUserOTPParamField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:i,s:i,s:c}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"OTPVendorsID", self->data.OTPVendorsID//, (Py_ssize_t)sizeof(self->data.OTPVendorsID) 
        ,"SerialNumber", self->data.SerialNumber//, (Py_ssize_t)sizeof(self->data.SerialNumber) 
        ,"AuthKey", self->data.AuthKey//, (Py_ssize_t)sizeof(self->data.AuthKey) 
        ,"LastDrift", self->data.LastDrift 
        ,"LastSuccess", self->data.LastSuccess 
        ,"OTPType", self->data.OTPType 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcBrokerUserOTPParamField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_BrokerID(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcBrokerUserOTPParamField_set_BrokerID(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_UserID(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcBrokerUserOTPParamField_set_UserID(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
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
            
///动态令牌提供商
// TThostFtdcOTPVendorsIDType char[2]
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_OTPVendorsID(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OTPVendorsID, (Py_ssize_t)sizeof(self->data.OTPVendorsID));
    return PyBytes_FromString(self->data.OTPVendorsID);
}

///动态令牌提供商
// TThostFtdcOTPVendorsIDType char[2]
static int PyCThostFtdcBrokerUserOTPParamField_set_OTPVendorsID(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OTPVendorsID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OTPVendorsID)) {
        PyErr_SetString(PyExc_ValueError, "OTPVendorsID must be less than 2 bytes");
        return -1;
    }
    // memset(self->data.OTPVendorsID, 0, sizeof(self->data.OTPVendorsID));
    // memcpy(self->data.OTPVendorsID, buf, len);
    strncpy(self->data.OTPVendorsID, buf, sizeof(self->data.OTPVendorsID));
    return 0;
}
            
///动态令牌序列号
// TThostFtdcSerialNumberType char[17]
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_SerialNumber(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SerialNumber, (Py_ssize_t)sizeof(self->data.SerialNumber));
    return PyBytes_FromString(self->data.SerialNumber);
}

///动态令牌序列号
// TThostFtdcSerialNumberType char[17]
static int PyCThostFtdcBrokerUserOTPParamField_set_SerialNumber(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SerialNumber Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SerialNumber)) {
        PyErr_SetString(PyExc_ValueError, "SerialNumber must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.SerialNumber, 0, sizeof(self->data.SerialNumber));
    // memcpy(self->data.SerialNumber, buf, len);
    strncpy(self->data.SerialNumber, buf, sizeof(self->data.SerialNumber));
    return 0;
}
            
///令牌密钥
// TThostFtdcAuthKeyType char[41]
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_AuthKey(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AuthKey, (Py_ssize_t)sizeof(self->data.AuthKey));
    return PyBytes_FromString(self->data.AuthKey);
}

///令牌密钥
// TThostFtdcAuthKeyType char[41]
static int PyCThostFtdcBrokerUserOTPParamField_set_AuthKey(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AuthKey Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AuthKey)) {
        PyErr_SetString(PyExc_ValueError, "AuthKey must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.AuthKey, 0, sizeof(self->data.AuthKey));
    // memcpy(self->data.AuthKey, buf, len);
    strncpy(self->data.AuthKey, buf, sizeof(self->data.AuthKey));
    return 0;
}
            
///漂移值
// TThostFtdcLastDriftType int
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_LastDrift(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LastDrift);
#else
    return PyInt_FromLong(self->data.LastDrift);
#endif
}

///漂移值
// TThostFtdcLastDriftType int
static int PyCThostFtdcBrokerUserOTPParamField_set_LastDrift(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastDrift Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastDrift Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LastDrift value out of range for C int");
        return -1;
    }
    self->data.LastDrift = (int)buf;
    return 0;
}
        
///成功值
// TThostFtdcLastSuccessType int
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_LastSuccess(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.LastSuccess);
#else
    return PyInt_FromLong(self->data.LastSuccess);
#endif
}

///成功值
// TThostFtdcLastSuccessType int
static int PyCThostFtdcBrokerUserOTPParamField_set_LastSuccess(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastSuccess Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LastSuccess Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the LastSuccess value out of range for C int");
        return -1;
    }
    self->data.LastSuccess = (int)buf;
    return 0;
}
        
///动态令牌类型
// TThostFtdcOTPTypeType char
static PyObject *PyCThostFtdcBrokerUserOTPParamField_get_OTPType(PyCThostFtdcBrokerUserOTPParamField *self, void *closure) {
    return PyBytes_FromStringAndSize(&(self->data.OTPType), 1);
}

///动态令牌类型
// TThostFtdcOTPTypeType char
static int PyCThostFtdcBrokerUserOTPParamField_set_OTPType(PyCThostFtdcBrokerUserOTPParamField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcBrokerUserOTPParamField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcBrokerUserOTPParamField_get_BrokerID, (setter)PyCThostFtdcBrokerUserOTPParamField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcBrokerUserOTPParamField_get_UserID, (setter)PyCThostFtdcBrokerUserOTPParamField_set_UserID, (char *)"UserID", NULL},
    ///动态令牌提供商 
    {(char *)"OTPVendorsID", (getter)PyCThostFtdcBrokerUserOTPParamField_get_OTPVendorsID, (setter)PyCThostFtdcBrokerUserOTPParamField_set_OTPVendorsID, (char *)"OTPVendorsID", NULL},
    ///动态令牌序列号 
    {(char *)"SerialNumber", (getter)PyCThostFtdcBrokerUserOTPParamField_get_SerialNumber, (setter)PyCThostFtdcBrokerUserOTPParamField_set_SerialNumber, (char *)"SerialNumber", NULL},
    ///令牌密钥 
    {(char *)"AuthKey", (getter)PyCThostFtdcBrokerUserOTPParamField_get_AuthKey, (setter)PyCThostFtdcBrokerUserOTPParamField_set_AuthKey, (char *)"AuthKey", NULL},
    ///漂移值 
    {(char *)"LastDrift", (getter)PyCThostFtdcBrokerUserOTPParamField_get_LastDrift, (setter)PyCThostFtdcBrokerUserOTPParamField_set_LastDrift, (char *)"LastDrift", NULL},
    ///成功值 
    {(char *)"LastSuccess", (getter)PyCThostFtdcBrokerUserOTPParamField_get_LastSuccess, (setter)PyCThostFtdcBrokerUserOTPParamField_set_LastSuccess, (char *)"LastSuccess", NULL},
    ///动态令牌类型 
    {(char *)"OTPType", (getter)PyCThostFtdcBrokerUserOTPParamField_get_OTPType, (setter)PyCThostFtdcBrokerUserOTPParamField_set_OTPType, (char *)"OTPType", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcBrokerUserOTPParamFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcBrokerUserOTPParamField",	/* tp_name */
	sizeof(PyCThostFtdcBrokerUserOTPParamField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcBrokerUserOTPParamField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcBrokerUserOTPParamField_repr,   /* tp_repr */
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
	"CThostFtdcBrokerUserOTPParamField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcBrokerUserOTPParamField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcBrokerUserOTPParamField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcBrokerUserOTPParamField_new,       /* tp_new */
};

int PyCThostFtdcBrokerUserOTPParamFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcBrokerUserOTPParamField  */
	if (PyType_Ready(&PyCThostFtdcBrokerUserOTPParamFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcBrokerUserOTPParamField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcBrokerUserOTPParamFieldType);
    if( PyModule_AddObject(module, "CThostFtdcBrokerUserOTPParamField", (PyObject *)&PyCThostFtdcBrokerUserOTPParamFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcBrokerUserOTPParamField to module");
        Py_DECREF(&PyCThostFtdcBrokerUserOTPParamFieldType);
		return -1;
    }

    return 0;
}
