
#include "PyCThostFtdcExecOrderField.h"

///执行宣告

static int PyCThostFtdcExecOrderFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "ExecOrderRef", "UserID", "Volume", "RequestID", "BusinessUnit", "OffsetFlag", "HedgeFlag", "ActionType", "PosiDirection", "ReservePositionFlag", "CloseFlag", "ExecOrderLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "ExecOrderSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerExecOrderSeq", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcExecOrderField_BrokerID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcExecOrderField_InvestorID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcExecOrderField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExecOrderField_reserve1_length = 0;

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcExecOrderField_ExecOrderRef = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ExecOrderRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExecOrderField_UserID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_UserID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExecOrderField_Volume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcExecOrderField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExecOrderField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExecOrderField_BusinessUnit_length = 0;

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcExecOrderField_OffsetFlag = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExecOrderField_HedgeFlag = 0;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    char CThostFtdcExecOrderField_ActionType = 0;

    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    char CThostFtdcExecOrderField_PosiDirection = 0;

    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    char CThostFtdcExecOrderField_ReservePositionFlag = 0;

    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    char CThostFtdcExecOrderField_CloseFlag = 0;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExecOrderField_ExecOrderLocalID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ExecOrderLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExecOrderField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExecOrderField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExecOrderField_ClientID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExecOrderField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExecOrderField_reserve2_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExecOrderField_TraderID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExecOrderField_InstallID = 0;

    /// 执行宣告提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcExecOrderField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExecOrderField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExecOrderField_TradingDay = NULL;
    Py_ssize_t CThostFtdcExecOrderField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcExecOrderField_SettlementID = 0;

    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    char *CThostFtdcExecOrderField_ExecOrderSysID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ExecOrderSysID_length = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExecOrderField_InsertDate = NULL;
    Py_ssize_t CThostFtdcExecOrderField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExecOrderField_InsertTime = NULL;
    Py_ssize_t CThostFtdcExecOrderField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExecOrderField_CancelTime = NULL;
    Py_ssize_t CThostFtdcExecOrderField_CancelTime_length = 0;

    /// 执行结果
    /// typedef char TThostFtdcExecResultType
    char CThostFtdcExecOrderField_ExecResult = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExecOrderField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExecOrderField_SequenceNo = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcExecOrderField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcExecOrderField_SessionID = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcExecOrderField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcExecOrderField_UserProductInfo_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcExecOrderField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcExecOrderField_StatusMsg_length = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcExecOrderField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ActiveUserID_length = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExecOrderField_BrokerExecOrderSeq = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExecOrderField_BranchID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcExecOrderField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcExecOrderField_AccountID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcExecOrderField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_CurrencyID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExecOrderField_reserve3 = NULL;
    Py_ssize_t CThostFtdcExecOrderField_reserve3_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExecOrderField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExecOrderField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcExecOrderField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExecOrderField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExecOrderField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExecOrderField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExecOrderField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccccccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iiiy#y#y#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcExecOrderField_BrokerID, &CThostFtdcExecOrderField_BrokerID_length
        , &CThostFtdcExecOrderField_InvestorID, &CThostFtdcExecOrderField_InvestorID_length
        , &CThostFtdcExecOrderField_reserve1, &CThostFtdcExecOrderField_reserve1_length
        , &CThostFtdcExecOrderField_ExecOrderRef, &CThostFtdcExecOrderField_ExecOrderRef_length
        , &CThostFtdcExecOrderField_UserID, &CThostFtdcExecOrderField_UserID_length
        , &CThostFtdcExecOrderField_Volume
        , &CThostFtdcExecOrderField_RequestID
        , &CThostFtdcExecOrderField_BusinessUnit, &CThostFtdcExecOrderField_BusinessUnit_length
        , &CThostFtdcExecOrderField_OffsetFlag
        , &CThostFtdcExecOrderField_HedgeFlag
        , &CThostFtdcExecOrderField_ActionType
        , &CThostFtdcExecOrderField_PosiDirection
        , &CThostFtdcExecOrderField_ReservePositionFlag
        , &CThostFtdcExecOrderField_CloseFlag
        , &CThostFtdcExecOrderField_ExecOrderLocalID, &CThostFtdcExecOrderField_ExecOrderLocalID_length
        , &CThostFtdcExecOrderField_ExchangeID, &CThostFtdcExecOrderField_ExchangeID_length
        , &CThostFtdcExecOrderField_ParticipantID, &CThostFtdcExecOrderField_ParticipantID_length
        , &CThostFtdcExecOrderField_ClientID, &CThostFtdcExecOrderField_ClientID_length
        , &CThostFtdcExecOrderField_reserve2, &CThostFtdcExecOrderField_reserve2_length
        , &CThostFtdcExecOrderField_TraderID, &CThostFtdcExecOrderField_TraderID_length
        , &CThostFtdcExecOrderField_InstallID
        , &CThostFtdcExecOrderField_OrderSubmitStatus
        , &CThostFtdcExecOrderField_NotifySequence
        , &CThostFtdcExecOrderField_TradingDay, &CThostFtdcExecOrderField_TradingDay_length
        , &CThostFtdcExecOrderField_SettlementID
        , &CThostFtdcExecOrderField_ExecOrderSysID, &CThostFtdcExecOrderField_ExecOrderSysID_length
        , &CThostFtdcExecOrderField_InsertDate, &CThostFtdcExecOrderField_InsertDate_length
        , &CThostFtdcExecOrderField_InsertTime, &CThostFtdcExecOrderField_InsertTime_length
        , &CThostFtdcExecOrderField_CancelTime, &CThostFtdcExecOrderField_CancelTime_length
        , &CThostFtdcExecOrderField_ExecResult
        , &CThostFtdcExecOrderField_ClearingPartID, &CThostFtdcExecOrderField_ClearingPartID_length
        , &CThostFtdcExecOrderField_SequenceNo
        , &CThostFtdcExecOrderField_FrontID
        , &CThostFtdcExecOrderField_SessionID
        , &CThostFtdcExecOrderField_UserProductInfo, &CThostFtdcExecOrderField_UserProductInfo_length
        , &CThostFtdcExecOrderField_StatusMsg, &CThostFtdcExecOrderField_StatusMsg_length
        , &CThostFtdcExecOrderField_ActiveUserID, &CThostFtdcExecOrderField_ActiveUserID_length
        , &CThostFtdcExecOrderField_BrokerExecOrderSeq
        , &CThostFtdcExecOrderField_BranchID, &CThostFtdcExecOrderField_BranchID_length
        , &CThostFtdcExecOrderField_InvestUnitID, &CThostFtdcExecOrderField_InvestUnitID_length
        , &CThostFtdcExecOrderField_AccountID, &CThostFtdcExecOrderField_AccountID_length
        , &CThostFtdcExecOrderField_CurrencyID, &CThostFtdcExecOrderField_CurrencyID_length
        , &CThostFtdcExecOrderField_reserve3, &CThostFtdcExecOrderField_reserve3_length
        , &CThostFtdcExecOrderField_MacAddress, &CThostFtdcExecOrderField_MacAddress_length
        , &CThostFtdcExecOrderField_InstrumentID, &CThostFtdcExecOrderField_InstrumentID_length
        , &CThostFtdcExecOrderField_ExchangeInstID, &CThostFtdcExecOrderField_ExchangeInstID_length
        , &CThostFtdcExecOrderField_IPAddress, &CThostFtdcExecOrderField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcExecOrderField_BrokerID != NULL ) {
        if(CThostFtdcExecOrderField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcExecOrderField_BrokerID, CThostFtdcExecOrderField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcExecOrderField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcExecOrderField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcExecOrderField_InvestorID != NULL ) {
        if(CThostFtdcExecOrderField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcExecOrderField_InvestorID, CThostFtdcExecOrderField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcExecOrderField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcExecOrderField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcExecOrderField_reserve1 != NULL ) {
        if(CThostFtdcExecOrderField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExecOrderField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExecOrderField_reserve1, CThostFtdcExecOrderField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExecOrderField_reserve1, sizeof(data->reserve1));
        CThostFtdcExecOrderField_reserve1 = NULL;
    }

    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcExecOrderField_ExecOrderRef != NULL ) {
        if(CThostFtdcExecOrderField_ExecOrderRef_length >= (Py_ssize_t)sizeof(data->ExecOrderRef)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderField_ExecOrderRef_length);
            return -1;
        }
        // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
        // memcpy(data->ExecOrderRef, CThostFtdcExecOrderField_ExecOrderRef, CThostFtdcExecOrderField_ExecOrderRef_length);
        strncpy(data->ExecOrderRef, CThostFtdcExecOrderField_ExecOrderRef, sizeof(data->ExecOrderRef));
        CThostFtdcExecOrderField_ExecOrderRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExecOrderField_UserID != NULL ) {
        if(CThostFtdcExecOrderField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcExecOrderField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcExecOrderField_UserID, CThostFtdcExecOrderField_UserID_length);
        strncpy(data->UserID, CThostFtdcExecOrderField_UserID, sizeof(data->UserID));
        CThostFtdcExecOrderField_UserID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcExecOrderField_Volume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcExecOrderField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExecOrderField_BusinessUnit != NULL ) {
        if(CThostFtdcExecOrderField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExecOrderField_BusinessUnit, CThostFtdcExecOrderField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExecOrderField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExecOrderField_BusinessUnit = NULL;
    }

    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->OffsetFlag = CThostFtdcExecOrderField_OffsetFlag;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcExecOrderField_HedgeFlag;

    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    data->ActionType = CThostFtdcExecOrderField_ActionType;

    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    data->PosiDirection = CThostFtdcExecOrderField_PosiDirection;

    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    data->ReservePositionFlag = CThostFtdcExecOrderField_ReservePositionFlag;

    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    data->CloseFlag = CThostFtdcExecOrderField_CloseFlag;

    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExecOrderField_ExecOrderLocalID != NULL ) {
        if(CThostFtdcExecOrderField_ExecOrderLocalID_length >= (Py_ssize_t)sizeof(data->ExecOrderLocalID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderField_ExecOrderLocalID_length);
            return -1;
        }
        // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
        // memcpy(data->ExecOrderLocalID, CThostFtdcExecOrderField_ExecOrderLocalID, CThostFtdcExecOrderField_ExecOrderLocalID_length);
        strncpy(data->ExecOrderLocalID, CThostFtdcExecOrderField_ExecOrderLocalID, sizeof(data->ExecOrderLocalID));
        CThostFtdcExecOrderField_ExecOrderLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExecOrderField_ExchangeID != NULL ) {
        if(CThostFtdcExecOrderField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExecOrderField_ExchangeID, CThostFtdcExecOrderField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExecOrderField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExecOrderField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExecOrderField_ParticipantID != NULL ) {
        if(CThostFtdcExecOrderField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExecOrderField_ParticipantID, CThostFtdcExecOrderField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExecOrderField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExecOrderField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExecOrderField_ClientID != NULL ) {
        if(CThostFtdcExecOrderField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExecOrderField_ClientID, CThostFtdcExecOrderField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExecOrderField_ClientID, sizeof(data->ClientID));
        CThostFtdcExecOrderField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExecOrderField_reserve2 != NULL ) {
        if(CThostFtdcExecOrderField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcExecOrderField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExecOrderField_reserve2, CThostFtdcExecOrderField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExecOrderField_reserve2, sizeof(data->reserve2));
        CThostFtdcExecOrderField_reserve2 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExecOrderField_TraderID != NULL ) {
        if(CThostFtdcExecOrderField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExecOrderField_TraderID, CThostFtdcExecOrderField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExecOrderField_TraderID, sizeof(data->TraderID));
        CThostFtdcExecOrderField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExecOrderField_InstallID;

    /// 执行宣告提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcExecOrderField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcExecOrderField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExecOrderField_TradingDay != NULL ) {
        if(CThostFtdcExecOrderField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcExecOrderField_TradingDay, CThostFtdcExecOrderField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcExecOrderField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcExecOrderField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcExecOrderField_SettlementID;

    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    if( CThostFtdcExecOrderField_ExecOrderSysID != NULL ) {
        if(CThostFtdcExecOrderField_ExecOrderSysID_length >= (Py_ssize_t)sizeof(data->ExecOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "ExecOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderField_ExecOrderSysID_length);
            return -1;
        }
        // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
        // memcpy(data->ExecOrderSysID, CThostFtdcExecOrderField_ExecOrderSysID, CThostFtdcExecOrderField_ExecOrderSysID_length);
        strncpy(data->ExecOrderSysID, CThostFtdcExecOrderField_ExecOrderSysID, sizeof(data->ExecOrderSysID));
        CThostFtdcExecOrderField_ExecOrderSysID = NULL;
    }

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExecOrderField_InsertDate != NULL ) {
        if(CThostFtdcExecOrderField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcExecOrderField_InsertDate, CThostFtdcExecOrderField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcExecOrderField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcExecOrderField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExecOrderField_InsertTime != NULL ) {
        if(CThostFtdcExecOrderField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcExecOrderField_InsertTime, CThostFtdcExecOrderField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcExecOrderField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcExecOrderField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExecOrderField_CancelTime != NULL ) {
        if(CThostFtdcExecOrderField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcExecOrderField_CancelTime, CThostFtdcExecOrderField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcExecOrderField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcExecOrderField_CancelTime = NULL;
    }

    /// 执行结果
    /// typedef char TThostFtdcExecResultType
    data->ExecResult = CThostFtdcExecOrderField_ExecResult;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExecOrderField_ClearingPartID != NULL ) {
        if(CThostFtdcExecOrderField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcExecOrderField_ClearingPartID, CThostFtdcExecOrderField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcExecOrderField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcExecOrderField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExecOrderField_SequenceNo;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcExecOrderField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcExecOrderField_SessionID;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcExecOrderField_UserProductInfo != NULL ) {
        if(CThostFtdcExecOrderField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcExecOrderField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcExecOrderField_UserProductInfo, CThostFtdcExecOrderField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcExecOrderField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcExecOrderField_UserProductInfo = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcExecOrderField_StatusMsg != NULL ) {
        if(CThostFtdcExecOrderField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcExecOrderField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcExecOrderField_StatusMsg, CThostFtdcExecOrderField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcExecOrderField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcExecOrderField_StatusMsg = NULL;
    }

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcExecOrderField_ActiveUserID != NULL ) {
        if(CThostFtdcExecOrderField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcExecOrderField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcExecOrderField_ActiveUserID, CThostFtdcExecOrderField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcExecOrderField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcExecOrderField_ActiveUserID = NULL;
    }

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerExecOrderSeq = CThostFtdcExecOrderField_BrokerExecOrderSeq;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExecOrderField_BranchID != NULL ) {
        if(CThostFtdcExecOrderField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExecOrderField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExecOrderField_BranchID, CThostFtdcExecOrderField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExecOrderField_BranchID, sizeof(data->BranchID));
        CThostFtdcExecOrderField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcExecOrderField_InvestUnitID != NULL ) {
        if(CThostFtdcExecOrderField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcExecOrderField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcExecOrderField_InvestUnitID, CThostFtdcExecOrderField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcExecOrderField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcExecOrderField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcExecOrderField_AccountID != NULL ) {
        if(CThostFtdcExecOrderField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcExecOrderField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcExecOrderField_AccountID, CThostFtdcExecOrderField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcExecOrderField_AccountID, sizeof(data->AccountID));
        CThostFtdcExecOrderField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcExecOrderField_CurrencyID != NULL ) {
        if(CThostFtdcExecOrderField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcExecOrderField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcExecOrderField_CurrencyID, CThostFtdcExecOrderField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcExecOrderField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcExecOrderField_CurrencyID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExecOrderField_reserve3 != NULL ) {
        if(CThostFtdcExecOrderField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 15)", CThostFtdcExecOrderField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcExecOrderField_reserve3, CThostFtdcExecOrderField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcExecOrderField_reserve3, sizeof(data->reserve3));
        CThostFtdcExecOrderField_reserve3 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExecOrderField_MacAddress != NULL ) {
        if(CThostFtdcExecOrderField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExecOrderField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExecOrderField_MacAddress, CThostFtdcExecOrderField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExecOrderField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExecOrderField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcExecOrderField_InstrumentID != NULL ) {
        if(CThostFtdcExecOrderField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcExecOrderField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcExecOrderField_InstrumentID, CThostFtdcExecOrderField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcExecOrderField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcExecOrderField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExecOrderField_ExchangeInstID != NULL ) {
        if(CThostFtdcExecOrderField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExecOrderField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExecOrderField_ExchangeInstID, CThostFtdcExecOrderField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExecOrderField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExecOrderField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExecOrderField_IPAddress != NULL ) {
        if(CThostFtdcExecOrderField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExecOrderField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExecOrderField_IPAddress, CThostFtdcExecOrderField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExecOrderField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExecOrderField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExecOrderFieldType_repr(PyObject *self) {

    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "ExecOrderRef", data->ExecOrderRef//, (Py_ssize_t)sizeof(data->ExecOrderRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
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
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
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
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "ActiveUserID", data->ActiveUserID//, (Py_ssize_t)sizeof(data->ActiveUserID)
        , "BrokerExecOrderSeq", data->BrokerExecOrderSeq
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "reserve3", data->reserve3//, (Py_ssize_t)sizeof(data->reserve3)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExecOrderField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcExecOrderFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcExecOrderFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcExecOrderFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcExecOrderFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcExecOrderFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExecOrderFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ExecOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderRef, (Py_ssize_t)sizeof(data->ExecOrderRef));
    return PyBytes_FromString(data->ExecOrderRef);
}

static int PyCThostFtdcExecOrderFieldType_set_ExecOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ExecOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ExecOrderRef, 0, sizeof(data->ExecOrderRef));
    // memcpy(data->ExecOrderRef, buf, len);
    strncpy(data->ExecOrderRef, buf, sizeof(data->ExecOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExecOrderFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcExecOrderFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExecOrderFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExecOrderFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcExecOrderFieldType_get_OffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OffsetFlag), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_OffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::OffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "OffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->OffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExecOrderFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行类型
/// typedef char TThostFtdcActionTypeType
static PyObject *PyCThostFtdcExecOrderFieldType_get_ActionType(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ActionType), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_ActionType(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActionType Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ActionType)) {
        PyErr_SetString(PyExc_ValueError, "ActionType must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->ActionType = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留头寸申请的持仓方向
/// typedef char TThostFtdcPosiDirectionType
static PyObject *PyCThostFtdcExecOrderFieldType_get_PosiDirection(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->PosiDirection), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_PosiDirection(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "PosiDirection Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::PosiDirection)) {
        PyErr_SetString(PyExc_ValueError, "PosiDirection must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->PosiDirection = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权后是否保留期货头寸的标记,该字段已废弃
/// typedef char TThostFtdcExecOrderPositionFlagType
static PyObject *PyCThostFtdcExecOrderFieldType_get_ReservePositionFlag(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ReservePositionFlag), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_ReservePositionFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReservePositionFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ReservePositionFlag)) {
        PyErr_SetString(PyExc_ValueError, "ReservePositionFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->ReservePositionFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权后生成的头寸是否自动平仓
/// typedef char TThostFtdcExecOrderCloseFlagType
static PyObject *PyCThostFtdcExecOrderFieldType_get_CloseFlag(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->CloseFlag), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_CloseFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CloseFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::CloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "CloseFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->CloseFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地执行宣告编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ExecOrderLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderLocalID, (Py_ssize_t)sizeof(data->ExecOrderLocalID));
    return PyBytes_FromString(data->ExecOrderLocalID);
}

static int PyCThostFtdcExecOrderFieldType_set_ExecOrderLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ExecOrderLocalID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ExecOrderLocalID, 0, sizeof(data->ExecOrderLocalID));
    // memcpy(data->ExecOrderLocalID, buf, len);
    strncpy(data->ExecOrderLocalID, buf, sizeof(data->ExecOrderLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExecOrderFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExecOrderFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExecOrderFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExecOrderFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExecOrderFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExecOrderFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExecOrderFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcExecOrderFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExecOrderFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcExecOrderFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行宣告编号
/// typedef char TThostFtdcExecOrderSysIDType[21]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ExecOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExecOrderSysID, (Py_ssize_t)sizeof(data->ExecOrderSysID));
    return PyBytes_FromString(data->ExecOrderSysID);
}

static int PyCThostFtdcExecOrderFieldType_set_ExecOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ExecOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "ExecOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ExecOrderSysID, 0, sizeof(data->ExecOrderSysID));
    // memcpy(data->ExecOrderSysID, buf, len);
    strncpy(data->ExecOrderSysID, buf, sizeof(data->ExecOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExecOrderFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcExecOrderFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExecOrderFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcExecOrderFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExecOrderFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcExecOrderFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 执行结果
/// typedef char TThostFtdcExecResultType
static PyObject *PyCThostFtdcExecOrderFieldType_get_ExecResult(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ExecResult), 1);
}

static int PyCThostFtdcExecOrderFieldType_set_ExecResult(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ExecResult)) {
        PyErr_SetString(PyExc_ValueError, "ExecResult must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    data->ExecResult = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcExecOrderFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcExecOrderFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcExecOrderFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcExecOrderFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcExecOrderFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcExecOrderFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExecOrderFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExecOrderFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcExecOrderFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcExecOrderFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcExecOrderFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcExecOrderFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcExecOrderFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcExecOrderFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExecOrderFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcExecOrderFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExecOrderFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExecOrderFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcExecOrderFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcExecOrderFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExecOrderFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExecOrderFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExecOrderFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExecOrderFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExecOrderField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExecOrderFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExecOrderFieldData>(self);
    CThostFtdcExecOrderField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExecOrderFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    {
        .name = "FrontID",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "BrokerExecOrderSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExecOrderFieldData, data.BrokerExecOrderSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司报单编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExecOrderFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcExecOrderFieldType_get_BrokerID,
    .set = PyCThostFtdcExecOrderFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcExecOrderFieldType_get_InvestorID,
    .set = PyCThostFtdcExecOrderFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExecOrderFieldType_get_reserve1,
    .set = PyCThostFtdcExecOrderFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 执行宣告引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "ExecOrderRef",
    .get = PyCThostFtdcExecOrderFieldType_get_ExecOrderRef,
    .set = PyCThostFtdcExecOrderFieldType_set_ExecOrderRef,
    .doc = PyDoc_STR("执行宣告引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcExecOrderFieldType_get_UserID,
    .set = PyCThostFtdcExecOrderFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExecOrderFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExecOrderFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "OffsetFlag",
    .get = PyCThostFtdcExecOrderFieldType_get_OffsetFlag,
    .set = PyCThostFtdcExecOrderFieldType_set_OffsetFlag,
    .doc = PyDoc_STR("开平标志"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcExecOrderFieldType_get_HedgeFlag,
    .set = PyCThostFtdcExecOrderFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 执行类型
    /// typedef char TThostFtdcActionTypeType
    {
    .name = "ActionType",
    .get = PyCThostFtdcExecOrderFieldType_get_ActionType,
    .set = PyCThostFtdcExecOrderFieldType_set_ActionType,
    .doc = PyDoc_STR("执行类型"),
    },
    /// 保留头寸申请的持仓方向
    /// typedef char TThostFtdcPosiDirectionType
    {
    .name = "PosiDirection",
    .get = PyCThostFtdcExecOrderFieldType_get_PosiDirection,
    .set = PyCThostFtdcExecOrderFieldType_set_PosiDirection,
    .doc = PyDoc_STR("保留头寸申请的持仓方向"),
    },
    /// 期权行权后是否保留期货头寸的标记,该字段已废弃
    /// typedef char TThostFtdcExecOrderPositionFlagType
    {
    .name = "ReservePositionFlag",
    .get = PyCThostFtdcExecOrderFieldType_get_ReservePositionFlag,
    .set = PyCThostFtdcExecOrderFieldType_set_ReservePositionFlag,
    .doc = PyDoc_STR("期权行权后是否保留期货头寸的标记,该字段已废弃"),
    },
    /// 期权行权后生成的头寸是否自动平仓
    /// typedef char TThostFtdcExecOrderCloseFlagType
    {
    .name = "CloseFlag",
    .get = PyCThostFtdcExecOrderFieldType_get_CloseFlag,
    .set = PyCThostFtdcExecOrderFieldType_set_CloseFlag,
    .doc = PyDoc_STR("期权行权后生成的头寸是否自动平仓"),
    },
    /// 本地执行宣告编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "ExecOrderLocalID",
    .get = PyCThostFtdcExecOrderFieldType_get_ExecOrderLocalID,
    .set = PyCThostFtdcExecOrderFieldType_set_ExecOrderLocalID,
    .doc = PyDoc_STR("本地执行宣告编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExecOrderFieldType_get_ExchangeID,
    .set = PyCThostFtdcExecOrderFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExecOrderFieldType_get_ParticipantID,
    .set = PyCThostFtdcExecOrderFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExecOrderFieldType_get_ClientID,
    .set = PyCThostFtdcExecOrderFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExecOrderFieldType_get_reserve2,
    .set = PyCThostFtdcExecOrderFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExecOrderFieldType_get_TraderID,
    .set = PyCThostFtdcExecOrderFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 执行宣告提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcExecOrderFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcExecOrderFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("执行宣告提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcExecOrderFieldType_get_TradingDay,
    .set = PyCThostFtdcExecOrderFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 执行宣告编号
    /// typedef char TThostFtdcExecOrderSysIDType[21]
    {
    .name = "ExecOrderSysID",
    .get = PyCThostFtdcExecOrderFieldType_get_ExecOrderSysID,
    .set = PyCThostFtdcExecOrderFieldType_set_ExecOrderSysID,
    .doc = PyDoc_STR("执行宣告编号"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcExecOrderFieldType_get_InsertDate,
    .set = PyCThostFtdcExecOrderFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcExecOrderFieldType_get_InsertTime,
    .set = PyCThostFtdcExecOrderFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcExecOrderFieldType_get_CancelTime,
    .set = PyCThostFtdcExecOrderFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 执行结果
    /// typedef char TThostFtdcExecResultType
    {
    .name = "ExecResult",
    .get = PyCThostFtdcExecOrderFieldType_get_ExecResult,
    .set = PyCThostFtdcExecOrderFieldType_set_ExecResult,
    .doc = PyDoc_STR("执行结果"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcExecOrderFieldType_get_ClearingPartID,
    .set = PyCThostFtdcExecOrderFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcExecOrderFieldType_get_UserProductInfo,
    .set = PyCThostFtdcExecOrderFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcExecOrderFieldType_get_StatusMsg,
    .set = PyCThostFtdcExecOrderFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcExecOrderFieldType_get_ActiveUserID,
    .set = PyCThostFtdcExecOrderFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExecOrderFieldType_get_BranchID,
    .set = PyCThostFtdcExecOrderFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcExecOrderFieldType_get_InvestUnitID,
    .set = PyCThostFtdcExecOrderFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcExecOrderFieldType_get_AccountID,
    .set = PyCThostFtdcExecOrderFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcExecOrderFieldType_get_CurrencyID,
    .set = PyCThostFtdcExecOrderFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve3",
    .get = PyCThostFtdcExecOrderFieldType_get_reserve3,
    .set = PyCThostFtdcExecOrderFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExecOrderFieldType_get_MacAddress,
    .set = PyCThostFtdcExecOrderFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcExecOrderFieldType_get_InstrumentID,
    .set = PyCThostFtdcExecOrderFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExecOrderFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExecOrderFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExecOrderFieldType_get_IPAddress,
    .set = PyCThostFtdcExecOrderFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExecOrderFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExecOrderField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("执行宣告")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExecOrderFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExecOrderFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExecOrderFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExecOrderFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExecOrderFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExecOrderFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("执行宣告")},
    {Py_tp_members, PyCThostFtdcExecOrderFieldType_members},
    {Py_tp_getset, PyCThostFtdcExecOrderFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExecOrderFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExecOrderFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExecOrderFieldType_spec = {
    .name = "PyCTP.CThostFtdcExecOrderField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExecOrderFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExecOrderFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExecOrderFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExecOrderFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExecOrderFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExecOrderFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExecOrderFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExecOrderFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExecOrderField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExecOrderField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}