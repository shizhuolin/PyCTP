
#include "PyCThostFtdcReqUserLoginWithCaptchaField.h"

///用户发出带图形验证码的登录请求请求

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginWithCaptchaField *self = (PyCThostFtdcReqUserLoginWithCaptchaField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginWithCaptchaField_init(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "Captcha", "ClientIPPort", "ClientIPAddress",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *ReqUserLoginWithCaptchaField_TradingDay = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqUserLoginWithCaptchaField_BrokerID = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ReqUserLoginWithCaptchaField_UserID = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_UserID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginWithCaptchaField_Password = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_Password_len = 0;
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginWithCaptchaField_UserProductInfo = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_UserProductInfo_len = 0;
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginWithCaptchaField_InterfaceProductInfo = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_InterfaceProductInfo_len = 0;
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    const char *ReqUserLoginWithCaptchaField_ProtocolInfo = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_ProtocolInfo_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ReqUserLoginWithCaptchaField_MacAddress = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_MacAddress_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ReqUserLoginWithCaptchaField_reserve1 = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_reserve1_len = 0;
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    const char *ReqUserLoginWithCaptchaField_LoginRemark = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_LoginRemark_len = 0;
            
    ///图形验证码的文字内容
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginWithCaptchaField_Captcha = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_Captcha_len = 0;
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    int ReqUserLoginWithCaptchaField_ClientIPPort = 0;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ReqUserLoginWithCaptchaField_ClientIPAddress = NULL;
    Py_ssize_t ReqUserLoginWithCaptchaField_ClientIPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

        , &ReqUserLoginWithCaptchaField_TradingDay, &ReqUserLoginWithCaptchaField_TradingDay_len 
        , &ReqUserLoginWithCaptchaField_BrokerID, &ReqUserLoginWithCaptchaField_BrokerID_len 
        , &ReqUserLoginWithCaptchaField_UserID, &ReqUserLoginWithCaptchaField_UserID_len 
        , &ReqUserLoginWithCaptchaField_Password, &ReqUserLoginWithCaptchaField_Password_len 
        , &ReqUserLoginWithCaptchaField_UserProductInfo, &ReqUserLoginWithCaptchaField_UserProductInfo_len 
        , &ReqUserLoginWithCaptchaField_InterfaceProductInfo, &ReqUserLoginWithCaptchaField_InterfaceProductInfo_len 
        , &ReqUserLoginWithCaptchaField_ProtocolInfo, &ReqUserLoginWithCaptchaField_ProtocolInfo_len 
        , &ReqUserLoginWithCaptchaField_MacAddress, &ReqUserLoginWithCaptchaField_MacAddress_len 
        , &ReqUserLoginWithCaptchaField_reserve1, &ReqUserLoginWithCaptchaField_reserve1_len 
        , &ReqUserLoginWithCaptchaField_LoginRemark, &ReqUserLoginWithCaptchaField_LoginRemark_len 
        , &ReqUserLoginWithCaptchaField_Captcha, &ReqUserLoginWithCaptchaField_Captcha_len 
        , &ReqUserLoginWithCaptchaField_ClientIPPort 
        , &ReqUserLoginWithCaptchaField_ClientIPAddress, &ReqUserLoginWithCaptchaField_ClientIPAddress_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( ReqUserLoginWithCaptchaField_TradingDay != NULL ) {
        if(ReqUserLoginWithCaptchaField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqUserLoginWithCaptchaField_TradingDay, ReqUserLoginWithCaptchaField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqUserLoginWithCaptchaField_TradingDay, sizeof(self->data.TradingDay) );
        ReqUserLoginWithCaptchaField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqUserLoginWithCaptchaField_BrokerID != NULL ) {
        if(ReqUserLoginWithCaptchaField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqUserLoginWithCaptchaField_BrokerID, ReqUserLoginWithCaptchaField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqUserLoginWithCaptchaField_BrokerID, sizeof(self->data.BrokerID) );
        ReqUserLoginWithCaptchaField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ReqUserLoginWithCaptchaField_UserID != NULL ) {
        if(ReqUserLoginWithCaptchaField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqUserLoginWithCaptchaField_UserID, ReqUserLoginWithCaptchaField_UserID_len);        
        strncpy(self->data.UserID, ReqUserLoginWithCaptchaField_UserID, sizeof(self->data.UserID) );
        ReqUserLoginWithCaptchaField_UserID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginWithCaptchaField_Password != NULL ) {
        if(ReqUserLoginWithCaptchaField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqUserLoginWithCaptchaField_Password, ReqUserLoginWithCaptchaField_Password_len);        
        strncpy(self->data.Password, ReqUserLoginWithCaptchaField_Password, sizeof(self->data.Password) );
        ReqUserLoginWithCaptchaField_Password = NULL;
    }
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginWithCaptchaField_UserProductInfo != NULL ) {
        if(ReqUserLoginWithCaptchaField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, ReqUserLoginWithCaptchaField_UserProductInfo, ReqUserLoginWithCaptchaField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, ReqUserLoginWithCaptchaField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        ReqUserLoginWithCaptchaField_UserProductInfo = NULL;
    }
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginWithCaptchaField_InterfaceProductInfo != NULL ) {
        if(ReqUserLoginWithCaptchaField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
            return -1;
        }
        // memset(self->data.InterfaceProductInfo, 0, sizeof(self->data.InterfaceProductInfo));
        // memcpy(self->data.InterfaceProductInfo, ReqUserLoginWithCaptchaField_InterfaceProductInfo, ReqUserLoginWithCaptchaField_InterfaceProductInfo_len);        
        strncpy(self->data.InterfaceProductInfo, ReqUserLoginWithCaptchaField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
        ReqUserLoginWithCaptchaField_InterfaceProductInfo = NULL;
    }
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    if( ReqUserLoginWithCaptchaField_ProtocolInfo != NULL ) {
        if(ReqUserLoginWithCaptchaField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
            return -1;
        }
        // memset(self->data.ProtocolInfo, 0, sizeof(self->data.ProtocolInfo));
        // memcpy(self->data.ProtocolInfo, ReqUserLoginWithCaptchaField_ProtocolInfo, ReqUserLoginWithCaptchaField_ProtocolInfo_len);        
        strncpy(self->data.ProtocolInfo, ReqUserLoginWithCaptchaField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
        ReqUserLoginWithCaptchaField_ProtocolInfo = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ReqUserLoginWithCaptchaField_MacAddress != NULL ) {
        if(ReqUserLoginWithCaptchaField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ReqUserLoginWithCaptchaField_MacAddress, ReqUserLoginWithCaptchaField_MacAddress_len);        
        strncpy(self->data.MacAddress, ReqUserLoginWithCaptchaField_MacAddress, sizeof(self->data.MacAddress) );
        ReqUserLoginWithCaptchaField_MacAddress = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ReqUserLoginWithCaptchaField_reserve1 != NULL ) {
        if(ReqUserLoginWithCaptchaField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ReqUserLoginWithCaptchaField_reserve1, ReqUserLoginWithCaptchaField_reserve1_len);        
        strncpy(self->data.reserve1, ReqUserLoginWithCaptchaField_reserve1, sizeof(self->data.reserve1) );
        ReqUserLoginWithCaptchaField_reserve1 = NULL;
    }
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    if( ReqUserLoginWithCaptchaField_LoginRemark != NULL ) {
        if(ReqUserLoginWithCaptchaField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
            return -1;
        }
        // memset(self->data.LoginRemark, 0, sizeof(self->data.LoginRemark));
        // memcpy(self->data.LoginRemark, ReqUserLoginWithCaptchaField_LoginRemark, ReqUserLoginWithCaptchaField_LoginRemark_len);        
        strncpy(self->data.LoginRemark, ReqUserLoginWithCaptchaField_LoginRemark, sizeof(self->data.LoginRemark) );
        ReqUserLoginWithCaptchaField_LoginRemark = NULL;
    }
            
    ///图形验证码的文字内容
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginWithCaptchaField_Captcha != NULL ) {
        if(ReqUserLoginWithCaptchaField_Captcha_len > (Py_ssize_t)sizeof(self->data.Captcha)) {
            PyErr_Format(PyExc_ValueError, "Captcha too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_Captcha_len, (Py_ssize_t)sizeof(self->data.Captcha));
            return -1;
        }
        // memset(self->data.Captcha, 0, sizeof(self->data.Captcha));
        // memcpy(self->data.Captcha, ReqUserLoginWithCaptchaField_Captcha, ReqUserLoginWithCaptchaField_Captcha_len);        
        strncpy(self->data.Captcha, ReqUserLoginWithCaptchaField_Captcha, sizeof(self->data.Captcha) );
        ReqUserLoginWithCaptchaField_Captcha = NULL;
    }
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    self->data.ClientIPPort = ReqUserLoginWithCaptchaField_ClientIPPort;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    if( ReqUserLoginWithCaptchaField_ClientIPAddress != NULL ) {
        if(ReqUserLoginWithCaptchaField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginWithCaptchaField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
            return -1;
        }
        // memset(self->data.ClientIPAddress, 0, sizeof(self->data.ClientIPAddress));
        // memcpy(self->data.ClientIPAddress, ReqUserLoginWithCaptchaField_ClientIPAddress, ReqUserLoginWithCaptchaField_ClientIPAddress_len);        
        strncpy(self->data.ClientIPAddress, ReqUserLoginWithCaptchaField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
        ReqUserLoginWithCaptchaField_ClientIPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqUserLoginWithCaptchaField_dealloc(PyCThostFtdcReqUserLoginWithCaptchaField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_repr(PyCThostFtdcReqUserLoginWithCaptchaField *self) {

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
        ,"Captcha", self->data.Captcha//, (Py_ssize_t)sizeof(self->data.Captcha) 
        ,"ClientIPPort", self->data.ClientIPPort 
        ,"ClientIPAddress", self->data.ClientIPAddress//, (Py_ssize_t)sizeof(self->data.ClientIPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithCaptchaField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_TradingDay(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_TradingDay(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_BrokerID(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_BrokerID(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_UserID(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_UserID(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_Password(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_Password(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_UserProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_UserProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InterfaceProductInfo, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
    return PyBytes_FromString(self->data.InterfaceProductInfo);
}

///接口端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_ProtocolInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProtocolInfo, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
    return PyBytes_FromString(self->data.ProtocolInfo);
}

///协议信息
// TThostFtdcProtocolInfoType char[11]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_ProtocolInfo(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_MacAddress(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_MacAddress(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_reserve1(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_reserve1(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_LoginRemark(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginRemark, (Py_ssize_t)sizeof(self->data.LoginRemark));
    return PyBytes_FromString(self->data.LoginRemark);
}

///登录备注
// TThostFtdcLoginRemarkType char[36]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_LoginRemark(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
            
///图形验证码的文字内容
// TThostFtdcPasswordType char[41]
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_Captcha(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Captcha, (Py_ssize_t)sizeof(self->data.Captcha));
    return PyBytes_FromString(self->data.Captcha);
}

///图形验证码的文字内容
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_Captcha(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
    if (!PyBytes_Check(val)) {
        PyErr_SetString(PyExc_TypeError, "Captcha Expected bytes");
        return -1;
    }
    const char *buf = PyBytes_AsString(val);
    Py_ssize_t len = PyBytes_Size(val);
    if (len > (Py_ssize_t)sizeof(self->data.Captcha)) {
        PyErr_SetString(PyExc_ValueError, "Captcha must be less than 41 bytes");
        return -1;
    }
    // memset(self->data.Captcha, 0, sizeof(self->data.Captcha));
    // memcpy(self->data.Captcha, buf, len);
    strncpy(self->data.Captcha, buf, sizeof(self->data.Captcha));
    return 0;
}
            
///终端IP端口
// TThostFtdcIPPortType int
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPPort(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ClientIPPort);
#else
    return PyInt_FromLong(self->data.ClientIPPort);
#endif
}

///终端IP端口
// TThostFtdcIPPortType int
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPPort(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPAddress(PyCThostFtdcReqUserLoginWithCaptchaField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientIPAddress, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
    return PyBytes_FromString(self->data.ClientIPAddress);
}

///终端IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPAddress(PyCThostFtdcReqUserLoginWithCaptchaField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReqUserLoginWithCaptchaField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_UserID, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_UserID, (char *)"UserID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_Password, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_Password, (char *)"Password", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///接口端产品信息 
    {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
    ///协议信息 
    {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_MacAddress, (char *)"MacAddress", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_reserve1, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_reserve1, (char *)"reserve1", NULL},
    ///登录备注 
    {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_LoginRemark, (char *)"LoginRemark", NULL},
    ///图形验证码的文字内容 
    {(char *)"Captcha", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_Captcha, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_Captcha, (char *)"Captcha", NULL},
    ///终端IP端口 
    {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
    ///终端IP地址 
    {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginWithCaptchaField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginWithCaptchaField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginWithCaptchaFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginWithCaptchaField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginWithCaptchaField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginWithCaptchaField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginWithCaptchaField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginWithCaptchaField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginWithCaptchaField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginWithCaptchaField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginWithCaptchaField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginWithCaptchaFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginWithCaptchaField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginWithCaptchaFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginWithCaptchaField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginWithCaptchaFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithCaptchaField", (PyObject *)&PyCThostFtdcReqUserLoginWithCaptchaFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithCaptchaField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginWithCaptchaFieldType);
		return -1;
    }

    return 0;
}
