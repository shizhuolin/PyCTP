
#include "PyCThostFtdcReqUserLoginWithOTPField.h"

///用户发出带动态验证码的登录请求请求

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginWithOTPField *self = (PyCThostFtdcReqUserLoginWithOTPField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginWithOTPField_init(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "OTPPassword", "ClientIPPort", "ClientIPAddress",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *ReqUserLoginWithOTPField_TradingDay = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqUserLoginWithOTPField_BrokerID = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ReqUserLoginWithOTPField_UserID = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_UserID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginWithOTPField_Password = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_Password_len = 0;
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginWithOTPField_UserProductInfo = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_UserProductInfo_len = 0;
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginWithOTPField_InterfaceProductInfo = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_InterfaceProductInfo_len = 0;
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    const char *ReqUserLoginWithOTPField_ProtocolInfo = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_ProtocolInfo_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ReqUserLoginWithOTPField_MacAddress = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_MacAddress_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ReqUserLoginWithOTPField_reserve1 = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_reserve1_len = 0;
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    const char *ReqUserLoginWithOTPField_LoginRemark = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_LoginRemark_len = 0;
            
    ///OTP密码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginWithOTPField_OTPPassword = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_OTPPassword_len = 0;
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    int ReqUserLoginWithOTPField_ClientIPPort = 0;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ReqUserLoginWithOTPField_ClientIPAddress = NULL;
    Py_ssize_t ReqUserLoginWithOTPField_ClientIPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

        , &ReqUserLoginWithOTPField_TradingDay, &ReqUserLoginWithOTPField_TradingDay_len 
        , &ReqUserLoginWithOTPField_BrokerID, &ReqUserLoginWithOTPField_BrokerID_len 
        , &ReqUserLoginWithOTPField_UserID, &ReqUserLoginWithOTPField_UserID_len 
        , &ReqUserLoginWithOTPField_Password, &ReqUserLoginWithOTPField_Password_len 
        , &ReqUserLoginWithOTPField_UserProductInfo, &ReqUserLoginWithOTPField_UserProductInfo_len 
        , &ReqUserLoginWithOTPField_InterfaceProductInfo, &ReqUserLoginWithOTPField_InterfaceProductInfo_len 
        , &ReqUserLoginWithOTPField_ProtocolInfo, &ReqUserLoginWithOTPField_ProtocolInfo_len 
        , &ReqUserLoginWithOTPField_MacAddress, &ReqUserLoginWithOTPField_MacAddress_len 
        , &ReqUserLoginWithOTPField_reserve1, &ReqUserLoginWithOTPField_reserve1_len 
        , &ReqUserLoginWithOTPField_LoginRemark, &ReqUserLoginWithOTPField_LoginRemark_len 
        , &ReqUserLoginWithOTPField_OTPPassword, &ReqUserLoginWithOTPField_OTPPassword_len 
        , &ReqUserLoginWithOTPField_ClientIPPort 
        , &ReqUserLoginWithOTPField_ClientIPAddress, &ReqUserLoginWithOTPField_ClientIPAddress_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( ReqUserLoginWithOTPField_TradingDay != NULL ) {
        if(ReqUserLoginWithOTPField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqUserLoginWithOTPField_TradingDay, ReqUserLoginWithOTPField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqUserLoginWithOTPField_TradingDay, sizeof(self->data.TradingDay) );
        ReqUserLoginWithOTPField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqUserLoginWithOTPField_BrokerID != NULL ) {
        if(ReqUserLoginWithOTPField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqUserLoginWithOTPField_BrokerID, ReqUserLoginWithOTPField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqUserLoginWithOTPField_BrokerID, sizeof(self->data.BrokerID) );
        ReqUserLoginWithOTPField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ReqUserLoginWithOTPField_UserID != NULL ) {
        if(ReqUserLoginWithOTPField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqUserLoginWithOTPField_UserID, ReqUserLoginWithOTPField_UserID_len);        
        strncpy(self->data.UserID, ReqUserLoginWithOTPField_UserID, sizeof(self->data.UserID) );
        ReqUserLoginWithOTPField_UserID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginWithOTPField_Password != NULL ) {
        if(ReqUserLoginWithOTPField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqUserLoginWithOTPField_Password, ReqUserLoginWithOTPField_Password_len);        
        strncpy(self->data.Password, ReqUserLoginWithOTPField_Password, sizeof(self->data.Password) );
        ReqUserLoginWithOTPField_Password = NULL;
    }
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginWithOTPField_UserProductInfo != NULL ) {
        if(ReqUserLoginWithOTPField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, ReqUserLoginWithOTPField_UserProductInfo, ReqUserLoginWithOTPField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, ReqUserLoginWithOTPField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        ReqUserLoginWithOTPField_UserProductInfo = NULL;
    }
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginWithOTPField_InterfaceProductInfo != NULL ) {
        if(ReqUserLoginWithOTPField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
            return -1;
        }
        // memset(self->data.InterfaceProductInfo, 0, sizeof(self->data.InterfaceProductInfo));
        // memcpy(self->data.InterfaceProductInfo, ReqUserLoginWithOTPField_InterfaceProductInfo, ReqUserLoginWithOTPField_InterfaceProductInfo_len);        
        strncpy(self->data.InterfaceProductInfo, ReqUserLoginWithOTPField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
        ReqUserLoginWithOTPField_InterfaceProductInfo = NULL;
    }
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    if( ReqUserLoginWithOTPField_ProtocolInfo != NULL ) {
        if(ReqUserLoginWithOTPField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
            return -1;
        }
        // memset(self->data.ProtocolInfo, 0, sizeof(self->data.ProtocolInfo));
        // memcpy(self->data.ProtocolInfo, ReqUserLoginWithOTPField_ProtocolInfo, ReqUserLoginWithOTPField_ProtocolInfo_len);        
        strncpy(self->data.ProtocolInfo, ReqUserLoginWithOTPField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
        ReqUserLoginWithOTPField_ProtocolInfo = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ReqUserLoginWithOTPField_MacAddress != NULL ) {
        if(ReqUserLoginWithOTPField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ReqUserLoginWithOTPField_MacAddress, ReqUserLoginWithOTPField_MacAddress_len);        
        strncpy(self->data.MacAddress, ReqUserLoginWithOTPField_MacAddress, sizeof(self->data.MacAddress) );
        ReqUserLoginWithOTPField_MacAddress = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ReqUserLoginWithOTPField_reserve1 != NULL ) {
        if(ReqUserLoginWithOTPField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ReqUserLoginWithOTPField_reserve1, ReqUserLoginWithOTPField_reserve1_len);        
        strncpy(self->data.reserve1, ReqUserLoginWithOTPField_reserve1, sizeof(self->data.reserve1) );
        ReqUserLoginWithOTPField_reserve1 = NULL;
    }
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    if( ReqUserLoginWithOTPField_LoginRemark != NULL ) {
        if(ReqUserLoginWithOTPField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
            return -1;
        }
        // memset(self->data.LoginRemark, 0, sizeof(self->data.LoginRemark));
        // memcpy(self->data.LoginRemark, ReqUserLoginWithOTPField_LoginRemark, ReqUserLoginWithOTPField_LoginRemark_len);        
        strncpy(self->data.LoginRemark, ReqUserLoginWithOTPField_LoginRemark, sizeof(self->data.LoginRemark) );
        ReqUserLoginWithOTPField_LoginRemark = NULL;
    }
            
    ///OTP密码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginWithOTPField_OTPPassword != NULL ) {
        if(ReqUserLoginWithOTPField_OTPPassword_len > (Py_ssize_t)sizeof(self->data.OTPPassword)) {
            PyErr_Format(PyExc_ValueError, "OTPPassword too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_OTPPassword_len, (Py_ssize_t)sizeof(self->data.OTPPassword));
            return -1;
        }
        // memset(self->data.OTPPassword, 0, sizeof(self->data.OTPPassword));
        // memcpy(self->data.OTPPassword, ReqUserLoginWithOTPField_OTPPassword, ReqUserLoginWithOTPField_OTPPassword_len);        
        strncpy(self->data.OTPPassword, ReqUserLoginWithOTPField_OTPPassword, sizeof(self->data.OTPPassword) );
        ReqUserLoginWithOTPField_OTPPassword = NULL;
    }
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    self->data.ClientIPPort = ReqUserLoginWithOTPField_ClientIPPort;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    if( ReqUserLoginWithOTPField_ClientIPAddress != NULL ) {
        if(ReqUserLoginWithOTPField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginWithOTPField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
            return -1;
        }
        // memset(self->data.ClientIPAddress, 0, sizeof(self->data.ClientIPAddress));
        // memcpy(self->data.ClientIPAddress, ReqUserLoginWithOTPField_ClientIPAddress, ReqUserLoginWithOTPField_ClientIPAddress_len);        
        strncpy(self->data.ClientIPAddress, ReqUserLoginWithOTPField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
        ReqUserLoginWithOTPField_ClientIPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqUserLoginWithOTPField_dealloc(PyCThostFtdcReqUserLoginWithOTPField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginWithOTPField_repr(PyCThostFtdcReqUserLoginWithOTPField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"InterfaceProductInfo", self->data.InterfaceProductInfo//, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo) 
        ,"ProtocolInfo", self->data.ProtocolInfo//, (Py_ssize_t)sizeof(self->data.ProtocolInfo) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"LoginRemark", self->data.LoginRemark//, (Py_ssize_t)sizeof(self->data.LoginRemark) 
        ,"OTPPassword", self->data.OTPPassword//, (Py_ssize_t)sizeof(self->data.OTPPassword) 
        ,"ClientIPPort", self->data.ClientIPPort 
        ,"ClientIPAddress", self->data.ClientIPAddress//, (Py_ssize_t)sizeof(self->data.ClientIPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithOTPField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_TradingDay(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcReqUserLoginWithOTPField_set_TradingDay(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
    // memcpy(self->data.TradingDay, buf, len);
    strncpy(self->data.TradingDay, buf, sizeof(self->data.TradingDay));
    return 0;
}
            
///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_BrokerID(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqUserLoginWithOTPField_set_BrokerID(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_UserID(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqUserLoginWithOTPField_set_UserID(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
            
///密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_Password(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginWithOTPField_set_Password(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Password, 0, sizeof(self->data.Password));
    // memcpy(self->data.Password, buf, len);
    strncpy(self->data.Password, buf, sizeof(self->data.Password));
    return 0;
}
            
///用户端产品信息
// TThostFtdcProductInfoType char[11]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_UserProductInfo(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginWithOTPField_set_UserProductInfo(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InterfaceProductInfo, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
    return PyBytes_FromString(self->data.InterfaceProductInfo);
}

///接口端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginWithOTPField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_ProtocolInfo(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProtocolInfo, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
    return PyBytes_FromString(self->data.ProtocolInfo);
}

///协议信息
// TThostFtdcProtocolInfoType char[11]
static int PyCThostFtdcReqUserLoginWithOTPField_set_ProtocolInfo(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_MacAddress(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcReqUserLoginWithOTPField_set_MacAddress(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_reserve1(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcReqUserLoginWithOTPField_set_reserve1(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
            
///登录备注
// TThostFtdcLoginRemarkType char[36]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_LoginRemark(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginRemark, (Py_ssize_t)sizeof(self->data.LoginRemark));
    return PyBytes_FromString(self->data.LoginRemark);
}

///登录备注
// TThostFtdcLoginRemarkType char[36]
static int PyCThostFtdcReqUserLoginWithOTPField_set_LoginRemark(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
            
///OTP密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_OTPPassword(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OTPPassword, (Py_ssize_t)sizeof(self->data.OTPPassword));
    return PyBytes_FromString(self->data.OTPPassword);
}

///OTP密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginWithOTPField_set_OTPPassword(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OTPPassword Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OTPPassword)) {
        PyErr_SetString(PyExc_ValueError, "OTPPassword must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.OTPPassword, 0, sizeof(self->data.OTPPassword));
    // memcpy(self->data.OTPPassword, buf, len);
    strncpy(self->data.OTPPassword, buf, sizeof(self->data.OTPPassword));
    return 0;
}
            
///终端IP端口
// TThostFtdcIPPortType int
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPPort(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ClientIPPort);
#else
    return PyInt_FromLong(self->data.ClientIPPort);
#endif
}

///终端IP端口
// TThostFtdcIPPortType int
static int PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPPort(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
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
        
///终端IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPAddress(PyCThostFtdcReqUserLoginWithOTPField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientIPAddress, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
    return PyBytes_FromString(self->data.ClientIPAddress);
}

///终端IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPAddress(PyCThostFtdcReqUserLoginWithOTPField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
        PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 33 bytes");
        return -1;
    }
    // memset(self->data.ClientIPAddress, 0, sizeof(self->data.ClientIPAddress));
    // memcpy(self->data.ClientIPAddress, buf, len);
    strncpy(self->data.ClientIPAddress, buf, sizeof(self->data.ClientIPAddress));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReqUserLoginWithOTPField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_UserID, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_UserID, (char *)"UserID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_Password, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_Password, (char *)"Password", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///接口端产品信息 
    {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
    ///协议信息 
    {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_MacAddress, (char *)"MacAddress", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_reserve1, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_reserve1, (char *)"reserve1", NULL},
    ///登录备注 
    {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_LoginRemark, (char *)"LoginRemark", NULL},
    ///OTP密码 
    {(char *)"OTPPassword", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_OTPPassword, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_OTPPassword, (char *)"OTPPassword", NULL},
    ///终端IP端口 
    {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
    ///终端IP地址 
    {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginWithOTPField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginWithOTPField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginWithOTPFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginWithOTPField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginWithOTPField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginWithOTPField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginWithOTPField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginWithOTPField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginWithOTPField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginWithOTPField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginWithOTPField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginWithOTPFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginWithOTPField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginWithOTPFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginWithOTPField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginWithOTPFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithOTPField", (PyObject *)&PyCThostFtdcReqUserLoginWithOTPFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithOTPField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginWithOTPFieldType);
		return -1;
    }

    return 0;
}
