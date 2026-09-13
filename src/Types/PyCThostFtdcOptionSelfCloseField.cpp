
#include "PyCThostFtdcOptionSelfCloseField.h"

///期权自对冲

static int PyCThostFtdcOptionSelfCloseFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "OptionSelfCloseRef", "UserID", "Volume", "RequestID", "BusinessUnit", "HedgeFlag", "OptSelfCloseFlag", "OptionSelfCloseLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "OrderSubmitStatus", "NotifySequence", "TradingDay", "SettlementID", "OptionSelfCloseSysID", "InsertDate", "InsertTime", "CancelTime", "ExecResult", "ClearingPartID", "SequenceNo", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerOptionSelfCloseSeq", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcOptionSelfCloseField_BrokerID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcOptionSelfCloseField_InvestorID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcOptionSelfCloseField_reserve1 = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_reserve1_length = 0;

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcOptionSelfCloseField_OptionSelfCloseRef = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_OptionSelfCloseRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOptionSelfCloseField_UserID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_UserID_length = 0;

    /// 数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcOptionSelfCloseField_Volume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcOptionSelfCloseField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcOptionSelfCloseField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_BusinessUnit_length = 0;

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcOptionSelfCloseField_HedgeFlag = 0;

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    char CThostFtdcOptionSelfCloseField_OptSelfCloseFlag = 0;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcOptionSelfCloseField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcOptionSelfCloseField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcOptionSelfCloseField_ClientID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcOptionSelfCloseField_reserve2 = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_reserve2_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcOptionSelfCloseField_TraderID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcOptionSelfCloseField_InstallID = 0;

    /// 期权自对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcOptionSelfCloseField_OrderSubmitStatus = 0;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOptionSelfCloseField_NotifySequence = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOptionSelfCloseField_TradingDay = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcOptionSelfCloseField_SettlementID = 0;

    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID_length = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcOptionSelfCloseField_InsertDate = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOptionSelfCloseField_InsertTime = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcOptionSelfCloseField_CancelTime = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_CancelTime_length = 0;

    /// 自对冲结果
    /// typedef char TThostFtdcExecResultType
    char CThostFtdcOptionSelfCloseField_ExecResult = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcOptionSelfCloseField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOptionSelfCloseField_SequenceNo = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcOptionSelfCloseField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcOptionSelfCloseField_SessionID = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcOptionSelfCloseField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_UserProductInfo_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcOptionSelfCloseField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_StatusMsg_length = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcOptionSelfCloseField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_ActiveUserID_length = 0;

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcOptionSelfCloseField_BrokerOptionSelfCloseSeq = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcOptionSelfCloseField_BranchID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcOptionSelfCloseField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcOptionSelfCloseField_AccountID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcOptionSelfCloseField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_CurrencyID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcOptionSelfCloseField_reserve3 = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_reserve3_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcOptionSelfCloseField_MacAddress = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcOptionSelfCloseField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcOptionSelfCloseField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcOptionSelfCloseField_IPAddress = NULL;
    Py_ssize_t CThostFtdcOptionSelfCloseField_IPAddress_length = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#iiy#ccy#y#y#y#y#y#iciy#iy#y#y#y#cy#iiiy#y#y#iy#y#y#y#y#y#y#y#y#", (char **)kwlist
        , &CThostFtdcOptionSelfCloseField_BrokerID, &CThostFtdcOptionSelfCloseField_BrokerID_length
        , &CThostFtdcOptionSelfCloseField_InvestorID, &CThostFtdcOptionSelfCloseField_InvestorID_length
        , &CThostFtdcOptionSelfCloseField_reserve1, &CThostFtdcOptionSelfCloseField_reserve1_length
        , &CThostFtdcOptionSelfCloseField_OptionSelfCloseRef, &CThostFtdcOptionSelfCloseField_OptionSelfCloseRef_length
        , &CThostFtdcOptionSelfCloseField_UserID, &CThostFtdcOptionSelfCloseField_UserID_length
        , &CThostFtdcOptionSelfCloseField_Volume
        , &CThostFtdcOptionSelfCloseField_RequestID
        , &CThostFtdcOptionSelfCloseField_BusinessUnit, &CThostFtdcOptionSelfCloseField_BusinessUnit_length
        , &CThostFtdcOptionSelfCloseField_HedgeFlag
        , &CThostFtdcOptionSelfCloseField_OptSelfCloseFlag
        , &CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID, &CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID_length
        , &CThostFtdcOptionSelfCloseField_ExchangeID, &CThostFtdcOptionSelfCloseField_ExchangeID_length
        , &CThostFtdcOptionSelfCloseField_ParticipantID, &CThostFtdcOptionSelfCloseField_ParticipantID_length
        , &CThostFtdcOptionSelfCloseField_ClientID, &CThostFtdcOptionSelfCloseField_ClientID_length
        , &CThostFtdcOptionSelfCloseField_reserve2, &CThostFtdcOptionSelfCloseField_reserve2_length
        , &CThostFtdcOptionSelfCloseField_TraderID, &CThostFtdcOptionSelfCloseField_TraderID_length
        , &CThostFtdcOptionSelfCloseField_InstallID
        , &CThostFtdcOptionSelfCloseField_OrderSubmitStatus
        , &CThostFtdcOptionSelfCloseField_NotifySequence
        , &CThostFtdcOptionSelfCloseField_TradingDay, &CThostFtdcOptionSelfCloseField_TradingDay_length
        , &CThostFtdcOptionSelfCloseField_SettlementID
        , &CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID, &CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID_length
        , &CThostFtdcOptionSelfCloseField_InsertDate, &CThostFtdcOptionSelfCloseField_InsertDate_length
        , &CThostFtdcOptionSelfCloseField_InsertTime, &CThostFtdcOptionSelfCloseField_InsertTime_length
        , &CThostFtdcOptionSelfCloseField_CancelTime, &CThostFtdcOptionSelfCloseField_CancelTime_length
        , &CThostFtdcOptionSelfCloseField_ExecResult
        , &CThostFtdcOptionSelfCloseField_ClearingPartID, &CThostFtdcOptionSelfCloseField_ClearingPartID_length
        , &CThostFtdcOptionSelfCloseField_SequenceNo
        , &CThostFtdcOptionSelfCloseField_FrontID
        , &CThostFtdcOptionSelfCloseField_SessionID
        , &CThostFtdcOptionSelfCloseField_UserProductInfo, &CThostFtdcOptionSelfCloseField_UserProductInfo_length
        , &CThostFtdcOptionSelfCloseField_StatusMsg, &CThostFtdcOptionSelfCloseField_StatusMsg_length
        , &CThostFtdcOptionSelfCloseField_ActiveUserID, &CThostFtdcOptionSelfCloseField_ActiveUserID_length
        , &CThostFtdcOptionSelfCloseField_BrokerOptionSelfCloseSeq
        , &CThostFtdcOptionSelfCloseField_BranchID, &CThostFtdcOptionSelfCloseField_BranchID_length
        , &CThostFtdcOptionSelfCloseField_InvestUnitID, &CThostFtdcOptionSelfCloseField_InvestUnitID_length
        , &CThostFtdcOptionSelfCloseField_AccountID, &CThostFtdcOptionSelfCloseField_AccountID_length
        , &CThostFtdcOptionSelfCloseField_CurrencyID, &CThostFtdcOptionSelfCloseField_CurrencyID_length
        , &CThostFtdcOptionSelfCloseField_reserve3, &CThostFtdcOptionSelfCloseField_reserve3_length
        , &CThostFtdcOptionSelfCloseField_MacAddress, &CThostFtdcOptionSelfCloseField_MacAddress_length
        , &CThostFtdcOptionSelfCloseField_InstrumentID, &CThostFtdcOptionSelfCloseField_InstrumentID_length
        , &CThostFtdcOptionSelfCloseField_ExchangeInstID, &CThostFtdcOptionSelfCloseField_ExchangeInstID_length
        , &CThostFtdcOptionSelfCloseField_IPAddress, &CThostFtdcOptionSelfCloseField_IPAddress_length
    )) {
        return -1;
    }

    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcOptionSelfCloseField_BrokerID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcOptionSelfCloseField_BrokerID, CThostFtdcOptionSelfCloseField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcOptionSelfCloseField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcOptionSelfCloseField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcOptionSelfCloseField_InvestorID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcOptionSelfCloseField_InvestorID, CThostFtdcOptionSelfCloseField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcOptionSelfCloseField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcOptionSelfCloseField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcOptionSelfCloseField_reserve1 != NULL ) {
        if(CThostFtdcOptionSelfCloseField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcOptionSelfCloseField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcOptionSelfCloseField_reserve1, CThostFtdcOptionSelfCloseField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcOptionSelfCloseField_reserve1, sizeof(data->reserve1));
        CThostFtdcOptionSelfCloseField_reserve1 = NULL;
    }

    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcOptionSelfCloseField_OptionSelfCloseRef != NULL ) {
        if(CThostFtdcOptionSelfCloseField_OptionSelfCloseRef_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseRef)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseRef too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseField_OptionSelfCloseRef_length);
            return -1;
        }
        // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
        // memcpy(data->OptionSelfCloseRef, CThostFtdcOptionSelfCloseField_OptionSelfCloseRef, CThostFtdcOptionSelfCloseField_OptionSelfCloseRef_length);
        strncpy(data->OptionSelfCloseRef, CThostFtdcOptionSelfCloseField_OptionSelfCloseRef, sizeof(data->OptionSelfCloseRef));
        CThostFtdcOptionSelfCloseField_OptionSelfCloseRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOptionSelfCloseField_UserID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcOptionSelfCloseField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcOptionSelfCloseField_UserID, CThostFtdcOptionSelfCloseField_UserID_length);
        strncpy(data->UserID, CThostFtdcOptionSelfCloseField_UserID, sizeof(data->UserID));
        CThostFtdcOptionSelfCloseField_UserID = NULL;
    }

    /// 数量
    /// typedef int TThostFtdcVolumeType
    data->Volume = CThostFtdcOptionSelfCloseField_Volume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcOptionSelfCloseField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcOptionSelfCloseField_BusinessUnit != NULL ) {
        if(CThostFtdcOptionSelfCloseField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcOptionSelfCloseField_BusinessUnit, CThostFtdcOptionSelfCloseField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcOptionSelfCloseField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcOptionSelfCloseField_BusinessUnit = NULL;
    }

    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->HedgeFlag = CThostFtdcOptionSelfCloseField_HedgeFlag;

    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    data->OptSelfCloseFlag = CThostFtdcOptionSelfCloseField_OptSelfCloseFlag;

    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseLocalID too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
        // memcpy(data->OptionSelfCloseLocalID, CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID, CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID_length);
        strncpy(data->OptionSelfCloseLocalID, CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID, sizeof(data->OptionSelfCloseLocalID));
        CThostFtdcOptionSelfCloseField_OptionSelfCloseLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcOptionSelfCloseField_ExchangeID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcOptionSelfCloseField_ExchangeID, CThostFtdcOptionSelfCloseField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcOptionSelfCloseField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcOptionSelfCloseField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcOptionSelfCloseField_ParticipantID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcOptionSelfCloseField_ParticipantID, CThostFtdcOptionSelfCloseField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcOptionSelfCloseField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcOptionSelfCloseField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcOptionSelfCloseField_ClientID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcOptionSelfCloseField_ClientID, CThostFtdcOptionSelfCloseField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcOptionSelfCloseField_ClientID, sizeof(data->ClientID));
        CThostFtdcOptionSelfCloseField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcOptionSelfCloseField_reserve2 != NULL ) {
        if(CThostFtdcOptionSelfCloseField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcOptionSelfCloseField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcOptionSelfCloseField_reserve2, CThostFtdcOptionSelfCloseField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcOptionSelfCloseField_reserve2, sizeof(data->reserve2));
        CThostFtdcOptionSelfCloseField_reserve2 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcOptionSelfCloseField_TraderID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcOptionSelfCloseField_TraderID, CThostFtdcOptionSelfCloseField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcOptionSelfCloseField_TraderID, sizeof(data->TraderID));
        CThostFtdcOptionSelfCloseField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcOptionSelfCloseField_InstallID;

    /// 期权自对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcOptionSelfCloseField_OrderSubmitStatus;

    /// 报单提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcOptionSelfCloseField_NotifySequence;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOptionSelfCloseField_TradingDay != NULL ) {
        if(CThostFtdcOptionSelfCloseField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcOptionSelfCloseField_TradingDay, CThostFtdcOptionSelfCloseField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcOptionSelfCloseField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcOptionSelfCloseField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcOptionSelfCloseField_SettlementID;

    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID_length >= (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)) {
            PyErr_Format(PyExc_ValueError, "OptionSelfCloseSysID too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID_length);
            return -1;
        }
        // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
        // memcpy(data->OptionSelfCloseSysID, CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID, CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID_length);
        strncpy(data->OptionSelfCloseSysID, CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID, sizeof(data->OptionSelfCloseSysID));
        CThostFtdcOptionSelfCloseField_OptionSelfCloseSysID = NULL;
    }

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcOptionSelfCloseField_InsertDate != NULL ) {
        if(CThostFtdcOptionSelfCloseField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcOptionSelfCloseField_InsertDate, CThostFtdcOptionSelfCloseField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcOptionSelfCloseField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcOptionSelfCloseField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOptionSelfCloseField_InsertTime != NULL ) {
        if(CThostFtdcOptionSelfCloseField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcOptionSelfCloseField_InsertTime, CThostFtdcOptionSelfCloseField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcOptionSelfCloseField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcOptionSelfCloseField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcOptionSelfCloseField_CancelTime != NULL ) {
        if(CThostFtdcOptionSelfCloseField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcOptionSelfCloseField_CancelTime, CThostFtdcOptionSelfCloseField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcOptionSelfCloseField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcOptionSelfCloseField_CancelTime = NULL;
    }

    /// 自对冲结果
    /// typedef char TThostFtdcExecResultType
    data->ExecResult = CThostFtdcOptionSelfCloseField_ExecResult;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcOptionSelfCloseField_ClearingPartID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcOptionSelfCloseField_ClearingPartID, CThostFtdcOptionSelfCloseField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcOptionSelfCloseField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcOptionSelfCloseField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcOptionSelfCloseField_SequenceNo;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcOptionSelfCloseField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcOptionSelfCloseField_SessionID;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcOptionSelfCloseField_UserProductInfo != NULL ) {
        if(CThostFtdcOptionSelfCloseField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcOptionSelfCloseField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcOptionSelfCloseField_UserProductInfo, CThostFtdcOptionSelfCloseField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcOptionSelfCloseField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcOptionSelfCloseField_UserProductInfo = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcOptionSelfCloseField_StatusMsg != NULL ) {
        if(CThostFtdcOptionSelfCloseField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcOptionSelfCloseField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcOptionSelfCloseField_StatusMsg, CThostFtdcOptionSelfCloseField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcOptionSelfCloseField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcOptionSelfCloseField_StatusMsg = NULL;
    }

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcOptionSelfCloseField_ActiveUserID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcOptionSelfCloseField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcOptionSelfCloseField_ActiveUserID, CThostFtdcOptionSelfCloseField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcOptionSelfCloseField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcOptionSelfCloseField_ActiveUserID = NULL;
    }

    /// 经纪公司报单编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerOptionSelfCloseSeq = CThostFtdcOptionSelfCloseField_BrokerOptionSelfCloseSeq;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcOptionSelfCloseField_BranchID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcOptionSelfCloseField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcOptionSelfCloseField_BranchID, CThostFtdcOptionSelfCloseField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcOptionSelfCloseField_BranchID, sizeof(data->BranchID));
        CThostFtdcOptionSelfCloseField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcOptionSelfCloseField_InvestUnitID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcOptionSelfCloseField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcOptionSelfCloseField_InvestUnitID, CThostFtdcOptionSelfCloseField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcOptionSelfCloseField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcOptionSelfCloseField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcOptionSelfCloseField_AccountID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcOptionSelfCloseField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcOptionSelfCloseField_AccountID, CThostFtdcOptionSelfCloseField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcOptionSelfCloseField_AccountID, sizeof(data->AccountID));
        CThostFtdcOptionSelfCloseField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcOptionSelfCloseField_CurrencyID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcOptionSelfCloseField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcOptionSelfCloseField_CurrencyID, CThostFtdcOptionSelfCloseField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcOptionSelfCloseField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcOptionSelfCloseField_CurrencyID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcOptionSelfCloseField_reserve3 != NULL ) {
        if(CThostFtdcOptionSelfCloseField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 15)", CThostFtdcOptionSelfCloseField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcOptionSelfCloseField_reserve3, CThostFtdcOptionSelfCloseField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcOptionSelfCloseField_reserve3, sizeof(data->reserve3));
        CThostFtdcOptionSelfCloseField_reserve3 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcOptionSelfCloseField_MacAddress != NULL ) {
        if(CThostFtdcOptionSelfCloseField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcOptionSelfCloseField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcOptionSelfCloseField_MacAddress, CThostFtdcOptionSelfCloseField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcOptionSelfCloseField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcOptionSelfCloseField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcOptionSelfCloseField_InstrumentID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcOptionSelfCloseField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcOptionSelfCloseField_InstrumentID, CThostFtdcOptionSelfCloseField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcOptionSelfCloseField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcOptionSelfCloseField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcOptionSelfCloseField_ExchangeInstID != NULL ) {
        if(CThostFtdcOptionSelfCloseField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcOptionSelfCloseField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcOptionSelfCloseField_ExchangeInstID, CThostFtdcOptionSelfCloseField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcOptionSelfCloseField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcOptionSelfCloseField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcOptionSelfCloseField_IPAddress != NULL ) {
        if(CThostFtdcOptionSelfCloseField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcOptionSelfCloseField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcOptionSelfCloseField_IPAddress, CThostFtdcOptionSelfCloseField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcOptionSelfCloseField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcOptionSelfCloseField_IPAddress = NULL;
    }

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcOptionSelfCloseFieldType_repr(PyObject *self) {

    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:y,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:c,s:i,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "OptionSelfCloseRef", data->OptionSelfCloseRef//, (Py_ssize_t)sizeof(data->OptionSelfCloseRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "Volume", data->Volume
        , "RequestID", data->RequestID
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "HedgeFlag", data->HedgeFlag
        , "OptSelfCloseFlag", data->OptSelfCloseFlag
        , "OptionSelfCloseLocalID", data->OptionSelfCloseLocalID//, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID)
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
        , "OptionSelfCloseSysID", data->OptionSelfCloseSysID//, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID)
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
        , "BrokerOptionSelfCloseSeq", data->BrokerOptionSelfCloseSeq
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
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcOptionSelfCloseField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_OptionSelfCloseRef(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseRef, (Py_ssize_t)sizeof(data->OptionSelfCloseRef));
    return PyBytes_FromString(data->OptionSelfCloseRef);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_OptionSelfCloseRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::OptionSelfCloseRef)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->OptionSelfCloseRef, 0, sizeof(data->OptionSelfCloseRef));
    // memcpy(data->OptionSelfCloseRef, buf, len);
    strncpy(data->OptionSelfCloseRef, buf, sizeof(data->OptionSelfCloseRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_HedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->HedgeFlag), 1);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_HedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "HedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::HedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "HedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    data->HedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权行权的头寸是否自对冲
/// typedef char TThostFtdcOptSelfCloseFlagType
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_OptSelfCloseFlag(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OptSelfCloseFlag), 1);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_OptSelfCloseFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptSelfCloseFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::OptSelfCloseFlag)) {
        PyErr_SetString(PyExc_ValueError, "OptSelfCloseFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    data->OptSelfCloseFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地期权自对冲编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_OptionSelfCloseLocalID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseLocalID, (Py_ssize_t)sizeof(data->OptionSelfCloseLocalID));
    return PyBytes_FromString(data->OptionSelfCloseLocalID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_OptionSelfCloseLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::OptionSelfCloseLocalID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->OptionSelfCloseLocalID, 0, sizeof(data->OptionSelfCloseLocalID));
    // memcpy(data->OptionSelfCloseLocalID, buf, len);
    strncpy(data->OptionSelfCloseLocalID, buf, sizeof(data->OptionSelfCloseLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 期权自对冲编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_OptionSelfCloseSysID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OptionSelfCloseSysID, (Py_ssize_t)sizeof(data->OptionSelfCloseSysID));
    return PyBytes_FromString(data->OptionSelfCloseSysID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_OptionSelfCloseSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OptionSelfCloseSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::OptionSelfCloseSysID)) {
        PyErr_SetString(PyExc_ValueError, "OptionSelfCloseSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->OptionSelfCloseSysID, 0, sizeof(data->OptionSelfCloseSysID));
    // memcpy(data->OptionSelfCloseSysID, buf, len);
    strncpy(data->OptionSelfCloseSysID, buf, sizeof(data->OptionSelfCloseSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 自对冲结果
/// typedef char TThostFtdcExecResultType
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_ExecResult(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->ExecResult), 1);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_ExecResult(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExecResult Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::ExecResult)) {
        PyErr_SetString(PyExc_ValueError, "ExecResult must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    data->ExecResult = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcOptionSelfCloseFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcOptionSelfCloseFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcOptionSelfCloseField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcOptionSelfCloseFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcOptionSelfCloseFieldData>(self);
    CThostFtdcOptionSelfCloseField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcOptionSelfCloseFieldType_members[] = {
    /// 数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "Volume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.Volume),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.SequenceNo),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.SessionID),
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
        .name = "BrokerOptionSelfCloseSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcOptionSelfCloseFieldData, data.BrokerOptionSelfCloseSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司报单编号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcOptionSelfCloseFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_BrokerID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_InvestorID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_reserve1,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 期权自对冲引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "OptionSelfCloseRef",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_OptionSelfCloseRef,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_OptionSelfCloseRef,
    .doc = PyDoc_STR("期权自对冲引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_UserID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_BusinessUnit,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "HedgeFlag",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_HedgeFlag,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_HedgeFlag,
    .doc = PyDoc_STR("投机套保标志"),
    },
    /// 期权行权的头寸是否自对冲
    /// typedef char TThostFtdcOptSelfCloseFlagType
    {
    .name = "OptSelfCloseFlag",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_OptSelfCloseFlag,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_OptSelfCloseFlag,
    .doc = PyDoc_STR("期权行权的头寸是否自对冲"),
    },
    /// 本地期权自对冲编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "OptionSelfCloseLocalID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_OptionSelfCloseLocalID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_OptionSelfCloseLocalID,
    .doc = PyDoc_STR("本地期权自对冲编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_ExchangeID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_ParticipantID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_ClientID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_reserve2,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_TraderID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 期权自对冲提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("期权自对冲提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_TradingDay,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 期权自对冲编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "OptionSelfCloseSysID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_OptionSelfCloseSysID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_OptionSelfCloseSysID,
    .doc = PyDoc_STR("期权自对冲编号"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_InsertDate,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_InsertTime,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_CancelTime,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 自对冲结果
    /// typedef char TThostFtdcExecResultType
    {
    .name = "ExecResult",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_ExecResult,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_ExecResult,
    .doc = PyDoc_STR("自对冲结果"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_ClearingPartID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_UserProductInfo,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_StatusMsg,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_ActiveUserID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_BranchID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_InvestUnitID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_AccountID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_CurrencyID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve3",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_reserve3,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_MacAddress,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_InstrumentID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcOptionSelfCloseFieldType_get_IPAddress,
    .set = PyCThostFtdcOptionSelfCloseFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcOptionSelfCloseFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcOptionSelfCloseField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("期权自对冲")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcOptionSelfCloseFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcOptionSelfCloseFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcOptionSelfCloseFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcOptionSelfCloseFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcOptionSelfCloseFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcOptionSelfCloseFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("期权自对冲")},
    {Py_tp_members, PyCThostFtdcOptionSelfCloseFieldType_members},
    {Py_tp_getset, PyCThostFtdcOptionSelfCloseFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcOptionSelfCloseFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcOptionSelfCloseFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcOptionSelfCloseFieldType_spec = {
    .name = "PyCTP.CThostFtdcOptionSelfCloseField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcOptionSelfCloseFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcOptionSelfCloseFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcOptionSelfCloseFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcOptionSelfCloseFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcOptionSelfCloseFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcOptionSelfCloseFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcOptionSelfCloseFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcOptionSelfCloseFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcOptionSelfCloseField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcOptionSelfCloseField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}