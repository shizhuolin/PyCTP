
#include "PyCThostFtdcLoginInfoField.h"

///登录信息

static int PyCThostFtdcLoginInfoFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "FrontID", "SessionID", "BrokerID", "UserID", "LoginDate", "LoginTime", "reserve1", "UserProductInfo", "InterfaceProductInfo", "ProtocolInfo", "SystemName", "PasswordDeprecated", "MaxOrderRef", "SHFETime", "DCETime", "CZCETime", "FFEXTime", "MacAddress", "OneTimePassword", "INETime", "IsQryControl", "LoginRemark", "Password", "IPAddress", NULL };


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcLoginInfoField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcLoginInfoField_SessionID = 0;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcLoginInfoField_BrokerID = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_BrokerID_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcLoginInfoField_UserID = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_UserID_length = 0;

    /// 登录日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcLoginInfoField_LoginDate = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_LoginDate_length = 0;

    /// 登录时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcLoginInfoField_LoginTime = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_LoginTime_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcLoginInfoField_reserve1 = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_reserve1_length = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcLoginInfoField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_UserProductInfo_length = 0;

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcLoginInfoField_InterfaceProductInfo = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_InterfaceProductInfo_length = 0;

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    char *CThostFtdcLoginInfoField_ProtocolInfo = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_ProtocolInfo_length = 0;

    /// 系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    char *CThostFtdcLoginInfoField_SystemName = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_SystemName_length = 0;

    /// 密码,已弃用
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcLoginInfoField_PasswordDeprecated = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_PasswordDeprecated_length = 0;

    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcLoginInfoField_MaxOrderRef = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_MaxOrderRef_length = 0;

    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcLoginInfoField_SHFETime = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_SHFETime_length = 0;

    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcLoginInfoField_DCETime = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_DCETime_length = 0;

    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcLoginInfoField_CZCETime = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_CZCETime_length = 0;

    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcLoginInfoField_FFEXTime = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_FFEXTime_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcLoginInfoField_MacAddress = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_MacAddress_length = 0;

    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcLoginInfoField_OneTimePassword = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_OneTimePassword_length = 0;

    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcLoginInfoField_INETime = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_INETime_length = 0;

    /// 查询时是否需要流控
    /// typedef int TThostFtdcBoolType
    int CThostFtdcLoginInfoField_IsQryControl = 0;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    char *CThostFtdcLoginInfoField_LoginRemark = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_LoginRemark_length = 0;

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    char *CThostFtdcLoginInfoField_Password = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_Password_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcLoginInfoField_IPAddress = NULL;
    Py_ssize_t CThostFtdcLoginInfoField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#y#iy#y#y#", (char **)kwlist
        , &CThostFtdcLoginInfoField_FrontID
        , &CThostFtdcLoginInfoField_SessionID
        , &CThostFtdcLoginInfoField_BrokerID, &CThostFtdcLoginInfoField_BrokerID_length
        , &CThostFtdcLoginInfoField_UserID, &CThostFtdcLoginInfoField_UserID_length
        , &CThostFtdcLoginInfoField_LoginDate, &CThostFtdcLoginInfoField_LoginDate_length
        , &CThostFtdcLoginInfoField_LoginTime, &CThostFtdcLoginInfoField_LoginTime_length
        , &CThostFtdcLoginInfoField_reserve1, &CThostFtdcLoginInfoField_reserve1_length
        , &CThostFtdcLoginInfoField_UserProductInfo, &CThostFtdcLoginInfoField_UserProductInfo_length
        , &CThostFtdcLoginInfoField_InterfaceProductInfo, &CThostFtdcLoginInfoField_InterfaceProductInfo_length
        , &CThostFtdcLoginInfoField_ProtocolInfo, &CThostFtdcLoginInfoField_ProtocolInfo_length
        , &CThostFtdcLoginInfoField_SystemName, &CThostFtdcLoginInfoField_SystemName_length
        , &CThostFtdcLoginInfoField_PasswordDeprecated, &CThostFtdcLoginInfoField_PasswordDeprecated_length
        , &CThostFtdcLoginInfoField_MaxOrderRef, &CThostFtdcLoginInfoField_MaxOrderRef_length
        , &CThostFtdcLoginInfoField_SHFETime, &CThostFtdcLoginInfoField_SHFETime_length
        , &CThostFtdcLoginInfoField_DCETime, &CThostFtdcLoginInfoField_DCETime_length
        , &CThostFtdcLoginInfoField_CZCETime, &CThostFtdcLoginInfoField_CZCETime_length
        , &CThostFtdcLoginInfoField_FFEXTime, &CThostFtdcLoginInfoField_FFEXTime_length
        , &CThostFtdcLoginInfoField_MacAddress, &CThostFtdcLoginInfoField_MacAddress_length
        , &CThostFtdcLoginInfoField_OneTimePassword, &CThostFtdcLoginInfoField_OneTimePassword_length
        , &CThostFtdcLoginInfoField_INETime, &CThostFtdcLoginInfoField_INETime_length
        , &CThostFtdcLoginInfoField_IsQryControl
        , &CThostFtdcLoginInfoField_LoginRemark, &CThostFtdcLoginInfoField_LoginRemark_length
        , &CThostFtdcLoginInfoField_Password, &CThostFtdcLoginInfoField_Password_length
        , &CThostFtdcLoginInfoField_IPAddress, &CThostFtdcLoginInfoField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);


    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcLoginInfoField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcLoginInfoField_SessionID;

    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcLoginInfoField_BrokerID != NULL ) {
        if(CThostFtdcLoginInfoField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcLoginInfoField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcLoginInfoField_BrokerID, CThostFtdcLoginInfoField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcLoginInfoField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcLoginInfoField_BrokerID = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcLoginInfoField_UserID != NULL ) {
        if(CThostFtdcLoginInfoField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcLoginInfoField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcLoginInfoField_UserID, CThostFtdcLoginInfoField_UserID_length);
        strncpy(data->UserID, CThostFtdcLoginInfoField_UserID, sizeof(data->UserID));
        CThostFtdcLoginInfoField_UserID = NULL;
    }

    /// 登录日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcLoginInfoField_LoginDate != NULL ) {
        if(CThostFtdcLoginInfoField_LoginDate_length >= (Py_ssize_t)sizeof(data->LoginDate)) {
            PyErr_Format(PyExc_ValueError, "LoginDate too long: length=%zd (max allowed is 8)", CThostFtdcLoginInfoField_LoginDate_length);
            return -1;
        }
        // memset(data->LoginDate, 0, sizeof(data->LoginDate));
        // memcpy(data->LoginDate, CThostFtdcLoginInfoField_LoginDate, CThostFtdcLoginInfoField_LoginDate_length);
        strncpy(data->LoginDate, CThostFtdcLoginInfoField_LoginDate, sizeof(data->LoginDate));
        CThostFtdcLoginInfoField_LoginDate = NULL;
    }

    /// 登录时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcLoginInfoField_LoginTime != NULL ) {
        if(CThostFtdcLoginInfoField_LoginTime_length >= (Py_ssize_t)sizeof(data->LoginTime)) {
            PyErr_Format(PyExc_ValueError, "LoginTime too long: length=%zd (max allowed is 8)", CThostFtdcLoginInfoField_LoginTime_length);
            return -1;
        }
        // memset(data->LoginTime, 0, sizeof(data->LoginTime));
        // memcpy(data->LoginTime, CThostFtdcLoginInfoField_LoginTime, CThostFtdcLoginInfoField_LoginTime_length);
        strncpy(data->LoginTime, CThostFtdcLoginInfoField_LoginTime, sizeof(data->LoginTime));
        CThostFtdcLoginInfoField_LoginTime = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcLoginInfoField_reserve1 != NULL ) {
        if(CThostFtdcLoginInfoField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcLoginInfoField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcLoginInfoField_reserve1, CThostFtdcLoginInfoField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcLoginInfoField_reserve1, sizeof(data->reserve1));
        CThostFtdcLoginInfoField_reserve1 = NULL;
    }

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcLoginInfoField_UserProductInfo != NULL ) {
        if(CThostFtdcLoginInfoField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcLoginInfoField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcLoginInfoField_UserProductInfo, CThostFtdcLoginInfoField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcLoginInfoField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcLoginInfoField_UserProductInfo = NULL;
    }

    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcLoginInfoField_InterfaceProductInfo != NULL ) {
        if(CThostFtdcLoginInfoField_InterfaceProductInfo_length >= (Py_ssize_t)sizeof(data->InterfaceProductInfo)) {
            PyErr_Format(PyExc_ValueError, "InterfaceProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcLoginInfoField_InterfaceProductInfo_length);
            return -1;
        }
        // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
        // memcpy(data->InterfaceProductInfo, CThostFtdcLoginInfoField_InterfaceProductInfo, CThostFtdcLoginInfoField_InterfaceProductInfo_length);
        strncpy(data->InterfaceProductInfo, CThostFtdcLoginInfoField_InterfaceProductInfo, sizeof(data->InterfaceProductInfo));
        CThostFtdcLoginInfoField_InterfaceProductInfo = NULL;
    }

    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    if( CThostFtdcLoginInfoField_ProtocolInfo != NULL ) {
        if(CThostFtdcLoginInfoField_ProtocolInfo_length >= (Py_ssize_t)sizeof(data->ProtocolInfo)) {
            PyErr_Format(PyExc_ValueError, "ProtocolInfo too long: length=%zd (max allowed is 10)", CThostFtdcLoginInfoField_ProtocolInfo_length);
            return -1;
        }
        // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
        // memcpy(data->ProtocolInfo, CThostFtdcLoginInfoField_ProtocolInfo, CThostFtdcLoginInfoField_ProtocolInfo_length);
        strncpy(data->ProtocolInfo, CThostFtdcLoginInfoField_ProtocolInfo, sizeof(data->ProtocolInfo));
        CThostFtdcLoginInfoField_ProtocolInfo = NULL;
    }

    /// 系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    if( CThostFtdcLoginInfoField_SystemName != NULL ) {
        if(CThostFtdcLoginInfoField_SystemName_length >= (Py_ssize_t)sizeof(data->SystemName)) {
            PyErr_Format(PyExc_ValueError, "SystemName too long: length=%zd (max allowed is 40)", CThostFtdcLoginInfoField_SystemName_length);
            return -1;
        }
        // memset(data->SystemName, 0, sizeof(data->SystemName));
        // memcpy(data->SystemName, CThostFtdcLoginInfoField_SystemName, CThostFtdcLoginInfoField_SystemName_length);
        strncpy(data->SystemName, CThostFtdcLoginInfoField_SystemName, sizeof(data->SystemName));
        CThostFtdcLoginInfoField_SystemName = NULL;
    }

    /// 密码,已弃用
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcLoginInfoField_PasswordDeprecated != NULL ) {
        if(CThostFtdcLoginInfoField_PasswordDeprecated_length >= (Py_ssize_t)sizeof(data->PasswordDeprecated)) {
            PyErr_Format(PyExc_ValueError, "PasswordDeprecated too long: length=%zd (max allowed is 40)", CThostFtdcLoginInfoField_PasswordDeprecated_length);
            return -1;
        }
        // memset(data->PasswordDeprecated, 0, sizeof(data->PasswordDeprecated));
        // memcpy(data->PasswordDeprecated, CThostFtdcLoginInfoField_PasswordDeprecated, CThostFtdcLoginInfoField_PasswordDeprecated_length);
        strncpy(data->PasswordDeprecated, CThostFtdcLoginInfoField_PasswordDeprecated, sizeof(data->PasswordDeprecated));
        CThostFtdcLoginInfoField_PasswordDeprecated = NULL;
    }

    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcLoginInfoField_MaxOrderRef != NULL ) {
        if(CThostFtdcLoginInfoField_MaxOrderRef_length >= (Py_ssize_t)sizeof(data->MaxOrderRef)) {
            PyErr_Format(PyExc_ValueError, "MaxOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcLoginInfoField_MaxOrderRef_length);
            return -1;
        }
        // memset(data->MaxOrderRef, 0, sizeof(data->MaxOrderRef));
        // memcpy(data->MaxOrderRef, CThostFtdcLoginInfoField_MaxOrderRef, CThostFtdcLoginInfoField_MaxOrderRef_length);
        strncpy(data->MaxOrderRef, CThostFtdcLoginInfoField_MaxOrderRef, sizeof(data->MaxOrderRef));
        CThostFtdcLoginInfoField_MaxOrderRef = NULL;
    }

    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcLoginInfoField_SHFETime != NULL ) {
        if(CThostFtdcLoginInfoField_SHFETime_length >= (Py_ssize_t)sizeof(data->SHFETime)) {
            PyErr_Format(PyExc_ValueError, "SHFETime too long: length=%zd (max allowed is 8)", CThostFtdcLoginInfoField_SHFETime_length);
            return -1;
        }
        // memset(data->SHFETime, 0, sizeof(data->SHFETime));
        // memcpy(data->SHFETime, CThostFtdcLoginInfoField_SHFETime, CThostFtdcLoginInfoField_SHFETime_length);
        strncpy(data->SHFETime, CThostFtdcLoginInfoField_SHFETime, sizeof(data->SHFETime));
        CThostFtdcLoginInfoField_SHFETime = NULL;
    }

    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcLoginInfoField_DCETime != NULL ) {
        if(CThostFtdcLoginInfoField_DCETime_length >= (Py_ssize_t)sizeof(data->DCETime)) {
            PyErr_Format(PyExc_ValueError, "DCETime too long: length=%zd (max allowed is 8)", CThostFtdcLoginInfoField_DCETime_length);
            return -1;
        }
        // memset(data->DCETime, 0, sizeof(data->DCETime));
        // memcpy(data->DCETime, CThostFtdcLoginInfoField_DCETime, CThostFtdcLoginInfoField_DCETime_length);
        strncpy(data->DCETime, CThostFtdcLoginInfoField_DCETime, sizeof(data->DCETime));
        CThostFtdcLoginInfoField_DCETime = NULL;
    }

    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcLoginInfoField_CZCETime != NULL ) {
        if(CThostFtdcLoginInfoField_CZCETime_length >= (Py_ssize_t)sizeof(data->CZCETime)) {
            PyErr_Format(PyExc_ValueError, "CZCETime too long: length=%zd (max allowed is 8)", CThostFtdcLoginInfoField_CZCETime_length);
            return -1;
        }
        // memset(data->CZCETime, 0, sizeof(data->CZCETime));
        // memcpy(data->CZCETime, CThostFtdcLoginInfoField_CZCETime, CThostFtdcLoginInfoField_CZCETime_length);
        strncpy(data->CZCETime, CThostFtdcLoginInfoField_CZCETime, sizeof(data->CZCETime));
        CThostFtdcLoginInfoField_CZCETime = NULL;
    }

    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcLoginInfoField_FFEXTime != NULL ) {
        if(CThostFtdcLoginInfoField_FFEXTime_length >= (Py_ssize_t)sizeof(data->FFEXTime)) {
            PyErr_Format(PyExc_ValueError, "FFEXTime too long: length=%zd (max allowed is 8)", CThostFtdcLoginInfoField_FFEXTime_length);
            return -1;
        }
        // memset(data->FFEXTime, 0, sizeof(data->FFEXTime));
        // memcpy(data->FFEXTime, CThostFtdcLoginInfoField_FFEXTime, CThostFtdcLoginInfoField_FFEXTime_length);
        strncpy(data->FFEXTime, CThostFtdcLoginInfoField_FFEXTime, sizeof(data->FFEXTime));
        CThostFtdcLoginInfoField_FFEXTime = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcLoginInfoField_MacAddress != NULL ) {
        if(CThostFtdcLoginInfoField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcLoginInfoField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcLoginInfoField_MacAddress, CThostFtdcLoginInfoField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcLoginInfoField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcLoginInfoField_MacAddress = NULL;
    }

    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcLoginInfoField_OneTimePassword != NULL ) {
        if(CThostFtdcLoginInfoField_OneTimePassword_length >= (Py_ssize_t)sizeof(data->OneTimePassword)) {
            PyErr_Format(PyExc_ValueError, "OneTimePassword too long: length=%zd (max allowed is 40)", CThostFtdcLoginInfoField_OneTimePassword_length);
            return -1;
        }
        // memset(data->OneTimePassword, 0, sizeof(data->OneTimePassword));
        // memcpy(data->OneTimePassword, CThostFtdcLoginInfoField_OneTimePassword, CThostFtdcLoginInfoField_OneTimePassword_length);
        strncpy(data->OneTimePassword, CThostFtdcLoginInfoField_OneTimePassword, sizeof(data->OneTimePassword));
        CThostFtdcLoginInfoField_OneTimePassword = NULL;
    }

    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcLoginInfoField_INETime != NULL ) {
        if(CThostFtdcLoginInfoField_INETime_length >= (Py_ssize_t)sizeof(data->INETime)) {
            PyErr_Format(PyExc_ValueError, "INETime too long: length=%zd (max allowed is 8)", CThostFtdcLoginInfoField_INETime_length);
            return -1;
        }
        // memset(data->INETime, 0, sizeof(data->INETime));
        // memcpy(data->INETime, CThostFtdcLoginInfoField_INETime, CThostFtdcLoginInfoField_INETime_length);
        strncpy(data->INETime, CThostFtdcLoginInfoField_INETime, sizeof(data->INETime));
        CThostFtdcLoginInfoField_INETime = NULL;
    }

    /// 查询时是否需要流控
    /// typedef int TThostFtdcBoolType
    data->IsQryControl = CThostFtdcLoginInfoField_IsQryControl;

    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    if( CThostFtdcLoginInfoField_LoginRemark != NULL ) {
        if(CThostFtdcLoginInfoField_LoginRemark_length >= (Py_ssize_t)sizeof(data->LoginRemark)) {
            PyErr_Format(PyExc_ValueError, "LoginRemark too long: length=%zd (max allowed is 35)", CThostFtdcLoginInfoField_LoginRemark_length);
            return -1;
        }
        // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
        // memcpy(data->LoginRemark, CThostFtdcLoginInfoField_LoginRemark, CThostFtdcLoginInfoField_LoginRemark_length);
        strncpy(data->LoginRemark, CThostFtdcLoginInfoField_LoginRemark, sizeof(data->LoginRemark));
        CThostFtdcLoginInfoField_LoginRemark = NULL;
    }

    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    if( CThostFtdcLoginInfoField_Password != NULL ) {
        if(CThostFtdcLoginInfoField_Password_length >= (Py_ssize_t)sizeof(data->Password)) {
            PyErr_Format(PyExc_ValueError, "Password too long: length=%zd (max allowed is 40)", CThostFtdcLoginInfoField_Password_length);
            return -1;
        }
        // memset(data->Password, 0, sizeof(data->Password));
        // memcpy(data->Password, CThostFtdcLoginInfoField_Password, CThostFtdcLoginInfoField_Password_length);
        strncpy(data->Password, CThostFtdcLoginInfoField_Password, sizeof(data->Password));
        CThostFtdcLoginInfoField_Password = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcLoginInfoField_IPAddress != NULL ) {
        if(CThostFtdcLoginInfoField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcLoginInfoField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcLoginInfoField_IPAddress, CThostFtdcLoginInfoField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcLoginInfoField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcLoginInfoField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcLoginInfoFieldType_repr(PyObject *self) {

    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:y,s:y,s:y}"
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "LoginDate", data->LoginDate//, (Py_ssize_t)sizeof(data->LoginDate)
        , "LoginTime", data->LoginTime//, (Py_ssize_t)sizeof(data->LoginTime)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "InterfaceProductInfo", data->InterfaceProductInfo//, (Py_ssize_t)sizeof(data->InterfaceProductInfo)
        , "ProtocolInfo", data->ProtocolInfo//, (Py_ssize_t)sizeof(data->ProtocolInfo)
        , "SystemName", data->SystemName//, (Py_ssize_t)sizeof(data->SystemName)
        , "PasswordDeprecated", data->PasswordDeprecated//, (Py_ssize_t)sizeof(data->PasswordDeprecated)
        , "MaxOrderRef", data->MaxOrderRef//, (Py_ssize_t)sizeof(data->MaxOrderRef)
        , "SHFETime", data->SHFETime//, (Py_ssize_t)sizeof(data->SHFETime)
        , "DCETime", data->DCETime//, (Py_ssize_t)sizeof(data->DCETime)
        , "CZCETime", data->CZCETime//, (Py_ssize_t)sizeof(data->CZCETime)
        , "FFEXTime", data->FFEXTime//, (Py_ssize_t)sizeof(data->FFEXTime)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "OneTimePassword", data->OneTimePassword//, (Py_ssize_t)sizeof(data->OneTimePassword)
        , "INETime", data->INETime//, (Py_ssize_t)sizeof(data->INETime)
        , "IsQryControl", data->IsQryControl
        , "LoginRemark", data->LoginRemark//, (Py_ssize_t)sizeof(data->LoginRemark)
        , "Password", data->Password//, (Py_ssize_t)sizeof(data->Password)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginInfoField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcLoginInfoField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcLoginInfoFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcLoginInfoFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_LoginDate(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginDate, (Py_ssize_t)sizeof(data->LoginDate));
    return PyBytes_FromString(data->LoginDate);
}

static int PyCThostFtdcLoginInfoFieldType_set_LoginDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::LoginDate)) {
        PyErr_SetString(PyExc_ValueError, "LoginDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->LoginDate, 0, sizeof(data->LoginDate));
    // memcpy(data->LoginDate, buf, len);
    strncpy(data->LoginDate, buf, sizeof(data->LoginDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_LoginTime(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginTime, (Py_ssize_t)sizeof(data->LoginTime));
    return PyBytes_FromString(data->LoginTime);
}

static int PyCThostFtdcLoginInfoFieldType_set_LoginTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::LoginTime)) {
        PyErr_SetString(PyExc_ValueError, "LoginTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->LoginTime, 0, sizeof(data->LoginTime));
    // memcpy(data->LoginTime, buf, len);
    strncpy(data->LoginTime, buf, sizeof(data->LoginTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcLoginInfoFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcLoginInfoFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 接口端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_InterfaceProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InterfaceProductInfo, (Py_ssize_t)sizeof(data->InterfaceProductInfo));
    return PyBytes_FromString(data->InterfaceProductInfo);
}

static int PyCThostFtdcLoginInfoFieldType_set_InterfaceProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InterfaceProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::InterfaceProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "InterfaceProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->InterfaceProductInfo, 0, sizeof(data->InterfaceProductInfo));
    // memcpy(data->InterfaceProductInfo, buf, len);
    strncpy(data->InterfaceProductInfo, buf, sizeof(data->InterfaceProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 协议信息
/// typedef char TThostFtdcProtocolInfoType[11]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_ProtocolInfo(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ProtocolInfo, (Py_ssize_t)sizeof(data->ProtocolInfo));
    return PyBytes_FromString(data->ProtocolInfo);
}

static int PyCThostFtdcLoginInfoFieldType_set_ProtocolInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ProtocolInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::ProtocolInfo)) {
        PyErr_SetString(PyExc_ValueError, "ProtocolInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->ProtocolInfo, 0, sizeof(data->ProtocolInfo));
    // memcpy(data->ProtocolInfo, buf, len);
    strncpy(data->ProtocolInfo, buf, sizeof(data->ProtocolInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 系统名称
/// typedef char TThostFtdcSystemNameType[41]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_SystemName(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SystemName, (Py_ssize_t)sizeof(data->SystemName));
    return PyBytes_FromString(data->SystemName);
}

static int PyCThostFtdcLoginInfoFieldType_set_SystemName(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SystemName Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::SystemName)) {
        PyErr_SetString(PyExc_ValueError, "SystemName must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->SystemName, 0, sizeof(data->SystemName));
    // memcpy(data->SystemName, buf, len);
    strncpy(data->SystemName, buf, sizeof(data->SystemName));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码,已弃用
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_PasswordDeprecated(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->PasswordDeprecated, (Py_ssize_t)sizeof(data->PasswordDeprecated));
    return PyBytes_FromString(data->PasswordDeprecated);
}

static int PyCThostFtdcLoginInfoFieldType_set_PasswordDeprecated(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PasswordDeprecated Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::PasswordDeprecated)) {
        PyErr_SetString(PyExc_ValueError, "PasswordDeprecated must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->PasswordDeprecated, 0, sizeof(data->PasswordDeprecated));
    // memcpy(data->PasswordDeprecated, buf, len);
    strncpy(data->PasswordDeprecated, buf, sizeof(data->PasswordDeprecated));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 最大报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_MaxOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MaxOrderRef, (Py_ssize_t)sizeof(data->MaxOrderRef));
    return PyBytes_FromString(data->MaxOrderRef);
}

static int PyCThostFtdcLoginInfoFieldType_set_MaxOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MaxOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::MaxOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "MaxOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->MaxOrderRef, 0, sizeof(data->MaxOrderRef));
    // memcpy(data->MaxOrderRef, buf, len);
    strncpy(data->MaxOrderRef, buf, sizeof(data->MaxOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 上期所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_SHFETime(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->SHFETime, (Py_ssize_t)sizeof(data->SHFETime));
    return PyBytes_FromString(data->SHFETime);
}

static int PyCThostFtdcLoginInfoFieldType_set_SHFETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "SHFETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::SHFETime)) {
        PyErr_SetString(PyExc_ValueError, "SHFETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->SHFETime, 0, sizeof(data->SHFETime));
    // memcpy(data->SHFETime, buf, len);
    strncpy(data->SHFETime, buf, sizeof(data->SHFETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 大商所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_DCETime(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->DCETime, (Py_ssize_t)sizeof(data->DCETime));
    return PyBytes_FromString(data->DCETime);
}

static int PyCThostFtdcLoginInfoFieldType_set_DCETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "DCETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::DCETime)) {
        PyErr_SetString(PyExc_ValueError, "DCETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->DCETime, 0, sizeof(data->DCETime));
    // memcpy(data->DCETime, buf, len);
    strncpy(data->DCETime, buf, sizeof(data->DCETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 郑商所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_CZCETime(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CZCETime, (Py_ssize_t)sizeof(data->CZCETime));
    return PyBytes_FromString(data->CZCETime);
}

static int PyCThostFtdcLoginInfoFieldType_set_CZCETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CZCETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::CZCETime)) {
        PyErr_SetString(PyExc_ValueError, "CZCETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->CZCETime, 0, sizeof(data->CZCETime));
    // memcpy(data->CZCETime, buf, len);
    strncpy(data->CZCETime, buf, sizeof(data->CZCETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 中金所时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_FFEXTime(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->FFEXTime, (Py_ssize_t)sizeof(data->FFEXTime));
    return PyBytes_FromString(data->FFEXTime);
}

static int PyCThostFtdcLoginInfoFieldType_set_FFEXTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "FFEXTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::FFEXTime)) {
        PyErr_SetString(PyExc_ValueError, "FFEXTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->FFEXTime, 0, sizeof(data->FFEXTime));
    // memcpy(data->FFEXTime, buf, len);
    strncpy(data->FFEXTime, buf, sizeof(data->FFEXTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcLoginInfoFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 动态密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_OneTimePassword(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OneTimePassword, (Py_ssize_t)sizeof(data->OneTimePassword));
    return PyBytes_FromString(data->OneTimePassword);
}

static int PyCThostFtdcLoginInfoFieldType_set_OneTimePassword(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OneTimePassword Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::OneTimePassword)) {
        PyErr_SetString(PyExc_ValueError, "OneTimePassword must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->OneTimePassword, 0, sizeof(data->OneTimePassword));
    // memcpy(data->OneTimePassword, buf, len);
    strncpy(data->OneTimePassword, buf, sizeof(data->OneTimePassword));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 能源中心时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_INETime(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->INETime, (Py_ssize_t)sizeof(data->INETime));
    return PyBytes_FromString(data->INETime);
}

static int PyCThostFtdcLoginInfoFieldType_set_INETime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "INETime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::INETime)) {
        PyErr_SetString(PyExc_ValueError, "INETime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->INETime, 0, sizeof(data->INETime));
    // memcpy(data->INETime, buf, len);
    strncpy(data->INETime, buf, sizeof(data->INETime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 登录备注
/// typedef char TThostFtdcLoginRemarkType[36]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_LoginRemark(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->LoginRemark, (Py_ssize_t)sizeof(data->LoginRemark));
    return PyBytes_FromString(data->LoginRemark);
}

static int PyCThostFtdcLoginInfoFieldType_set_LoginRemark(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "LoginRemark Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::LoginRemark)) {
        PyErr_SetString(PyExc_ValueError, "LoginRemark must be less than 35 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->LoginRemark, 0, sizeof(data->LoginRemark));
    // memcpy(data->LoginRemark, buf, len);
    strncpy(data->LoginRemark, buf, sizeof(data->LoginRemark));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 密码
/// typedef char TThostFtdcPasswordType[41]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_Password(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->Password, (Py_ssize_t)sizeof(data->Password));
    return PyBytes_FromString(data->Password);
}

static int PyCThostFtdcLoginInfoFieldType_set_Password(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "Password Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::Password)) {
        PyErr_SetString(PyExc_ValueError, "Password must be less than 40 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->Password, 0, sizeof(data->Password));
    // memcpy(data->Password, buf, len);
    strncpy(data->Password, buf, sizeof(data->Password));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcLoginInfoFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcLoginInfoFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcLoginInfoField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcLoginInfoFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcLoginInfoFieldData>(self);
    CThostFtdcLoginInfoField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcLoginInfoFieldType_members[] = {
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcLoginInfoFieldData, data.FrontID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("前置编号")
    },
    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    {
        .name = "SessionID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcLoginInfoFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 查询时是否需要流控
    /// typedef int TThostFtdcBoolType
    {
        .name = "IsQryControl",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcLoginInfoFieldData, data.IsQryControl),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("查询时是否需要流控")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcLoginInfoFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcLoginInfoFieldType_get_BrokerID,
    .set = PyCThostFtdcLoginInfoFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcLoginInfoFieldType_get_UserID,
    .set = PyCThostFtdcLoginInfoFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 登录日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "LoginDate",
    .get = PyCThostFtdcLoginInfoFieldType_get_LoginDate,
    .set = PyCThostFtdcLoginInfoFieldType_set_LoginDate,
    .doc = PyDoc_STR("登录日期"),
    },
    /// 登录时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "LoginTime",
    .get = PyCThostFtdcLoginInfoFieldType_get_LoginTime,
    .set = PyCThostFtdcLoginInfoFieldType_set_LoginTime,
    .doc = PyDoc_STR("登录时间"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcLoginInfoFieldType_get_reserve1,
    .set = PyCThostFtdcLoginInfoFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcLoginInfoFieldType_get_UserProductInfo,
    .set = PyCThostFtdcLoginInfoFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 接口端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "InterfaceProductInfo",
    .get = PyCThostFtdcLoginInfoFieldType_get_InterfaceProductInfo,
    .set = PyCThostFtdcLoginInfoFieldType_set_InterfaceProductInfo,
    .doc = PyDoc_STR("接口端产品信息"),
    },
    /// 协议信息
    /// typedef char TThostFtdcProtocolInfoType[11]
    {
    .name = "ProtocolInfo",
    .get = PyCThostFtdcLoginInfoFieldType_get_ProtocolInfo,
    .set = PyCThostFtdcLoginInfoFieldType_set_ProtocolInfo,
    .doc = PyDoc_STR("协议信息"),
    },
    /// 系统名称
    /// typedef char TThostFtdcSystemNameType[41]
    {
    .name = "SystemName",
    .get = PyCThostFtdcLoginInfoFieldType_get_SystemName,
    .set = PyCThostFtdcLoginInfoFieldType_set_SystemName,
    .doc = PyDoc_STR("系统名称"),
    },
    /// 密码,已弃用
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "PasswordDeprecated",
    .get = PyCThostFtdcLoginInfoFieldType_get_PasswordDeprecated,
    .set = PyCThostFtdcLoginInfoFieldType_set_PasswordDeprecated,
    .doc = PyDoc_STR("密码,已弃用"),
    },
    /// 最大报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "MaxOrderRef",
    .get = PyCThostFtdcLoginInfoFieldType_get_MaxOrderRef,
    .set = PyCThostFtdcLoginInfoFieldType_set_MaxOrderRef,
    .doc = PyDoc_STR("最大报单引用"),
    },
    /// 上期所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "SHFETime",
    .get = PyCThostFtdcLoginInfoFieldType_get_SHFETime,
    .set = PyCThostFtdcLoginInfoFieldType_set_SHFETime,
    .doc = PyDoc_STR("上期所时间"),
    },
    /// 大商所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "DCETime",
    .get = PyCThostFtdcLoginInfoFieldType_get_DCETime,
    .set = PyCThostFtdcLoginInfoFieldType_set_DCETime,
    .doc = PyDoc_STR("大商所时间"),
    },
    /// 郑商所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CZCETime",
    .get = PyCThostFtdcLoginInfoFieldType_get_CZCETime,
    .set = PyCThostFtdcLoginInfoFieldType_set_CZCETime,
    .doc = PyDoc_STR("郑商所时间"),
    },
    /// 中金所时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "FFEXTime",
    .get = PyCThostFtdcLoginInfoFieldType_get_FFEXTime,
    .set = PyCThostFtdcLoginInfoFieldType_set_FFEXTime,
    .doc = PyDoc_STR("中金所时间"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcLoginInfoFieldType_get_MacAddress,
    .set = PyCThostFtdcLoginInfoFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 动态密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "OneTimePassword",
    .get = PyCThostFtdcLoginInfoFieldType_get_OneTimePassword,
    .set = PyCThostFtdcLoginInfoFieldType_set_OneTimePassword,
    .doc = PyDoc_STR("动态密码"),
    },
    /// 能源中心时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "INETime",
    .get = PyCThostFtdcLoginInfoFieldType_get_INETime,
    .set = PyCThostFtdcLoginInfoFieldType_set_INETime,
    .doc = PyDoc_STR("能源中心时间"),
    },
    /// 登录备注
    /// typedef char TThostFtdcLoginRemarkType[36]
    {
    .name = "LoginRemark",
    .get = PyCThostFtdcLoginInfoFieldType_get_LoginRemark,
    .set = PyCThostFtdcLoginInfoFieldType_set_LoginRemark,
    .doc = PyDoc_STR("登录备注"),
    },
    /// 密码
    /// typedef char TThostFtdcPasswordType[41]
    {
    .name = "Password",
    .get = PyCThostFtdcLoginInfoFieldType_get_Password,
    .set = PyCThostFtdcLoginInfoFieldType_set_Password,
    .doc = PyDoc_STR("密码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcLoginInfoFieldType_get_IPAddress,
    .set = PyCThostFtdcLoginInfoFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcLoginInfoFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcLoginInfoField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("登录信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcLoginInfoFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcLoginInfoFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcLoginInfoFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcLoginInfoFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcLoginInfoFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcLoginInfoFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("登录信息")},
    {Py_tp_members, PyCThostFtdcLoginInfoFieldType_members},
    {Py_tp_getset, PyCThostFtdcLoginInfoFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcLoginInfoFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcLoginInfoFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcLoginInfoFieldType_spec = {
    .name = "PyCTP.CThostFtdcLoginInfoField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcLoginInfoFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcLoginInfoFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcLoginInfoFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcLoginInfoFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcLoginInfoFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcLoginInfoFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcLoginInfoFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcLoginInfoFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcLoginInfoField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcLoginInfoField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}