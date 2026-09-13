
#include "PyCThostFtdcExchangeExecOrderActionField.h"

///交易所执行宣告操作

static int PyCThostFtdcExchangeExecOrderActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "ExecOrderSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "ExecOrderLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "ActionType", "BranchID", "reserve1", "MacAddress", "reserve2", "Volume", "IPAddress", "ExchangeInstID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeExecOrderActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ExchangeID_length = 0;

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    char *CThostFtdcExchangeExecOrderActionField_ExecOrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ExecOrderSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcExchangeExecOrderActionField_ActionFlag = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeExecOrderActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeExecOrderActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeExecOrderActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeExecOrderActionField_InstallID = 0;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeExecOrderActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeExecOrderActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeExecOrderActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeExecOrderActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcExchangeExecOrderActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExchangeExecOrderActionField_UserID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_UserID_length = 0;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    char CThostFtdcExchangeExecOrderActionField_ActionType = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeExecOrderActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_BranchID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeExecOrderActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_reserve1_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeExecOrderActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_MacAddress_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeExecOrderActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_reserve2_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeExecOrderActionField_Volume = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeExecOrderActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_IPAddress_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeExecOrderActionField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderActionField_ExchangeInstID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#cy#y#y#y#iy#y#", (char **)kwlist
        , &CThostFtdcExchangeExecOrderActionField_ExchangeID, &CThostFtdcExchangeExecOrderActionField_ExchangeID_length
        , &CThostFtdcExchangeExecOrderActionField_ExecOrderSysID, &CThostFtdcExchangeExecOrderActionField_ExecOrderSysID_length
        , &CThostFtdcExchangeExecOrderActionField_ActionFlag
        , &CThostFtdcExchangeExecOrderActionField_ActionDate, &CThostFtdcExchangeExecOrderActionField_ActionDate_length
        , &CThostFtdcExchangeExecOrderActionField_ActionTime, &CThostFtdcExchangeExecOrderActionField_ActionTime_length
        , &CThostFtdcExchangeExecOrderActionField_TraderID, &CThostFtdcExchangeExecOrderActionField_TraderID_length
        , &CThostFtdcExchangeExecOrderActionField_InstallID
        , &CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID, &CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID_length
        , &CThostFtdcExchangeExecOrderActionField_ActionLocalID, &CThostFtdcExchangeExecOrderActionField_ActionLocalID_length
        , &CThostFtdcExchangeExecOrderActionField_ParticipantID, &CThostFtdcExchangeExecOrderActionField_ParticipantID_length
        , &CThostFtdcExchangeExecOrderActionField_ClientID, &CThostFtdcExchangeExecOrderActionField_ClientID_length
        , &CThostFtdcExchangeExecOrderActionField_BusinessUnit, &CThostFtdcExchangeExecOrderActionField_BusinessUnit_length
        , &CThostFtdcExchangeExecOrderActionField_OrderActionStatus
        , &CThostFtdcExchangeExecOrderActionField_UserID, &CThostFtdcExchangeExecOrderActionField_UserID_length
        , &CThostFtdcExchangeExecOrderActionField_ActionType
        , &CThostFtdcExchangeExecOrderActionField_BranchID, &CThostFtdcExchangeExecOrderActionField_BranchID_length
        , &CThostFtdcExchangeExecOrderActionField_reserve1, &CThostFtdcExchangeExecOrderActionField_reserve1_length
        , &CThostFtdcExchangeExecOrderActionField_MacAddress, &CThostFtdcExchangeExecOrderActionField_MacAddress_length
        , &CThostFtdcExchangeExecOrderActionField_reserve2, &CThostFtdcExchangeExecOrderActionField_reserve2_length
        , &CThostFtdcExchangeExecOrderActionField_Volume
        , &CThostFtdcExchangeExecOrderActionField_IPAddress, &CThostFtdcExchangeExecOrderActionField_IPAddress_length
        , &CThostFtdcExchangeExecOrderActionField_ExchangeInstID, &CThostFtdcExchangeExecOrderActionField_ExchangeInstID_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeExecOrderActionField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeExecOrderActionField_ExchangeID, CThostFtdcExchangeExecOrderActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeExecOrderActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeExecOrderActionField_ExchangeID = NULL;
    }

    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    if( CThostFtdcExchangeExecOrderActionField_ExecOrderSysID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ExecOrderSysID_length >= (Py_ssize_t)sizeof(data->ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderActionField_ExecOrderSysID_length);
            return -1;
        }
        // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
        // memcpy(data->ExecOrderSysID, CThostFtdcExchangeExecOrderActionField_ExecOrderSysID, CThostFtdcExchangeExecOrderActionField_ExecOrderSysID_length);
        strncpy(data->ExecOrderSysID, CThostFtdcExchangeExecOrderActionField_ExecOrderSysID, sizeof(data->ExecOrderSysID));
        CThostFtdcExchangeExecOrderActionField_ExecOrderSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcExchangeExecOrderActionField_ActionFlag;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeExecOrderActionField_ActionDate != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcExchangeExecOrderActionField_ActionDate, CThostFtdcExchangeExecOrderActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcExchangeExecOrderActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcExchangeExecOrderActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeExecOrderActionField_ActionTime != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcExchangeExecOrderActionField_ActionTime, CThostFtdcExchangeExecOrderActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcExchangeExecOrderActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcExchangeExecOrderActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeExecOrderActionField_TraderID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeExecOrderActionField_TraderID, CThostFtdcExchangeExecOrderActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeExecOrderActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeExecOrderActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeExecOrderActionField_InstallID;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID_length >= (Py_ssize_t)sizeof(data->ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID_length);
            return -1;
        }
        // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
        // memcpy(data->ExecOrderLocalID, CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID, CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID_length);
        strncpy(data->ExecOrderLocalID, CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID, sizeof(data->ExecOrderLocalID));
        CThostFtdcExchangeExecOrderActionField_ExecOrderLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeExecOrderActionField_ActionLocalID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeExecOrderActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExchangeExecOrderActionField_ActionLocalID, CThostFtdcExchangeExecOrderActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExchangeExecOrderActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExchangeExecOrderActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeExecOrderActionField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeExecOrderActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeExecOrderActionField_ParticipantID, CThostFtdcExchangeExecOrderActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeExecOrderActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeExecOrderActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeExecOrderActionField_ClientID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeExecOrderActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeExecOrderActionField_ClientID, CThostFtdcExchangeExecOrderActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeExecOrderActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeExecOrderActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeExecOrderActionField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeExecOrderActionField_BusinessUnit, CThostFtdcExchangeExecOrderActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeExecOrderActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeExecOrderActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcExchangeExecOrderActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExchangeExecOrderActionField_UserID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcExchangeExecOrderActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcExchangeExecOrderActionField_UserID, CThostFtdcExchangeExecOrderActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcExchangeExecOrderActionField_UserID, sizeof(data->UserID));
        CThostFtdcExchangeExecOrderActionField_UserID = NULL;
    }

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    data->ActionType = CThostFtdcExchangeExecOrderActionField_ActionType;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeExecOrderActionField_BranchID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeExecOrderActionField_BranchID, CThostFtdcExchangeExecOrderActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeExecOrderActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeExecOrderActionField_BranchID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeExecOrderActionField_reserve1 != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeExecOrderActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeExecOrderActionField_reserve1, CThostFtdcExchangeExecOrderActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeExecOrderActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeExecOrderActionField_reserve1 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeExecOrderActionField_MacAddress != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeExecOrderActionField_MacAddress, CThostFtdcExchangeExecOrderActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeExecOrderActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeExecOrderActionField_MacAddress = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeExecOrderActionField_reserve2 != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeExecOrderActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeExecOrderActionField_reserve2, CThostFtdcExchangeExecOrderActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeExecOrderActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeExecOrderActionField_reserve2 = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcExchangeExecOrderActionField_Volume;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeExecOrderActionField_IPAddress != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeExecOrderActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeExecOrderActionField_IPAddress, CThostFtdcExchangeExecOrderActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeExecOrderActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeExecOrderActionField_IPAddress = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeExecOrderActionField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeExecOrderActionField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeExecOrderActionField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeExecOrderActionField_ExchangeInstID, CThostFtdcExchangeExecOrderActionField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeExecOrderActionField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeExecOrderActionField_ExchangeInstID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:c,s:y,s:y,s:y,s:y,s:i,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ExecOrderSysID", data->ExecOrderSysID//, (Py_ssize_t)sizeof(data->ExecOrderSysID)
        , "ActionFlag", data->ActionFlag
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "ExecOrderLocalID", data->ExecOrderLocalID//, (Py_ssize_t)sizeof(data->ExecOrderLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "ActionType", data->ActionType
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "Volume", data->Volume
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderActionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告操作编号
/// typedef char TThostFtdcExecOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ExecOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderSysID, (Py_ssize_t)sizeof(data->ExecOrderSysID));
    return PyBytes_FromString(data->ExecOrderSysID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ExecOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
    // memcpy(data->ExecOrderSysID, buf, len);
    strncpy(data->ExecOrderSysID, buf, sizeof(data->ExecOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地执行宣告编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ExecOrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderLocalID, (Py_ssize_t)sizeof(data->ExecOrderLocalID));
    return PyBytes_FromString(data->ExecOrderLocalID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ExecOrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ExecOrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
    // memcpy(data->ExecOrderLocalID, buf, len);
    strncpy(data->ExecOrderLocalID, buf, sizeof(data->ExecOrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行类型
/// typedef char TThostFtdcActionTypeType
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionType(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionType), 1);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    data->ActionType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeExecOrderActionFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeExecOrderActionFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderActionField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderActionFieldData>(self);
    CThostFtdcExchangeExecOrderActionField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeExecOrderActionFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderActionFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeExecOrderActionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 执行宣告操作编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    {
    .name = "ExecOrderSysID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ExecOrderSysID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ExecOrderSysID,
    .doc = PyDoc_STR("执行宣告操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionDate,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionTime,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ExecOrderLocalID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ExecOrderLocalID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ExecOrderLocalID,
    .doc = PyDoc_STR("本地执行宣告编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_UserID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    {
    .name = "ActionType",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ActionType,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ActionType,
    .doc = PyDoc_STR("执行类型"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeExecOrderActionFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeExecOrderActionFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeExecOrderActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeExecOrderActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeExecOrderActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeExecOrderActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeExecOrderActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeExecOrderActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeExecOrderActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeExecOrderActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告操作")},
    {Py_tp_members, PyCThostFtdcExchangeExecOrderActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeExecOrderActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeExecOrderActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeExecOrderActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeExecOrderActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeExecOrderActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeExecOrderActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeExecOrderActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeExecOrderActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeExecOrderActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeExecOrderActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeExecOrderActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeExecOrderActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeExecOrderActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeExecOrderActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeExecOrderActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}