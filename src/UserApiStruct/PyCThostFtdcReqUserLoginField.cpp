
#include "PyCThostFtdcReqUserLoginField.h"

///用户登录请求

static PyObject *PyCThostFtdcReqUserLoginField_new(PyTypeObject *type, PyObject *args, PyObject *kwds) {
    PyCThostFtdcReqUserLoginField *self = (PyCThostFtdcReqUserLoginField *)type->tp_alloc(type, 0);
    if(!self) {
        PyErr_NoMemory();
        return NULL;
    }
	self->data = { 0 };
    return (PyObject *)self;
}

static int PyCThostFtdcReqUserLoginField_init(PyCThostFtdcReqUserLoginField *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = {"TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "OneTimePassword", "reserve1", "LoginRemark", "ClientIPPort", "ClientIPAddress",  NULL};


    ///交易日
    // TThostFtdcDateType char[9]
    const char *ReqUserLoginField_TradingDay = NULL;
    Py_ssize_t ReqUserLoginField_TradingDay_len = 0;
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    const char *ReqUserLoginField_BrokerID = NULL;
    Py_ssize_t ReqUserLoginField_BrokerID_len = 0;
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    const char *ReqUserLoginField_UserID = NULL;
    Py_ssize_t ReqUserLoginField_UserID_len = 0;
            
    ///密码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginField_Password = NULL;
    Py_ssize_t ReqUserLoginField_Password_len = 0;
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginField_UserProductInfo = NULL;
    Py_ssize_t ReqUserLoginField_UserProductInfo_len = 0;
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    const char *ReqUserLoginField_InterfaceProductInfo = NULL;
    Py_ssize_t ReqUserLoginField_InterfaceProductInfo_len = 0;
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    const char *ReqUserLoginField_ProtocolInfo = NULL;
    Py_ssize_t ReqUserLoginField_ProtocolInfo_len = 0;
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    const char *ReqUserLoginField_MacAddress = NULL;
    Py_ssize_t ReqUserLoginField_MacAddress_len = 0;
            
    ///动态密码
    // TThostFtdcPasswordType char[41]
    const char *ReqUserLoginField_OneTimePassword = NULL;
    Py_ssize_t ReqUserLoginField_OneTimePassword_len = 0;
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    const char *ReqUserLoginField_reserve1 = NULL;
    Py_ssize_t ReqUserLoginField_reserve1_len = 0;
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    const char *ReqUserLoginField_LoginRemark = NULL;
    Py_ssize_t ReqUserLoginField_LoginRemark_len = 0;
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    int ReqUserLoginField_ClientIPPort = 0;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    const char *ReqUserLoginField_ClientIPAddress = NULL;
    Py_ssize_t ReqUserLoginField_ClientIPAddress_len = 0;
            

#if PY_MAJOR_VERSION >= 3
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
#else
    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|s#s#s#s#s#s#s#s#s#s#s#is#", (char **)kwlist
#endif

        , &ReqUserLoginField_TradingDay, &ReqUserLoginField_TradingDay_len 
        , &ReqUserLoginField_BrokerID, &ReqUserLoginField_BrokerID_len 
        , &ReqUserLoginField_UserID, &ReqUserLoginField_UserID_len 
        , &ReqUserLoginField_Password, &ReqUserLoginField_Password_len 
        , &ReqUserLoginField_UserProductInfo, &ReqUserLoginField_UserProductInfo_len 
        , &ReqUserLoginField_InterfaceProductInfo, &ReqUserLoginField_InterfaceProductInfo_len 
        , &ReqUserLoginField_ProtocolInfo, &ReqUserLoginField_ProtocolInfo_len 
        , &ReqUserLoginField_MacAddress, &ReqUserLoginField_MacAddress_len 
        , &ReqUserLoginField_OneTimePassword, &ReqUserLoginField_OneTimePassword_len 
        , &ReqUserLoginField_reserve1, &ReqUserLoginField_reserve1_len 
        , &ReqUserLoginField_LoginRemark, &ReqUserLoginField_LoginRemark_len 
        , &ReqUserLoginField_ClientIPPort 
        , &ReqUserLoginField_ClientIPAddress, &ReqUserLoginField_ClientIPAddress_len 


    )) {
        return -1;
    }


    ///交易日
    // TThostFtdcDateType char[9]
    if( ReqUserLoginField_TradingDay != NULL ) {
        if(ReqUserLoginField_TradingDay_len > (Py_ssize_t)sizeof(self->data.TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is %zd)", ReqUserLoginField_TradingDay_len, (Py_ssize_t)sizeof(self->data.TradingDay));
            return -1;
        }
        // memset(self->data.TradingDay, 0, sizeof(self->data.TradingDay));
        // memcpy(self->data.TradingDay, ReqUserLoginField_TradingDay, ReqUserLoginField_TradingDay_len);        
        strncpy(self->data.TradingDay, ReqUserLoginField_TradingDay, sizeof(self->data.TradingDay) );
        ReqUserLoginField_TradingDay = NULL;
    }
            
    ///经纪公司代码
    // TThostFtdcBrokerIDType char[11]
    if( ReqUserLoginField_BrokerID != NULL ) {
        if(ReqUserLoginField_BrokerID_len > (Py_ssize_t)sizeof(self->data.BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is %zd)", ReqUserLoginField_BrokerID_len, (Py_ssize_t)sizeof(self->data.BrokerID));
            return -1;
        }
        // memset(self->data.BrokerID, 0, sizeof(self->data.BrokerID));
        // memcpy(self->data.BrokerID, ReqUserLoginField_BrokerID, ReqUserLoginField_BrokerID_len);        
        strncpy(self->data.BrokerID, ReqUserLoginField_BrokerID, sizeof(self->data.BrokerID) );
        ReqUserLoginField_BrokerID = NULL;
    }
            
    ///用户代码
    // TThostFtdcUserIDType char[16]
    if( ReqUserLoginField_UserID != NULL ) {
        if(ReqUserLoginField_UserID_len > (Py_ssize_t)sizeof(self->data.UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is %zd)", ReqUserLoginField_UserID_len, (Py_ssize_t)sizeof(self->data.UserID));
            return -1;
        }
        // memset(self->data.UserID, 0, sizeof(self->data.UserID));
        // memcpy(self->data.UserID, ReqUserLoginField_UserID, ReqUserLoginField_UserID_len);        
        strncpy(self->data.UserID, ReqUserLoginField_UserID, sizeof(self->data.UserID) );
        ReqUserLoginField_UserID = NULL;
    }
            
    ///密码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginField_Password != NULL ) {
        if(ReqUserLoginField_Password_len > (Py_ssize_t)sizeof(self->data.Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is %zd)", ReqUserLoginField_Password_len, (Py_ssize_t)sizeof(self->data.Password));
            return -1;
        }
        // memset(self->data.Password, 0, sizeof(self->data.Password));
        // memcpy(self->data.Password, ReqUserLoginField_Password, ReqUserLoginField_Password_len);        
        strncpy(self->data.Password, ReqUserLoginField_Password, sizeof(self->data.Password) );
        ReqUserLoginField_Password = NULL;
    }
            
    ///用户端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginField_UserProductInfo != NULL ) {
        if(ReqUserLoginField_UserProductInfo_len > (Py_ssize_t)sizeof(self->data.UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginField_UserProductInfo_len, (Py_ssize_t)sizeof(self->data.UserProductInfo));
            return -1;
        }
        // memset(self->data.UserProductInfo, 0, sizeof(self->data.UserProductInfo));
        // memcpy(self->data.UserProductInfo, ReqUserLoginField_UserProductInfo, ReqUserLoginField_UserProductInfo_len);        
        strncpy(self->data.UserProductInfo, ReqUserLoginField_UserProductInfo, sizeof(self->data.UserProductInfo) );
        ReqUserLoginField_UserProductInfo = NULL;
    }
            
    ///接口端产品信息
    // TThostFtdcProductInfoType char[11]
    if( ReqUserLoginField_InterfaceProductInfo != NULL ) {
        if(ReqUserLoginField_InterfaceProductInfo_len > (Py_ssize_t)sizeof(self->data.InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginField_InterfaceProductInfo_len, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
            return -1;
        }
        // memset(self->data.InterfaceProductInfo, 0, sizeof(self->data.InterfaceProductInfo));
        // memcpy(self->data.InterfaceProductInfo, ReqUserLoginField_InterfaceProductInfo, ReqUserLoginField_InterfaceProductInfo_len);        
        strncpy(self->data.InterfaceProductInfo, ReqUserLoginField_InterfaceProductInfo, sizeof(self->data.InterfaceProductInfo) );
        ReqUserLoginField_InterfaceProductInfo = NULL;
    }
            
    ///协议信息
    // TThostFtdcProtocolInfoType char[11]
    if( ReqUserLoginField_ProtocolInfo != NULL ) {
        if(ReqUserLoginField_ProtocolInfo_len > (Py_ssize_t)sizeof(self->data.ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is %zd)", ReqUserLoginField_ProtocolInfo_len, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
            return -1;
        }
        // memset(self->data.ProtocolInfo, 0, sizeof(self->data.ProtocolInfo));
        // memcpy(self->data.ProtocolInfo, ReqUserLoginField_ProtocolInfo, ReqUserLoginField_ProtocolInfo_len);        
        strncpy(self->data.ProtocolInfo, ReqUserLoginField_ProtocolInfo, sizeof(self->data.ProtocolInfo) );
        ReqUserLoginField_ProtocolInfo = NULL;
    }
            
    ///Mac地址
    // TThostFtdcMacAddressType char[21]
    if( ReqUserLoginField_MacAddress != NULL ) {
        if(ReqUserLoginField_MacAddress_len > (Py_ssize_t)sizeof(self->data.MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginField_MacAddress_len, (Py_ssize_t)sizeof(self->data.MacAddress));
            return -1;
        }
        // memset(self->data.MacAddress, 0, sizeof(self->data.MacAddress));
        // memcpy(self->data.MacAddress, ReqUserLoginField_MacAddress, ReqUserLoginField_MacAddress_len);        
        strncpy(self->data.MacAddress, ReqUserLoginField_MacAddress, sizeof(self->data.MacAddress) );
        ReqUserLoginField_MacAddress = NULL;
    }
            
    ///动态密码
    // TThostFtdcPasswordType char[41]
    if( ReqUserLoginField_OneTimePassword != NULL ) {
        if(ReqUserLoginField_OneTimePassword_len > (Py_ssize_t)sizeof(self->data.OneTimePassword)) {
            PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is %zd)", ReqUserLoginField_OneTimePassword_len, (Py_ssize_t)sizeof(self->data.OneTimePassword));
            return -1;
        }
        // memset(self->data.OneTimePassword, 0, sizeof(self->data.OneTimePassword));
        // memcpy(self->data.OneTimePassword, ReqUserLoginField_OneTimePassword, ReqUserLoginField_OneTimePassword_len);        
        strncpy(self->data.OneTimePassword, ReqUserLoginField_OneTimePassword, sizeof(self->data.OneTimePassword) );
        ReqUserLoginField_OneTimePassword = NULL;
    }
            
    ///保留的无效字段
    // TThostFtdcOldIPAddressType char[16]
    if( ReqUserLoginField_reserve1 != NULL ) {
        if(ReqUserLoginField_reserve1_len > (Py_ssize_t)sizeof(self->data.reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is %zd)", ReqUserLoginField_reserve1_len, (Py_ssize_t)sizeof(self->data.reserve1));
            return -1;
        }
        // memset(self->data.reserve1, 0, sizeof(self->data.reserve1));
        // memcpy(self->data.reserve1, ReqUserLoginField_reserve1, ReqUserLoginField_reserve1_len);        
        strncpy(self->data.reserve1, ReqUserLoginField_reserve1, sizeof(self->data.reserve1) );
        ReqUserLoginField_reserve1 = NULL;
    }
            
    ///登录备注
    // TThostFtdcLoginRemarkType char[36]
    if( ReqUserLoginField_LoginRemark != NULL ) {
        if(ReqUserLoginField_LoginRemark_len > (Py_ssize_t)sizeof(self->data.LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is %zd)", ReqUserLoginField_LoginRemark_len, (Py_ssize_t)sizeof(self->data.LoginRemark));
            return -1;
        }
        // memset(self->data.LoginRemark, 0, sizeof(self->data.LoginRemark));
        // memcpy(self->data.LoginRemark, ReqUserLoginField_LoginRemark, ReqUserLoginField_LoginRemark_len);        
        strncpy(self->data.LoginRemark, ReqUserLoginField_LoginRemark, sizeof(self->data.LoginRemark) );
        ReqUserLoginField_LoginRemark = NULL;
    }
            
    ///终端IP端口
    // TThostFtdcIPPortType int
    self->data.ClientIPPort = ReqUserLoginField_ClientIPPort;
        
    ///终端IP地址
    // TThostFtdcIPAddressType char[33]
    if( ReqUserLoginField_ClientIPAddress != NULL ) {
        if(ReqUserLoginField_ClientIPAddress_len > (Py_ssize_t)sizeof(self->data.ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is %zd)", ReqUserLoginField_ClientIPAddress_len, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
            return -1;
        }
        // memset(self->data.ClientIPAddress, 0, sizeof(self->data.ClientIPAddress));
        // memcpy(self->data.ClientIPAddress, ReqUserLoginField_ClientIPAddress, ReqUserLoginField_ClientIPAddress_len);        
        strncpy(self->data.ClientIPAddress, ReqUserLoginField_ClientIPAddress, sizeof(self->data.ClientIPAddress) );
        ReqUserLoginField_ClientIPAddress = NULL;
    }
            

    return 0;
}

static void PyCThostFtdcReqUserLoginField_dealloc(PyCThostFtdcReqUserLoginField *self) {
    Py_TYPE(self)->tp_free((PyObject *)self);
}

static PyObject *PyCThostFtdcReqUserLoginField_repr(PyCThostFtdcReqUserLoginField *self) {

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
        ,"OneTimePassword", self->data.OneTimePassword//, (Py_ssize_t)sizeof(self->data.OneTimePassword) 
        ,"reserve1", self->data.reserve1//, (Py_ssize_t)sizeof(self->data.reserve1) 
        ,"LoginRemark", self->data.LoginRemark//, (Py_ssize_t)sizeof(self->data.LoginRemark) 
        ,"ClientIPPort", self->data.ClientIPPort 
        ,"ClientIPAddress", self->data.ClientIPAddress//, (Py_ssize_t)sizeof(self->data.ClientIPAddress) 


		);

    if (!obj) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginField representation");
        return NULL;
    }

    return PyObject_Repr(obj);
}


///交易日
// TThostFtdcDateType char[9]
static PyObject *PyCThostFtdcReqUserLoginField_get_TradingDay(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.TradingDay, (Py_ssize_t)sizeof(self->data.TradingDay));
    return PyBytes_FromString(self->data.TradingDay);
}

///交易日
// TThostFtdcDateType char[9]
static int PyCThostFtdcReqUserLoginField_set_TradingDay(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_BrokerID(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.BrokerID, (Py_ssize_t)sizeof(self->data.BrokerID));
    return PyBytes_FromString(self->data.BrokerID);
}

///经纪公司代码
// TThostFtdcBrokerIDType char[11]
static int PyCThostFtdcReqUserLoginField_set_BrokerID(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_UserID(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserID, (Py_ssize_t)sizeof(self->data.UserID));
    return PyBytes_FromString(self->data.UserID);
}

///用户代码
// TThostFtdcUserIDType char[16]
static int PyCThostFtdcReqUserLoginField_set_UserID(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_Password(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.Password, (Py_ssize_t)sizeof(self->data.Password));
    return PyBytes_FromString(self->data.Password);
}

///密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginField_set_Password(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_UserProductInfo(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.UserProductInfo, (Py_ssize_t)sizeof(self->data.UserProductInfo));
    return PyBytes_FromString(self->data.UserProductInfo);
}

///用户端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginField_set_UserProductInfo(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_InterfaceProductInfo(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.InterfaceProductInfo, (Py_ssize_t)sizeof(self->data.InterfaceProductInfo));
    return PyBytes_FromString(self->data.InterfaceProductInfo);
}

///接口端产品信息
// TThostFtdcProductInfoType char[11]
static int PyCThostFtdcReqUserLoginField_set_InterfaceProductInfo(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_ProtocolInfo(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ProtocolInfo, (Py_ssize_t)sizeof(self->data.ProtocolInfo));
    return PyBytes_FromString(self->data.ProtocolInfo);
}

///协议信息
// TThostFtdcProtocolInfoType char[11]
static int PyCThostFtdcReqUserLoginField_set_ProtocolInfo(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_MacAddress(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.MacAddress, (Py_ssize_t)sizeof(self->data.MacAddress));
    return PyBytes_FromString(self->data.MacAddress);
}

///Mac地址
// TThostFtdcMacAddressType char[21]
static int PyCThostFtdcReqUserLoginField_set_MacAddress(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_OneTimePassword(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.OneTimePassword, (Py_ssize_t)sizeof(self->data.OneTimePassword));
    return PyBytes_FromString(self->data.OneTimePassword);
}

///动态密码
// TThostFtdcPasswordType char[41]
static int PyCThostFtdcReqUserLoginField_set_OneTimePassword(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_reserve1(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.reserve1, (Py_ssize_t)sizeof(self->data.reserve1));
    return PyBytes_FromString(self->data.reserve1);
}

///保留的无效字段
// TThostFtdcOldIPAddressType char[16]
static int PyCThostFtdcReqUserLoginField_set_reserve1(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_LoginRemark(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.LoginRemark, (Py_ssize_t)sizeof(self->data.LoginRemark));
    return PyBytes_FromString(self->data.LoginRemark);
}

///登录备注
// TThostFtdcLoginRemarkType char[36]
static int PyCThostFtdcReqUserLoginField_set_LoginRemark(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_ClientIPPort(PyCThostFtdcReqUserLoginField *self, void *closure) {
#if PY_MAJOR_VERSION >= 3
    return PyLong_FromLong(self->data.ClientIPPort);
#else
    return PyInt_FromLong(self->data.ClientIPPort);
#endif
}

///终端IP端口
// TThostFtdcIPPortType int
static int PyCThostFtdcReqUserLoginField_set_ClientIPPort(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
static PyObject *PyCThostFtdcReqUserLoginField_get_ClientIPAddress(PyCThostFtdcReqUserLoginField *self, void *closure) {
    //return PyBytes_FromStringAndSize(self->data.ClientIPAddress, (Py_ssize_t)sizeof(self->data.ClientIPAddress));
    return PyBytes_FromString(self->data.ClientIPAddress);
}

///终端IP地址
// TThostFtdcIPAddressType char[33]
static int PyCThostFtdcReqUserLoginField_set_ClientIPAddress(PyCThostFtdcReqUserLoginField *self, PyObject* val, void *closure) {
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
            

static PyGetSetDef PyCThostFtdcReqUserLoginField_getset[] = {
    ///交易日 
    {(char *)"TradingDay", (getter)PyCThostFtdcReqUserLoginField_get_TradingDay, (setter)PyCThostFtdcReqUserLoginField_set_TradingDay, (char *)"TradingDay", NULL},
    ///经纪公司代码 
    {(char *)"BrokerID", (getter)PyCThostFtdcReqUserLoginField_get_BrokerID, (setter)PyCThostFtdcReqUserLoginField_set_BrokerID, (char *)"BrokerID", NULL},
    ///用户代码 
    {(char *)"UserID", (getter)PyCThostFtdcReqUserLoginField_get_UserID, (setter)PyCThostFtdcReqUserLoginField_set_UserID, (char *)"UserID", NULL},
    ///密码 
    {(char *)"Password", (getter)PyCThostFtdcReqUserLoginField_get_Password, (setter)PyCThostFtdcReqUserLoginField_set_Password, (char *)"Password", NULL},
    ///用户端产品信息 
    {(char *)"UserProductInfo", (getter)PyCThostFtdcReqUserLoginField_get_UserProductInfo, (setter)PyCThostFtdcReqUserLoginField_set_UserProductInfo, (char *)"UserProductInfo", NULL},
    ///接口端产品信息 
    {(char *)"InterfaceProductInfo", (getter)PyCThostFtdcReqUserLoginField_get_InterfaceProductInfo, (setter)PyCThostFtdcReqUserLoginField_set_InterfaceProductInfo, (char *)"InterfaceProductInfo", NULL},
    ///协议信息 
    {(char *)"ProtocolInfo", (getter)PyCThostFtdcReqUserLoginField_get_ProtocolInfo, (setter)PyCThostFtdcReqUserLoginField_set_ProtocolInfo, (char *)"ProtocolInfo", NULL},
    ///Mac地址 
    {(char *)"MacAddress", (getter)PyCThostFtdcReqUserLoginField_get_MacAddress, (setter)PyCThostFtdcReqUserLoginField_set_MacAddress, (char *)"MacAddress", NULL},
    ///动态密码 
    {(char *)"OneTimePassword", (getter)PyCThostFtdcReqUserLoginField_get_OneTimePassword, (setter)PyCThostFtdcReqUserLoginField_set_OneTimePassword, (char *)"OneTimePassword", NULL},
    ///保留的无效字段 
    {(char *)"reserve1", (getter)PyCThostFtdcReqUserLoginField_get_reserve1, (setter)PyCThostFtdcReqUserLoginField_set_reserve1, (char *)"reserve1", NULL},
    ///登录备注 
    {(char *)"LoginRemark", (getter)PyCThostFtdcReqUserLoginField_get_LoginRemark, (setter)PyCThostFtdcReqUserLoginField_set_LoginRemark, (char *)"LoginRemark", NULL},
    ///终端IP端口 
    {(char *)"ClientIPPort", (getter)PyCThostFtdcReqUserLoginField_get_ClientIPPort, (setter)PyCThostFtdcReqUserLoginField_set_ClientIPPort, (char *)"ClientIPPort", NULL},
    ///终端IP地址 
    {(char *)"ClientIPAddress", (getter)PyCThostFtdcReqUserLoginField_get_ClientIPAddress, (setter)PyCThostFtdcReqUserLoginField_set_ClientIPAddress, (char *)"ClientIPAddress", NULL},

    {NULL}
};

PyTypeObject PyCThostFtdcReqUserLoginFieldType = {
	PyVarObject_HEAD_INIT(NULL, 0)  /* ob_base */
	"CThostFtdcReqUserLoginField",	/* tp_name */
	sizeof(PyCThostFtdcReqUserLoginField),/* tp_basicsize */
	0,                          /* tp_itemsize */
	(destructor)PyCThostFtdcReqUserLoginField_dealloc,/* tp_dealloc */
	0,                          /* tp_print */
	0,                          /* tp_getattr */
	0,                          /* tp_setattr */
	0,                          /* tp_reserved */
	(reprfunc)PyCThostFtdcReqUserLoginField_repr,   /* tp_repr */
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
	"CThostFtdcReqUserLoginField",           /* tp_doc */
	0,                          /* tp_traverse */
	0,                          /* tp_clear */
	0,                          /* tp_richcompare */
	0,                          /* tp_weaklistoffset */
	0,                          /* tp_iter */
	0,                          /* tp_iternext */
	0,                          /* tp_methods */
	0,                          /* tp_members */
	PyCThostFtdcReqUserLoginField_getset,   /* tp_getset */
	0,                          /* tp_base */
	0,                          /* tp_dict */
	0,                          /* tp_descr_get */
	0,                          /* tp_descr_set */
	0,                          /* tp_dictoffset */
	(initproc)PyCThostFtdcReqUserLoginField_init, /* tp_init */
	0,                          /* tp_alloc */
	PyCThostFtdcReqUserLoginField_new,       /* tp_new */
};

int PyCThostFtdcReqUserLoginFieldType_init(PyObject *module) {

	/* 准备好对象使用 CThostFtdcReqUserLoginField  */
	if (PyType_Ready(&PyCThostFtdcReqUserLoginFieldType) < 0) {
		PyErr_SetString(PyExc_RuntimeError, "can't initialize PyCTP.CThostFtdcReqUserLoginField");
		return -1;
	}

    Py_INCREF(&PyCThostFtdcReqUserLoginFieldType);
    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginField", (PyObject *)&PyCThostFtdcReqUserLoginFieldType) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginField to module");
        Py_DECREF(&PyCThostFtdcReqUserLoginFieldType);
		return -1;
    }

    return 0;
}
