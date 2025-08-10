
#include "PyCThostFtdcUserSystemInfoField.h"

///用户系统信息

static PyObject *PyCThostFtdcUserSystemInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserSystemInfoField *self = (PyCThostFtdcUserSystemInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcUserSystemInfoField_init(PyCThostFtdcUserSystemInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "ClientSystemInfoLen", "ClientSystemInfo", "reserve1", "ClientIPPort", "ClientLoginTime", "ClientAppID", "ClientPublicIP", "ClientLoginRemark",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *UserSystemInfoField_BrokerID = NULL;
    Py_ssize_t UserSystemInfoField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *UserSystemInfoField_UserID = NULL;
    Py_ssize_t UserSystemInfoField_UserID_len = 0;
            
    ///用户端系统内部信息长度
    // TThostFtdcSystemInfoLenType int
    int UserSystemInfoField_ClientSystemInfoLen = 0;
        
    ///用户端系统内部信息
    // TThostFtdcClientSystemInfoType char[273]
    const char *UserSystemInfoField_ClientSystemInfo = NULL;
    Py_ssize_t UserSystemInfoField_ClientSystemInfo_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *UserSystemInfoField_reserve1 = NULL;
    Py_ssize_t UserSystemInfoField_reserve1_len = 0;
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    int UserSystemInfoField_ClientIPPort = 0;
        
    ///登录成功时间
    // TThostFtdcTimeType char[9]
    const char *UserSystemInfoField_ClientLoginTime = NULL;
    Py_ssize_t UserSystemInfoField_ClientLoginTime_len = 0;
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *UserSystemInfoField_ClientAppID = NULL;
    Py_ssize_t UserSystemInfoField_ClientAppID_len = 0;
            
    ///用户公网IP
    // TThostFtdcIPAddressType char[33]
    const char *UserSystemInfoField_ClientPublicIP = NULL;
    Py_ssize_t UserSystemInfoField_ClientPublicIP_len = 0;
            
    ///客户登录备注2
    // TThostFtdcClientLoginRemarkType char[151]
    const char *UserSystemInfoField_ClientLoginRemark = NULL;
    Py_ssize_t UserSystemInfoField_ClientLoginRemark_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#y#iy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#s#is#s#s#s#", (char **)kwlist
#endif

        , &UserSystemInfoField_BrokerID, &UserSystemInfoField_BrokerID_len 
        , &UserSystemInfoField_UserID, &UserSystemInfoField_UserID_len 
        , &UserSystemInfoField_ClientSystemInfoLen 
        , &UserSystemInfoField_ClientSystemInfo, &UserSystemInfoField_ClientSystemInfo_len 
        , &UserSystemInfoField_reserve1, &UserSystemInfoField_reserve1_len 
        , &UserSystemInfoField_ClientIPPort 
        , &UserSystemInfoField_ClientLoginTime, &UserSystemInfoField_ClientLoginTime_len 
        , &UserSystemInfoField_ClientAppID, &UserSystemInfoField_ClientAppID_len 
        , &UserSystemInfoField_ClientPublicIP, &UserSystemInfoField_ClientPublicIP_len 
        , &UserSystemInfoField_ClientLoginRemark, &UserSystemInfoField_ClientLoginRemark_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( UserSystemInfoField_BrokerID != NULL ) {
        if(UserSystemInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", UserSystemInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, UserSystemInfoField_BrokerID, UserSystemInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, UserSystemInfoField_BrokerID, sizeof(self->data.BrokerID) );
        UserSystemInfoField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( UserSystemInfoField_UserID != NULL ) {
        if(UserSystemInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", UserSystemInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, UserSystemInfoField_UserID, UserSystemInfoField_UserID_len);        
        strncpy(self->data.UserID, UserSystemInfoField_UserID, sizeof(self->data.UserID) );
        UserSystemInfoField_UserID = NULL;
    }
            
    ///用户端系统内部信息长度
    // TThostFtdcSystemInfoLenType int
    self->data.ClientSystemInfoLen = UserSystemInfoField_ClientSystemInfoLen;
        
    ///用户端系统内部信息
    // TThostFtdcClientSystemInfoType char[273]
    if( UserSystemInfoField_ClientSystemInfo != NULL ) {
        if(UserSystemInfoField_ClientSystemInfo_len > (Py_ssize_t)sizeof(self->data.ClientSystemInfo)) {
            PyErr_Format(PyExc_ValueError, "ClientSystemInfo too long: length=%zd (max allowed is %zd)", UserSystemInfoField_ClientSystemInfo_len, (Py_ssize_t)sizeof(self->data.ClientSystemInfo));
            return -1;
        }
        // memset(self->data.ClientSystemInfo, 0, sizeof(self->data.ClientSystemInfo));
        // memcpy(self->data.ClientSystemInfo, UserSystemInfoField_ClientSystemInfo, UserSystemInfoField_ClientSystemInfo_len);        
        strncpy(self->data.ClientSystemInfo, UserSystemInfoField_ClientSystemInfo, sizeof(self->data.ClientSystemInfo) );
        UserSystemInfoField_ClientSystemInfo = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( UserSystemInfoField_reserve1 != NULL ) {
        if(UserSystemInfoField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", UserSystemInfoField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, UserSystemInfoField_reserve1, UserSystemInfoField_reserve1_len);        
        strncpy(self->data.reserve1, UserSystemInfoField_reserve1, sizeof(self->data.reserve1) );
        UserSystemInfoField_reserve1 = NULL;
    }
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    self->data.ClientIPPort = UserSystemInfoField_ClientIPPort;
        
    ///登录成功时间
    // TThostFtdcTimeType char[9]
    if( UserSystemInfoField_ClientLoginTime != NULL ) {
        if(UserSystemInfoField_ClientLoginTime_len > (Py_ssize_t)sizeof(self->data.ClientLoginTime)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginTime too long: length=%zd (max allowed is %zd)", UserSystemInfoField_ClientLoginTime_len, (Py_ssize_t)sizeof(self->data.ClientLoginTime));
            return -1;
        }
        // memset(self->data.ClientLoginTime, 0, sizeof(self->data.ClientLoginTime));
        // memcpy(self->data.ClientLoginTime, UserSystemInfoField_ClientLoginTime, UserSystemInfoField_ClientLoginTime_len);        
        strncpy(self->data.ClientLoginTime, UserSystemInfoField_ClientLoginTime, sizeof(self->data.ClientLoginTime) );
        UserSystemInfoField_ClientLoginTime = NULL;
    }
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( UserSystemInfoField_ClientAppID != NULL ) {
        if(UserSystemInfoField_ClientAppID_len > (Py_ssize_t)sizeof(self->data.ClientAppID)) {
            PyErr_Format(PyExc_ValueError, "ClientAppID too long: length=%zd (max allowed is %zd)", UserSystemInfoField_ClientAppID_len, (Py_ssize_t)sizeof(self->data.ClientAppID));
            return -1;
        }
        // memset(self->data.ClientAppID, 0, sizeof(self->data.ClientAppID));
        // memcpy(self->data.ClientAppID, UserSystemInfoField_ClientAppID, UserSystemInfoField_ClientAppID_len);        
        strncpy(self->data.ClientAppID, UserSystemInfoField_ClientAppID, sizeof(self->data.ClientAppID) );
        UserSystemInfoField_ClientAppID = NULL;
    }
            
    ///用户公网IP
    // TThostFtdcIPAddressType char[33]
    if( UserSystemInfoField_ClientPublicIP != NULL ) {
        if(UserSystemInfoField_ClientPublicIP_len > (Py_ssize_t)sizeof(self->data.ClientPublicIP)) {
            PyErr_Format(PyExc_ValueError, "ClientPublicIP too long: length=%zd (max allowed is %zd)", UserSystemInfoField_ClientPublicIP_len, (Py_ssize_t)sizeof(self->data.ClientPublicIP));
            return -1;
        }
        // memset(self->data.ClientPublicIP, 0, sizeof(self->data.ClientPublicIP));
        // memcpy(self->data.ClientPublicIP, UserSystemInfoField_ClientPublicIP, UserSystemInfoField_ClientPublicIP_len);        
        strncpy(self->data.ClientPublicIP, UserSystemInfoField_ClientPublicIP, sizeof(self->data.ClientPublicIP) );
        UserSystemInfoField_ClientPublicIP = NULL;
    }
            
    ///客户登录备注2
    // TThostFtdcClientLoginRemarkType char[151]
    if( UserSystemInfoField_ClientLoginRemark != NULL ) {
        if(UserSystemInfoField_ClientLoginRemark_len > (Py_ssize_t)sizeof(self->data.ClientLoginRemark)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginRemark too long: length=%zd (max allowed is %zd)", UserSystemInfoField_ClientLoginRemark_len, (Py_ssize_t)sizeof(self->data.ClientLoginRemark));
            return -1;
        }
        // memset(self->data.ClientLoginRemark, 0, sizeof(self->data.ClientLoginRemark));
        // memcpy(self->data.ClientLoginRemark, UserSystemInfoField_ClientLoginRemark, UserSystemInfoField_ClientLoginRemark_len);        
        strncpy(self->data.ClientLoginRemark, UserSystemInfoField_ClientLoginRemark, sizeof(self->data.ClientLoginRemark) );
        UserSystemInfoField_ClientLoginRemark = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcUserSystemInfoField_dealloc(PyCThostFtdcUserSystemInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserSystemInfoField_repr(PyCThostFtdcUserSystemInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:y,s:i,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:s,s:i,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"ClientSystemInfoLen", self->data.ClientSystemInfoLen 
        ,"ClientSystemInfo", self->data.ClientSystemInfo//, (Py_ssize_t)sizeof(self->data.ClientSystemInfo) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"ClientIPPort", self->data.ClientIPPort 
        ,"ClientLoginTime", self->data.ClientLoginTime//, (Py_ssize_t)sizeof(self->data.ClientLoginTime) 
        ,"ClientAppID", self->data.ClientAppID//, (Py_ssize_t)sizeof(self->data.ClientAppID) 
        ,"ClientPublicIP", self->data.ClientPublicIP//, (Py_ssize_t)sizeof(self->data.ClientPublicIP) 
        ,"ClientLoginRemark", self->data.ClientLoginRemark//, (Py_ssize_t)sizeof(self->data.ClientLoginRemark) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSystemInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcUserSystemInfoField_get_BrokerID(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcUserSystemInfoField_set_BrokerID(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcUserSystemInfoField_get_UserID(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcUserSystemInfoField_set_UserID(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
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
            
///用户端系统内部信息长度
// TThostFtdcSystemInfoLenType int
static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientSystemInfoLen(PyCThostFtdcUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ClientSystemInfoLen);
#else
    return PyInt_FromLong(self->data.ClientSystemInfoLen);
#endif
}

///用户端系统内部信息长度
// TThostFtdcSystemInfoLenType int
static int PyCThostFtdcUserSystemInfoField_set_ClientSystemInfoLen(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientSystemInfoLen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientSystemInfoLen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ClientSystemInfoLen value out of range for C int");
        return -1;
    }
    self->data.ClientSystemInfoLen = (int)buf;
    return 0;
}
        
///用户端系统内部信息
// TThostFtdcClientSystemInfoType char[273]
static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientSystemInfo(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientSystemInfo, (Py_ssize_t)sizeof(self->data.ClientSystemInfo));
    return PyBytes_FromString(self->data.ClientSystemInfo);
}

///用户端系统内部信息
// TThostFtdcClientSystemInfoType char[273]
static int PyCThostFtdcUserSystemInfoField_set_ClientSystemInfo(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientSystemInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientSystemInfo)) {
        PyErr_SetString(PyExc_ValueError, "ClientSystemInfo must be less than 273 bytes");
        return -1;
    }
    // memset(self->data.ClientSystemInfo, 0, sizeof(self->data.ClientSystemInfo));
    // memcpy(self->data.ClientSystemInfo, buf, len);
    strncpy(self->data.ClientSystemInfo, buf, sizeof(self->data.ClientSystemInfo));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcUserSystemInfoField_get_reserve1(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcUserSystemInfoField_set_reserve1(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
    // memcpy(self->data.reserve1, buf, len);
    strncpy(self->data.reserve1, buf, sizeof(self->data.reserve1));
    return 0;
}
            
///终端IP端口
// TThostFtdcIPPortType int
static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientIPPort(PyCThostFtdcUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ClientIPPort);
#else
    return PyInt_FromLong(self->data.ClientIPPort);
#endif
}

///终端IP端口
// TThostFtdcIPPortType int
static int PyCThostFtdcUserSystemInfoField_set_ClientIPPort(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPPort Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPPort Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the ClientIPPort value out of range for C int");
        return -1;
    }
    self->data.ClientIPPort = (int)buf;
    return 0;
}
        
///登录成功时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientLoginTime(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientLoginTime, (Py_ssize_t)sizeof(self->data.ClientLoginTime));
    return PyBytes_FromString(self->data.ClientLoginTime);
}

///登录成功时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcUserSystemInfoField_set_ClientLoginTime(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientLoginTime)) {
        PyErr_SetString(PyExc_ValueError, "ClientLoginTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.ClientLoginTime, 0, sizeof(self->data.ClientLoginTime));
    // memcpy(self->data.ClientLoginTime, buf, len);
    strncpy(self->data.ClientLoginTime, buf, sizeof(self->data.ClientLoginTime));
    return 0;
}
            
///App代码
// TThostFtdcAppIDType char[33]
static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientAppID(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientAppID, (Py_ssize_t)sizeof(self->data.ClientAppID));
    return PyBytes_FromString(self->data.ClientAppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcUserSystemInfoField_set_ClientAppID(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientAppID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientAppID)) {
        PyErr_SetString(PyExc_ValueError, "ClientAppID must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.ClientAppID, 0, sizeof(self->data.ClientAppID));
    // memcpy(self->data.ClientAppID, buf, len);
    strncpy(self->data.ClientAppID, buf, sizeof(self->data.ClientAppID));
    return 0;
}
            
///用户公网IP
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientPublicIP(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientPublicIP, (Py_ssize_t)sizeof(self->data.ClientPublicIP));
    return PyBytes_FromString(self->data.ClientPublicIP);
}

///用户公网IP
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcUserSystemInfoField_set_ClientPublicIP(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientPublicIP Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientPublicIP)) {
        PyErr_SetString(PyExc_ValueError, "ClientPublicIP must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.ClientPublicIP, 0, sizeof(self->data.ClientPublicIP));
    // memcpy(self->data.ClientPublicIP, buf, len);
    strncpy(self->data.ClientPublicIP, buf, sizeof(self->data.ClientPublicIP));
    return 0;
}
            
///客户登录备注2
// TThostFtdcClientLoginRemarkType char[151]
static PyObject *PyCThostFtdcUserSystemInfoField_get_ClientLoginRemark(PyCThostFtdcUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientLoginRemark, (Py_ssize_t)sizeof(self->data.ClientLoginRemark));
    return PyBytes_FromString(self->data.ClientLoginRemark);
}

///客户登录备注2
// TThostFtdcClientLoginRemarkType char[151]
static int PyCThostFtdcUserSystemInfoField_set_ClientLoginRemark(PyCThostFtdcUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginRemark Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientLoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "ClientLoginRemark must be less than 151 bytes");
        return -1;
    }
    // memset(self->data.ClientLoginRemark, 0, sizeof(self->data.ClientLoginRemark));
    // memcpy(self->data.ClientLoginRemark, buf, len);
    strncpy(self->data.ClientLoginRemark, buf, sizeof(self->data.ClientLoginRemark));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcUserSystemInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcUserSystemInfoField_get_BrokerID, (setter)PyCThostFtdcUserSystemInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcUserSystemInfoField_get_UserID, (setter)PyCThostFtdcUserSystemInfoField_set_UserID, (char *)"UserID", NULL},
    ///用户端系统内部信息长度 
    {(char *)"ClientSystemInfoLen", (getter)PyCThostFtdcUserSystemInfoField_get_ClientSystemInfoLen, (setter)PyCThostFtdcUserSystemInfoField_set_ClientSystemInfoLen, (char *)"ClientSystemInfoLen", NULL},
    ///用户端系统内部信息 
    {(char *)"ClientSystemInfo", (getter)PyCThostFtdcUserSystemInfoField_get_ClientSystemInfo, (setter)PyCThostFtdcUserSystemInfoField_set_ClientSystemInfo, (char *)"ClientSystemInfo", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcUserSystemInfoField_get_reserve1, (setter)PyCThostFtdcUserSystemInfoField_set_reserve1, (char *)"reserve1", NULL},
    ///终端IP端口 
    {(char *)"ClientIPPort", (getter)PyCThostFtdcUserSystemInfoField_get_ClientIPPort, (setter)PyCThostFtdcUserSystemInfoField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
    ///登录成功时间 
    {(char *)"ClientLoginTime", (getter)PyCThostFtdcUserSystemInfoField_get_ClientLoginTime, (setter)PyCThostFtdcUserSystemInfoField_set_ClientLoginTime, (char *)"ClientLoginTime", NULL},
    ///App代码 
    {(char *)"ClientAppID", (getter)PyCThostFtdcUserSystemInfoField_get_ClientAppID, (setter)PyCThostFtdcUserSystemInfoField_set_ClientAppID, (char *)"ClientAppID", NULL},
    ///用户公网IP 
    {(char *)"ClientPublicIP", (getter)PyCThostFtdcUserSystemInfoField_get_ClientPublicIP, (setter)PyCThostFtdcUserSystemInfoField_set_ClientPublicIP, (char *)"ClientPublicIP", NULL},
    ///客户登录备注2 
    {(char *)"ClientLoginRemark", (getter)PyCThostFtdcUserSystemInfoField_get_ClientLoginRemark, (setter)PyCThostFtdcUserSystemInfoField_set_ClientLoginRemark, (char *)"ClientLoginRemark", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserSystemInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserSystemInfoField",	/* tp_name */
	sizeof(PyCThostFtdcUserSystemInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserSystemInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserSystemInfoField_repr,   /* tp_repr */
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
	"CThostFtdcUserSystemInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserSystemInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserSystemInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserSystemInfoField_new,       /* tp_new */
};

int PyCThostFtdcUserSystemInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserSystemInfoField  */
	if (PyType_Ready(&PyCThostFtdcUserSystemInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserSystemInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserSystemInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserSystemInfoField", (PyObject *)&PyCThostFtdcUserSystemInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserSystemInfoField to module");
        Py_DECREF(&PyCThostFtdcUserSystemInfoFieldType);
		return -1;
    }

    return 0;
}
