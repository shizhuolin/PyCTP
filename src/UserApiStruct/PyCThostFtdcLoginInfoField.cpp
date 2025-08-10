
#include "PyCThostFtdcLoginInfoField.h"

///登录信息

static PyObject *PyCThostFtdcLoginInfoField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcLoginInfoField *self = (PyCThostFtdcLoginInfoField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcLoginInfoField_init(PyCThostFtdcLoginInfoField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"FrontID", "SessionID", "BrokerID", "UserID", "LoginDate", "LoginTime", "reserve1", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "SystemName", "PasswordDeprecated", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "MacAddress", "OneTimePassword", "INETime", "IsQryControl", "LoginRemark", "Password", "IPAddress",  NULL};


    ///前置编号
    // TThostFtdcFrontIDType int
    int LoginInfoField_FrontID = 0;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    int LoginInfoField_SessionID = 0;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *LoginInfoField_BrokerID = NULL;
    Py_ssize_t LoginInfoField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *LoginInfoField_UserID = NULL;
    Py_ssize_t LoginInfoField_UserID_len = 0;
            
    ///登录日期
    // TThostFtdcDateType char[9]
    const char *LoginInfoField_LoginDate = NULL;
    Py_ssize_t LoginInfoField_LoginDate_len = 0;
            
    ///登录时间
    // TThostFtdcTimeType char[9]
    const char *LoginInfoField_LoginTime = NULL;
    Py_ssize_t LoginInfoField_LoginTime_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *LoginInfoField_reserve1 = NULL;
    Py_ssize_t LoginInfoField_reserve1_len = 0;
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *LoginInfoField_UserProductInfo = NULL;
    Py_ssize_t LoginInfoField_UserProductInfo_len = 0;
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *LoginInfoField_InterfaceProductInfo = NULL;
    Py_ssize_t LoginInfoField_InterfaceProductInfo_len = 0;
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    const char *LoginInfoField_ProtocolInfo = NULL;
    Py_ssize_t LoginInfoField_ProtocolInfo_len = 0;
            
    ///系统名称
    // TThostFtdcSystemNameType char[41]
    const char *LoginInfoField_SystemName = NULL;
    Py_ssize_t LoginInfoField_SystemName_len = 0;
            
    ///密码,已弃用
    // TThostFtdcPasswordType char[41]
    const char *LoginInfoField_PasswordDeprecated = NULL;
    Py_ssize_t LoginInfoField_PasswordDeprecated_len = 0;
            
    ///最大报单引用
    // TThostFtdcOrderRefType char[13]
    const char *LoginInfoField_MaxOrderRef = NULL;
    Py_ssize_t LoginInfoField_MaxOrderRef_len = 0;
            
    ///上期所时间
    // TThostFtdcTimeType char[9]
    const char *LoginInfoField_SHFETime = NULL;
    Py_ssize_t LoginInfoField_SHFETime_len = 0;
            
    ///大商所时间
    // TThostFtdcTimeType char[9]
    const char *LoginInfoField_DCETime = NULL;
    Py_ssize_t LoginInfoField_DCETime_len = 0;
            
    ///郑商所时间
    // TThostFtdcTimeType char[9]
    const char *LoginInfoField_CZCETime = NULL;
    Py_ssize_t LoginInfoField_CZCETime_len = 0;
            
    ///中金所时间
    // TThostFtdcTimeType char[9]
    const char *LoginInfoField_FFEXTime = NULL;
    Py_ssize_t LoginInfoField_FFEXTime_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *LoginInfoField_MacAddress = NULL;
    Py_ssize_t LoginInfoField_MacAddress_len = 0;
            
    ///动态密码
    // TThostFtdcPasswordType char[41]
    const char *LoginInfoField_OneTimePassword = NULL;
    Py_ssize_t LoginInfoField_OneTimePassword_len = 0;
            
    ///能源中心时间
    // TThostFtdcTimeType char[9]
    const char *LoginInfoField_INETime = NULL;
    Py_ssize_t LoginInfoField_INETime_len = 0;
            
    ///查询时是否需要流控
    // TThostFtdcBoolType int
    int LoginInfoField_IsQryControl = 0;
        
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    const char *LoginInfoField_LoginRemark = NULL;
    Py_ssize_t LoginInfoField_LoginRemark_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *LoginInfoField_Password = NULL;
    Py_ssize_t LoginInfoField_Password_len = 0;
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    const char *LoginInfoField_IPAddress = NULL;
    Py_ssize_t LoginInfoField_IPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#iy#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iis#s#s#s#s#s#s#s#s#s#s#s#s#s#s#s#s#s#is#s#s#", (char **)kwlist
#endif

        , &LoginInfoField_FrontID 
        , &LoginInfoField_SessionID 
        , &LoginInfoField_BrokerID, &LoginInfoField_BrokerID_len 
        , &LoginInfoField_UserID, &LoginInfoField_UserID_len 
        , &LoginInfoField_LoginDate, &LoginInfoField_LoginDate_len 
        , &LoginInfoField_LoginTime, &LoginInfoField_LoginTime_len 
        , &LoginInfoField_reserve1, &LoginInfoField_reserve1_len 
        , &LoginInfoField_UserProductInfo, &LoginInfoField_UserProductInfo_len 
        , &LoginInfoField_InterfaceProductInfo, &LoginInfoField_InterfaceProductInfo_len 
        , &LoginInfoField_ProtocolInfo, &LoginInfoField_ProtocolInfo_len 
        , &LoginInfoField_SystemName, &LoginInfoField_SystemName_len 
        , &LoginInfoField_PasswordDeprecated, &LoginInfoField_PasswordDeprecated_len 
        , &LoginInfoField_MaxOrderRef, &LoginInfoField_MaxOrderRef_len 
        , &LoginInfoField_SHFETime, &LoginInfoField_SHFETime_len 
        , &LoginInfoField_DCETime, &LoginInfoField_DCETime_len 
        , &LoginInfoField_CZCETime, &LoginInfoField_CZCETime_len 
        , &LoginInfoField_FFEXTime, &LoginInfoField_FFEXTime_len 
        , &LoginInfoField_MacAddress, &LoginInfoField_MacAddress_len 
        , &LoginInfoField_OneTimePassword, &LoginInfoField_OneTimePassword_len 
        , &LoginInfoField_INETime, &LoginInfoField_INETime_len 
        , &LoginInfoField_IsQryControl 
        , &LoginInfoField_LoginRemark, &LoginInfoField_LoginRemark_len 
        , &LoginInfoField_Password, &LoginInfoField_Password_len 
        , &LoginInfoField_IPAddress, &LoginInfoField_IPAddress_len 


    )) {
        return -1;
    }


    ///前置编号
    // TThostFtdcFrontIDType int
    self->data.FrontID = LoginInfoField_FrontID;
        
    ///会话编号
    // TThostFtdcSessionIDType int
    self->data.SessionID = LoginInfoField_SessionID;
        
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( LoginInfoField_BrokerID != NULL ) {
        if(LoginInfoField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", LoginInfoField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, LoginInfoField_BrokerID, LoginInfoField_BrokerID_len);        
        strncpy(self->data.BrokerID, LoginInfoField_BrokerID, sizeof(self->data.BrokerID) );
        LoginInfoField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( LoginInfoField_UserID != NULL ) {
        if(LoginInfoField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", LoginInfoField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, LoginInfoField_UserID, LoginInfoField_UserID_len);        
        strncpy(self->data.UserID, LoginInfoField_UserID, sizeof(self->data.UserID) );
        LoginInfoField_UserID = NULL;
    }
            
    ///登录日期
    // TThostFtdcDateType char[9]
    if( LoginInfoField_LoginDate != NULL ) {
        if(LoginInfoField_LoginDate_len > (Py_ssize_t)sizeof(self->data.LoginDate)) {
            PyErr_Format(PyExc_ValueError, "LoginDate too long: length=%zd (max allowed is %zd)", LoginInfoField_LoginDate_len, (Py_ssize_t)sizeof(self->data.LoginDate));
            return -1;
        }
        // memset(self->data.LoginDate, 0, sizeof(self->data.LoginDate));
        // memcpy(self->data.LoginDate, LoginInfoField_LoginDate, LoginInfoField_LoginDate_len);        
        strncpy(self->data.LoginDate, LoginInfoField_LoginDate, sizeof(self->data.LoginDate) );
        LoginInfoField_LoginDate = NULL;
    }
            
    ///登录时间
    // TThostFtdcTimeType char[9]
    if( LoginInfoField_LoginTime != NULL ) {
        if(LoginInfoField_LoginTime_len > (Py_ssize_t)sizeof(self->data.LoginTime)) {
            PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is %zd)", LoginInfoField_LoginTime_len, (Py_ssize_t)sizeof(self->data.LoginTime));
            return -1;
        }
        // memset(self->data.LoginTime, 0, sizeof(self->data.LoginTime));
        // memcpy(self->data.LoginTime, LoginInfoField_LoginTime, LoginInfoField_LoginTime_len);        
        strncpy(self->data.LoginTime, LoginInfoField_LoginTime, sizeof(self->data.LoginTime) );
        LoginInfoField_LoginTime = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( LoginInfoField_reserve1 != NULL ) {
        if(LoginInfoField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", LoginInfoField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, LoginInfoField_reserve1, LoginInfoField_reserve1_len);        
        strncpy(self->data.reserve1, LoginInfoField_reserve1, sizeof(self->data.reserve1) );
        LoginInfoField_reserve1 = NULL;
    }
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( LoginInfoField_UserProductInfo != NULL ) {
        if(LoginInfoField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", LoginInfoField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, LoginInfoField_UserProductInfo, LoginInfoField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, LoginInfoField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        LoginInfoField_UserProductInfo = NULL;
    }
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    if( LoginInfoField_InterfaceProductInfo != NULL ) {
        if(LoginInfoField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", LoginInfoField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
            return -1;
        }
        // memset(self->data.InterfaceProductInfo, 0, sizeof(self->data.InterfaceProductInfo));
        // memcpy(self->data.InterfaceProductInfo, LoginInfoField_InterfaceProductInfo, LoginInfoField_InterfaceProductInfo_len);        
        strncpy(self->data.InterfaceProductInfo, LoginInfoField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
        LoginInfoField_InterfaceProductInfo = NULL;
    }
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    if( LoginInfoField_ProtocolInfo != NULL ) {
        if(LoginInfoField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", LoginInfoField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
            return -1;
        }
        // memset(self->data.ProtocolInfo, 0, sizeof(self->data.ProtocolInfo));
        // memcpy(self->data.ProtocolInfo, LoginInfoField_ProtocolInfo, LoginInfoField_ProtocolInfo_len);        
        strncpy(self->data.ProtocolInfo, LoginInfoField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
        LoginInfoField_ProtocolInfo = NULL;
    }
            
    ///系统名称
    // TThostFtdcSystemNameType char[41]
    if( LoginInfoField_SystemName != NULL ) {
        if(LoginInfoField_SystemName_len > (Py_ssize_t)sizeof(self->data.SystemName)) {
            PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is %zd)", LoginInfoField_SystemName_len, (Py_ssize_t)sizeof(self->data.SystemName));
            return -1;
        }
        // memset(self->data.SystemName, 0, sizeof(self->data.SystemName));
        // memcpy(self->data.SystemName, LoginInfoField_SystemName, LoginInfoField_SystemName_len);        
        strncpy(self->data.SystemName, LoginInfoField_SystemName, sizeof(self->data.SystemName) );
        LoginInfoField_SystemName = NULL;
    }
            
    ///密码,已弃用
    // TThostFtdcPasswordType char[41]
    if( LoginInfoField_PasswordDeprecated != NULL ) {
        if(LoginInfoField_PasswordDeprecated_len > (Py_ssize_t)sizeof(self->data.PasswordDeprecated)) {
            PyErr_Format(PyExc_ValueError, "PasswordDeprecated too long: length=%zd (max allowed is %zd)", LoginInfoField_PasswordDeprecated_len, (Py_ssize_t)sizeof(self->data.PasswordDeprecated));
            return -1;
        }
        // memset(self->data.PasswordDeprecated, 0, sizeof(self->data.PasswordDeprecated));
        // memcpy(self->data.PasswordDeprecated, LoginInfoField_PasswordDeprecated, LoginInfoField_PasswordDeprecated_len);        
        strncpy(self->data.PasswordDeprecated, LoginInfoField_PasswordDeprecated, sizeof(self->data.PasswordDeprecated) );
        LoginInfoField_PasswordDeprecated = NULL;
    }
            
    ///最大报单引用
    // TThostFtdcOrderRefType char[13]
    if( LoginInfoField_MaxOrderRef != NULL ) {
        if(LoginInfoField_MaxOrderRef_len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is %zd)", LoginInfoField_MaxOrderRef_len, (Py_ssize_t)sizeof(self->data.MaxOrderRef));
            return -1;
        }
        // memset(self->data.MaxOrderRef, 0, sizeof(self->data.MaxOrderRef));
        // memcpy(self->data.MaxOrderRef, LoginInfoField_MaxOrderRef, LoginInfoField_MaxOrderRef_len);        
        strncpy(self->data.MaxOrderRef, LoginInfoField_MaxOrderRef, sizeof(self->data.MaxOrderRef) );
        LoginInfoField_MaxOrderRef = NULL;
    }
            
    ///上期所时间
    // TThostFtdcTimeType char[9]
    if( LoginInfoField_SHFETime != NULL ) {
        if(LoginInfoField_SHFETime_len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
            PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is %zd)", LoginInfoField_SHFETime_len, (Py_ssize_t)sizeof(self->data.SHFETime));
            return -1;
        }
        // memset(self->data.SHFETime, 0, sizeof(self->data.SHFETime));
        // memcpy(self->data.SHFETime, LoginInfoField_SHFETime, LoginInfoField_SHFETime_len);        
        strncpy(self->data.SHFETime, LoginInfoField_SHFETime, sizeof(self->data.SHFETime) );
        LoginInfoField_SHFETime = NULL;
    }
            
    ///大商所时间
    // TThostFtdcTimeType char[9]
    if( LoginInfoField_DCETime != NULL ) {
        if(LoginInfoField_DCETime_len > (Py_ssize_t)sizeof(self->data.DCETime)) {
            PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is %zd)", LoginInfoField_DCETime_len, (Py_ssize_t)sizeof(self->data.DCETime));
            return -1;
        }
        // memset(self->data.DCETime, 0, sizeof(self->data.DCETime));
        // memcpy(self->data.DCETime, LoginInfoField_DCETime, LoginInfoField_DCETime_len);        
        strncpy(self->data.DCETime, LoginInfoField_DCETime, sizeof(self->data.DCETime) );
        LoginInfoField_DCETime = NULL;
    }
            
    ///郑商所时间
    // TThostFtdcTimeType char[9]
    if( LoginInfoField_CZCETime != NULL ) {
        if(LoginInfoField_CZCETime_len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
            PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is %zd)", LoginInfoField_CZCETime_len, (Py_ssize_t)sizeof(self->data.CZCETime));
            return -1;
        }
        // memset(self->data.CZCETime, 0, sizeof(self->data.CZCETime));
        // memcpy(self->data.CZCETime, LoginInfoField_CZCETime, LoginInfoField_CZCETime_len);        
        strncpy(self->data.CZCETime, LoginInfoField_CZCETime, sizeof(self->data.CZCETime) );
        LoginInfoField_CZCETime = NULL;
    }
            
    ///中金所时间
    // TThostFtdcTimeType char[9]
    if( LoginInfoField_FFEXTime != NULL ) {
        if(LoginInfoField_FFEXTime_len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
            PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is %zd)", LoginInfoField_FFEXTime_len, (Py_ssize_t)sizeof(self->data.FFEXTime));
            return -1;
        }
        // memset(self->data.FFEXTime, 0, sizeof(self->data.FFEXTime));
        // memcpy(self->data.FFEXTime, LoginInfoField_FFEXTime, LoginInfoField_FFEXTime_len);        
        strncpy(self->data.FFEXTime, LoginInfoField_FFEXTime, sizeof(self->data.FFEXTime) );
        LoginInfoField_FFEXTime = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( LoginInfoField_MacAddress != NULL ) {
        if(LoginInfoField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", LoginInfoField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, LoginInfoField_MacAddress, LoginInfoField_MacAddress_len);        
        strncpy(self->data.MacAddress, LoginInfoField_MacAddress, sizeof(self->data.MacAddress) );
        LoginInfoField_MacAddress = NULL;
    }
            
    ///动态密码
    // TThostFtdcPasswordType char[41]
    if( LoginInfoField_OneTimePassword != NULL ) {
        if(LoginInfoField_OneTimePassword_len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
            PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is %zd)", LoginInfoField_OneTimePassword_len, (Py_ssize_t)sizeof(self->data.OneTimePassword));
            return -1;
        }
        // memset(self->data.OneTimePassword, 0, sizeof(self->data.OneTimePassword));
        // memcpy(self->data.OneTimePassword, LoginInfoField_OneTimePassword, LoginInfoField_OneTimePassword_len);        
        strncpy(self->data.OneTimePassword, LoginInfoField_OneTimePassword, sizeof(self->data.OneTimePassword) );
        LoginInfoField_OneTimePassword = NULL;
    }
            
    ///能源中心时间
    // TThostFtdcTimeType char[9]
    if( LoginInfoField_INETime != NULL ) {
        if(LoginInfoField_INETime_len > (Py_ssize_t)sizeof(self->data.INETime)) {
            PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is %zd)", LoginInfoField_INETime_len, (Py_ssize_t)sizeof(self->data.INETime));
            return -1;
        }
        // memset(self->data.INETime, 0, sizeof(self->data.INETime));
        // memcpy(self->data.INETime, LoginInfoField_INETime, LoginInfoField_INETime_len);        
        strncpy(self->data.INETime, LoginInfoField_INETime, sizeof(self->data.INETime) );
        LoginInfoField_INETime = NULL;
    }
            
    ///查询时是否需要流控
    // TThostFtdcBoolType int
    self->data.IsQryControl = LoginInfoField_IsQryControl;
        
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    if( LoginInfoField_LoginRemark != NULL ) {
        if(LoginInfoField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", LoginInfoField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
            return -1;
        }
        // memset(self->data.LoginRemark, 0, sizeof(self->data.LoginRemark));
        // memcpy(self->data.LoginRemark, LoginInfoField_LoginRemark, LoginInfoField_LoginRemark_len);        
        strncpy(self->data.LoginRemark, LoginInfoField_LoginRemark, sizeof(self->data.LoginRemark) );
        LoginInfoField_LoginRemark = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( LoginInfoField_Password != NULL ) {
        if(LoginInfoField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", LoginInfoField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, LoginInfoField_Password, LoginInfoField_Password_len);        
        strncpy(self->data.Password, LoginInfoField_Password, sizeof(self->data.Password) );
        LoginInfoField_Password = NULL;
    }
            
    ///IP地址
    // TThostFtdcIPAddressType char[33]
    if( LoginInfoField_IPAddress != NULL ) {
        if(LoginInfoField_IPAddress_len > (Py_ssize_t)sizeof(self->data.IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is %zd)", LoginInfoField_IPAddress_len, (Py_ssize_t)sizeof(self->data.IPAddress));
            return -1;
        }
        // memset(self->data.IPAddress, 0, sizeof(self->data.IPAddress));
        // memcpy(self->data.IPAddress, LoginInfoField_IPAddress, LoginInfoField_IPAddress_len);        
        strncpy(self->data.IPAddress, LoginInfoField_IPAddress, sizeof(self->data.IPAddress) );
        LoginInfoField_IPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcLoginInfoField_dealloc(PyCThostFtdcLoginInfoField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcLoginInfoField_repr(PyCThostFtdcLoginInfoField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:i,s:i,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s}"
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
        ,"SystemName", self->data.SystemName//, (Py_ssize_t)sizeof(self->data.SystemName) 
        ,"PasswordDeprecated", self->data.PasswordDeprecated//, (Py_ssize_t)sizeof(self->data.PasswordDeprecated) 
        ,"MaxOrderRef", self->data.MaxOrderRef//, (Py_ssize_t)sizeof(self->data.MaxOrderRef) 
        ,"SHFETime", self->data.SHFETime//, (Py_ssize_t)sizeof(self->data.SHFETime) 
        ,"DCETime", self->data.DCETime//, (Py_ssize_t)sizeof(self->data.DCETime) 
        ,"CZCETime", self->data.CZCETime//, (Py_ssize_t)sizeof(self->data.CZCETime) 
        ,"FFEXTime", self->data.FFEXTime//, (Py_ssize_t)sizeof(self->data.FFEXTime) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"OneTimePassword", self->data.OneTimePassword//, (Py_ssize_t)sizeof(self->data.OneTimePassword) 
        ,"INETime", self->data.INETime//, (Py_ssize_t)sizeof(self->data.INETime) 
        ,"IsQryControl", self->data.IsQryControl 
        ,"LoginRemark", self->data.LoginRemark//, (Py_ssize_t)sizeof(self->data.LoginRemark) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"IPAddress", self->data.IPAddress//, (Py_ssize_t)sizeof(self->data.IPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginInfoField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///前置编号
// TThostFtdcFrontIDType int
static PyObject *PyCThostFtdcLoginInfoField_get_FrontID(PyCThostFtdcLoginInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.FrontID);
#else
    return PyInt_FromLong(self->data.FrontID);
#endif
}

///前置编号
// TThostFtdcFrontIDType int
static int PyCThostFtdcLoginInfoField_set_FrontID(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_SessionID(PyCThostFtdcLoginInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.SessionID);
#else
    return PyInt_FromLong(self->data.SessionID);
#endif
}

///会话编号
// TThostFtdcSessionIDType int
static int PyCThostFtdcLoginInfoField_set_SessionID(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_BrokerID(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcLoginInfoField_set_BrokerID(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_UserID(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcLoginInfoField_set_UserID(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_LoginDate(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginDate, (Py_ssize_t)sizeof(self->data.LoginDate));
    return PyBytes_FromString(self->data.LoginDate);
}

///登录日期
// TThostFtdcDateType char[9]
static int PyCThostFtdcLoginInfoField_set_LoginDate(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_LoginTime(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginTime, (Py_ssize_t)sizeof(self->data.LoginTime));
    return PyBytes_FromString(self->data.LoginTime);
}

///登录时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcLoginInfoField_set_LoginTime(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_reserve1(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcLoginInfoField_set_reserve1(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_UserProductInfo(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcLoginInfoField_set_UserProductInfo(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_InterfaceProductInfo(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InterfaceProductInfo, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
    return PyBytes_FromString(self->data.InterfaceProductInfo);
}

///接口端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcLoginInfoField_set_InterfaceProductInfo(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcLoginInfoField_get_ProtocolInfo(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProtocolInfo, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
    return PyBytes_FromString(self->data.ProtocolInfo);
}

///协议信息
// TThostFtdcProtocolInfoType char[11]
static int PyCThostFtdcLoginInfoField_set_ProtocolInfo(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
            
///系统名称
// TThostFtdcSystemNameType char[41]
static PyObject *PyCThostFtdcLoginInfoField_get_SystemName(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SystemName, (Py_ssize_t)sizeof(self->data.SystemName));
    return PyBytes_FromString(self->data.SystemName);
}

///系统名称
// TThostFtdcSystemNameType char[41]
static int PyCThostFtdcLoginInfoField_set_SystemName(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SystemName)) {
        PyErr_SetString(PyExc_ValueError, "SystemName must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.SystemName, 0, sizeof(self->data.SystemName));
    // memcpy(self->data.SystemName, buf, len);
    strncpy(self->data.SystemName, buf, sizeof(self->data.SystemName));
    return 0;
}
            
///密码,已弃用
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcLoginInfoField_get_PasswordDeprecated(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.PasswordDeprecated, (Py_ssize_t)sizeof(self->data.PasswordDeprecated));
    return PyBytes_FromString(self->data.PasswordDeprecated);
}

///密码,已弃用
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcLoginInfoField_set_PasswordDeprecated(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PasswordDeprecated Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PasswordDeprecated)) {
        PyErr_SetString(PyExc_ValueError, "PasswordDeprecated must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.PasswordDeprecated, 0, sizeof(self->data.PasswordDeprecated));
    // memcpy(self->data.PasswordDeprecated, buf, len);
    strncpy(self->data.PasswordDeprecated, buf, sizeof(self->data.PasswordDeprecated));
    return 0;
}
            
///最大报单引用
// TThostFtdcOrderRefType char[13]
static PyObject *PyCThostFtdcLoginInfoField_get_MaxOrderRef(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MaxOrderRef, (Py_ssize_t)sizeof(self->data.MaxOrderRef));
    return PyBytes_FromString(self->data.MaxOrderRef);
}

///最大报单引用
// TThostFtdcOrderRefType char[13]
static int PyCThostFtdcLoginInfoField_set_MaxOrderRef(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "MaxOrderRef Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.MaxOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "MaxOrderRef must be less than 13 bytes");
        return -1;
    }
    // memset(self->data.MaxOrderRef, 0, sizeof(self->data.MaxOrderRef));
    // memcpy(self->data.MaxOrderRef, buf, len);
    strncpy(self->data.MaxOrderRef, buf, sizeof(self->data.MaxOrderRef));
    return 0;
}
            
///上期所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcLoginInfoField_get_SHFETime(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.SHFETime, (Py_ssize_t)sizeof(self->data.SHFETime));
    return PyBytes_FromString(self->data.SHFETime);
}

///上期所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcLoginInfoField_set_SHFETime(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "SHFETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.SHFETime)) {
        PyErr_SetString(PyExc_ValueError, "SHFETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.SHFETime, 0, sizeof(self->data.SHFETime));
    // memcpy(self->data.SHFETime, buf, len);
    strncpy(self->data.SHFETime, buf, sizeof(self->data.SHFETime));
    return 0;
}
            
///大商所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcLoginInfoField_get_DCETime(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.DCETime, (Py_ssize_t)sizeof(self->data.DCETime));
    return PyBytes_FromString(self->data.DCETime);
}

///大商所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcLoginInfoField_set_DCETime(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "DCETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.DCETime)) {
        PyErr_SetString(PyExc_ValueError, "DCETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.DCETime, 0, sizeof(self->data.DCETime));
    // memcpy(self->data.DCETime, buf, len);
    strncpy(self->data.DCETime, buf, sizeof(self->data.DCETime));
    return 0;
}
            
///郑商所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcLoginInfoField_get_CZCETime(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.CZCETime, (Py_ssize_t)sizeof(self->data.CZCETime));
    return PyBytes_FromString(self->data.CZCETime);
}

///郑商所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcLoginInfoField_set_CZCETime(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "CZCETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.CZCETime)) {
        PyErr_SetString(PyExc_ValueError, "CZCETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.CZCETime, 0, sizeof(self->data.CZCETime));
    // memcpy(self->data.CZCETime, buf, len);
    strncpy(self->data.CZCETime, buf, sizeof(self->data.CZCETime));
    return 0;
}
            
///中金所时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcLoginInfoField_get_FFEXTime(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.FFEXTime, (Py_ssize_t)sizeof(self->data.FFEXTime));
    return PyBytes_FromString(self->data.FFEXTime);
}

///中金所时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcLoginInfoField_set_FFEXTime(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "FFEXTime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.FFEXTime)) {
        PyErr_SetString(PyExc_ValueError, "FFEXTime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.FFEXTime, 0, sizeof(self->data.FFEXTime));
    // memcpy(self->data.FFEXTime, buf, len);
    strncpy(self->data.FFEXTime, buf, sizeof(self->data.FFEXTime));
    return 0;
}
            
///Mac地址
// TThostFtdcMacAddressType char[21]
static PyObject *PyCThostFtdcLoginInfoField_get_MacAddress(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcLoginInfoField_set_MacAddress(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
            
///动态密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcLoginInfoField_get_OneTimePassword(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OneTimePassword, (Py_ssize_t)sizeof(self->data.OneTimePassword));
    return PyBytes_FromString(self->data.OneTimePassword);
}

///动态密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcLoginInfoField_set_OneTimePassword(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "OneTimePassword Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
        PyErr_SetString(PyExc_ValueError, "OneTimePassword must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.OneTimePassword, 0, sizeof(self->data.OneTimePassword));
    // memcpy(self->data.OneTimePassword, buf, len);
    strncpy(self->data.OneTimePassword, buf, sizeof(self->data.OneTimePassword));
    return 0;
}
            
///能源中心时间
// TThostFtdcTimeType char[9]
static PyObject *PyCThostFtdcLoginInfoField_get_INETime(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.INETime, (Py_ssize_t)sizeof(self->data.INETime));
    return PyBytes_FromString(self->data.INETime);
}

///能源中心时间
// TThostFtdcTimeType char[9]
static int PyCThostFtdcLoginInfoField_set_INETime(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "INETime Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.INETime)) {
        PyErr_SetString(PyExc_ValueError, "INETime must be less than 9 bytes");
        return -1;
    }
    // memset(self->data.INETime, 0, sizeof(self->data.INETime));
    // memcpy(self->data.INETime, buf, len);
    strncpy(self->data.INETime, buf, sizeof(self->data.INETime));
    return 0;
}
            
///查询时是否需要流控
// TThostFtdcBoolType int
static PyObject *PyCThostFtdcLoginInfoField_get_IsQryControl(PyCThostFtdcLoginInfoField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.IsQryControl);
#else
    return PyInt_FromLong(self->data.IsQryControl);
#endif
}

///查询时是否需要流控
// TThostFtdcBoolType int
static int PyCThostFtdcLoginInfoField_set_IsQryControl(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
#if PY_MAJOR_VERSION >= 3
    if (!PyLong_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsQryControl Expected long");
#else
    if (!PyInt_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "IsQryControl Expected int");
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
        PyErr_SetString(PyExc_OverflowError, "the IsQryControl value out of range for C int");
        return -1;
    }
    self->data.IsQryControl = (int)buf;
    return 0;
}
        
///登录备注
// TThostFtdcLoginRemarkType char[36]
static PyObject *PyCThostFtdcLoginInfoField_get_LoginRemark(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginRemark, (Py_ssize_t)sizeof(self->data.LoginRemark));
    return PyBytes_FromString(self->data.LoginRemark);
}

///登录备注
// TThostFtdcLoginRemarkType char[36]
static int PyCThostFtdcLoginInfoField_set_LoginRemark(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
            
///密码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcLoginInfoField_get_Password(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcLoginInfoField_set_Password(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
            
///IP地址
// TThostFtdcIPAddressType char[33]
static PyObject *PyCThostFtdcLoginInfoField_get_IPAddress(PyCThostFtdcLoginInfoField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.IPAddress, (Py_ssize_t)sizeof(self->data.IPAddress));
    return PyBytes_FromString(self->data.IPAddress);
}

///IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcLoginInfoField_set_IPAddress(PyCThostFtdcLoginInfoField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcLoginInfoField_getset[] = {
    ///前置编号 
    {(char *)"FrontID", (getter)PyCThostFtdcLoginInfoField_get_FrontID, (setter)PyCThostFtdcLoginInfoField_set_FrontID, (char *)"FrontID", NULL},
    ///会话编号 
    {(char *)"SessionID", (getter)PyCThostFtdcLoginInfoField_get_SessionID, (setter)PyCThostFtdcLoginInfoField_set_SessionID, (char *)"SessionID", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcLoginInfoField_get_BrokerID, (setter)PyCThostFtdcLoginInfoField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcLoginInfoField_get_UserID, (setter)PyCThostFtdcLoginInfoField_set_UserID, (char *)"UserID", NULL},
    ///登录日期 
    {(char *)"LoginDate", (getter)PyCThostFtdcLoginInfoField_get_LoginDate, (setter)PyCThostFtdcLoginInfoField_set_LoginDate, (char *)"LoginDate", NULL},
    ///登录时间 
    {(char *)"LoginTime", (getter)PyCThostFtdcLoginInfoField_get_LoginTime, (setter)PyCThostFtdcLoginInfoField_set_LoginTime, (char *)"LoginTime", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcLoginInfoField_get_reserve1, (setter)PyCThostFtdcLoginInfoField_set_reserve1, (char *)"reserve1", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcLoginInfoField_get_UserProductInfo, (setter)PyCThostFtdcLoginInfoField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///接口端产品信息 
    {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcLoginInfoField_get_InterfaceProductInfo, (setter)PyCThostFtdcLoginInfoField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
    ///协议信息 
    {(char *)"ProtocolInfo", (getter)PyCThostFtdcLoginInfoField_get_ProtocolInfo, (setter)PyCThostFtdcLoginInfoField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
    ///系统名称 
    {(char *)"SystemName", (getter)PyCThostFtdcLoginInfoField_get_SystemName, (setter)PyCThostFtdcLoginInfoField_set_SystemName, (char *)"SystemName", NULL},
    ///密码,已弃用 
    {(char *)"PasswordDeprecated", (getter)PyCThostFtdcLoginInfoField_get_PasswordDeprecated, (setter)PyCThostFtdcLoginInfoField_set_PasswordDeprecated, (char *)"PasswordDeprecated", NULL},
    ///最大报单引用 
    {(char *)"MaxOrderRef", (getter)PyCThostFtdcLoginInfoField_get_MaxOrderRef, (setter)PyCThostFtdcLoginInfoField_set_MaxOrderRef, (char *)"MaxOrderRef", NULL},
    ///上期所时间 
    {(char *)"SHFETime", (getter)PyCThostFtdcLoginInfoField_get_SHFETime, (setter)PyCThostFtdcLoginInfoField_set_SHFETime, (char *)"SHFETime", NULL},
    ///大商所时间 
    {(char *)"DCETime", (getter)PyCThostFtdcLoginInfoField_get_DCETime, (setter)PyCThostFtdcLoginInfoField_set_DCETime, (char *)"DCETime", NULL},
    ///郑商所时间 
    {(char *)"CZCETime", (getter)PyCThostFtdcLoginInfoField_get_CZCETime, (setter)PyCThostFtdcLoginInfoField_set_CZCETime, (char *)"CZCETime", NULL},
    ///中金所时间 
    {(char *)"FFEXTime", (getter)PyCThostFtdcLoginInfoField_get_FFEXTime, (setter)PyCThostFtdcLoginInfoField_set_FFEXTime, (char *)"FFEXTime", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcLoginInfoField_get_MacAddress, (setter)PyCThostFtdcLoginInfoField_set_MacAddress, (char *)"MacAddress", NULL},
    ///动态密码 
    {(char *)"OneTimePassword", (getter)PyCThostFtdcLoginInfoField_get_OneTimePassword, (setter)PyCThostFtdcLoginInfoField_set_OneTimePassword, (char *)"OneTimePassword", NULL},
    ///能源中心时间 
    {(char *)"INETime", (getter)PyCThostFtdcLoginInfoField_get_INETime, (setter)PyCThostFtdcLoginInfoField_set_INETime, (char *)"INETime", NULL},
    ///查询时是否需要流控 
    {(char *)"IsQryControl", (getter)PyCThostFtdcLoginInfoField_get_IsQryControl, (setter)PyCThostFtdcLoginInfoField_set_IsQryControl, (char *)"IsQryControl", NULL},
    ///登录备注 
    {(char *)"LoginRemark", (getter)PyCThostFtdcLoginInfoField_get_LoginRemark, (setter)PyCThostFtdcLoginInfoField_set_LoginRemark, (char *)"LoginRemark", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcLoginInfoField_get_Password, (setter)PyCThostFtdcLoginInfoField_set_Password, (char *)"Password", NULL},
    ///IP地址 
    {(char *)"IPAddress", (getter)PyCThostFtdcLoginInfoField_get_IPAddress, (setter)PyCThostFtdcLoginInfoField_set_IPAddress, (char *)"IPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcLoginInfoFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcLoginInfoField",	/* tp_name */
	sizeof(PyCThostFtdcLoginInfoField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcLoginInfoField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcLoginInfoField_repr,   /* tp_repr */
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
	"CThostFtdcLoginInfoField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcLoginInfoField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcLoginInfoField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcLoginInfoField_new,       /* tp_new */
};

int PyCThostFtdcLoginInfoFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcLoginInfoField  */
	if (PyType_Ready(&PyCThostFtdcLoginInfoFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcLoginInfoField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcLoginInfoFieldType);
    if( PyModule_AddObject(module, "CThostFtdcLoginInfoField", (PyObject *)&PyCThostFtdcLoginInfoFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoginInfoField to module");
        Py_DECREF(&PyCThostFtdcLoginInfoFieldType);
		return -1;
    }

    return 0;
}
