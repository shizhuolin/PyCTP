
#include "PyCThostFtdcQuoteField.h"

///报价

static int PyCThostFtdcQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "BrokerID", "InvestorID", "reserve1", "QuoteRef", "UserID", "AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "QuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve2", "TraderID", "InstallID", "NotifySequence", "OrderSubmitStatus", "TradingDay", "SettlementID", "QuoteSysID", "InsertDate", "InsertTime", "CancelTime", "QuoteStatus", "ClearingPartID", "SequenceNo", "AskOrderSysID", "BidOrderSysID", "FrontID", "SessionID", "UserProductInfo", "StatusMsg", "ActiveUserID", "BrokerQuoteSeq", "AskOrderRef", "BidOrderRef", "ForQuoteSysID", "BranchID", "InvestUnitID", "AccountID", "CurrencyID", "reserve3", "MacAddress", "InstrumentID", "ExchangeInstID", "IPAddress", "ReplaceSysID", "TimeCondition", "OrderMemo", "SessionReqSeq", NULL };


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    char *CThostFtdcQuoteField_BrokerID = NULL;
    Py_ssize_t CThostFtdcQuoteField_BrokerID_length = 0;

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    char *CThostFtdcQuoteField_InvestorID = NULL;
    Py_ssize_t CThostFtdcQuoteField_InvestorID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    char *CThostFtdcQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcQuoteField_reserve1_length = 0;

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcQuoteField_QuoteRef = NULL;
    Py_ssize_t CThostFtdcQuoteField_QuoteRef_length = 0;

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQuoteField_UserID = NULL;
    Py_ssize_t CThostFtdcQuoteField_UserID_length = 0;

    /// 卖价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcQuoteField_AskPrice = 0.0;

    /// 买价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcQuoteField_BidPrice = 0.0;

    /// 卖数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcQuoteField_AskVolume = 0;

    /// 买数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcQuoteField_BidVolume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcQuoteField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcQuoteField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcQuoteField_BusinessUnit_length = 0;

    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcQuoteField_AskOffsetFlag = 0;

    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcQuoteField_BidOffsetFlag = 0;

    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQuoteField_AskHedgeFlag = 0;

    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcQuoteField_BidHedgeFlag = 0;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcQuoteField_QuoteLocalID = NULL;
    Py_ssize_t CThostFtdcQuoteField_QuoteLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQuoteField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcQuoteField_ClientID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcQuoteField_reserve2 = NULL;
    Py_ssize_t CThostFtdcQuoteField_reserve2_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcQuoteField_TraderID = NULL;
    Py_ssize_t CThostFtdcQuoteField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcQuoteField_InstallID = 0;

    /// 报价提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcQuoteField_NotifySequence = 0;

    /// 报价提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcQuoteField_OrderSubmitStatus = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcQuoteField_TradingDay = NULL;
    Py_ssize_t CThostFtdcQuoteField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcQuoteField_SettlementID = 0;

    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQuoteField_QuoteSysID = NULL;
    Py_ssize_t CThostFtdcQuoteField_QuoteSysID_length = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcQuoteField_InsertDate = NULL;
    Py_ssize_t CThostFtdcQuoteField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQuoteField_InsertTime = NULL;
    Py_ssize_t CThostFtdcQuoteField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcQuoteField_CancelTime = NULL;
    Py_ssize_t CThostFtdcQuoteField_CancelTime_length = 0;

    /// 报价状态
    /// typedef char TThostFtdcOrderStatusType
    char CThostFtdcQuoteField_QuoteStatus = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcQuoteField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcQuoteField_SequenceNo = 0;

    /// 卖方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQuoteField_AskOrderSysID = NULL;
    Py_ssize_t CThostFtdcQuoteField_AskOrderSysID_length = 0;

    /// 买方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQuoteField_BidOrderSysID = NULL;
    Py_ssize_t CThostFtdcQuoteField_BidOrderSysID_length = 0;

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    int CThostFtdcQuoteField_FrontID = 0;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    int CThostFtdcQuoteField_SessionID = 0;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    char *CThostFtdcQuoteField_UserProductInfo = NULL;
    Py_ssize_t CThostFtdcQuoteField_UserProductInfo_length = 0;

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    char *CThostFtdcQuoteField_StatusMsg = NULL;
    Py_ssize_t CThostFtdcQuoteField_StatusMsg_length = 0;

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    char *CThostFtdcQuoteField_ActiveUserID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ActiveUserID_length = 0;

    /// 经纪公司报价编号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcQuoteField_BrokerQuoteSeq = 0;

    /// 衍生卖报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcQuoteField_AskOrderRef = NULL;
    Py_ssize_t CThostFtdcQuoteField_AskOrderRef_length = 0;

    /// 衍生买报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    char *CThostFtdcQuoteField_BidOrderRef = NULL;
    Py_ssize_t CThostFtdcQuoteField_BidOrderRef_length = 0;

    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQuoteField_ForQuoteSysID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ForQuoteSysID_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcQuoteField_BranchID = NULL;
    Py_ssize_t CThostFtdcQuoteField_BranchID_length = 0;

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    char *CThostFtdcQuoteField_InvestUnitID = NULL;
    Py_ssize_t CThostFtdcQuoteField_InvestUnitID_length = 0;

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    char *CThostFtdcQuoteField_AccountID = NULL;
    Py_ssize_t CThostFtdcQuoteField_AccountID_length = 0;

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    char *CThostFtdcQuoteField_CurrencyID = NULL;
    Py_ssize_t CThostFtdcQuoteField_CurrencyID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcQuoteField_reserve3 = NULL;
    Py_ssize_t CThostFtdcQuoteField_reserve3_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcQuoteField_MacAddress = NULL;
    Py_ssize_t CThostFtdcQuoteField_MacAddress_length = 0;

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    char *CThostFtdcQuoteField_InstrumentID = NULL;
    Py_ssize_t CThostFtdcQuoteField_InstrumentID_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcQuoteField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcQuoteField_IPAddress = NULL;
    Py_ssize_t CThostFtdcQuoteField_IPAddress_length = 0;

    /// 被顶单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcQuoteField_ReplaceSysID = NULL;
    Py_ssize_t CThostFtdcQuoteField_ReplaceSysID_length = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcQuoteField_TimeCondition = 0;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    char *CThostFtdcQuoteField_OrderMemo = NULL;
    Py_ssize_t CThostFtdcQuoteField_OrderMemo_length = 0;

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    int CThostFtdcQuoteField_SessionReqSeq = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|y#y#y#y#y#ddiiiy#ccccy#y#y#y#y#y#iicy#iy#y#y#y#cy#iy#y#iiy#y#y#iy#y#y#y#y#y#y#y#y#y#y#y#y#cy#i", (char **)kwlist
        , &CThostFtdcQuoteField_BrokerID, &CThostFtdcQuoteField_BrokerID_length
        , &CThostFtdcQuoteField_InvestorID, &CThostFtdcQuoteField_InvestorID_length
        , &CThostFtdcQuoteField_reserve1, &CThostFtdcQuoteField_reserve1_length
        , &CThostFtdcQuoteField_QuoteRef, &CThostFtdcQuoteField_QuoteRef_length
        , &CThostFtdcQuoteField_UserID, &CThostFtdcQuoteField_UserID_length
        , &CThostFtdcQuoteField_AskPrice
        , &CThostFtdcQuoteField_BidPrice
        , &CThostFtdcQuoteField_AskVolume
        , &CThostFtdcQuoteField_BidVolume
        , &CThostFtdcQuoteField_RequestID
        , &CThostFtdcQuoteField_BusinessUnit, &CThostFtdcQuoteField_BusinessUnit_length
        , &CThostFtdcQuoteField_AskOffsetFlag
        , &CThostFtdcQuoteField_BidOffsetFlag
        , &CThostFtdcQuoteField_AskHedgeFlag
        , &CThostFtdcQuoteField_BidHedgeFlag
        , &CThostFtdcQuoteField_QuoteLocalID, &CThostFtdcQuoteField_QuoteLocalID_length
        , &CThostFtdcQuoteField_ExchangeID, &CThostFtdcQuoteField_ExchangeID_length
        , &CThostFtdcQuoteField_ParticipantID, &CThostFtdcQuoteField_ParticipantID_length
        , &CThostFtdcQuoteField_ClientID, &CThostFtdcQuoteField_ClientID_length
        , &CThostFtdcQuoteField_reserve2, &CThostFtdcQuoteField_reserve2_length
        , &CThostFtdcQuoteField_TraderID, &CThostFtdcQuoteField_TraderID_length
        , &CThostFtdcQuoteField_InstallID
        , &CThostFtdcQuoteField_NotifySequence
        , &CThostFtdcQuoteField_OrderSubmitStatus
        , &CThostFtdcQuoteField_TradingDay, &CThostFtdcQuoteField_TradingDay_length
        , &CThostFtdcQuoteField_SettlementID
        , &CThostFtdcQuoteField_QuoteSysID, &CThostFtdcQuoteField_QuoteSysID_length
        , &CThostFtdcQuoteField_InsertDate, &CThostFtdcQuoteField_InsertDate_length
        , &CThostFtdcQuoteField_InsertTime, &CThostFtdcQuoteField_InsertTime_length
        , &CThostFtdcQuoteField_CancelTime, &CThostFtdcQuoteField_CancelTime_length
        , &CThostFtdcQuoteField_QuoteStatus
        , &CThostFtdcQuoteField_ClearingPartID, &CThostFtdcQuoteField_ClearingPartID_length
        , &CThostFtdcQuoteField_SequenceNo
        , &CThostFtdcQuoteField_AskOrderSysID, &CThostFtdcQuoteField_AskOrderSysID_length
        , &CThostFtdcQuoteField_BidOrderSysID, &CThostFtdcQuoteField_BidOrderSysID_length
        , &CThostFtdcQuoteField_FrontID
        , &CThostFtdcQuoteField_SessionID
        , &CThostFtdcQuoteField_UserProductInfo, &CThostFtdcQuoteField_UserProductInfo_length
        , &CThostFtdcQuoteField_StatusMsg, &CThostFtdcQuoteField_StatusMsg_length
        , &CThostFtdcQuoteField_ActiveUserID, &CThostFtdcQuoteField_ActiveUserID_length
        , &CThostFtdcQuoteField_BrokerQuoteSeq
        , &CThostFtdcQuoteField_AskOrderRef, &CThostFtdcQuoteField_AskOrderRef_length
        , &CThostFtdcQuoteField_BidOrderRef, &CThostFtdcQuoteField_BidOrderRef_length
        , &CThostFtdcQuoteField_ForQuoteSysID, &CThostFtdcQuoteField_ForQuoteSysID_length
        , &CThostFtdcQuoteField_BranchID, &CThostFtdcQuoteField_BranchID_length
        , &CThostFtdcQuoteField_InvestUnitID, &CThostFtdcQuoteField_InvestUnitID_length
        , &CThostFtdcQuoteField_AccountID, &CThostFtdcQuoteField_AccountID_length
        , &CThostFtdcQuoteField_CurrencyID, &CThostFtdcQuoteField_CurrencyID_length
        , &CThostFtdcQuoteField_reserve3, &CThostFtdcQuoteField_reserve3_length
        , &CThostFtdcQuoteField_MacAddress, &CThostFtdcQuoteField_MacAddress_length
        , &CThostFtdcQuoteField_InstrumentID, &CThostFtdcQuoteField_InstrumentID_length
        , &CThostFtdcQuoteField_ExchangeInstID, &CThostFtdcQuoteField_ExchangeInstID_length
        , &CThostFtdcQuoteField_IPAddress, &CThostFtdcQuoteField_IPAddress_length
        , &CThostFtdcQuoteField_ReplaceSysID, &CThostFtdcQuoteField_ReplaceSysID_length
        , &CThostFtdcQuoteField_TimeCondition
        , &CThostFtdcQuoteField_OrderMemo, &CThostFtdcQuoteField_OrderMemo_length
        , &CThostFtdcQuoteField_SessionReqSeq
    )) {
        return -1;
    }

    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);


    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    if( CThostFtdcQuoteField_BrokerID != NULL ) {
        if(CThostFtdcQuoteField_BrokerID_length >= (Py_ssize_t)sizeof(data->BrokerID)) {
            PyErr_Format(PyExc_ValueError, "BrokerID too long: length=%zd (max allowed is 10)", CThostFtdcQuoteField_BrokerID_length);
            return -1;
        }
        // memset(data->BrokerID, 0, sizeof(data->BrokerID));
        // memcpy(data->BrokerID, CThostFtdcQuoteField_BrokerID, CThostFtdcQuoteField_BrokerID_length);
        strncpy(data->BrokerID, CThostFtdcQuoteField_BrokerID, sizeof(data->BrokerID));
        CThostFtdcQuoteField_BrokerID = NULL;
    }

    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    if( CThostFtdcQuoteField_InvestorID != NULL ) {
        if(CThostFtdcQuoteField_InvestorID_length >= (Py_ssize_t)sizeof(data->InvestorID)) {
            PyErr_Format(PyExc_ValueError, "InvestorID too long: length=%zd (max allowed is 12)", CThostFtdcQuoteField_InvestorID_length);
            return -1;
        }
        // memset(data->InvestorID, 0, sizeof(data->InvestorID));
        // memcpy(data->InvestorID, CThostFtdcQuoteField_InvestorID, CThostFtdcQuoteField_InvestorID_length);
        strncpy(data->InvestorID, CThostFtdcQuoteField_InvestorID, sizeof(data->InvestorID));
        CThostFtdcQuoteField_InvestorID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    if( CThostFtdcQuoteField_reserve1 != NULL ) {
        if(CThostFtdcQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcQuoteField_reserve1, CThostFtdcQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcQuoteField_reserve1 = NULL;
    }

    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcQuoteField_QuoteRef != NULL ) {
        if(CThostFtdcQuoteField_QuoteRef_length >= (Py_ssize_t)sizeof(data->QuoteRef)) {
            PyErr_Format(PyExc_ValueError, "QuoteRef too long: length=%zd (max allowed is 12)", CThostFtdcQuoteField_QuoteRef_length);
            return -1;
        }
        // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
        // memcpy(data->QuoteRef, CThostFtdcQuoteField_QuoteRef, CThostFtdcQuoteField_QuoteRef_length);
        strncpy(data->QuoteRef, CThostFtdcQuoteField_QuoteRef, sizeof(data->QuoteRef));
        CThostFtdcQuoteField_QuoteRef = NULL;
    }

    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQuoteField_UserID != NULL ) {
        if(CThostFtdcQuoteField_UserID_length >= (Py_ssize_t)sizeof(data->UserID)) {
            PyErr_Format(PyExc_ValueError, "UserID too long: length=%zd (max allowed is 15)", CThostFtdcQuoteField_UserID_length);
            return -1;
        }
        // memset(data->UserID, 0, sizeof(data->UserID));
        // memcpy(data->UserID, CThostFtdcQuoteField_UserID, CThostFtdcQuoteField_UserID_length);
        strncpy(data->UserID, CThostFtdcQuoteField_UserID, sizeof(data->UserID));
        CThostFtdcQuoteField_UserID = NULL;
    }

    /// 卖价格
    /// typedef double TThostFtdcPriceType
    data->AskPrice = CThostFtdcQuoteField_AskPrice;

    /// 买价格
    /// typedef double TThostFtdcPriceType
    data->BidPrice = CThostFtdcQuoteField_BidPrice;

    /// 卖数量
    /// typedef int TThostFtdcVolumeType
    data->AskVolume = CThostFtdcQuoteField_AskVolume;

    /// 买数量
    /// typedef int TThostFtdcVolumeType
    data->BidVolume = CThostFtdcQuoteField_BidVolume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcQuoteField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcQuoteField_BusinessUnit != NULL ) {
        if(CThostFtdcQuoteField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcQuoteField_BusinessUnit, CThostFtdcQuoteField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcQuoteField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcQuoteField_BusinessUnit = NULL;
    }

    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->AskOffsetFlag = CThostFtdcQuoteField_AskOffsetFlag;

    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->BidOffsetFlag = CThostFtdcQuoteField_BidOffsetFlag;

    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->AskHedgeFlag = CThostFtdcQuoteField_AskHedgeFlag;

    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->BidHedgeFlag = CThostFtdcQuoteField_BidHedgeFlag;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcQuoteField_QuoteLocalID != NULL ) {
        if(CThostFtdcQuoteField_QuoteLocalID_length >= (Py_ssize_t)sizeof(data->QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is 12)", CThostFtdcQuoteField_QuoteLocalID_length);
            return -1;
        }
        // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
        // memcpy(data->QuoteLocalID, CThostFtdcQuoteField_QuoteLocalID, CThostFtdcQuoteField_QuoteLocalID_length);
        strncpy(data->QuoteLocalID, CThostFtdcQuoteField_QuoteLocalID, sizeof(data->QuoteLocalID));
        CThostFtdcQuoteField_QuoteLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcQuoteField_ExchangeID, CThostFtdcQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcQuoteField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQuoteField_ParticipantID != NULL ) {
        if(CThostFtdcQuoteField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcQuoteField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcQuoteField_ParticipantID, CThostFtdcQuoteField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcQuoteField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcQuoteField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcQuoteField_ClientID != NULL ) {
        if(CThostFtdcQuoteField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcQuoteField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcQuoteField_ClientID, CThostFtdcQuoteField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcQuoteField_ClientID, sizeof(data->ClientID));
        CThostFtdcQuoteField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcQuoteField_reserve2 != NULL ) {
        if(CThostFtdcQuoteField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 30)", CThostFtdcQuoteField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcQuoteField_reserve2, CThostFtdcQuoteField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcQuoteField_reserve2, sizeof(data->reserve2));
        CThostFtdcQuoteField_reserve2 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcQuoteField_TraderID != NULL ) {
        if(CThostFtdcQuoteField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcQuoteField_TraderID, CThostFtdcQuoteField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcQuoteField_TraderID, sizeof(data->TraderID));
        CThostFtdcQuoteField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcQuoteField_InstallID;

    /// 报价提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcQuoteField_NotifySequence;

    /// 报价提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcQuoteField_OrderSubmitStatus;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcQuoteField_TradingDay != NULL ) {
        if(CThostFtdcQuoteField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcQuoteField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcQuoteField_TradingDay, CThostFtdcQuoteField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcQuoteField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcQuoteField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcQuoteField_SettlementID;

    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQuoteField_QuoteSysID != NULL ) {
        if(CThostFtdcQuoteField_QuoteSysID_length >= (Py_ssize_t)sizeof(data->QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_QuoteSysID_length);
            return -1;
        }
        // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
        // memcpy(data->QuoteSysID, CThostFtdcQuoteField_QuoteSysID, CThostFtdcQuoteField_QuoteSysID_length);
        strncpy(data->QuoteSysID, CThostFtdcQuoteField_QuoteSysID, sizeof(data->QuoteSysID));
        CThostFtdcQuoteField_QuoteSysID = NULL;
    }

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcQuoteField_InsertDate != NULL ) {
        if(CThostFtdcQuoteField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcQuoteField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcQuoteField_InsertDate, CThostFtdcQuoteField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcQuoteField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcQuoteField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQuoteField_InsertTime != NULL ) {
        if(CThostFtdcQuoteField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcQuoteField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcQuoteField_InsertTime, CThostFtdcQuoteField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcQuoteField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcQuoteField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcQuoteField_CancelTime != NULL ) {
        if(CThostFtdcQuoteField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcQuoteField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcQuoteField_CancelTime, CThostFtdcQuoteField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcQuoteField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcQuoteField_CancelTime = NULL;
    }

    /// 报价状态
    /// typedef char TThostFtdcOrderStatusType
    data->QuoteStatus = CThostFtdcQuoteField_QuoteStatus;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcQuoteField_ClearingPartID != NULL ) {
        if(CThostFtdcQuoteField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcQuoteField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcQuoteField_ClearingPartID, CThostFtdcQuoteField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcQuoteField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcQuoteField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcQuoteField_SequenceNo;

    /// 卖方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQuoteField_AskOrderSysID != NULL ) {
        if(CThostFtdcQuoteField_AskOrderSysID_length >= (Py_ssize_t)sizeof(data->AskOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "AskOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_AskOrderSysID_length);
            return -1;
        }
        // memset(data->AskOrderSysID, 0, sizeof(data->AskOrderSysID));
        // memcpy(data->AskOrderSysID, CThostFtdcQuoteField_AskOrderSysID, CThostFtdcQuoteField_AskOrderSysID_length);
        strncpy(data->AskOrderSysID, CThostFtdcQuoteField_AskOrderSysID, sizeof(data->AskOrderSysID));
        CThostFtdcQuoteField_AskOrderSysID = NULL;
    }

    /// 买方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQuoteField_BidOrderSysID != NULL ) {
        if(CThostFtdcQuoteField_BidOrderSysID_length >= (Py_ssize_t)sizeof(data->BidOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "BidOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_BidOrderSysID_length);
            return -1;
        }
        // memset(data->BidOrderSysID, 0, sizeof(data->BidOrderSysID));
        // memcpy(data->BidOrderSysID, CThostFtdcQuoteField_BidOrderSysID, CThostFtdcQuoteField_BidOrderSysID_length);
        strncpy(data->BidOrderSysID, CThostFtdcQuoteField_BidOrderSysID, sizeof(data->BidOrderSysID));
        CThostFtdcQuoteField_BidOrderSysID = NULL;
    }

    /// 前置编号
    /// typedef int TThostFtdcFrontIDType
    data->FrontID = CThostFtdcQuoteField_FrontID;

    /// 会话编号
    /// typedef int TThostFtdcSessionIDType
    data->SessionID = CThostFtdcQuoteField_SessionID;

    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    if( CThostFtdcQuoteField_UserProductInfo != NULL ) {
        if(CThostFtdcQuoteField_UserProductInfo_length >= (Py_ssize_t)sizeof(data->UserProductInfo)) {
            PyErr_Format(PyExc_ValueError, "UserProductInfo too long: length=%zd (max allowed is 10)", CThostFtdcQuoteField_UserProductInfo_length);
            return -1;
        }
        // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
        // memcpy(data->UserProductInfo, CThostFtdcQuoteField_UserProductInfo, CThostFtdcQuoteField_UserProductInfo_length);
        strncpy(data->UserProductInfo, CThostFtdcQuoteField_UserProductInfo, sizeof(data->UserProductInfo));
        CThostFtdcQuoteField_UserProductInfo = NULL;
    }

    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    if( CThostFtdcQuoteField_StatusMsg != NULL ) {
        if(CThostFtdcQuoteField_StatusMsg_length >= (Py_ssize_t)sizeof(data->StatusMsg)) {
            PyErr_Format(PyExc_ValueError, "StatusMsg too long: length=%zd (max allowed is 80)", CThostFtdcQuoteField_StatusMsg_length);
            return -1;
        }
        // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
        // memcpy(data->StatusMsg, CThostFtdcQuoteField_StatusMsg, CThostFtdcQuoteField_StatusMsg_length);
        strncpy(data->StatusMsg, CThostFtdcQuoteField_StatusMsg, sizeof(data->StatusMsg));
        CThostFtdcQuoteField_StatusMsg = NULL;
    }

    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    if( CThostFtdcQuoteField_ActiveUserID != NULL ) {
        if(CThostFtdcQuoteField_ActiveUserID_length >= (Py_ssize_t)sizeof(data->ActiveUserID)) {
            PyErr_Format(PyExc_ValueError, "ActiveUserID too long: length=%zd (max allowed is 15)", CThostFtdcQuoteField_ActiveUserID_length);
            return -1;
        }
        // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
        // memcpy(data->ActiveUserID, CThostFtdcQuoteField_ActiveUserID, CThostFtdcQuoteField_ActiveUserID_length);
        strncpy(data->ActiveUserID, CThostFtdcQuoteField_ActiveUserID, sizeof(data->ActiveUserID));
        CThostFtdcQuoteField_ActiveUserID = NULL;
    }

    /// 经纪公司报价编号
    /// typedef int TThostFtdcSequenceNoType
    data->BrokerQuoteSeq = CThostFtdcQuoteField_BrokerQuoteSeq;

    /// 衍生卖报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcQuoteField_AskOrderRef != NULL ) {
        if(CThostFtdcQuoteField_AskOrderRef_length >= (Py_ssize_t)sizeof(data->AskOrderRef)) {
            PyErr_Format(PyExc_ValueError, "AskOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcQuoteField_AskOrderRef_length);
            return -1;
        }
        // memset(data->AskOrderRef, 0, sizeof(data->AskOrderRef));
        // memcpy(data->AskOrderRef, CThostFtdcQuoteField_AskOrderRef, CThostFtdcQuoteField_AskOrderRef_length);
        strncpy(data->AskOrderRef, CThostFtdcQuoteField_AskOrderRef, sizeof(data->AskOrderRef));
        CThostFtdcQuoteField_AskOrderRef = NULL;
    }

    /// 衍生买报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    if( CThostFtdcQuoteField_BidOrderRef != NULL ) {
        if(CThostFtdcQuoteField_BidOrderRef_length >= (Py_ssize_t)sizeof(data->BidOrderRef)) {
            PyErr_Format(PyExc_ValueError, "BidOrderRef too long: length=%zd (max allowed is 12)", CThostFtdcQuoteField_BidOrderRef_length);
            return -1;
        }
        // memset(data->BidOrderRef, 0, sizeof(data->BidOrderRef));
        // memcpy(data->BidOrderRef, CThostFtdcQuoteField_BidOrderRef, CThostFtdcQuoteField_BidOrderRef_length);
        strncpy(data->BidOrderRef, CThostFtdcQuoteField_BidOrderRef, sizeof(data->BidOrderRef));
        CThostFtdcQuoteField_BidOrderRef = NULL;
    }

    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQuoteField_ForQuoteSysID != NULL ) {
        if(CThostFtdcQuoteField_ForQuoteSysID_length >= (Py_ssize_t)sizeof(data->ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_ForQuoteSysID_length);
            return -1;
        }
        // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
        // memcpy(data->ForQuoteSysID, CThostFtdcQuoteField_ForQuoteSysID, CThostFtdcQuoteField_ForQuoteSysID_length);
        strncpy(data->ForQuoteSysID, CThostFtdcQuoteField_ForQuoteSysID, sizeof(data->ForQuoteSysID));
        CThostFtdcQuoteField_ForQuoteSysID = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcQuoteField_BranchID != NULL ) {
        if(CThostFtdcQuoteField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcQuoteField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcQuoteField_BranchID, CThostFtdcQuoteField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcQuoteField_BranchID, sizeof(data->BranchID));
        CThostFtdcQuoteField_BranchID = NULL;
    }

    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    if( CThostFtdcQuoteField_InvestUnitID != NULL ) {
        if(CThostFtdcQuoteField_InvestUnitID_length >= (Py_ssize_t)sizeof(data->InvestUnitID)) {
            PyErr_Format(PyExc_ValueError, "InvestUnitID too long: length=%zd (max allowed is 16)", CThostFtdcQuoteField_InvestUnitID_length);
            return -1;
        }
        // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
        // memcpy(data->InvestUnitID, CThostFtdcQuoteField_InvestUnitID, CThostFtdcQuoteField_InvestUnitID_length);
        strncpy(data->InvestUnitID, CThostFtdcQuoteField_InvestUnitID, sizeof(data->InvestUnitID));
        CThostFtdcQuoteField_InvestUnitID = NULL;
    }

    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    if( CThostFtdcQuoteField_AccountID != NULL ) {
        if(CThostFtdcQuoteField_AccountID_length >= (Py_ssize_t)sizeof(data->AccountID)) {
            PyErr_Format(PyExc_ValueError, "AccountID too long: length=%zd (max allowed is 12)", CThostFtdcQuoteField_AccountID_length);
            return -1;
        }
        // memset(data->AccountID, 0, sizeof(data->AccountID));
        // memcpy(data->AccountID, CThostFtdcQuoteField_AccountID, CThostFtdcQuoteField_AccountID_length);
        strncpy(data->AccountID, CThostFtdcQuoteField_AccountID, sizeof(data->AccountID));
        CThostFtdcQuoteField_AccountID = NULL;
    }

    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    if( CThostFtdcQuoteField_CurrencyID != NULL ) {
        if(CThostFtdcQuoteField_CurrencyID_length >= (Py_ssize_t)sizeof(data->CurrencyID)) {
            PyErr_Format(PyExc_ValueError, "CurrencyID too long: length=%zd (max allowed is 3)", CThostFtdcQuoteField_CurrencyID_length);
            return -1;
        }
        // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
        // memcpy(data->CurrencyID, CThostFtdcQuoteField_CurrencyID, CThostFtdcQuoteField_CurrencyID_length);
        strncpy(data->CurrencyID, CThostFtdcQuoteField_CurrencyID, sizeof(data->CurrencyID));
        CThostFtdcQuoteField_CurrencyID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcQuoteField_reserve3 != NULL ) {
        if(CThostFtdcQuoteField_reserve3_length >= (Py_ssize_t)sizeof(data->reserve3)) {
            PyErr_Format(PyExc_ValueError, "reserve3 too long: length=%zd (max allowed is 15)", CThostFtdcQuoteField_reserve3_length);
            return -1;
        }
        // memset(data->reserve3, 0, sizeof(data->reserve3));
        // memcpy(data->reserve3, CThostFtdcQuoteField_reserve3, CThostFtdcQuoteField_reserve3_length);
        strncpy(data->reserve3, CThostFtdcQuoteField_reserve3, sizeof(data->reserve3));
        CThostFtdcQuoteField_reserve3 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcQuoteField_MacAddress != NULL ) {
        if(CThostFtdcQuoteField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcQuoteField_MacAddress, CThostFtdcQuoteField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcQuoteField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcQuoteField_MacAddress = NULL;
    }

    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    if( CThostFtdcQuoteField_InstrumentID != NULL ) {
        if(CThostFtdcQuoteField_InstrumentID_length >= (Py_ssize_t)sizeof(data->InstrumentID)) {
            PyErr_Format(PyExc_ValueError, "InstrumentID too long: length=%zd (max allowed is 80)", CThostFtdcQuoteField_InstrumentID_length);
            return -1;
        }
        // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
        // memcpy(data->InstrumentID, CThostFtdcQuoteField_InstrumentID, CThostFtdcQuoteField_InstrumentID_length);
        strncpy(data->InstrumentID, CThostFtdcQuoteField_InstrumentID, sizeof(data->InstrumentID));
        CThostFtdcQuoteField_InstrumentID = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcQuoteField_ExchangeInstID != NULL ) {
        if(CThostFtdcQuoteField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcQuoteField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcQuoteField_ExchangeInstID, CThostFtdcQuoteField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcQuoteField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcQuoteField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcQuoteField_IPAddress != NULL ) {
        if(CThostFtdcQuoteField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcQuoteField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcQuoteField_IPAddress, CThostFtdcQuoteField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcQuoteField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcQuoteField_IPAddress = NULL;
    }

    /// 被顶单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcQuoteField_ReplaceSysID != NULL ) {
        if(CThostFtdcQuoteField_ReplaceSysID_length >= (Py_ssize_t)sizeof(data->ReplaceSysID)) {
            PyErr_Format(PyExc_ValueError, "ReplaceSysID too long: length=%zd (max allowed is 20)", CThostFtdcQuoteField_ReplaceSysID_length);
            return -1;
        }
        // memset(data->ReplaceSysID, 0, sizeof(data->ReplaceSysID));
        // memcpy(data->ReplaceSysID, CThostFtdcQuoteField_ReplaceSysID, CThostFtdcQuoteField_ReplaceSysID_length);
        strncpy(data->ReplaceSysID, CThostFtdcQuoteField_ReplaceSysID, sizeof(data->ReplaceSysID));
        CThostFtdcQuoteField_ReplaceSysID = NULL;
    }

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcQuoteField_TimeCondition;

    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    if( CThostFtdcQuoteField_OrderMemo != NULL ) {
        if(CThostFtdcQuoteField_OrderMemo_length >= (Py_ssize_t)sizeof(data->OrderMemo)) {
            PyErr_Format(PyExc_ValueError, "OrderMemo too long: length=%zd (max allowed is 12)", CThostFtdcQuoteField_OrderMemo_length);
            return -1;
        }
        // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
        // memcpy(data->OrderMemo, CThostFtdcQuoteField_OrderMemo, CThostFtdcQuoteField_OrderMemo_length);
        strncpy(data->OrderMemo, CThostFtdcQuoteField_OrderMemo, sizeof(data->OrderMemo));
        CThostFtdcQuoteField_OrderMemo = NULL;
    }

    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    data->SessionReqSeq = CThostFtdcQuoteField_SessionReqSeq;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:y,s:y,s:y,s:y,s:y,s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:i,s:i,s:y,s:y,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c,s:y,s:i}"
        , "BrokerID", data->BrokerID//, (Py_ssize_t)sizeof(data->BrokerID)
        , "InvestorID", data->InvestorID//, (Py_ssize_t)sizeof(data->InvestorID)
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
        , "QuoteRef", data->QuoteRef//, (Py_ssize_t)sizeof(data->QuoteRef)
        , "UserID", data->UserID//, (Py_ssize_t)sizeof(data->UserID)
        , "AskPrice", data->AskPrice
        , "BidPrice", data->BidPrice
        , "AskVolume", data->AskVolume
        , "BidVolume", data->BidVolume
        , "RequestID", data->RequestID
        , "BusinessUnit", data->BusinessUnit//, (Py_ssize_t)sizeof(data->BusinessUnit)
        , "AskOffsetFlag", data->AskOffsetFlag
        , "BidOffsetFlag", data->BidOffsetFlag
        , "AskHedgeFlag", data->AskHedgeFlag
        , "BidHedgeFlag", data->BidHedgeFlag
        , "QuoteLocalID", data->QuoteLocalID//, (Py_ssize_t)sizeof(data->QuoteLocalID)
        , "ExchangeID", data->ExchangeID//, (Py_ssize_t)sizeof(data->ExchangeID)
        , "ParticipantID", data->ParticipantID//, (Py_ssize_t)sizeof(data->ParticipantID)
        , "ClientID", data->ClientID//, (Py_ssize_t)sizeof(data->ClientID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "TraderID", data->TraderID//, (Py_ssize_t)sizeof(data->TraderID)
        , "InstallID", data->InstallID
        , "NotifySequence", data->NotifySequence
        , "OrderSubmitStatus", data->OrderSubmitStatus
        , "TradingDay", data->TradingDay//, (Py_ssize_t)sizeof(data->TradingDay)
        , "SettlementID", data->SettlementID
        , "QuoteSysID", data->QuoteSysID//, (Py_ssize_t)sizeof(data->QuoteSysID)
        , "InsertDate", data->InsertDate//, (Py_ssize_t)sizeof(data->InsertDate)
        , "InsertTime", data->InsertTime//, (Py_ssize_t)sizeof(data->InsertTime)
        , "CancelTime", data->CancelTime//, (Py_ssize_t)sizeof(data->CancelTime)
        , "QuoteStatus", data->QuoteStatus
        , "ClearingPartID", data->ClearingPartID//, (Py_ssize_t)sizeof(data->ClearingPartID)
        , "SequenceNo", data->SequenceNo
        , "AskOrderSysID", data->AskOrderSysID//, (Py_ssize_t)sizeof(data->AskOrderSysID)
        , "BidOrderSysID", data->BidOrderSysID//, (Py_ssize_t)sizeof(data->BidOrderSysID)
        , "FrontID", data->FrontID
        , "SessionID", data->SessionID
        , "UserProductInfo", data->UserProductInfo//, (Py_ssize_t)sizeof(data->UserProductInfo)
        , "StatusMsg", data->StatusMsg//, (Py_ssize_t)sizeof(data->StatusMsg)
        , "ActiveUserID", data->ActiveUserID//, (Py_ssize_t)sizeof(data->ActiveUserID)
        , "BrokerQuoteSeq", data->BrokerQuoteSeq
        , "AskOrderRef", data->AskOrderRef//, (Py_ssize_t)sizeof(data->AskOrderRef)
        , "BidOrderRef", data->BidOrderRef//, (Py_ssize_t)sizeof(data->BidOrderRef)
        , "ForQuoteSysID", data->ForQuoteSysID//, (Py_ssize_t)sizeof(data->ForQuoteSysID)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "InvestUnitID", data->InvestUnitID//, (Py_ssize_t)sizeof(data->InvestUnitID)
        , "AccountID", data->AccountID//, (Py_ssize_t)sizeof(data->AccountID)
        , "CurrencyID", data->CurrencyID//, (Py_ssize_t)sizeof(data->CurrencyID)
        , "reserve3", data->reserve3//, (Py_ssize_t)sizeof(data->reserve3)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "InstrumentID", data->InstrumentID//, (Py_ssize_t)sizeof(data->InstrumentID)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "ReplaceSysID", data->ReplaceSysID//, (Py_ssize_t)sizeof(data->ReplaceSysID)
        , "TimeCondition", data->TimeCondition
        , "OrderMemo", data->OrderMemo//, (Py_ssize_t)sizeof(data->OrderMemo)
        , "SessionReqSeq", data->SessionReqSeq
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 经纪公司代码
/// typedef char TThostFtdcBrokerIDType[11]
static PyObject *PyCThostFtdcQuoteFieldType_get_BrokerID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BrokerID, (Py_ssize_t)sizeof(data->BrokerID));
    return PyBytes_FromString(data->BrokerID);
}

static int PyCThostFtdcQuoteFieldType_set_BrokerID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BrokerID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::BrokerID)) {
        PyErr_SetString(PyExc_ValueError, "BrokerID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->BrokerID, 0, sizeof(data->BrokerID));
    // memcpy(data->BrokerID, buf, len);
    strncpy(data->BrokerID, buf, sizeof(data->BrokerID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资者代码
/// typedef char TThostFtdcInvestorIDType[13]
static PyObject *PyCThostFtdcQuoteFieldType_get_InvestorID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestorID, (Py_ssize_t)sizeof(data->InvestorID));
    return PyBytes_FromString(data->InvestorID);
}

static int PyCThostFtdcQuoteFieldType_set_InvestorID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestorID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::InvestorID)) {
        PyErr_SetString(PyExc_ValueError, "InvestorID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->InvestorID, 0, sizeof(data->InvestorID));
    // memcpy(data->InvestorID, buf, len);
    strncpy(data->InvestorID, buf, sizeof(data->InvestorID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldInstrumentIDType[31]
static PyObject *PyCThostFtdcQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcQuoteFieldType_get_QuoteRef(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteRef, (Py_ssize_t)sizeof(data->QuoteRef));
    return PyBytes_FromString(data->QuoteRef);
}

static int PyCThostFtdcQuoteFieldType_set_QuoteRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::QuoteRef)) {
        PyErr_SetString(PyExc_ValueError, "QuoteRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->QuoteRef, 0, sizeof(data->QuoteRef));
    // memcpy(data->QuoteRef, buf, len);
    strncpy(data->QuoteRef, buf, sizeof(data->QuoteRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQuoteFieldType_get_UserID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserID, (Py_ssize_t)sizeof(data->UserID));
    return PyBytes_FromString(data->UserID);
}

static int PyCThostFtdcQuoteFieldType_set_UserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::UserID)) {
        PyErr_SetString(PyExc_ValueError, "UserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->UserID, 0, sizeof(data->UserID));
    // memcpy(data->UserID, buf, len);
    strncpy(data->UserID, buf, sizeof(data->UserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcQuoteFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcQuoteFieldType_get_AskOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AskOffsetFlag), 1);
}

static int PyCThostFtdcQuoteFieldType_set_AskOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskOffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteField::AskOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskOffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    data->AskOffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcQuoteFieldType_get_BidOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BidOffsetFlag), 1);
}

static int PyCThostFtdcQuoteFieldType_set_BidOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidOffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteField::BidOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidOffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    data->BidOffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQuoteFieldType_get_AskHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AskHedgeFlag), 1);
}

static int PyCThostFtdcQuoteFieldType_set_AskHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskHedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteField::AskHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskHedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    data->AskHedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcQuoteFieldType_get_BidHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BidHedgeFlag), 1);
}

static int PyCThostFtdcQuoteFieldType_set_BidHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidHedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteField::BidHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidHedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    data->BidHedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报价编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcQuoteFieldType_get_QuoteLocalID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteLocalID, (Py_ssize_t)sizeof(data->QuoteLocalID));
    return PyBytes_FromString(data->QuoteLocalID);
}

static int PyCThostFtdcQuoteFieldType_set_QuoteLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::QuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
    // memcpy(data->QuoteLocalID, buf, len);
    strncpy(data->QuoteLocalID, buf, sizeof(data->QuoteLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQuoteFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcQuoteFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcQuoteFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcQuoteFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcQuoteFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcQuoteFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcQuoteFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcQuoteFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcQuoteFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcQuoteFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcQuoteFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_QuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteSysID, (Py_ssize_t)sizeof(data->QuoteSysID));
    return PyBytes_FromString(data->QuoteSysID);
}

static int PyCThostFtdcQuoteFieldType_set_QuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
    // memcpy(data->QuoteSysID, buf, len);
    strncpy(data->QuoteSysID, buf, sizeof(data->QuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcQuoteFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcQuoteFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQuoteFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcQuoteFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcQuoteFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcQuoteFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价状态
/// typedef char TThostFtdcOrderStatusType
static PyObject *PyCThostFtdcQuoteFieldType_get_QuoteStatus(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->QuoteStatus), 1);
}

static int PyCThostFtdcQuoteFieldType_set_QuoteStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteField::QuoteStatus)) {
        PyErr_SetString(PyExc_ValueError, "QuoteStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    data->QuoteStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcQuoteFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcQuoteFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖方报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_AskOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AskOrderSysID, (Py_ssize_t)sizeof(data->AskOrderSysID));
    return PyBytes_FromString(data->AskOrderSysID);
}

static int PyCThostFtdcQuoteFieldType_set_AskOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::AskOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "AskOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->AskOrderSysID, 0, sizeof(data->AskOrderSysID));
    // memcpy(data->AskOrderSysID, buf, len);
    strncpy(data->AskOrderSysID, buf, sizeof(data->AskOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买方报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_BidOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BidOrderSysID, (Py_ssize_t)sizeof(data->BidOrderSysID));
    return PyBytes_FromString(data->BidOrderSysID);
}

static int PyCThostFtdcQuoteFieldType_set_BidOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::BidOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "BidOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->BidOrderSysID, 0, sizeof(data->BidOrderSysID));
    // memcpy(data->BidOrderSysID, buf, len);
    strncpy(data->BidOrderSysID, buf, sizeof(data->BidOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 用户端产品信息
/// typedef char TThostFtdcProductInfoType[11]
static PyObject *PyCThostFtdcQuoteFieldType_get_UserProductInfo(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->UserProductInfo, (Py_ssize_t)sizeof(data->UserProductInfo));
    return PyBytes_FromString(data->UserProductInfo);
}

static int PyCThostFtdcQuoteFieldType_set_UserProductInfo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "UserProductInfo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::UserProductInfo)) {
        PyErr_SetString(PyExc_ValueError, "UserProductInfo must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->UserProductInfo, 0, sizeof(data->UserProductInfo));
    // memcpy(data->UserProductInfo, buf, len);
    strncpy(data->UserProductInfo, buf, sizeof(data->UserProductInfo));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 状态信息
/// typedef char TThostFtdcErrorMsgType[81]
static PyObject *PyCThostFtdcQuoteFieldType_get_StatusMsg(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->StatusMsg, (Py_ssize_t)sizeof(data->StatusMsg));
    return PyBytes_FromString(data->StatusMsg);
}

static int PyCThostFtdcQuoteFieldType_set_StatusMsg(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "StatusMsg Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::StatusMsg)) {
        PyErr_SetString(PyExc_ValueError, "StatusMsg must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->StatusMsg, 0, sizeof(data->StatusMsg));
    // memcpy(data->StatusMsg, buf, len);
    strncpy(data->StatusMsg, buf, sizeof(data->StatusMsg));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 操作用户代码
/// typedef char TThostFtdcUserIDType[16]
static PyObject *PyCThostFtdcQuoteFieldType_get_ActiveUserID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ActiveUserID, (Py_ssize_t)sizeof(data->ActiveUserID));
    return PyBytes_FromString(data->ActiveUserID);
}

static int PyCThostFtdcQuoteFieldType_set_ActiveUserID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ActiveUserID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ActiveUserID)) {
        PyErr_SetString(PyExc_ValueError, "ActiveUserID must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ActiveUserID, 0, sizeof(data->ActiveUserID));
    // memcpy(data->ActiveUserID, buf, len);
    strncpy(data->ActiveUserID, buf, sizeof(data->ActiveUserID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 衍生卖报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcQuoteFieldType_get_AskOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AskOrderRef, (Py_ssize_t)sizeof(data->AskOrderRef));
    return PyBytes_FromString(data->AskOrderRef);
}

static int PyCThostFtdcQuoteFieldType_set_AskOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::AskOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "AskOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->AskOrderRef, 0, sizeof(data->AskOrderRef));
    // memcpy(data->AskOrderRef, buf, len);
    strncpy(data->AskOrderRef, buf, sizeof(data->AskOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 衍生买报单引用
/// typedef char TThostFtdcOrderRefType[13]
static PyObject *PyCThostFtdcQuoteFieldType_get_BidOrderRef(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BidOrderRef, (Py_ssize_t)sizeof(data->BidOrderRef));
    return PyBytes_FromString(data->BidOrderRef);
}

static int PyCThostFtdcQuoteFieldType_set_BidOrderRef(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidOrderRef Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::BidOrderRef)) {
        PyErr_SetString(PyExc_ValueError, "BidOrderRef must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->BidOrderRef, 0, sizeof(data->BidOrderRef));
    // memcpy(data->BidOrderRef, buf, len);
    strncpy(data->BidOrderRef, buf, sizeof(data->BidOrderRef));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 应价编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_ForQuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteSysID, (Py_ssize_t)sizeof(data->ForQuoteSysID));
    return PyBytes_FromString(data->ForQuoteSysID);
}

static int PyCThostFtdcQuoteFieldType_set_ForQuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ForQuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
    // memcpy(data->ForQuoteSysID, buf, len);
    strncpy(data->ForQuoteSysID, buf, sizeof(data->ForQuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcQuoteFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcQuoteFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 投资单元代码
/// typedef char TThostFtdcInvestUnitIDType[17]
static PyObject *PyCThostFtdcQuoteFieldType_get_InvestUnitID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InvestUnitID, (Py_ssize_t)sizeof(data->InvestUnitID));
    return PyBytes_FromString(data->InvestUnitID);
}

static int PyCThostFtdcQuoteFieldType_set_InvestUnitID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InvestUnitID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::InvestUnitID)) {
        PyErr_SetString(PyExc_ValueError, "InvestUnitID must be less than 16 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->InvestUnitID, 0, sizeof(data->InvestUnitID));
    // memcpy(data->InvestUnitID, buf, len);
    strncpy(data->InvestUnitID, buf, sizeof(data->InvestUnitID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 资金账号
/// typedef char TThostFtdcAccountIDType[13]
static PyObject *PyCThostFtdcQuoteFieldType_get_AccountID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AccountID, (Py_ssize_t)sizeof(data->AccountID));
    return PyBytes_FromString(data->AccountID);
}

static int PyCThostFtdcQuoteFieldType_set_AccountID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AccountID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::AccountID)) {
        PyErr_SetString(PyExc_ValueError, "AccountID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->AccountID, 0, sizeof(data->AccountID));
    // memcpy(data->AccountID, buf, len);
    strncpy(data->AccountID, buf, sizeof(data->AccountID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 币种代码
/// typedef char TThostFtdcCurrencyIDType[4]
static PyObject *PyCThostFtdcQuoteFieldType_get_CurrencyID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CurrencyID, (Py_ssize_t)sizeof(data->CurrencyID));
    return PyBytes_FromString(data->CurrencyID);
}

static int PyCThostFtdcQuoteFieldType_set_CurrencyID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CurrencyID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::CurrencyID)) {
        PyErr_SetString(PyExc_ValueError, "CurrencyID must be less than 3 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->CurrencyID, 0, sizeof(data->CurrencyID));
    // memcpy(data->CurrencyID, buf, len);
    strncpy(data->CurrencyID, buf, sizeof(data->CurrencyID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcQuoteFieldType_get_reserve3(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve3, (Py_ssize_t)sizeof(data->reserve3));
    return PyBytes_FromString(data->reserve3);
}

static int PyCThostFtdcQuoteFieldType_set_reserve3(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve3 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::reserve3)) {
        PyErr_SetString(PyExc_ValueError, "reserve3 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->reserve3, 0, sizeof(data->reserve3));
    // memcpy(data->reserve3, buf, len);
    strncpy(data->reserve3, buf, sizeof(data->reserve3));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcQuoteFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约代码
/// typedef char TThostFtdcInstrumentIDType[81]
static PyObject *PyCThostFtdcQuoteFieldType_get_InstrumentID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InstrumentID, (Py_ssize_t)sizeof(data->InstrumentID));
    return PyBytes_FromString(data->InstrumentID);
}

static int PyCThostFtdcQuoteFieldType_set_InstrumentID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InstrumentID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::InstrumentID)) {
        PyErr_SetString(PyExc_ValueError, "InstrumentID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->InstrumentID, 0, sizeof(data->InstrumentID));
    // memcpy(data->InstrumentID, buf, len);
    strncpy(data->InstrumentID, buf, sizeof(data->InstrumentID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcQuoteFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcQuoteFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcQuoteFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcQuoteFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 被顶单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcQuoteFieldType_get_ReplaceSysID(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ReplaceSysID, (Py_ssize_t)sizeof(data->ReplaceSysID));
    return PyBytes_FromString(data->ReplaceSysID);
}

static int PyCThostFtdcQuoteFieldType_set_ReplaceSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ReplaceSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::ReplaceSysID)) {
        PyErr_SetString(PyExc_ValueError, "ReplaceSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->ReplaceSysID, 0, sizeof(data->ReplaceSysID));
    // memcpy(data->ReplaceSysID, buf, len);
    strncpy(data->ReplaceSysID, buf, sizeof(data->ReplaceSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcQuoteFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcQuoteFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcQuoteField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单回显字段
/// typedef char TThostFtdcOrderMemoType[13]
static PyObject *PyCThostFtdcQuoteFieldType_get_OrderMemo(PyObject *self, void *closure) {
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->OrderMemo, (Py_ssize_t)sizeof(data->OrderMemo));
    return PyBytes_FromString(data->OrderMemo);
}

static int PyCThostFtdcQuoteFieldType_set_OrderMemo(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderMemo Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcQuoteField::OrderMemo)) {
        PyErr_SetString(PyExc_ValueError, "OrderMemo must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcQuoteFieldData>(self);
    CThostFtdcQuoteField *data = &(extra->data);
    // memset(data->OrderMemo, 0, sizeof(data->OrderMemo));
    // memcpy(data->OrderMemo, buf, len);
    strncpy(data->OrderMemo, buf, sizeof(data->OrderMemo));
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcQuoteFieldType_members[] = {
    /// 卖价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.AskPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖价格")
    },
    /// 买价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "BidPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.BidPrice),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买价格")
    },
    /// 卖数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "AskVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.AskVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("卖数量")
    },
    /// 买数量
    /// typedef int TThostFtdcVolumeType
    {
        .name = "BidVolume",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.BidVolume),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("买数量")
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
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.InstallID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("安装编号")
    },
    /// 报价提示序号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "NotifySequence",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.NotifySequence),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("报价提示序号")
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
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.SequenceNo),
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
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.FrontID),
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
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.SessionID),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("会话编号")
    },
    /// 经纪公司报价编号
    /// typedef int TThostFtdcSequenceNoType
    {
        .name = "BrokerQuoteSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.BrokerQuoteSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("经纪公司报价编号")
    },
    /// session上请求计数 api自动维护
    /// typedef int TThostFtdcSequenceNo12Type
    {
        .name = "SessionReqSeq",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_INT,
#else
        .type = Py_T_INT,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcQuoteFieldData, data.SessionReqSeq),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("session上请求计数 api自动维护")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcQuoteFieldType_getsets[] = {
    /// 经纪公司代码
    /// typedef char TThostFtdcBrokerIDType[11]
    {
    .name = "BrokerID",
    .get = PyCThostFtdcQuoteFieldType_get_BrokerID,
    .set = PyCThostFtdcQuoteFieldType_set_BrokerID,
    .doc = PyDoc_STR("经纪公司代码"),
    },
    /// 投资者代码
    /// typedef char TThostFtdcInvestorIDType[13]
    {
    .name = "InvestorID",
    .get = PyCThostFtdcQuoteFieldType_get_InvestorID,
    .set = PyCThostFtdcQuoteFieldType_set_InvestorID,
    .doc = PyDoc_STR("投资者代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldInstrumentIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 报价引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "QuoteRef",
    .get = PyCThostFtdcQuoteFieldType_get_QuoteRef,
    .set = PyCThostFtdcQuoteFieldType_set_QuoteRef,
    .doc = PyDoc_STR("报价引用"),
    },
    /// 用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "UserID",
    .get = PyCThostFtdcQuoteFieldType_get_UserID,
    .set = PyCThostFtdcQuoteFieldType_set_UserID,
    .doc = PyDoc_STR("用户代码"),
    },
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcQuoteFieldType_get_BusinessUnit,
    .set = PyCThostFtdcQuoteFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "AskOffsetFlag",
    .get = PyCThostFtdcQuoteFieldType_get_AskOffsetFlag,
    .set = PyCThostFtdcQuoteFieldType_set_AskOffsetFlag,
    .doc = PyDoc_STR("卖开平标志"),
    },
    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "BidOffsetFlag",
    .get = PyCThostFtdcQuoteFieldType_get_BidOffsetFlag,
    .set = PyCThostFtdcQuoteFieldType_set_BidOffsetFlag,
    .doc = PyDoc_STR("买开平标志"),
    },
    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "AskHedgeFlag",
    .get = PyCThostFtdcQuoteFieldType_get_AskHedgeFlag,
    .set = PyCThostFtdcQuoteFieldType_set_AskHedgeFlag,
    .doc = PyDoc_STR("卖投机套保标志"),
    },
    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "BidHedgeFlag",
    .get = PyCThostFtdcQuoteFieldType_get_BidHedgeFlag,
    .set = PyCThostFtdcQuoteFieldType_set_BidHedgeFlag,
    .doc = PyDoc_STR("买投机套保标志"),
    },
    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "QuoteLocalID",
    .get = PyCThostFtdcQuoteFieldType_get_QuoteLocalID,
    .set = PyCThostFtdcQuoteFieldType_set_QuoteLocalID,
    .doc = PyDoc_STR("本地报价编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcQuoteFieldType_get_ParticipantID,
    .set = PyCThostFtdcQuoteFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcQuoteFieldType_get_ClientID,
    .set = PyCThostFtdcQuoteFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve2",
    .get = PyCThostFtdcQuoteFieldType_get_reserve2,
    .set = PyCThostFtdcQuoteFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcQuoteFieldType_get_TraderID,
    .set = PyCThostFtdcQuoteFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报价提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcQuoteFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcQuoteFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("报价提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcQuoteFieldType_get_TradingDay,
    .set = PyCThostFtdcQuoteFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "QuoteSysID",
    .get = PyCThostFtdcQuoteFieldType_get_QuoteSysID,
    .set = PyCThostFtdcQuoteFieldType_set_QuoteSysID,
    .doc = PyDoc_STR("报价编号"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcQuoteFieldType_get_InsertDate,
    .set = PyCThostFtdcQuoteFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcQuoteFieldType_get_InsertTime,
    .set = PyCThostFtdcQuoteFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcQuoteFieldType_get_CancelTime,
    .set = PyCThostFtdcQuoteFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 报价状态
    /// typedef char TThostFtdcOrderStatusType
    {
    .name = "QuoteStatus",
    .get = PyCThostFtdcQuoteFieldType_get_QuoteStatus,
    .set = PyCThostFtdcQuoteFieldType_set_QuoteStatus,
    .doc = PyDoc_STR("报价状态"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcQuoteFieldType_get_ClearingPartID,
    .set = PyCThostFtdcQuoteFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 卖方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "AskOrderSysID",
    .get = PyCThostFtdcQuoteFieldType_get_AskOrderSysID,
    .set = PyCThostFtdcQuoteFieldType_set_AskOrderSysID,
    .doc = PyDoc_STR("卖方报单编号"),
    },
    /// 买方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "BidOrderSysID",
    .get = PyCThostFtdcQuoteFieldType_get_BidOrderSysID,
    .set = PyCThostFtdcQuoteFieldType_set_BidOrderSysID,
    .doc = PyDoc_STR("买方报单编号"),
    },
    /// 用户端产品信息
    /// typedef char TThostFtdcProductInfoType[11]
    {
    .name = "UserProductInfo",
    .get = PyCThostFtdcQuoteFieldType_get_UserProductInfo,
    .set = PyCThostFtdcQuoteFieldType_set_UserProductInfo,
    .doc = PyDoc_STR("用户端产品信息"),
    },
    /// 状态信息
    /// typedef char TThostFtdcErrorMsgType[81]
    {
    .name = "StatusMsg",
    .get = PyCThostFtdcQuoteFieldType_get_StatusMsg,
    .set = PyCThostFtdcQuoteFieldType_set_StatusMsg,
    .doc = PyDoc_STR("状态信息"),
    },
    /// 操作用户代码
    /// typedef char TThostFtdcUserIDType[16]
    {
    .name = "ActiveUserID",
    .get = PyCThostFtdcQuoteFieldType_get_ActiveUserID,
    .set = PyCThostFtdcQuoteFieldType_set_ActiveUserID,
    .doc = PyDoc_STR("操作用户代码"),
    },
    /// 衍生卖报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "AskOrderRef",
    .get = PyCThostFtdcQuoteFieldType_get_AskOrderRef,
    .set = PyCThostFtdcQuoteFieldType_set_AskOrderRef,
    .doc = PyDoc_STR("衍生卖报单引用"),
    },
    /// 衍生买报单引用
    /// typedef char TThostFtdcOrderRefType[13]
    {
    .name = "BidOrderRef",
    .get = PyCThostFtdcQuoteFieldType_get_BidOrderRef,
    .set = PyCThostFtdcQuoteFieldType_set_BidOrderRef,
    .doc = PyDoc_STR("衍生买报单引用"),
    },
    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "ForQuoteSysID",
    .get = PyCThostFtdcQuoteFieldType_get_ForQuoteSysID,
    .set = PyCThostFtdcQuoteFieldType_set_ForQuoteSysID,
    .doc = PyDoc_STR("应价编号"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcQuoteFieldType_get_BranchID,
    .set = PyCThostFtdcQuoteFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 投资单元代码
    /// typedef char TThostFtdcInvestUnitIDType[17]
    {
    .name = "InvestUnitID",
    .get = PyCThostFtdcQuoteFieldType_get_InvestUnitID,
    .set = PyCThostFtdcQuoteFieldType_set_InvestUnitID,
    .doc = PyDoc_STR("投资单元代码"),
    },
    /// 资金账号
    /// typedef char TThostFtdcAccountIDType[13]
    {
    .name = "AccountID",
    .get = PyCThostFtdcQuoteFieldType_get_AccountID,
    .set = PyCThostFtdcQuoteFieldType_set_AccountID,
    .doc = PyDoc_STR("资金账号"),
    },
    /// 币种代码
    /// typedef char TThostFtdcCurrencyIDType[4]
    {
    .name = "CurrencyID",
    .get = PyCThostFtdcQuoteFieldType_get_CurrencyID,
    .set = PyCThostFtdcQuoteFieldType_set_CurrencyID,
    .doc = PyDoc_STR("币种代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve3",
    .get = PyCThostFtdcQuoteFieldType_get_reserve3,
    .set = PyCThostFtdcQuoteFieldType_set_reserve3,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcQuoteFieldType_get_MacAddress,
    .set = PyCThostFtdcQuoteFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约代码
    /// typedef char TThostFtdcInstrumentIDType[81]
    {
    .name = "InstrumentID",
    .get = PyCThostFtdcQuoteFieldType_get_InstrumentID,
    .set = PyCThostFtdcQuoteFieldType_set_InstrumentID,
    .doc = PyDoc_STR("合约代码"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcQuoteFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcQuoteFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcQuoteFieldType_get_IPAddress,
    .set = PyCThostFtdcQuoteFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 被顶单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "ReplaceSysID",
    .get = PyCThostFtdcQuoteFieldType_get_ReplaceSysID,
    .set = PyCThostFtdcQuoteFieldType_set_ReplaceSysID,
    .doc = PyDoc_STR("被顶单编号"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcQuoteFieldType_get_TimeCondition,
    .set = PyCThostFtdcQuoteFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    /// 报单回显字段
    /// typedef char TThostFtdcOrderMemoType[13]
    {
    .name = "OrderMemo",
    .get = PyCThostFtdcQuoteFieldType_get_OrderMemo,
    .set = PyCThostFtdcQuoteFieldType_set_OrderMemo,
    .doc = PyDoc_STR("报单回显字段"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("报价")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("报价")},
    {Py_tp_members, PyCThostFtdcQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}