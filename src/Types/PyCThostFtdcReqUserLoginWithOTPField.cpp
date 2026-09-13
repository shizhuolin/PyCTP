
#include "PyCThostFtdcReqUserLoginWithOTPField.h"

///用户发出带动态验证码的登录请求请求

static int PyCThostFtdcReqUserLoginWithOTPFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "reserve1", "LoginRemark", "OTPPassword", "ClientIPPort", "ClientIPAddress", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqUserLoginWithOTPField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqUserLoginWithOTPField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqUserLoginWithOTPField_UserID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_UserID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginWithOTPField_Password = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_Password_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginWithOTPField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_UserProductInfo_length = 0;

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo_length = 0;

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    char *CThostFtdcReqUserLoginWithOTPField_ProtocolInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_ProtocolInfo_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcReqUserLoginWithOTPField_MacAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_MacAddress_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcReqUserLoginWithOTPField_reserve1 = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_reserve1_length = 0;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    char *CThostFtdcReqUserLoginWithOTPField_LoginRemark = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_LoginRemark_length = 0;

    /// OTP密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginWithOTPField_OTPPassword = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_OTPPassword_length = 0;

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    int CThostFtdcReqUserLoginWithOTPField_ClientIPPort = 0;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcReqUserLoginWithOTPField_ClientIPAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginWithOTPField_ClientIPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#", (char **)kwlist
        , &CThostFtdcReqUserLoginWithOTPField_TradingDay, &CThostFtdcReqUserLoginWithOTPField_TradingDay_length
        , &CThostFtdcReqUserLoginWithOTPField_BrokerID, &CThostFtdcReqUserLoginWithOTPField_BrokerID_length
        , &CThostFtdcReqUserLoginWithOTPField_UserID, &CThostFtdcReqUserLoginWithOTPField_UserID_length
        , &CThostFtdcReqUserLoginWithOTPField_Password, &CThostFtdcReqUserLoginWithOTPField_Password_length
        , &CThostFtdcReqUserLoginWithOTPField_UserProductInfo, &CThostFtdcReqUserLoginWithOTPField_UserProductInfo_length
        , &CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo, &CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo_length
        , &CThostFtdcReqUserLoginWithOTPField_ProtocolInfo, &CThostFtdcReqUserLoginWithOTPField_ProtocolInfo_length
        , &CThostFtdcReqUserLoginWithOTPField_MacAddress, &CThostFtdcReqUserLoginWithOTPField_MacAddress_length
        , &CThostFtdcReqUserLoginWithOTPField_reserve1, &CThostFtdcReqUserLoginWithOTPField_reserve1_length
        , &CThostFtdcReqUserLoginWithOTPField_LoginRemark, &CThostFtdcReqUserLoginWithOTPField_LoginRemark_length
        , &CThostFtdcReqUserLoginWithOTPField_OTPPassword, &CThostFtdcReqUserLoginWithOTPField_OTPPassword_length
        , &CThostFtdcReqUserLoginWithOTPField_ClientIPPort
        , &CThostFtdcReqUserLoginWithOTPField_ClientIPAddress, &CThostFtdcReqUserLoginWithOTPField_ClientIPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqUserLoginWithOTPField_TradingDay != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqUserLoginWithOTPField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqUserLoginWithOTPField_TradingDay, CThostFtdcReqUserLoginWithOTPField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqUserLoginWithOTPField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqUserLoginWithOTPField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqUserLoginWithOTPField_BrokerID != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithOTPField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqUserLoginWithOTPField_BrokerID, CThostFtdcReqUserLoginWithOTPField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqUserLoginWithOTPField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqUserLoginWithOTPField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqUserLoginWithOTPField_UserID != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginWithOTPField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqUserLoginWithOTPField_UserID, CThostFtdcReqUserLoginWithOTPField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqUserLoginWithOTPField_UserID, sizeof(data->UserID));
        CThostFtdcReqUserLoginWithOTPField_UserID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginWithOTPField_Password != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginWithOTPField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqUserLoginWithOTPField_Password, CThostFtdcReqUserLoginWithOTPField_Password_length);
        strncpy(data->Password, CThostFtdcReqUserLoginWithOTPField_Password, sizeof(data->Password));
        CThostFtdcReqUserLoginWithOTPField_Password = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginWithOTPField_UserProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithOTPField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcReqUserLoginWithOTPField_UserProductInfo, CThostFtdcReqUserLoginWithOTPField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcReqUserLoginWithOTPField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcReqUserLoginWithOTPField_UserProductInfo = NULL;
    }

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo_length >= (Py_ssize_t)sizeof(data->InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo_length);
            return -1;
        }
        // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
        // memcpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo, CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo_length);
        strncpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo, sizeof(data->InterfaceProductInfo));
        CThostFtdcReqUserLoginWithOTPField_InterfaceProductInfo = NULL;
    }

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    if( CThostFtdcReqUserLoginWithOTPField_ProtocolInfo != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_ProtocolInfo_length >= (Py_ssize_t)sizeof(data->ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginWithOTPField_ProtocolInfo_length);
            return -1;
        }
        // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
        // memcpy(data->ProtocolInfo, CThostFtdcReqUserLoginWithOTPField_ProtocolInfo, CThostFtdcReqUserLoginWithOTPField_ProtocolInfo_length);
        strncpy(data->ProtocolInfo, CThostFtdcReqUserLoginWithOTPField_ProtocolInfo, sizeof(data->ProtocolInfo));
        CThostFtdcReqUserLoginWithOTPField_ProtocolInfo = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcReqUserLoginWithOTPField_MacAddress != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcReqUserLoginWithOTPField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcReqUserLoginWithOTPField_MacAddress, CThostFtdcReqUserLoginWithOTPField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcReqUserLoginWithOTPField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcReqUserLoginWithOTPField_MacAddress = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcReqUserLoginWithOTPField_reserve1 != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginWithOTPField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcReqUserLoginWithOTPField_reserve1, CThostFtdcReqUserLoginWithOTPField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcReqUserLoginWithOTPField_reserve1, sizeof(data->reserve1));
        CThostFtdcReqUserLoginWithOTPField_reserve1 = NULL;
    }

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    if( CThostFtdcReqUserLoginWithOTPField_LoginRemark != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_LoginRemark_length >= (Py_ssize_t)sizeof(data->LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is 35)", CThostFtdcReqUserLoginWithOTPField_LoginRemark_length);
            return -1;
        }
        // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
        // memcpy(data->LoginRemark, CThostFtdcReqUserLoginWithOTPField_LoginRemark, CThostFtdcReqUserLoginWithOTPField_LoginRemark_length);
        strncpy(data->LoginRemark, CThostFtdcReqUserLoginWithOTPField_LoginRemark, sizeof(data->LoginRemark));
        CThostFtdcReqUserLoginWithOTPField_LoginRemark = NULL;
    }

    /// OTP密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginWithOTPField_OTPPassword != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_OTPPassword_length >= (Py_ssize_t)sizeof(data->OTPPassword)) {
            PyErr_Format(PyExc_ValueError, "OTPPassword too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginWithOTPField_OTPPassword_length);
            return -1;
        }
        // memset(data->OTPPassword, 0, sizeof(data->OTPPassword));
        // memcpy(data->OTPPassword, CThostFtdcReqUserLoginWithOTPField_OTPPassword, CThostFtdcReqUserLoginWithOTPField_OTPPassword_length);
        strncpy(data->OTPPassword, CThostFtdcReqUserLoginWithOTPField_OTPPassword, sizeof(data->OTPPassword));
        CThostFtdcReqUserLoginWithOTPField_OTPPassword = NULL;
    }

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    data->ClientIPPort = CThostFtdcReqUserLoginWithOTPField_ClientIPPort;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcReqUserLoginWithOTPField_ClientIPAddress != NULL ) {
        if(CThostFtdcReqUserLoginWithOTPField_ClientIPAddress_length >= (Py_ssize_t)sizeof(data->ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is 32)", CThostFtdcReqUserLoginWithOTPField_ClientIPAddress_length);
            return -1;
        }
        // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
        // memcpy(data->ClientIPAddress, CThostFtdcReqUserLoginWithOTPField_ClientIPAddress, CThostFtdcReqUserLoginWithOTPField_ClientIPAddress_length);
        strncpy(data->ClientIPAddress, CThostFtdcReqUserLoginWithOTPField_ClientIPAddress, sizeof(data->ClientIPAddress));
        CThostFtdcReqUserLoginWithOTPField_ClientIPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_repr(PyObject *self) {

    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "InterfaceProductInfo", data->InterfaceProductInfo//, (Py_ssize_t)sizeof(data->InterfaceProductInfo)
        , "ProtocolInfo", data->ProtocolInfo//, (Py_ssize_t)sizeof(data->ProtocolInfo)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "LoginRemark", data->LoginRemark//, (Py_ssize_t)sizeof(data->LoginRemark)
        , "OTPPassword", data->OTPPassword//, (Py_ssize_t)sizeof(data->OTPPassword)
        , "ClientIPPort", data->ClientIPPort
        , "ClientIPAddress", data->ClientIPAddress//, (Py_ssize_t)sizeof(data->ClientIPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithOTPField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginWithOTPField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 接口端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_InterfaceProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InterfaceProductInfo, (Py_ssize_t)sizeof(data->InterfaceProductInfo));
    return PyBytes_FromString(data->InterfaceProductInfo);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_InterfaceProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
    // memcpy(data->InterfaceProductInfo, buf, len);
    strncpy(data->InterfaceProductInfo, buf, sizeof(data->InterfaceProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 协议信息
/// typedef char TThostFtdcProtocolInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_ProtocolInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProtocolInfo, (Py_ssize_t)sizeof(data->ProtocolInfo));
    return PyBytes_FromString(data->ProtocolInfo);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_ProtocolInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
    // memcpy(data->ProtocolInfo, buf, len);
    strncpy(data->ProtocolInfo, buf, sizeof(data->ProtocolInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录备注
/// typedef char TThostFtdcLoginRemarkType[36]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_LoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginRemark, (Py_ssize_t)sizeof(data->LoginRemark));
    return PyBytes_FromString(data->LoginRemark);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_LoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
    // memcpy(data->LoginRemark, buf, len);
    strncpy(data->LoginRemark, buf, sizeof(data->LoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// OTP密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_OTPPassword(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OTPPassword, (Py_ssize_t)sizeof(data->OTPPassword));
    return PyBytes_FromString(data->OTPPassword);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_OTPPassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OTPPassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::OTPPassword)) {
        PyErr_SetString(PyExc_ValueError, "OTPPassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->OTPPassword, 0, sizeof(data->OTPPassword));
    // memcpy(data->OTPPassword, buf, len);
    strncpy(data->OTPPassword, buf, sizeof(data->OTPPassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 终端IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcReqUserLoginWithOTPFieldType_get_ClientIPAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientIPAddress, (Py_ssize_t)sizeof(data->ClientIPAddress));
    return PyBytes_FromString(data->ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginWithOTPFieldType_set_ClientIPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginWithOTPField::ClientIPAddress)) {
        PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginWithOTPFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginWithOTPFieldData>(self);
    CThostFtdcReqUserLoginWithOTPField *data = &(extra->data);
    // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
    // memcpy(data->ClientIPAddress, buf, len);
    strncpy(data->ClientIPAddress, buf, sizeof(data->ClientIPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqUserLoginWithOTPFieldType_members[] = {
    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    {
        .name = "ClientIPPort",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqUserLoginWithOTPFieldData, data.ClientIPPort),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("终端IP端口")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqUserLoginWithOTPFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_TradingDay,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_BrokerID,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_UserID,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_Password,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_UserProductInfo,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "InterfaceProductInfo",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_InterfaceProductInfo,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_InterfaceProductInfo,
    .doc = PyDoc_STR("接口端产品信息"),
    },
    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    {
    .name = "ProtocolInfo",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_ProtocolInfo,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_ProtocolInfo,
    .doc = PyDoc_STR("协议信息"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_MacAddress,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_reserve1,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    {
    .name = "LoginRemark",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_LoginRemark,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_LoginRemark,
    .doc = PyDoc_STR("登录备注"),
    },
    /// OTP密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OTPPassword",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_OTPPassword,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_OTPPassword,
    .doc = PyDoc_STR("OTP密码"),
    },
    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientIPAddress",
    .get = PyCThostFtdcReqUserLoginWithOTPFieldType_get_ClientIPAddress,
    .set = PyCThostFtdcReqUserLoginWithOTPFieldType_set_ClientIPAddress,
    .doc = PyDoc_STR("终端IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqUserLoginWithOTPFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqUserLoginWithOTPField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户发出带动态验证码的登录请求请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqUserLoginWithOTPFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqUserLoginWithOTPFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqUserLoginWithOTPFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqUserLoginWithOTPFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqUserLoginWithOTPFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqUserLoginWithOTPFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户发出带动态验证码的登录请求请求")},
    {Py_tp_members, PyCThostFtdcReqUserLoginWithOTPFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqUserLoginWithOTPFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqUserLoginWithOTPFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqUserLoginWithOTPFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqUserLoginWithOTPFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqUserLoginWithOTPField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginWithOTPFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginWithOTPFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqUserLoginWithOTPFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqUserLoginWithOTPFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqUserLoginWithOTPFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqUserLoginWithOTPFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqUserLoginWithOTPFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqUserLoginWithOTPFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginWithOTPField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginWithOTPField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}