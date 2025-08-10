
#include "PyCThostFtdcUserSessionField.h"

///用户会话

static PyObject *PyCThostFtdcUserSessionField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcUserSessionField *self = (PyCThostFtdcUserSessionField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcUserSessionField_init(PyCThostFtdcUserSessionField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID", "SessionID", "BrokerID", "UserID", "LoginDate", "LoginTime", "reserve1", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "LoginRemark", "IPAddress",  NULL};


    ///前置编号
    // TThostFtdcFrontIDType int
    int UserSessionField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int UserSessionField_SessionID = 0;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *UserSessionField_BrokerID = NULL;
    Py_ssize_t UserSessionField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *UserSessionField_UserID = NULL;
    Py_ssize_t UserSessionField_UserID_len = 0;
            
    ///登录日期
    // TThostFtdcDateType char[9]
    const char *UserSessionField_LoginDate = NULL;
    Py_ssize_t UserSessionField_LoginDate_len = 0;
            
    ///登录时间
    // TThostFtdcTimeType char[9]
    const char *UserSessionField_LoginTime = NULL;
    Py_ssize_t UserSessionField_LoginTime_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *UserSessionField_reserve1 = NULL;
    Py_ssize_t UserSessionField_reserve1_len = 0;
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *UserSessionField_UserProductInfo = NULL;
    Py_ssize_t UserSessionField_UserProductInfo_len = 0;
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *UserSessionField_InterfaceProductInfo = NULL;
    Py_ssize_t UserSessionField_InterfaceProductInfo_len = 0;
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    const char *UserSessionField_ProtocolInfo = NULL;
    Py_ssize_t UserSessionField_ProtocolInfo_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *UserSessionField_MacAddress = NULL;
    Py_ssize_t UserSessionField_MacAddress_len = 0;
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    const char *UserSessionField_LoginRemark = NULL;
    Py_ssize_t UserSessionField_LoginRemark_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *UserSessionField_IPAddress = NULL;
    Py_ssize_t UserSessionField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#y#y#y#y#y#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#s#s#s#s#s#s#s#s#s#s#", (char **)kwlist
#endif

        , &UserSessionField_FrontID 
        , &UserSessionField_SessionID 
        , &UserSessionField_BrokerID, &UserSessionField_BrokerID_len 
        , &UserSessionField_UserID, &UserSessionField_UserID_len 
        , &UserSessionField_LoginDate, &UserSessionField_LoginDate_len 
        , &UserSessionField_LoginTime, &UserSessionField_LoginTime_len 
        , &UserSessionField_reserve1, &UserSessionField_reserve1_len 
        , &UserSessionField_UserProductInfo, &UserSessionField_UserProductInfo_len 
        , &UserSessionField_InterfaceProductInfo, &UserSessionField_InterfaceProductInfo_len 
        , &UserSessionField_ProtocolInfo, &UserSessionField_ProtocolInfo_len 
        , &UserSessionField_MacAddress, &UserSessionField_MacAddress_len 
        , &UserSessionField_LoginRemark, &UserSessionField_LoginRemark_len 
        , &UserSessionField_IPAddress, &UserSessionField_IPAddress_len 


    )) {
        return -1;
    }


    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = UserSessionField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = UserSessionField_SessionID;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( UserSessionField_BrokerID != NULL ) {
        if(UserSessionField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", UserSessionField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, UserSessionField_BrokerID, UserSessionField_BrokerID_len);        
        strncpy(self->data.BrokerID, UserSessionField_BrokerID, sizeof(self->data.BrokerID) );
        UserSessionField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( UserSessionField_UserID != NULL ) {
        if(UserSessionField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", UserSessionField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, UserSessionField_UserID, UserSessionField_UserID_len);        
        strncpy(self->data.UserID, UserSessionField_UserID, sizeof(self->data.UserID) );
        UserSessionField_UserID = NULL;
    }
            
    ///登录日期
    // TThostFtdcDateType char[9]
    if( UserSessionField_LoginDate != NULL ) {
        if(UserSessionField_LoginDate_len > (Py_ssize_t)sizeof(self->data.LoginDate)) {
            PyErr_Format(PyExc_ValueError, "LoginDate too long: length=%zd (max allowed is %zd)", UserSessionField_LoginDate_len, (Py_ssize_t)sizeof(self->data.LoginDate));
            return -1;
        }
        // memset(self->data.LoginDate, 0, sizeof(self->data.LoginDate));
        // memcpy(self->data.LoginDate, UserSessionField_LoginDate, UserSessionField_LoginDate_len);        
        strncpy(self->data.LoginDate, UserSessionField_LoginDate, sizeof(self->data.LoginDate) );
        UserSessionField_LoginDate = NULL;
    }
            
    ///登录时间
    // TThostFtdcTimeType char[9]
    if( UserSessionField_LoginTime != NULL ) {
        if(UserSessionField_LoginTime_len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
            PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is %zd)", UserSessionField_LoginTime_len, (Py_ssize_t)sizeof(self->data.LoginTime));
            return -1;
        }
        // memset(self->data.LoginTime, 0, sizeof(self->data.LoginTime));
        // memcpy(self->data.LoginTime, UserSessionField_LoginTime, UserSessionField_LoginTime_len);        
        strncpy(self->data.LoginTime, UserSessionField_LoginTime, sizeof(self->data.LoginTime) );
        UserSessionField_LoginTime = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( UserSessionField_reserve1 != NULL ) {
        if(UserSessionField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", UserSessionField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, UserSessionField_reserve1, UserSessionField_reserve1_len);        
        strncpy(self->data.reserve1, UserSessionField_reserve1, sizeof(self->data.reserve1) );
        UserSessionField_reserve1 = NULL;
    }
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( UserSessionField_UserProductInfo != NULL ) {
        if(UserSessionField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", UserSessionField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, UserSessionField_UserProductInfo, UserSessionField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, UserSessionField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        UserSessionField_UserProductInfo = NULL;
    }
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    if( UserSessionField_InterfaceProductInfo != NULL ) {
        if(UserSessionField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", UserSessionField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
            return -1;
        }
        // memset(self->data.InterfaceProductInfo, 0, sizeof(self->data.InterfaceProductInfo));
        // memcpy(self->data.InterfaceProductInfo, UserSessionField_InterfaceProductInfo, UserSessionField_InterfaceProductInfo_len);        
        strncpy(self->data.InterfaceProductInfo, UserSessionField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
        UserSessionField_InterfaceProductInfo = NULL;
    }
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    if( UserSessionField_ProtocolInfo != NULL ) {
        if(UserSessionField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", UserSessionField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
            return -1;
        }
        // memset(self->data.ProtocolInfo, 0, sizeof(self->data.ProtocolInfo));
        // memcpy(self->data.ProtocolInfo, UserSessionField_ProtocolInfo, UserSessionField_ProtocolInfo_len);        
        strncpy(self->data.ProtocolInfo, UserSessionField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
        UserSessionField_ProtocolInfo = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( UserSessionField_MacAddress != NULL ) {
        if(UserSessionField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", UserSessionField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, UserSessionField_MacAddress, UserSessionField_MacAddress_len);        
        strncpy(self->data.MacAddress, UserSessionField_MacAddress, sizeof(self->data.MacAddress) );
        UserSessionField_MacAddress = NULL;
    }
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    if( UserSessionField_LoginRemark != NULL ) {
        if(UserSessionField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", UserSessionField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
            return -1;
        }
        // memset(self->data.LoginRemark, 0, sizeof(self->data.LoginRemark));
        // memcpy(self->data.LoginRemark, UserSessionField_LoginRemark, UserSessionField_LoginRemark_len);        
        strncpy(self->data.LoginRemark, UserSessionField_LoginRemark, sizeof(self->data.LoginRemark) );
        UserSessionField_LoginRemark = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( UserSessionField_IPAddress != NULL ) {
        if(UserSessionField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", UserSessionField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, UserSessionField_IPAddress, UserSessionField_IPAddress_len);        
        strncpy(self->data.IPAddress, UserSessionField_IPAddress, sizeof(self->data.IPAddress) );
        UserSessionField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcUserSessionField_dealloc(PyCThostFtdcUserSessionField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcUserSessionField_repr(PyCThostFtdcUserSessionField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"FrontID", self->data.FrontID 
        ,"SessionID", self->data.SessionID 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"LoginDate", self->data.LoginDate//, (Py_ssize_t)sizeof(self->data.LoginDate) 
        ,"LoginTime", self->data.LoginTime//, (Py_ssize_t)sizeof(self->data.LoginTime) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"InterfaceProductInfo", self->data.InterfaceProductInfo//, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo) 
        ,"ProtocolInfo", self->data.ProtocolInfo//, (Py_ssize_t)sizeof(self->data.ProtocolInfo) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"LoginRemark", self->data.LoginRemark//, (Py_ssize_t)sizeof(self->data.LoginRemark) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcUserSessionField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcUserSessionField_get_FrontID(PyCThostFtdcUserSessionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcUserSessionField_set_FrontID(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FrontID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the FrontID value out of range for C int");
        return -1;
    }
    self->data.FrontID = (int)buf;
    return 0;
}
        
///会话编号
// TThostFtdcSessionIDType int
static PyObject *PyCThostFtdcUserSessionField_get_SessionID(PyCThostFtdcUserSessionField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcUserSessionField_set_SessionID(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SessionID Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the SessionID value out of range for C int");
        return -1;
    }
    self->data.SessionID = (int)buf;
    return 0;
}
        
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcUserSessionField_get_BrokerID(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcUserSessionField_set_BrokerID(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcUserSessionField_get_UserID(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcUserSessionField_set_UserID(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
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
            
///登录日期
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcUserSessionField_get_LoginDate(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginDate, (Py_ssize_t)sizeof(self->data.LoginDate));
    return PyBytes_FromString(self->data.LoginDate);
}

///登录日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcUserSessionField_set_LoginDate(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginDate Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LoginDate)) {
        PyErr_SetString(PyExc_ValueError, "LoginDate must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.LoginDate, 0, sizeof(self->data.LoginDate));
    // memcpy(self->data.LoginDate, buf, len);
    strncpy(self->data.LoginDate, buf, sizeof(self->data.LoginDate));
    return 0;
}
            
///登录时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcUserSessionField_get_LoginTime(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginTime, (Py_ssize_t)sizeof(self->data.LoginTime));
    return PyBytes_FromString(self->data.LoginTime);
}

///登录时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcUserSessionField_set_LoginTime(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LoginTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.LoginTime, 0, sizeof(self->data.LoginTime));
    // memcpy(self->data.LoginTime, buf, len);
    strncpy(self->data.LoginTime, buf, sizeof(self->data.LoginTime));
    return 0;
}
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcUserSessionField_get_reserve1(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcUserSessionField_set_reserve1(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
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
            
///用户端产品信息
// TThostFtdcProductInfoType char[11]
static PyObject *PyCThostFtdcUserSessionField_get_UserProductInfo(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcUserSessionField_set_UserProductInfo(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
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
            
///接口端产品信息
// TThostFtdcProductInfoType char[11]
static PyObject *PyCThostFtdcUserSessionField_get_InterfaceProductInfo(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InterfaceProductInfo, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
    return PyBytes_FromString(self->data.InterfaceProductInfo);
}

///接口端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcUserSessionField_set_InterfaceProductInfo(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.InterfaceProductInfo, 0, sizeof(self->data.InterfaceProductInfo));
    // memcpy(self->data.InterfaceProductInfo, buf, len);
    strncpy(self->data.InterfaceProductInfo, buf, sizeof(self->data.InterfaceProductInfo));
    return 0;
}
            
///协议信息
// TThostFtdcProtocolInfoType char[11]
static PyObject *PyCThostFtdcUserSessionField_get_ProtocolInfo(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProtocolInfo, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
    return PyBytes_FromString(self->data.ProtocolInfo);
}

///协议信息
// TThostFtdcProtocolInfoType char[11]
static int PyCThostFtdcUserSessionField_set_ProtocolInfo(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 11 bytes");
        return -1;
    }
    // memset(self->data.ProtocolInfo, 0, sizeof(self->data.ProtocolInfo));
    // memcpy(self->data.ProtocolInfo, buf, len);
    strncpy(self->data.ProtocolInfo, buf, sizeof(self->data.ProtocolInfo));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcUserSessionField_get_MacAddress(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcUserSessionField_set_MacAddress(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 21 bytes");
        return -1;
    }
    // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
    // memcpy(self->data.MacAddress, buf, len);
    strncpy(self->data.MacAddress, buf, sizeof(self->data.MacAddress));
    return 0;
}
            
///登录备注
// TThostFtdcLoginRemarkType char[36]
static PyObject *PyCThostFtdcUserSessionField_get_LoginRemark(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginRemark, (Py_ssize_t)sizeof(self->data.LoginRemark));
    return PyBytes_FromString(self->data.LoginRemark);
}

///登录备注
// TThostFtdcLoginRemarkType char[36]
static int PyCThostFtdcUserSessionField_set_LoginRemark(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 36 bytes");
        return -1;
    }
    // memset(self->data.LoginRemark, 0, sizeof(self->data.LoginRemark));
    // memcpy(self->data.LoginRemark, buf, len);
    strncpy(self->data.LoginRemark, buf, sizeof(self->data.LoginRemark));
    return 0;
}
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcUserSessionField_get_IPAddress(PyCThostFtdcUserSessionField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcUserSessionField_set_IPAddress(PyCThostFtdcUserSessionField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
    // memcpy(self->data.IPAddress, buf, len);
    strncpy(self->data.IPAddress, buf, sizeof(self->data.IPAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcUserSessionField_getset[] = {
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcUserSessionField_get_FrontID, (setter)PyCThostFtdcUserSessionField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcUserSessionField_get_SessionID, (setter)PyCThostFtdcUserSessionField_set_SessionID, (char *)"SessionID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcUserSessionField_get_BrokerID, (setter)PyCThostFtdcUserSessionField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcUserSessionField_get_UserID, (setter)PyCThostFtdcUserSessionField_set_UserID, (char *)"UserID", NULL},
    ///登录日期 
    {(char *)"LoginDate", (getter)PyCThostFtdcUserSessionField_get_LoginDate, (setter)PyCThostFtdcUserSessionField_set_LoginDate, (char *)"LoginDate", NULL},
    ///登录时间 
    {(char *)"LoginTime", (getter)PyCThostFtdcUserSessionField_get_LoginTime, (setter)PyCThostFtdcUserSessionField_set_LoginTime, (char *)"LoginTime", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcUserSessionField_get_reserve1, (setter)PyCThostFtdcUserSessionField_set_reserve1, (char *)"reserve1", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcUserSessionField_get_UserProductInfo, (setter)PyCThostFtdcUserSessionField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///接口端产品信息 
    {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcUserSessionField_get_InterfaceProductInfo, (setter)PyCThostFtdcUserSessionField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
    ///协议信息 
    {(char *)"ProtocolInfo", (getter)PyCThostFtdcUserSessionField_get_ProtocolInfo, (setter)PyCThostFtdcUserSessionField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcUserSessionField_get_MacAddress, (setter)PyCThostFtdcUserSessionField_set_MacAddress, (char *)"MacAddress", NULL},
    ///登录备注 
    {(char *)"LoginRemark", (getter)PyCThostFtdcUserSessionField_get_LoginRemark, (setter)PyCThostFtdcUserSessionField_set_LoginRemark, (char *)"LoginRemark", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcUserSessionField_get_IPAddress, (setter)PyCThostFtdcUserSessionField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcUserSessionFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcUserSessionField",	/* tp_name */
	sizeof(PyCThostFtdcUserSessionField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcUserSessionField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcUserSessionField_repr,   /* tp_repr */
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
	"CThostFtdcUserSessionField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcUserSessionField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcUserSessionField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcUserSessionField_new,       /* tp_new */
};

int PyCThostFtdcUserSessionFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcUserSessionField  */
	if (PyType_Ready(&PyCThostFtdcUserSessionFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcUserSessionField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcUserSessionFieldType);
    if( PyModule_AddObject(module, "CThostFtdcUserSessionField", (PyObject *)&PyCThostFtdcUserSessionFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcUserSessionField to module");
        Py_DECREF(&PyCThostFtdcUserSessionFieldType);
		return -1;
    }

    return 0;
}
