
#include "PyCThostFtdcExchangeOptionSelfCloseActionField.h"

///交易所期权自对冲操作

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "ExchangeID", "OptionSelfCloseSysID", "ActionFlag", "ActionDate", "ActionTime", "TraderID", "InstallID", "OptionSelfCloseLocalID", "ActionLocalID", "ParticipantID", "ClientID", "BusinessUnit", "OrderActionStatus", "UserID", "BranchID", "reserve1", "MacAddress", "reserve2", "OptSelfCloseFlag", "IPAddress", "ExchangeInstID", NULL };


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID_length = 0;

    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_length = 0;

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    char CThostFtdcExchangeOptionSelfCloseActionField_ActionFlag = 0;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeOptionSelfCloseActionField_ActionDate = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_ActionDate_length = 0;

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOptionSelfCloseActionField_ActionTime = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_ActionTime_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeOptionSelfCloseActionField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeOptionSelfCloseActionField_InstallID = 0;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_length = 0;

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeOptionSelfCloseActionField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_ClientID_length = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit_length = 0;

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    char CThostFtdcExchangeOptionSelfCloseActionField_OrderActionStatus = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExchangeOptionSelfCloseActionField_UserID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_UserID_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeOptionSelfCloseActionField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_BranchID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeOptionSelfCloseActionField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_reserve1_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeOptionSelfCloseActionField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_MacAddress_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeOptionSelfCloseActionField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_reserve2_length = 0;

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    char CThostFtdcExchangeOptionSelfCloseActionField_OptSelfCloseFlag = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeOptionSelfCloseActionField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_IPAddress_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#cy#y#y#iy#y#y#y#y#cy#y#y#y#y#cy#y#", (char **)kwlist
        , &CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID, &CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, &CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_ActionFlag
        , &CThostFtdcExchangeOptionSelfCloseActionField_ActionDate, &CThostFtdcExchangeOptionSelfCloseActionField_ActionDate_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_ActionTime, &CThostFtdcExchangeOptionSelfCloseActionField_ActionTime_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_TraderID, &CThostFtdcExchangeOptionSelfCloseActionField_TraderID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_InstallID
        , &CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, &CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID, &CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID, &CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_ClientID, &CThostFtdcExchangeOptionSelfCloseActionField_ClientID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit, &CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_OrderActionStatus
        , &CThostFtdcExchangeOptionSelfCloseActionField_UserID, &CThostFtdcExchangeOptionSelfCloseActionField_UserID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_BranchID, &CThostFtdcExchangeOptionSelfCloseActionField_BranchID_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_reserve1, &CThostFtdcExchangeOptionSelfCloseActionField_reserve1_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_MacAddress, &CThostFtdcExchangeOptionSelfCloseActionField_MacAddress_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_reserve2, &CThostFtdcExchangeOptionSelfCloseActionField_reserve2_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_OptSelfCloseFlag
        , &CThostFtdcExchangeOptionSelfCloseActionField_IPAddress, &CThostFtdcExchangeOptionSelfCloseActionField_IPAddress_length
        , &CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID, &CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);


    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID, CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeOptionSelfCloseActionField_ExchangeID = NULL;
    }

    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
        // memcpy(data->OptionSelfCloseSysID, CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID_length);
        strncpy(data->OptionSelfCloseSysID, CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID, sizeof(data->OptionSelfCloseSysID));
        CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseSysID = NULL;
    }

    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    data->ActionFlag = CThostFtdcExchangeOptionSelfCloseActionField_ActionFlag;

    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeOptionSelfCloseActionField_ActionDate != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_ActionDate_length >= (Py_ssize_t)sizeof(data->ActionDate)) {
            PyErr_Format(PyExc_ValueError, "ActionDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseActionField_ActionDate_length);
            return -1;
        }
        // memset(data->ActionDate, 0, sizeof(data->ActionDate));
        // memcpy(data->ActionDate, CThostFtdcExchangeOptionSelfCloseActionField_ActionDate, CThostFtdcExchangeOptionSelfCloseActionField_ActionDate_length);
        strncpy(data->ActionDate, CThostFtdcExchangeOptionSelfCloseActionField_ActionDate, sizeof(data->ActionDate));
        CThostFtdcExchangeOptionSelfCloseActionField_ActionDate = NULL;
    }

    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOptionSelfCloseActionField_ActionTime != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_ActionTime_length >= (Py_ssize_t)sizeof(data->ActionTime)) {
            PyErr_Format(PyExc_ValueError, "ActionTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseActionField_ActionTime_length);
            return -1;
        }
        // memset(data->ActionTime, 0, sizeof(data->ActionTime));
        // memcpy(data->ActionTime, CThostFtdcExchangeOptionSelfCloseActionField_ActionTime, CThostFtdcExchangeOptionSelfCloseActionField_ActionTime_length);
        strncpy(data->ActionTime, CThostFtdcExchangeOptionSelfCloseActionField_ActionTime, sizeof(data->ActionTime));
        CThostFtdcExchangeOptionSelfCloseActionField_ActionTime = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeOptionSelfCloseActionField_TraderID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseActionField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeOptionSelfCloseActionField_TraderID, CThostFtdcExchangeOptionSelfCloseActionField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeOptionSelfCloseActionField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeOptionSelfCloseActionField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeOptionSelfCloseActionField_InstallID;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
        // memcpy(data->OptionSelfCloseLocalID, CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID_length);
        strncpy(data->OptionSelfCloseLocalID, CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID, sizeof(data->OptionSelfCloseLocalID));
        CThostFtdcExchangeOptionSelfCloseActionField_OptionSelfCloseLocalID = NULL;
    }

    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID_length >= (Py_ssize_t)sizeof(data->ActionLocalID)) {
            PyErr_Format(PyExc_ValueError, "ActionLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID_length);
            return -1;
        }
        // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
        // memcpy(data->ActionLocalID, CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID, CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID_length);
        strncpy(data->ActionLocalID, CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID, sizeof(data->ActionLocalID));
        CThostFtdcExchangeOptionSelfCloseActionField_ActionLocalID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID, CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeOptionSelfCloseActionField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeOptionSelfCloseActionField_ClientID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOptionSelfCloseActionField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeOptionSelfCloseActionField_ClientID, CThostFtdcExchangeOptionSelfCloseActionField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeOptionSelfCloseActionField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeOptionSelfCloseActionField_ClientID = NULL;
    }

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit, CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeOptionSelfCloseActionField_BusinessUnit = NULL;
    }

    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    data->OrderActionStatus = CThostFtdcExchangeOptionSelfCloseActionField_OrderActionStatus;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExchangeOptionSelfCloseActionField_UserID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcExchangeOptionSelfCloseActionField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcExchangeOptionSelfCloseActionField_UserID, CThostFtdcExchangeOptionSelfCloseActionField_UserID_length);
        strncpy(data->UserID, CThostFtdcExchangeOptionSelfCloseActionField_UserID, sizeof(data->UserID));
        CThostFtdcExchangeOptionSelfCloseActionField_UserID = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeOptionSelfCloseActionField_BranchID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseActionField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeOptionSelfCloseActionField_BranchID, CThostFtdcExchangeOptionSelfCloseActionField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeOptionSelfCloseActionField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeOptionSelfCloseActionField_BranchID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeOptionSelfCloseActionField_reserve1 != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeOptionSelfCloseActionField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeOptionSelfCloseActionField_reserve1, CThostFtdcExchangeOptionSelfCloseActionField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeOptionSelfCloseActionField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeOptionSelfCloseActionField_reserve1 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeOptionSelfCloseActionField_MacAddress != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseActionField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeOptionSelfCloseActionField_MacAddress, CThostFtdcExchangeOptionSelfCloseActionField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeOptionSelfCloseActionField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeOptionSelfCloseActionField_MacAddress = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeOptionSelfCloseActionField_reserve2 != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeOptionSelfCloseActionField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeOptionSelfCloseActionField_reserve2, CThostFtdcExchangeOptionSelfCloseActionField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeOptionSelfCloseActionField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeOptionSelfCloseActionField_reserve2 = NULL;
    }

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    data->OptSelfCloseFlag = CThostFtdcExchangeOptionSelfCloseActionField_OptSelfCloseFlag;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeOptionSelfCloseActionField_IPAddress != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeOptionSelfCloseActionField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeOptionSelfCloseActionField_IPAddress, CThostFtdcExchangeOptionSelfCloseActionField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeOptionSelfCloseActionField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeOptionSelfCloseActionField_IPAddress = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID, CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeOptionSelfCloseActionField_ExchangeInstID = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:c,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:y}"
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "OptionSelfCloseSysID", data->OptionSelfCloseSysID//, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)
        , "ActionFlag", data->ActionFlag
        , "ActionDate", data->ActionDate//, (Py_ssize_t)sizeof(data->ActionDate)
        , "ActionTime", data->ActionTime//, (Py_ssize_t)sizeof(data->ActionTime)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OptionSelfCloseLocalID", data->OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)
        , "ActionLocalID", data->ActionLocalID//, (Py_ssize_t)sizeof(data->ActionLocalID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OrderActionStatus", data->OrderActionStatus
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "OptSelfCloseFlag", data->OptSelfCloseFlag
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseActionField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseActionField repr");
        return NULL;
    }

    return repr;
}


/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲操作编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OptionSelfCloseSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseSysID, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID));
    return PyBytes_FromString(data->OptionSelfCloseSysID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OptionSelfCloseSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
    // memcpy(data->OptionSelfCloseSysID, buf, len);
    strncpy(data->OptionSelfCloseSysID, buf, sizeof(data->OptionSelfCloseSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作标志
/// typedef char TThostFtdcActionFlagType
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionFlag), 1);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ActionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ActionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    data->ActionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionDate, (Py_ssize_t)sizeof(data->ActionDate));
    return PyBytes_FromString(data->ActionDate);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ActionDate)) {
        PyErr_SetString(PyExc_ValueError, "ActionDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ActionDate, 0, sizeof(data->ActionDate));
    // memcpy(data->ActionDate, buf, len);
    strncpy(data->ActionDate, buf, sizeof(data->ActionDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionTime, (Py_ssize_t)sizeof(data->ActionTime));
    return PyBytes_FromString(data->ActionTime);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ActionTime)) {
        PyErr_SetString(PyExc_ValueError, "ActionTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ActionTime, 0, sizeof(data->ActionTime));
    // memcpy(data->ActionTime, buf, len);
    strncpy(data->ActionTime, buf, sizeof(data->ActionTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地期权自对冲编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OptionSelfCloseLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseLocalID, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID));
    return PyBytes_FromString(data->OptionSelfCloseLocalID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OptionSelfCloseLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::OptionSelfCloseLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
    // memcpy(data->OptionSelfCloseLocalID, buf, len);
    strncpy(data->OptionSelfCloseLocalID, buf, sizeof(data->OptionSelfCloseLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作本地编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActionLocalID, (Py_ssize_t)sizeof(data->ActionLocalID));
    return PyBytes_FromString(data->ActionLocalID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ActionLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ActionLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ActionLocalID, 0, sizeof(data->ActionLocalID));
    // memcpy(data->ActionLocalID, buf, len);
    strncpy(data->ActionLocalID, buf, sizeof(data->ActionLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单操作状态
/// typedef char TThostFtdcOrderActionStatusType
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OrderActionStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderActionStatus), 1);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OrderActionStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderActionStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::OrderActionStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderActionStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    data->OrderActionStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权的头寸是否自对冲
/// typedef char TThostFtdcOptSelfCloseFlagType
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OptSelfCloseFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OptSelfCloseFlag), 1);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OptSelfCloseFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::OptSelfCloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    data->OptSelfCloseFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseActionField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseActionFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseActionFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseActionField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeOptionSelfCloseActionFieldType_members[] = {
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOptionSelfCloseActionFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeOptionSelfCloseActionFieldType_getsets[] = {
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 期权自对冲操作编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OptionSelfCloseSysID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OptionSelfCloseSysID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OptionSelfCloseSysID,
    .doc = PyDoc_STR("期权自对冲操作编号"),
    },
    /// 操作标志
    /// typedef char TThostFtdcActionFlagType
    {
    .name = "ActionFlag",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionFlag,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionFlag,
    .doc = PyDoc_STR("操作标志"),
    },
    /// 操作日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "ActionDate",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionDate,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionDate,
    .doc = PyDoc_STR("操作日期"),
    },
    /// 操作时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "ActionTime",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionTime,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionTime,
    .doc = PyDoc_STR("操作时间"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OptionSelfCloseLocalID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OptionSelfCloseLocalID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OptionSelfCloseLocalID,
    .doc = PyDoc_STR("本地期权自对冲编号"),
    },
    /// 操作本地编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ActionLocalID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ActionLocalID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ActionLocalID,
    .doc = PyDoc_STR("操作本地编号"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 报单操作状态
    /// typedef char TThostFtdcOrderActionStatusType
    {
    .name = "OrderActionStatus",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OrderActionStatus,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OrderActionStatus,
    .doc = PyDoc_STR("报单操作状态"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_UserID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    {
    .name = "OptSelfCloseFlag",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_OptSelfCloseFlag,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_OptSelfCloseFlag,
    .doc = PyDoc_STR("期权行权的头寸是否自对冲"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeOptionSelfCloseActionFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeOptionSelfCloseActionField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所期权自对冲操作")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeOptionSelfCloseActionFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeOptionSelfCloseActionFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeOptionSelfCloseActionFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeOptionSelfCloseActionFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeOptionSelfCloseActionFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeOptionSelfCloseActionFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所期权自对冲操作")},
    {Py_tp_members, PyCThostFtdcExchangeOptionSelfCloseActionFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeOptionSelfCloseActionFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeOptionSelfCloseActionFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeOptionSelfCloseActionFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeOptionSelfCloseActionFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeOptionSelfCloseActionField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeOptionSelfCloseActionFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeOptionSelfCloseActionFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeOptionSelfCloseActionFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeOptionSelfCloseActionFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeOptionSelfCloseActionFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeOptionSelfCloseActionFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeOptionSelfCloseActionFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeOptionSelfCloseActionFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeOptionSelfCloseActionField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOptionSelfCloseActionField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}