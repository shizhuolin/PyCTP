
#include "PyCThostFtdcReqUserLoginSMField.h"

///国密用户登录请求

static int PyCThostFtdcReqUserLoginSMFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "TradingDay", "BrokerID", "UserID", "Password", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "MacAddress", "OneTimePassword", "reserve1", "LoginRemark", "ClientIPPort", "ClientIPAddress", "SMSCode", "BrokerName", "AuthCode", "AppID", "PIN", NULL };


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcReqUserLoginSMField_TradingDay = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_TradingDay_length = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcReqUserLoginSMField_BrokerID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcReqUserLoginSMField_UserID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_UserID_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginSMField_Password = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_Password_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginSMField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_UserProductInfo_length = 0;

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcReqUserLoginSMField_InterfaceProductInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_InterfaceProductInfo_length = 0;

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    char *CThostFtdcReqUserLoginSMField_ProtocolInfo = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_ProtocolInfo_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcReqUserLoginSMField_MacAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_MacAddress_length = 0;

    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginSMField_OneTimePassword = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_OneTimePassword_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcReqUserLoginSMField_reserve1 = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_reserve1_length = 0;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    char *CThostFtdcReqUserLoginSMField_LoginRemark = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_LoginRemark_length = 0;

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    int CThostFtdcReqUserLoginSMField_ClientIPPort = 0;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcReqUserLoginSMField_ClientIPAddress = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_ClientIPAddress_length = 0;

    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    char *CThostFtdcReqUserLoginSMField_SMSCode = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_SMSCode_length = 0;

    /// 经纪公司名称
    /// typedef char TThostFtdcBrokerNameType[81]
    char *CThostFtdcReqUserLoginSMField_BrokerName = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_BrokerName_length = 0;

    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    char *CThostFtdcReqUserLoginSMField_AuthCode = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_AuthCode_length = 0;

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    char *CThostFtdcReqUserLoginSMField_AppID = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_AppID_length = 0;

    /// PIN码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcReqUserLoginSMField_PIN = NULL;
    Py_ssize_t CThostFtdcReqUserLoginSMField_PIN_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#y#y#y#y#y#y#iy#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcReqUserLoginSMField_TradingDay, &CThostFtdcReqUserLoginSMField_TradingDay_length
        , &CThostFtdcReqUserLoginSMField_BrokerID, &CThostFtdcReqUserLoginSMField_BrokerID_length
        , &CThostFtdcReqUserLoginSMField_UserID, &CThostFtdcReqUserLoginSMField_UserID_length
        , &CThostFtdcReqUserLoginSMField_Password, &CThostFtdcReqUserLoginSMField_Password_length
        , &CThostFtdcReqUserLoginSMField_UserProductInfo, &CThostFtdcReqUserLoginSMField_UserProductInfo_length
        , &CThostFtdcReqUserLoginSMField_InterfaceProductInfo, &CThostFtdcReqUserLoginSMField_InterfaceProductInfo_length
        , &CThostFtdcReqUserLoginSMField_ProtocolInfo, &CThostFtdcReqUserLoginSMField_ProtocolInfo_length
        , &CThostFtdcReqUserLoginSMField_MacAddress, &CThostFtdcReqUserLoginSMField_MacAddress_length
        , &CThostFtdcReqUserLoginSMField_OneTimePassword, &CThostFtdcReqUserLoginSMField_OneTimePassword_length
        , &CThostFtdcReqUserLoginSMField_reserve1, &CThostFtdcReqUserLoginSMField_reserve1_length
        , &CThostFtdcReqUserLoginSMField_LoginRemark, &CThostFtdcReqUserLoginSMField_LoginRemark_length
        , &CThostFtdcReqUserLoginSMField_ClientIPPort
        , &CThostFtdcReqUserLoginSMField_ClientIPAddress, &CThostFtdcReqUserLoginSMField_ClientIPAddress_length
        , &CThostFtdcReqUserLoginSMField_SMSCode, &CThostFtdcReqUserLoginSMField_SMSCode_length
        , &CThostFtdcReqUserLoginSMField_BrokerName, &CThostFtdcReqUserLoginSMField_BrokerName_length
        , &CThostFtdcReqUserLoginSMField_AuthCode, &CThostFtdcReqUserLoginSMField_AuthCode_length
        , &CThostFtdcReqUserLoginSMField_AppID, &CThostFtdcReqUserLoginSMField_AppID_length
        , &CThostFtdcReqUserLoginSMField_PIN, &CThostFtdcReqUserLoginSMField_PIN_length
    )) {
        return -1;
    }

    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);


    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcReqUserLoginSMField_TradingDay != NULL ) {
        if(CThostFtdcReqUserLoginSMField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcReqUserLoginSMField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcReqUserLoginSMField_TradingDay, CThostFtdcReqUserLoginSMField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcReqUserLoginSMField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcReqUserLoginSMField_TradingDay = NULL;
    }

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcReqUserLoginSMField_BrokerID != NULL ) {
        if(CThostFtdcReqUserLoginSMField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginSMField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcReqUserLoginSMField_BrokerID, CThostFtdcReqUserLoginSMField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcReqUserLoginSMField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcReqUserLoginSMField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcReqUserLoginSMField_UserID != NULL ) {
        if(CThostFtdcReqUserLoginSMField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginSMField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcReqUserLoginSMField_UserID, CThostFtdcReqUserLoginSMField_UserID_length);
        strncpy(data->UserID, CThostFtdcReqUserLoginSMField_UserID, sizeof(data->UserID));
        CThostFtdcReqUserLoginSMField_UserID = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginSMField_Password != NULL ) {
        if(CThostFtdcReqUserLoginSMField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginSMField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcReqUserLoginSMField_Password, CThostFtdcReqUserLoginSMField_Password_length);
        strncpy(data->Password, CThostFtdcReqUserLoginSMField_Password, sizeof(data->Password));
        CThostFtdcReqUserLoginSMField_Password = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginSMField_UserProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginSMField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginSMField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcReqUserLoginSMField_UserProductInfo, CThostFtdcReqUserLoginSMField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcReqUserLoginSMField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcReqUserLoginSMField_UserProductInfo = NULL;
    }

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcReqUserLoginSMField_InterfaceProductInfo != NULL ) {
        if(CThostFtdcReqUserLoginSMField_InterfaceProductInfo_length >= (Py_ssize_t)sizeof(data->InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginSMField_InterfaceProductInfo_length);
            return -1;
        }
        // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
        // memcpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginSMField_InterfaceProductInfo, CThostFtdcReqUserLoginSMField_InterfaceProductInfo_length);
        strncpy(data->InterfaceProductInfo, CThostFtdcReqUserLoginSMField_InterfaceProductInfo, sizeof(data->InterfaceProductInfo));
        CThostFtdcReqUserLoginSMField_InterfaceProductInfo = NULL;
    }

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    if( CThostFtdcReqUserLoginSMField_ProtocolInfo != NULL ) {
        if(CThostFtdcReqUserLoginSMField_ProtocolInfo_length >= (Py_ssize_t)sizeof(data->ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is 10)", CThostFtdcReqUserLoginSMField_ProtocolInfo_length);
            return -1;
        }
        // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
        // memcpy(data->ProtocolInfo, CThostFtdcReqUserLoginSMField_ProtocolInfo, CThostFtdcReqUserLoginSMField_ProtocolInfo_length);
        strncpy(data->ProtocolInfo, CThostFtdcReqUserLoginSMField_ProtocolInfo, sizeof(data->ProtocolInfo));
        CThostFtdcReqUserLoginSMField_ProtocolInfo = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcReqUserLoginSMField_MacAddress != NULL ) {
        if(CThostFtdcReqUserLoginSMField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcReqUserLoginSMField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcReqUserLoginSMField_MacAddress, CThostFtdcReqUserLoginSMField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcReqUserLoginSMField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcReqUserLoginSMField_MacAddress = NULL;
    }

    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginSMField_OneTimePassword != NULL ) {
        if(CThostFtdcReqUserLoginSMField_OneTimePassword_length >= (Py_ssize_t)sizeof(data->OneTimePassword)) {
            PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginSMField_OneTimePassword_length);
            return -1;
        }
        // memset(data->OneTimePassword, 0, sizeof(data->OneTimePassword));
        // memcpy(data->OneTimePassword, CThostFtdcReqUserLoginSMField_OneTimePassword, CThostFtdcReqUserLoginSMField_OneTimePassword_length);
        strncpy(data->OneTimePassword, CThostFtdcReqUserLoginSMField_OneTimePassword, sizeof(data->OneTimePassword));
        CThostFtdcReqUserLoginSMField_OneTimePassword = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcReqUserLoginSMField_reserve1 != NULL ) {
        if(CThostFtdcReqUserLoginSMField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcReqUserLoginSMField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcReqUserLoginSMField_reserve1, CThostFtdcReqUserLoginSMField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcReqUserLoginSMField_reserve1, sizeof(data->reserve1));
        CThostFtdcReqUserLoginSMField_reserve1 = NULL;
    }

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    if( CThostFtdcReqUserLoginSMField_LoginRemark != NULL ) {
        if(CThostFtdcReqUserLoginSMField_LoginRemark_length >= (Py_ssize_t)sizeof(data->LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is 35)", CThostFtdcReqUserLoginSMField_LoginRemark_length);
            return -1;
        }
        // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
        // memcpy(data->LoginRemark, CThostFtdcReqUserLoginSMField_LoginRemark, CThostFtdcReqUserLoginSMField_LoginRemark_length);
        strncpy(data->LoginRemark, CThostFtdcReqUserLoginSMField_LoginRemark, sizeof(data->LoginRemark));
        CThostFtdcReqUserLoginSMField_LoginRemark = NULL;
    }

    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    data->ClientIPPort = CThostFtdcReqUserLoginSMField_ClientIPPort;

    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcReqUserLoginSMField_ClientIPAddress != NULL ) {
        if(CThostFtdcReqUserLoginSMField_ClientIPAddress_length >= (Py_ssize_t)sizeof(data->ClientIPAddress)) {
            PyErr_Format(PyExc_ValueError, "ClientIPAddress too long: length=%zd (max allowed is 32)", CThostFtdcReqUserLoginSMField_ClientIPAddress_length);
            return -1;
        }
        // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
        // memcpy(data->ClientIPAddress, CThostFtdcReqUserLoginSMField_ClientIPAddress, CThostFtdcReqUserLoginSMField_ClientIPAddress_length);
        strncpy(data->ClientIPAddress, CThostFtdcReqUserLoginSMField_ClientIPAddress, sizeof(data->ClientIPAddress));
        CThostFtdcReqUserLoginSMField_ClientIPAddress = NULL;
    }

    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    if( CThostFtdcReqUserLoginSMField_SMSCode != NULL ) {
        if(CThostFtdcReqUserLoginSMField_SMSCode_length >= (Py_ssize_t)sizeof(data->SMSCode)) {
            PyErr_Format(PyExc_ValueError, "SMSCode too long: length=%zd (max allowed is 16)", CThostFtdcReqUserLoginSMField_SMSCode_length);
            return -1;
        }
        // memset(data->SMSCode, 0, sizeof(data->SMSCode));
        // memcpy(data->SMSCode, CThostFtdcReqUserLoginSMField_SMSCode, CThostFtdcReqUserLoginSMField_SMSCode_length);
        strncpy(data->SMSCode, CThostFtdcReqUserLoginSMField_SMSCode, sizeof(data->SMSCode));
        CThostFtdcReqUserLoginSMField_SMSCode = NULL;
    }

    /// 经纪公司名称
    /// typedef char TThostFtdcBrokerNameType[81]
    if( CThostFtdcReqUserLoginSMField_BrokerName != NULL ) {
        if(CThostFtdcReqUserLoginSMField_BrokerName_length >= (Py_ssize_t)sizeof(data->BrokerName)) {
            PyErr_Format(PyExc_ValueError, "BrokerName too long: length=%zd (max allowed is 80)", CThostFtdcReqUserLoginSMField_BrokerName_length);
            return -1;
        }
        // memset(data->BrokerName, 0, sizeof(data->BrokerName));
        // memcpy(data->BrokerName, CThostFtdcReqUserLoginSMField_BrokerName, CThostFtdcReqUserLoginSMField_BrokerName_length);
        strncpy(data->BrokerName, CThostFtdcReqUserLoginSMField_BrokerName, sizeof(data->BrokerName));
        CThostFtdcReqUserLoginSMField_BrokerName = NULL;
    }

    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    if( CThostFtdcReqUserLoginSMField_AuthCode != NULL ) {
        if(CThostFtdcReqUserLoginSMField_AuthCode_length >= (Py_ssize_t)sizeof(data->AuthCode)) {
            PyErr_Format(PyExc_ValueError, "AuthCode too long: length=%zd (max allowed is 16)", CThostFtdcReqUserLoginSMField_AuthCode_length);
            return -1;
        }
        // memset(data->AuthCode, 0, sizeof(data->AuthCode));
        // memcpy(data->AuthCode, CThostFtdcReqUserLoginSMField_AuthCode, CThostFtdcReqUserLoginSMField_AuthCode_length);
        strncpy(data->AuthCode, CThostFtdcReqUserLoginSMField_AuthCode, sizeof(data->AuthCode));
        CThostFtdcReqUserLoginSMField_AuthCode = NULL;
    }

    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    if( CThostFtdcReqUserLoginSMField_AppID != NULL ) {
        if(CThostFtdcReqUserLoginSMField_AppID_length >= (Py_ssize_t)sizeof(data->AppID)) {
            PyErr_Format(PyExc_ValueError, "AppID too long: length=%zd (max allowed is 32)", CThostFtdcReqUserLoginSMField_AppID_length);
            return -1;
        }
        // memset(data->AppID, 0, sizeof(data->AppID));
        // memcpy(data->AppID, CThostFtdcReqUserLoginSMField_AppID, CThostFtdcReqUserLoginSMField_AppID_length);
        strncpy(data->AppID, CThostFtdcReqUserLoginSMField_AppID, sizeof(data->AppID));
        CThostFtdcReqUserLoginSMField_AppID = NULL;
    }

    /// PIN码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcReqUserLoginSMField_PIN != NULL ) {
        if(CThostFtdcReqUserLoginSMField_PIN_length >= (Py_ssize_t)sizeof(data->PIN)) {
            PyErr_Format(PyExc_ValueError, "PIN too long: length=%zd (max allowed is 40)", CThostFtdcReqUserLoginSMField_PIN_length);
            return -1;
        }
        // memset(data->PIN, 0, sizeof(data->PIN));
        // memcpy(data->PIN, CThostFtdcReqUserLoginSMField_PIN, CThostFtdcReqUserLoginSMField_PIN_length);
        strncpy(data->PIN, CThostFtdcReqUserLoginSMField_PIN, sizeof(data->PIN));
        CThostFtdcReqUserLoginSMField_PIN = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcReqUserLoginSMFieldType_repr(PyObject *self) {

    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y}"
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
        , "BrokerName", data->BrokerName//, (Py_ssize_t)sizeof(data->BrokerName)
        , "AuthCode", data->AuthCode//, (Py_ssize_t)sizeof(data->AuthCode)
        , "AppID", data->AppID//, (Py_ssize_t)sizeof(data->AppID)
        , "PIN", data->PIN//, (Py_ssize_t)sizeof(data->PIN)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginSMField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcReqUserLoginSMField repr");
        return NULL;
    }

    return repr;
}


/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 接口端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_InterfaceProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InterfaceProductInfo, (Py_ssize_t)sizeof(data->InterfaceProductInfo));
    return PyBytes_FromString(data->InterfaceProductInfo);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_InterfaceProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
    // memcpy(data->InterfaceProductInfo, buf, len);
    strncpy(data->InterfaceProductInfo, buf, sizeof(data->InterfaceProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 协议信息
/// typedef char TThostFtdcProtocolInfoType[11]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_ProtocolInfo(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProtocolInfo, (Py_ssize_t)sizeof(data->ProtocolInfo));
    return PyBytes_FromString(data->ProtocolInfo);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_ProtocolInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
    // memcpy(data->ProtocolInfo, buf, len);
    strncpy(data->ProtocolInfo, buf, sizeof(data->ProtocolInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_OneTimePassword(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OneTimePassword, (Py_ssize_t)sizeof(data->OneTimePassword));
    return PyBytes_FromString(data->OneTimePassword);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_OneTimePassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OneTimePassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::OneTimePassword)) {
        PyErr_SetString(PyExc_ValueError, "OneTimePassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->OneTimePassword, 0, sizeof(data->OneTimePassword));
    // memcpy(data->OneTimePassword, buf, len);
    strncpy(data->OneTimePassword, buf, sizeof(data->OneTimePassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录备注
/// typedef char TThostFtdcLoginRemarkType[36]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_LoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginRemark, (Py_ssize_t)sizeof(data->LoginRemark));
    return PyBytes_FromString(data->LoginRemark);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_LoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
    // memcpy(data->LoginRemark, buf, len);
    strncpy(data->LoginRemark, buf, sizeof(data->LoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 终端IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_ClientIPAddress(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientIPAddress, (Py_ssize_t)sizeof(data->ClientIPAddress));
    return PyBytes_FromString(data->ClientIPAddress);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_ClientIPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientIPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::ClientIPAddress)) {
        PyErr_SetString(PyExc_ValueError, "ClientIPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->ClientIPAddress, 0, sizeof(data->ClientIPAddress));
    // memcpy(data->ClientIPAddress, buf, len);
    strncpy(data->ClientIPAddress, buf, sizeof(data->ClientIPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 短信验证码
/// typedef char TThostFtdcSMSCodeType[17]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_SMSCode(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SMSCode, (Py_ssize_t)sizeof(data->SMSCode));
    return PyBytes_FromString(data->SMSCode);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_SMSCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SMSCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::SMSCode)) {
        PyErr_SetString(PyExc_ValueError, "SMSCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->SMSCode, 0, sizeof(data->SMSCode));
    // memcpy(data->SMSCode, buf, len);
    strncpy(data->SMSCode, buf, sizeof(data->SMSCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 经纪公司名称
/// typedef char TThostFtdcBrokerNameType[81]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_BrokerName(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerName, (Py_ssize_t)sizeof(data->BrokerName));
    return PyBytes_FromString(data->BrokerName);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_BrokerName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::BrokerName)) {
        PyErr_SetString(PyExc_ValueError, "BrokerName must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->BrokerName, 0, sizeof(data->BrokerName));
    // memcpy(data->BrokerName, buf, len);
    strncpy(data->BrokerName, buf, sizeof(data->BrokerName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 认证码
/// typedef char TThostFtdcAuthCodeType[17]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_AuthCode(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AuthCode, (Py_ssize_t)sizeof(data->AuthCode));
    return PyBytes_FromString(data->AuthCode);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_AuthCode(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AuthCode Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::AuthCode)) {
        PyErr_SetString(PyExc_ValueError, "AuthCode must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->AuthCode, 0, sizeof(data->AuthCode));
    // memcpy(data->AuthCode, buf, len);
    strncpy(data->AuthCode, buf, sizeof(data->AuthCode));
    extra = NULL;
    data = NULL;
    return 0;
}

/// App代码
/// typedef char TThostFtdcAppIDType[33]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_AppID(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AppID, (Py_ssize_t)sizeof(data->AppID));
    return PyBytes_FromString(data->AppID);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_AppID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AppID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::AppID)) {
        PyErr_SetString(PyExc_ValueError, "AppID must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->AppID, 0, sizeof(data->AppID));
    // memcpy(data->AppID, buf, len);
    strncpy(data->AppID, buf, sizeof(data->AppID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// PIN码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcReqUserLoginSMFieldType_get_PIN(PyObject *self, void *closure) {
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PIN, (Py_ssize_t)sizeof(data->PIN));
    return PyBytes_FromString(data->PIN);
}

static int PyCThostFtdcReqUserLoginSMFieldType_set_PIN(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PIN Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcReqUserLoginSMField::PIN)) {
        PyErr_SetString(PyExc_ValueError, "PIN must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcReqUserLoginSMFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcReqUserLoginSMFieldData>(self);
    CThostFtdcReqUserLoginSMField *data = &(extra->data);
    // memset(data->PIN, 0, sizeof(data->PIN));
    // memcpy(data->PIN, buf, len);
    strncpy(data->PIN, buf, sizeof(data->PIN));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcReqUserLoginSMFieldType_members[] = {
    /// 终端IP端口
    /// typedef int TThostFtdcIPPortType
    {
        .name = "ClientIPPort",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcReqUserLoginSMFieldData, data.ClientIPPort),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("终端IP端口")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcReqUserLoginSMFieldType_getsets[] = {
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_TradingDay,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_BrokerID,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_UserID,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_Password,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_UserProductInfo,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "InterfaceProductInfo",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_InterfaceProductInfo,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_InterfaceProductInfo,
    .doc = PyDoc_STR("接口端产品信息"),
    },
    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    {
    .name = "ProtocolInfo",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_ProtocolInfo,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_ProtocolInfo,
    .doc = PyDoc_STR("协议信息"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_MacAddress,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OneTimePassword",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_OneTimePassword,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_OneTimePassword,
    .doc = PyDoc_STR("动态密码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_reserve1,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    {
    .name = "LoginRemark",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_LoginRemark,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_LoginRemark,
    .doc = PyDoc_STR("登录备注"),
    },
    /// 终端IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "ClientIPAddress",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_ClientIPAddress,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_ClientIPAddress,
    .doc = PyDoc_STR("终端IP地址"),
    },
    /// 短信验证码
    /// typedef char TThostFtdcSMSCodeType[17]
    {
    .name = "SMSCode",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_SMSCode,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_SMSCode,
    .doc = PyDoc_STR("短信验证码"),
    },
    /// 经纪公司名称
    /// typedef char TThostFtdcBrokerNameType[81]
    {
    .name = "BrokerName",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_BrokerName,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_BrokerName,
    .doc = PyDoc_STR("经纪公司名称"),
    },
    /// 认证码
    /// typedef char TThostFtdcAuthCodeType[17]
    {
    .name = "AuthCode",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_AuthCode,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_AuthCode,
    .doc = PyDoc_STR("认证码"),
    },
    /// App代码
    /// typedef char TThostFtdcAppIDType[33]
    {
    .name = "AppID",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_AppID,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_AppID,
    .doc = PyDoc_STR("App代码"),
    },
    /// PIN码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "PIN",
    .get = PyCThostFtdcReqUserLoginSMFieldType_get_PIN,
    .set = PyCThostFtdcReqUserLoginSMFieldType_set_PIN,
    .doc = PyDoc_STR("PIN码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcReqUserLoginSMFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcReqUserLoginSMField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("国密用户登录请求")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcReqUserLoginSMFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcReqUserLoginSMFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcReqUserLoginSMFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcReqUserLoginSMFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcReqUserLoginSMFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcReqUserLoginSMFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("国密用户登录请求")},
    {Py_tp_members, PyCThostFtdcReqUserLoginSMFieldType_members},
    {Py_tp_getset, PyCThostFtdcReqUserLoginSMFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcReqUserLoginSMFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcReqUserLoginSMFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcReqUserLoginSMFieldType_spec = {
    .name = "PyCTP.CThostFtdcReqUserLoginSMField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginSMFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcReqUserLoginSMFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcReqUserLoginSMFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcReqUserLoginSMFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcReqUserLoginSMFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcReqUserLoginSMFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcReqUserLoginSMFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcReqUserLoginSMFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcReqUserLoginSMField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcReqUserLoginSMField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}