
#include "PyCThostFtdcReqUserLoginSMField.h"

///国密用户登录请求

static PyObject *PyCThostFtdcReqUserLoginSMField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginSMField *self = (PyCThostFtdcReqUserLoginSMField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginSMField_init(PyCThostFtdcReqUserLoginSMField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "OneTimePassword", "reserve1", "LoginRemark", "ClientIPPort", "ClientIPAddress", "BrokerName", "AuthCode", "AppID", "PIN",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *ReqUserLoginSMField_TradingDay = NULL;
    Py_ssize_t ReqUserLoginSMField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqUserLoginSMField_BrokerID = NULL;
    Py_ssize_t ReqUserLoginSMField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ReqUserLoginSMField_UserID = NULL;
    Py_ssize_t ReqUserLoginSMField_UserID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginSMField_Password = NULL;
    Py_ssize_t ReqUserLoginSMField_Password_len = 0;
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginSMField_UserProductInfo = NULL;
    Py_ssize_t ReqUserLoginSMField_UserProductInfo_len = 0;
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginSMField_InterfaceProductInfo = NULL;
    Py_ssize_t ReqUserLoginSMField_InterfaceProductInfo_len = 0;
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    const char *ReqUserLoginSMField_ProtocolInfo = NULL;
    Py_ssize_t ReqUserLoginSMField_ProtocolInfo_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ReqUserLoginSMField_MacAddress = NULL;
    Py_ssize_t ReqUserLoginSMField_MacAddress_len = 0;
            
    ///动态密码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginSMField_OneTimePassword = NULL;
    Py_ssize_t ReqUserLoginSMField_OneTimePassword_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ReqUserLoginSMField_reserve1 = NULL;
    Py_ssize_t ReqUserLoginSMField_reserve1_len = 0;
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    const char *ReqUserLoginSMField_LoginRemark = NULL;
    Py_ssize_t ReqUserLoginSMField_LoginRemark_len = 0;
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    int ReqUserLoginSMField_ClientIPPort = 0;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ReqUserLoginSMField_ClientIPAddress = NULL;
    Py_ssize_t ReqUserLoginSMField_ClientIPAddress_len = 0;
            
    ///经纪公司名称
    // TThostFtdcBrokerNameType char[81]
    const char *ReqUserLoginSMField_BrokerName = NULL;
    Py_ssize_t ReqUserLoginSMField_BrokerName_len = 0;
            
    ///认证码
    // TThostFtdcAuthCodeType char[17]
    const char *ReqUserLoginSMField_AuthCode = NULL;
    Py_ssize_t ReqUserLoginSMField_AuthCode_len = 0;
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    const char *ReqUserLoginSMField_AppID = NULL;
    Py_ssize_t ReqUserLoginSMField_AppID_len = 0;
            
    ///PIN码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginSMField_PIN = NULL;
    Py_ssize_t ReqUserLoginSMField_PIN_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#y#y#y#y#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#s#s#s#s#", (char **)kwlist
#endif

        , &ReqUserLoginSMField_TradingDay, &ReqUserLoginSMField_TradingDay_len 
        , &ReqUserLoginSMField_BrokerID, &ReqUserLoginSMField_BrokerID_len 
        , &ReqUserLoginSMField_UserID, &ReqUserLoginSMField_UserID_len 
        , &ReqUserLoginSMField_Password, &ReqUserLoginSMField_Password_len 
        , &ReqUserLoginSMField_UserProductInfo, &ReqUserLoginSMField_UserProductInfo_len 
        , &ReqUserLoginSMField_InterfaceProductInfo, &ReqUserLoginSMField_InterfaceProductInfo_len 
        , &ReqUserLoginSMField_ProtocolInfo, &ReqUserLoginSMField_ProtocolInfo_len 
        , &ReqUserLoginSMField_MacAddress, &ReqUserLoginSMField_MacAddress_len 
        , &ReqUserLoginSMField_OneTimePassword, &ReqUserLoginSMField_OneTimePassword_len 
        , &ReqUserLoginSMField_reserve1, &ReqUserLoginSMField_reserve1_len 
        , &ReqUserLoginSMField_LoginRemark, &ReqUserLoginSMField_LoginRemark_len 
        , &ReqUserLoginSMField_ClientIPPort 
        , &ReqUserLoginSMField_ClientIPAddress, &ReqUserLoginSMField_ClientIPAddress_len 
        , &ReqUserLoginSMField_BrokerName, &ReqUserLoginSMField_BrokerName_len 
        , &ReqUserLoginSMField_AuthCode, &ReqUserLoginSMField_AuthCode_len 
        , &ReqUserLoginSMField_AppID, &ReqUserLoginSMField_AppID_len 
        , &ReqUserLoginSMField_PIN, &ReqUserLoginSMField_PIN_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( ReqUserLoginSMField_TradingDay != NULL ) {
        if(ReqUserLoginSMField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqUserLoginSMField_TradingDay, ReqUserLoginSMField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqUserLoginSMField_TradingDay, sizeof(self->data.TradingDay) );
        ReqUserLoginSMField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqUserLoginSMField_BrokerID != NULL ) {
        if(ReqUserLoginSMField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqUserLoginSMField_BrokerID, ReqUserLoginSMField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqUserLoginSMField_BrokerID, sizeof(self->data.BrokerID) );
        ReqUserLoginSMField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ReqUserLoginSMField_UserID != NULL ) {
        if(ReqUserLoginSMField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqUserLoginSMField_UserID, ReqUserLoginSMField_UserID_len);        
        strncpy(self->data.UserID, ReqUserLoginSMField_UserID, sizeof(self->data.UserID) );
        ReqUserLoginSMField_UserID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginSMField_Password != NULL ) {
        if(ReqUserLoginSMField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqUserLoginSMField_Password, ReqUserLoginSMField_Password_len);        
        strncpy(self->data.Password, ReqUserLoginSMField_Password, sizeof(self->data.Password) );
        ReqUserLoginSMField_Password = NULL;
    }
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginSMField_UserProductInfo != NULL ) {
        if(ReqUserLoginSMField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, ReqUserLoginSMField_UserProductInfo, ReqUserLoginSMField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, ReqUserLoginSMField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        ReqUserLoginSMField_UserProductInfo = NULL;
    }
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginSMField_InterfaceProductInfo != NULL ) {
        if(ReqUserLoginSMField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
            return -1;
        }
        // memset(self->data.InterfaceProductInfo, 0, sizeof(self->data.InterfaceProductInfo));
        // memcpy(self->data.InterfaceProductInfo, ReqUserLoginSMField_InterfaceProductInfo, ReqUserLoginSMField_InterfaceProductInfo_len);        
        strncpy(self->data.InterfaceProductInfo, ReqUserLoginSMField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
        ReqUserLoginSMField_InterfaceProductInfo = NULL;
    }
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    if( ReqUserLoginSMField_ProtocolInfo != NULL ) {
        if(ReqUserLoginSMField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
            return -1;
        }
        // memset(self->data.ProtocolInfo, 0, sizeof(self->data.ProtocolInfo));
        // memcpy(self->data.ProtocolInfo, ReqUserLoginSMField_ProtocolInfo, ReqUserLoginSMField_ProtocolInfo_len);        
        strncpy(self->data.ProtocolInfo, ReqUserLoginSMField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
        ReqUserLoginSMField_ProtocolInfo = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ReqUserLoginSMField_MacAddress != NULL ) {
        if(ReqUserLoginSMField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ReqUserLoginSMField_MacAddress, ReqUserLoginSMField_MacAddress_len);        
        strncpy(self->data.MacAddress, ReqUserLoginSMField_MacAddress, sizeof(self->data.MacAddress) );
        ReqUserLoginSMField_MacAddress = NULL;
    }
            
    ///动态密码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginSMField_OneTimePassword != NULL ) {
        if(ReqUserLoginSMField_OneTimePassword_len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
            PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_OneTimePassword_len, (Py_ssize_t)sizeof(self->data.OneTimePassword));
            return -1;
        }
        // memset(self->data.OneTimePassword, 0, sizeof(self->data.OneTimePassword));
        // memcpy(self->data.OneTimePassword, ReqUserLoginSMField_OneTimePassword, ReqUserLoginSMField_OneTimePassword_len);        
        strncpy(self->data.OneTimePassword, ReqUserLoginSMField_OneTimePassword, sizeof(self->data.OneTimePassword) );
        ReqUserLoginSMField_OneTimePassword = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ReqUserLoginSMField_reserve1 != NULL ) {
        if(ReqUserLoginSMField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ReqUserLoginSMField_reserve1, ReqUserLoginSMField_reserve1_len);        
        strncpy(self->data.reserve1, ReqUserLoginSMField_reserve1, sizeof(self->data.reserve1) );
        ReqUserLoginSMField_reserve1 = NULL;
    }
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    if( ReqUserLoginSMField_LoginRemark != NULL ) {
        if(ReqUserLoginSMField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
            return -1;
        }
        // memset(self->data.LoginRemark, 0, sizeof(self->data.LoginRemark));
        // memcpy(self->data.LoginRemark, ReqUserLoginSMField_LoginRemark, ReqUserLoginSMField_LoginRemark_len);        
        strncpy(self->data.LoginRemark, ReqUserLoginSMField_LoginRemark, sizeof(self->data.LoginRemark) );
        ReqUserLoginSMField_LoginRemark = NULL;
    }
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    self->data.ClientIPPort = ReqUserLoginSMField_ClientIPPort;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    if( ReqUserLoginSMField_ClientIPAddress != NULL ) {
        if(ReqUserLoginSMField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
            return -1;
        }
        // memset(self->data.ClientIPAddress, 0, sizeof(self->data.ClientIPAddress));
        // memcpy(self->data.ClientIPAddress, ReqUserLoginSMField_ClientIPAddress, ReqUserLoginSMField_ClientIPAddress_len);        
        strncpy(self->data.ClientIPAddress, ReqUserLoginSMField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
        ReqUserLoginSMField_ClientIPAddress = NULL;
    }
            
    ///经纪公司名称
    // TThostFtdcBrokerNameType char[81]
    if( ReqUserLoginSMField_BrokerName != NULL ) {
        if(ReqUserLoginSMField_BrokerName_len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
            PyErr_Format(PyExc_ValueError, "BrokerName too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_BrokerName_len, (Py_ssize_t)sizeof(self->data.BrokerName));
            return -1;
        }
        // memset(self->data.BrokerName, 0, sizeof(self->data.BrokerName));
        // memcpy(self->data.BrokerName, ReqUserLoginSMField_BrokerName, ReqUserLoginSMField_BrokerName_len);        
        strncpy(self->data.BrokerName, ReqUserLoginSMField_BrokerName, sizeof(self->data.BrokerName) );
        ReqUserLoginSMField_BrokerName = NULL;
    }
            
    ///认证码
    // TThostFtdcAuthCodeType char[17]
    if( ReqUserLoginSMField_AuthCode != NULL ) {
        if(ReqUserLoginSMField_AuthCode_len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
            PyErr_Format(PyExc_ValueError, "AuthCode too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_AuthCode_len, (Py_ssize_t)sizeof(self->data.AuthCode));
            return -1;
        }
        // memset(self->data.AuthCode, 0, sizeof(self->data.AuthCode));
        // memcpy(self->data.AuthCode, ReqUserLoginSMField_AuthCode, ReqUserLoginSMField_AuthCode_len);        
        strncpy(self->data.AuthCode, ReqUserLoginSMField_AuthCode, sizeof(self->data.AuthCode) );
        ReqUserLoginSMField_AuthCode = NULL;
    }
            
    ///App代码
    // TThostFtdcAppIDType char[33]
    if( ReqUserLoginSMField_AppID != NULL ) {
        if(ReqUserLoginSMField_AppID_len > (Py_ssize_t)sizeof(self->data.AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_AppID_len, (Py_ssize_t)sizeof(self->data.AppID));
            return -1;
        }
        // memset(self->data.AppID, 0, sizeof(self->data.AppID));
        // memcpy(self->data.AppID, ReqUserLoginSMField_AppID, ReqUserLoginSMField_AppID_len);        
        strncpy(self->data.AppID, ReqUserLoginSMField_AppID, sizeof(self->data.AppID) );
        ReqUserLoginSMField_AppID = NULL;
    }
            
    ///PIN码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginSMField_PIN != NULL ) {
        if(ReqUserLoginSMField_PIN_len > (Py_ssize_t)sizeof(self->data.PIN)) {
            PyErr_Format(PyExc_ValueError, "PIN too long: length=%zd (max allowed is %zd)", ReqUserLoginSMField_PIN_len, (Py_ssize_t)sizeof(self->data.PIN));
            return -1;
        }
        // memset(self->data.PIN, 0, sizeof(self->data.PIN));
        // memcpy(self->data.PIN, ReqUserLoginSMField_PIN, ReqUserLoginSMField_PIN_len);        
        strncpy(self->data.PIN, ReqUserLoginSMField_PIN, sizeof(self->data.PIN) );
        ReqUserLoginSMField_PIN = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqUserLoginSMField_dealloc(PyCThostFtdcReqUserLoginSMField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginSMField_repr(PyCThostFtdcReqUserLoginSMField *self) {

#if PY_MAJOR_VERSION >= 3
	PyObject *obj = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
#else
    PyObject *obj = Py_BuildValue("{s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:s,s:i,s:s,s:s,s:s,s:s,s:s}"
#endif

        ,"TradingDay", self->data.TradingDay//, (Py_ssize_t)sizeof(self->data.TradingDay) 
        ,"BrokerID", self->data.BrokerID//, (Py_ssize_t)sizeof(self->data.BrokerID) 
        ,"UserID", self->data.UserID//, (Py_ssize_t)sizeof(self->data.UserID) 
        ,"Password", self->data.Password//, (Py_ssize_t)sizeof(self->data.Password) 
        ,"UserProductInfo", self->data.UserProductInfo//, (Py_ssize_t)sizeof(self->data.UserProductInfo) 
        ,"InterfaceProductInfo", self->data.InterfaceProductInfo//, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo) 
        ,"ProtocolInfo", self->data.ProtocolInfo//, (Py_ssize_t)sizeof(self->data.ProtocolInfo) 
        ,"MacAddress", self->data.MacAddress//, (Py_ssize_t)sizeof(self->data.MacAddress) 
        ,"OneTimePassword", self->data.OneTimePassword//, (Py_ssize_t)sizeof(self->data.OneTimePassword) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"LoginRemark", self->data.LoginRemark//, (Py_ssize_t)sizeof(self->data.LoginRemark) 
        ,"ClientIPPort", self->data.ClientIPPort 
        ,"ClientIPAddress", self->data.ClientIPAddress//, (Py_ssize_t)sizeof(self->data.ClientIPAddress) 
        ,"BrokerName", self->data.BrokerName//, (Py_ssize_t)sizeof(self->data.BrokerName) 
        ,"AuthCode", self->data.AuthCode//, (Py_ssize_t)sizeof(self->data.AuthCode) 
        ,"AppID", self->data.AppID//, (Py_ssize_t)sizeof(self->data.AppID) 
        ,"PIN", self->data.PIN//, (Py_ssize_t)sizeof(self->data.PIN) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginSMField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcReqUserLoginSMField_get_TradingDay(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcReqUserLoginSMField_set_TradingDay(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_BrokerID(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqUserLoginSMField_set_BrokerID(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_UserID(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqUserLoginSMField_set_UserID(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_Password(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginSMField_set_Password(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_UserProductInfo(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginSMField_set_UserProductInfo(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InterfaceProductInfo, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
    return PyBytes_FromString(self->data.InterfaceProductInfo);
}

///接口端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginSMField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_ProtocolInfo(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProtocolInfo, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
    return PyBytes_FromString(self->data.ProtocolInfo);
}

///协议信息
// TThostFtdcProtocolInfoType char[11]
static int PyCThostFtdcReqUserLoginSMField_set_ProtocolInfo(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_MacAddress(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcReqUserLoginSMField_set_MacAddress(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_OneTimePassword(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OneTimePassword, (Py_ssize_t)sizeof(self->data.OneTimePassword));
    return PyBytes_FromString(self->data.OneTimePassword);
}

///动态密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginSMField_set_OneTimePassword(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
            
///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static PyObject *PyCThostFtdcReqUserLoginSMField_get_reserve1(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcReqUserLoginSMField_set_reserve1(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_LoginRemark(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginRemark, (Py_ssize_t)sizeof(self->data.LoginRemark));
    return PyBytes_FromString(self->data.LoginRemark);
}

///登录备注
// TThostFtdcLoginRemarkType char[36]
static int PyCThostFtdcReqUserLoginSMField_set_LoginRemark(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
            
///终端IP端口
// TThostFtdcIPPortType int
static PyObject *PyCThostFtdcReqUserLoginSMField_get_ClientIPPort(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ClientIPPort);
#else
    return PyInt_FromLong(self->data.ClientIPPort);
#endif
}

///终端IP端口
// TThostFtdcIPPortType int
static int PyCThostFtdcReqUserLoginSMField_set_ClientIPPort(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginSMField_get_ClientIPAddress(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientIPAddress, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
    return PyBytes_FromString(self->data.ClientIPAddress);
}

///终端IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcReqUserLoginSMField_set_ClientIPAddress(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
            
///经纪公司名称
// TThostFtdcBrokerNameType char[81]
static PyObject *PyCThostFtdcReqUserLoginSMField_get_BrokerName(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerName, (Py_ssize_t)sizeof(self->data.BrokerName));
    return PyBytes_FromString(self->data.BrokerName);
}

///经纪公司名称
// TThostFtdcBrokerNameType char[81]
static int PyCThostFtdcReqUserLoginSMField_set_BrokerName(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "BrokerName Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.BrokerName)) {
        PyErr_SetString(PyExc_ValueError, "BrokerName must be less than 81 bytes");
        return -1;
    }
    // memset(self->data.BrokerName, 0, sizeof(self->data.BrokerName));
    // memcpy(self->data.BrokerName, buf, len);
    strncpy(self->data.BrokerName, buf, sizeof(self->data.BrokerName));
    return 0;
}
            
///认证码
// TThostFtdcAuthCodeType char[17]
static PyObject *PyCThostFtdcReqUserLoginSMField_get_AuthCode(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AuthCode, (Py_ssize_t)sizeof(self->data.AuthCode));
    return PyBytes_FromString(self->data.AuthCode);
}

///认证码
// TThostFtdcAuthCodeType char[17]
static int PyCThostFtdcReqUserLoginSMField_set_AuthCode(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "AuthCode Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.AuthCode)) {
        PyErr_SetString(PyExc_ValueError, "AuthCode must be less than 17 bytes");
        return -1;
    }
    // memset(self->data.AuthCode, 0, sizeof(self->data.AuthCode));
    // memcpy(self->data.AuthCode, buf, len);
    strncpy(self->data.AuthCode, buf, sizeof(self->data.AuthCode));
    return 0;
}
            
///App代码
// TThostFtdcAppIDType char[33]
static PyObject *PyCThostFtdcReqUserLoginSMField_get_AppID(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.AppID, (Py_ssize_t)sizeof(self->data.AppID));
    return PyBytes_FromString(self->data.AppID);
}

///App代码
// TThostFtdcAppIDType char[33]
static int PyCThostFtdcReqUserLoginSMField_set_AppID(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
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
            
///PIN码
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcReqUserLoginSMField_get_PIN(PyCThostFtdcReqUserLoginSMField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.PIN, (Py_ssize_t)sizeof(self->data.PIN));
    return PyBytes_FromString(self->data.PIN);
}

///PIN码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginSMField_set_PIN(PyCThostFtdcReqUserLoginSMField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "PIN Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.PIN)) {
        PyErr_SetString(PyExc_ValueError, "PIN must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.PIN, 0, sizeof(self->data.PIN));
    // memcpy(self->data.PIN, buf, len);
    strncpy(self->data.PIN, buf, sizeof(self->data.PIN));
    return 0;
}
            

static PyGetSetDef PyCThostFtdcReqUserLoginSMField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginSMField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginSMField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginSMField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginSMField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginSMField_get_UserID, (setter)PyCThostFtdcReqUserLoginSMField_set_UserID, (char *)"UserID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcReqUserLoginSMField_get_Password, (setter)PyCThostFtdcReqUserLoginSMField_set_Password, (char *)"Password", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginSMField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginSMField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///接口端产品信息 
    {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginSMField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginSMField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
    ///协议信息 
    {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginSMField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginSMField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginSMField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginSMField_set_MacAddress, (char *)"MacAddress", NULL},
    ///动态密码 
    {(char *)"OneTimePassword", (getter)PyCThostFtdcReqUserLoginSMField_get_OneTimePassword, (setter)PyCThostFtdcReqUserLoginSMField_set_OneTimePassword, (char *)"OneTimePassword", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginSMField_get_reserve1, (setter)PyCThostFtdcReqUserLoginSMField_set_reserve1, (char *)"reserve1", NULL},
    ///登录备注 
    {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginSMField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginSMField_set_LoginRemark, (char *)"LoginRemark", NULL},
    ///终端IP端口 
    {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginSMField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginSMField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
    ///终端IP地址 
    {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginSMField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginSMField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},
    ///经纪公司名称 
    {(char *)"BrokerName", (getter)PyCThostFtdcReqUserLoginSMField_get_BrokerName, (setter)PyCThostFtdcReqUserLoginSMField_set_BrokerName, (char *)"BrokerName", NULL},
    ///认证码 
    {(char *)"AuthCode", (getter)PyCThostFtdcReqUserLoginSMField_get_AuthCode, (setter)PyCThostFtdcReqUserLoginSMField_set_AuthCode, (char *)"AuthCode", NULL},
    ///App代码 
    {(char *)"AppID", (getter)PyCThostFtdcReqUserLoginSMField_get_AppID, (setter)PyCThostFtdcReqUserLoginSMField_set_AppID, (char *)"AppID", NULL},
    ///PIN码 
    {(char *)"PIN", (getter)PyCThostFtdcReqUserLoginSMField_get_PIN, (setter)PyCThostFtdcReqUserLoginSMField_set_PIN, (char *)"PIN", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginSMFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginSMField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginSMField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginSMField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginSMField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginSMField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginSMField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginSMField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginSMField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginSMFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginSMField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginSMFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginSMField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginSMFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginSMField", (PyObject *)&PyCThostFtdcReqUserLoginSMFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginSMField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginSMFieldType);
		return -1;
    }

    return 0;
}
