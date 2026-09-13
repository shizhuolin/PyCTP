
#include "PyCThostFtdcExchangeOptionSelfCloseField.h"

///交易所期权自对冲信息

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "OptionSelfCloseLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OptionSelfCloseSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress", NULL };


    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeOptionSelfCloseField_Volume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcExchangeOptionSelfCloseField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeOptionSelfCloseField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_BusinessUnit_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeOptionSelfCloseField_HedgeFlag = 0;

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    char CThostFtdcExchangeOptionSelfCloseField_OptSelfCloseFlag = 0;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeOptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeOptionSelfCloseField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeOptionSelfCloseField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeOptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_reserve1_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeOptionSelfCloseField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeOptionSelfCloseField_InstallID = 0;

    /// 期权自对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcExchangeOptionSelfCloseField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeOptionSelfCloseField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeOptionSelfCloseField_TradingDay = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcExchangeOptionSelfCloseField_SettlementID = 0;

    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID_length = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeOptionSelfCloseField_InsertDate = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOptionSelfCloseField_InsertTime = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeOptionSelfCloseField_CancelTime = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_CancelTime_length = 0;

    /// 自对冲结果
    /// typedef char TThostFtdcExecResultType
    char CThostFtdcExchangeOptionSelfCloseField_ExecResult = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeOptionSelfCloseField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeOptionSelfCloseField_SequenceNo = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeOptionSelfCloseField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_BranchID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeOptionSelfCloseField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeOptionSelfCloseField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_MacAddress_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeOptionSelfCloseField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeOptionSelfCloseField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|iiy#ccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iy#y#y#y#y#", (char **)kwlist
        , &CThostFtdcExchangeOptionSelfCloseField_Volume
        , &CThostFtdcExchangeOptionSelfCloseField_RequestID
        , &CThostFtdcExchangeOptionSelfCloseField_BusinessUnit, &CThostFtdcExchangeOptionSelfCloseField_BusinessUnit_length
        , &CThostFtdcExchangeOptionSelfCloseField_HedgeFlag
        , &CThostFtdcExchangeOptionSelfCloseField_OptSelfCloseFlag
        , &CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID, &CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID_length
        , &CThostFtdcExchangeOptionSelfCloseField_ExchangeID, &CThostFtdcExchangeOptionSelfCloseField_ExchangeID_length
        , &CThostFtdcExchangeOptionSelfCloseField_ParticipantID, &CThostFtdcExchangeOptionSelfCloseField_ParticipantID_length
        , &CThostFtdcExchangeOptionSelfCloseField_ClientID, &CThostFtdcExchangeOptionSelfCloseField_ClientID_length
        , &CThostFtdcExchangeOptionSelfCloseField_reserve1, &CThostFtdcExchangeOptionSelfCloseField_reserve1_length
        , &CThostFtdcExchangeOptionSelfCloseField_TraderID, &CThostFtdcExchangeOptionSelfCloseField_TraderID_length
        , &CThostFtdcExchangeOptionSelfCloseField_InstallID
        , &CThostFtdcExchangeOptionSelfCloseField_OrderSubmitStatus
        , &CThostFtdcExchangeOptionSelfCloseField_NotifySequence
        , &CThostFtdcExchangeOptionSelfCloseField_TradingDay, &CThostFtdcExchangeOptionSelfCloseField_TradingDay_length
        , &CThostFtdcExchangeOptionSelfCloseField_SettlementID
        , &CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID, &CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID_length
        , &CThostFtdcExchangeOptionSelfCloseField_InsertDate, &CThostFtdcExchangeOptionSelfCloseField_InsertDate_length
        , &CThostFtdcExchangeOptionSelfCloseField_InsertTime, &CThostFtdcExchangeOptionSelfCloseField_InsertTime_length
        , &CThostFtdcExchangeOptionSelfCloseField_CancelTime, &CThostFtdcExchangeOptionSelfCloseField_CancelTime_length
        , &CThostFtdcExchangeOptionSelfCloseField_ExecResult
        , &CThostFtdcExchangeOptionSelfCloseField_ClearingPartID, &CThostFtdcExchangeOptionSelfCloseField_ClearingPartID_length
        , &CThostFtdcExchangeOptionSelfCloseField_SequenceNo
        , &CThostFtdcExchangeOptionSelfCloseField_BranchID, &CThostFtdcExchangeOptionSelfCloseField_BranchID_length
        , &CThostFtdcExchangeOptionSelfCloseField_reserve2, &CThostFtdcExchangeOptionSelfCloseField_reserve2_length
        , &CThostFtdcExchangeOptionSelfCloseField_MacAddress, &CThostFtdcExchangeOptionSelfCloseField_MacAddress_length
        , &CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID, &CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID_length
        , &CThostFtdcExchangeOptionSelfCloseField_IPAddress, &CThostFtdcExchangeOptionSelfCloseField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);


    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcExchangeOptionSelfCloseField_Volume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcExchangeOptionSelfCloseField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeOptionSelfCloseField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeOptionSelfCloseField_BusinessUnit, CThostFtdcExchangeOptionSelfCloseField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeOptionSelfCloseField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeOptionSelfCloseField_BusinessUnit = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcExchangeOptionSelfCloseField_HedgeFlag;

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    data->OptSelfCloseFlag = CThostFtdcExchangeOptionSelfCloseField_OptSelfCloseFlag;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
        // memcpy(data->OptionSelfCloseLocalID, CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID, CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID_length);
        strncpy(data->OptionSelfCloseLocalID, CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID, sizeof(data->OptionSelfCloseLocalID));
        CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeOptionSelfCloseField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeOptionSelfCloseField_ExchangeID, CThostFtdcExchangeOptionSelfCloseField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeOptionSelfCloseField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeOptionSelfCloseField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeOptionSelfCloseField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOptionSelfCloseField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeOptionSelfCloseField_ParticipantID, CThostFtdcExchangeOptionSelfCloseField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeOptionSelfCloseField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeOptionSelfCloseField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeOptionSelfCloseField_ClientID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOptionSelfCloseField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeOptionSelfCloseField_ClientID, CThostFtdcExchangeOptionSelfCloseField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeOptionSelfCloseField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeOptionSelfCloseField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeOptionSelfCloseField_reserve1 != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeOptionSelfCloseField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeOptionSelfCloseField_reserve1, CThostFtdcExchangeOptionSelfCloseField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeOptionSelfCloseField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeOptionSelfCloseField_reserve1 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeOptionSelfCloseField_TraderID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeOptionSelfCloseField_TraderID, CThostFtdcExchangeOptionSelfCloseField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeOptionSelfCloseField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeOptionSelfCloseField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeOptionSelfCloseField_InstallID;

    /// 期权自对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcExchangeOptionSelfCloseField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcExchangeOptionSelfCloseField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeOptionSelfCloseField_TradingDay != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcExchangeOptionSelfCloseField_TradingDay, CThostFtdcExchangeOptionSelfCloseField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcExchangeOptionSelfCloseField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcExchangeOptionSelfCloseField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcExchangeOptionSelfCloseField_SettlementID;

    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
        // memcpy(data->OptionSelfCloseSysID, CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID, CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID_length);
        strncpy(data->OptionSelfCloseSysID, CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID, sizeof(data->OptionSelfCloseSysID));
        CThostFtdcExchangeOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    }

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeOptionSelfCloseField_InsertDate != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcExchangeOptionSelfCloseField_InsertDate, CThostFtdcExchangeOptionSelfCloseField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcExchangeOptionSelfCloseField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcExchangeOptionSelfCloseField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOptionSelfCloseField_InsertTime != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcExchangeOptionSelfCloseField_InsertTime, CThostFtdcExchangeOptionSelfCloseField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcExchangeOptionSelfCloseField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcExchangeOptionSelfCloseField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeOptionSelfCloseField_CancelTime != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcExchangeOptionSelfCloseField_CancelTime, CThostFtdcExchangeOptionSelfCloseField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcExchangeOptionSelfCloseField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcExchangeOptionSelfCloseField_CancelTime = NULL;
    }

    /// 自对冲结果
    /// typedef char TThostFtdcExecResultType
    data->ExecResult = CThostFtdcExchangeOptionSelfCloseField_ExecResult;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeOptionSelfCloseField_ClearingPartID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeOptionSelfCloseField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcExchangeOptionSelfCloseField_ClearingPartID, CThostFtdcExchangeOptionSelfCloseField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcExchangeOptionSelfCloseField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcExchangeOptionSelfCloseField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExchangeOptionSelfCloseField_SequenceNo;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeOptionSelfCloseField_BranchID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeOptionSelfCloseField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeOptionSelfCloseField_BranchID, CThostFtdcExchangeOptionSelfCloseField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeOptionSelfCloseField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeOptionSelfCloseField_BranchID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeOptionSelfCloseField_reserve2 != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeOptionSelfCloseField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeOptionSelfCloseField_reserve2, CThostFtdcExchangeOptionSelfCloseField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeOptionSelfCloseField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeOptionSelfCloseField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeOptionSelfCloseField_MacAddress != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeOptionSelfCloseField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeOptionSelfCloseField_MacAddress, CThostFtdcExchangeOptionSelfCloseField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeOptionSelfCloseField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeOptionSelfCloseField_MacAddress = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID, CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeOptionSelfCloseField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeOptionSelfCloseField_IPAddress != NULL ) {
        if(CThostFtdcExchangeOptionSelfCloseField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeOptionSelfCloseField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeOptionSelfCloseField_IPAddress, CThostFtdcExchangeOptionSelfCloseField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeOptionSelfCloseField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeOptionSelfCloseField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y}"
        , "Volume", data->Volume
        , "RequestID", data->RequestID
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "HedgeFlag", data->HedgeFlag
        , "OptSelfCloseFlag", data->OptSelfCloseFlag
        , "OptionSelfCloseLocalID", data->OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)
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
        , "OptionSelfCloseSysID", data->OptionSelfCloseSysID//, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeOptionSelfCloseField repr");
        return NULL;
    }

    return repr;
}


/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权的头寸是否自对冲
/// typedef char TThostFtdcOptSelfCloseFlagType
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OptSelfCloseFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OptSelfCloseFlag), 1);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OptSelfCloseFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::OptSelfCloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    data->OptSelfCloseFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地期权自对冲编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OptionSelfCloseLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseLocalID, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID));
    return PyBytes_FromString(data->OptionSelfCloseLocalID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OptionSelfCloseLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::OptionSelfCloseLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
    // memcpy(data->OptionSelfCloseLocalID, buf, len);
    strncpy(data->OptionSelfCloseLocalID, buf, sizeof(data->OptionSelfCloseLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OptionSelfCloseSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseSysID, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID));
    return PyBytes_FromString(data->OptionSelfCloseSysID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OptionSelfCloseSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
    // memcpy(data->OptionSelfCloseSysID, buf, len);
    strncpy(data->OptionSelfCloseSysID, buf, sizeof(data->OptionSelfCloseSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 自对冲结果
/// typedef char TThostFtdcExecResultType
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ExecResult(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ExecResult), 1);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ExecResult(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::ExecResult)) {
        PyErr_SetString(PyExc_ValueError, "ExecResult must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    data->ExecResult = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeOptionSelfCloseFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeOptionSelfCloseFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeOptionSelfCloseField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeOptionSelfCloseFieldData>(self);
    CThostFtdcExchangeOptionSelfCloseField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeOptionSelfCloseFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeOptionSelfCloseFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcExchangeOptionSelfCloseFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcExchangeOptionSelfCloseFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcExchangeOptionSelfCloseFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcExchangeOptionSelfCloseFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcExchangeOptionSelfCloseFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeOptionSelfCloseFieldType_getsets[] = {
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_HedgeFlag,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    {
    .name = "OptSelfCloseFlag",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OptSelfCloseFlag,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OptSelfCloseFlag,
    .doc = PyDoc_STR("期权行权的头寸是否自对冲"),
    },
    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OptionSelfCloseLocalID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OptionSelfCloseLocalID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OptionSelfCloseLocalID,
    .doc = PyDoc_STR("本地期权自对冲编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 期权自对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("期权自对冲提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_TradingDay,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OptionSelfCloseSysID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_OptionSelfCloseSysID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_OptionSelfCloseSysID,
    .doc = PyDoc_STR("期权自对冲编号"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_InsertDate,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_InsertTime,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_CancelTime,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 自对冲结果
    /// typedef char TThostFtdcExecResultType
    {
    .name = "ExecResult",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ExecResult,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ExecResult,
    .doc = PyDoc_STR("自对冲结果"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ClearingPartID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeOptionSelfCloseFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeOptionSelfCloseFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeOptionSelfCloseFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeOptionSelfCloseField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所期权自对冲信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeOptionSelfCloseFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeOptionSelfCloseFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeOptionSelfCloseFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeOptionSelfCloseFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeOptionSelfCloseFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeOptionSelfCloseFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所期权自对冲信息")},
    {Py_tp_members, PyCThostFtdcExchangeOptionSelfCloseFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeOptionSelfCloseFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeOptionSelfCloseFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeOptionSelfCloseFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeOptionSelfCloseFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeOptionSelfCloseField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeOptionSelfCloseFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeOptionSelfCloseFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeOptionSelfCloseFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeOptionSelfCloseFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeOptionSelfCloseFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeOptionSelfCloseFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeOptionSelfCloseFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeOptionSelfCloseFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeOptionSelfCloseField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeOptionSelfCloseField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}