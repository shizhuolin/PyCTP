
#include "PyCThostFtdcWechatUserSystemInfoField.h"

///微信小程序等用户系统信息

static PyObject *PyCThostFtdcWechatUserSystemInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcWechatUserSystemInfoField *self = (PyCThostFtdcWechatUserSystemInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	// self->data = { 0 };
	memset(&(self->data), 0, sizeof(self->data));
    return (PyObject *)self;
}

static int PyCThostFtdcWechatUserSystemInfoField_init(PyCThostFtdcWechatUserSystemInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"BrokerID", "UserID", "WechatCltSysInfoLen", "WechatCltSysInfo", "ClientIPPort", "ClientLoginTime", "ClientAppID", "ClientPublicIP", "ClientLoginRemark",  NULL};


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *WechatUserSystemInfoField_BrokerID = NULL;
    Py_ssize_t WechatUserSystemInfoField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *WechatUserSystemInfoField_UserID = NULL;
    Py_ssize_t WechatUserSystemInfoField_UserID_len = 0;
            
    ///微信小程序等用户端系统内部信息长度
    // TThostFtdcSystemInfoLenType int
    int WechatUserSystemInfoField_WechatCltSysInfoLen = 0;
        
    ///微信小程序等用户端系统内部信息
    // TThostFtdcClientSystemInfoType char[273]
    const char *WechatUserSystemInfoField_WechatCltSysInfo = NULL;
    Py_ssize_t WechatUserSystemInfoField_WechatCltSysInfo_len = 0;
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    int WechatUserSystemInfoField_ClientIPPort = 0;
        
    ///登录成功时间
    // TThostFtdcTimeType char[9]
    const char *WechatUserSystemInfoField_ClientLoginTime = NULL;
    Py_ssize_t WechatUserSystemInfoField_ClientLoginTime_len = 0;
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *WechatUserSystemInfoField_ClientAppID = NULL;
    Py_ssize_t WechatUserSystemInfoField_ClientAppID_len = 0;
            
    ///用户公网IP
    // TThostFtdcIPAddressType char[33]
    const char *WechatUserSystemInfoField_ClientPublicIP = NULL;
    Py_ssize_t WechatUserSystemInfoField_ClientPublicIP_len = 0;
            
    ///客户登录备注2
    // TThostFtdcClientLoginRemarkType char[151]
    const char *WechatUserSystemInfoField_ClientLoginRemark = NULL;
    Py_ssize_t WechatUserSystemInfoField_ClientLoginRemark_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#iy#iy#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#is#is#s#s#s#", (char **)kwlist
#endif

        , &WechatUserSystemInfoField_BrokerID, &WechatUserSystemInfoField_BrokerID_len 
        , &WechatUserSystemInfoField_UserID, &WechatUserSystemInfoField_UserID_len 
        , &WechatUserSystemInfoField_WechatCltSysInfoLen 
        , &WechatUserSystemInfoField_WechatCltSysInfo, &WechatUserSystemInfoField_WechatCltSysInfo_len 
        , &WechatUserSystemInfoField_ClientIPPort 
        , &WechatUserSystemInfoField_ClientLoginTime, &WechatUserSystemInfoField_ClientLoginTime_len 
        , &WechatUserSystemInfoField_ClientAppID, &WechatUserSystemInfoField_ClientAppID_len 
        , &WechatUserSystemInfoField_ClientPublicIP, &WechatUserSystemInfoField_ClientPublicIP_len 
        , &WechatUserSystemInfoField_ClientLoginRemark, &WechatUserSystemInfoField_ClientLoginRemark_len 


    )) {
        return -1;
    }


    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( WechatUserSystemInfoField_BrokerID != NULL ) {
        if(WechatUserSystemInfoField_BrokerID_len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", WechatUserSystemInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, WechatUserSystemInfoField_BrokerID, WechatUserSystemInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, WechatUserSystemInfoField_BrokerID, sizeof(self->data.BrokerID) );
        WechatUserSystemInfoField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( WechatUserSystemInfoField_UserID != NULL ) {
        if(WechatUserSystemInfoField_UserID_len >= (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", WechatUserSystemInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, WechatUserSystemInfoField_UserID, WechatUserSystemInfoField_UserID_len);        
        strncpy(self->data.UserID, WechatUserSystemInfoField_UserID, sizeof(self->data.UserID) );
        WechatUserSystemInfoField_UserID = NULL;
    }
            
    ///微信小程序等用户端系统内部信息长度
    // TThostFtdcSystemInfoLenType int
    self->data.WechatCltSysInfoLen = WechatUserSystemInfoField_WechatCltSysInfoLen;
        
    ///微信小程序等用户端系统内部信息
    // TThostFtdcClientSystemInfoType char[273]
    if( WechatUserSystemInfoField_WechatCltSysInfo != NULL ) {
        if(WechatUserSystemInfoField_WechatCltSysInfo_len >= (Py_ssize_t)sizeof(self->data.WechatCltSysInfo)) {
            PyErr_Format(PyExc_ValueError, "WechatCltSysInfo too long: length=%zd (max allowed is %zd)", WechatUserSystemInfoField_WechatCltSysInfo_len, (Py_ssize_t)sizeof(self->data.WechatCltSysInfo));
            return -1;
        }
        // memset(self->data.WechatCltSysInfo, 0, sizeof(self->data.WechatCltSysInfo));
        // memcpy(self->data.WechatCltSysInfo, WechatUserSystemInfoField_WechatCltSysInfo, WechatUserSystemInfoField_WechatCltSysInfo_len);        
        strncpy(self->data.WechatCltSysInfo, WechatUserSystemInfoField_WechatCltSysInfo, sizeof(self->data.WechatCltSysInfo) );
        WechatUserSystemInfoField_WechatCltSysInfo = NULL;
    }
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    self->data.ClientIPPort = WechatUserSystemInfoField_ClientIPPort;
        
    ///登录成功时间
    // TThostFtdcTimeType char[9]
    if( WechatUserSystemInfoField_ClientLoginTime != NULL ) {
        if(WechatUserSystemInfoField_ClientLoginTime_len >= (Py_ssize_t)sizeof(self->data.ClientLoginTime)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginTime too long: length=%zd (max allowed is %zd)", WechatUserSystemInfoField_ClientLoginTime_len, (Py_ssize_t)sizeof(self->data.ClientLoginTime));
            return -1;
        }
        // memset(self->data.ClientLoginTime, 0, sizeof(self->data.ClientLoginTime));
        // memcpy(self->data.ClientLoginTime, WechatUserSystemInfoField_ClientLoginTime, WechatUserSystemInfoField_ClientLoginTime_len);        
        strncpy(self->data.ClientLoginTime, WechatUserSystemInfoField_ClientLoginTime, sizeof(self->data.ClientLoginTime) );
        WechatUserSystemInfoField_ClientLoginTime = NULL;
    }
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( WechatUserSystemInfoField_ClientAppID != NULL ) {
        if(WechatUserSystemInfoField_ClientAppID_len >= (Py_ssize_t)sizeof(self->data.ClientAppID)) {
            PyErr_Format(PyExc_ValueError, "ClientAppID too long: length=%zd (max allowed is %zd)", WechatUserSystemInfoField_ClientAppID_len, (Py_ssize_t)sizeof(self->data.ClientAppID));
            return -1;
        }
        // memset(self->data.ClientAppID, 0, sizeof(self->data.ClientAppID));
        // memcpy(self->data.ClientAppID, WechatUserSystemInfoField_ClientAppID, WechatUserSystemInfoField_ClientAppID_len);        
        strncpy(self->data.ClientAppID, WechatUserSystemInfoField_ClientAppID, sizeof(self->data.ClientAppID) );
        WechatUserSystemInfoField_ClientAppID = NULL;
    }
            
    ///用户公网IP
    // TThostFtdcIPAddressType char[33]
    if( WechatUserSystemInfoField_ClientPublicIP != NULL ) {
        if(WechatUserSystemInfoField_ClientPublicIP_len >= (Py_ssize_t)sizeof(self->data.ClientPublicIP)) {
            PyErr_Format(PyExc_ValueError, "ClientPublicIP too long: length=%zd (max allowed is %zd)", WechatUserSystemInfoField_ClientPublicIP_len, (Py_ssize_t)sizeof(self->data.ClientPublicIP));
            return -1;
        }
        // memset(self->data.ClientPublicIP, 0, sizeof(self->data.ClientPublicIP));
        // memcpy(self->data.ClientPublicIP, WechatUserSystemInfoField_ClientPublicIP, WechatUserSystemInfoField_ClientPublicIP_len);        
        strncpy(self->data.ClientPublicIP, WechatUserSystemInfoField_ClientPublicIP, sizeof(self->data.ClientPublicIP) );
        WechatUserSystemInfoField_ClientPublicIP = NULL;
    }
            
    ///客户登录备注2
    // TThostFtdcClientLoginRemarkType char[151]
    if( WechatUserSystemInfoField_ClientLoginRemark != NULL ) {
        if(WechatUserSystemInfoField_ClientLoginRemark_len >= (Py_ssize_t)sizeof(self->data.ClientLoginRemark)) {
            PyErr_Format(PyExc_ValueError, "ClientLoginRemark too long: length=%zd (max allowed is %zd)", WechatUserSystemInfoField_ClientLoginRemark_len, (Py_ssize_t)sizeof(self->data.ClientLoginRemark));
            return -1;
        }
        // memset(self->data.ClientLoginRemark, 0, sizeof(self->data.ClientLoginRemark));
        // memcpy(self->data.ClientLoginRemark, WechatUserSystemInfoField_ClientLoginRemark, WechatUserSystemInfoField_ClientLoginRemark_len);        
        strncpy(self->data.ClientLoginRemark, WechatUserSystemInfoField_ClientLoginRemark, sizeof(self->data.ClientLoginRemark) );
        WechatUserSystemInfoField_ClientLoginRemark = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcWechatUserSystemInfoField_dealloc(PyCThostFtdcWechatUserSystemInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcWechatUserSystemInfoField_repr(PyCThostFtdcWechatUserSystemInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:i,s:y,s:i,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:i,s:s,s:i,s:s,s:s,s:s,s:s}"
#endif

        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"WechatCltSysInfoLen", self->data.WechatCltSysInfoLen 
        ,"WechatCltSysInfo", self->data.WechatCltSysInfo//, (Py_ssize_t)sizeof(self->data.WechatCltSysInfo) 
        ,"ClientIPPort", self->data.ClientIPPort 
        ,"ClientLoginTime", self->data.ClientLoginTime//, (Py_ssize_t)sizeof(self->data.ClientLoginTime) 
        ,"ClientAppID", self->data.ClientAppID//, (Py_ssize_t)sizeof(self->data.ClientAppID) 
        ,"ClientPublicIP", self->data.ClientPublicIP//, (Py_ssize_t)sizeof(self->data.ClientPublicIP) 
        ,"ClientLoginRemark", self->data.ClientLoginRemark//, (Py_ssize_t)sizeof(self->data.ClientLoginRemark) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcWechatUserSystemInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_BrokerID(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcWechatUserSystemInfoField_set_BrokerID(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.BrokerID)) {
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
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_UserID(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcWechatUserSystemInfoField_set_UserID(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 16 bytes");
        return -1;
    }
    // memset(self->data.UserID, 0, sizeof(self->data.UserID));
    // memcpy(self->data.UserID, buf, len);
    strncpy(self->data.UserID, buf, sizeof(self->data.UserID));
    return 0;
}
            
///微信小程序等用户端系统内部信息长度
// TThostFtdcSystemInfoLenType int
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfoLen(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.WechatCltSysInfoLen);
#else
    return PyInt_FromLong(self->data.WechatCltSysInfoLen);
#endif
}

///微信小程序等用户端系统内部信息长度
// TThostFtdcSystemInfoLenType int
static int PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfoLen(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WechatCltSysInfoLen Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WechatCltSysInfoLen Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the WechatCltSysInfoLen value out of range for C int");
        return -1;
    }
    self->data.WechatCltSysInfoLen = (int)buf;
    return 0;
}
        
///微信小程序等用户端系统内部信息
// TThostFtdcClientSystemInfoType char[273]
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfo(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.WechatCltSysInfo, (Py_ssize_t)sizeof(self->data.WechatCltSysInfo));
    return PyBytes_FromString(self->data.WechatCltSysInfo);
}

///微信小程序等用户端系统内部信息
// TThostFtdcClientSystemInfoType char[273]
static int PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfo(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "WechatCltSysInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.WechatCltSysInfo)) {
        PyErr_SetString(PyExc_ValueError, "WechatCltSysInfo must be less than 273 bytes");
        return -1;
    }
    // memset(self->data.WechatCltSysInfo, 0, sizeof(self->data.WechatCltSysInfo));
    // memcpy(self->data.WechatCltSysInfo, buf, len);
    strncpy(self->data.WechatCltSysInfo, buf, sizeof(self->data.WechatCltSysInfo));
    return 0;
}
            
///终端IP端口
// TThostFtdcIPPortType int
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientIPPort(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ClientIPPort);
#else
    return PyInt_FromLong(self->data.ClientIPPort);
#endif
}

///终端IP端口
// TThostFtdcIPPortType int
static int PyCThostFtdcWechatUserSystemInfoField_set_ClientIPPort(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginTime(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientLoginTime, (Py_ssize_t)sizeof(self->data.ClientLoginTime));
    return PyBytes_FromString(self->data.ClientLoginTime);
}

///登录成功时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginTime(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ClientLoginTime)) {
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
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientAppID(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientAppID, (Py_ssize_t)sizeof(self->data.ClientAppID));
    return PyBytes_FromString(self->data.ClientAppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcWechatUserSystemInfoField_set_ClientAppID(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientAppID Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ClientAppID)) {
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
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientPublicIP(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientPublicIP, (Py_ssize_t)sizeof(self->data.ClientPublicIP));
    return PyBytes_FromString(self->data.ClientPublicIP);
}

///用户公网IP
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcWechatUserSystemInfoField_set_ClientPublicIP(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientPublicIP Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ClientPublicIP)) {
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
static PyObject *PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginRemark(PyCThostFtdcWechatUserSystemInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientLoginRemark, (Py_ssize_t)sizeof(self->data.ClientLoginRemark));
    return PyBytes_FromString(self->data.ClientLoginRemark);
}

///客户登录备注2
// TThostFtdcClientLoginRemarkType char[151]
static int PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginRemark(PyCThostFtdcWechatUserSystemInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientLoginRemark Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len >= (Py_ssize_t)sizeof(self->data.ClientLoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "ClientLoginRemark must be less than 151 bytes");
        return -1;
    }
    // memset(self->data.ClientLoginRemark, 0, sizeof(self->data.ClientLoginRemark));
    // memcpy(self->data.ClientLoginRemark, buf, len);
    strncpy(self->data.ClientLoginRemark, buf, sizeof(self->data.ClientLoginRemark));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcWechatUserSystemInfoField_getset[] = {
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcWechatUserSystemInfoField_get_BrokerID, (setter)PyCThostFtdcWechatUserSystemInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcWechatUserSystemInfoField_get_UserID, (setter)PyCThostFtdcWechatUserSystemInfoField_set_UserID, (char *)"UserID", NULL},
    ///微信小程序等用户端系统内部信息长度 
    {(char *)"WechatCltSysInfoLen", (getter)PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfoLen, (setter)PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfoLen, (char *)"WechatCltSysInfoLen", NULL},
    ///微信小程序等用户端系统内部信息 
    {(char *)"WechatCltSysInfo", (getter)PyCThostFtdcWechatUserSystemInfoField_get_WechatCltSysInfo, (setter)PyCThostFtdcWechatUserSystemInfoField_set_WechatCltSysInfo, (char *)"WechatCltSysInfo", NULL},
    ///终端IP端口 
    {(char *)"ClientIPPort", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientIPPort, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
    ///登录成功时间 
    {(char *)"ClientLoginTime", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginTime, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginTime, (char *)"ClientLoginTime", NULL},
    ///App代码 
    {(char *)"ClientAppID", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientAppID, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientAppID, (char *)"ClientAppID", NULL},
    ///用户公网IP 
    {(char *)"ClientPublicIP", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientPublicIP, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientPublicIP, (char *)"ClientPublicIP", NULL},
    ///客户登录备注2 
    {(char *)"ClientLoginRemark", (getter)PyCThostFtdcWechatUserSystemInfoField_get_ClientLoginRemark, (setter)PyCThostFtdcWechatUserSystemInfoField_set_ClientLoginRemark, (char *)"ClientLoginRemark", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcWechatUserSystemInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcWechatUserSystemInfoField",	/* tp_name */
	sizeof(PyCThostFtdcWechatUserSystemInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcWechatUserSystemInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcWechatUserSystemInfoField_repr,   /* tp_repr */
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
	"CThostFtdcWechatUserSystemInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcWechatUserSystemInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcWechatUserSystemInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcWechatUserSystemInfoField_new,       /* tp_new */
};

int PyCThostFtdcWechatUserSystemInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcWechatUserSystemInfoField  */
	if (PyType_Ready(&PyCThostFtdcWechatUserSystemInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcWechatUserSystemInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcWechatUserSystemInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcWechatUserSystemInfoField", (PyObject *)&PyCThostFtdcWechatUserSystemInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcWechatUserSystemInfoField to module");
        Py_DECREF(&PyCThostFtdcWechatUserSystemInfoFieldType);
		return -1;
    }

    return 0;
}
