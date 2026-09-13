
#include "PyCThostFtdcReqUserLoginField.h"

///用户登录请求

static int PyCThostFtdcReqUserLoginFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "OneTimePassword", "reserve1", "LoginRemark", "ClientIPPort", "ClientIPAddress", "SMSCode", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqUserLoginField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqUserLoginField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqUserLoginField_UserID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_UserID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginField_Password = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_Password_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_UserProductInfo_length = 0;

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginField_InterfaceProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_InterfaceProductInfo_length = 0;

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    char *CThostFtdcReqUserLoginField_ProtocolInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_ProtocolInfo_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcReqUserLoginField_MacAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_MacAddress_length = 0;

    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginField_OneTimePassword = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_OneTimePassword_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcReqUserLoginField_reserve1 = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_reserve1_length = 0;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    char *CThostFtdcReqUserLoginField_LoginRemark = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_LoginRemark_length = 0;

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    int CThostFtdcReqUserLoginField_ClientIPPort = 0;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcReqUserLoginField_ClientIPAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_ClientIPAddress_length = 0;

    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    char *CThostFtdcReqUserLoginField_SMSCode = NULL;
    Py_ssize_t CThostFtdcReqUserLoginField_SMSCode_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#y#", (char **)kwlist
        , &CThostFtdcReqUserLoginField_TradingDay, &CThostFtdcReqUserLoginField_TradingDay_length
        , &CThostFtdcReqUserLoginField_BrokerID, &CThostFtdcReqUserLoginField_BrokerID_length
        , &CThostFtdcReqUserLoginField_UserID, &CThostFtdcReqUserLoginField_UserID_length
        , &CThostFtdcReqUserLoginField_Password, &CThostFtdcReqUserLoginField_Password_length
        , &CThostFtdcReqUserLoginField_UserProductInfo, &CThostFtdcReqUserLoginField_UserProductInfo_length
        , &CThostFtdcReqUserLoginField_InterfaceProductInfo, &CThostFtdcReqUserLoginField_InterfaceProductInfo_length
        , &CThostFtdcReqUserLoginField_ProtocolInfo, &CThostFtdcReqUserLoginField_ProtocolInfo_length
        , &CThostFtdcReqUserLoginField_MacAddress, &CThostFtdcReqUserLoginField_MacAddress_length
        , &CThostFtdcReqUserLoginField_OneTimePassword, &CThostFtdcReqUserLoginField_OneTimePassword_length
        , &CThostFtdcReqUserLoginField_reserve1, &CThostFtdcReqUserLoginField_reserve1_length
        , &CThostFtdcReqUserLoginField_LoginRemark, &CThostFtdcReqUserLoginField_LoginRemark_length
        , &CThostFtdcReqUserLoginField_ClientIPPort
        , &CThostFtdcReqUserLoginField_ClientIPAddress, &CThostFtdcReqUserLoginField_ClientIPAddress_length
        , &CThostFtdcReqUserLoginField_SMSCode, &CThostFtdcReqUserLoginField_SMSCode_length
    )) {
        return -1;
    }

    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqUserLoginField_TradingDay != NULL ) {
        if(CThostFtdcReqUserLoginField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqUserLoginField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqUserLoginField_TradingDay, CThostFtdcReqUserLoginField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqUserLoginField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqUserLoginField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqUserLoginField_BrokerID != NULL ) {
        if(CThostFtdcReqUserLoginField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqUserLoginField_BrokerID, CThostFtdcReqUserLoginField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqUserLoginField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqUserLoginField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqUserLoginField_UserID != NULL ) {
        if(CThostFtdcReqUserLoginField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqUserLoginField_UserID, CThostFtdcReqUserLoginField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqUserLoginField_UserID, sizeof(data->UserID));
        CThostFtdcReqUserLoginField_UserID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginField_Password != NULL ) {
        if(CThostFtdcReqUserLoginField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqUserLoginField_Password, CThostFtdcReqUserLoginField_Password_length);
        strncpy(data->Password, CThostFtdcReqUserLoginField_Password, sizeof(data->Password));
        CThostFtdcReqUserLoginField_Password = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginField_UserProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcReqUserLoginField_UserProductInfo, CThostFtdcReqUserLoginField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcReqUserLoginField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcReqUserLoginField_UserProductInfo = NULL;
    }

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginField_InterfaceProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginField_InterfaceProductInfo_length >= (Py_ssize_t)sizeof(data->InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginField_InterfaceProductInfo_length);
            return -1;
        }
        // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
        // memcpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginField_InterfaceProductInfo, CThostFtdcReqUserLoginField_InterfaceProductInfo_length);
        strncpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginField_InterfaceProductInfo, sizeof(data->InterfaceProductInfo));
        CThostFtdcReqUserLoginField_InterfaceProductInfo = NULL;
    }

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    if( CThostFtdcReqUserLoginField_ProtocolInfo != NULL ) {
        if(CThostFtdcReqUserLoginField_ProtocolInfo_length >= (Py_ssize_t)sizeof(data->ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginField_ProtocolInfo_length);
            return -1;
        }
        // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
        // memcpy(data->ProtocolInfo, CThostFtdcReqUserLoginField_ProtocolInfo, CThostFtdcReqUserLoginField_ProtocolInfo_length);
        strncpy(data->ProtocolInfo, CThostFtdcReqUserLoginField_ProtocolInfo, sizeof(data->ProtocolInfo));
        CThostFtdcReqUserLoginField_ProtocolInfo = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcReqUserLoginField_MacAddress != NULL ) {
        if(CThostFtdcReqUserLoginField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcReqUserLoginField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcReqUserLoginField_MacAddress, CThostFtdcReqUserLoginField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcReqUserLoginField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcReqUserLoginField_MacAddress = NULL;
    }

    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginField_OneTimePassword != NULL ) {
        if(CThostFtdcReqUserLoginField_OneTimePassword_length >= (Py_ssize_t)sizeof(data->OneTimePassword)) {
            PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginField_OneTimePassword_length);
            return -1;
        }
        // memset(data->OneTimePassword, 0, sizeof(data->OneTimePassword));
        // memcpy(data->OneTimePassword, CThostFtdcReqUserLoginField_OneTimePassword, CThostFtdcReqUserLoginField_OneTimePassword_length);
        strncpy(data->OneTimePassword, CThostFtdcReqUserLoginField_OneTimePassword, sizeof(data->OneTimePassword));
        CThostFtdcReqUserLoginField_OneTimePassword = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcReqUserLoginField_reserve1 != NULL ) {
        if(CThostFtdcReqUserLoginField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcReqUserLoginField_reserve1, CThostFtdcReqUserLoginField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcReqUserLoginField_reserve1, sizeof(data->reserve1));
        CThostFtdcReqUserLoginField_reserve1 = NULL;
    }

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    if( CThostFtdcReqUserLoginField_LoginRemark != NULL ) {
        if(CThostFtdcReqUserLoginField_LoginRemark_length >= (Py_ssize_t)sizeof(data->LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is 35)", CThostFtdcReqUserLoginField_LoginRemark_length);
            return -1;
        }
        // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
        // memcpy(data->LoginRemark, CThostFtdcReqUserLoginField_LoginRemark, CThostFtdcReqUserLoginField_LoginRemark_length);
        strncpy(data->LoginRemark, CThostFtdcReqUserLoginField_LoginRemark, sizeof(data->LoginRemark));
        CThostFtdcReqUserLoginField_LoginRemark = NULL;
    }

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    data->ClientIPPort = CThostFtdcReqUserLoginField_ClientIPPort;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcReqUserLoginField_ClientIPAddress != NULL ) {
        if(CThostFtdcReqUserLoginField_ClientIPAddress_length >= (Py_ssize_t)sizeof(data->ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is 32)", CThostFtdcReqUserLoginField_ClientIPAddress_length);
            return -1;
        }
        // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
        // memcpy(data->ClientIPAddress, CThostFtdcReqUserLoginField_ClientIPAddress, CThostFtdcReqUserLoginField_ClientIPAddress_length);
        strncpy(data->ClientIPAddress, CThostFtdcReqUserLoginField_ClientIPAddress, sizeof(data->ClientIPAddress));
        CThostFtdcReqUserLoginField_ClientIPAddress = NULL;
    }

    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    if( CThostFtdcReqUserLoginField_SMSCode != NULL ) {
        if(CThostFtdcReqUserLoginField_SMSCode_length >= (Py_ssize_t)sizeof(data->SMSCode)) {
            PyErr_Format(PyExc_ValueError, "SMSCode too long: length=%zd (max allowed is 16)", CThostFtdcReqUserLoginField_SMSCode_length);
            return -1;
        }
        // memset(data->SMSCode, 0, sizeof(data->SMSCode));
        // memcpy(data->SMSCode, CThostFtdcReqUserLoginField_SMSCode, CThostFtdcReqUserLoginField_SMSCode_length);
        strncpy(data->SMSCode, CThostFtdcReqUserLoginField_SMSCode, sizeof(data->SMSCode));
        CThostFtdcReqUserLoginField_SMSCode = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqUserLoginFieldType_repr(PyObject *self) {

    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "InterfaceProductInfo", data->InterfaceProductInfo//, (Py_ssize_t)sizeof(data->InterfaceProductInfo)
        , "ProtocolInfo", data->ProtocolInfo//, (Py_ssize_t)sizeof(data->ProtocolInfo)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "OneTimePassword", data->OneTimePassword//, (Py_ssize_t)sizeof(data->OneTimePassword)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "LoginRemark", data->LoginRemark//, (Py_ssize_t)sizeof(data->LoginRemark)
        , "ClientIPPort", data->ClientIPPort
        , "ClientIPAddress", data->ClientIPAddress//, (Py_ssize_t)sizeof(data->ClientIPAddress)
        , "SMSCode", data->SMSCode//, (Py_ssize_t)sizeof(data->SMSCode)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqUserLoginFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqUserLoginFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqUserLoginFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqUserLoginFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcReqUserLoginFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 接口端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_InterfaceProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InterfaceProductInfo, (Py_ssize_t)sizeof(data->InterfaceProductInfo));
    return PyBytes_FromString(data->InterfaceProductInfo);
}

static int PyCThostFtdcReqUserLoginFieldType_set_InterfaceProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
    // memcpy(data->InterfaceProductInfo, buf, len);
    strncpy(data->InterfaceProductInfo, buf, sizeof(data->InterfaceProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 协议信息
/// typedef char TThostFtdcProtocolInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_ProtocolInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProtocolInfo, (Py_ssize_t)sizeof(data->ProtocolInfo));
    return PyBytes_FromString(data->ProtocolInfo);
}

static int PyCThostFtdcReqUserLoginFieldType_set_ProtocolInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
    // memcpy(data->ProtocolInfo, buf, len);
    strncpy(data->ProtocolInfo, buf, sizeof(data->ProtocolInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcReqUserLoginFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_OneTimePassword(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OneTimePassword, (Py_ssize_t)sizeof(data->OneTimePassword));
    return PyBytes_FromString(data->OneTimePassword);
}

static int PyCThostFtdcReqUserLoginFieldType_set_OneTimePassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OneTimePassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::OneTimePassword)) {
        PyErr_SetString(PyExc_ValueError, "OneTimePassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->OneTimePassword, 0, sizeof(data->OneTimePassword));
    // memcpy(data->OneTimePassword, buf, len);
    strncpy(data->OneTimePassword, buf, sizeof(data->OneTimePassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcReqUserLoginFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录备注
/// typedef char TThostFtdcLoginRemarkType[36]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_LoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginRemark, (Py_ssize_t)sizeof(data->LoginRemark));
    return PyBytes_FromString(data->LoginRemark);
}

static int PyCThostFtdcReqUserLoginFieldType_set_LoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
    // memcpy(data->LoginRemark, buf, len);
    strncpy(data->LoginRemark, buf, sizeof(data->LoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 终端IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_ClientIPAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientIPAddress, (Py_ssize_t)sizeof(data->ClientIPAddress));
    return PyBytes_FromString(data->ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginFieldType_set_ClientIPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::ClientIPAddress)) {
        PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
    // memcpy(data->ClientIPAddress, buf, len);
    strncpy(data->ClientIPAddress, buf, sizeof(data->ClientIPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 短信验证码
/// typedef char TThostFtdcSMSCodeType[17]
static PyObject *PyCThostFtdcReqUserLoginFieldType_get_SMSCode(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SMSCode, (Py_ssize_t)sizeof(data->SMSCode));
    return PyBytes_FromString(data->SMSCode);
}

static int PyCThostFtdcReqUserLoginFieldType_set_SMSCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SMSCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginField::SMSCode)) {
        PyErr_SetString(PyExc_ValueError, "SMSCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginFieldData>(self);
    CThostFtdcReqUserLoginField *data = &(extra->data);
    // memset(data->SMSCode, 0, sizeof(data->SMSCode));
    // memcpy(data->SMSCode, buf, len);
    strncpy(data->SMSCode, buf, sizeof(data->SMSCode));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqUserLoginFieldType_members[] = {
    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    {
        .name = "ClientIPPort",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqUserLoginFieldData, data.ClientIPPort),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("终端IP端口")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqUserLoginFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqUserLoginFieldType_get_TradingDay,
    .set = PyCThostFtdcReqUserLoginFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqUserLoginFieldType_get_BrokerID,
    .set = PyCThostFtdcReqUserLoginFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqUserLoginFieldType_get_UserID,
    .set = PyCThostFtdcReqUserLoginFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqUserLoginFieldType_get_Password,
    .set = PyCThostFtdcReqUserLoginFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcReqUserLoginFieldType_get_UserProductInfo,
    .set = PyCThostFtdcReqUserLoginFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "InterfaceProductInfo",
    .get = PyCThostFtdcReqUserLoginFieldType_get_InterfaceProductInfo,
    .set = PyCThostFtdcReqUserLoginFieldType_set_InterfaceProductInfo,
    .doc = PyDoc_STR("接口端产品信息"),
    },
    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    {
    .name = "ProtocolInfo",
    .get = PyCThostFtdcReqUserLoginFieldType_get_ProtocolInfo,
    .set = PyCThostFtdcReqUserLoginFieldType_set_ProtocolInfo,
    .doc = PyDoc_STR("协议信息"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcReqUserLoginFieldType_get_MacAddress,
    .set = PyCThostFtdcReqUserLoginFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OneTimePassword",
    .get = PyCThostFtdcReqUserLoginFieldType_get_OneTimePassword,
    .set = PyCThostFtdcReqUserLoginFieldType_set_OneTimePassword,
    .doc = PyDoc_STR("动态密码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcReqUserLoginFieldType_get_reserve1,
    .set = PyCThostFtdcReqUserLoginFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    {
    .name = "LoginRemark",
    .get = PyCThostFtdcReqUserLoginFieldType_get_LoginRemark,
    .set = PyCThostFtdcReqUserLoginFieldType_set_LoginRemark,
    .doc = PyDoc_STR("登录备注"),
    },
    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientIPAddress",
    .get = PyCThostFtdcReqUserLoginFieldType_get_ClientIPAddress,
    .set = PyCThostFtdcReqUserLoginFieldType_set_ClientIPAddress,
    .doc = PyDoc_STR("终端IP地址"),
    },
    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    {
    .name = "SMSCode",
    .get = PyCThostFtdcReqUserLoginFieldType_get_SMSCode,
    .set = PyCThostFtdcReqUserLoginFieldType_set_SMSCode,
    .doc = PyDoc_STR("短信验证码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqUserLoginFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqUserLoginField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("用户登录请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqUserLoginFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqUserLoginFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqUserLoginFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqUserLoginFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqUserLoginFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqUserLoginFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("用户登录请求")},
    {Py_tp_members, PyCThostFtdcReqUserLoginFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqUserLoginFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqUserLoginFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqUserLoginFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqUserLoginFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqUserLoginField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqUserLoginFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqUserLoginFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqUserLoginFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqUserLoginFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqUserLoginFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqUserLoginFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}