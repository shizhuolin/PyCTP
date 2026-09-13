
#include "PyCThostFtdcExchangeExecOrderField.h"

///交易所执行宣告信息

static int PyCThostFtdcExchangeExecOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExecOrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "ExecOrderSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress", NULL };


    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeExecOrderField_Volume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcExchangeExecOrderField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeExecOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_BusinessUnit_length = 0;

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcExchangeExecOrderField_OffsetFlag = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeExecOrderField_HedgeFlag = 0;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    char CThostFtdcExchangeExecOrderField_ActionType = 0;

    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcExchangeExecOrderField_PosiDirection = 0;

    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    char CThostFtdcExchangeExecOrderField_ReservePositionFlag = 0;

    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    char CThostFtdcExchangeExecOrderField_CloseFlag = 0;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeExecOrderField_ExecOrderLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_ExecOrderLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeExecOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeExecOrderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeExecOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeExecOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_reserve1_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeExecOrderField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeExecOrderField_InstallID = 0;

    /// 执行宣告提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcExchangeExecOrderField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeExecOrderField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeExecOrderField_TradingDay = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcExchangeExecOrderField_SettlementID = 0;

    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    char *CThostFtdcExchangeExecOrderField_ExecOrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_ExecOrderSysID_length = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeExecOrderField_InsertDate = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeExecOrderField_InsertTime = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeExecOrderField_CancelTime = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_CancelTime_length = 0;

    /// 执行结果
    /// typedef char TThostFtdcExecResultType
    char CThostFtdcExchangeExecOrderField_ExecResult = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeExecOrderField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeExecOrderField_SequenceNo = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeExecOrderField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_BranchID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeExecOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeExecOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_MacAddress_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeExecOrderField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeExecOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeExecOrderField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#ccccccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iy#y#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeExecOrderField_Volume
        , &CThostFtdcExchangeExecOrderField_RequestID
        , &CThostFtdcExchangeExecOrderField_BusinessUnit, &CThostFtdcExchangeExecOrderField_BusinessUnit_length
        , &CThostFtdcExchangeExecOrderField_OffsetFlag
        , &CThostFtdcExchangeExecOrderField_HedgeFlag
        , &CThostFtdcExchangeExecOrderField_ActionType
        , &CThostFtdcExchangeExecOrderField_PosiDirection
        , &CThostFtdcExchangeExecOrderField_ReservePositionFlag
        , &CThostFtdcExchangeExecOrderField_CloseFlag
        , &CThostFtdcExchangeExecOrderField_ExecOrderLocalID, &CThostFtdcExchangeExecOrderField_ExecOrderLocalID_length
        , &CThostFtdcExchangeExecOrderField_ExchangeID, &CThostFtdcExchangeExecOrderField_ExchangeID_length
        , &CThostFtdcExchangeExecOrderField_ParticipantID, &CThostFtdcExchangeExecOrderField_ParticipantID_length
        , &CThostFtdcExchangeExecOrderField_ClientID, &CThostFtdcExchangeExecOrderField_ClientID_length
        , &CThostFtdcExchangeExecOrderField_reserve1, &CThostFtdcExchangeExecOrderField_reserve1_length
        , &CThostFtdcExchangeExecOrderField_TraderID, &CThostFtdcExchangeExecOrderField_TraderID_length
        , &CThostFtdcExchangeExecOrderField_InstallID
        , &CThostFtdcExchangeExecOrderField_OrderSubmitStatus
        , &CThostFtdcExchangeExecOrderField_NotifySequence
        , &CThostFtdcExchangeExecOrderField_TradingDay, &CThostFtdcExchangeExecOrderField_TradingDay_length
        , &CThostFtdcExchangeExecOrderField_SettlementID
        , &CThostFtdcExchangeExecOrderField_ExecOrderSysID, &CThostFtdcExchangeExecOrderField_ExecOrderSysID_length
        , &CThostFtdcExchangeExecOrderField_InsertDate, &CThostFtdcExchangeExecOrderField_InsertDate_length
        , &CThostFtdcExchangeExecOrderField_InsertTime, &CThostFtdcExchangeExecOrderField_InsertTime_length
        , &CThostFtdcExchangeExecOrderField_CancelTime, &CThostFtdcExchangeExecOrderField_CancelTime_length
        , &CThostFtdcExchangeExecOrderField_ExecResult
        , &CThostFtdcExchangeExecOrderField_ClearingPartID, &CThostFtdcExchangeExecOrderField_ClearingPartID_length
        , &CThostFtdcExchangeExecOrderField_SequenceNo
        , &CThostFtdcExchangeExecOrderField_BranchID, &CThostFtdcExchangeExecOrderField_BranchID_length
        , &CThostFtdcExchangeExecOrderField_reserve2, &CThostFtdcExchangeExecOrderField_reserve2_length
        , &CThostFtdcExchangeExecOrderField_MacAddress, &CThostFtdcExchangeExecOrderField_MacAddress_length
        , &CThostFtdcExchangeExecOrderField_ExchangeInstID, &CThostFtdcExchangeExecOrderField_ExchangeInstID_length
        , &CThostFtdcExchangeExecOrderField_IPAddress, &CThostFtdcExchangeExecOrderField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);


    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcExchangeExecOrderField_Volume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcExchangeExecOrderField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeExecOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeExecOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeExecOrderField_BusinessUnit, CThostFtdcExchangeExecOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeExecOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeExecOrderField_BusinessUnit = NULL;
    }

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->OffsetFlag = CThostFtdcExchangeExecOrderField_OffsetFlag;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcExchangeExecOrderField_HedgeFlag;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    data->ActionType = CThostFtdcExchangeExecOrderField_ActionType;

    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcExchangeExecOrderField_PosiDirection;

    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    data->ReservePositionFlag = CThostFtdcExchangeExecOrderField_ReservePositionFlag;

    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    data->CloseFlag = CThostFtdcExchangeExecOrderField_CloseFlag;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeExecOrderField_ExecOrderLocalID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_ExecOrderLocalID_length >= (Py_ssize_t)sizeof(data->ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeExecOrderField_ExecOrderLocalID_length);
            return -1;
        }
        // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
        // memcpy(data->ExecOrderLocalID, CThostFtdcExchangeExecOrderField_ExecOrderLocalID, CThostFtdcExchangeExecOrderField_ExecOrderLocalID_length);
        strncpy(data->ExecOrderLocalID, CThostFtdcExchangeExecOrderField_ExecOrderLocalID, sizeof(data->ExecOrderLocalID));
        CThostFtdcExchangeExecOrderField_ExecOrderLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeExecOrderField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeExecOrderField_ExchangeID, CThostFtdcExchangeExecOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeExecOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeExecOrderField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeExecOrderField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeExecOrderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeExecOrderField_ParticipantID, CThostFtdcExchangeExecOrderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeExecOrderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeExecOrderField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeExecOrderField_ClientID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeExecOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeExecOrderField_ClientID, CThostFtdcExchangeExecOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeExecOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeExecOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeExecOrderField_reserve1 != NULL ) {
        if(CThostFtdcExchangeExecOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeExecOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeExecOrderField_reserve1, CThostFtdcExchangeExecOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeExecOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeExecOrderField_reserve1 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeExecOrderField_TraderID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeExecOrderField_TraderID, CThostFtdcExchangeExecOrderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeExecOrderField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeExecOrderField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeExecOrderField_InstallID;

    /// 执行宣告提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcExchangeExecOrderField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcExchangeExecOrderField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeExecOrderField_TradingDay != NULL ) {
        if(CThostFtdcExchangeExecOrderField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcExchangeExecOrderField_TradingDay, CThostFtdcExchangeExecOrderField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcExchangeExecOrderField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcExchangeExecOrderField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcExchangeExecOrderField_SettlementID;

    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    if( CThostFtdcExchangeExecOrderField_ExecOrderSysID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_ExecOrderSysID_length >= (Py_ssize_t)sizeof(data->ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderField_ExecOrderSysID_length);
            return -1;
        }
        // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
        // memcpy(data->ExecOrderSysID, CThostFtdcExchangeExecOrderField_ExecOrderSysID, CThostFtdcExchangeExecOrderField_ExecOrderSysID_length);
        strncpy(data->ExecOrderSysID, CThostFtdcExchangeExecOrderField_ExecOrderSysID, sizeof(data->ExecOrderSysID));
        CThostFtdcExchangeExecOrderField_ExecOrderSysID = NULL;
    }

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeExecOrderField_InsertDate != NULL ) {
        if(CThostFtdcExchangeExecOrderField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcExchangeExecOrderField_InsertDate, CThostFtdcExchangeExecOrderField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcExchangeExecOrderField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcExchangeExecOrderField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeExecOrderField_InsertTime != NULL ) {
        if(CThostFtdcExchangeExecOrderField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcExchangeExecOrderField_InsertTime, CThostFtdcExchangeExecOrderField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcExchangeExecOrderField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcExchangeExecOrderField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeExecOrderField_CancelTime != NULL ) {
        if(CThostFtdcExchangeExecOrderField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcExchangeExecOrderField_CancelTime, CThostFtdcExchangeExecOrderField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcExchangeExecOrderField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcExchangeExecOrderField_CancelTime = NULL;
    }

    /// 执行结果
    /// typedef char TThostFtdcExecResultType
    data->ExecResult = CThostFtdcExchangeExecOrderField_ExecResult;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeExecOrderField_ClearingPartID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeExecOrderField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcExchangeExecOrderField_ClearingPartID, CThostFtdcExchangeExecOrderField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcExchangeExecOrderField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcExchangeExecOrderField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExchangeExecOrderField_SequenceNo;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeExecOrderField_BranchID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeExecOrderField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeExecOrderField_BranchID, CThostFtdcExchangeExecOrderField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeExecOrderField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeExecOrderField_BranchID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeExecOrderField_reserve2 != NULL ) {
        if(CThostFtdcExchangeExecOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeExecOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeExecOrderField_reserve2, CThostFtdcExchangeExecOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeExecOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeExecOrderField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeExecOrderField_MacAddress != NULL ) {
        if(CThostFtdcExchangeExecOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeExecOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeExecOrderField_MacAddress, CThostFtdcExchangeExecOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeExecOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeExecOrderField_MacAddress = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeExecOrderField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeExecOrderField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeExecOrderField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeExecOrderField_ExchangeInstID, CThostFtdcExchangeExecOrderField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeExecOrderField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeExecOrderField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeExecOrderField_IPAddress != NULL ) {
        if(CThostFtdcExchangeExecOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeExecOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeExecOrderField_IPAddress, CThostFtdcExchangeExecOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeExecOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeExecOrderField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeExecOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
        , "Volume", data->Volume
        , "RequestID", data->RequestID
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "OffsetFlag", data->OffsetFlag
        , "HedgeFlag", data->HedgeFlag
        , "ActionType", data->ActionType
        , "PosiDirection", data->PosiDirection
        , "ReservePositionFlag", data->ReservePositionFlag
        , "CloseFlag", data->CloseFlag
        , "ExecOrderLocalID", data->ExecOrderLocalID//, (Py_ssize_t)sizeof(data->ExecOrderLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "OrderSubmitStatus", data->OrderSubmitStatus
        , "NotifySequence", data->NotifySequence
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "ExecOrderSysID", data->ExecOrderSysID//, (Py_ssize_t)sizeof(data->ExecOrderSysID)
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "CancelTime", data->CancelTime//, (Py_ssize_t)sizeof(data->CancelTime)
        , "ExecResult", data->ExecResult
        , "ClearingPartID", data->ClearingPartID//, (Py_ssize_t)sizeof(data->ClearingPartID)
        , "SequenceNo", data->SequenceNo
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeExecOrderField repr");
        return NULL;
    }

    return repr;
}


/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_OffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetFlag), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_OffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->OffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行类型
/// typedef char TThostFtdcActionTypeType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ActionType(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionType), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ActionType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->ActionType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留头寸申请的持仓方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权后是否保留期货头寸的标记,该字段已废弃
/// typedef char TThostFtdcExecOrderPositionFlagType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ReservePositionFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ReservePositionFlag), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ReservePositionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ReservePositionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->ReservePositionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权后生成的头寸是否自动平仓
/// typedef char TThostFtdcExecOrderCloseFlagType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_CloseFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CloseFlag), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_CloseFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::CloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "CloseFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->CloseFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地执行宣告编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ExecOrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderLocalID, (Py_ssize_t)sizeof(data->ExecOrderLocalID));
    return PyBytes_FromString(data->ExecOrderLocalID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ExecOrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ExecOrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
    // memcpy(data->ExecOrderLocalID, buf, len);
    strncpy(data->ExecOrderLocalID, buf, sizeof(data->ExecOrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告编号
/// typedef char TThostFtdcExecOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ExecOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderSysID, (Py_ssize_t)sizeof(data->ExecOrderSysID));
    return PyBytes_FromString(data->ExecOrderSysID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ExecOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
    // memcpy(data->ExecOrderSysID, buf, len);
    strncpy(data->ExecOrderSysID, buf, sizeof(data->ExecOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行结果
/// typedef char TThostFtdcExecResultType
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ExecResult(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ExecResult), 1);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ExecResult(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ExecResult)) {
        PyErr_SetString(PyExc_ValueError, "ExecResult must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    data->ExecResult = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeExecOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeExecOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeExecOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeExecOrderFieldData>(self);
    CThostFtdcExchangeExecOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeExecOrderFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderFieldData, data.Volume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("数量")
    },
    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    {
        .name = "RequestID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderFieldData, data.RequestID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("请求编号")
    },
    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    {
        .name = "InstallID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "NotifySequence",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderFieldData, data.NotifySequence),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报单提示序号")
    },
    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    {
        .name = "SettlementID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderFieldData, data.SettlementID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("结算编号")
    },
    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "SequenceNo",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeExecOrderFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeExecOrderFieldType_getsets[] = {
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "OffsetFlag",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_OffsetFlag,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_OffsetFlag,
    .doc = PyDoc_STR("开平标志"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_HedgeFlag,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    {
    .name = "ActionType",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ActionType,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ActionType,
    .doc = PyDoc_STR("执行类型"),
    },
    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_PosiDirection,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_PosiDirection,
    .doc = PyDoc_STR("保留头寸申请的持仓方向"),
    },
    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    {
    .name = "ReservePositionFlag",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ReservePositionFlag,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ReservePositionFlag,
    .doc = PyDoc_STR("期权行权后是否保留期货头寸的标记,该字段已废弃"),
    },
    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    {
    .name = "CloseFlag",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_CloseFlag,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_CloseFlag,
    .doc = PyDoc_STR("期权行权后生成的头寸是否自动平仓"),
    },
    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ExecOrderLocalID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ExecOrderLocalID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ExecOrderLocalID,
    .doc = PyDoc_STR("本地执行宣告编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 执行宣告提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("执行宣告提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_TradingDay,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    {
    .name = "ExecOrderSysID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ExecOrderSysID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ExecOrderSysID,
    .doc = PyDoc_STR("执行宣告编号"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_InsertDate,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_InsertTime,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_CancelTime,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 执行结果
    /// typedef char TThostFtdcExecResultType
    {
    .name = "ExecResult",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ExecResult,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ExecResult,
    .doc = PyDoc_STR("执行结果"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ClearingPartID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeExecOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeExecOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeExecOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeExecOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeExecOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeExecOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeExecOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeExecOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeExecOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeExecOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所执行宣告信息")},
    {Py_tp_members, PyCThostFtdcExchangeExecOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeExecOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeExecOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeExecOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeExecOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeExecOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeExecOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeExecOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeExecOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeExecOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeExecOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeExecOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeExecOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeExecOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeExecOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeExecOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}