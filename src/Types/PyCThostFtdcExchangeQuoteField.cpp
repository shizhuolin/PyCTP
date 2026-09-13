
#include "PyCThostFtdcExchangeQuoteField.h"

///交易所报价信息

static int PyCThostFtdcExchangeQuoteFieldType_init(PyObject *self, PyObject *args, PyObject *kwds) {

    static const char *kwlist[] = { "AskPrice", "BidPrice", "AskVolume", "BidVolume", "RequestID", "BusinessUnit", "AskOffsetFlag", "BidOffsetFlag", "AskHedgeFlag", "BidHedgeFlag", "QuoteLocalID", "ExchangeID", "ParticipantID", "ClientID", "reserve1", "TraderID", "InstallID", "NotifySequence", "OrderSubmitStatus", "TradingDay", "SettlementID", "QuoteSysID", "InsertDate", "InsertTime", "CancelTime", "QuoteStatus", "ClearingPartID", "SequenceNo", "AskOrderSysID", "BidOrderSysID", "ForQuoteSysID", "BranchID", "reserve2", "MacAddress", "ExchangeInstID", "IPAddress", "TimeCondition", NULL };


    /// 卖价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcExchangeQuoteField_AskPrice = 0.0;

    /// 买价格
    /// typedef double TThostFtdcPriceType
    double CThostFtdcExchangeQuoteField_BidPrice = 0.0;

    /// 卖数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeQuoteField_AskVolume = 0;

    /// 买数量
    /// typedef int TThostFtdcVolumeType
    int CThostFtdcExchangeQuoteField_BidVolume = 0;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    int CThostFtdcExchangeQuoteField_RequestID = 0;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    char *CThostFtdcExchangeQuoteField_BusinessUnit = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_BusinessUnit_length = 0;

    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcExchangeQuoteField_AskOffsetFlag = 0;

    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    char CThostFtdcExchangeQuoteField_BidOffsetFlag = 0;

    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeQuoteField_AskHedgeFlag = 0;

    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    char CThostFtdcExchangeQuoteField_BidHedgeFlag = 0;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    char *CThostFtdcExchangeQuoteField_QuoteLocalID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_QuoteLocalID_length = 0;

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    char *CThostFtdcExchangeQuoteField_ExchangeID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_ExchangeID_length = 0;

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeQuoteField_ParticipantID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_ParticipantID_length = 0;

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    char *CThostFtdcExchangeQuoteField_ClientID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_ClientID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    char *CThostFtdcExchangeQuoteField_reserve1 = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_reserve1_length = 0;

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    char *CThostFtdcExchangeQuoteField_TraderID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_TraderID_length = 0;

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    int CThostFtdcExchangeQuoteField_InstallID = 0;

    /// 报价提示序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeQuoteField_NotifySequence = 0;

    /// 报价提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    char CThostFtdcExchangeQuoteField_OrderSubmitStatus = 0;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeQuoteField_TradingDay = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_TradingDay_length = 0;

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    int CThostFtdcExchangeQuoteField_SettlementID = 0;

    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeQuoteField_QuoteSysID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_QuoteSysID_length = 0;

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    char *CThostFtdcExchangeQuoteField_InsertDate = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_InsertDate_length = 0;

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeQuoteField_InsertTime = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_InsertTime_length = 0;

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    char *CThostFtdcExchangeQuoteField_CancelTime = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_CancelTime_length = 0;

    /// 报价状态
    /// typedef char TThostFtdcOrderStatusType
    char CThostFtdcExchangeQuoteField_QuoteStatus = 0;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    char *CThostFtdcExchangeQuoteField_ClearingPartID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_ClearingPartID_length = 0;

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    int CThostFtdcExchangeQuoteField_SequenceNo = 0;

    /// 卖方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeQuoteField_AskOrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_AskOrderSysID_length = 0;

    /// 买方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeQuoteField_BidOrderSysID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_BidOrderSysID_length = 0;

    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    char *CThostFtdcExchangeQuoteField_ForQuoteSysID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_ForQuoteSysID_length = 0;

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    char *CThostFtdcExchangeQuoteField_BranchID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_BranchID_length = 0;

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    char *CThostFtdcExchangeQuoteField_reserve2 = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_reserve2_length = 0;

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    char *CThostFtdcExchangeQuoteField_MacAddress = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_MacAddress_length = 0;

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    char *CThostFtdcExchangeQuoteField_ExchangeInstID = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_ExchangeInstID_length = 0;

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    char *CThostFtdcExchangeQuoteField_IPAddress = NULL;
    Py_ssize_t CThostFtdcExchangeQuoteField_IPAddress_length = 0;

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    char CThostFtdcExchangeQuoteField_TimeCondition = 0;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "|ddiiiy#ccccy#y#y#y#y#y#iicy#iy#y#y#y#cy#iy#y#y#y#y#y#y#y#c", (char **)kwlist
        , &CThostFtdcExchangeQuoteField_AskPrice
        , &CThostFtdcExchangeQuoteField_BidPrice
        , &CThostFtdcExchangeQuoteField_AskVolume
        , &CThostFtdcExchangeQuoteField_BidVolume
        , &CThostFtdcExchangeQuoteField_RequestID
        , &CThostFtdcExchangeQuoteField_BusinessUnit, &CThostFtdcExchangeQuoteField_BusinessUnit_length
        , &CThostFtdcExchangeQuoteField_AskOffsetFlag
        , &CThostFtdcExchangeQuoteField_BidOffsetFlag
        , &CThostFtdcExchangeQuoteField_AskHedgeFlag
        , &CThostFtdcExchangeQuoteField_BidHedgeFlag
        , &CThostFtdcExchangeQuoteField_QuoteLocalID, &CThostFtdcExchangeQuoteField_QuoteLocalID_length
        , &CThostFtdcExchangeQuoteField_ExchangeID, &CThostFtdcExchangeQuoteField_ExchangeID_length
        , &CThostFtdcExchangeQuoteField_ParticipantID, &CThostFtdcExchangeQuoteField_ParticipantID_length
        , &CThostFtdcExchangeQuoteField_ClientID, &CThostFtdcExchangeQuoteField_ClientID_length
        , &CThostFtdcExchangeQuoteField_reserve1, &CThostFtdcExchangeQuoteField_reserve1_length
        , &CThostFtdcExchangeQuoteField_TraderID, &CThostFtdcExchangeQuoteField_TraderID_length
        , &CThostFtdcExchangeQuoteField_InstallID
        , &CThostFtdcExchangeQuoteField_NotifySequence
        , &CThostFtdcExchangeQuoteField_OrderSubmitStatus
        , &CThostFtdcExchangeQuoteField_TradingDay, &CThostFtdcExchangeQuoteField_TradingDay_length
        , &CThostFtdcExchangeQuoteField_SettlementID
        , &CThostFtdcExchangeQuoteField_QuoteSysID, &CThostFtdcExchangeQuoteField_QuoteSysID_length
        , &CThostFtdcExchangeQuoteField_InsertDate, &CThostFtdcExchangeQuoteField_InsertDate_length
        , &CThostFtdcExchangeQuoteField_InsertTime, &CThostFtdcExchangeQuoteField_InsertTime_length
        , &CThostFtdcExchangeQuoteField_CancelTime, &CThostFtdcExchangeQuoteField_CancelTime_length
        , &CThostFtdcExchangeQuoteField_QuoteStatus
        , &CThostFtdcExchangeQuoteField_ClearingPartID, &CThostFtdcExchangeQuoteField_ClearingPartID_length
        , &CThostFtdcExchangeQuoteField_SequenceNo
        , &CThostFtdcExchangeQuoteField_AskOrderSysID, &CThostFtdcExchangeQuoteField_AskOrderSysID_length
        , &CThostFtdcExchangeQuoteField_BidOrderSysID, &CThostFtdcExchangeQuoteField_BidOrderSysID_length
        , &CThostFtdcExchangeQuoteField_ForQuoteSysID, &CThostFtdcExchangeQuoteField_ForQuoteSysID_length
        , &CThostFtdcExchangeQuoteField_BranchID, &CThostFtdcExchangeQuoteField_BranchID_length
        , &CThostFtdcExchangeQuoteField_reserve2, &CThostFtdcExchangeQuoteField_reserve2_length
        , &CThostFtdcExchangeQuoteField_MacAddress, &CThostFtdcExchangeQuoteField_MacAddress_length
        , &CThostFtdcExchangeQuoteField_ExchangeInstID, &CThostFtdcExchangeQuoteField_ExchangeInstID_length
        , &CThostFtdcExchangeQuoteField_IPAddress, &CThostFtdcExchangeQuoteField_IPAddress_length
        , &CThostFtdcExchangeQuoteField_TimeCondition
    )) {
        return -1;
    }

    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);


    /// 卖价格
    /// typedef double TThostFtdcPriceType
    data->AskPrice = CThostFtdcExchangeQuoteField_AskPrice;

    /// 买价格
    /// typedef double TThostFtdcPriceType
    data->BidPrice = CThostFtdcExchangeQuoteField_BidPrice;

    /// 卖数量
    /// typedef int TThostFtdcVolumeType
    data->AskVolume = CThostFtdcExchangeQuoteField_AskVolume;

    /// 买数量
    /// typedef int TThostFtdcVolumeType
    data->BidVolume = CThostFtdcExchangeQuoteField_BidVolume;

    /// 请求编号
    /// typedef int TThostFtdcRequestIDType
    data->RequestID = CThostFtdcExchangeQuoteField_RequestID;

    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    if( CThostFtdcExchangeQuoteField_BusinessUnit != NULL ) {
        if(CThostFtdcExchangeQuoteField_BusinessUnit_length >= (Py_ssize_t)sizeof(data->BusinessUnit)) {
            PyErr_Format(PyExc_ValueError, "BusinessUnit too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteField_BusinessUnit_length);
            return -1;
        }
        // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
        // memcpy(data->BusinessUnit, CThostFtdcExchangeQuoteField_BusinessUnit, CThostFtdcExchangeQuoteField_BusinessUnit_length);
        strncpy(data->BusinessUnit, CThostFtdcExchangeQuoteField_BusinessUnit, sizeof(data->BusinessUnit));
        CThostFtdcExchangeQuoteField_BusinessUnit = NULL;
    }

    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->AskOffsetFlag = CThostFtdcExchangeQuoteField_AskOffsetFlag;

    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    data->BidOffsetFlag = CThostFtdcExchangeQuoteField_BidOffsetFlag;

    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->AskHedgeFlag = CThostFtdcExchangeQuoteField_AskHedgeFlag;

    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    data->BidHedgeFlag = CThostFtdcExchangeQuoteField_BidHedgeFlag;

    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    if( CThostFtdcExchangeQuoteField_QuoteLocalID != NULL ) {
        if(CThostFtdcExchangeQuoteField_QuoteLocalID_length >= (Py_ssize_t)sizeof(data->QuoteLocalID)) {
            PyErr_Format(PyExc_ValueError, "QuoteLocalID too long: length=%zd (max allowed is 12)", CThostFtdcExchangeQuoteField_QuoteLocalID_length);
            return -1;
        }
        // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
        // memcpy(data->QuoteLocalID, CThostFtdcExchangeQuoteField_QuoteLocalID, CThostFtdcExchangeQuoteField_QuoteLocalID_length);
        strncpy(data->QuoteLocalID, CThostFtdcExchangeQuoteField_QuoteLocalID, sizeof(data->QuoteLocalID));
        CThostFtdcExchangeQuoteField_QuoteLocalID = NULL;
    }

    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    if( CThostFtdcExchangeQuoteField_ExchangeID != NULL ) {
        if(CThostFtdcExchangeQuoteField_ExchangeID_length >= (Py_ssize_t)sizeof(data->ExchangeID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteField_ExchangeID_length);
            return -1;
        }
        // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
        // memcpy(data->ExchangeID, CThostFtdcExchangeQuoteField_ExchangeID, CThostFtdcExchangeQuoteField_ExchangeID_length);
        strncpy(data->ExchangeID, CThostFtdcExchangeQuoteField_ExchangeID, sizeof(data->ExchangeID));
        CThostFtdcExchangeQuoteField_ExchangeID = NULL;
    }

    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeQuoteField_ParticipantID != NULL ) {
        if(CThostFtdcExchangeQuoteField_ParticipantID_length >= (Py_ssize_t)sizeof(data->ParticipantID)) {
            PyErr_Format(PyExc_ValueError, "ParticipantID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeQuoteField_ParticipantID_length);
            return -1;
        }
        // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
        // memcpy(data->ParticipantID, CThostFtdcExchangeQuoteField_ParticipantID, CThostFtdcExchangeQuoteField_ParticipantID_length);
        strncpy(data->ParticipantID, CThostFtdcExchangeQuoteField_ParticipantID, sizeof(data->ParticipantID));
        CThostFtdcExchangeQuoteField_ParticipantID = NULL;
    }

    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    if( CThostFtdcExchangeQuoteField_ClientID != NULL ) {
        if(CThostFtdcExchangeQuoteField_ClientID_length >= (Py_ssize_t)sizeof(data->ClientID)) {
            PyErr_Format(PyExc_ValueError, "ClientID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeQuoteField_ClientID_length);
            return -1;
        }
        // memset(data->ClientID, 0, sizeof(data->ClientID));
        // memcpy(data->ClientID, CThostFtdcExchangeQuoteField_ClientID, CThostFtdcExchangeQuoteField_ClientID_length);
        strncpy(data->ClientID, CThostFtdcExchangeQuoteField_ClientID, sizeof(data->ClientID));
        CThostFtdcExchangeQuoteField_ClientID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    if( CThostFtdcExchangeQuoteField_reserve1 != NULL ) {
        if(CThostFtdcExchangeQuoteField_reserve1_length >= (Py_ssize_t)sizeof(data->reserve1)) {
            PyErr_Format(PyExc_ValueError, "reserve1 too long: length=%zd (max allowed is 30)", CThostFtdcExchangeQuoteField_reserve1_length);
            return -1;
        }
        // memset(data->reserve1, 0, sizeof(data->reserve1));
        // memcpy(data->reserve1, CThostFtdcExchangeQuoteField_reserve1, CThostFtdcExchangeQuoteField_reserve1_length);
        strncpy(data->reserve1, CThostFtdcExchangeQuoteField_reserve1, sizeof(data->reserve1));
        CThostFtdcExchangeQuoteField_reserve1 = NULL;
    }

    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    if( CThostFtdcExchangeQuoteField_TraderID != NULL ) {
        if(CThostFtdcExchangeQuoteField_TraderID_length >= (Py_ssize_t)sizeof(data->TraderID)) {
            PyErr_Format(PyExc_ValueError, "TraderID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteField_TraderID_length);
            return -1;
        }
        // memset(data->TraderID, 0, sizeof(data->TraderID));
        // memcpy(data->TraderID, CThostFtdcExchangeQuoteField_TraderID, CThostFtdcExchangeQuoteField_TraderID_length);
        strncpy(data->TraderID, CThostFtdcExchangeQuoteField_TraderID, sizeof(data->TraderID));
        CThostFtdcExchangeQuoteField_TraderID = NULL;
    }

    /// 安装编号
    /// typedef int TThostFtdcInstallIDType
    data->InstallID = CThostFtdcExchangeQuoteField_InstallID;

    /// 报价提示序号
    /// typedef int TThostFtdcSequenceNoType
    data->NotifySequence = CThostFtdcExchangeQuoteField_NotifySequence;

    /// 报价提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    data->OrderSubmitStatus = CThostFtdcExchangeQuoteField_OrderSubmitStatus;

    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeQuoteField_TradingDay != NULL ) {
        if(CThostFtdcExchangeQuoteField_TradingDay_length >= (Py_ssize_t)sizeof(data->TradingDay)) {
            PyErr_Format(PyExc_ValueError, "TradingDay too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteField_TradingDay_length);
            return -1;
        }
        // memset(data->TradingDay, 0, sizeof(data->TradingDay));
        // memcpy(data->TradingDay, CThostFtdcExchangeQuoteField_TradingDay, CThostFtdcExchangeQuoteField_TradingDay_length);
        strncpy(data->TradingDay, CThostFtdcExchangeQuoteField_TradingDay, sizeof(data->TradingDay));
        CThostFtdcExchangeQuoteField_TradingDay = NULL;
    }

    /// 结算编号
    /// typedef int TThostFtdcSettlementIDType
    data->SettlementID = CThostFtdcExchangeQuoteField_SettlementID;

    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeQuoteField_QuoteSysID != NULL ) {
        if(CThostFtdcExchangeQuoteField_QuoteSysID_length >= (Py_ssize_t)sizeof(data->QuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "QuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteField_QuoteSysID_length);
            return -1;
        }
        // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
        // memcpy(data->QuoteSysID, CThostFtdcExchangeQuoteField_QuoteSysID, CThostFtdcExchangeQuoteField_QuoteSysID_length);
        strncpy(data->QuoteSysID, CThostFtdcExchangeQuoteField_QuoteSysID, sizeof(data->QuoteSysID));
        CThostFtdcExchangeQuoteField_QuoteSysID = NULL;
    }

    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    if( CThostFtdcExchangeQuoteField_InsertDate != NULL ) {
        if(CThostFtdcExchangeQuoteField_InsertDate_length >= (Py_ssize_t)sizeof(data->InsertDate)) {
            PyErr_Format(PyExc_ValueError, "InsertDate too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteField_InsertDate_length);
            return -1;
        }
        // memset(data->InsertDate, 0, sizeof(data->InsertDate));
        // memcpy(data->InsertDate, CThostFtdcExchangeQuoteField_InsertDate, CThostFtdcExchangeQuoteField_InsertDate_length);
        strncpy(data->InsertDate, CThostFtdcExchangeQuoteField_InsertDate, sizeof(data->InsertDate));
        CThostFtdcExchangeQuoteField_InsertDate = NULL;
    }

    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeQuoteField_InsertTime != NULL ) {
        if(CThostFtdcExchangeQuoteField_InsertTime_length >= (Py_ssize_t)sizeof(data->InsertTime)) {
            PyErr_Format(PyExc_ValueError, "InsertTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteField_InsertTime_length);
            return -1;
        }
        // memset(data->InsertTime, 0, sizeof(data->InsertTime));
        // memcpy(data->InsertTime, CThostFtdcExchangeQuoteField_InsertTime, CThostFtdcExchangeQuoteField_InsertTime_length);
        strncpy(data->InsertTime, CThostFtdcExchangeQuoteField_InsertTime, sizeof(data->InsertTime));
        CThostFtdcExchangeQuoteField_InsertTime = NULL;
    }

    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    if( CThostFtdcExchangeQuoteField_CancelTime != NULL ) {
        if(CThostFtdcExchangeQuoteField_CancelTime_length >= (Py_ssize_t)sizeof(data->CancelTime)) {
            PyErr_Format(PyExc_ValueError, "CancelTime too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteField_CancelTime_length);
            return -1;
        }
        // memset(data->CancelTime, 0, sizeof(data->CancelTime));
        // memcpy(data->CancelTime, CThostFtdcExchangeQuoteField_CancelTime, CThostFtdcExchangeQuoteField_CancelTime_length);
        strncpy(data->CancelTime, CThostFtdcExchangeQuoteField_CancelTime, sizeof(data->CancelTime));
        CThostFtdcExchangeQuoteField_CancelTime = NULL;
    }

    /// 报价状态
    /// typedef char TThostFtdcOrderStatusType
    data->QuoteStatus = CThostFtdcExchangeQuoteField_QuoteStatus;

    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    if( CThostFtdcExchangeQuoteField_ClearingPartID != NULL ) {
        if(CThostFtdcExchangeQuoteField_ClearingPartID_length >= (Py_ssize_t)sizeof(data->ClearingPartID)) {
            PyErr_Format(PyExc_ValueError, "ClearingPartID too long: length=%zd (max allowed is 10)", CThostFtdcExchangeQuoteField_ClearingPartID_length);
            return -1;
        }
        // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
        // memcpy(data->ClearingPartID, CThostFtdcExchangeQuoteField_ClearingPartID, CThostFtdcExchangeQuoteField_ClearingPartID_length);
        strncpy(data->ClearingPartID, CThostFtdcExchangeQuoteField_ClearingPartID, sizeof(data->ClearingPartID));
        CThostFtdcExchangeQuoteField_ClearingPartID = NULL;
    }

    /// 序号
    /// typedef int TThostFtdcSequenceNoType
    data->SequenceNo = CThostFtdcExchangeQuoteField_SequenceNo;

    /// 卖方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeQuoteField_AskOrderSysID != NULL ) {
        if(CThostFtdcExchangeQuoteField_AskOrderSysID_length >= (Py_ssize_t)sizeof(data->AskOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "AskOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteField_AskOrderSysID_length);
            return -1;
        }
        // memset(data->AskOrderSysID, 0, sizeof(data->AskOrderSysID));
        // memcpy(data->AskOrderSysID, CThostFtdcExchangeQuoteField_AskOrderSysID, CThostFtdcExchangeQuoteField_AskOrderSysID_length);
        strncpy(data->AskOrderSysID, CThostFtdcExchangeQuoteField_AskOrderSysID, sizeof(data->AskOrderSysID));
        CThostFtdcExchangeQuoteField_AskOrderSysID = NULL;
    }

    /// 买方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeQuoteField_BidOrderSysID != NULL ) {
        if(CThostFtdcExchangeQuoteField_BidOrderSysID_length >= (Py_ssize_t)sizeof(data->BidOrderSysID)) {
            PyErr_Format(PyExc_ValueError, "BidOrderSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteField_BidOrderSysID_length);
            return -1;
        }
        // memset(data->BidOrderSysID, 0, sizeof(data->BidOrderSysID));
        // memcpy(data->BidOrderSysID, CThostFtdcExchangeQuoteField_BidOrderSysID, CThostFtdcExchangeQuoteField_BidOrderSysID_length);
        strncpy(data->BidOrderSysID, CThostFtdcExchangeQuoteField_BidOrderSysID, sizeof(data->BidOrderSysID));
        CThostFtdcExchangeQuoteField_BidOrderSysID = NULL;
    }

    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    if( CThostFtdcExchangeQuoteField_ForQuoteSysID != NULL ) {
        if(CThostFtdcExchangeQuoteField_ForQuoteSysID_length >= (Py_ssize_t)sizeof(data->ForQuoteSysID)) {
            PyErr_Format(PyExc_ValueError, "ForQuoteSysID too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteField_ForQuoteSysID_length);
            return -1;
        }
        // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
        // memcpy(data->ForQuoteSysID, CThostFtdcExchangeQuoteField_ForQuoteSysID, CThostFtdcExchangeQuoteField_ForQuoteSysID_length);
        strncpy(data->ForQuoteSysID, CThostFtdcExchangeQuoteField_ForQuoteSysID, sizeof(data->ForQuoteSysID));
        CThostFtdcExchangeQuoteField_ForQuoteSysID = NULL;
    }

    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    if( CThostFtdcExchangeQuoteField_BranchID != NULL ) {
        if(CThostFtdcExchangeQuoteField_BranchID_length >= (Py_ssize_t)sizeof(data->BranchID)) {
            PyErr_Format(PyExc_ValueError, "BranchID too long: length=%zd (max allowed is 8)", CThostFtdcExchangeQuoteField_BranchID_length);
            return -1;
        }
        // memset(data->BranchID, 0, sizeof(data->BranchID));
        // memcpy(data->BranchID, CThostFtdcExchangeQuoteField_BranchID, CThostFtdcExchangeQuoteField_BranchID_length);
        strncpy(data->BranchID, CThostFtdcExchangeQuoteField_BranchID, sizeof(data->BranchID));
        CThostFtdcExchangeQuoteField_BranchID = NULL;
    }

    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    if( CThostFtdcExchangeQuoteField_reserve2 != NULL ) {
        if(CThostFtdcExchangeQuoteField_reserve2_length >= (Py_ssize_t)sizeof(data->reserve2)) {
            PyErr_Format(PyExc_ValueError, "reserve2 too long: length=%zd (max allowed is 15)", CThostFtdcExchangeQuoteField_reserve2_length);
            return -1;
        }
        // memset(data->reserve2, 0, sizeof(data->reserve2));
        // memcpy(data->reserve2, CThostFtdcExchangeQuoteField_reserve2, CThostFtdcExchangeQuoteField_reserve2_length);
        strncpy(data->reserve2, CThostFtdcExchangeQuoteField_reserve2, sizeof(data->reserve2));
        CThostFtdcExchangeQuoteField_reserve2 = NULL;
    }

    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    if( CThostFtdcExchangeQuoteField_MacAddress != NULL ) {
        if(CThostFtdcExchangeQuoteField_MacAddress_length >= (Py_ssize_t)sizeof(data->MacAddress)) {
            PyErr_Format(PyExc_ValueError, "MacAddress too long: length=%zd (max allowed is 20)", CThostFtdcExchangeQuoteField_MacAddress_length);
            return -1;
        }
        // memset(data->MacAddress, 0, sizeof(data->MacAddress));
        // memcpy(data->MacAddress, CThostFtdcExchangeQuoteField_MacAddress, CThostFtdcExchangeQuoteField_MacAddress_length);
        strncpy(data->MacAddress, CThostFtdcExchangeQuoteField_MacAddress, sizeof(data->MacAddress));
        CThostFtdcExchangeQuoteField_MacAddress = NULL;
    }

    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    if( CThostFtdcExchangeQuoteField_ExchangeInstID != NULL ) {
        if(CThostFtdcExchangeQuoteField_ExchangeInstID_length >= (Py_ssize_t)sizeof(data->ExchangeInstID)) {
            PyErr_Format(PyExc_ValueError, "ExchangeInstID too long: length=%zd (max allowed is 80)", CThostFtdcExchangeQuoteField_ExchangeInstID_length);
            return -1;
        }
        // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
        // memcpy(data->ExchangeInstID, CThostFtdcExchangeQuoteField_ExchangeInstID, CThostFtdcExchangeQuoteField_ExchangeInstID_length);
        strncpy(data->ExchangeInstID, CThostFtdcExchangeQuoteField_ExchangeInstID, sizeof(data->ExchangeInstID));
        CThostFtdcExchangeQuoteField_ExchangeInstID = NULL;
    }

    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    if( CThostFtdcExchangeQuoteField_IPAddress != NULL ) {
        if(CThostFtdcExchangeQuoteField_IPAddress_length >= (Py_ssize_t)sizeof(data->IPAddress)) {
            PyErr_Format(PyExc_ValueError, "IPAddress too long: length=%zd (max allowed is 32)", CThostFtdcExchangeQuoteField_IPAddress_length);
            return -1;
        }
        // memset(data->IPAddress, 0, sizeof(data->IPAddress));
        // memcpy(data->IPAddress, CThostFtdcExchangeQuoteField_IPAddress, CThostFtdcExchangeQuoteField_IPAddress_length);
        strncpy(data->IPAddress, CThostFtdcExchangeQuoteField_IPAddress, sizeof(data->IPAddress));
        CThostFtdcExchangeQuoteField_IPAddress = NULL;
    }

    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    data->TimeCondition = CThostFtdcExchangeQuoteField_TimeCondition;

    extra = NULL;
    data = NULL;

    return 0;
};


static PyObject *PyCThostFtdcExchangeQuoteFieldType_repr(PyObject *self) {

    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);

	PyObject *dict = Py_BuildValue("{s:d,s:d,s:i,s:i,s:i,s:y,s:c,s:c,s:c,s:c,s:y,s:y,s:y,s:y,s:y,s:y,s:i,s:i,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:c,s:y,s:i,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:y,s:c}"
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
        , "reserve1", data->reserve1//, (Py_ssize_t)sizeof(data->reserve1)
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
        , "ForQuoteSysID", data->ForQuoteSysID//, (Py_ssize_t)sizeof(data->ForQuoteSysID)
        , "BranchID", data->BranchID//, (Py_ssize_t)sizeof(data->BranchID)
        , "reserve2", data->reserve2//, (Py_ssize_t)sizeof(data->reserve2)
        , "MacAddress", data->MacAddress//, (Py_ssize_t)sizeof(data->MacAddress)
        , "ExchangeInstID", data->ExchangeInstID//, (Py_ssize_t)sizeof(data->ExchangeInstID)
        , "IPAddress", data->IPAddress//, (Py_ssize_t)sizeof(data->IPAddress)
        , "TimeCondition", data->TimeCondition
		);

    extra = NULL;
    data = NULL;

    if (!dict) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteField repr dict");
        return NULL;
    }

    PyObject *repr = PyObject_Repr(dict);
    Py_DECREF(dict);

    if (!repr) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to build CThostFtdcExchangeQuoteField repr");
        return NULL;
    }

    return repr;
}


/// 业务单元
/// typedef char TThostFtdcBusinessUnitType[21]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_BusinessUnit(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BusinessUnit, (Py_ssize_t)sizeof(data->BusinessUnit));
    return PyBytes_FromString(data->BusinessUnit);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_BusinessUnit(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BusinessUnit Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::BusinessUnit)) {
        PyErr_SetString(PyExc_ValueError, "BusinessUnit must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->BusinessUnit, 0, sizeof(data->BusinessUnit));
    // memcpy(data->BusinessUnit, buf, len);
    strncpy(data->BusinessUnit, buf, sizeof(data->BusinessUnit));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_AskOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AskOffsetFlag), 1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_AskOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskOffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::AskOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskOffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    data->AskOffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买开平标志
/// typedef char TThostFtdcOffsetFlagType
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_BidOffsetFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BidOffsetFlag), 1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_BidOffsetFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidOffsetFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::BidOffsetFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidOffsetFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    data->BidOffsetFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_AskHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->AskHedgeFlag), 1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_AskHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskHedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::AskHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "AskHedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    data->AskHedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买投机套保标志
/// typedef char TThostFtdcHedgeFlagType
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_BidHedgeFlag(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->BidHedgeFlag), 1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_BidHedgeFlag(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidHedgeFlag Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::BidHedgeFlag)) {
        PyErr_SetString(PyExc_ValueError, "BidHedgeFlag must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    data->BidHedgeFlag = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 本地报价编号
/// typedef char TThostFtdcOrderLocalIDType[13]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_QuoteLocalID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteLocalID, (Py_ssize_t)sizeof(data->QuoteLocalID));
    return PyBytes_FromString(data->QuoteLocalID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_QuoteLocalID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteLocalID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::QuoteLocalID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteLocalID must be less than 12 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->QuoteLocalID, 0, sizeof(data->QuoteLocalID));
    // memcpy(data->QuoteLocalID, buf, len);
    strncpy(data->QuoteLocalID, buf, sizeof(data->QuoteLocalID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所代码
/// typedef char TThostFtdcExchangeIDType[9]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_ExchangeID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeID, (Py_ssize_t)sizeof(data->ExchangeID));
    return PyBytes_FromString(data->ExchangeID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_ExchangeID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::ExchangeID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->ExchangeID, 0, sizeof(data->ExchangeID));
    // memcpy(data->ExchangeID, buf, len);
    strncpy(data->ExchangeID, buf, sizeof(data->ExchangeID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 会员代码
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_ParticipantID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ParticipantID, (Py_ssize_t)sizeof(data->ParticipantID));
    return PyBytes_FromString(data->ParticipantID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_ParticipantID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ParticipantID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::ParticipantID)) {
        PyErr_SetString(PyExc_ValueError, "ParticipantID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->ParticipantID, 0, sizeof(data->ParticipantID));
    // memcpy(data->ParticipantID, buf, len);
    strncpy(data->ParticipantID, buf, sizeof(data->ParticipantID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 客户代码
/// typedef char TThostFtdcClientIDType[11]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_ClientID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClientID, (Py_ssize_t)sizeof(data->ClientID));
    return PyBytes_FromString(data->ClientID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_ClientID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClientID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::ClientID)) {
        PyErr_SetString(PyExc_ValueError, "ClientID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->ClientID, 0, sizeof(data->ClientID));
    // memcpy(data->ClientID, buf, len);
    strncpy(data->ClientID, buf, sizeof(data->ClientID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldExchangeInstIDType[31]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_reserve1(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve1, (Py_ssize_t)sizeof(data->reserve1));
    return PyBytes_FromString(data->reserve1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_reserve1(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve1 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::reserve1)) {
        PyErr_SetString(PyExc_ValueError, "reserve1 must be less than 30 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->reserve1, 0, sizeof(data->reserve1));
    // memcpy(data->reserve1, buf, len);
    strncpy(data->reserve1, buf, sizeof(data->reserve1));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易所交易员代码
/// typedef char TThostFtdcTraderIDType[21]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_TraderID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TraderID, (Py_ssize_t)sizeof(data->TraderID));
    return PyBytes_FromString(data->TraderID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_TraderID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TraderID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::TraderID)) {
        PyErr_SetString(PyExc_ValueError, "TraderID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->TraderID, 0, sizeof(data->TraderID));
    // memcpy(data->TraderID, buf, len);
    strncpy(data->TraderID, buf, sizeof(data->TraderID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价提交状态
/// typedef char TThostFtdcOrderSubmitStatusType
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_OrderSubmitStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->OrderSubmitStatus), 1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_OrderSubmitStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "OrderSubmitStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::OrderSubmitStatus)) {
        PyErr_SetString(PyExc_ValueError, "OrderSubmitStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    data->OrderSubmitStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 交易日
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_TradingDay(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->TradingDay, (Py_ssize_t)sizeof(data->TradingDay));
    return PyBytes_FromString(data->TradingDay);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_TradingDay(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TradingDay Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::TradingDay)) {
        PyErr_SetString(PyExc_ValueError, "TradingDay must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->TradingDay, 0, sizeof(data->TradingDay));
    // memcpy(data->TradingDay, buf, len);
    strncpy(data->TradingDay, buf, sizeof(data->TradingDay));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_QuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->QuoteSysID, (Py_ssize_t)sizeof(data->QuoteSysID));
    return PyBytes_FromString(data->QuoteSysID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_QuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::QuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "QuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->QuoteSysID, 0, sizeof(data->QuoteSysID));
    // memcpy(data->QuoteSysID, buf, len);
    strncpy(data->QuoteSysID, buf, sizeof(data->QuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报单日期
/// typedef char TThostFtdcDateType[9]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_InsertDate(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertDate, (Py_ssize_t)sizeof(data->InsertDate));
    return PyBytes_FromString(data->InsertDate);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_InsertDate(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertDate Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::InsertDate)) {
        PyErr_SetString(PyExc_ValueError, "InsertDate must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->InsertDate, 0, sizeof(data->InsertDate));
    // memcpy(data->InsertDate, buf, len);
    strncpy(data->InsertDate, buf, sizeof(data->InsertDate));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 插入时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_InsertTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->InsertTime, (Py_ssize_t)sizeof(data->InsertTime));
    return PyBytes_FromString(data->InsertTime);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_InsertTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "InsertTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::InsertTime)) {
        PyErr_SetString(PyExc_ValueError, "InsertTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->InsertTime, 0, sizeof(data->InsertTime));
    // memcpy(data->InsertTime, buf, len);
    strncpy(data->InsertTime, buf, sizeof(data->InsertTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 撤销时间
/// typedef char TThostFtdcTimeType[9]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_CancelTime(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->CancelTime, (Py_ssize_t)sizeof(data->CancelTime));
    return PyBytes_FromString(data->CancelTime);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_CancelTime(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "CancelTime Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::CancelTime)) {
        PyErr_SetString(PyExc_ValueError, "CancelTime must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->CancelTime, 0, sizeof(data->CancelTime));
    // memcpy(data->CancelTime, buf, len);
    strncpy(data->CancelTime, buf, sizeof(data->CancelTime));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 报价状态
/// typedef char TThostFtdcOrderStatusType
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_QuoteStatus(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->QuoteStatus), 1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_QuoteStatus(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "QuoteStatus Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::QuoteStatus)) {
        PyErr_SetString(PyExc_ValueError, "QuoteStatus must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    data->QuoteStatus = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

/// 结算会员编号
/// typedef char TThostFtdcParticipantIDType[11]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_ClearingPartID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ClearingPartID, (Py_ssize_t)sizeof(data->ClearingPartID));
    return PyBytes_FromString(data->ClearingPartID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_ClearingPartID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ClearingPartID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::ClearingPartID)) {
        PyErr_SetString(PyExc_ValueError, "ClearingPartID must be less than 10 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->ClearingPartID, 0, sizeof(data->ClearingPartID));
    // memcpy(data->ClearingPartID, buf, len);
    strncpy(data->ClearingPartID, buf, sizeof(data->ClearingPartID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 卖方报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_AskOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->AskOrderSysID, (Py_ssize_t)sizeof(data->AskOrderSysID));
    return PyBytes_FromString(data->AskOrderSysID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_AskOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "AskOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::AskOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "AskOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->AskOrderSysID, 0, sizeof(data->AskOrderSysID));
    // memcpy(data->AskOrderSysID, buf, len);
    strncpy(data->AskOrderSysID, buf, sizeof(data->AskOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 买方报单编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_BidOrderSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BidOrderSysID, (Py_ssize_t)sizeof(data->BidOrderSysID));
    return PyBytes_FromString(data->BidOrderSysID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_BidOrderSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BidOrderSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::BidOrderSysID)) {
        PyErr_SetString(PyExc_ValueError, "BidOrderSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->BidOrderSysID, 0, sizeof(data->BidOrderSysID));
    // memcpy(data->BidOrderSysID, buf, len);
    strncpy(data->BidOrderSysID, buf, sizeof(data->BidOrderSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 应价编号
/// typedef char TThostFtdcOrderSysIDType[21]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_ForQuoteSysID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ForQuoteSysID, (Py_ssize_t)sizeof(data->ForQuoteSysID));
    return PyBytes_FromString(data->ForQuoteSysID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_ForQuoteSysID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ForQuoteSysID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::ForQuoteSysID)) {
        PyErr_SetString(PyExc_ValueError, "ForQuoteSysID must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->ForQuoteSysID, 0, sizeof(data->ForQuoteSysID));
    // memcpy(data->ForQuoteSysID, buf, len);
    strncpy(data->ForQuoteSysID, buf, sizeof(data->ForQuoteSysID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 营业部编号
/// typedef char TThostFtdcBranchIDType[9]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_BranchID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->BranchID, (Py_ssize_t)sizeof(data->BranchID));
    return PyBytes_FromString(data->BranchID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_BranchID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "BranchID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::BranchID)) {
        PyErr_SetString(PyExc_ValueError, "BranchID must be less than 8 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->BranchID, 0, sizeof(data->BranchID));
    // memcpy(data->BranchID, buf, len);
    strncpy(data->BranchID, buf, sizeof(data->BranchID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 保留的无效字段
/// typedef char TThostFtdcOldIPAddressType[16]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_reserve2(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->reserve2, (Py_ssize_t)sizeof(data->reserve2));
    return PyBytes_FromString(data->reserve2);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_reserve2(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "reserve2 Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::reserve2)) {
        PyErr_SetString(PyExc_ValueError, "reserve2 must be less than 15 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->reserve2, 0, sizeof(data->reserve2));
    // memcpy(data->reserve2, buf, len);
    strncpy(data->reserve2, buf, sizeof(data->reserve2));
    extra = NULL;
    data = NULL;
    return 0;
}

/// Mac地址
/// typedef char TThostFtdcMacAddressType[21]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_MacAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->MacAddress, (Py_ssize_t)sizeof(data->MacAddress));
    return PyBytes_FromString(data->MacAddress);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_MacAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "MacAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::MacAddress)) {
        PyErr_SetString(PyExc_ValueError, "MacAddress must be less than 20 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->MacAddress, 0, sizeof(data->MacAddress));
    // memcpy(data->MacAddress, buf, len);
    strncpy(data->MacAddress, buf, sizeof(data->MacAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 合约在交易所的代码
/// typedef char TThostFtdcExchangeInstIDType[81]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_ExchangeInstID(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->ExchangeInstID, (Py_ssize_t)sizeof(data->ExchangeInstID));
    return PyBytes_FromString(data->ExchangeInstID);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_ExchangeInstID(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "ExchangeInstID Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::ExchangeInstID)) {
        PyErr_SetString(PyExc_ValueError, "ExchangeInstID must be less than 80 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->ExchangeInstID, 0, sizeof(data->ExchangeInstID));
    // memcpy(data->ExchangeInstID, buf, len);
    strncpy(data->ExchangeInstID, buf, sizeof(data->ExchangeInstID));
    extra = NULL;
    data = NULL;
    return 0;
}

/// IP地址
/// typedef char TThostFtdcIPAddressType[33]
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_IPAddress(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // return PyBytes_FromStringAndSize(data->IPAddress, (Py_ssize_t)sizeof(data->IPAddress));
    return PyBytes_FromString(data->IPAddress);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_IPAddress(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "IPAddress Expected bytes");
        return -1;
    }
    Py_ssize_t len = PyBytes_Size(value);
    if (len >= (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::IPAddress)) {
        PyErr_SetString(PyExc_ValueError, "IPAddress must be less than 32 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    // memset(data->IPAddress, 0, sizeof(data->IPAddress));
    // memcpy(data->IPAddress, buf, len);
    strncpy(data->IPAddress, buf, sizeof(data->IPAddress));
    extra = NULL;
    data = NULL;
    return 0;
}

/// 有效期类型
/// typedef char TThostFtdcTimeConditionType
static PyObject *PyCThostFtdcExchangeQuoteFieldType_get_TimeCondition(PyObject *self, void *closure) {
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    return PyBytes_FromStringAndSize(&(data->TimeCondition), 1);
}

static int PyCThostFtdcExchangeQuoteFieldType_set_TimeCondition(PyObject *self, PyObject* value, void *closure) {
    if (!PyBytes_Check(value)) {
        PyErr_SetString(PyExc_TypeError, "TimeCondition Expected bytes");
        return -1;
    };
    Py_ssize_t len = PyBytes_Size(value);
    if (len > (Py_ssize_t)sizeof(CThostFtdcExchangeQuoteField::TimeCondition)) {
        PyErr_SetString(PyExc_ValueError, "TimeCondition must be equal 1 bytes");
        return -1;
    }
    char *buf = PyBytes_AsString(value);
    PyCThostFtdcExchangeQuoteFieldData *extra = PyCTP_GetTypeData<PyCThostFtdcExchangeQuoteFieldData>(self);
    CThostFtdcExchangeQuoteField *data = &(extra->data);
    data->TimeCondition = *buf;
    extra = NULL;
    data = NULL;
    return 0;
}

static PyMemberDef PyCThostFtdcExchangeQuoteFieldType_members[] = {
    /// 卖价格
    /// typedef double TThostFtdcPriceType
    {
        .name = "AskPrice",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .type = T_DOUBLE,
#else
        .type = Py_T_DOUBLE,
#endif // PY_VERSION_HEX
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.AskPrice),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.BidPrice),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.AskVolume),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.BidVolume),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.RequestID),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.InstallID),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.NotifySequence),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.SettlementID),
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
        .offset = offsetof(PyCThostFtdcExchangeQuoteFieldData, data.SequenceNo),
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
        .flags = 0,
#else
        .flags = Py_RELATIVE_OFFSET,
#endif // PY_VERSION_HEX
        .doc = PyDoc_STR("序号")
    },
    {NULL}  /* Sentinel */
};

static PyGetSetDef PyCThostFtdcExchangeQuoteFieldType_getsets[] = {
    /// 业务单元
    /// typedef char TThostFtdcBusinessUnitType[21]
    {
    .name = "BusinessUnit",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_BusinessUnit,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_BusinessUnit,
    .doc = PyDoc_STR("业务单元"),
    },
    /// 卖开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "AskOffsetFlag",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_AskOffsetFlag,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_AskOffsetFlag,
    .doc = PyDoc_STR("卖开平标志"),
    },
    /// 买开平标志
    /// typedef char TThostFtdcOffsetFlagType
    {
    .name = "BidOffsetFlag",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_BidOffsetFlag,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_BidOffsetFlag,
    .doc = PyDoc_STR("买开平标志"),
    },
    /// 卖投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "AskHedgeFlag",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_AskHedgeFlag,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_AskHedgeFlag,
    .doc = PyDoc_STR("卖投机套保标志"),
    },
    /// 买投机套保标志
    /// typedef char TThostFtdcHedgeFlagType
    {
    .name = "BidHedgeFlag",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_BidHedgeFlag,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_BidHedgeFlag,
    .doc = PyDoc_STR("买投机套保标志"),
    },
    /// 本地报价编号
    /// typedef char TThostFtdcOrderLocalIDType[13]
    {
    .name = "QuoteLocalID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_QuoteLocalID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_QuoteLocalID,
    .doc = PyDoc_STR("本地报价编号"),
    },
    /// 交易所代码
    /// typedef char TThostFtdcExchangeIDType[9]
    {
    .name = "ExchangeID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_ExchangeID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_ExchangeID,
    .doc = PyDoc_STR("交易所代码"),
    },
    /// 会员代码
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ParticipantID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_ParticipantID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_ParticipantID,
    .doc = PyDoc_STR("会员代码"),
    },
    /// 客户代码
    /// typedef char TThostFtdcClientIDType[11]
    {
    .name = "ClientID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_ClientID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_ClientID,
    .doc = PyDoc_STR("客户代码"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldExchangeInstIDType[31]
    {
    .name = "reserve1",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_reserve1,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_reserve1,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// 交易所交易员代码
    /// typedef char TThostFtdcTraderIDType[21]
    {
    .name = "TraderID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_TraderID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_TraderID,
    .doc = PyDoc_STR("交易所交易员代码"),
    },
    /// 报价提交状态
    /// typedef char TThostFtdcOrderSubmitStatusType
    {
    .name = "OrderSubmitStatus",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_OrderSubmitStatus,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_OrderSubmitStatus,
    .doc = PyDoc_STR("报价提交状态"),
    },
    /// 交易日
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "TradingDay",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_TradingDay,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_TradingDay,
    .doc = PyDoc_STR("交易日"),
    },
    /// 报价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "QuoteSysID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_QuoteSysID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_QuoteSysID,
    .doc = PyDoc_STR("报价编号"),
    },
    /// 报单日期
    /// typedef char TThostFtdcDateType[9]
    {
    .name = "InsertDate",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_InsertDate,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_InsertDate,
    .doc = PyDoc_STR("报单日期"),
    },
    /// 插入时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "InsertTime",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_InsertTime,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_InsertTime,
    .doc = PyDoc_STR("插入时间"),
    },
    /// 撤销时间
    /// typedef char TThostFtdcTimeType[9]
    {
    .name = "CancelTime",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_CancelTime,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_CancelTime,
    .doc = PyDoc_STR("撤销时间"),
    },
    /// 报价状态
    /// typedef char TThostFtdcOrderStatusType
    {
    .name = "QuoteStatus",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_QuoteStatus,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_QuoteStatus,
    .doc = PyDoc_STR("报价状态"),
    },
    /// 结算会员编号
    /// typedef char TThostFtdcParticipantIDType[11]
    {
    .name = "ClearingPartID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_ClearingPartID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_ClearingPartID,
    .doc = PyDoc_STR("结算会员编号"),
    },
    /// 卖方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "AskOrderSysID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_AskOrderSysID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_AskOrderSysID,
    .doc = PyDoc_STR("卖方报单编号"),
    },
    /// 买方报单编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "BidOrderSysID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_BidOrderSysID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_BidOrderSysID,
    .doc = PyDoc_STR("买方报单编号"),
    },
    /// 应价编号
    /// typedef char TThostFtdcOrderSysIDType[21]
    {
    .name = "ForQuoteSysID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_ForQuoteSysID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_ForQuoteSysID,
    .doc = PyDoc_STR("应价编号"),
    },
    /// 营业部编号
    /// typedef char TThostFtdcBranchIDType[9]
    {
    .name = "BranchID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_BranchID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_BranchID,
    .doc = PyDoc_STR("营业部编号"),
    },
    /// 保留的无效字段
    /// typedef char TThostFtdcOldIPAddressType[16]
    {
    .name = "reserve2",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_reserve2,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_reserve2,
    .doc = PyDoc_STR("保留的无效字段"),
    },
    /// Mac地址
    /// typedef char TThostFtdcMacAddressType[21]
    {
    .name = "MacAddress",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_MacAddress,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_MacAddress,
    .doc = PyDoc_STR("Mac地址"),
    },
    /// 合约在交易所的代码
    /// typedef char TThostFtdcExchangeInstIDType[81]
    {
    .name = "ExchangeInstID",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_ExchangeInstID,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_ExchangeInstID,
    .doc = PyDoc_STR("合约在交易所的代码"),
    },
    /// IP地址
    /// typedef char TThostFtdcIPAddressType[33]
    {
    .name = "IPAddress",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_IPAddress,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_IPAddress,
    .doc = PyDoc_STR("IP地址"),
    },
    /// 有效期类型
    /// typedef char TThostFtdcTimeConditionType
    {
    .name = "TimeCondition",
    .get = PyCThostFtdcExchangeQuoteFieldType_get_TimeCondition,
    .set = PyCThostFtdcExchangeQuoteFieldType_set_TimeCondition,
    .doc = PyDoc_STR("有效期类型"),
    },
    {NULL}  /* Sentinel */
};

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
static PySlot PyCThostFtdcExchangeQuoteFieldType_slots[] = {
    PySlot_STATIC_DATA(Py_tp_name, (char *)"PyCTP.CThostFtdcExchangeQuoteField"),
    PySlot_STATIC_DATA(Py_tp_doc, (char *)PyDoc_STR("交易所报价信息")),
    PySlot_STATIC_DATA(Py_tp_members, PyCThostFtdcExchangeQuoteFieldType_members),
    PySlot_STATIC_DATA(Py_tp_getset, PyCThostFtdcExchangeQuoteFieldType_getsets),
    PySlot_SIZE(Py_tp_extra_basicsize, sizeof(PyCThostFtdcExchangeQuoteFieldData)),
    PySlot_FUNC(Py_tp_init, PyCThostFtdcExchangeQuoteFieldType_init),
    PySlot_FUNC(Py_tp_repr, PyCThostFtdcExchangeQuoteFieldType_repr),
    PySlot_END
};
#else
static PyType_Slot PyCThostFtdcExchangeQuoteFieldType_slots_legacy[] = {
    {Py_tp_doc, (char *)PyDoc_STR("交易所报价信息")},
    {Py_tp_members, PyCThostFtdcExchangeQuoteFieldType_members},
    {Py_tp_getset, PyCThostFtdcExchangeQuoteFieldType_getsets},
    {Py_tp_init, (void *)PyCThostFtdcExchangeQuoteFieldType_init},
    {Py_tp_repr, (void *)PyCThostFtdcExchangeQuoteFieldType_repr},
    {0, NULL}
};
static PyType_Spec PyCThostFtdcExchangeQuoteFieldType_spec = {
    .name = "PyCTP.CThostFtdcExchangeQuoteField",
#if PY_VERSION_HEX < 0x030c0000  // Python 3.12
    .basicsize = (Py_ssize_t)sizeof(PyCThostFtdcExchangeQuoteFieldData),
#else
    .basicsize = -(Py_ssize_t)sizeof(PyCThostFtdcExchangeQuoteFieldData),
#endif // PY_VERSION_HEX
    .itemsize = 0,
    .flags = Py_TPFLAGS_DEFAULT,
    .slots = PyCThostFtdcExchangeQuoteFieldType_slots_legacy,
};
#endif

PyTypeObject *PyCThostFtdcExchangeQuoteFieldType = NULL;

int PyCTP_module_add_PyCThostFtdcExchangeQuoteFieldType_exec(PyObject *module) {

#if PY_VERSION_HEX >= 0x030f0000 // Python 3.15+
    PyObject *pytype = PyType_FromSlots(PyCThostFtdcExchangeQuoteFieldType_slots);
#else
    PyObject *pytype = PyType_FromSpec(&PyCThostFtdcExchangeQuoteFieldType_spec);
#endif // PY_VERSION_HEX >= 0x030f0000
    if (!pytype) return -1;

    PyCThostFtdcExchangeQuoteFieldType = (PyTypeObject *)pytype;

    if( PyModule_AddObject(module, "CThostFtdcExchangeQuoteField", pytype) < 0 ) {
        PyErr_SetString(PyExc_RuntimeError, "Failed to add CThostFtdcExchangeQuoteField to module");
        Py_DECREF(pytype);
        return -1;
    }

    return 0;
}